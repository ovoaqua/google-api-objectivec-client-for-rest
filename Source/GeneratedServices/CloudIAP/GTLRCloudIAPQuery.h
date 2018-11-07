// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Identity-Aware Proxy API (iap/v1beta1)
// Description:
//   Controls access to cloud applications running on Google Cloud Platform.
// Documentation:
//   https://cloud.google.com/iap

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudIAP_GetIamPolicyRequest;
@class GTLRCloudIAP_SetIamPolicyRequest;
@class GTLRCloudIAP_TestIamPermissionsRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Cloud IAP query classes.
 */
@interface GTLRCloudIAPQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets the access control policy for an Identity-Aware Proxy protected
 *  resource.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  Method: iap.projects.iap_tunnel.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIAPCloudPlatform
 */
@interface GTLRCloudIAPQuery_ProjectsIapTunnelGetIamPolicy : GTLRCloudIAPQuery
// Previous library name was
//   +[GTLQueryCloudIAP queryForProjectsIapTunnelGetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIAP_Policy.
 *
 *  Gets the access control policy for an Identity-Aware Proxy protected
 *  resource.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  @param object The @c GTLRCloudIAP_GetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudIAPQuery_ProjectsIapTunnelGetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudIAP_GetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Sets the access control policy for an Identity-Aware Proxy protected
 *  resource. Replaces any existing policy.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  Method: iap.projects.iap_tunnel.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIAPCloudPlatform
 */
@interface GTLRCloudIAPQuery_ProjectsIapTunnelSetIamPolicy : GTLRCloudIAPQuery
// Previous library name was
//   +[GTLQueryCloudIAP queryForProjectsIapTunnelSetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being specified.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIAP_Policy.
 *
 *  Sets the access control policy for an Identity-Aware Proxy protected
 *  resource. Replaces any existing policy.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  @param object The @c GTLRCloudIAP_SetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudIAPQuery_ProjectsIapTunnelSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudIAP_SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns permissions that a caller has on the Identity-Aware Proxy protected
 *  resource. If the resource does not exist or the caller does not have
 *  Identity-Aware Proxy permissions a [google.rpc.Code.PERMISSION_DENIED]
 *  will be returned.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  Method: iap.projects.iap_tunnel.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIAPCloudPlatform
 */
@interface GTLRCloudIAPQuery_ProjectsIapTunnelTestIamPermissions : GTLRCloudIAPQuery
// Previous library name was
//   +[GTLQueryCloudIAP queryForProjectsIapTunnelTestIamPermissionsWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy detail is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIAP_TestIamPermissionsResponse.
 *
 *  Returns permissions that a caller has on the Identity-Aware Proxy protected
 *  resource. If the resource does not exist or the caller does not have
 *  Identity-Aware Proxy permissions a [google.rpc.Code.PERMISSION_DENIED]
 *  will be returned.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  @param object The @c GTLRCloudIAP_TestIamPermissionsRequest to include in
 *    the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudIAPQuery_ProjectsIapTunnelTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRCloudIAP_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Gets the access control policy for an Identity-Aware Proxy protected
 *  resource.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  Method: iap.projects.iap_tunnel.zones.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIAPCloudPlatform
 */
@interface GTLRCloudIAPQuery_ProjectsIapTunnelZonesGetIamPolicy : GTLRCloudIAPQuery
// Previous library name was
//   +[GTLQueryCloudIAP queryForProjectsIapTunnelZonesGetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIAP_Policy.
 *
 *  Gets the access control policy for an Identity-Aware Proxy protected
 *  resource.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  @param object The @c GTLRCloudIAP_GetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudIAPQuery_ProjectsIapTunnelZonesGetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudIAP_GetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Gets the access control policy for an Identity-Aware Proxy protected
 *  resource.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  Method: iap.projects.iap_tunnel.zones.instances.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIAPCloudPlatform
 */
@interface GTLRCloudIAPQuery_ProjectsIapTunnelZonesInstancesGetIamPolicy : GTLRCloudIAPQuery
// Previous library name was
//   +[GTLQueryCloudIAP queryForProjectsIapTunnelZonesInstancesGetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIAP_Policy.
 *
 *  Gets the access control policy for an Identity-Aware Proxy protected
 *  resource.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  @param object The @c GTLRCloudIAP_GetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudIAPQuery_ProjectsIapTunnelZonesInstancesGetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudIAP_GetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Sets the access control policy for an Identity-Aware Proxy protected
 *  resource. Replaces any existing policy.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  Method: iap.projects.iap_tunnel.zones.instances.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIAPCloudPlatform
 */
@interface GTLRCloudIAPQuery_ProjectsIapTunnelZonesInstancesSetIamPolicy : GTLRCloudIAPQuery
// Previous library name was
//   +[GTLQueryCloudIAP queryForProjectsIapTunnelZonesInstancesSetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being specified.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIAP_Policy.
 *
 *  Sets the access control policy for an Identity-Aware Proxy protected
 *  resource. Replaces any existing policy.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  @param object The @c GTLRCloudIAP_SetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudIAPQuery_ProjectsIapTunnelZonesInstancesSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudIAP_SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns permissions that a caller has on the Identity-Aware Proxy protected
 *  resource. If the resource does not exist or the caller does not have
 *  Identity-Aware Proxy permissions a [google.rpc.Code.PERMISSION_DENIED]
 *  will be returned.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  Method: iap.projects.iap_tunnel.zones.instances.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIAPCloudPlatform
 */
@interface GTLRCloudIAPQuery_ProjectsIapTunnelZonesInstancesTestIamPermissions : GTLRCloudIAPQuery
// Previous library name was
//   +[GTLQueryCloudIAP queryForProjectsIapTunnelZonesInstancesTestIamPermissionsWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy detail is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIAP_TestIamPermissionsResponse.
 *
 *  Returns permissions that a caller has on the Identity-Aware Proxy protected
 *  resource. If the resource does not exist or the caller does not have
 *  Identity-Aware Proxy permissions a [google.rpc.Code.PERMISSION_DENIED]
 *  will be returned.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  @param object The @c GTLRCloudIAP_TestIamPermissionsRequest to include in
 *    the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudIAPQuery_ProjectsIapTunnelZonesInstancesTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRCloudIAP_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Sets the access control policy for an Identity-Aware Proxy protected
 *  resource. Replaces any existing policy.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  Method: iap.projects.iap_tunnel.zones.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIAPCloudPlatform
 */
@interface GTLRCloudIAPQuery_ProjectsIapTunnelZonesSetIamPolicy : GTLRCloudIAPQuery
// Previous library name was
//   +[GTLQueryCloudIAP queryForProjectsIapTunnelZonesSetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being specified.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIAP_Policy.
 *
 *  Sets the access control policy for an Identity-Aware Proxy protected
 *  resource. Replaces any existing policy.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  @param object The @c GTLRCloudIAP_SetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudIAPQuery_ProjectsIapTunnelZonesSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudIAP_SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns permissions that a caller has on the Identity-Aware Proxy protected
 *  resource. If the resource does not exist or the caller does not have
 *  Identity-Aware Proxy permissions a [google.rpc.Code.PERMISSION_DENIED]
 *  will be returned.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  Method: iap.projects.iap_tunnel.zones.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIAPCloudPlatform
 */
@interface GTLRCloudIAPQuery_ProjectsIapTunnelZonesTestIamPermissions : GTLRCloudIAPQuery
// Previous library name was
//   +[GTLQueryCloudIAP queryForProjectsIapTunnelZonesTestIamPermissionsWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy detail is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIAP_TestIamPermissionsResponse.
 *
 *  Returns permissions that a caller has on the Identity-Aware Proxy protected
 *  resource. If the resource does not exist or the caller does not have
 *  Identity-Aware Proxy permissions a [google.rpc.Code.PERMISSION_DENIED]
 *  will be returned.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  @param object The @c GTLRCloudIAP_TestIamPermissionsRequest to include in
 *    the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudIAPQuery_ProjectsIapTunnelZonesTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRCloudIAP_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Gets the access control policy for an Identity-Aware Proxy protected
 *  resource.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  Method: iap.projects.iap_web.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIAPCloudPlatform
 */
@interface GTLRCloudIAPQuery_ProjectsIapWebGetIamPolicy : GTLRCloudIAPQuery
// Previous library name was
//   +[GTLQueryCloudIAP queryForProjectsIapWebGetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIAP_Policy.
 *
 *  Gets the access control policy for an Identity-Aware Proxy protected
 *  resource.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  @param object The @c GTLRCloudIAP_GetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudIAPQuery_ProjectsIapWebGetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudIAP_GetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Gets the access control policy for an Identity-Aware Proxy protected
 *  resource.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  Method: iap.projects.iap_web.services.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIAPCloudPlatform
 */
@interface GTLRCloudIAPQuery_ProjectsIapWebServicesGetIamPolicy : GTLRCloudIAPQuery
// Previous library name was
//   +[GTLQueryCloudIAP queryForProjectsIapWebServicesGetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIAP_Policy.
 *
 *  Gets the access control policy for an Identity-Aware Proxy protected
 *  resource.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  @param object The @c GTLRCloudIAP_GetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudIAPQuery_ProjectsIapWebServicesGetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudIAP_GetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Sets the access control policy for an Identity-Aware Proxy protected
 *  resource. Replaces any existing policy.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  Method: iap.projects.iap_web.services.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIAPCloudPlatform
 */
@interface GTLRCloudIAPQuery_ProjectsIapWebServicesSetIamPolicy : GTLRCloudIAPQuery
// Previous library name was
//   +[GTLQueryCloudIAP queryForProjectsIapWebServicesSetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being specified.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIAP_Policy.
 *
 *  Sets the access control policy for an Identity-Aware Proxy protected
 *  resource. Replaces any existing policy.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  @param object The @c GTLRCloudIAP_SetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudIAPQuery_ProjectsIapWebServicesSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudIAP_SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns permissions that a caller has on the Identity-Aware Proxy protected
 *  resource. If the resource does not exist or the caller does not have
 *  Identity-Aware Proxy permissions a [google.rpc.Code.PERMISSION_DENIED]
 *  will be returned.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  Method: iap.projects.iap_web.services.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIAPCloudPlatform
 */
@interface GTLRCloudIAPQuery_ProjectsIapWebServicesTestIamPermissions : GTLRCloudIAPQuery
// Previous library name was
//   +[GTLQueryCloudIAP queryForProjectsIapWebServicesTestIamPermissionsWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy detail is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIAP_TestIamPermissionsResponse.
 *
 *  Returns permissions that a caller has on the Identity-Aware Proxy protected
 *  resource. If the resource does not exist or the caller does not have
 *  Identity-Aware Proxy permissions a [google.rpc.Code.PERMISSION_DENIED]
 *  will be returned.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  @param object The @c GTLRCloudIAP_TestIamPermissionsRequest to include in
 *    the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudIAPQuery_ProjectsIapWebServicesTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRCloudIAP_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Gets the access control policy for an Identity-Aware Proxy protected
 *  resource.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  Method: iap.projects.iap_web.services.versions.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIAPCloudPlatform
 */
@interface GTLRCloudIAPQuery_ProjectsIapWebServicesVersionsGetIamPolicy : GTLRCloudIAPQuery
// Previous library name was
//   +[GTLQueryCloudIAP queryForProjectsIapWebServicesVersionsGetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIAP_Policy.
 *
 *  Gets the access control policy for an Identity-Aware Proxy protected
 *  resource.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  @param object The @c GTLRCloudIAP_GetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudIAPQuery_ProjectsIapWebServicesVersionsGetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudIAP_GetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Sets the access control policy for an Identity-Aware Proxy protected
 *  resource. Replaces any existing policy.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  Method: iap.projects.iap_web.services.versions.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIAPCloudPlatform
 */
@interface GTLRCloudIAPQuery_ProjectsIapWebServicesVersionsSetIamPolicy : GTLRCloudIAPQuery
// Previous library name was
//   +[GTLQueryCloudIAP queryForProjectsIapWebServicesVersionsSetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being specified.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIAP_Policy.
 *
 *  Sets the access control policy for an Identity-Aware Proxy protected
 *  resource. Replaces any existing policy.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  @param object The @c GTLRCloudIAP_SetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudIAPQuery_ProjectsIapWebServicesVersionsSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudIAP_SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns permissions that a caller has on the Identity-Aware Proxy protected
 *  resource. If the resource does not exist or the caller does not have
 *  Identity-Aware Proxy permissions a [google.rpc.Code.PERMISSION_DENIED]
 *  will be returned.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  Method: iap.projects.iap_web.services.versions.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIAPCloudPlatform
 */
@interface GTLRCloudIAPQuery_ProjectsIapWebServicesVersionsTestIamPermissions : GTLRCloudIAPQuery
// Previous library name was
//   +[GTLQueryCloudIAP queryForProjectsIapWebServicesVersionsTestIamPermissionsWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy detail is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIAP_TestIamPermissionsResponse.
 *
 *  Returns permissions that a caller has on the Identity-Aware Proxy protected
 *  resource. If the resource does not exist or the caller does not have
 *  Identity-Aware Proxy permissions a [google.rpc.Code.PERMISSION_DENIED]
 *  will be returned.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  @param object The @c GTLRCloudIAP_TestIamPermissionsRequest to include in
 *    the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudIAPQuery_ProjectsIapWebServicesVersionsTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRCloudIAP_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Sets the access control policy for an Identity-Aware Proxy protected
 *  resource. Replaces any existing policy.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  Method: iap.projects.iap_web.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIAPCloudPlatform
 */
@interface GTLRCloudIAPQuery_ProjectsIapWebSetIamPolicy : GTLRCloudIAPQuery
// Previous library name was
//   +[GTLQueryCloudIAP queryForProjectsIapWebSetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being specified.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIAP_Policy.
 *
 *  Sets the access control policy for an Identity-Aware Proxy protected
 *  resource. Replaces any existing policy.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  @param object The @c GTLRCloudIAP_SetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudIAPQuery_ProjectsIapWebSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudIAP_SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns permissions that a caller has on the Identity-Aware Proxy protected
 *  resource. If the resource does not exist or the caller does not have
 *  Identity-Aware Proxy permissions a [google.rpc.Code.PERMISSION_DENIED]
 *  will be returned.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  Method: iap.projects.iap_web.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIAPCloudPlatform
 */
@interface GTLRCloudIAPQuery_ProjectsIapWebTestIamPermissions : GTLRCloudIAPQuery
// Previous library name was
//   +[GTLQueryCloudIAP queryForProjectsIapWebTestIamPermissionsWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy detail is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIAP_TestIamPermissionsResponse.
 *
 *  Returns permissions that a caller has on the Identity-Aware Proxy protected
 *  resource. If the resource does not exist or the caller does not have
 *  Identity-Aware Proxy permissions a [google.rpc.Code.PERMISSION_DENIED]
 *  will be returned.
 *  More information about managing access via IAP can be found at:
 *  https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
 *
 *  @param object The @c GTLRCloudIAP_TestIamPermissionsRequest to include in
 *    the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudIAPQuery_ProjectsIapWebTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRCloudIAP_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop