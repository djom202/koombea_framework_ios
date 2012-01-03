//
//  KBAutoForm.m
//  TrackTopia
//
//  Created by Oscar De Moya on 12/19/11.
//  Copyright (c) 2011 Koombea S.A.S. All rights reserved.
//

#import "KBAutoForm.h"


@implementation KBAutoForm

@synthesize root;

- (void)loadForm:(NSString *)jsonFile
{
    root = [[QRootElement alloc] initWithJSONFile:jsonFile];
    [self setRoot:root];
    QuickDialogTableView *quickformTableView = [[QuickDialogTableView alloc] initWithController:self];
    self.tableView = quickformTableView;
    self.tableView.bounces = YES;
    ((QuickDialogTableView *) self.tableView).styleProvider = self;
    
    backgroundView = [[UIImageView alloc] initWithImage:[UIImage imageNamed:[KBCore styleForKeyPath:DEFAULT_BG]]];
    backgroundView.contentMode = UIViewContentModeTop;
    self.tableView.backgroundView = backgroundView;
}

#pragma mark - Validations

- (NSArray *)validateForm
{
    NSMutableArray *errors = [[NSMutableArray alloc] init];
    for (QSection *section in root.sections) {
        for (QElement *element in section.elements) {
            NSDictionary *err = [self validateField:element];
            if (err) [errors addObject:err];
        }
    }
    return errors;
}

- (NSDictionary *)validateField:(QElement *)element
{
    NSMutableDictionary *error = nil;
    if (element.validate) {
        if ([element.validate isEqualToString:@"NotEmpty"]) {
            if ([element isKindOfClass:[QEntryElement class]]) {
                QEntryElement *elem = (QEntryElement *) element;
                if (elem.textValue == nil || [elem.textValue isEqualToString:@""]) {
                    error = [NSMutableDictionary dictionary];
                    [error setObject:elem.key forKey:@"key"];
                    [error setObject:elem.validate forKey:@"validate"];
                    if(elem.title) [error setObject:elem.title forKey:@"title"];
                    if(elem.textValue) [error setObject:elem.textValue forKey:@"value"];
                    
                }
            }
        }
    }
    return error;
}

- (void)setValue:(id)value forElementWithKey:(NSString *)key {
    for (QSection *section in root.sections) {
        for (QElement *element in section.elements) { 
            if ([element.key isEqualToString:key]) {
                if ([element isKindOfClass:[QEntryElement class]]) {
                    ((QEntryElement *) element).textValue = value;
                    [self.tableView reloadData];
                }
            } 
        }
    }
}

#pragma mark -

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - QuickDialogStyleProvider methods

- (void)cell:(UITableViewCell *)cell willAppearForElement:(QElement *)element atIndexPath:(NSIndexPath *)indexPath
{  
}

#pragma mark - View lifecycle

- (void)viewDidLoad
{
    [super viewDidLoad];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
