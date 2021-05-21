//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("001_001_Probate_CreateCase_LaunchHomePage");
	truclient_step("2", "Navigate to 'https://manage-case.per...form.hmcts.net/'", "snapshot=Action_2.inf");
	truclient_step("3", "Verify Sign in 's Visible Text contains Sign in", "snapshot=Action_3.inf");
	lr_end_transaction("001_001_Probate_CreateCase_LaunchHomePage",0);
	truclient_step("4", "Wait 3 seconds", "snapshot=Action_4.inf");
	truclient_step("5", "Sign in", "snapshot=Action_5.inf");
	{
		truclient_step("5.1", "Click on Email address textbox", "snapshot=Action_5.1.inf");
		truclient_step("5.2", "Type probateuser3@mailinator.com in Email address textbox", "snapshot=Action_5.2.inf");
		truclient_step("5.3", "Click on Password passwordbox", "snapshot=Action_5.3.inf");
		truclient_step("5.4", "Type ********** in Password passwordbox", "snapshot=Action_5.4.inf");
		lr_start_transaction("001_002_Probate_CreateCase_SignIn");
		truclient_step("5.5", "Click on Sign in button", "snapshot=Action_5.5.inf");
	}
	truclient_step("6", "Verify Case List 's Visible Text contains Case List", "snapshot=Action_6.inf");
	lr_end_transaction("001_002_Probate_CreateCase_SignIn",0);
	truclient_step("7", "Wait 3 seconds", "snapshot=Action_7.inf");
	lr_start_transaction("001_003_Probate_CreateCase_SelectCreateCase");
	truclient_step("8", "Click on Create case link", "snapshot=Action_8.inf");
	truclient_step("9", "Verify Create Case 's Visible Text contains Create Case", "snapshot=Action_9.inf");
	lr_end_transaction("001_003_Probate_CreateCase_SelectCreateCase",0);
	truclient_step("10", "Wait 3 seconds", "snapshot=Action_10.inf");
	truclient_step("11", "Verify Event 's Visible Text contains Event", "snapshot=Action_11.inf");
	truclient_step("12", "Verify Jurisdiction 's Visible Text contains --Select a value--Manage...awFamily Divorce", "snapshot=Action_12.inf");
	truclient_step("13", "Select Manage probate applications from Jurisdiction listbox", "snapshot=Action_13.inf");
	truclient_step("14", "Select Grant of representation from Case type listbox", "snapshot=Action_14.inf");
	truclient_step("15", "Select Apply for probate from Event listbox", "snapshot=Action_15.inf");
	lr_start_transaction("001_004_Probate_CreateCase_StartCreateCase");
	truclient_step("16", "Click on Start button", "snapshot=Action_16.inf");
	truclient_step("17", "Verify Submit grant of probate... 's Visible Text contains Submit grant of probate ...lications online", "snapshot=Action_17.inf");
	lr_end_transaction("001_004_Probate_CreateCase_StartCreateCase",0);
	truclient_step("18", "Wait 3 seconds", "snapshot=Action_18.inf");
	lr_start_transaction("001_005_Probate_CreateCase_SubmitGrantOfProabateApplication");
	truclient_step("19", "Click on Save and continue button", "snapshot=Action_19.inf");
	truclient_step("20", "Verify Probate practitioner... 's Visible Text contains Probate practitioner details", "snapshot=Action_20.inf");
	lr_end_transaction("001_005_Probate_CreateCase_SubmitGrantOfProabateApplication",0);
	truclient_step("21", "Wait 3 seconds", "snapshot=Action_21.inf");
	truclient_step("22", "Save and continue", "snapshot=Action_22.inf");
	{
		truclient_step("22.1", "Click on Yes", "snapshot=Action_22.1.inf");
		truclient_step("22.2", "Click on Probate practitioner... textbox", "snapshot=Action_22.2.inf");
		truclient_step("22.3", "Type UIPerformance in Probate practitioner... textbox", "snapshot=Action_22.3.inf");
		truclient_step("22.4", "Type Tester in Probate practitioner... textbox", "snapshot=Action_22.4.inf");
		truclient_step("22.5", "Click on Yes", "snapshot=Action_22.5.inf");
		truclient_step("22.6", "Click on Yes", "snapshot=Action_22.6.inf");
		truclient_step("22.7", "Click on Name of the firm, or... textbox", "snapshot=Action_22.7.inf");
		truclient_step("22.8", "Type UI Performance Testers Probate in Name of the firm, or... textbox", "snapshot=Action_22.8.inf");
		truclient_step("22.9", "Click on Enter a UK postcode textbox", "snapshot=Action_22.9.inf");
		truclient_step("22.10", "Type e14 3rr in Enter a UK postcode textbox", "snapshot=Action_22.10.inf");
		truclient_step("22.11", "Click on Find address button", "snapshot=Action_22.11.inf");
		truclient_step("22.12", "Select Flat 10, 214 Westferry Road, London from Select an address listbox", "snapshot=Action_22.12.inf");
		truclient_step("22.13", "Click on Contact email address textbox", "snapshot=Action_22.13.inf");
		truclient_step("22.14", "Type UIPerformanceProbate@gmail.com in Contact email address textbox", "snapshot=Action_22.14.inf");
		truclient_step("22.15", "Click on Contact phone number... textbox", "snapshot=Action_22.15.inf");
		truclient_step("22.16", "Type 07712345678 in Contact phone number... textbox", "snapshot=Action_22.16.inf");
		truclient_step("22.17", "Click on Your reference for this... textbox", "snapshot=Action_22.17.inf");
		truclient_step("22.18", "Type Probate1234 in Your reference for this... textbox", "snapshot=Action_22.18.inf");
		lr_start_transaction("001_006_Probate_CreateCase_ProbatePractioner");
		truclient_step("22.19", "Click on Save and continue button", "snapshot=Action_22.19.inf");
	}
	truclient_step("23", "Verify Check your answers 's Visible Text contains Check your answers", "snapshot=Action_23.inf");
	lr_end_transaction("001_006_Probate_CreateCase_ProbatePractioner",0);
	truclient_step("24", "Wait 3 seconds", "snapshot=Action_24.inf");
	lr_start_transaction("001_007_Probate_CreateCase_CheckYourAnswers");
	truclient_step("25", "Click on Save and continue button", "snapshot=Action_25.inf");
	truclient_step("26", "Verify Add deceased details 's Visible Text contains Add deceased details", "snapshot=Action_26.inf");
	lr_end_transaction("001_007_Probate_CreateCase_CheckYourAnswers",0);
	truclient_step("27", "Wait 3 seconds", "snapshot=Action_27.inf");
	lr_start_transaction("001_008_Probate_CreateCase_DeceasedDetails_ SelectAddDeceasedDetails");
	truclient_step("28", "Click on Add deceased details link", "snapshot=Action_28.inf");
	truclient_step("29", "Verify What's the full name... 's Visible Text contains What's the full name of the deceased?", "snapshot=Action_29.inf");
	lr_end_transaction("001_008_Probate_CreateCase_DeceasedDetails_ SelectAddDeceasedDetails",0);
	truclient_step("30", "Wait 3 seconds", "snapshot=Action_30.inf");
	truclient_step("31", "Continue", "snapshot=Action_31.inf");
	{
		truclient_step("31.1", "Click on First name(s) textbox", "snapshot=Action_31.1.inf");
		truclient_step("31.2", "Type UI Performance in First name(s) textbox", "snapshot=Action_31.2.inf");
		truclient_step("31.3", "Type Tester in Last name(s) textbox", "snapshot=Action_31.3.inf");
		truclient_step("31.4", "Click on Day textbox", "snapshot=Action_31.4.inf");
		truclient_step("31.5", "Type 1 in Day textbox", "snapshot=Action_31.5.inf");
		truclient_step("31.6", "Click on Month textbox", "snapshot=Action_31.6.inf");
		truclient_step("31.7", "Type 1 in Month textbox", "snapshot=Action_31.7.inf");
		truclient_step("31.8", "Click on Year textbox", "snapshot=Action_31.8.inf");
		truclient_step("31.9", "Type 1980 in Year textbox", "snapshot=Action_31.9.inf");
		truclient_step("31.10", "Type 1 in Day textbox", "snapshot=Action_31.10.inf");
		truclient_step("31.11", "Click on Month textbox", "snapshot=Action_31.11.inf");
		truclient_step("31.12", "Type 1 in Month textbox", "snapshot=Action_31.12.inf");
		truclient_step("31.13", "Click on Year textbox", "snapshot=Action_31.13.inf");
		truclient_step("31.14", "Type 2021 in Year textbox", "snapshot=Action_31.14.inf");
		lr_start_transaction("001_009_Probate_CreateCase_DeceasedDetails_VerifyWhatsYourFullNameContinue");
		truclient_step("31.15", "Click on Continue button", "snapshot=Action_31.15.inf");
	}
	truclient_step("32", "Verify Was the deceased domiciled... 's Visible Text contains Was the deceased domicil... of their death?", "snapshot=Action_32.inf");
	lr_end_transaction("001_009_Probate_CreateCase_DeceasedDetails_VerifyWhatsYourFullNameContinue",0);
	truclient_step("33", "Wait 3 seconds", "snapshot=Action_33.inf");
	truclient_step("34", "Continue", "snapshot=Action_34.inf");
	{
		truclient_step("34.1", "Click on Yes", "snapshot=Action_34.1.inf");
		truclient_step("34.2", "Click on Enter a UK postcode textbox", "snapshot=Action_34.2.inf");
		truclient_step("34.3", "Type e14 3rr in Enter a UK postcode textbox", "snapshot=Action_34.3.inf");
		truclient_step("34.4", "Click on Find address button", "snapshot=Action_34.4.inf");
		truclient_step("34.5", "Select Flat 8, 214 Westferry Road, London from Select an address listbox", "snapshot=Action_34.5.inf");
		truclient_step("34.6", "Click on No", "snapshot=Action_34.6.inf");
		truclient_step("34.7", "Click on IHT400 and IHT421 radiogroup", "snapshot=Action_34.7.inf");
		truclient_step("34.8", "Click on Gross value of the estate textbox", "snapshot=Action_34.8.inf");
		truclient_step("34.9", "Type 8000.00 in Gross value of the estate textbox", "snapshot=Action_34.9.inf");
		truclient_step("34.10", "Click on Net value of the estate textbox", "snapshot=Action_34.10.inf");
		truclient_step("34.11", "Type 8000.00 in Net value of the estate textbox", "snapshot=Action_34.11.inf");
		truclient_step("34.12", "Click on The data entered is not...", "snapshot=Action_34.12.inf");
		lr_start_transaction("001_010_Probate_CreateCase_DeceasedDetails_WastheDeceasedDomiciled");
		truclient_step("34.13", "Click on Continue button", "snapshot=Action_34.13.inf");
	}
	truclient_step("35", "Verify What kind of application... 's Visible Text contains What kind of application are you making?", "snapshot=Action_35.inf");
	lr_end_transaction("001_010_Probate_CreateCase_DeceasedDetails_WastheDeceasedDomiciled",0);
	truclient_step("36", "Wait 3 seconds", "snapshot=Action_36.inf");
	truclient_step("37", "Select Grant of probate from Grant of probate radiogroup", "snapshot=Action_37.inf");
	lr_start_transaction("001_011_Probate_CreateCase_DeceasedDetails_WhatKindOfApplication");
	truclient_step("38", "Click on Continue button", "snapshot=Action_38.inf");
	truclient_step("39", "Verify Does the will dispose... 's Visible Text contains Does the will dispose of...ritish National?", "snapshot=Action_39.inf");
	lr_end_transaction("001_011_Probate_CreateCase_DeceasedDetails_WhatKindOfApplication",0);
	truclient_step("40", "Wait 3 seconds", "snapshot=Action_40.inf");
	truclient_step("41", "Click on Yes radio", "snapshot=Action_41.inf");
	truclient_step("42", "Click on Yes", "snapshot=Action_42.inf");
	truclient_step("43", "Click on No", "snapshot=Action_43.inf");
	lr_start_transaction("001_012_Probate_CreateCase_DeceasedDetails_BritishNational");
	truclient_step("44", "Click on Continue button", "snapshot=Action_44.inf");
	truclient_step("45", "Verify Check your answers 's Visible Text contains Check your answers", "snapshot=Action_45.inf");
	lr_end_transaction("001_012_Probate_CreateCase_DeceasedDetails_BritishNational",0);
	truclient_step("46", "Wait 3 seconds", "snapshot=Action_46.inf");
	lr_start_transaction("001_013_Probate_CreateCase_DeceasedDetails_CheckYourAnswers");
	truclient_step("47", "Click on Save and continue button", "snapshot=Action_47.inf");
	truclient_step("48", "Verify 1. Enter application... 's Visible Text contains 1. Enter application details", "snapshot=Action_48.inf");
	lr_end_transaction("001_013_Probate_CreateCase_DeceasedDetails_CheckYourAnswers",0);
	truclient_step("49", "Wait 3 seconds", "snapshot=Action_49.inf");
	lr_start_transaction("001_014_Probate_CreateCase_AddApplicationDetails");
	truclient_step("50", "Click on Add application details link", "snapshot=Action_50.inf");
	truclient_step("51", "Verify Grant of probate details 's Visible Text contains Grant of probate details", "snapshot=Action_51.inf");
	lr_end_transaction("001_014_Probate_CreateCase_AddApplicationDetails",0);
	truclient_step("52", "Wait 3 seconds", "snapshot=Action_52.inf");
	truclient_step("53", "Continue", "snapshot=Action_53.inf");
	{
		truclient_step("53.1", "Select Yes from YesNo radiogroup", "snapshot=Action_53.1.inf");
		truclient_step("53.2", "Click on Day textbox", "snapshot=Action_53.2.inf");
		truclient_step("53.3", "Type 1 in Day textbox", "snapshot=Action_53.3.inf");
		truclient_step("53.4", "Click on Month textbox", "snapshot=Action_53.4.inf");
		truclient_step("53.5", "Type 1 in Month textbox", "snapshot=Action_53.5.inf");
		truclient_step("53.6", "Click on Year textbox", "snapshot=Action_53.6.inf");
		truclient_step("53.7", "Type 2000 in Year textbox", "snapshot=Action_53.7.inf");
		truclient_step("53.8", "Click on No", "snapshot=Action_53.8.inf");
		lr_start_transaction("001_015_Probate_CreateCase_AddApplicationDetails_GrantOfProbateDetails");
		truclient_step("53.9", "Click on Continue button", "snapshot=Action_53.9.inf");
	}
	truclient_step("54", "Verify Grant of probate details 's Visible Text contains Grant of probate details", "snapshot=Action_54.inf");
	lr_end_transaction("001_015_Probate_CreateCase_AddApplicationDetails_GrantOfProbateDetails",0);
	truclient_step("55", "Wait 3 seconds", "snapshot=Action_55.inf");
	truclient_step("56", "Continue", "snapshot=Action_56.inf");
	{
		truclient_step("56.1", "Click on Yes", "snapshot=Action_56.1.inf");
		truclient_step("56.2", "Click on None of these radio", "snapshot=Action_56.2.inf");
		lr_start_transaction("001_016_Probate_CreateCase_AddApplicationDetails_GrantOfProbateDetails2");
		truclient_step("56.3", "Click on Continue button", "snapshot=Action_56.3.inf");
	}
	truclient_step("57", "Verify Grant of probate details 's All Text contains Grant of probate details", "snapshot=Action_57.inf");
	lr_end_transaction("001_016_Probate_CreateCase_AddApplicationDetails_GrantOfProbateDetails2",0);
	truclient_step("58", "Continue", "snapshot=Action_58.inf");
	{
		truclient_step("58.1", "Click on Yes", "snapshot=Action_58.1.inf");
		truclient_step("58.2", "Click on Continue button", "snapshot=Action_58.2.inf");
		truclient_step("58.3", "Click on Day textbox", "snapshot=Action_58.3.inf");
		truclient_step("58.4", "Type 1 in Day textbox", "snapshot=Action_58.4.inf");
		truclient_step("58.5", "Click on Month textbox", "snapshot=Action_58.5.inf");
		truclient_step("58.6", "Type 1 in Month textbox", "snapshot=Action_58.6.inf");
		truclient_step("58.7", "Click on Year textbox", "snapshot=Action_58.7.inf");
		truclient_step("58.8", "Type 2020 in Year textbox", "snapshot=Action_58.8.inf");
		truclient_step("58.9", "Click on Day textbox", "snapshot=Action_58.9.inf");
		truclient_step("58.10", "Type 0 in Day textbox", "snapshot=Action_58.10.inf");
		truclient_step("58.11", "Click on Day textbox", "snapshot=Action_58.11.inf");
		truclient_step("58.12", "Type 01 in Day textbox", "snapshot=Action_58.12.inf");
		truclient_step("58.13", "Click on Month textbox", "snapshot=Action_58.13.inf");
		truclient_step("58.14", "Type 01 in Month textbox", "snapshot=Action_58.14.inf");
		truclient_step("58.15", "Click on Add new button", "snapshot=Action_58.15.inf");
		truclient_step("58.16", "Click on Name of the executor... textbox", "snapshot=Action_58.16.inf");
		truclient_step("58.17", "Type UI Performance Executor in Name of the executor... textbox", "snapshot=Action_58.17.inf");
		lr_start_transaction("001_017_Probate_CreateCase_AddApplicationDetails_AddAllExecutors");
		truclient_step("58.18", "Click on Continue button", "snapshot=Action_58.18.inf");
	}
	truclient_step("59", "Verify Other executors 's Visible Text contains Other executors", "snapshot=Action_59.inf");
	lr_end_transaction("001_017_Probate_CreateCase_AddApplicationDetails_AddAllExecutors",0);
	truclient_step("60", "Wait 3 seconds", "snapshot=Action_60.inf");
	truclient_step("61", "Click on No", "snapshot=Action_61.inf");
	lr_start_transaction("001_018_Probate_CreateCase_AddApplicationDetails_AddOtherExecutorsContinue");
	truclient_step("62", "Click on Continue button", "snapshot=Action_62.inf");
	truclient_step("63", "Click on Please provide any further... textbox", "snapshot=Action_63.inf");
	lr_end_transaction("001_018_Probate_CreateCase_AddApplicationDetails_AddOtherExecutorsContinue",0);
	truclient_step("64", "Wait 3 seconds", "snapshot=Action_64.inf");
	truclient_step("65", "Type na in Please provide any further... textbox", "snapshot=Action_65.inf");
	lr_start_transaction("001_019_Probate_CreateCase_AddApplicationDetails_PleaseProvideOtherInformationContinue");
	truclient_step("66", "Click on Continue button", "snapshot=Action_66.inf");
	truclient_step("67", "Verify Notes for this application... 's Visible Text contains Notes for this application (Optional)", "snapshot=Action_67.inf");
	lr_end_transaction("001_019_Probate_CreateCase_AddApplicationDetails_PleaseProvideOtherInformationContinue",0);
	truclient_step("68", "Wait 3 seconds", "snapshot=Action_68.inf");
	truclient_step("69", "Click on Notes for this application... textbox", "snapshot=Action_69.inf");
	truclient_step("70", "Type na in Notes for this application... textbox", "snapshot=Action_70.inf");
	lr_start_transaction("001_020_Probate_CreateCase_AddApplicationDetails_PleaseProvideOtherInformationContinue");
	truclient_step("71", "Click on Continue button", "snapshot=Action_71.inf");
	truclient_step("72", "Verify Check your answers 's Visible Text contains Check your answers", "snapshot=Action_72.inf");
	lr_end_transaction("001_020_Probate_CreateCase_AddApplicationDetails_PleaseProvideOtherInformationContinue",0);
	truclient_step("73", "Wait 3 seconds", "snapshot=Action_73.inf");
	lr_start_transaction("001_021_Probate_CreateCase_AddApplicationDetails_CheckYourAnswersSaveandContinue");
	truclient_step("74", "Click on Save and continue button", "snapshot=Action_74.inf");
	truclient_step("75", "Verify Review and sign legal... 's Visible Text contains Review and sign legal st...bmit application", "snapshot=Action_75.inf");
	lr_end_transaction("001_021_Probate_CreateCase_AddApplicationDetails_CheckYourAnswersSaveandContinue",0);
	truclient_step("76", "Wait 3 seconds", "snapshot=Action_76.inf");
	lr_start_transaction("001_022_Probate_CreateCase_ReviewandSignLegal");
	truclient_step("77", "Click on Review and sign legal... link", "snapshot=Action_77.inf");
	truclient_step("78", "Verify Review legal statement... 's Visible Text contains Review legal statement and declaration", "snapshot=Action_78.inf");
	lr_end_transaction("001_022_Probate_CreateCase_ReviewandSignLegal",0);
	truclient_step("79", "Wait 3 seconds", "snapshot=Action_79.inf");
	truclient_step("80", "Click on Yes", "snapshot=Action_80.inf");
	truclient_step("81", "Click on No", "snapshot=Action_81.inf");
	truclient_step("82", "Click on Continue button", "snapshot=Action_82.inf");
	truclient_step("83", "Click on Day textbox", "snapshot=Action_83.inf");
	truclient_step("84", "Type 01 in Day textbox", "snapshot=Action_84.inf");
	truclient_step("85", "Type 02 in Month textbox", "snapshot=Action_85.inf");
	truclient_step("86", "Type 2021 in Year textbox", "snapshot=Action_86.inf");
	truclient_step("87", "Verify When did you send the... 's Visible Text contains When did you send the IH... IHT421 to HMRC?", "snapshot=Action_87.inf");
	lr_start_transaction("001_023_Probate_CreateCase_ReviewandSignLegal_DeclarationContinue");
	truclient_step("88", "Click on Continue button", "snapshot=Action_88.inf");
	truclient_step("89", "Verify Upload legal statement... 's Visible Text contains Upload legal statement (optional)", "snapshot=Action_89.inf");
	lr_end_transaction("001_023_Probate_CreateCase_ReviewandSignLegal_DeclarationContinue",0);
	truclient_step("90", "Wait 3 seconds", "snapshot=Action_90.inf");
	truclient_step("91", "Set C:\IAC Files\HMCTS S&amp...V2.0 - FINAL.pdf on Select file to upload... filebox", "snapshot=Action_91.inf");
	truclient_step("92", "Wait 3 seconds", "snapshot=Action_92.inf");
	lr_start_transaction("001_024_Probate_CreateCase_ReviewandSignLegal_UploadLegalStatementContinue");
	truclient_step("93", "Click on Continue button", "snapshot=Action_93.inf");
	truclient_step("94", "Verify Statement of truth 's Visible Text contains Statement of truth", "snapshot=Action_94.inf");
	lr_end_transaction("001_024_Probate_CreateCase_ReviewandSignLegal_UploadLegalStatementContinue",0);
	truclient_step("95", "Wait 3 seconds", "snapshot=Action_95.inf");
	truclient_step("96", "Click on believe(s) that the facts...", "snapshot=Action_96.inf");
	truclient_step("97", "Click on understand(s) that proceedings... checkbox", "snapshot=Action_97.inf");
	lr_start_transaction("001_025_Probate_CreateCase_ReviewandSignLegal_StatementofTruth");
	truclient_step("98", "Click on Continue button", "snapshot=Action_98.inf");
	truclient_step("99", "Verify Complete application 's Visible Text contains Complete application", "snapshot=Action_99.inf");
	lr_end_transaction("001_025_Probate_CreateCase_ReviewandSignLegal_StatementofTruth",0);
	truclient_step("100", "Wait 3 seconds", "snapshot=Action_100.inf");
	truclient_step("101", "Click on How many extra official... textbox", "snapshot=Action_101.inf");
	truclient_step("102", "Type 1 in How many extra official... textbox", "snapshot=Action_102.inf");
	truclient_step("103", "Click on How many extra official... textbox", "snapshot=Action_103.inf");
	truclient_step("104", "Type 1 in How many extra official... textbox", "snapshot=Action_104.inf");
	lr_start_transaction("001_026_Probate_CreateCase_ReviewandSignLegal_ExtraCopiesContinue");
	truclient_step("105", "Click on Continue button", "snapshot=Action_105.inf");
	truclient_step("106", "Verify How do you want to pay? 's Visible Text contains How do you want to pay?", "snapshot=Action_106.inf");
	lr_end_transaction("001_026_Probate_CreateCase_ReviewandSignLegal_ExtraCopiesContinue",0);
	truclient_step("107", "Wait 3 seconds", "snapshot=Action_107.inf");
	truclient_step("108", "Click on How do you want to pay? label", "snapshot=Action_108.inf");
	truclient_step("109", "Select Fee account from How do you want to pay? listbox", "snapshot=Action_109.inf");
	truclient_step("110", "Click on Fee account numberEnter... textbox", "snapshot=Action_110.inf");
	truclient_step("111", "Type 001234 in Fee account numberEnter... textbox", "snapshot=Action_111.inf");
	lr_start_transaction("001_027_Probate_CreateCase_ReviewandSignLegal_HowDoYouWantoPayContinue");
	truclient_step("112", "Click on Continue button", "snapshot=Action_112.inf");
	truclient_step("113", "Verify Save or Submit applicatio... 's Visible Text contains Save or Submit application", "snapshot=Action_113.inf");
	lr_end_transaction("001_027_Probate_CreateCase_ReviewandSignLegal_HowDoYouWantoPayContinue",0);
	truclient_step("114", "Wait 3 seconds", "snapshot=Action_114.inf");
	lr_start_transaction("001_028_Probate_CreateCase_ReviewandSignLegal_SaveandSubmitApplication");
	truclient_step("115", "Click on Save or Submit applicatio... button", "snapshot=Action_115.inf");
	truclient_step("116", "Verify Complete application 's Visible Text contains Complete application", "snapshot=Action_116.inf");
	lr_end_transaction("001_028_Probate_CreateCase_ReviewandSignLegal_SaveandSubmitApplication",0);
	truclient_step("117", "Wait 3 seconds", "snapshot=Action_117.inf");
	lr_start_transaction("001_029_Probate_CreateCase_ReviewandSignLegal_CloseandReturn");
	truclient_step("118", "Click on Close and Return to case... button", "snapshot=Action_118.inf");
	truclient_step("119", "Verify Send documents 's Visible Text contains Send documents", "snapshot=Action_119.inf");
	lr_end_transaction("001_029_Probate_CreateCase_ReviewandSignLegal_CloseandReturn",0);
	truclient_step("120", "Wait 3 seconds", "snapshot=Action_120.inf");
	lr_start_transaction("001_030_Probate_CreateCase_EventHistoryTab");
	truclient_step("121", "Click on Event History tab", "snapshot=Action_121.inf");
	truclient_step("122", "Verify History 's Visible Text contains History", "snapshot=Action_122.inf");
	lr_end_transaction("001_030_Probate_CreateCase_EventHistoryTab",0);
	lr_start_transaction("001_031_Probate_CreateCase_DocumentTab");
	truclient_step("123", "Click on Documents tab", "snapshot=Action_123.inf");
	truclient_step("124", "Verify Documents uploaded 's Visible Text contains Documents uploaded", "snapshot=Action_124.inf");
	lr_end_transaction("001_031_Probate_CreateCase_DocumentTab",0);
	lr_start_transaction("001_032_Probate_CreateCase_DeceasedTab");
	truclient_step("125", "Click on Deceased tab", "snapshot=Action_125.inf");
	truclient_step("126", "Verify First name(s) 's Visible Text contains First name(s)", "snapshot=Action_126.inf");
	lr_end_transaction("001_032_Probate_CreateCase_DeceasedTab",0);
	lr_start_transaction("001_033_Probate_CreateCase_CaseDetailsTab");
	truclient_step("127", "Click on Case details tab", "snapshot=Action_127.inf");
	truclient_step("128", "Verify Inheritance Tax form 's Visible Text contains Inheritance Tax form", "snapshot=Action_128.inf");
	lr_end_transaction("001_033_Probate_CreateCase_CaseDetailsTab",0);
	truclient_step("129", "Wait 3 seconds", "snapshot=Action_129.inf");
	lr_start_transaction("001_034_Probate_CreateCase_ApplicationDetailsTab");
	truclient_step("130", "Click on Applicant details tab", "snapshot=Action_130.inf");
	truclient_step("131", "Verify #1621 5251 8657 6446 's Visible Text contains #", "snapshot=Action_131.inf");
	lr_end_transaction("001_034_Probate_CreateCase_ApplicationDetailsTab",0);
	truclient_step("132", "Wait 3 seconds", "snapshot=Action_132.inf");
	lr_start_transaction("001_035_Probate_CreateCase_CopiesTab");
	truclient_step("133", "Click on Copies tab", "snapshot=Action_133.inf");
	truclient_step("134", "Verify How many extra UK copies... 's Visible Text contains How many extra UK copies...ant do you need?", "snapshot=Action_134.inf");
	lr_end_transaction("001_035_Probate_CreateCase_CopiesTab",0);
	lr_start_transaction("001_036_Probate_CreateCase_SOTTab");
	truclient_step("135", "Click on SOT", "snapshot=Action_135.inf");
	truclient_step("136", "Verify Legal statement 's Visible Text contains Legal statement", "snapshot=Action_136.inf");
	lr_end_transaction("001_036_Probate_CreateCase_SOTTab",0);
	truclient_step("137", "Wait 3 seconds", "snapshot=Action_137.inf");
	lr_start_transaction("001_037_Probate_CreateCase_OpenDocument");
	truclient_step("138", "Click on element (2)", "snapshot=Action_138.inf");
	truclient_step("139", "Click on legalStatementGrantOfProb... JavaScript link", "snapshot=Action_139.inf");
	truclient_step("140", "Activate tab # 2", "snapshot=Action_140.inf");
	truclient_step("141", "Verify IN THE HIGH COURT OF... 's Visible Text contains IN THE HIGH COURT OF JUSTICE", "snapshot=Action_141.inf");
	lr_end_transaction("001_037_Probate_CreateCase_OpenDocument",0);
	truclient_step("142", "Wait 3 seconds", "snapshot=Action_142.inf");
	truclient_step("143", "Close Tab active tab", "snapshot=Action_143.inf");
	truclient_step("144", "Activate tab # 1", "snapshot=Action_144.inf");
	lr_start_transaction("001_038_Probate_CreateCase_SignOut");
	truclient_step("145", "Click on Sign out link", "snapshot=Action_145.inf");
	truclient_step("146", "Verify Sign in 's Visible Text contains Sign in", "snapshot=Action_146.inf");
	lr_end_transaction("001_038_Probate_CreateCase_SignOut",0);
	truclient_step("147", "Wait 3 seconds", "snapshot=Action_147.inf");

	return 0;
}
