//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGEventGeocode : NSObject
{
}

+ (id)poiCategoriesFromString:(id)arg1;
+ (void)geocodeEvent:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (id)geocodeEvent:(id)arg1;
+ (id)dateForUTCDate:(id)arg1 withTimeZone:(id)arg2;
+ (void)geocodeLocation:(id)arg1 usingMode:(unsigned int)arg2 withGeoFilters:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
+ (void)geocodePOIWithName:(id)arg1 ofTypes:(id)arg2 inRegion:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
+ (void)geocodeAddressWithCanonicalSearch:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)geocodeAddress:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (_Bool)isGeocodeCandidate:(id)arg1;
+ (_Bool)isGeocodeCandidateLocation:(id)arg1 forEvent:(id)arg2;
+ (_Bool)locationIsGeocoded:(id)arg1;
+ (_Bool)locationIsAirport:(id)arg1;
+ (id)_serialQueue;

@end

