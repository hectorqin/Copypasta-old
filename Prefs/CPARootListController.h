#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>
#import <CepheiPrefs/HBRootListController.h>
#import <CepheiPrefs/HBAppearanceSettings.h>
#import <Cephei/HBPreferences.h>
#import <Cephei/HBRespringController.h>
#import "SparkAppListTableViewController.h"
#include <sys/types.h>
#include <sys/sysctl.h>
#include <mach/machine.h>

@interface CPAAppearanceSettings : HBAppearanceSettings
@end

@interface CPARootListController : HBRootListController
@property(nonatomic, retain)CPAAppearanceSettings* appearanceSettings;
@property(nonatomic, retain)HBPreferences* preferences;
@property(nonatomic, retain)UISwitch* enableSwitch;
@property(nonatomic, retain)UIBarButtonItem* item;
@property(nonatomic, retain)UIView* headerView;
@property(nonatomic, retain)UIImageView* headerImageView;
@property(nonatomic, retain)UILabel* titleLabel;
@property(nonatomic, retain)UIImageView* iconView;
@property(nonatomic, retain)UIBlurEffect* blur;
@property(nonatomic, retain)UIVisualEffectView* blurView;
- (void)setEnabled;
- (void)setEnabledState;
- (void)resetPrompt;
- (void)resetPreferences;
- (void)respring;
@end