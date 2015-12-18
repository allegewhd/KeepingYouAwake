//
//  KYAAboutPreferencesViewController.h
//  KeepingYouAwake
//
//  Created by Marcel Dierkes on 18.12.15.
//  Copyright © 2015 Marcel Dierkes. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface KYAAboutPreferencesViewController : NSViewController
@property (copy, nonatomic, readonly, nonnull) NSString *versionText;
@property (copy, nonatomic, readonly, nonnull) NSString *copyrightText;

@end
