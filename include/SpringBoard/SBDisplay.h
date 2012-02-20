/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBUnknownSuperclass.h"

@class NSMutableSet, NSMapTable, NSHashTable;

@interface SBDisplay : SBUnknownSuperclass {
	NSMapTable *_displayValues;	// 4 = 0x4
	NSMapTable *_activationValues;	// 8 = 0x8
	NSMapTable *_deactivationValues;	// 12 = 0xc
	NSHashTable *_displayFlags;	// 16 = 0x10
	NSHashTable *_activationFlags;	// 20 = 0x14
	NSHashTable *_deactivationFlags;	// 24 = 0x18
	NSMutableSet *_suppressVolumeHudCategories;	// 28 = 0x1c
	float _accelerometerSampleInterval;	// 32 = 0x20
	unsigned _disableIdleTimer;	// 36 = 0x24
	unsigned _expectsFaceContact : 1;	// 40 = 0x28
	unsigned _expectsFaceContactInLandscape : 1;	// 40 = 0x28
	unsigned _accelerometerDeviceOrientationChangedEventsEnabled : 1;	// 40 = 0x28
	unsigned _proximityEventsEnabled : 1;	// 40 = 0x28
	unsigned _showsProgress;	// 44 = 0x2c
}
@property(assign) BOOL disableIdleTimer;	// G=0x648a5; S=0x64895; converted property
@property(assign) BOOL expectsFaceContact;	// G=0x64915; S=0x662b1; converted property
@property(assign) double accelerometerSampleInterval;	// G=0x6495d; S=0x661bd; converted property
@property(assign) BOOL accelerometerDeviceOrientationChangedEventsEnabled;	// G=0x64979; S=0x66161; converted property
@property(assign) BOOL proximityEventsEnabled;	// G=0x6498d; S=0x66111; converted property
@property(assign) BOOL showsProgress;	// G=0x649c5; S=0x649a1; converted property
+ (id)_defaultDisplayState;	// 0x65899
+ (void)setDefaultValue:(id)value forKey:(id)key displayIdentifier:(id)identifier;	// 0x6585d
+ (id)defaultValueForKey:(id)key displayIdentifier:(id)identifier urlScheme:(id)scheme;	// 0x6572d
- (void)dealloc;	// 0x66761
- (id)copyWithZone:(NSZone *)zone;	// 0x64e1d
- (id)displayIdentifier;	// 0x64875
- (id)urlScheme;	// 0x64e2d
- (id)_newValueTable;	// 0x64e5d
- (id)_newFlagTable;	// 0x64e9d
- (void)clearDisplaySettings;	// 0x64ed9
- (void)setDisplaySetting:(unsigned)setting flag:(BOOL)flag;	// 0x64f2d
- (void)setDisplaySetting:(unsigned)setting value:(id)value;	// 0x64fa1
- (id)displayValue:(unsigned)value;	// 0x65019
- (BOOL)displayFlag:(unsigned)flag;	// 0x65049
- (void)clearActivationSettings;	// 0x65079
- (void)setActivationSetting:(unsigned)setting flag:(BOOL)flag;	// 0x650cd
- (void)setActivationSetting:(unsigned)setting value:(id)value;	// 0x65141
- (id)activationValue:(unsigned)value;	// 0x651b9
- (BOOL)activationFlag:(unsigned)flag;	// 0x651e9
- (void)clearDeactivationSettings;	// 0x65219
- (void)setDeactivationSetting:(unsigned)setting flag:(BOOL)flag;	// 0x6526d
- (void)setDeactivationSetting:(unsigned)setting value:(id)value;	// 0x652e1
- (id)deactivationValue:(unsigned)value;	// 0x65359
- (BOOL)deactivationFlag:(unsigned)flag;	// 0x65389
- (void)activate;	// 0x6675d
- (void)launchSucceeded:(BOOL)succeeded;	// 0x653b9
- (void)deactivate;	// 0x654e5
- (void)deactivated;	// 0x655a9
- (void)deactivateAfterLocking;	// 0x64881
- (void)kill;	// 0x64885
- (void)_exitedCommon;	// 0x655bd
- (void)exitedAbnormally;	// 0x65665
- (void)exitedNormally;	// 0x6674d
- (BOOL)allowsEventOnlySuspension;	// 0x64889
- (int)defaultStatusBarStyle;	// 0x6669d
- (int)statusBarStyle;	// 0x66649
- (int)statusBarStyleOverridesToCancel;	// 0x6488d
- (BOOL)defaultStatusBarHidden;	// 0x66599
- (BOOL)statusBarHidden;	// 0x66545
- (int)statusBarOrientation;	// 0x664d9
- (int)launchingInterfaceOrientationForCurrentOrientation;	// 0x66499
- (int)launchingInterfaceOrientationForCurrentOrientation:(int)currentOrientation;	// 0x6645d
- (BOOL)isNowRecordingApplication;	// 0x64891
- (int)effectiveStatusBarStyle;	// 0x662c5
// converted property setter: - (void)setDisableIdleTimer:(BOOL)timer;	// 0x64895
// converted property getter: - (BOOL)disableIdleTimer;	// 0x648a5
- (double)autoDimTime;	// 0x648b5
- (double)autoLockTime;	// 0x648e5
// converted property setter: - (void)setExpectsFaceContact:(BOOL)contact;	// 0x662b1
- (void)setExpectsFaceContact:(BOOL)contact inLandscape:(BOOL)landscape;	// 0x6621d
// converted property getter: - (BOOL)expectsFaceContact;	// 0x64915
- (BOOL)expectsFaceContactInLandscape;	// 0x64929
// converted property setter: - (void)setAccelerometerSampleInterval:(double)interval;	// 0x661bd
// converted property getter: - (double)accelerometerSampleInterval;	// 0x6495d
// converted property setter: - (void)setAccelerometerDeviceOrientationChangedEventsEnabled:(BOOL)enabled;	// 0x66161
// converted property getter: - (BOOL)accelerometerDeviceOrientationChangedEventsEnabled;	// 0x64979
// converted property setter: - (void)setProximityEventsEnabled:(BOOL)enabled;	// 0x66111
// converted property getter: - (BOOL)proximityEventsEnabled;	// 0x6498d
// converted property setter: - (void)setShowsProgress:(BOOL)progress;	// 0x649a1
// converted property getter: - (BOOL)showsProgress;	// 0x649c5
- (void)setSystemVolumeHUDEnabled:(BOOL)enabled forCategory:(id)category;	// 0x65fd5
- (BOOL)showSystemVolumeHUDForCategory:(id)category;	// 0x65f75
- (void)handleLock:(BOOL)lock;	// 0x649dd
- (void)prepareForActivationOfDisplay:(id)display toHandleURL:(id)handleURL;	// 0x649e1
- (BOOL)suppressesNotifications;	// 0x649e5
- (id)description;	// 0x65eb9
- (id)descriptionForDisplaySetting:(unsigned)displaySetting;	// 0x649e9
- (id)displaySettingsDescription;	// 0x65cdd
- (id)descriptionForActivationSetting:(unsigned)activationSetting;	// 0x64add
- (id)activationSettingsDescription;	// 0x65b01
- (id)descriptionForDeactivationSetting:(unsigned)deactivationSetting;	// 0x64cc1
- (id)deactivationSettingsDescription;	// 0x65925
@end