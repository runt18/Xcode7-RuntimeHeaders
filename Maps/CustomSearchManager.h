//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CustomSearchManager : NSObject
{
    SearchResult *_customSearchResult;
    MapsPinsController *_pinsController;
    NSMutableArray *_observers;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isCustomSearchResult:(id)arg1;
- (void)setCustomSearchResult:(id)arg1 animated:(_Bool)arg2 shouldSelectOnMap:(_Bool)arg3;
@property(readonly, nonatomic) SearchResult *customSearchResult;
- (void)dealloc;
- (id)init;

@end