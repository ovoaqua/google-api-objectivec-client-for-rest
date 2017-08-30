// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Compute Engine Instance Groups API (resourceviews/v1beta2)
// Description:
//   The Resource View API allows users to create and manage logical sets of
//   Google Compute Engine instances.
// Documentation:
//   https://developers.google.com/compute/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: View and manage your data across Google Cloud Platform
 *  services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeResourceviewsCloudPlatform;
/**
 *  Authorization scope: View your data across Google Cloud Platform services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform.read-only"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeResourceviewsCloudPlatformReadOnly;
/**
 *  Authorization scope: View and manage your Google Compute Engine resources
 *
 *  Value "https://www.googleapis.com/auth/compute"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeResourceviewsCompute;
/**
 *  Authorization scope: View your Google Compute Engine resources
 *
 *  Value "https://www.googleapis.com/auth/compute.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeResourceviewsComputeReadonly;
/**
 *  Authorization scope: View and manage your Google Cloud Platform management
 *  resources and deployment status information
 *
 *  Value "https://www.googleapis.com/auth/ndev.cloudman"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeResourceviewsNdevCloudman;
/**
 *  Authorization scope: View your Google Cloud Platform management resources
 *  and deployment status information
 *
 *  Value "https://www.googleapis.com/auth/ndev.cloudman.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeResourceviewsNdevCloudmanReadonly;

// ----------------------------------------------------------------------------
//   GTLRResourceviewsService
//

/**
 *  Service for executing Google Compute Engine Instance Groups API queries.
 *
 *  The Resource View API allows users to create and manage logical sets of
 *  Google Compute Engine instances.
 */
@interface GTLRResourceviewsService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRResourceviewsQuery.h. The query can the be sent with GTLRService's
// execute methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop