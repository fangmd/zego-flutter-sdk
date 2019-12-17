//
//  ZegoAudioPlayerController.h
//  Pods
//
//  Created by 李展鹏@ZEGO on 2019/12/12.
//

#ifndef ZegoAudioPlayerController_h
#define ZegoAudioPlayerController_h

#import <Foundation/Foundation.h>
#import <Flutter/Flutter.h>
#import <ZegoLiveRoom/zego-api-audio-player-oc.h>

@protocol ZegoAudioPlayerControllerDelegate <NSObject>

- (void)onAudioPlayEnd:(unsigned int)soundID;

@end


@interface ZegoAudioPlayerController : NSObject

+ (instancetype)instance;

- (void)playAudioEffect:(NSDictionary *)args register:(NSObject<FlutterPluginRegistrar>*)reg result:(FlutterResult)result;
- (void)stopAudioEffect:(NSDictionary *)args result:(FlutterResult)result;
- (void)pauseAudioEffect:(NSDictionary *)args result:(FlutterResult)result;
- (void)resumeAudioEffect:(NSDictionary *)args result:(FlutterResult)result;
- (void)preloadAudioEffect:(NSDictionary *)args register:(NSObject<FlutterPluginRegistrar>*)reg result:(FlutterResult)result;
- (void)unloadAudioEffect:(NSDictionary *)args result:(FlutterResult)result;
- (void)setAudioEffectVolume:(NSDictionary *)args result:(FlutterResult)result;

- (void)setAllEffectVolume:(NSDictionary *)args result:(FlutterResult)result;
- (void)pauseAllEffect:(FlutterResult)result;
- (void)stopAllEffect:(FlutterResult)result;
- (void)resumeAllEffect:(FlutterResult)result;


- (void)setAudioPlayerEventDelegate:(id<ZegoAudioPlayerControllerDelegate>)delegate;


@end


#endif /* ZegoAudioPlayerController_h */
