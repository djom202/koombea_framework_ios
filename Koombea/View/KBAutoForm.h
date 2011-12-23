//
//  KBAutoForm.h
//  TrackTopia
//
//  Created by Oscar De Moya on 12/19/11.
//  Copyright (c) 2011 Koombea S.A.S. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QuickDialog.h"

@interface KBAutoForm : QuickDialogController<QuickDialogStyleProvider> {
    QRootElement *root;
    UIImageView *backgroundView;
}

@property (nonatomic, strong) QRootElement *root;

- (void)loadForm:(NSString *)jsonFile;

@end