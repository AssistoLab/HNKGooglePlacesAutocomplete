//
//  HNKGooglePlacesAutocompletePlace.h
//  HNKGooglePlacesAutocomplete
//
// Copyright (c) 2015 Harlan Kellaway
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#import "HNKGooglePlacesAutocompleteModel.h"

/**
 *  Place types
 */
typedef NS_ENUM(NSInteger, HNKGooglePlaceType) {
  HNKGooglePlaceTypeUnknown = 0,
  HNKGooglePlaceTypeAdministrativeAreaLevel1,
  HNKGooglePlaceTypeAdministrativeAreaLevel2,
  HNKGooglePlaceTypeAdministrativeAreaLevel3,
  HNKGooglePlaceTypeAdministrativeAreaLevel4,
  HNKGooglePlaceTypeAdministrativeAreaLevel5,
  HNKGooglePlaceTypeColloquialArea,
  HNKGooglePlaceTypeCountry,
  HNKGooglePlaceTypeEstablishment,
  HNKGooglePlaceTypeFloor,
  HNKGooglePlaceTypeGeocode,
  HNKGooglePlaceTypeIntersection,
  HNKGooglePlaceTypeLocality,
  HNKGooglePlaceTypeNaturalFeature,
  HNKGooglePlaceTypeNeighborhood,
  HNKGooglePlaceTypePolitical,
  HNKGooglePlaceTypePointOfInterest,
  HNKGooglePlaceTypePostBox,
  HNKGooglePlaceTypePostalCode,
  HNKGooglePlaceTypePostalCodePrefix,
  HNKGooglePlaceTypePostalCodeSuffix,
  HNKGooglePlaceTypePostalTown,
  HNKGooglePlaceTypePremise,
  HNKGooglePlaceTypeRoom,
  HNKGooglePlaceTypeRoute,
  HNKGooglePlaceTypeStreetAddress,
  HNKGooglePlaceTypeStreetNumber,
  HNKGooglePlaceTypeSublocality,
  HNKGooglePlaceTypeSublocalityLevel1,
  HNKGooglePlaceTypeSublocalityLevel2,
  HNKGooglePlaceTypeSublocalityLevel3,
  HNKGooglePlaceTypeSublocalityLevel4,
  HNKGooglePlaceTypeSublocalityLevel5,
  HNKGooglePlaceTypeSubpremise,
  HNKGooglePlaceTypeTransitStation
};

/**
 *  Place prediction returned from search query
 */
@interface HNKGooglePlacesAutocompletePlace : HNKGooglePlacesAutocompleteModel

/**
 *  Human-readable name for the returned result
 *
 *  Note: For establishment type results, this is usually the business name
 */
@property(nonatomic, strong, readonly) NSString *name;

/**
 *  Collection of Substrings describe the location of the entered term in the
 *  prediction result text, so that the term can be highlighted if desired
 */
@property(nonatomic, strong, readonly) NSArray *substrings;

/**
 *  A textual identifier that uniquely identifies a place
 */
@property(nonatomic, strong, readonly) NSString *placeId;

/**
 *  A collection of Terms identifying each section of the returned description
 */
@property(nonatomic, strong, readonly) NSArray *terms;

/**
 *  A collection of NSNumbers whose integerValues corresponse to
 *  HNKGooglePlaceTypes
 */
@property(nonatomic, strong, readonly) NSArray *types;

/**
 *  Returns whether the provided placeType is included in this Place's types
 */
- (BOOL)isPlaceType:(HNKGooglePlaceType)placeType;

@end
