// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#import "RCTCoreLGBitcoinLikeTransactionBuilder.h"


@implementation RCTCoreLGBitcoinLikeTransactionBuilder
//Export module
RCT_EXPORT_MODULE(RCTCoreLGBitcoinLikeTransactionBuilder)

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
 * Add the given input to the final transaction.
 * @param transactionhash The hash of the transaction in where the UTXO can be located.
 * @params index Index of the UTXO in the previous transaction
 * @params sequence Sequence number to add at the end of the input serialization. This can be used for RBF transaction
 * @return A reference on the same builder in order to chain calls.
 */
RCT_REMAP_METHOD(addInput,addInput:(NSDictionary *)currentInstance withParams:(nonnull NSString *)transactionHash
                                                                        index:(int32_t)index
                                                                     sequence:(int32_t)sequence withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGBitcoinLikeTransactionBuilder::addInput, first argument should be an instance of LGBitcoinLikeTransactionBuilder", nil);
    }
    LGBitcoinLikeTransactionBuilder *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGBitcoinLikeTransactionBuilder::addInput, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    LGBitcoinLikeTransactionBuilder * objcResult = [currentInstanceObj addInput:transactionHash index:index sequence:sequence];

    NSString *uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGBitcoinLikeTransactionBuilder *rctImpl_objcResult = (RCTCoreLGBitcoinLikeTransactionBuilder *)[self.bridge moduleForName:@"CoreLGBitcoinLikeTransactionBuilder"];
    [rctImpl_objcResult.objcImplementations setObject:objcResult forKey:uuid];
    NSDictionary *result = @{@"type" : @"CoreLGBitcoinLikeTransactionBuilder", @"uid" : uuid };


    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeTransactionBuilder::addInput", nil);
    }

}

/**
 * Add the given output to the final transaction
 * @return A reference on the same builder in order to chain calls.
 */
RCT_REMAP_METHOD(addOutput,addOutput:(NSDictionary *)currentInstance withParams:(NSDictionary *)amount
                                                                         script:(NSDictionary *)script withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGBitcoinLikeTransactionBuilder::addOutput, first argument should be an instance of LGBitcoinLikeTransactionBuilder", nil);
    }
    LGBitcoinLikeTransactionBuilder *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGBitcoinLikeTransactionBuilder::addOutput, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    RCTCoreLGAmount *rctParam_amount = (RCTCoreLGAmount *)[self.bridge moduleForName:@"CoreLGAmount"];
    LGAmount *objcParam_0 = (LGAmount *)[rctParam_amount.objcImplementations objectForKey:amount[@"uid"]];
    RCTCoreLGBitcoinLikeScript *rctParam_script = (RCTCoreLGBitcoinLikeScript *)[self.bridge moduleForName:@"CoreLGBitcoinLikeScript"];
    LGBitcoinLikeScript *objcParam_1 = (LGBitcoinLikeScript *)[rctParam_script.objcImplementations objectForKey:script[@"uid"]];
    LGBitcoinLikeTransactionBuilder * objcResult = [currentInstanceObj addOutput:objcParam_0 script:objcParam_1];

    NSString *uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGBitcoinLikeTransactionBuilder *rctImpl_objcResult = (RCTCoreLGBitcoinLikeTransactionBuilder *)[self.bridge moduleForName:@"CoreLGBitcoinLikeTransactionBuilder"];
    [rctImpl_objcResult.objcImplementations setObject:objcResult forKey:uuid];
    NSDictionary *result = @{@"type" : @"CoreLGBitcoinLikeTransactionBuilder", @"uid" : uuid };


    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeTransactionBuilder::addOutput", nil);
    }

}

/**
 * If needed the transaction will send its change to the given path. It is possible to add multiple change path.
 * @return A reference on the same builder in order to chain calls.
 */
RCT_REMAP_METHOD(addChangePath,addChangePath:(NSDictionary *)currentInstance withParams:(nonnull NSString *)path withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGBitcoinLikeTransactionBuilder::addChangePath, first argument should be an instance of LGBitcoinLikeTransactionBuilder", nil);
    }
    LGBitcoinLikeTransactionBuilder *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGBitcoinLikeTransactionBuilder::addChangePath, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    LGBitcoinLikeTransactionBuilder * objcResult = [currentInstanceObj addChangePath:path];

    NSString *uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGBitcoinLikeTransactionBuilder *rctImpl_objcResult = (RCTCoreLGBitcoinLikeTransactionBuilder *)[self.bridge moduleForName:@"CoreLGBitcoinLikeTransactionBuilder"];
    [rctImpl_objcResult.objcImplementations setObject:objcResult forKey:uuid];
    NSDictionary *result = @{@"type" : @"CoreLGBitcoinLikeTransactionBuilder", @"uid" : uuid };


    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeTransactionBuilder::addChangePath", nil);
    }

}

/**
 * Exclude UTXO from the coin selection (alias UTXO picking). You can call this method multiple times to exclude multiple
 * UTXO.
 * @param transactionHash The hash of the transaction in which this UTXO can be found.
 * @param outputIndex The position of the output in the previous transaction,
 * @return A reference on the same builder in order to chain calls.
 */
RCT_REMAP_METHOD(excludeUtxo,excludeUtxo:(NSDictionary *)currentInstance withParams:(nonnull NSString *)transactionHash
                                                                        outputIndex:(int32_t)outputIndex withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGBitcoinLikeTransactionBuilder::excludeUtxo, first argument should be an instance of LGBitcoinLikeTransactionBuilder", nil);
    }
    LGBitcoinLikeTransactionBuilder *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGBitcoinLikeTransactionBuilder::excludeUtxo, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    LGBitcoinLikeTransactionBuilder * objcResult = [currentInstanceObj excludeUtxo:transactionHash outputIndex:outputIndex];

    NSString *uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGBitcoinLikeTransactionBuilder *rctImpl_objcResult = (RCTCoreLGBitcoinLikeTransactionBuilder *)[self.bridge moduleForName:@"CoreLGBitcoinLikeTransactionBuilder"];
    [rctImpl_objcResult.objcImplementations setObject:objcResult forKey:uuid];
    NSDictionary *result = @{@"type" : @"CoreLGBitcoinLikeTransactionBuilder", @"uid" : uuid };


    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeTransactionBuilder::excludeUtxo", nil);
    }

}

/** @return A reference on the same builder in order to chain calls. */
RCT_REMAP_METHOD(setNumberOfChangeAddresses,setNumberOfChangeAddresses:(NSDictionary *)currentInstance withParams:(int32_t)count withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGBitcoinLikeTransactionBuilder::setNumberOfChangeAddresses, first argument should be an instance of LGBitcoinLikeTransactionBuilder", nil);
    }
    LGBitcoinLikeTransactionBuilder *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGBitcoinLikeTransactionBuilder::setNumberOfChangeAddresses, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    LGBitcoinLikeTransactionBuilder * objcResult = [currentInstanceObj setNumberOfChangeAddresses:count];

    NSString *uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGBitcoinLikeTransactionBuilder *rctImpl_objcResult = (RCTCoreLGBitcoinLikeTransactionBuilder *)[self.bridge moduleForName:@"CoreLGBitcoinLikeTransactionBuilder"];
    [rctImpl_objcResult.objcImplementations setObject:objcResult forKey:uuid];
    NSDictionary *result = @{@"type" : @"CoreLGBitcoinLikeTransactionBuilder", @"uid" : uuid };


    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeTransactionBuilder::setNumberOfChangeAddresses", nil);
    }

}

/**
 * Set the maximum amount per change output. By default there is no max amount.
 * @return A reference on the same builder in order to chain calls.
 */
RCT_REMAP_METHOD(setMaxAmountOnChange,setMaxAmountOnChange:(NSDictionary *)currentInstance withParams:(NSDictionary *)amount withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGBitcoinLikeTransactionBuilder::setMaxAmountOnChange, first argument should be an instance of LGBitcoinLikeTransactionBuilder", nil);
    }
    LGBitcoinLikeTransactionBuilder *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGBitcoinLikeTransactionBuilder::setMaxAmountOnChange, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    RCTCoreLGAmount *rctParam_amount = (RCTCoreLGAmount *)[self.bridge moduleForName:@"CoreLGAmount"];
    LGAmount *objcParam_0 = (LGAmount *)[rctParam_amount.objcImplementations objectForKey:amount[@"uid"]];
    LGBitcoinLikeTransactionBuilder * objcResult = [currentInstanceObj setMaxAmountOnChange:objcParam_0];

    NSString *uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGBitcoinLikeTransactionBuilder *rctImpl_objcResult = (RCTCoreLGBitcoinLikeTransactionBuilder *)[self.bridge moduleForName:@"CoreLGBitcoinLikeTransactionBuilder"];
    [rctImpl_objcResult.objcImplementations setObject:objcResult forKey:uuid];
    NSDictionary *result = @{@"type" : @"CoreLGBitcoinLikeTransactionBuilder", @"uid" : uuid };


    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeTransactionBuilder::setMaxAmountOnChange", nil);
    }

}

/**
 * Set the minimum amount per change output. By default this value is the dust value of the currency.
 * @return A reference on the same builder in order to chain calls.
 */
RCT_REMAP_METHOD(setMinAmountOnChange,setMinAmountOnChange:(NSDictionary *)currentInstance withParams:(NSDictionary *)amount withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGBitcoinLikeTransactionBuilder::setMinAmountOnChange, first argument should be an instance of LGBitcoinLikeTransactionBuilder", nil);
    }
    LGBitcoinLikeTransactionBuilder *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGBitcoinLikeTransactionBuilder::setMinAmountOnChange, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    RCTCoreLGAmount *rctParam_amount = (RCTCoreLGAmount *)[self.bridge moduleForName:@"CoreLGAmount"];
    LGAmount *objcParam_0 = (LGAmount *)[rctParam_amount.objcImplementations objectForKey:amount[@"uid"]];
    LGBitcoinLikeTransactionBuilder * objcResult = [currentInstanceObj setMinAmountOnChange:objcParam_0];

    NSString *uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGBitcoinLikeTransactionBuilder *rctImpl_objcResult = (RCTCoreLGBitcoinLikeTransactionBuilder *)[self.bridge moduleForName:@"CoreLGBitcoinLikeTransactionBuilder"];
    [rctImpl_objcResult.objcImplementations setObject:objcResult forKey:uuid];
    NSDictionary *result = @{@"type" : @"CoreLGBitcoinLikeTransactionBuilder", @"uid" : uuid };


    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeTransactionBuilder::setMinAmountOnChange", nil);
    }

}

/**
 * Set the UTXO picking strategy (see [[BitcoinLikePickingStrategy]]).
 * @param strategy The strategy to adopt in order to select which input to use in the transaction.
 * @param sequence The sequence value serialized at the end of the raw transaction. If you don't know what to put here
 * just use 0xFFFFFF
 * @return A reference on the same builder in order to chain calls.
 */
RCT_REMAP_METHOD(pickInputs,pickInputs:(NSDictionary *)currentInstance withParams:(LGBitcoinLikePickingStrategy)strategy
                                                                         sequence:(int32_t)sequence withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGBitcoinLikeTransactionBuilder::pickInputs, first argument should be an instance of LGBitcoinLikeTransactionBuilder", nil);
    }
    LGBitcoinLikeTransactionBuilder *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGBitcoinLikeTransactionBuilder::pickInputs, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    LGBitcoinLikeTransactionBuilder * objcResult = [currentInstanceObj pickInputs:strategy sequence:sequence];

    NSString *uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGBitcoinLikeTransactionBuilder *rctImpl_objcResult = (RCTCoreLGBitcoinLikeTransactionBuilder *)[self.bridge moduleForName:@"CoreLGBitcoinLikeTransactionBuilder"];
    [rctImpl_objcResult.objcImplementations setObject:objcResult forKey:uuid];
    NSDictionary *result = @{@"type" : @"CoreLGBitcoinLikeTransactionBuilder", @"uid" : uuid };


    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeTransactionBuilder::pickInputs", nil);
    }

}

/**
 * Send funds to the given address. This method can be called multiple times to send to multiple addresses.
 * @param amount The value to send
 * @param address Address of the recipient
 * @return A reference on the same builder in order to chain calls.
 */
RCT_REMAP_METHOD(sendToAddress,sendToAddress:(NSDictionary *)currentInstance withParams:(NSDictionary *)amount
                                                                                address:(nonnull NSString *)address withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGBitcoinLikeTransactionBuilder::sendToAddress, first argument should be an instance of LGBitcoinLikeTransactionBuilder", nil);
    }
    LGBitcoinLikeTransactionBuilder *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGBitcoinLikeTransactionBuilder::sendToAddress, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    RCTCoreLGAmount *rctParam_amount = (RCTCoreLGAmount *)[self.bridge moduleForName:@"CoreLGAmount"];
    LGAmount *objcParam_0 = (LGAmount *)[rctParam_amount.objcImplementations objectForKey:amount[@"uid"]];
    LGBitcoinLikeTransactionBuilder * objcResult = [currentInstanceObj sendToAddress:objcParam_0 address:address];

    NSString *uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGBitcoinLikeTransactionBuilder *rctImpl_objcResult = (RCTCoreLGBitcoinLikeTransactionBuilder *)[self.bridge moduleForName:@"CoreLGBitcoinLikeTransactionBuilder"];
    [rctImpl_objcResult.objcImplementations setObject:objcResult forKey:uuid];
    NSDictionary *result = @{@"type" : @"CoreLGBitcoinLikeTransactionBuilder", @"uid" : uuid };


    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeTransactionBuilder::sendToAddress", nil);
    }

}

/**
 * Send all available funds to the given address.
 * @param address Address of the recipient
 * @return A reference on the same builder in order to chain calls.
 */
RCT_REMAP_METHOD(wipeToAddress,wipeToAddress:(NSDictionary *)currentInstance withParams:(nonnull NSString *)address withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGBitcoinLikeTransactionBuilder::wipeToAddress, first argument should be an instance of LGBitcoinLikeTransactionBuilder", nil);
    }
    LGBitcoinLikeTransactionBuilder *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGBitcoinLikeTransactionBuilder::wipeToAddress, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    LGBitcoinLikeTransactionBuilder * objcResult = [currentInstanceObj wipeToAddress:address];

    NSString *uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGBitcoinLikeTransactionBuilder *rctImpl_objcResult = (RCTCoreLGBitcoinLikeTransactionBuilder *)[self.bridge moduleForName:@"CoreLGBitcoinLikeTransactionBuilder"];
    [rctImpl_objcResult.objcImplementations setObject:objcResult forKey:uuid];
    NSDictionary *result = @{@"type" : @"CoreLGBitcoinLikeTransactionBuilder", @"uid" : uuid };


    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeTransactionBuilder::wipeToAddress", nil);
    }

}

/**
 * Set the amount of fees per byte (of the raw transaction).
 * @return A reference on the same builder in order to chain calls.
 */
RCT_REMAP_METHOD(setFeesPerByte,setFeesPerByte:(NSDictionary *)currentInstance withParams:(NSDictionary *)fees withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGBitcoinLikeTransactionBuilder::setFeesPerByte, first argument should be an instance of LGBitcoinLikeTransactionBuilder", nil);
    }
    LGBitcoinLikeTransactionBuilder *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGBitcoinLikeTransactionBuilder::setFeesPerByte, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    RCTCoreLGAmount *rctParam_fees = (RCTCoreLGAmount *)[self.bridge moduleForName:@"CoreLGAmount"];
    LGAmount *objcParam_0 = (LGAmount *)[rctParam_fees.objcImplementations objectForKey:fees[@"uid"]];
    LGBitcoinLikeTransactionBuilder * objcResult = [currentInstanceObj setFeesPerByte:objcParam_0];

    NSString *uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGBitcoinLikeTransactionBuilder *rctImpl_objcResult = (RCTCoreLGBitcoinLikeTransactionBuilder *)[self.bridge moduleForName:@"CoreLGBitcoinLikeTransactionBuilder"];
    [rctImpl_objcResult.objcImplementations setObject:objcResult forKey:uuid];
    NSDictionary *result = @{@"type" : @"CoreLGBitcoinLikeTransactionBuilder", @"uid" : uuid };


    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeTransactionBuilder::setFeesPerByte", nil);
    }

}

/** Build a transaction from the given builder parameters. */
RCT_REMAP_METHOD(build,build:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGBitcoinLikeTransactionBuilder::build, first argument should be an instance of LGBitcoinLikeTransactionBuilder", nil);
    }
    LGBitcoinLikeTransactionBuilder *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGBitcoinLikeTransactionBuilder::build, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    RCTCoreLGBitcoinLikeTransactionCallback *objcParam_0 = [[RCTCoreLGBitcoinLikeTransactionCallback alloc] initWithResolver:resolve rejecter:reject andBridge:self.bridge];
    [currentInstanceObj build:objcParam_0];

}

/**
 * Creates a clone of this builder.
 * @return A copy of the current builder instance.
 */
RCT_REMAP_METHOD(clone,clone:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGBitcoinLikeTransactionBuilder::clone, first argument should be an instance of LGBitcoinLikeTransactionBuilder", nil);
    }
    LGBitcoinLikeTransactionBuilder *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGBitcoinLikeTransactionBuilder::clone, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    LGBitcoinLikeTransactionBuilder * objcResult = [currentInstanceObj clone];

    NSString *uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGBitcoinLikeTransactionBuilder *rctImpl_objcResult = (RCTCoreLGBitcoinLikeTransactionBuilder *)[self.bridge moduleForName:@"CoreLGBitcoinLikeTransactionBuilder"];
    [rctImpl_objcResult.objcImplementations setObject:objcResult forKey:uuid];
    NSDictionary *result = @{@"type" : @"CoreLGBitcoinLikeTransactionBuilder", @"uid" : uuid };


    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeTransactionBuilder::clone", nil);
    }

}

/** Reset the current instance to its initial state */
RCT_REMAP_METHOD(reset,reset:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGBitcoinLikeTransactionBuilder::reset, first argument should be an instance of LGBitcoinLikeTransactionBuilder", nil);
    }
    LGBitcoinLikeTransactionBuilder *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGBitcoinLikeTransactionBuilder::reset, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    [currentInstanceObj reset];

}

RCT_REMAP_METHOD(parseRawUnsignedTransaction,parseRawUnsignedTransactionwithParams:(NSDictionary *)currency
                                                                    rawTransaction:(nonnull NSData *)rawTransaction withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    RCTCoreLGCurrency *rctParam_currency = (RCTCoreLGCurrency *)[self.bridge moduleForName:@"CoreLGCurrency"];
    LGCurrency *objcParam_0 = (LGCurrency *)[rctParam_currency.objcImplementations objectForKey:currency[@"uid"]];
    LGBitcoinLikeTransaction * objcResult = [LGBitcoinLikeTransactionBuilder parseRawUnsignedTransaction:objcParam_0 rawTransaction:rawTransaction];

    NSString *uuid = [[NSUUID UUID] UUIDString];
    RCTCoreLGBitcoinLikeTransaction *rctImpl_objcResult = (RCTCoreLGBitcoinLikeTransaction *)[self.bridge moduleForName:@"CoreLGBitcoinLikeTransaction"];
    [rctImpl_objcResult.objcImplementations setObject:objcResult forKey:uuid];
    NSDictionary *result = @{@"type" : @"CoreLGBitcoinLikeTransaction", @"uid" : uuid };


    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeTransactionBuilder::parseRawUnsignedTransaction", nil);
    }

}
@end
