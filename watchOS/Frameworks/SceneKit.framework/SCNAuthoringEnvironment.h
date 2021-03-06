//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSSet, SCNAuthoringEnvironment2, SCNManipulator, SCNNode;
@protocol SCNAuthoringEnvironmentDelegate, SCNSceneRenderer;

@interface SCNAuthoringEnvironment : NSObject
{
    struct __C3DEngineContext *_engineContext;
    id <SCNSceneRenderer> _sceneRenderer;
    _Bool _sceneRendererIsSCNView;
    // Error parsing type: ^{__C3DFXProgram={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}lb1b1^{__C3DFXProgramDelegate}}, name: _noColorProgram
    // Error parsing type: ^{__C3DFXProgram={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}lb1b1^{__C3DFXProgramDelegate}}, name: _colorOnlyProgram
    // Error parsing type: ^{__C3DFXProgram={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}lb1b1^{__C3DFXProgramDelegate}}, name: _colorAndTextureProgram
    // Error parsing type: ^{__C3DFXProgram={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}lb1b1^{__C3DFXProgramDelegate}}, name: _lightProbesProgram
    // Error parsing type: ^{__C3DFXProgram={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}lb1b1^{__C3DFXProgramDelegate}}, name: _wireframeProgram
    CDStruct_15250149 _logsInfo;
    CDStruct_15250149 _boldLogsInfo;
    CDStruct_15250149 _dynamicLinesInfo;
    CDStruct_15250149 _dynamicLinesNoDepthTestInfo;
    CDStruct_15250149 _dynamicTrianglesInfo;
    CDStruct_15250149 _overlayDynamicLinesInfo;
    CDStruct_15250149 _overlayDynamicTriangleInfo;
    CDStruct_15250149 _textInfo;
    CDStruct_15250149 _lightProbesInfo;
    CDStruct_000ae68b _normalTextInfo;
    CDStruct_000ae68b _boldTextInfo;
    struct __C3DRasterizerStates *_depthOnCullOnStates;
    struct __C3DRasterizerStates *_depthOffCullOnStates;
    struct __C3DRasterizerStates *_depthOnCullOffStates;
    struct __C3DRasterizerStates *_depthOffCullOffStates;
    const void *_arrowIndicesOffset;
    unsigned short _arrowIndicesCount;
    const void *_quadrantIndicesOffset;
    unsigned short _quadrantIndicesCount;
    const void *_quadrantRingIndicesOffset;
    unsigned short _quadrantRingIndicesCount;
    double _timedRecordingExpirationTime;
    unsigned char _timedRecordingBuffer[64000];
    unsigned int _timedRecordingBufferStart;
    unsigned int _timedRecordingBufferEnd;
    int _authoringDisplayMask;
    unsigned int _hasLighting:1;
    _Bool _shouldSnapOnGrid;
    _Bool _shouldSnapToAlign;
    _Bool _selectionIsReadonly;
    int _editingSpace;
    _Bool _graphicalSelectionEnabled;
    // Error parsing type: , name: _selectionP0
    // Error parsing type: , name: _selectionP1
    _Bool _selecting;
    _Bool _surroundToSelect;
    NSSet *_initialSelection;
    NSMutableOrderedSet *_selection;
    NSArray *_selectedNodes;
    _Bool _isOrbiting;
    float _lastGridDistance;
    float _gridUnit;
    NSMutableArray *_visibleManipulableItems;
    void *_wireframeRenderer;
    unsigned int _consoleLineCount;
    struct {
        _Bool initialized;
        _Bool showFullStatistics;
        _Bool showRenderOptionsPanel;
        float fps;
        float waitDisplayLinkTime;
        int pressedButtonIndex;
        struct __CFString *fpsString;
        struct __CFString *shortString;
        struct __CFString *internalString;
        unsigned int lightingStatistics[9];
        struct __C3DEngineStats stats;
    } _statisticsInfo;
    float _drawScale;
    id _delegate;
    SCNAuthoringEnvironment2 *_authEnv2;
}

+ (id)authoringEnvironmentForSceneRenderer:(id)arg1 createIfNeeded:(_Bool)arg2;
+ (id)authoringEnvironmentForSceneRenderer:(id)arg1;
+ (id)rendererForSceneRenderer:(id)arg1;
+ (int)defaultAuthoringDisplayMask;
@property(nonatomic) _Bool surroundToSelect; // @synthesize surroundToSelect=_surroundToSelect;
@property(nonatomic) _Bool graphicalSelectionEnabled; // @synthesize graphicalSelectionEnabled=_graphicalSelectionEnabled;
@property(nonatomic) id <SCNAuthoringEnvironmentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int editingSpace; // @synthesize editingSpace=_editingSpace;
@property(readonly, nonatomic) float gridUnit; // @synthesize gridUnit=_gridUnit;
@property(nonatomic) _Bool shouldSnapToAlign; // @synthesize shouldSnapToAlign=_shouldSnapToAlign;
@property(nonatomic) _Bool shouldSnapOnGrid; // @synthesize shouldSnapOnGrid=_shouldSnapOnGrid;
- (_Bool)isEditingSubComponent;
- (void)dealloc;
- (void)drawString:(id)arg1 atPoint:(struct CGPoint)arg2 color:(id)arg3;
- (void)drawLineFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 color:(id)arg3;
- (_Bool)didTapAtPoint:(struct CGPoint)arg1;
- (void)endOrbiting;
- (void)beginOrbiting;
- (void)saveInitialSelection;
- (void)beginEditingNodes:(id)arg1;
- (void)beginEditingNode:(id)arg1;
- (id)selectedItems;
@property(readonly, nonatomic) NSArray *selectedNodes;
- (void)cancelEdition;
@property(nonatomic) int authoringDisplayMask;
@property(readonly, nonatomic) SCNManipulator *manipulator;
@property(readonly, nonatomic) SCNNode *authoringOverlayLayer;
- (void)sceneDidChange:(id)arg1;
- (void)update;
- (id)authoringEnvironment2;
- (void)setupAuthoringEnv2;
- (void)_setupAuthoringEnv2:(id)arg1;
@property(nonatomic) _Bool selectionIsReadonly;
@property(readonly, nonatomic) struct SCNMatrix4 viewMatrix;
- (id)renderer;
@property(readonly) id <SCNSceneRenderer> sceneRenderer;
- (id)_initWithEngineContext:(struct __C3DEngineContext *)arg1;
- (id)init;

@end

