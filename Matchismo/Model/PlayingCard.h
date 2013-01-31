//
//  PlayingCard.h
//  Matchismo
//
//  Created by Panagiotis Rompolas on 1/30/13.
//  Copyright (c) 2013 Panagiotis Rompolas. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong,nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
