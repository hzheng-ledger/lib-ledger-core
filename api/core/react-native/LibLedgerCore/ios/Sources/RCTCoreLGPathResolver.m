// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from path_resolver.djinni

#import "RCTCoreLGPathResolver.h"


@implementation RCTCoreLGPathResolver
//Export module
RCT_EXPORT_MODULE(RCTCoreLGPathResolver)

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

/**
 * Resolves the path for a SQLite database file.
 * @param path The path to resolve.
 * @return The resolved path.
 */
RCT_REMAP_METHOD(resolveDatabasePath,resolveDatabasePath:(NSDictionary *)currentInstance withParams:(nonnull NSString *)path withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGPathResolver::resolveDatabasePath, first argument should be an instance of LGPathResolverImpl", nil);
    }
    LGPathResolverImpl *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGPathResolverImpl::resolveDatabasePath, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    NSString * objcResult = [currentInstanceObj resolveDatabasePath:path];
    NSDictionary *result = @{@"value" : objcResult};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGPathResolverImpl::resolveDatabasePath", nil);
    }

}

/**
 * Resolves the path of a single log file.
 * @param path The path to resolve.
 * @return The resolved path.
 */
RCT_REMAP_METHOD(resolveLogFilePath,resolveLogFilePath:(NSDictionary *)currentInstance withParams:(nonnull NSString *)path withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGPathResolver::resolveLogFilePath, first argument should be an instance of LGPathResolverImpl", nil);
    }
    LGPathResolverImpl *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGPathResolverImpl::resolveLogFilePath, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    NSString * objcResult = [currentInstanceObj resolveLogFilePath:path];
    NSDictionary *result = @{@"value" : objcResult};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGPathResolverImpl::resolveLogFilePath", nil);
    }

}

/**
 * Resolves the path for a json file.
 * @param path The path to resolve.
 * @return The resolved path.
 */
RCT_REMAP_METHOD(resolvePreferencesPath,resolvePreferencesPath:(NSDictionary *)currentInstance withParams:(nonnull NSString *)path withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGPathResolver::resolvePreferencesPath, first argument should be an instance of LGPathResolverImpl", nil);
    }
    LGPathResolverImpl *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGPathResolverImpl::resolvePreferencesPath, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    NSString * objcResult = [currentInstanceObj resolvePreferencesPath:path];
    NSDictionary *result = @{@"value" : objcResult};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGPathResolverImpl::resolvePreferencesPath", nil);
    }

}
RCT_REMAP_METHOD(new, newWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    LGPathResolverImpl *objcResult = [[LGPathResolverImpl alloc] init];
    NSString *uuid = [[NSUUID UUID] UUIDString];
    [self.objcImplementations setObject:objcResult forKey:uuid];
    NSDictionary *result = @{@"type" : @"CoreLGPathResolverImpl", @"uid" : uuid };
    if (!objcResult || !result)
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGPathResolverImpl::init", nil);
    }
    resolve(result);
}
@end
