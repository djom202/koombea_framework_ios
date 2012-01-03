//
//  KBCoreConstants.h
//  TrackTopia
//
//  Created by Oscar De Moya on 11/29/11.
//  Copyright (c) 2011 Koombea S.A.S. All rights reserved.
//

#import <Foundation/Foundation.h>

/* Config File Names */
#define APP_SETTINGS @"app_settings"
#define APP_STYLES @"app_styles"
#define MODEL_SETTINGS @"models"
#define DEFAULT_MODEL_SETTINGS @"default_models"

/* Settings Plist Keys */
#define TW_CREDENTIALS @"TwitterCredentials"
#define TW_OAUTH_KEY @"OAuthKey"
#define TW_OAUTH_SECRET @"OAuthSecret"
#define FB_CREDENTIALS @"FacebookCredentials"
#define FB_APP_ID @"AppID"
#define FB_APP_SECRET @"AppSecret"
#define UA_CREDENTIALS @"UrbanAirshipCredentials"
#define UA_APP_KEY @"AppKey"
#define UA_APP_SECRET @"AppSecret"
#define S3_SETTINGS @"AmazonS3Settings"
#define S3_ACCESS_KEY @"AccessKey"
#define S3_SECRET_ACCESS_KEY @"SecretAccessKey"
#define S3_BUCKET @"Bucket"
#define S3_FILE_PREFIX @"FilePrefix"

/* Styles Plist Keys */
#define BG @"Background"
#define HEIGHT @"Height"
#define TINT @"Tint"

#define COLOR_PALETTE @"ColorPalette"
#define DEFAULT_BG @"Default.background"
#define NAVBAR_BG @"NavigationBar.background"
#define NAVBAR_TINT @"NavigationBar.tint"
#define TABBAR_BG @"TabBar.background"
#define TABBAR_HEIGHT @"TabBar.height"

/* Model Relationships */
#define MODEL_HAS_ONE @"hasOne"
#define MODEL_HAS_MANY @"hasMany"
#define MODEL_BELONGS_TO @"belongsTo"
#define MODEL_HABTM @"hasAndBelongsToMany"

/* Persistence Operation */
typedef enum {
    KBFind,
    KBSave,
    KBDelete
} KBPersistenceOperation;

/* Read Types */
typedef enum {
    KBFindAll,
    KBFindFirst,
    KBFindCount
} KBFindType;

/* Query Parameters */
#define MODEL_ASCENDING @"ascending"
#define MODEL_ATTRIBUTE @"attribute"
#define MODEL_CONDITIONS @"conditions"
#define MODEL_VALIDATE @"validate"
#define MODEL_ORDER @"order"
#define MODEL_RECURSIVE @"recursive"

/* Validations */
#define MODEL_VALIDATE_EMPTY @"Empty"
#define MODEL_VALIDATE_LENGTH @"Length"

/* Data Providers */
#define DATA_PROVIDER @"dataProvider"
#define DATA_PROVIDER_NONE @"DATA_PROVIDER_NONE"
#define DATA_PROVIDER_API @"DATA_PROVIDER_API"
#define DATA_PROVIDER_REGISTRY @"DATA_PROVIDER_REGISTRY"
#define DATA_PROVIDER_DATABASE @"DATA_PROVIDER_DATABASE"
#define DATA_PROVIDER_FILE @"DATA_PROVIDER_FILE"
#define DATA_PROVIDER_TWITTER @"DATA_PROVIDER_TWITTER"
#define DATA_PROVIDER_FACEBOOK @"DATA_PROVIDER_FACEBOOK"
#define DATA_PROVIDER_AMAZON_S3 @"DATA_PROVIDER_AMAZON_S3"
#define DATA_PROVIDER_FTP @"DATA_PROVIDER_FTP"
#define DATA_PROVIDER_AUDIO_LOCAL @"DATA_PROVIDER_AUDIO_LOCAL"
#define DATA_PROVIDER_AUDIO_STREAM @"DATA_PROVIDER_AUDIO_STREAM"
#define DATA_PROVIDER_VIDEO_LOCAL @"DATA_PROVIDER_VIDEO_LOCAL"
#define DATA_PROVIDER_VIDEO_STREAM @"DATA_PROVIDER_VIDEO_STREAM"
#define DATA_PROVIDER_PARSE @"DATA_PROVIDER_PARSE"

typedef enum {
    KBDataProviderNone          = 0,
    KBDataProviderAPI           = 1,
    KBDataProviderRegistry      = 2,
    KBDataProviderDatabase      = 3,
    KBDataProviderFile          = 4,
    KBDataProviderTwitter       = 5,
    KBDataProviderFacebook      = 6,
    KBDataProviderAmazonS3      = 7,
    KBDataProviderFTP           = 8,
    KBDataProviderAudioLocal    = 9,
    KBDataProviderAudioStream   = 10,
    KBDataProviderVideoLocal    = 11,
    KBDataProviderVideoStream   = 12,
    KBDataProviderParse         = 13
} KBDataProviderType;

/* Facebook */
#define FACEBOOK @"facebook"
#define FB_GRAPH_PATH_ME @"me"

/* Twitter */
#define TWITTER @"twitter"

