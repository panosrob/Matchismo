//
//  Deck.h
//  Matchismo
//
//  Created by Panagiotis Rompolas on 1/30/13.
//  Copyright (c) 2013 Panagiotis Rompolas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (Card *)drawRandomCard;

@end
