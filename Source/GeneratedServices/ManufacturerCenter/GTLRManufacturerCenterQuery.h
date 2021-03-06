// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Manufacturer Center API (manufacturers/v1)
// Description:
//   Public API for managing Manufacturer Center related data.
// Documentation:
//   https://developers.google.com/manufacturers/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Manufacturer Center query classes.
 */
@interface GTLRManufacturerCenterQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets the product from a Manufacturer Center account, including product
 *  issues.
 *
 *  Method: manufacturers.accounts.products.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeManufacturerCenterManufacturercenter
 */
@interface GTLRManufacturerCenterQuery_AccountsProductsGet : GTLRManufacturerCenterQuery
// Previous library name was
//   +[GTLQueryManufacturerCenter queryForAccountsProductsGetWithparent:name:]

/**
 *  Name in the format `{target_country}:{content_language}:{product_id}`.
 *  `target_country` - The target country of the product as a CLDR territory
 *  code (for example, US).
 *  `content_language` - The content language of the product as a two-letter
 *  ISO 639-1 language code (for example, en).
 *  `product_id` - The ID of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#id.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Parent ID in the format `accounts/{account_id}`.
 *  `account_id` - The ID of the Manufacturer Center account.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRManufacturerCenter_Product.
 *
 *  Gets the product from a Manufacturer Center account, including product
 *  issues.
 *
 *  @param parent Parent ID in the format `accounts/{account_id}`.
 *    `account_id` - The ID of the Manufacturer Center account.
 *  @param name Name in the format
 *    `{target_country}:{content_language}:{product_id}`.
 *    `target_country` - The target country of the product as a CLDR territory
 *    code (for example, US).
 *    `content_language` - The content language of the product as a two-letter
 *    ISO 639-1 language code (for example, en).
 *    `product_id` - The ID of the product. For more information, see
 *    https://support.google.com/manufacturers/answer/6124116#id.
 *
 *  @returns GTLRManufacturerCenterQuery_AccountsProductsGet
 */
+ (instancetype)queryWithParent:(NSString *)parent
                           name:(NSString *)name;

@end

/**
 *  Lists all the products in a Manufacturer Center account.
 *
 *  Method: manufacturers.accounts.products.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeManufacturerCenterManufacturercenter
 */
@interface GTLRManufacturerCenterQuery_AccountsProductsList : GTLRManufacturerCenterQuery
// Previous library name was
//   +[GTLQueryManufacturerCenter queryForAccountsProductsListWithparent:]

/**
 *  Maximum number of product statuses to return in the response, used for
 *  paging.
 */
@property(nonatomic, assign) NSInteger pageSize;

/** The token returned by the previous request. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Parent ID in the format `accounts/{account_id}`.
 *  `account_id` - The ID of the Manufacturer Center account.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRManufacturerCenter_ListProductsResponse.
 *
 *  Lists all the products in a Manufacturer Center account.
 *
 *  @param parent Parent ID in the format `accounts/{account_id}`.
 *    `account_id` - The ID of the Manufacturer Center account.
 *
 *  @returns GTLRManufacturerCenterQuery_AccountsProductsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

NS_ASSUME_NONNULL_END
