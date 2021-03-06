//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/UITextInputTraits-Protocol.h>
#import <UIKitCore/UITextInputTraits_Private-Protocol.h>

@class NSIndexSet, NSString, UIColor, UIImage, UIInputContextHistory, UITextInputPasswordRules;

@interface UITextInputTraits : NSObject <UITextInputTraits, UITextInputTraits_Private, NSCopying>
{
    int autocapitalizationType;
    int autocorrectionType;
    int spellCheckingType;
    unsigned int keyboardType:8;
    unsigned int keyboardAppearance:8;
    int returnKeyType;
    _Bool enablesReturnKeyAutomatically;
    _Bool secureTextEntry;
    _Bool devicePasscodeEntry;
    NSString *textContentType;
    UITextInputPasswordRules *passwordRules;
    int smartInsertDeleteType;
    int smartQuotesType;
    int smartDashesType;
    struct __CFCharacterSet *textTrimmingSet;
    UIColor *insertionPointColor;
    UIColor *selectionBarColor;
    UIColor *selectionHighlightColor;
    UIImage *selectionDragDotImage;
    UIColor *underlineColorForTextAlternatives;
    UIColor *underlineColorForSpelling;
    unsigned int insertionPointWidth;
    int textLoupeVisibility;
    int textSelectionBehavior;
    id textSuggestionDelegate;
    _Bool isSingleLineDocument;
    _Bool contentsIsSingleValue;
    _Bool acceptsEmoji;
    _Bool acceptsDictationSearchResults;
    _Bool useAutomaticEndpointing;
    _Bool showDictationButton;
    _Bool forceEnableDictation;
    _Bool forceDisableDictation;
    _Bool forceDefaultDictationInfo;
    _Bool returnKeyGoesToNextResponder;
    _Bool acceptsFloatingKeyboard;
    _Bool forceFloatingKeyboard;
    struct UIEdgeInsets floatingKeyboardEdgeInsets;
    _Bool acceptsSplitKeyboard;
    _Bool displaySecureTextUsingPlainText;
    _Bool learnsCorrections;
    int emptyContentReturnKeyType;
    int shortcutConversionType;
    _Bool suppressReturnKeyStyling;
    _Bool useInterfaceLanguageForLocalization;
    _Bool deferBecomingResponder;
    _Bool enablesReturnKeyOnNonWhiteSpaceContent;
    NSString *autocorrectionContext;
    NSString *responseContext;
    _Bool disablePrediction;
    _Bool disableInputBars;
    _Bool isCarPlayIdiom;
    NSString *recentInputIdentifier;
    struct _NSRange validTextRange;
    int textScriptType;
    UIInputContextHistory *inputContextHistory;
    _Bool manageRecentInputs;
    _Bool hasDefaultContents;
    _Bool acceptsPayloads;
    _Bool displaySecureEditsUsingPlainText;
    _Bool hidePrediction;
    _Bool loadKeyboardsForSiriLanguage;
    NSIndexSet *PINEntrySeparatorIndexes;
    int forceDictationKeyboardType;
}

+ (_Bool)keyboardTypeRequiresASCIICapable:(int)arg1;
+ (id)traitsByAdoptingTraits:(id)arg1 lightweight:(_Bool)arg2;
+ (id)traitsByAdoptingTraits:(id)arg1;
+ (id)traitEnvironmentFromTraits:(id)arg1;
+ (id)defaultTextInputTraits;
+ (int)configuredAppearanceForAppearance:(int)arg1 withTraitEnvironment:(id)arg2;
+ (int)accessibleAppearanceForAppearance:(int)arg1;
+ (int)translateToUISmartInsertDeleteEnabled:(_Bool)arg1;
+ (int)translateToUITextScriptType:(unsigned int)arg1;
+ (int)translateToUIReturnKeyType:(unsigned int)arg1;
+ (int)translateToUIKeyboardAppearance:(unsigned int)arg1;
+ (int)translateToUIKeyboardType:(unsigned int)arg1;
+ (int)translateToUISpellCheckingType:(unsigned int)arg1;
+ (int)translateToUIAutocorrectionType:(unsigned int)arg1;
+ (int)translateToUIAutocapitalizationType:(unsigned int)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool loadKeyboardsForSiriLanguage; // @synthesize loadKeyboardsForSiriLanguage;
@property(nonatomic) int textScriptType; // @synthesize textScriptType;
@property(nonatomic) _Bool isCarPlayIdiom; // @synthesize isCarPlayIdiom;
@property(nonatomic) _Bool disableInputBars; // @synthesize disableInputBars;
@property(nonatomic) _Bool hidePrediction; // @synthesize hidePrediction;
@property(nonatomic) _Bool disablePrediction; // @synthesize disablePrediction;
@property(retain, nonatomic) UIInputContextHistory *inputContextHistory; // @synthesize inputContextHistory;
@property(copy, nonatomic) NSString *responseContext; // @synthesize responseContext;
@property(copy, nonatomic) NSString *autocorrectionContext; // @synthesize autocorrectionContext;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent; // @synthesize enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) _Bool deferBecomingResponder; // @synthesize deferBecomingResponder;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization; // @synthesize useInterfaceLanguageForLocalization;
@property(nonatomic) _Bool suppressReturnKeyStyling; // @synthesize suppressReturnKeyStyling;
@property(nonatomic) int shortcutConversionType; // @synthesize shortcutConversionType;
@property(nonatomic) _Bool learnsCorrections; // @synthesize learnsCorrections;
@property(nonatomic) _Bool displaySecureEditsUsingPlainText; // @synthesize displaySecureEditsUsingPlainText;
@property(nonatomic) _Bool displaySecureTextUsingPlainText; // @synthesize displaySecureTextUsingPlainText;
@property(nonatomic) _Bool acceptsSplitKeyboard; // @synthesize acceptsSplitKeyboard;
@property(nonatomic) struct UIEdgeInsets floatingKeyboardEdgeInsets; // @synthesize floatingKeyboardEdgeInsets;
@property(nonatomic) _Bool forceFloatingKeyboard; // @synthesize forceFloatingKeyboard;
@property(nonatomic) _Bool acceptsFloatingKeyboard; // @synthesize acceptsFloatingKeyboard;
@property(nonatomic) _Bool returnKeyGoesToNextResponder; // @synthesize returnKeyGoesToNextResponder;
@property(nonatomic) int emptyContentReturnKeyType; // @synthesize emptyContentReturnKeyType;
@property(nonatomic) int forceDictationKeyboardType; // @synthesize forceDictationKeyboardType;
@property(nonatomic) _Bool forceDefaultDictationInfo; // @synthesize forceDefaultDictationInfo;
@property(nonatomic) _Bool forceDisableDictation; // @synthesize forceDisableDictation;
@property(nonatomic) _Bool forceEnableDictation; // @synthesize forceEnableDictation;
@property(nonatomic) _Bool showDictationButton; // @synthesize showDictationButton;
@property(nonatomic) _Bool useAutomaticEndpointing; // @synthesize useAutomaticEndpointing;
@property(nonatomic) _Bool acceptsDictationSearchResults; // @synthesize acceptsDictationSearchResults;
@property(nonatomic) _Bool acceptsEmoji; // @synthesize acceptsEmoji;
@property(nonatomic) _Bool acceptsPayloads; // @synthesize acceptsPayloads;
@property(nonatomic) _Bool hasDefaultContents; // @synthesize hasDefaultContents;
@property(nonatomic) _Bool contentsIsSingleValue; // @synthesize contentsIsSingleValue;
@property(nonatomic) _Bool isSingleLineDocument; // @synthesize isSingleLineDocument;
@property(nonatomic) int textSelectionBehavior; // @synthesize textSelectionBehavior;
@property(nonatomic) int textLoupeVisibility; // @synthesize textLoupeVisibility;
@property(nonatomic) unsigned int insertionPointWidth; // @synthesize insertionPointWidth;
@property(retain, nonatomic) UIColor *underlineColorForSpelling; // @synthesize underlineColorForSpelling;
@property(retain, nonatomic) UIColor *underlineColorForTextAlternatives; // @synthesize underlineColorForTextAlternatives;
@property(retain, nonatomic) UIImage *selectionDragDotImage; // @synthesize selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor; // @synthesize selectionHighlightColor;
@property(retain, nonatomic) UIColor *selectionBarColor; // @synthesize selectionBarColor;
@property(retain, nonatomic) UIColor *insertionPointColor; // @synthesize insertionPointColor;
@property(copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes; // @synthesize PINEntrySeparatorIndexes;
@property(nonatomic) struct _NSRange validTextRange; // @synthesize validTextRange;
@property(nonatomic) _Bool manageRecentInputs; // @synthesize manageRecentInputs;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules; // @synthesize passwordRules;
@property(nonatomic) int smartDashesType; // @synthesize smartDashesType;
@property(nonatomic) int smartQuotesType; // @synthesize smartQuotesType;
@property(nonatomic) int smartInsertDeleteType; // @synthesize smartInsertDeleteType;
@property(copy, nonatomic) NSString *recentInputIdentifier; // @synthesize recentInputIdentifier;
@property(copy, nonatomic) NSString *textContentType; // @synthesize textContentType;
@property(nonatomic, getter=isDevicePasscodeEntry) _Bool devicePasscodeEntry; // @synthesize devicePasscodeEntry;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @synthesize secureTextEntry;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @synthesize enablesReturnKeyAutomatically;
@property(nonatomic) int returnKeyType; // @synthesize returnKeyType;
@property(nonatomic) int keyboardAppearance; // @synthesize keyboardAppearance;
@property(nonatomic) int keyboardType; // @synthesize keyboardType;
@property(nonatomic) int spellCheckingType; // @synthesize spellCheckingType;
@property(nonatomic) int autocorrectionType; // @synthesize autocorrectionType;
@property(nonatomic) int autocapitalizationType; // @synthesize autocapitalizationType;
- (_Bool)isEqual:(id)arg1;
- (int)updateResultComparedToTraits:(id)arg1;
- (_Bool)publicTraitsMatchTraits:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)takeTraitsFrom:(id)arg1 lightweight:(_Bool)arg2;
- (void)takeTraitsFrom:(id)arg1;
- (void)extendedPathToObtainTraitsFrom:(id)arg1 lightweight:(_Bool)arg2;
- (void)fastPathToObtainTraitsFrom:(id)arg1;
- (void)setToDefaultValues;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) int dictationInfoKeyboardType;
@property(readonly, nonatomic) int dictationKeyboardType;
@property(nonatomic) id textSuggestionDelegate; // @dynamic textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet; // @dynamic textTrimmingSet;
- (id)dictionaryRepresentation;
- (void)setToSecureValues;
- (void)overlayWithTITextInputTraits:(id)arg1;
- (void)_setColorsToMatchTintColor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

