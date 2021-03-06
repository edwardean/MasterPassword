//
//  MPMacConfig.h
//  MasterPassword
//
//  Created by Maarten Billemont on 02/01/12.
//  Copyright (c) 2012 Lyndir. All rights reserved.
//

#import "MPConfig.h"

@interface MPMacConfig : MPConfig

@property(nonatomic, retain) NSString *usedUserName;
@property(nonatomic, retain) NSNumber *dialogStyleHUD;
@property(nonatomic, strong) NSNumber *showAppWindow;

@end
