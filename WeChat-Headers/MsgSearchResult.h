//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, NSString;

@interface MsgSearchResult : NSObject
{
    unsigned int m_msgSearchResultType;
    CMessageWrap *m_oMessageWrap;
    NSString *m_nsSearchText;
}

@property(retain, nonatomic) CMessageWrap *m_oMessageWrap; // @synthesize m_oMessageWrap;
@property(retain, nonatomic) NSString *m_nsSearchText; // @synthesize m_nsSearchText;
@property(nonatomic) unsigned int m_msgSearchResultType; // @synthesize m_msgSearchResultType;
- (void).cxx_destruct;

@end

