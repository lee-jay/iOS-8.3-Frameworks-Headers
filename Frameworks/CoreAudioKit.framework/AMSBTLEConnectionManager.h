//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBCentralManagerDelegate.h"
#import "CBPeripheralDelegate.h"

@class CBCentralManager, NSMutableArray, NSString, NSTimer;

@interface AMSBTLEConnectionManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>
{
    CBCentralManager *centralManager;
    NSMutableArray *peripheralList;
    NSMutableArray *connectedBTPeripherals;
    NSMutableArray *connectedAMSPeripherals;
    NSTimer *refreshTimer;
    id <BTLEConnectionTable> controller;
    int centralState;
}

- (void)startScan;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)stopScan;
- (void)startTimer;
- (void)timerFired:(id)arg1;
- (void)dealloc;
- (void)killTimer;
- (void)removeAMSPeripheralForCBPeripheral:(id)arg1;
- (int)bluetoothState;
- (void)setUIController:(id)arg1;
- (id)amsPeripheralForCBPeripheral:(id)arg1;
- (BOOL)peripheralIsConnectedCentral:(id)arg1;
- (void)createPeripheralList;
@property(readonly) NSMutableArray *peripheralList; // @synthesize peripheralList;
- (id)initWithUIController:(id)arg1;
- (BOOL)isLECapableHardware;
- (struct OpaqueMIDIDevice *)midiDeviceForUUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

