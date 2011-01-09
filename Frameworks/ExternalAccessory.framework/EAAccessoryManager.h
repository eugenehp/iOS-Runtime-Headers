/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class NSMutableArray;



@interface EAAccessoryManager : NSObject 
{
    NSMutableArray *_connectedAccessories;
}

@property(readonly) NSArray *connectedAccessories;

+ (id)sharedAccessoryManager;
+ (BOOL)useEATestInsteadOfIap;
+ (BOOL)isLoggingEnabled;

- (id)init;
- (id)_initFromSingletonCreationMethod;
- (void)dealloc;
- (id)connectedAccessories;
- (void)registerForLocalNotifications;
- (void)unregisterForLocalNotifications;
- (void)_notifyObserversThatAccessoryDisconnected:(id)arg1;
- (void)_iapServerDied:(id)arg1;
- (void)_externalAccessoryConnected:(id)arg1;
- (void)_externalAccessoryDisconnected:(id)arg1;
- (void)_locationNmeaDataAvailable:(id)arg1;
- (void)_locationPointDataAvailable:(id)arg1;
- (void)_ephemerisURLAvailable:(id)arg1;
- (void)_nmeaFilteringSupportChanged:(id)arg1;
- (void)_gpsTimeRequested:(id)arg1;
- (BOOL)shouldAllowLocationAccessories;
- (void)setShouldAllowLocationAccessories:(BOOL)arg1;

@end