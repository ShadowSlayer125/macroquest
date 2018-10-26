/******************************************************************************
MQ2Main.dll: MacroQuest2's extension DLL for EverQuest
Copyright (C) 2002-2003 Plazmic, 2003-2005 Lax

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License, version 2, as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
******************************************************************************/
#ifdef PRIVATE
#if defined(EQBETA)
#include "eqgame-private(beta).h"
#endif
#endif

#define __ClientName                                              "eqgame"
#define __ExpectedVersionDate                                     "Oct 25 2018"
#define __ExpectedVersionTime                                     "04:20:07"
#define __ActualVersionDate_x                                      0xAC5E74
#define __ActualVersionTime_x                                      0xAC5E68

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Beta)"
#define __MacroQuestWinName                                       "MacroQuest2(Beta)"

// Memory Protection
#define __MemChecker0_x                                            0x60CDE0
#define __MemChecker1_x                                            0x8E0670
#define __MemChecker2_x                                            0x69BF50
#define __MemChecker3_x                                            0x69BEA0
#define __MemChecker4_x                                            0x838550
#define __EncryptPad0_x                                            0xBF8990
#define __EncryptPad1_x                                            0xC56C20
#define __EncryptPad2_x                                            0xC09518
#define __EncryptPad3_x                                            0xC09118
#define __EncryptPad4_x                                            0xC47490
#define __EncryptPad5_x                                            0x101FA84
#define __AC1_x                                                    0x7F4DD6
#define __AC2_x                                                    0x5C7FFF
#define __AC3_x                                                    0x5CEE8F
#define __AC4_x                                                    0x5D2D10
#define __AC5_x                                                    0x5D8ECF
#define __AC6_x                                                    0x5DD406
#define __AC7_x                                                    0x5C7A70
#define __AC1_Data                                                 0x11111111
#define __EP1_Data_x                                               0x1EB7700

// Direct Input
#define DI8__Main_x                                                0xF14848
#define DI8__Keyboard_x                                            0xF1484C
#define DI8__Mouse_x                                               0xF14828
#define DI8__Mouse_Copy_x                                          0xE72584
#define DI8__Mouse_Check_x                                         0xF15710
#define __AutoSkillArray_x                                         0xE7349C
#define __Attack_x                                                 0xF112A3
#define __Autofire_x                                               0xF112A4
#define __BindList_x                                               0xBE7588
#define g_eqCommandStates_x                                        0xBE82F8
#define __Clicks_x                                                 0xE7263C
#define __CommandList_x                                            0xBE8EB0
#define __CurrentMapLabel_x                                        0x1026E4C
#define __CurrentSocial_x                                          0xBD2728
#define __DoAbilityList_x                                          0xEA8DC4
#define __do_loot_x                                                0x5957B0
#define __DrawHandler_x                                            0x16A3820
#define __GroupCount_x                                             0xE62F2A
#define __Guilds_x                                                 0xE68D90
#define __gWorld_x                                                 0xE63118
#define __HWnd_x                                                   0xF1482C
#define __heqmain_x                                                0x101FA6C
#define __InChatMode_x                                             0xE7256C
#define __LastTell_x                                               0xE744C0
#define __LMouseHeldTime_x                                         0xE726A8
#define __Mouse_x                                                  0xF14830
#define __MouseLook_x                                              0xE72602
#define __MouseEventTime_x                                         0xF11D58
#define __gpbCommandEvent_x                                        0xE629D8
#define __NetStatusToggle_x                                        0xE72605
#define __PCNames_x                                                0xE73A7C
#define __RangeAttackReady_x                                       0xE73780
#define __RMouseHeldTime_x                                         0xE726A4
#define __RunWalkState_x                                           0xE72570
#define __ScreenMode_x                                             0xDB08E0
#define __ScreenX_x                                                0xE72524
#define __ScreenY_x                                                0xE72520
#define __ScreenXMax_x                                             0xE72528
#define __ScreenYMax_x                                             0xE7252C
#define __ServerHost_x                                             0xE62B83
#define __ServerName_x                                             0xEA8D84
#define __ShiftKeyDown_x                                           0xE72BFC
#define __ShowNames_x                                              0xE7393C
#define __Socials_x                                                0xEA8E84
#define __SubscriptionType_x                                       0x106899C
#define __TargetAggroHolder_x                                      0x1029808
#define __ZoneType_x                                               0xE72A00
#define __GroupAggro_x                                             0x1029848
#define __LoginName_x                                              0xF150A4
#define __Inviter_x                                                0xF11220
#define __AttackOnAssist_x                                         0xE738F8
#define __UseTellWindows_x                                         0xE73C14
#define __gfMaxZoomCameraDistance_x                                0xABB2B0
#define __gfMaxCameraDistance_x                                    0xAE88CC
#define __pulAutoRun_x                                             0xE72620
#define __pulForward_x                                             0xE73C4C
#define __pulBackward_x                                            0xE73C50
#define __pulTurnRight_x                                           0xE73C54
#define __pulTurnLeft_x                                            0xE73C58
#define __pulStrafeLeft_x                                          0xE73C5C
#define __pulStrafeRight_x                                         0xE73C60
//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xE65128
#define instEQZoneInfo_x                                           0xE727F8
#define instKeypressHandler_x                                      0xF11D08
#define pinstActiveBanker_x                                        0xE62E9C
#define pinstActiveCorpse_x                                        0xE62E94
#define pinstActiveGMaster_x                                       0xE62E98
#define pinstActiveMerchant_x                                      0xE62C8C
#define pinstAggroInfo_x                                           0xC6D400
#define pinstAltAdvManager_x                                       0xDB1AC8
#define pinstAuraMgr_x                                             0xC7E0E8
#define pinstBandageTarget_x                                       0xE62EAC
#define pinstCamActor_x                                            0xDB08D0
#define pinstCDBStr_x                                              0xDB07FC
#define pinstCDisplay_x                                            0xE62EF0
#define pinstCEverQuest_x                                          0xF14968
#define pinstEverQuestInfo_x                                       0xE72518
#define pinstCharData_x                                            0xE62EF8
#define pinstCharSpawn_x                                           0xE62EE4
#define pinstControlledMissile_x                                   0xE62EFC
#define pinstControlledPlayer_x                                    0xE62EE4
#define pinstCResolutionHandler_x                                  0x16A3A50
#define pinstCSidlManager_x                                        0x16A28E4
#define pinstCXWndManager_x                                        0x16A28D8
#define instDynamicZone_x                                          0xE68C68
#define pinstDZMember_x                                            0xE68D78
#define pinstDZTimerInfo_x                                         0xE68D7C
#define pinstEQItemList_x                                          0xE61318
#define pinstEQObjectList_x                                        0xE62508
#define instEQMisc_x                                               0xDB0738
#define pinstEQSoundManager_x                                      0xDB2328
#define pinstEQSpellStrings_x                                      0xC7B538
#define instExpeditionLeader_x                                     0xE68CB2
#define instExpeditionName_x                                       0xE68CF2
#define pinstGroup_x                                               0xE62F26
#define pinstImeManager_x                                          0x16A28DC
#define pinstLocalPlayer_x                                         0xE62A7C
#define pinstMercenaryData_x                                       0xF12500
#define pinstMercenaryStats_x                                      0x1029954
#define pinstMercAltAbilities_x                                    0xDB2098
#define pinstModelPlayer_x                                         0xE62EA4
#define pinstPCData_x                                              0xE62EF8
#define pinstRealEstateItems_x                                     0xF139E8
#define pinstSkillMgr_x                                            0xF13AB8
#define pinstSpawnManager_x                                        0xF130A8
#define pinstSpellManager_x                                        0xF13C90
#define pinstSpellSets_x                                           0xF09ECC
#define pinstStringTable_x                                         0xE62818
#define pinstSwitchManager_x                                       0xE626C8
#define pinstTarget_x                                              0xE62EE0
#define pinstTargetObject_x                                        0xE62EEC
#define pinstTargetSwitch_x                                        0xE62F04
#define pinstTaskMember_x                                          0xDB05C8
#define pinstTrackTarget_x                                         0xE62EE8
#define pinstTradeTarget_x                                         0xE62EA0
#define instTributeActive_x                                        0xDB075D
#define pinstViewActor_x                                           0xDB08CC
#define pinstWorldData_x                                           0xE62F0C
#define pinstZoneAddr_x                                            0xE72A98
#define pinstPlayerPath_x                                          0xF13140
#define pinstTargetIndicator_x                                     0xF13EF8
#define pinstCTargetManager_x                                      0xF13F90
#define EQObject_Top_x                                             0xE62A78

//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xDB1110
#define pinstCAchievementsWnd_x                                    0xDB0954
#define pinstCActionsWnd_x                                         0xDB08F4
#define pinstCAdvancedDisplayOptionsWnd_x                          0xDB10FC
#define pinstCAdvancedLootWnd_x                                    0xDB10C4
#define pinstCAdventureLeaderboardWnd_x                            0x1020620
#define pinstCAdventureRequestWnd_x                                0x10206D0
#define pinstCAdventureStatsWnd_x                                  0x1020780
#define pinstCAggroMeterWnd_x                                      0xDB097C
#define pinstCAlarmWnd_x                                           0xDB092C
#define pinstCAlertHistoryWnd_x                                    0xDB0918
#define pinstCAlertStackWnd_x                                      0xDB1124
#define pinstCAlertWnd_x                                           0xDB08A4
#define pinstCAltStorageWnd_x                                      0x1020AE0
#define pinstCAudioTriggersWindow_x                                0xC6D890
#define pinstCAuraWnd_x                                            0xDB0978
#define pinstCAvaZoneWnd_x                                         0xDB091C
#define pinstCBandolierWnd_x                                       0xDB0BBC
#define pinstCBankWnd_x                                            0xDB10BC
#define pinstCBarterMerchantWnd_x                                  0x1021D20
#define pinstCBarterSearchWnd_x                                    0x1021DD0
#define pinstCBarterWnd_x                                          0x1021E80
#define pinstCBazaarConfirmationWnd_x                              0xDB111C
#define pinstCBazaarSearchWnd_x                                    0xDB090C
#define pinstCBazaarWnd_x                                          0xDB0BB8
#define pinstCBlockedBuffWnd_x                                     0xDB1080
#define pinstCBlockedPetBuffWnd_x                                  0xDB10C8
#define pinstCBodyTintWnd_x                                        0xDB089C
#define pinstCBookWnd_x                                            0xDB0BD0
#define pinstCBreathWnd_x                                          0xDB1120
#define pinstCBuffWindowNORMAL_x                                   0xDB0BEC
#define pinstCBuffWindowSHORT_x                                    0xDB0BF0
#define pinstCBugReportWnd_x                                       0xDB1108
#define pinstCButtonWnd_x                                          0x16A2B08
#define pinstCCastingWnd_x                                         0xDB1104
#define pinstCCastSpellWnd_x                                       0xDB0924
//#define pinstCCharacterCreationWnd_x                             0xDAAE5C
#define pinstCCharacterListWnd_x                                   0xDB1128
#define pinstCChatWindowManager_x                                  0x1022940
#define pinstCClaimWnd_x                                           0x1022A98
#define pinstCColorPickerWnd_x                                     0xDB08B8
#define pinstCCombatAbilityWnd_x                                   0xDB0B8C
#define pinstCCombatSkillsSelectWnd_x                              0xDB08F0
#define pinstCCompassWnd_x                                         0xDB1114
#define pinstCConfirmationDialog_x                                 0x1027998
#define pinstCContainerMgr_x                                       0xDB0BB0
#define pinstCContextMenuManager_x                                 0x16A2898
#define pinstCCursorAttachment_x                                   0xDB10F8
#define pinstCDistillerInfo_x                                      0x10263A4
#define pinstCDynamicZoneWnd_x                                     0x1023060
#define pinstCEditLabelWnd_x                                       0xDB0BD8
#define pinstCEQMainWnd_x                                          0x10232A8
#define pinstCEventCalendarWnd_x                                   0xDB0B94
#define pinstCExtendedTargetWnd_x                                  0xDB096C
#define pinstCFacePick_x                                           0xDB08B4
#define pinstCFellowshipWnd_x                                      0x10234A8
#define pinstCFileSelectionWnd_x                                   0xDB1084
#define pinstCFindItemWnd_x                                        0xDB0BA8
#define pinstCFindLocationWnd_x                                    0x1023600
#define pinstCFriendsWnd_x                                         0xDB0908
#define pinstCGemsGameWnd_x                                        0xDB08F8
#define pinstCGiveWnd_x                                            0xDB0BCC
#define pinstCGroupSearchFiltersWnd_x                              0xDB0B9C
#define pinstCGroupSearchWnd_x                                     0x10239F8
#define pinstCGroupWnd_x                                           0x1023AA8
#define pinstCGuildBankWnd_x                                       0xE738DC
#define pinstCGuildCreationWnd_x                                   0x1023C08
#define pinstCGuildMgmtWnd_x                                       0x1023CB8
#define pinstCharacterCreation_x                                   0xDB0B88
#define pinstCHelpWnd_x                                            0xDB0934
#define pinstCHeritageSelectionWnd_x                               0xDB08C0
#define pinstCHotButtonWnd_x                                       0x1025E10
#define pinstCHotButtonWnd1_x                                      0x1025E10
#define pinstCHotButtonWnd2_x                                      0x1025E14
#define pinstCHotButtonWnd3_x                                      0x1025E18
#define pinstCHotButtonWnd4_x                                      0x1025E1C
#define pinstCIconSelectionWnd_x                                   0xDB10DC
#define pinstCInspectWnd_x                                         0xDB10D0
#define pinstCInventoryWnd_x                                       0xDB0BC0
#define pinstCInvSlotMgr_x                                         0xDB0958
#define pinstCItemDisplayManager_x                                 0x10263A0
#define pinstCItemExpTransferWnd_x                                 0x10264D4
#define pinstCItemOverflowWnd_x                                    0xDB0910
#define pinstCJournalCatWnd_x                                      0xDB10CC
//#define pinstCJournalNPCWnd_x                                    0xDAB354
#define pinstCJournalTextWnd_x                                     0xDB0BE8
#define pinstCKeyRingWnd_x                                         0xDB1078
#define pinstCLargeDialogWnd_x                                     0x1028618
#define pinstCLayoutCopyWnd_x                                      0x1026820
#define pinstCLFGuildWnd_x                                         0x10268D0
#define pinstCLoadskinWnd_x                                        0xDB0914
#define pinstCLootFiltersCopyWnd_x                                 0xC7E970
#define pinstCLootFiltersWnd_x                                     0xDB08B0
#define pinstCLootSettingsWnd_x                                    0xDB08C4
#define pinstCLootWnd_x                                            0xDB08AC
#define pinstCMailAddressBookWnd_x                                 0xDB10D8
#define pinstCMailCompositionWnd_x                                 0xDB10B0
#define pinstCMailIgnoreListWnd_x                                  0xDB10E0
#define pinstCMailWnd_x                                            0xDB0C04
#define pinstCManageLootWnd_x                                      0xDB1F40
#define pinstCMapToolbarWnd_x                                      0xDB0BC4
#define pinstCMapViewWnd_x                                         0xDB0BA4
#define pinstCMarketplaceWnd_x                                     0xDB0BAC
#define pinstCMerchantWnd_x                                        0xDB08EC
#define pinstCMIZoneSelectWnd_x                                    0x1027108
#define pinstCMusicPlayerWnd_x                                     0xDB1070
#define pinstCNameChangeMercWnd_x                                  0xDB10D4
#define pinstCNameChangePetWnd_x                                   0xDB10C0
#define pinstCNameChangeWnd_x                                      0xDB0B84
#define pinstCNoteWnd_x                                            0xDB0930
#define pinstCObjectPreviewWnd_x                                   0xDB0BD4
#define pinstCOptionsWnd_x                                         0xDB0BC8
#define pinstCPetInfoWnd_x                                         0xDB1090
#define pinstCPetitionQWnd_x                                       0xDB10E4
//#define pinstCPlayerCustomizationWnd_x                             0xDAADC4
#define pinstCPlayerNotesWnd_x                                     0xDB0898
#define pinstCPlayerWnd_x                                          0xDB0904
#define pinstCPopupWndManager_x                                    0x1027998
#define pinstCProgressionSelectionWnd_x                            0x1027A48
#define pinstCPurchaseGroupWnd_x                                   0xDB1074
#define pinstCPurchaseWnd_x                                        0xDB0BDC
#define pinstCPvPLeaderboardWnd_x                                  0x1027AF8
#define pinstCPvPStatsWnd_x                                        0x1027BA8
#define pinstCQuantityWnd_x                                        0xDB10EC
#define pinstCRaceChangeWnd_x                                      0xDB0BB4
#define pinstCRaidOptionsWnd_x                                     0xDB0BA0
#define pinstCRaidWnd_x                                            0xDB10F0
#define pinstCRealEstateItemsWnd_x                                 0xDB095C
#define pinstCRealEstateLayoutDetailsWnd_x                         0xDB0B90
#define pinstCRealEstateManageWnd_x                                0xDB08C8
#define pinstCRealEstateNeighborhoodWnd_x                          0xDB08FC
#define pinstCRealEstatePlotSearchWnd_x                            0xDB0920
#define pinstCRealEstatePurchaseWnd_x                              0xDB0940
#define pinstCRespawnWnd_x                                         0xDB0B98
//#define pinstCRewardSelectionWnd_x                               0x1022600
#define pinstCSelectorWnd_x                                        0xDB0970
#define pinstCSendMoneyWnd_x                                       0xDB0BE0
#define pinstCServerListWnd_x                                      0xDB0960
#define pinstCSkillsSelectWnd_x                                    0xDB08BC
#define pinstCSkillsWnd_x                                          0xDB08A8
#define pinstCSocialEditWnd_x                                      0xDB10F4
#define pinstCSocialWnd_x                                          0xDB1100
#define pinstCSpellBookWnd_x                                       0xDB0964
#define pinstCStoryWnd_x                                           0xDB110C
#define pinstCTargetOfTargetWnd_x                                  0x10299D8
#define pinstCTargetWnd_x                                          0xDB108C
#define pinstCTaskOverlayWnd_x                                     0xDB0928
#define pinstCTaskSelectWnd_x                                      0x1029B30
#define pinstCTaskSomething_x                                      0xC7F170
#define pinstCTaskTemplateSelectWnd_x                              0x1029BE0
#define pinstCTaskWnd_x                                            0x1029C90
#define pinstCTextEntryWnd_x                                       0xDB1118
#define pinstCTextOverlay_x                                        0xC6DBA0
#define pinstCTimeLeftWnd_x                                        0xDB10B8
#define pinstCTipWndCONTEXT_x                                      0x1029E94
#define pinstCTipWndOFDAY_x                                        0x1029E90
#define pinstCTitleWnd_x                                           0x1029F40
#define pinstCTrackingWnd_x                                        0xDB1088
#define pinstCTradeskillWnd_x                                      0x102A0A8
#define pinstCTradeWnd_x                                           0xDB0944
#define pinstCTrainWnd_x                                           0xDB10E8
#define pinstCTributeBenefitWnd_x                                  0x102A2A8
#define pinstCTributeMasterWnd_x                                   0x102A358
#define pinstCTributeTrophyWnd_x                                   0x102A408
#define pinstCVideoModesWnd_x                                      0xDB0938
#define pinstCVoiceMacroWnd_x                                      0xF144C0
#define pinstCVoteResultsWnd_x                                     0xDB107C
#define pinstCVoteWnd_x                                            0xDB0BE4
#define pinstCWebManager_x                                         0xF14624
#define pinstCZoneGuideWnd_x                                       0xDB08D4
#define pinstCZonePathWnd_x                                        0xDB0900

#define pinstEQSuiteTextureLoader_x                                0xC586F0
#define pinstItemIconCache_x                                       0x1023260
#define pinstLootFiltersManager_x                                  0xC7EA20
#define pinstRewardSelectionWnd_x                                  0x10282F0

//// 
// Section 3: Miscellaneous Offsets 
////
#define __AppCrashWrapper_x                                        0xC0910C
#define __CastRay_x                                                0x590CD0
#define __CastRay2_x                                               0x590D20
#define __ConvertItemTags_x                                        0x5AB8B0
#define __CrashHandler_x                                           0x841F10
#define __EQGetTime_x                                              0x8E0160
#define __ExecuteCmd_x                                             0x589640
#define __FixHeading_x                                             0x971010
#define __get_bearing_x                                            0x590810
#define __get_melee_range_x                                        0x590F10
#define __GetAnimationCache_x                                      0x6FFBF0
#define __GetGaugeValueFromEQ_x                                    0x7F35F0
#define __GetLabelFromEQ_x                                         0x7F4D60
#define __GetXTargetType_x                                         0x972A70
#define __HeadingDiff_x                                            0x971080
#define __HelpPath_x                                               0xF11974
#define __LoadFrontEnd_x                                           0x697DB0
#define __NewUIINI_x                                               0x7F32C0
#define __pCrashHandler_x                                          0x10477F8
#define __ProcessGameEvents_x                                      0x5EE440
#define __ProcessMouseEvent_x                                      0x5EDC00
#define __SaveColors_x                                             0x53AA70
#define __STMLToText_x                                             0x913F40
#define __ToggleKeyRingItem_x                                      0x4FDC20
#define CrashDetected_x                                            0x6998A0
#define DrawNetStatus_x                                            0x61A4A0
#define Expansion_HoT_x                                            0xE738E4
#define Teleport_Table_Size_x                                      0xE629E4
#define Teleport_Table_x                                           0xE63120
#define Util__FastTime_x                                           0x8DFD20
#define wwsCrashReportCheckForUploader_x                           0x842CE0
#define wwsCrashReportPlatformLaunchUploader_x                     0x8453D0
#define __HandleMouseWheel_x                                       0x69C000

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x48AFF0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x493DF0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x493BD0

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x542370
#define AltAdvManager__IsAbilityReady_x                            0x5413F0
#define AltAdvManager__GetAAById_x                                 0x5415F0
#define AltAdvManager__CanTrainAbility_x                           0x541660
#define AltAdvManager__CanSeeAbility_x                             0x541890

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4C67C0
#define CharacterZoneClient__HasSkill_x                            0x4D1480
#define CharacterZoneClient__MakeMeVisible_x                       0x4D2BA0
#define CharacterZoneClient__IsStackBlocked_x                      0x4BAC00
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4B7380
#define CharacterZoneClient__GetItemCountWorn_x                    0x4D5530
#define CharacterZoneClient__GetItemCountInInventory_x             0x4D5610
#define CharacterZoneClient__GetCursorItemCount_x                  0x4D56F0
#define CharacterZoneClient__FindAffectSlot_x                      0x4BF6E0
#define CharacterZoneClient__BardCastBard_x                        0x4C2340
#define CharacterZoneClient__GetMaxEffects_x                       0x4B7450
#define CharacterZoneClient__GetEffect_x                           0x4B72C0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4C06E0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4C07B0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4C0800
#define CharacterZoneClient__CalcAffectChange_x                    0x4C0950
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4C0B20

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x6C21D0

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleBazaarMsg_x                        0x6CFB90

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x5FCB80
#define CButtonWnd__CButtonWnd_x                                   0x910330

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x6EE560
#define CChatManager__InitContextMenu_x                            0x6E8600
#define CChatManager__FreeChatWindow_x                             0x6ED470
#define CChatManager__GetLockedActiveChatWindow_x                  0x6F1E10
#define CChatManager__SetLockedActiveChatWindow_x                  0x6EE300

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x924B90
#define CContextMenu__dCContextMenu_x                              0x924DC0
#define CContextMenu__AddMenuItem_x                                0x924DD0
#define CContextMenu__RemoveMenuItem_x                             0x9250E0
#define CContextMenu__RemoveAllMenuItems_x                         0x925100
#define CContextMenu__CheckMenuItem_x                              0x925180
#define CContextMenu__SetMenuItem_x                                0x925000
#define CContextMenu__AddSeparator_x                               0x924F60

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x925720
#define CContextMenuManager__RemoveMenu_x                          0x925790
#define CContextMenuManager__PopupMenu_x                           0x925850
#define CContextMenuManager__Flush_x                               0x9256C0
#define CContextMenuManager__GetMenu_x                             0x495E80

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x8C0BF0
#define CChatService__GetFriendName_x                              0x8C0C00

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x6EEAD0
#define CChatWindow__Clear_x                                       0x6EFB30
#define CChatWindow__WndNotification_x                             0x6F00A0

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x922020
#define CComboWnd__Draw_x                                          0x921520
#define CComboWnd__GetCurChoice_x                                  0x921E60
#define CComboWnd__GetListRect_x                                   0x9219D0
#define CComboWnd__GetTextRect_x                                   0x922090
#define CComboWnd__InsertChoice_x                                  0x921B60
#define CComboWnd__SetColors_x                                     0x921B30
#define CComboWnd__SetChoice_x                                     0x921E30
#define CComboWnd__GetItemCount_x                                  0x921E70
#define CComboWnd__GetCurChoiceText_x                              0x921EB0

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x6F7DC0
#define CContainerWnd__vftable_x                                   0xACF270
#define CContainerWnd__SetContainer_x                              0x6F9330

// CDisplay 
#define CDisplay__CleanGameUI_x                                    0x53A830
#define CDisplay__GetClickedActor_x                                0x52D830
#define CDisplay__GetUserDefinedColor_x                            0x525F10
#define CDisplay__GetWorldFilePath_x                               0x52F280
#define CDisplay__is3dON_x                                         0x52A500
#define CDisplay__ReloadUI_x                                       0x5349A0
#define CDisplay__WriteTextHD2_x                                   0x52A2E0
#define CDisplay__TrueDistance_x                                   0x530EE0
#define CDisplay__SetViewActor_x                                   0x52D180
#define CDisplay__GetFloorHeight_x                                 0x52A5C0
#define CDisplay__SetRenderWindow_x                                0x528EF0
#define CDisplay__ToggleScreenshotMode_x                           0x52CC50

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x944520

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x929280
#define CEditWnd__GetCharIndexPt_x                                 0x92A180
#define CEditWnd__GetDisplayString_x                               0x92A020
#define CEditWnd__GetHorzOffset_x                                  0x9288C0
#define CEditWnd__GetLineForPrintableChar_x                        0x92B2C0
#define CEditWnd__GetSelStartPt_x                                  0x92A430
#define CEditWnd__GetSTMLSafeText_x                                0x929E40
#define CEditWnd__PointFromPrintableChar_x                         0x92AEF0
#define CEditWnd__SelectableCharFromPoint_x                        0x92B060
#define CEditWnd__SetEditable_x                                    0x92A500

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x5DC930
#define CEverQuest__ClickedPlayer_x                                0x5CEC70
#define CEverQuest__CreateTargetIndicator_x                        0x5EB6F0
#define CEverQuest__DeleteTargetIndicator_x                        0x5EB780
#define CEverQuest__DoTellWindow_x                                 0x4E22E0
#define CEverQuest__OutputTextToLog_x                              0x4E2510
#define CEverQuest__DropHeldItemOnGround_x                         0x5C4530
#define CEverQuest__dsp_chat_x                                     0x4E28A0
#define CEverQuest__trimName_x                                     0x5E7CA0
#define CEverQuest__Emote_x                                        0x5DD140
#define CEverQuest__EnterZone_x                                    0x5D7320
#define CEverQuest__GetBodyTypeDesc_x                              0x5E1540
#define CEverQuest__GetClassDesc_x                                 0x5E1B80
#define CEverQuest__GetClassThreeLetterCode_x                      0x5E2180
#define CEverQuest__GetDeityDesc_x                                 0x5EA040
#define CEverQuest__GetLangDesc_x                                  0x5E2340
#define CEverQuest__GetRaceDesc_x                                  0x5E1B60
#define CEverQuest__InterpretCmd_x                                 0x5EA610
#define CEverQuest__LeftClickedOnPlayer_x                          0x5C8720
#define CEverQuest__LMouseUp_x                                     0x5C6AA0
#define CEverQuest__RightClickedOnPlayer_x                         0x5C9000
#define CEverQuest__RMouseUp_x                                     0x5C7A30
#define CEverQuest__SetGameState_x                                 0x5C42C0
#define CEverQuest__UPCNotificationFlush_x                         0x5E7BA0
#define CEverQuest__IssuePetCommand_x                              0x5E3740
#define CEverQuest__ReportSuccessfulHit_x                          0x5DE420

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x709E50
#define CGaugeWnd__CalcLinesFillRect_x                             0x709EB0
#define CGaugeWnd__Draw_x                                          0x709540

// CGuild
#define CGuild__FindMemberByName_x                                 0x4AC360
#define CGuild__GetGuildName_x                                     0x4AB3A0
#define CGuild__GetGuildIndex_x                                    0x4AB730

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x725190

//CHotButton
#define CHotButton__SetButtonSize_x                                0x5FCF40

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x732050
#define CInvSlotMgr__MoveItem_x                                    0x730DB0
#define CInvSlotMgr__SelectSlot_x                                  0x732120

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x72F660
#define CInvSlot__SliderComplete_x                                 0x72D490
#define CInvSlot__GetItemBase_x                                    0x72CE10
#define CInvSlot__UpdateItem_x                                     0x72CF80

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x733A70
#define CInvSlotWnd__CInvSlotWnd_x                                 0x732D40
#define CInvSlotWnd__HandleLButtonUp_x                             0x7335F0

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x7EF7D0
#define CItemDisplayWnd__UpdateStrings_x                           0x741AB0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x73BAE0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x73BFA0
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x742090
#define CItemDisplayWnd__AboutToShow_x                             0x741700
#define CItemDisplayWnd__WndNotification_x                         0x743390

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x827120

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x747400

// CLabel 
#define CLabel__Draw_x                                             0x74CF50

// CListWnd
#define CListWnd__CListWnd_x                                       0x8FA590
#define CListWnd__dCListWnd_x                                      0x8FA8B0
#define CListWnd__AddColumn_x                                      0x8FEBE0
#define CListWnd__AddColumn1_x                                     0x8FEC30
#define CListWnd__AddLine_x                                        0x8FEFC0
#define CListWnd__AddString_x                                      0x8FEDC0
#define CListWnd__CalculateFirstVisibleLine_x                      0x8FE9A0
#define CListWnd__CalculateVSBRange_x                              0x8FE770
#define CListWnd__ClearSel_x                                       0x8FF7A0
#define CListWnd__ClearAllSel_x                                    0x8FF800
#define CListWnd__CloseAndUpdateEditWindow_x                       0x900210
#define CListWnd__Compare_x                                        0x8FE0C0
#define CListWnd__Draw_x                                           0x8FA9B0
#define CListWnd__DrawColumnSeparators_x                           0x8FD190
#define CListWnd__DrawHeader_x                                     0x8FD600
#define CListWnd__DrawItem_x                                       0x8FDA00
#define CListWnd__DrawLine_x                                       0x8FD300
#define CListWnd__DrawSeparator_x                                  0x8FD230
#define CListWnd__EnableLine_x                                     0x8FCA60
#define CListWnd__EnsureVisible_x                                  0x900130
#define CListWnd__ExtendSel_x                                      0x8FF6D0
#define CListWnd__GetColumnMinWidth_x                              0x8FC5A0
#define CListWnd__GetColumnWidth_x                                 0x8FC510
#define CListWnd__GetCurSel_x                                      0x8FBEA0
#define CListWnd__GetItemAtPoint_x                                 0x8FCCE0
#define CListWnd__GetItemAtPoint1_x                                0x8FCD50
#define CListWnd__GetItemData_x                                    0x8FBF20
#define CListWnd__GetItemHeight_x                                  0x8FC2E0
#define CListWnd__GetItemIcon_x                                    0x8FC0B0
#define CListWnd__GetItemRect_x                                    0x8FCB50
#define CListWnd__GetItemText_x                                    0x8FBF60
#define CListWnd__GetSelList_x                                     0x8FF850
#define CListWnd__GetSeparatorRect_x                               0x8FCF90
#define CListWnd__InsertLine_x                                     0x8FF3B0
#define CListWnd__RemoveLine_x                                     0x8FF500
#define CListWnd__SetColors_x                                      0x8FE750
#define CListWnd__SetColumnJustification_x                         0x8FE480
#define CListWnd__SetColumnWidth_x                                 0x8FE3A0
#define CListWnd__SetCurSel_x                                      0x8FF610
#define CListWnd__SetItemColor_x                                   0x8FFDE0
#define CListWnd__SetItemData_x                                    0x8FFDA0
#define CListWnd__SetItemText_x                                    0x8FF9D0
#define CListWnd__ShiftColumnSeparator_x                           0x8FE540
#define CListWnd__Sort_x                                           0x8FE240
#define CListWnd__ToggleSel_x                                      0x8FF640

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7623F0
#define CMapViewWnd__GetWorldCoordinates_x                         0x760B00
#define CMapViewWnd__HandleLButtonDown_x                           0x75DB60

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7855F0
// CMerchantWnd__RequestBuyItem_x                             
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x785ED0
// CMerchantWnd__RequestSellItem_x
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x786400
#define CMerchantWnd__SelectRecoverySlot_x                         0x789240
//CMerchantWnd__SelectBuySellSlot_x before
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x783FD0
//CMerchantWnd__ActualSelect_x
#define CMerchantWnd__SelectBuySellSlot_x                          0x78EDD0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x785230

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x88E990
#define CPacketScrambler__hton_x                                   0x88E980

// CSidlManager 
#define CSidlManager__FindAnimation1_x                             0x919530
#define CSidlManager__FindScreenPieceTemplate_x                    0x919940
#define CSidlManager__FindScreenPieceTemplate1_x                   0x919730
#define CSidlManager__CreateLabel_x                                0x7E6C40
#define CSidlManager__CreateXWndFromTemplate_x                     0x91CA10
#define CSidlManager__CreateXWndFromTemplate1_x                    0x91CBF0
#define CSidlManager__CreateXWnd_x                                 0x7E6B70
#define CSidlManager__CreateHotButtonWnd_x                         0x7E7140

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x9160B0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x915FA0
#define CSidlScreenWnd__ConvertToRes_x                             0x93B370
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x915A30
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x915720
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x9157F0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x9158C0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x916550
#define CSidlScreenWnd__EnableIniStorage_x                         0x916A20
#define CSidlScreenWnd__GetSidlPiece_x                             0x916740
#define CSidlScreenWnd__Init1_x                                    0x915310
#define CSidlScreenWnd__LoadIniInfo_x                              0x916A70
#define CSidlScreenWnd__LoadIniListWnd_x                           0x9175A0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x914720
#define CSidlScreenWnd__StoreIniInfo_x                             0x917120
#define CSidlScreenWnd__StoreIniVis_x                              0x917480
#define CSidlScreenWnd__WndNotification_x                          0x916460
#define CSidlScreenWnd__GetChildItem_x                             0x9169A0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x9060D0
#define CSidlScreenWnd__m_layoutCopy_x                             0x16A2768

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x661010
#define CSkillMgr__GetSkillCap_x                                   0x6611F0
#define CSkillMgr__GetNameToken_x                                  0x6607A0

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x926510
#define CSliderWnd__SetValue_x                                     0x926380
#define CSliderWnd__SetNumTicks_x                                  0x9263E0

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x7ECA40

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x92D170
#define CStmlWnd__CalculateHSBRange_x                              0x92E200
#define CStmlWnd__CalculateVSBRange_x                              0x92E170
#define CStmlWnd__CanBreakAtCharacter_x                            0x932540
#define CStmlWnd__FastForwardToEndOfTag_x                          0x933130
#define CStmlWnd__ForceParseNow_x                                  0x92D710
#define CStmlWnd__GetNextTagPiece_x                                0x9324A0
#define CStmlWnd__GetSTMLText_x                                    0x4F0750
#define CStmlWnd__GetVisibleText_x                                 0x92D730
#define CStmlWnd__InitializeWindowVariables_x                      0x932F80
#define CStmlWnd__MakeStmlColorTag_x                               0x92C900
#define CStmlWnd__MakeWndNotificationTag_x                         0x92C970
#define CStmlWnd__SetSTMLText_x                                    0x92B9D0
#define CStmlWnd__StripFirstSTMLLines_x                            0x934290
#define CStmlWnd__UpdateHistoryString_x                            0x933340

// CTabWnd 
#define CTabWnd__Draw_x                                            0x937F20
#define CTabWnd__DrawCurrentPage_x                                 0x938540
#define CTabWnd__DrawTab_x                                         0x938310
#define CTabWnd__GetCurrentPage_x                                  0x937780
#define CTabWnd__GetPageInnerRect_x                                0x9379C0
#define CTabWnd__GetTabInnerRect_x                                 0x937900
#define CTabWnd__GetTabRect_x                                      0x9377B0
#define CTabWnd__InsertPage_x                                      0x937BB0
#define CTabWnd__SetPage_x                                         0x937A40
#define CTabWnd__SetPageRect_x                                     0x937E60
#define CTabWnd__UpdatePage_x                                      0x9381D0
#define CTabWnd__GetPageFromTabIndex_x                             0x938250
#define CTabWnd__GetCurrentTabIndex_x                              0x937770

// CPageWnd 
#define CPageWnd__GetTabText_x                                     0x7478D0
#define CPageWnd__SetTabText_x                                     0x944930

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4A5EC0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x902F00
#define CTextureFont__GetTextExtent_x                              0x9030C0

//CWebManager
#define CWebManager__CreateHtmlWnd_x                               0x694BE0
#define CHtmlComponentWnd__ValidateUri_x                           0x726B80
#define CHtmlWnd__SetClientCallbacks_x                             0x601F10
#define CHtmlWnd__AddObserver_x                                    0x601F30
#define CHtmlWnd__RemoveObserver_x                                 0x601F90
#define Window__getProgress_x                                      0x83FB80
#define Window__getStatus_x                                        0x83FBA0
#define Window__getURI_x                                           0x83FBB0

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x940E60

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x8EFD50

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x4AD5C0
#define CXStr__CXStr1_x                                            0x8F8850
#define CXStr__CXStr3_x                                            0x8DC290
#define CXStr__dCXStr_x                                            0x472950
#define CXStr__operator_equal_x                                    0x8DC4C0
#define CXStr__operator_equal1_x                                   0x8DC500
#define CXStr__operator_plus_equal1_x                              0x8DCF90

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x9247B0
#define CXWnd__BringToTop_x                                        0x9098C0
#define CXWnd__Center_x                                            0x909440
#define CXWnd__ClrFocus_x                                          0x909280
#define CXWnd__Destroy_x                                           0x909320
#define CXWnd__DoAllDrawing_x                                      0x905860
#define CXWnd__DrawChildren_x                                      0x905830
#define CXWnd__DrawColoredRect_x                                   0x905CC0
#define CXWnd__DrawTooltip_x                                       0x904380
#define CXWnd__DrawTooltipAtPoint_x                                0x904440
#define CXWnd__GetBorderFrame_x                                    0x905B20
#define CXWnd__GetChildWndAt_x                                     0x909960
#define CXWnd__GetClientClipRect_x                                 0x907B30
#define CXWnd__GetScreenClipRect_x                                 0x907C00
#define CXWnd__GetScreenRect_x                                     0x907DD0
#define CXWnd__GetTooltipRect_x                                    0x905D10
#define CXWnd__GetWindowTextA_x                                    0x497530
#define CXWnd__IsActive_x                                          0x90C850
#define CXWnd__IsDescendantOf_x                                    0x9087E0
#define CXWnd__IsReallyVisible_x                                   0x908810
#define CXWnd__IsType_x                                            0x909FE0
#define CXWnd__Move_x                                              0x908880
#define CXWnd__Move1_x                                             0x908940
#define CXWnd__ProcessTransition_x                                 0x9093F0
#define CXWnd__Refade_x                                            0x908C10
#define CXWnd__Resize_x                                            0x908EA0
#define CXWnd__Right_x                                             0x909680
#define CXWnd__SetFocus_x                                          0x909240
#define CXWnd__SetFont_x                                           0x9092B0
#define CXWnd__SetKeyTooltip_x                                     0x909DF0
#define CXWnd__SetMouseOver_x                                      0x906C80
#define CXWnd__StartFade_x                                         0x9086B0
#define CXWnd__GetChildItem_x                                      0x909AD0
#define CXWnd__SetParent_x                                         0x908580

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x93C440

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x90C890
#define CXWndManager__DrawWindows_x                                0x90C8B0
#define CXWndManager__GetKeyboardFlags_x                           0x90F020
#define CXWndManager__HandleKeyboardMsg_x                          0x90EC20
#define CXWndManager__RemoveWnd_x                                  0x90F260
#define CXWndManager__RemovePendingDeletionWnd_x                   0x90F7A0

// CDBStr
#define CDBStr__GetString_x                                        0x524ED0

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4B8330
#define EQ_Character__Cur_HP_x                                     0x4CE500
#define EQ_Character__Cur_Mana_x                                   0x4D5BF0
#define EQ_Character__GetAACastingTimeModifier_x                   0x4BB240
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4AF180
#define EQ_Character__GetFocusRangeModifier_x                      0x4AF2D0
#define EQ_Character__GetHPRegen_x                                 0x4DB8C0
#define EQ_Character__GetEnduranceRegen_x                          0x4DBED0
#define EQ_Character__GetManaRegen_x                               0x4DC310
#define EQ_Character__Max_Endurance_x                              0x627BA0
#define EQ_Character__Max_HP_x                                     0x4CE330
#define EQ_Character__Max_Mana_x                                   0x6279A0
#define EQ_Character__doCombatAbility_x                            0x629D50
#define EQ_Character__UseSkill_x                                   0x4DE120
#define EQ_Character__GetConLevel_x                                0x621230
#define EQ_Character__IsExpansionFlag_x                            0x587DA0
#define EQ_Character__TotalEffect_x                                0x4C18C0
#define EQ_Character__GetPCSpellAffect_x                           0x4BBE30
#define EQ_Character__SpellDuration_x                              0x4BB960
#define EQ_Character__FindItemByRecord_x                           0x4D3B10
#define EQ_Character__GetAdjustedSkill_x                           0x4D1240
#define EQ_Character__GetBaseSkill_x                               0x4D21E0
#define EQ_Character__CanUseItem_x                                 0x4D5F00

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x8ADC30

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x63DFB0

//PcClient
#define PcClient__PcClient_x                                       0x61EB00

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4B6110
#define CCharacterListWnd__EnterWorld_x                            0x4B5B50
#define CCharacterListWnd__Quit_x                                  0x4B5860
#define CCharacterListWnd__UpdateList_x                            0x4B5CE0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x603140
#define EQ_Item__CreateItemTagString_x                             0x8888D0
#define EQ_Item__IsStackable_x                                     0x88CD20
#define EQ_Item__GetImageNum_x                                     0x88A070
#define EQ_Item__CreateItemClient_x                                0x602300
#define EQ_Item__GetItemValue_x                                    0x88B2E0
#define EQ_Item__ValueSellMerchant_x                               0x88E520
#define EQ_Item__IsKeyRingItem_x                                   0x88C6E0
#define EQ_Item__CanGoInBag_x                                      0x603260
#define EQ_Item__GetMaxItemCount_x                                 0x88B490
#define EQ_Item__GetHeldItem_x                                     0x889F40
#define EQ_Item__GetAugmentFitBySlot_x                             0x888310

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x543050
#define EQ_LoadingS__Array_x                                       0xBE0798

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x628500
#define EQ_PC__GetAlternateAbilityId_x                             0x8977B0
#define EQ_PC__GetCombatAbility_x                                  0x897E20
#define EQ_PC__GetCombatAbilityTimer_x                             0x897E90
#define EQ_PC__GetItemRecastTimer_x                                0x62A2D0
#define EQ_PC__HasLoreItem_x                                       0x621A00
#define EQ_PC__AlertInventoryChanged_x                             0x620D00
#define EQ_PC__GetPcZoneClient_x                                   0x64C6D0
#define EQ_PC__RemoveMyAffect_x                                    0x62D4D0
#define EQ_PC__GetKeyRingItems_x                                   0x898730
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x8984B0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x898A20

// EQItemList 
#define EQItemList__EQItemList_x                                   0x58E270
#define EQItemList__add_object_x                                   0x5B9BE0
#define EQItemList__add_item_x                                     0x58E880
#define EQItemList__delete_item_x                                  0x58E8D0
#define EQItemList__FreeItemList_x                                 0x58E7D0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x5224A0

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x63F830
#define EQPlayer__dEQPlayer_x                                      0x632B00
#define EQPlayer__DoAttack_x                                       0x6473D0
#define EQPlayer__EQPlayer_x                                       0x6331B0
#define EQPlayer__SetNameSpriteState_x                             0x637860
#define EQPlayer__SetNameSpriteTint_x                              0x638730
#define PlayerBase__HasProperty_j_x                                0x96F3A0
#define EQPlayer__IsTargetable_x                                   0x96F840
#define EQPlayer__CanSee_x                                         0x96F6A0
#define EQPlayer__CanSee1_x                                        0x96F770
#define PlayerBase__GetVisibilityLineSegment_x                     0x96F460

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x64A1A0
#define PlayerZoneClient__GetLevel_x                               0x64C710
#define PlayerZoneClient__IsValidTeleport_x                        0x5BAD30
#define PlayerZoneClient__LegalPlayerRace_x                        0x53C610

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x642510
#define EQPlayerManager__GetSpawnByName_x                          0x642530
#define EQPlayerManager__GetPlayerFromPartialName_x                0x6425C0

// KeyPressHandler 
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x6069C0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x606A00
#define KeypressHandler__ClearCommandStateArray_x                  0x607DF0
#define KeypressHandler__HandleKeyDown_x                           0x607E10
#define KeypressHandler__HandleKeyUp_x                             0x607EB0
#define KeypressHandler__SaveKeymapping_x                          0x608290

// MapViewMap 
#define MapViewMap__Clear_x                                        0x75E280
#define MapViewMap__SaveEx_x                                       0x761620
#define MapViewMap__SetZoom_x                                      0x765CF0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x8ABB20

// StringTable 
#define StringTable__getString_x                                   0x8A69E0

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x62D140
#define PcZoneClient__RemovePetEffect_x                            0x62D770
#define PcZoneClient__HasAlternateAbility_x                        0x6277E0
#define PcZoneClient__GetCurrentMod_x                              0x4E1220
#define PcZoneClient__GetModCap_x                                  0x4E1120
#define PcZoneClient__CanEquipItem_x                               0x627E90
#define PcZoneClient__GetItemByID_x                                0x62A750
#define PcZoneClient__GetItemByItemClass_x                         0x62A8A0
#define PcZoneClient__RemoveBuffEffect_x                           0x62D790
#define PcZoneClient__BandolierSwap_x                              0x628AC0

//Doors
#define EQSwitch__UseSwitch_x                                      0x5BF980

//IconCache
#define IconCache__GetIcon_x                                       0x6FF480

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x6F6EB0
#define CContainerMgr__CloseContainer_x                            0x6F7180
#define CContainerMgr__OpenExperimentContainer_x                   0x6F7C00

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x7B94A0

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x5FB360

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7546C0
#define CLootWnd__RequestLootSlot_x                                0x753A70

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x55B530
#define EQ_Spell__SpellAffects_x                                   0x55B9A0
#define EQ_Spell__SpellAffectBase_x                                0x55B760
#define EQ_Spell__IsStackable_x                                    0x4C60E0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4C5F30
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4B36B0
#define EQ_Spell__IsSPAStacking_x                                  0x55C7D0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x55BCF0
#define EQ_Spell__IsNoRemove_x                                     0x4C60C0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x55C7E0
#define __IsResEffectSpell_x                                       0x4C5400

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4AA020

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x8B6170

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x7FEB70
#define CTargetWnd__WndNotification_x                              0x7FE400
#define CTargetWnd__RefreshTargetBuffs_x                           0x7FE6D0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x7FD550

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x803250

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x556AD0
#define EqSoundManager__PlayScriptMp3_x                            0x556C30
#define EqSoundManager__SoundAssistPlay_x                          0x664EA0
#define EqSoundManager__WaveInstancePlay_x                         0x664410

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x513D20

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x927EF0

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x54ADF0
#define CAltAbilityData__GetMercMaxRank_x                          0x54AD90
#define CAltAbilityData__GetMaxRank_x                              0x5402A0

//CTargetRing
#define CTargetRing__Cast_x                                        0x5F9470

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x4C5F10
#define CharacterBase__CreateItemGlobalIndex_x                     0x4FA0F0
#define CharacterBase__CreateItemIndex_x                           0x601520
#define CharacterBase__GetItemPossession_x                         0x4B3560
#define CharacterBase__GetItemByGlobalIndex_x                      0x8BE6D0
#define CharacterBase__GetEffectId_x                               0x4C5EC0

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x6DF120
#define CCastSpellWnd__IsBardSongPlaying_x                         0x6DF940

//messages
#define msg_spell_worn_off_x                                       0x580090
#define msg_new_text_x                                             0x574FD0
#define __msgTokenTextParam_x                                      0x5826E0
#define msgTokenText_x                                             0x582930

//SpellManager
#define SpellManager__vftable_x                                    0xAA9898
#define SpellManager__SpellManager_x                               0x6681C0
#define Spellmanager__LoadTextSpells_x                             0x668A90
#define SpellManager__GetSpellByGroupAndRank_x                     0x668390

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x973360

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x4FA7D0
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5862B0
#define ItemGlobalIndex__IsEquippedLocation_x                      0x587D80
#define ItemGlobalIndex__IsValidIndex_x                            0x4FA830

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x8B6AB0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x8B6D30

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x74D290

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x6FB6C0
#define CCursorAttachment__Deactivate_x                            0x6FC6A0

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x93A530
#define CEQSuiteTextureLoader__GetTexture_x                        0x93A1F0

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x4F77A0

//IString
#define IString__Append_x                                          0x4EA780

//Camera
#define CDisplay__cameraType_x                                     0xDB0974
#define EverQuest__Cameras_x                                       0xE73C20

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x4FFE90
#define LootFiltersManager__GetItemFilterData_x                    0x4FF790
#define LootFiltersManager__RemoveItemLootFilter_x                 0x4FF7C0
#define LootFiltersManager__SetItemLootFilter_x                    0x4FF9E0

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x7A7450

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x979070
#define CResolutionHandler__GetWindowedStyle_x                     0x65FBB0

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x6F3C80

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x8C8FB0

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x713FA0
#define CGroupWnd__UpdateDisplay_x                                 0x713300

//patterns
//LoginController__GiveTime_x
// 56 8B F1 E8 ? FD FF FF 8B CE 5E E9 ? ? FF FF C7 01
//Feb 16 2018 Test
//IDA Style Sig: 56 8B F1 E8 ? ? ? ? 8B CE
#if defined(ROF2EMU) || defined(UFEMU)
static PBYTE lpPattern = (PBYTE)"\x56\x8B\xF1\xE8\x00\xFD\xFF\xFF\x8B\xCE\x5E\xE9\x00\x00\xFF\xFF\xC7\x01";
static char lpMask[] = "xxxx?xxxxxxx??xxxx";
#else
static PBYTE lpPattern = (PBYTE)"\x56\x8B\xF1\xE8\x00\x00\x00\x00\x8B\xCE";
static char lpMask[] = "xxxx????xx";
#endif
