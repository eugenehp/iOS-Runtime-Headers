/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class CPDistributedMessagingCallout, NSLock, NSMutableDictionary, NSOperationQueue, NSString;

@interface CPDistributedMessagingCenter : NSObject {
    NSOperationQueue *_asyncQueue;
    NSMutableDictionary *_callouts;
    NSString *_centerName;
    CPDistributedMessagingCallout *_currentCallout;
    BOOL _delayedReply;
    NSLock *_lock;
    unsigned int _parkedServerPort;
    BOOL _portPassing;
    unsigned int _replyPort;
    NSString *_requiredEntitlement;
    unsigned int _sendPort;
    struct __CFRunLoopSource { } *_serverSource;
}

+ (id)centerNamed:(id)arg1;

- (void)_dispatchMessageNamed:(id)arg1 userInfo:(id)arg2 reply:(id*)arg3 auditToken:(struct { unsigned int x1[8]; }*)arg4;
- (id)_initAnonymousServer;
- (id)_initClientWithPort:(unsigned int)arg1;
- (id)_initWithServerName:(id)arg1;
- (BOOL)_isTaskEntitled:(struct { unsigned int x1[8]; }*)arg1;
- (id)_requiredEntitlement;
- (BOOL)_sendMessage:(id)arg1 userInfo:(id)arg2 receiveReply:(id*)arg3 error:(id*)arg4 toTarget:(id)arg5 selector:(SEL)arg6 context:(void*)arg7 nonBlocking:(BOOL)arg8;
- (BOOL)_sendMessage:(id)arg1 userInfo:(id)arg2 receiveReply:(id*)arg3 error:(id*)arg4 toTarget:(id)arg5 selector:(SEL)arg6 context:(void*)arg7;
- (BOOL)_sendMessage:(id)arg1 userInfoData:(id)arg2 oolKey:(id)arg3 oolData:(id)arg4 makeServer:(BOOL)arg5 receiveReply:(id*)arg6 nonBlocking:(BOOL)arg7 error:(id*)arg8;
- (unsigned int)_sendPort;
- (void)_sendReplyMessage:(id)arg1 portPassing:(BOOL)arg2 onMachPort:(unsigned int)arg3;
- (unsigned int)_serverPort;
- (void)_setSendPort:(unsigned int)arg1;
- (void)_setupInvalidationSource;
- (void)dealloc;
- (id)delayReply;
- (BOOL)doesServerExist;
- (id)name;
- (void)registerForMessageName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)runServerOnCurrentThread;
- (void)runServerOnCurrentThreadProtectedByEntitlement:(id)arg1;
- (void)sendDelayedReply:(id)arg1 dictionary:(id)arg2;
- (id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 error:(id*)arg3;
- (void)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 toTarget:(id)arg3 selector:(SEL)arg4 context:(void*)arg5;
- (id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2;
- (BOOL)sendMessageName:(id)arg1 userInfo:(id)arg2;
- (BOOL)sendNonBlockingMessageName:(id)arg1 userInfo:(id)arg2;
- (void)stopServer;
- (void)unregisterForMessageName:(id)arg1;

@end
