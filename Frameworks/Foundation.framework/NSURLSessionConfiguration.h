/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray, NSDictionary, NSHTTPCookieStorage, NSString, NSURLCache, NSURLCredentialStorage;

@interface NSURLSessionConfiguration : NSObject <NSCopying> {
    NSDictionary *_HTTPAdditionalHeaders;
    unsigned int _HTTPCookieAcceptPolicy;
    NSHTTPCookieStorage *_HTTPCookieStorage;
    int _HTTPMaximumConnectionsPerHost;
    BOOL _HTTPShouldSetCookies;
    BOOL _HTTPShouldUsePipelining;
    int _TLSMaximumSupportedProtocol;
    int _TLSMinimumSupportedProtocol;
    NSURLCache *_URLCache;
    NSURLCredentialStorage *_URLCredentialStorage;
    BOOL _allowsCellularAccess;
    NSDictionary *_connectionProxyDictionary;
    BOOL _discretionary;
    NSString *_identifier;
    unsigned int _networkServiceType;
    NSArray *_protocolClasses;
    unsigned int _requestCachePolicy;
    BOOL _sessionSendsLaunchEvents;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
}

@property(copy) NSDictionary * HTTPAdditionalHeaders;
@property unsigned int HTTPCookieAcceptPolicy;
@property(retain) NSHTTPCookieStorage * HTTPCookieStorage;
@property int HTTPMaximumConnectionsPerHost;
@property BOOL HTTPShouldSetCookies;
@property BOOL HTTPShouldUsePipelining;
@property int TLSMaximumSupportedProtocol;
@property int TLSMinimumSupportedProtocol;
@property(retain) NSURLCache * URLCache;
@property(retain) NSURLCredentialStorage * URLCredentialStorage;
@property BOOL allowsCellularAccess;
@property(copy) NSDictionary * connectionProxyDictionary;
@property(getter=isDiscretionary) BOOL discretionary;
@property(readonly) NSString * identifier;
@property unsigned int networkServiceType;
@property(copy) NSArray * protocolClasses;
@property unsigned int requestCachePolicy;
@property BOOL sessionSendsLaunchEvents;
@property double timeoutIntervalForRequest;
@property double timeoutIntervalForResource;

+ (void)initialize;

- (id)HTTPAdditionalHeaders;
- (unsigned int)HTTPCookieAcceptPolicy;
- (id)HTTPCookieStorage;
- (int)HTTPMaximumConnectionsPerHost;
- (BOOL)HTTPShouldSetCookies;
- (BOOL)HTTPShouldUsePipelining;
- (int)TLSMaximumSupportedProtocol;
- (int)TLSMinimumSupportedProtocol;
- (id)URLCache;
- (id)URLCredentialStorage;
- (BOOL)allowsCellularAccess;
- (id)connectionProxyDictionary;
- (id)identifier;
- (BOOL)isDiscretionary;
- (unsigned int)networkServiceType;
- (id)protocolClasses;
- (unsigned int)requestCachePolicy;
- (BOOL)sessionSendsLaunchEvents;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (void)setConnectionProxyDictionary:(id)arg1;
- (void)setDiscretionary:(BOOL)arg1;
- (void)setHTTPAdditionalHeaders:(id)arg1;
- (void)setHTTPCookieAcceptPolicy:(unsigned int)arg1;
- (void)setHTTPCookieStorage:(id)arg1;
- (void)setHTTPMaximumConnectionsPerHost:(int)arg1;
- (void)setHTTPShouldSetCookies:(BOOL)arg1;
- (void)setHTTPShouldUsePipelining:(BOOL)arg1;
- (void)setNetworkServiceType:(unsigned int)arg1;
- (void)setProtocolClasses:(id)arg1;
- (void)setRequestCachePolicy:(unsigned int)arg1;
- (void)setSessionSendsLaunchEvents:(BOOL)arg1;
- (void)setTLSMaximumSupportedProtocol:(int)arg1;
- (void)setTLSMinimumSupportedProtocol:(int)arg1;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (void)setURLCache:(id)arg1;
- (void)setURLCredentialStorage:(id)arg1;
- (double)timeoutIntervalForRequest;
- (double)timeoutIntervalForResource;

@end
