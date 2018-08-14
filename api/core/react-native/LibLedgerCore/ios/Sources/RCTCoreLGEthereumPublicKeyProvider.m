// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ethereum_public_key_provider.djinni

#import "RCTCoreLGEthereumPublicKeyProvider.h"


@implementation RCTCoreLGEthereumPublicKeyProvider
//Export module
RCT_EXPORT_MODULE(RCTCoreLGEthereumPublicKeyProvider)

@synthesize bridge = _bridge;

-(instancetype)init
{
    self = [super init];
    //Init Objc implementation
    if(self)
    {
        self.objcImplementations = [[NSMutableDictionary alloc] init];
    }
    return self;
}
RCT_REMAP_METHOD(new, newWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    LGEthereumPublicKeyProviderImpl *objcResult = [[LGEthereumPublicKeyProviderImpl alloc] init];
    NSString *uuid = [[NSUUID UUID] UUIDString];
    [self.objcImplementations setObject:objcResult forKey:uuid];
    NSDictionary *result = @{@"type" : @"CoreLGEthereumPublicKeyProviderImpl", @"uid" : uuid };
    if (!objcResult || !result)
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGEthereumPublicKeyProviderImpl::init", nil);
    }
    resolve(result);
}
@end
