﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`1<Facebook.WitAi.WitRequest>
struct Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2;
// Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<System.Object>
struct BaseAndroidConnectionImpl_1_tA385AC35967B49A71BAB023CE6363A7D25A2F36B;
// Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Bindings.Android.VoiceSDKBinding>
struct BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]>
struct ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`1<System.String>
struct Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct KeyCollection_tEFC457E9F0FD4BE3F1E8D03D08C57E0FEDCE324A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0;
// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.WitRequest>
struct UnityEvent_1_t3524738F9C88423D30E1E8A8BCD1A9B98D131711;
// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Lib.WitResponseNode>
struct UnityEvent_1_tCC2044C9D8DFBD8AFF4B651013FF7DCAC5CB6055;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582;
// UnityEngine.Events.UnityEvent`2<System.String,System.String>
struct UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct ValueCollection_tB4E7E5597F79B43184274E43B196B07FA4384E11;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>[]
struct EntryU5BU5D_t269BCD464289BCC62BE423F253AC86214DF01183;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Facebook.WitAi.Data.Entities.WitEntity[]
struct WitEntityU5BU5D_tA95536CFAD78C68FB33FDF0B3BFA1BD73302E66D;
// Facebook.WitAi.Data.Intents.WitIntent[]
struct WitIntentU5BU5D_t41058B7A90DE88E8ED6B651A68997887FF21586C;
// Facebook.WitAi.Data.Traits.WitTrait[]
struct WitTraitU5BU5D_tF4A72012100EA4C0AAB6B63A20D37197CA259702;
// Facebook.WitAi.WitRequest/QueryParam[]
struct QueryParamU5BU5D_t599632D16DA1C62459C16B3C1A9206C89C61D61B;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection
struct AndroidServiceConnection_tD3ABD6514BA2D8C5738AD49AF16DBC97FBEBE981;
// Oculus.Voice.AppVoiceExperience
struct AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Facebook.WitAi.Data.AudioEncoding
struct AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516;
// Oculus.Voice.Core.Bindings.Android.BaseServiceBinding
struct BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Facebook.WitAi.Interfaces.CustomTranscriptionProvider
struct CustomTranscriptionProvider_tF690178502A6AC2682EDE3E3DDC067B4574A5F82;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.Net.HttpWebResponse
struct HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Facebook.WitAi.Interfaces.IDynamicEntitiesProvider
struct IDynamicEntitiesProvider_tBF31A50AA3B53E8052F4CD0CF081EBF8670D0BEA;
// Oculus.Voice.Interfaces.IPlatformVoiceService
struct IPlatformVoiceService_tFC1D07648D3588DD6E8E03B3F1FB1CD692E529BE;
// Facebook.WitAi.IRequest
struct IRequest_t24B46254E38326238D6A127740FA8CCB413083A7;
// Facebook.WitAi.Interfaces.ITranscriptionProvider
struct ITranscriptionProvider_tC607BE81017791B4ED85025471847899CE24E30C;
// Oculus.Voice.Bindings.Android.IVCBindingEvents
struct IVCBindingEvents_tE3F7B95673AB2A5451237184072108BC41591478;
// Facebook.WitAi.IVoiceService
struct IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Oculus.VoiceSDK.Utilities.MicPermissionsManager
struct MicPermissionsManager_t4E86EA4DACF1397B194FB628C57173E0E89A54FD;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// Facebook.WitAi.Events.VoiceEvents
struct VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D;
// Oculus.Voice.Bindings.Android.VoiceSDKBinding
struct VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2;
// Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding
struct VoiceSDKConfigBinding_t4CA77A43FA0B1835873B7CA7ED10CB48240278A6;
// Oculus.Voice.Bindings.Android.VoiceSDKImpl
struct VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D;
// Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding
struct VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118;
// Facebook.WitAi.VoiceService
struct VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Facebook.WitAi.Wit
struct Wit_t56D21E306ECB54B06B548149BC8103A807A158D8;
// Facebook.WitAi.Data.Configuration.WitApplication
struct WitApplication_t7A7F18E3FBD810923842318ADB5935CC9BBA2E89;
// Facebook.WitAi.Events.WitByteDataEvent
struct WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6;
// Facebook.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631;
// Facebook.WitAi.Configuration.WitEndpointConfig
struct WitEndpointConfig_t6974155BF4F518549C3D435F2DA4BC4077706731;
// Facebook.WitAi.Events.WitErrorEvent
struct WitErrorEvent_t75A2B26145BEFDEC6A91E014BBA329E35862E571;
// Facebook.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_t8B4131C6B21D3887BC9192ABC8DE29B97197480B;
// Facebook.WitAi.WitRequest
struct WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622;
// Facebook.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_tC0FA819B0DDD5D9FBDB63FF11D5FEBC287C4BF82;
// Facebook.WitAi.Configuration.WitRequestOptions
struct WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F;
// Facebook.WitAi.Events.WitResponseEvent
struct WitResponseEvent_tB6FF10625816530C0B3B946E94F9701FF0FAC6B4;
// Facebook.WitAi.Lib.WitResponseNode
struct WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F;
// Facebook.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24;
// Facebook.WitAi.WitService
struct WitService_t860537723698CF0607466342346F3B1FECA68DCB;
// Facebook.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E;
// Facebook.WitAi.WitRequest/OnCustomizeUriEvent
struct OnCustomizeUriEvent_t9D13E53AB8681A345A39DAA3B800A45F146199FF;
// Facebook.WitAi.WitRequest/OnProvideCustomHeadersEvent
struct OnProvideCustomHeadersEvent_tFB4F29CECA9500A91331B43CEBADB0F51DDEC4D0;
// Facebook.WitAi.WitRequest/PreSendRequestDelegate
struct PreSendRequestDelegate_t59C335BC80A012FB63121965FD64BB1A8F937955;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlatformVoiceService_tFC1D07648D3588DD6E8E03B3F1FB1CD692E529BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVCBindingEvents_tE3F7B95673AB2A5451237184072108BC41591478_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceSDKConfigBinding_t4CA77A43FA0B1835873B7CA7ED10CB48240278A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Wit_t56D21E306ECB54B06B548149BC8103A807A158D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral092BA6AD0413546226AD2BEA11159B0EB044FDB2;
IL2CPP_EXTERN_C String_t* _stringLiteral0AD681F3CCA95D9E6DBE642350F27A4677186DCE;
IL2CPP_EXTERN_C String_t* _stringLiteral0ADCE98000A1E213D168FF9E6AD07CD47FBA0EE9;
IL2CPP_EXTERN_C String_t* _stringLiteral0B4C9B994D78DE3313E2AEE4DF0964592BF389FE;
IL2CPP_EXTERN_C String_t* _stringLiteral0C45DB50527FCFAD456E74EB416B617329505309;
IL2CPP_EXTERN_C String_t* _stringLiteral0C8E84E39D0E62D31544DE3953FDF92C5BAB60EB;
IL2CPP_EXTERN_C String_t* _stringLiteral0DF52374CCE8AA942D55172FF34E782E0277521F;
IL2CPP_EXTERN_C String_t* _stringLiteral0FD7B3C1033C1EF1C45607B35492B62E1CFC7C11;
IL2CPP_EXTERN_C String_t* _stringLiteral17A5AD13F3B52AA01A6CBB2F9F414BE34E8AB9A9;
IL2CPP_EXTERN_C String_t* _stringLiteral1820E647BC43B12E095BB83CACC06DCCF7C816B9;
IL2CPP_EXTERN_C String_t* _stringLiteral1B62E5629805E3224249BCAA0D9ECBB4C84AE48B;
IL2CPP_EXTERN_C String_t* _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29;
IL2CPP_EXTERN_C String_t* _stringLiteral203DD5C89072A85E4D8D935A3028CCC3E3855F85;
IL2CPP_EXTERN_C String_t* _stringLiteral21916927D1C2A23DD6DA3C2E7FE2F3D6317F563A;
IL2CPP_EXTERN_C String_t* _stringLiteral2C25F3C2950E0AFEA7FBD0AEB1FD0CC9CF30F713;
IL2CPP_EXTERN_C String_t* _stringLiteral2F3DB030C8BDF0926D14123D900497AE12BB3AD1;
IL2CPP_EXTERN_C String_t* _stringLiteral2F59628CFCF68C1C363F48F1FB91CF30C77F0D31;
IL2CPP_EXTERN_C String_t* _stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C;
IL2CPP_EXTERN_C String_t* _stringLiteral361CDD76EEF3F6E43190EA2E6D184590B6545659;
IL2CPP_EXTERN_C String_t* _stringLiteral375ED8BBE05A9343F552D3F8863536344C38BCA2;
IL2CPP_EXTERN_C String_t* _stringLiteral376CA77BE87EBF24FE3233A567285926D6704A8E;
IL2CPP_EXTERN_C String_t* _stringLiteral459CA1A783220A8007E9DD248A257FE22F59A157;
IL2CPP_EXTERN_C String_t* _stringLiteral47DA4AFC29222C9791B731DF4DADD99DC88F94B0;
IL2CPP_EXTERN_C String_t* _stringLiteral4B0E509E3481549FC8F096287EFB425FAAFC38A4;
IL2CPP_EXTERN_C String_t* _stringLiteral52BB1AD0DD3A85E7F05A9AEA98E0EEB98B478F6D;
IL2CPP_EXTERN_C String_t* _stringLiteral52CCE57FBBB435D24E1DD8F182FA0BDA2750C166;
IL2CPP_EXTERN_C String_t* _stringLiteral541ADAD93719A7753AA265CAD6BA6276D2686025;
IL2CPP_EXTERN_C String_t* _stringLiteral550894D8930D82CF3BB3AC17DFA88A6C23CEFAA2;
IL2CPP_EXTERN_C String_t* _stringLiteral5756AECEA7064F13CC9765BE1F87065EA5B3D18E;
IL2CPP_EXTERN_C String_t* _stringLiteral58AE457A2E7C031E4E4EADC82BC37330A84838AD;
IL2CPP_EXTERN_C String_t* _stringLiteral591184A69213A4D299171C75373FEABB89BF8937;
IL2CPP_EXTERN_C String_t* _stringLiteral5A9AEFD32E63F4C4FEAE65BF93199A9A35785D51;
IL2CPP_EXTERN_C String_t* _stringLiteral5D5A4764C731B021A048CFC139A82DD3DA9BD940;
IL2CPP_EXTERN_C String_t* _stringLiteral60DB2D6C7D1E32BCBAC4811B3E7978364FFC0102;
IL2CPP_EXTERN_C String_t* _stringLiteral62DF8B883A7680DEF02C157C7AF38B4A3E89D8BF;
IL2CPP_EXTERN_C String_t* _stringLiteral647CF137C0F27918F699BD1C0B1DC7FF9EFC1014;
IL2CPP_EXTERN_C String_t* _stringLiteral654BFE537B0ADB16C92A45895BD6054F35C69AC2;
IL2CPP_EXTERN_C String_t* _stringLiteral6ACA126350941A62677533ACC01C769BF2C144F3;
IL2CPP_EXTERN_C String_t* _stringLiteral6C2259C1F5D9911CDDA502DB9262E503845291FD;
IL2CPP_EXTERN_C String_t* _stringLiteral6CD966C6F70DF98361E72B6885D22A1DAAAEDC33;
IL2CPP_EXTERN_C String_t* _stringLiteral6D2C56060B3F7353031AD314517C27945CC39748;
IL2CPP_EXTERN_C String_t* _stringLiteral6DB33ADD301402F08747C4EE933A8EF10A8128F7;
IL2CPP_EXTERN_C String_t* _stringLiteral6E376700E58DD3581CFBE1F901798D5C61E52BA0;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5431EF8CF17B42351F85D399751058873E7E92;
IL2CPP_EXTERN_C String_t* _stringLiteral6FCACA7D51404EF06FCE5239D8C92E6191ABA80F;
IL2CPP_EXTERN_C String_t* _stringLiteral734D834219E25F6AC949E3C4A33AA80BB578DC1A;
IL2CPP_EXTERN_C String_t* _stringLiteral73D8E11C6B0DFF5D3141AFDA853D918DD590FE66;
IL2CPP_EXTERN_C String_t* _stringLiteral77EE5971434CDE6F74A1DAE44D94954E1624D77C;
IL2CPP_EXTERN_C String_t* _stringLiteral7A27C2F288438DD1823D8FA78BB3A4F69453087B;
IL2CPP_EXTERN_C String_t* _stringLiteral7C022E2202C33B05A9AD14AE1A1E837AC3233551;
IL2CPP_EXTERN_C String_t* _stringLiteral876C5E86B8C3F36CC9EE33BD83A2E4C40D583CF7;
IL2CPP_EXTERN_C String_t* _stringLiteral8973AE49BD46E89F131A8F5F8A58904E2C1CA11A;
IL2CPP_EXTERN_C String_t* _stringLiteral90299BFCD00E6E29A61209F375686A81B96665F6;
IL2CPP_EXTERN_C String_t* _stringLiteral9155F30AA734CC9F26A86F037D8B48FDF7869B2B;
IL2CPP_EXTERN_C String_t* _stringLiteral9198612C1E03878B69FB53EDEFD1E20C986857B4;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteral9611837DC9F59CE850732A48008AE16B5242C6BE;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9F10E972FF3AD9BCA9E85E8ACEC160516A000E86;
IL2CPP_EXTERN_C String_t* _stringLiteralA0C6FF001ADF1824C2B6266A303671C2386842C6;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DC94CE2E4ADB08254413E0E3386625CB614D76;
IL2CPP_EXTERN_C String_t* _stringLiteralAC73D661602F46A092AF190767F8E68241BB314F;
IL2CPP_EXTERN_C String_t* _stringLiteralB6814B83C0CAFFAC7308A42994ACCC03CA22FCCE;
IL2CPP_EXTERN_C String_t* _stringLiteralB87F49253CFFED648B03A8D5C67D4624305684D4;
IL2CPP_EXTERN_C String_t* _stringLiteralB9CE0BCF216F3F1257A8C396F63FF8CECAB574F7;
IL2CPP_EXTERN_C String_t* _stringLiteralBA8F86E450F61205EF060F7DA79C0B6904644890;
IL2CPP_EXTERN_C String_t* _stringLiteralBBF23B4B70E0BD3FF31AB982C6BDF878E58833CB;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC04CC788232484E918569E326AD3839934507B;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC9163C315671EAC81D72701BD6DCF13C6773FA;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37;
IL2CPP_EXTERN_C String_t* _stringLiteralC6083E3193B2C42160931E36C8DF7C83A18368C1;
IL2CPP_EXTERN_C String_t* _stringLiteralC6CF1388F62C641E47D1C0FC9A05AF1D6F8FCB6F;
IL2CPP_EXTERN_C String_t* _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096;
IL2CPP_EXTERN_C String_t* _stringLiteralC982AFF5E079BBDA3580BE37ECC91BC71135F59E;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF168F877EC6D86E1C62FE514023B4373C1018D;
IL2CPP_EXTERN_C String_t* _stringLiteralCBF28E8A6AC6C4E3A3E60076E430BBC6501C8AF4;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A60C78B1E543FC99764C33AEB77BCFE4231207;
IL2CPP_EXTERN_C String_t* _stringLiteralD744E0023ACB34526A1B142EFA90B5CFF45FDC53;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F;
IL2CPP_EXTERN_C String_t* _stringLiteralDCCA071A995303A9BBCD5E2DBE5E190C2B0A05FA;
IL2CPP_EXTERN_C String_t* _stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127;
IL2CPP_EXTERN_C String_t* _stringLiteralDD4104677145B876F292A0DE0E3D05E4D6B15066;
IL2CPP_EXTERN_C String_t* _stringLiteralDD6C5540AB43FA5EAE750894E23E2E250DD5E7B1;
IL2CPP_EXTERN_C String_t* _stringLiteralE0973000AFB7A33EB6108E555F37DE0D4155B187;
IL2CPP_EXTERN_C String_t* _stringLiteralE1423475EA278C8BCE568970404EECBE529CBEAA;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F4B323C30FAE436F30D6A29F7DDC0C29CD5F62;
IL2CPP_EXTERN_C String_t* _stringLiteralEAA0AD4C9DDC7B173ACD12710BBE084A3B32C5F6;
IL2CPP_EXTERN_C String_t* _stringLiteralEC992C951DB0BC53E8B3C5900205297E72E6E965;
IL2CPP_EXTERN_C String_t* _stringLiteralECE395CDAEB0ECDBD5A23AA77D43B5263126619C;
IL2CPP_EXTERN_C String_t* _stringLiteralEE166EB545AC42FA5F62142A18E3268B3A5D8A77;
IL2CPP_EXTERN_C String_t* _stringLiteralF5F89232B0CDE6B0E7076884EA8579F8F38D88C1;
IL2CPP_EXTERN_C String_t* _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B;
IL2CPP_EXTERN_C String_t* _stringLiteralFC140051BF200AB88497170B5004988B2DA52192;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6C1DC2224936F4BEE7CBA35A0036A85E7B52F4;
IL2CPP_EXTERN_C String_t* _stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mF768D2F7310A4A5788843430433EEC2BFF05A8E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC0A9F47C492107DC29D9AD3960BF83E84BD776FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2AF1FB1EDDF724F87A163497D120E653037EB54C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisString_t_m2DA3663726A288B80B948F1405495E0AF9A8F347_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppVoiceExperience_U3CInitVoiceSDKU3Eb__30_0_mF677B5CFDCA83292EAEACBB1B2D055EDE2B216D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseAndroidConnectionImpl_1_Connect_mA1CB5E34819686404186897ED627B9AA84A90171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseAndroidConnectionImpl_1_Disconnect_m8466A5C9F1E6F0AC81C1944C06B7BCBE94C69CF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseAndroidConnectionImpl_1__ctor_m63FE40AA0F655EBB6431640D7092C0055394A5DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisWit_t56D21E306ECB54B06B548149BC8103A807A158D8_m062E60F4931FEE641EBBC3DB2D2F1EC0346F293F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC1E83FC6C973AAA99FDC936FFCD03F750D377E54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m9AEB54A2F6FDBD9E1C3A3655FCAA612A1F0AFD34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWit_t56D21E306ECB54B06B548149BC8103A807A158D8_mC4D7F7C6EE25C593AA1D216877B8276E0CBED30A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_CopyTo_m4710FE6F70E54DCAE43661D63499C3961210CA1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_get_Count_mC26B198CCB6DE9D6804B26D036F6435AE879E62C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m65140CE9B1391F17461B85941BAD199745AD67D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mE7B69F204F1D5780888EB968EB6AF610B17E303A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceSDKImpl_OnStoppedListening_m6D465BB919DC89C3A509127EAB13908D24ACC042_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t615977F733A068B0F6F025952B6043270E1FC3B5 
{
public:

public:
};


// System.Object


// Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Bindings.Android.VoiceSDKBinding>
struct BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F  : public RuntimeObject
{
public:
	// System.String Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::fragmentClassName
	String_t* ___fragmentClassName_0;
	// T Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::service
	VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * ___service_1;
	// Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::serviceConnection
	AndroidServiceConnection_tD3ABD6514BA2D8C5738AD49AF16DBC97FBEBE981 * ___serviceConnection_2;

public:
	inline static int32_t get_offset_of_fragmentClassName_0() { return static_cast<int32_t>(offsetof(BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F, ___fragmentClassName_0)); }
	inline String_t* get_fragmentClassName_0() const { return ___fragmentClassName_0; }
	inline String_t** get_address_of_fragmentClassName_0() { return &___fragmentClassName_0; }
	inline void set_fragmentClassName_0(String_t* value)
	{
		___fragmentClassName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fragmentClassName_0), (void*)value);
	}

	inline static int32_t get_offset_of_service_1() { return static_cast<int32_t>(offsetof(BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F, ___service_1)); }
	inline VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * get_service_1() const { return ___service_1; }
	inline VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 ** get_address_of_service_1() { return &___service_1; }
	inline void set_service_1(VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * value)
	{
		___service_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___service_1), (void*)value);
	}

	inline static int32_t get_offset_of_serviceConnection_2() { return static_cast<int32_t>(offsetof(BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F, ___serviceConnection_2)); }
	inline AndroidServiceConnection_tD3ABD6514BA2D8C5738AD49AF16DBC97FBEBE981 * get_serviceConnection_2() const { return ___serviceConnection_2; }
	inline AndroidServiceConnection_tD3ABD6514BA2D8C5738AD49AF16DBC97FBEBE981 ** get_address_of_serviceConnection_2() { return &___serviceConnection_2; }
	inline void set_serviceConnection_2(AndroidServiceConnection_tD3ABD6514BA2D8C5738AD49AF16DBC97FBEBE981 * value)
	{
		___serviceConnection_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serviceConnection_2), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t269BCD464289BCC62BE423F253AC86214DF01183* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tEFC457E9F0FD4BE3F1E8D03D08C57E0FEDCE324A * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB4E7E5597F79B43184274E43B196B07FA4384E11 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E, ___entries_1)); }
	inline EntryU5BU5D_t269BCD464289BCC62BE423F253AC86214DF01183* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t269BCD464289BCC62BE423F253AC86214DF01183** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t269BCD464289BCC62BE423F253AC86214DF01183* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E, ___keys_7)); }
	inline KeyCollection_tEFC457E9F0FD4BE3F1E8D03D08C57E0FEDCE324A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tEFC457E9F0FD4BE3F1E8D03D08C57E0FEDCE324A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tEFC457E9F0FD4BE3F1E8D03D08C57E0FEDCE324A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E, ___values_8)); }
	inline ValueCollection_tB4E7E5597F79B43184274E43B196B07FA4384E11 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB4E7E5597F79B43184274E43B196B07FA4384E11 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB4E7E5597F79B43184274E43B196B07FA4384E11 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct KeyCollection_tEFC457E9F0FD4BE3F1E8D03D08C57E0FEDCE324A  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_tEFC457E9F0FD4BE3F1E8D03D08C57E0FEDCE324A, ___dictionary_0)); }
	inline Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};


// Oculus.Voice.AppBuiltIns
struct AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F  : public RuntimeObject
{
public:

public:
};

struct AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields
{
public:
	// System.String Oculus.Voice.AppBuiltIns::builtInPrefix
	String_t* ___builtInPrefix_0;
	// System.String Oculus.Voice.AppBuiltIns::modelName
	String_t* ___modelName_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>> Oculus.Voice.AppBuiltIns::apps
	Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * ___apps_2;

public:
	inline static int32_t get_offset_of_builtInPrefix_0() { return static_cast<int32_t>(offsetof(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields, ___builtInPrefix_0)); }
	inline String_t* get_builtInPrefix_0() const { return ___builtInPrefix_0; }
	inline String_t** get_address_of_builtInPrefix_0() { return &___builtInPrefix_0; }
	inline void set_builtInPrefix_0(String_t* value)
	{
		___builtInPrefix_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builtInPrefix_0), (void*)value);
	}

	inline static int32_t get_offset_of_modelName_1() { return static_cast<int32_t>(offsetof(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields, ___modelName_1)); }
	inline String_t* get_modelName_1() const { return ___modelName_1; }
	inline String_t** get_address_of_modelName_1() { return &___modelName_1; }
	inline void set_modelName_1(String_t* value)
	{
		___modelName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modelName_1), (void*)value);
	}

	inline static int32_t get_offset_of_apps_2() { return static_cast<int32_t>(offsetof(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields, ___apps_2)); }
	inline Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * get_apps_2() const { return ___apps_2; }
	inline Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E ** get_address_of_apps_2() { return &___apps_2; }
	inline void set_apps_2(Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * value)
	{
		___apps_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apps_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Oculus.Voice.Core.Bindings.Android.BaseServiceBinding
struct BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaObject Oculus.Voice.Core.Bindings.Android.BaseServiceBinding::binding
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___binding_0;

public:
	inline static int32_t get_offset_of_binding_0() { return static_cast<int32_t>(offsetof(BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6, ___binding_0)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_binding_0() const { return ___binding_0; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_binding_0() { return &___binding_0; }
	inline void set_binding_0(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___binding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___binding_0), (void*)value);
	}
};


// Oculus.VoiceSDK.Utilities.MicPermissionsManager
struct MicPermissionsManager_t4E86EA4DACF1397B194FB628C57173E0E89A54FD  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Facebook.WitAi.Events.VoiceEvents
struct VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D  : public RuntimeObject
{
public:
	// Facebook.WitAi.Events.WitResponseEvent Facebook.WitAi.Events.VoiceEvents::OnResponse
	WitResponseEvent_tB6FF10625816530C0B3B946E94F9701FF0FAC6B4 * ___OnResponse_0;
	// Facebook.WitAi.Events.WitErrorEvent Facebook.WitAi.Events.VoiceEvents::OnError
	WitErrorEvent_t75A2B26145BEFDEC6A91E014BBA329E35862E571 * ___OnError_1;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnAborting
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnAborting_2;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnAborted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnAborted_3;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnRequestCompleted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnRequestCompleted_4;
	// Facebook.WitAi.Events.WitMicLevelChangedEvent Facebook.WitAi.Events.VoiceEvents::OnMicLevelChanged
	WitMicLevelChangedEvent_t8B4131C6B21D3887BC9192ABC8DE29B97197480B * ___OnMicLevelChanged_5;
	// Facebook.WitAi.Events.WitRequestCreatedEvent Facebook.WitAi.Events.VoiceEvents::OnRequestCreated
	WitRequestCreatedEvent_tC0FA819B0DDD5D9FBDB63FF11D5FEBC287C4BF82 * ___OnRequestCreated_6;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStartListening
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStartListening_7;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListening
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStoppedListening_8;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListeningDueToInactivity
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStoppedListeningDueToInactivity_9;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListeningDueToTimeout
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStoppedListeningDueToTimeout_10;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListeningDueToDeactivation
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStoppedListeningDueToDeactivation_11;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnMicDataSent
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnMicDataSent_12;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnMinimumWakeThresholdHit
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnMinimumWakeThresholdHit_13;
	// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.VoiceEvents::onPartialTranscription
	WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * ___onPartialTranscription_14;
	// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.VoiceEvents::onFullTranscription
	WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * ___onFullTranscription_15;
	// Facebook.WitAi.Events.WitByteDataEvent Facebook.WitAi.Events.VoiceEvents::OnByteDataReady
	WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6 * ___OnByteDataReady_16;
	// Facebook.WitAi.Events.WitByteDataEvent Facebook.WitAi.Events.VoiceEvents::OnByteDataSent
	WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6 * ___OnByteDataSent_17;

public:
	inline static int32_t get_offset_of_OnResponse_0() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnResponse_0)); }
	inline WitResponseEvent_tB6FF10625816530C0B3B946E94F9701FF0FAC6B4 * get_OnResponse_0() const { return ___OnResponse_0; }
	inline WitResponseEvent_tB6FF10625816530C0B3B946E94F9701FF0FAC6B4 ** get_address_of_OnResponse_0() { return &___OnResponse_0; }
	inline void set_OnResponse_0(WitResponseEvent_tB6FF10625816530C0B3B946E94F9701FF0FAC6B4 * value)
	{
		___OnResponse_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnResponse_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_1() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnError_1)); }
	inline WitErrorEvent_t75A2B26145BEFDEC6A91E014BBA329E35862E571 * get_OnError_1() const { return ___OnError_1; }
	inline WitErrorEvent_t75A2B26145BEFDEC6A91E014BBA329E35862E571 ** get_address_of_OnError_1() { return &___OnError_1; }
	inline void set_OnError_1(WitErrorEvent_t75A2B26145BEFDEC6A91E014BBA329E35862E571 * value)
	{
		___OnError_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnAborting_2() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnAborting_2)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnAborting_2() const { return ___OnAborting_2; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnAborting_2() { return &___OnAborting_2; }
	inline void set_OnAborting_2(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnAborting_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAborting_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnAborted_3() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnAborted_3)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnAborted_3() const { return ___OnAborted_3; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnAborted_3() { return &___OnAborted_3; }
	inline void set_OnAborted_3(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnAborted_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAborted_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnRequestCompleted_4() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnRequestCompleted_4)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnRequestCompleted_4() const { return ___OnRequestCompleted_4; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnRequestCompleted_4() { return &___OnRequestCompleted_4; }
	inline void set_OnRequestCompleted_4(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnRequestCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRequestCompleted_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnMicLevelChanged_5() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnMicLevelChanged_5)); }
	inline WitMicLevelChangedEvent_t8B4131C6B21D3887BC9192ABC8DE29B97197480B * get_OnMicLevelChanged_5() const { return ___OnMicLevelChanged_5; }
	inline WitMicLevelChangedEvent_t8B4131C6B21D3887BC9192ABC8DE29B97197480B ** get_address_of_OnMicLevelChanged_5() { return &___OnMicLevelChanged_5; }
	inline void set_OnMicLevelChanged_5(WitMicLevelChangedEvent_t8B4131C6B21D3887BC9192ABC8DE29B97197480B * value)
	{
		___OnMicLevelChanged_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMicLevelChanged_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnRequestCreated_6() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnRequestCreated_6)); }
	inline WitRequestCreatedEvent_tC0FA819B0DDD5D9FBDB63FF11D5FEBC287C4BF82 * get_OnRequestCreated_6() const { return ___OnRequestCreated_6; }
	inline WitRequestCreatedEvent_tC0FA819B0DDD5D9FBDB63FF11D5FEBC287C4BF82 ** get_address_of_OnRequestCreated_6() { return &___OnRequestCreated_6; }
	inline void set_OnRequestCreated_6(WitRequestCreatedEvent_tC0FA819B0DDD5D9FBDB63FF11D5FEBC287C4BF82 * value)
	{
		___OnRequestCreated_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRequestCreated_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnStartListening_7() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnStartListening_7)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStartListening_7() const { return ___OnStartListening_7; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStartListening_7() { return &___OnStartListening_7; }
	inline void set_OnStartListening_7(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStartListening_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartListening_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnStoppedListening_8() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnStoppedListening_8)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStoppedListening_8() const { return ___OnStoppedListening_8; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStoppedListening_8() { return &___OnStoppedListening_8; }
	inline void set_OnStoppedListening_8(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStoppedListening_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoppedListening_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnStoppedListeningDueToInactivity_9() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnStoppedListeningDueToInactivity_9)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStoppedListeningDueToInactivity_9() const { return ___OnStoppedListeningDueToInactivity_9; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStoppedListeningDueToInactivity_9() { return &___OnStoppedListeningDueToInactivity_9; }
	inline void set_OnStoppedListeningDueToInactivity_9(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStoppedListeningDueToInactivity_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoppedListeningDueToInactivity_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnStoppedListeningDueToTimeout_10() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnStoppedListeningDueToTimeout_10)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStoppedListeningDueToTimeout_10() const { return ___OnStoppedListeningDueToTimeout_10; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStoppedListeningDueToTimeout_10() { return &___OnStoppedListeningDueToTimeout_10; }
	inline void set_OnStoppedListeningDueToTimeout_10(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStoppedListeningDueToTimeout_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoppedListeningDueToTimeout_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnStoppedListeningDueToDeactivation_11() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnStoppedListeningDueToDeactivation_11)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStoppedListeningDueToDeactivation_11() const { return ___OnStoppedListeningDueToDeactivation_11; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStoppedListeningDueToDeactivation_11() { return &___OnStoppedListeningDueToDeactivation_11; }
	inline void set_OnStoppedListeningDueToDeactivation_11(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStoppedListeningDueToDeactivation_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoppedListeningDueToDeactivation_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnMicDataSent_12() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnMicDataSent_12)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnMicDataSent_12() const { return ___OnMicDataSent_12; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnMicDataSent_12() { return &___OnMicDataSent_12; }
	inline void set_OnMicDataSent_12(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnMicDataSent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMicDataSent_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnMinimumWakeThresholdHit_13() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnMinimumWakeThresholdHit_13)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnMinimumWakeThresholdHit_13() const { return ___OnMinimumWakeThresholdHit_13; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnMinimumWakeThresholdHit_13() { return &___OnMinimumWakeThresholdHit_13; }
	inline void set_OnMinimumWakeThresholdHit_13(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnMinimumWakeThresholdHit_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMinimumWakeThresholdHit_13), (void*)value);
	}

	inline static int32_t get_offset_of_onPartialTranscription_14() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___onPartialTranscription_14)); }
	inline WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * get_onPartialTranscription_14() const { return ___onPartialTranscription_14; }
	inline WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E ** get_address_of_onPartialTranscription_14() { return &___onPartialTranscription_14; }
	inline void set_onPartialTranscription_14(WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * value)
	{
		___onPartialTranscription_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPartialTranscription_14), (void*)value);
	}

	inline static int32_t get_offset_of_onFullTranscription_15() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___onFullTranscription_15)); }
	inline WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * get_onFullTranscription_15() const { return ___onFullTranscription_15; }
	inline WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E ** get_address_of_onFullTranscription_15() { return &___onFullTranscription_15; }
	inline void set_onFullTranscription_15(WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * value)
	{
		___onFullTranscription_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFullTranscription_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnByteDataReady_16() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnByteDataReady_16)); }
	inline WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6 * get_OnByteDataReady_16() const { return ___OnByteDataReady_16; }
	inline WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6 ** get_address_of_OnByteDataReady_16() { return &___OnByteDataReady_16; }
	inline void set_OnByteDataReady_16(WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6 * value)
	{
		___OnByteDataReady_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnByteDataReady_16), (void*)value);
	}

	inline static int32_t get_offset_of_OnByteDataSent_17() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnByteDataSent_17)); }
	inline WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6 * get_OnByteDataSent_17() const { return ___OnByteDataSent_17; }
	inline WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6 ** get_address_of_OnByteDataSent_17() { return &___OnByteDataSent_17; }
	inline void set_OnByteDataSent_17(WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6 * value)
	{
		___OnByteDataSent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnByteDataSent_17), (void*)value);
	}
};


// Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding
struct VoiceSDKConfigBinding_t4CA77A43FA0B1835873B7CA7ED10CB48240278A6  : public RuntimeObject
{
public:
	// Facebook.WitAi.Configuration.WitRuntimeConfiguration Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding::configuration
	WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * ___configuration_0;

public:
	inline static int32_t get_offset_of_configuration_0() { return static_cast<int32_t>(offsetof(VoiceSDKConfigBinding_t4CA77A43FA0B1835873B7CA7ED10CB48240278A6, ___configuration_0)); }
	inline WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * get_configuration_0() const { return ___configuration_0; }
	inline WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 ** get_address_of_configuration_0() { return &___configuration_0; }
	inline void set_configuration_0(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * value)
	{
		___configuration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configuration_0), (void*)value);
	}
};


// Facebook.WitAi.Configuration.WitRequestOptions
struct WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F  : public RuntimeObject
{
public:
	// Facebook.WitAi.Interfaces.IDynamicEntitiesProvider Facebook.WitAi.Configuration.WitRequestOptions::dynamicEntities
	RuntimeObject* ___dynamicEntities_0;
	// System.Int32 Facebook.WitAi.Configuration.WitRequestOptions::nBestIntents
	int32_t ___nBestIntents_1;
	// System.String Facebook.WitAi.Configuration.WitRequestOptions::tag
	String_t* ___tag_2;
	// System.Action`1<Facebook.WitAi.WitRequest> Facebook.WitAi.Configuration.WitRequestOptions::onResponse
	Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * ___onResponse_3;

public:
	inline static int32_t get_offset_of_dynamicEntities_0() { return static_cast<int32_t>(offsetof(WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F, ___dynamicEntities_0)); }
	inline RuntimeObject* get_dynamicEntities_0() const { return ___dynamicEntities_0; }
	inline RuntimeObject** get_address_of_dynamicEntities_0() { return &___dynamicEntities_0; }
	inline void set_dynamicEntities_0(RuntimeObject* value)
	{
		___dynamicEntities_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dynamicEntities_0), (void*)value);
	}

	inline static int32_t get_offset_of_nBestIntents_1() { return static_cast<int32_t>(offsetof(WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F, ___nBestIntents_1)); }
	inline int32_t get_nBestIntents_1() const { return ___nBestIntents_1; }
	inline int32_t* get_address_of_nBestIntents_1() { return &___nBestIntents_1; }
	inline void set_nBestIntents_1(int32_t value)
	{
		___nBestIntents_1 = value;
	}

	inline static int32_t get_offset_of_tag_2() { return static_cast<int32_t>(offsetof(WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F, ___tag_2)); }
	inline String_t* get_tag_2() const { return ___tag_2; }
	inline String_t** get_address_of_tag_2() { return &___tag_2; }
	inline void set_tag_2(String_t* value)
	{
		___tag_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tag_2), (void*)value);
	}

	inline static int32_t get_offset_of_onResponse_3() { return static_cast<int32_t>(offsetof(WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F, ___onResponse_3)); }
	inline Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * get_onResponse_3() const { return ___onResponse_3; }
	inline Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 ** get_address_of_onResponse_3() { return &___onResponse_3; }
	inline void set_onResponse_3(Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * value)
	{
		___onResponse_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onResponse_3), (void*)value);
	}
};


// Facebook.WitAi.Lib.WitResponseNode
struct WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F  : public RuntimeObject
{
public:

public:
};


// Facebook.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24  : public RuntimeObject
{
public:
	// Facebook.WitAi.Data.Configuration.WitConfiguration Facebook.WitAi.Configuration.WitRuntimeConfiguration::witConfiguration
	WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * ___witConfiguration_0;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::minKeepAliveVolume
	float ___minKeepAliveVolume_1;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::minKeepAliveTimeInSeconds
	float ___minKeepAliveTimeInSeconds_2;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::minTranscriptionKeepAliveTimeInSeconds
	float ___minTranscriptionKeepAliveTimeInSeconds_3;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::maxRecordingTime
	float ___maxRecordingTime_4;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::soundWakeThreshold
	float ___soundWakeThreshold_5;
	// System.Int32 Facebook.WitAi.Configuration.WitRuntimeConfiguration::sampleLengthInMs
	int32_t ___sampleLengthInMs_6;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::micBufferLengthInSeconds
	float ___micBufferLengthInSeconds_7;
	// System.Int32 Facebook.WitAi.Configuration.WitRuntimeConfiguration::maxConcurrentRequests
	int32_t ___maxConcurrentRequests_8;
	// System.Boolean Facebook.WitAi.Configuration.WitRuntimeConfiguration::sendAudioToWit
	bool ___sendAudioToWit_9;
	// Facebook.WitAi.Interfaces.CustomTranscriptionProvider Facebook.WitAi.Configuration.WitRuntimeConfiguration::customTranscriptionProvider
	CustomTranscriptionProvider_tF690178502A6AC2682EDE3E3DDC067B4574A5F82 * ___customTranscriptionProvider_10;
	// System.Boolean Facebook.WitAi.Configuration.WitRuntimeConfiguration::alwaysRecord
	bool ___alwaysRecord_11;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::preferredActivationOffset
	float ___preferredActivationOffset_12;

public:
	inline static int32_t get_offset_of_witConfiguration_0() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___witConfiguration_0)); }
	inline WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * get_witConfiguration_0() const { return ___witConfiguration_0; }
	inline WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 ** get_address_of_witConfiguration_0() { return &___witConfiguration_0; }
	inline void set_witConfiguration_0(WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * value)
	{
		___witConfiguration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___witConfiguration_0), (void*)value);
	}

	inline static int32_t get_offset_of_minKeepAliveVolume_1() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___minKeepAliveVolume_1)); }
	inline float get_minKeepAliveVolume_1() const { return ___minKeepAliveVolume_1; }
	inline float* get_address_of_minKeepAliveVolume_1() { return &___minKeepAliveVolume_1; }
	inline void set_minKeepAliveVolume_1(float value)
	{
		___minKeepAliveVolume_1 = value;
	}

	inline static int32_t get_offset_of_minKeepAliveTimeInSeconds_2() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___minKeepAliveTimeInSeconds_2)); }
	inline float get_minKeepAliveTimeInSeconds_2() const { return ___minKeepAliveTimeInSeconds_2; }
	inline float* get_address_of_minKeepAliveTimeInSeconds_2() { return &___minKeepAliveTimeInSeconds_2; }
	inline void set_minKeepAliveTimeInSeconds_2(float value)
	{
		___minKeepAliveTimeInSeconds_2 = value;
	}

	inline static int32_t get_offset_of_minTranscriptionKeepAliveTimeInSeconds_3() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___minTranscriptionKeepAliveTimeInSeconds_3)); }
	inline float get_minTranscriptionKeepAliveTimeInSeconds_3() const { return ___minTranscriptionKeepAliveTimeInSeconds_3; }
	inline float* get_address_of_minTranscriptionKeepAliveTimeInSeconds_3() { return &___minTranscriptionKeepAliveTimeInSeconds_3; }
	inline void set_minTranscriptionKeepAliveTimeInSeconds_3(float value)
	{
		___minTranscriptionKeepAliveTimeInSeconds_3 = value;
	}

	inline static int32_t get_offset_of_maxRecordingTime_4() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___maxRecordingTime_4)); }
	inline float get_maxRecordingTime_4() const { return ___maxRecordingTime_4; }
	inline float* get_address_of_maxRecordingTime_4() { return &___maxRecordingTime_4; }
	inline void set_maxRecordingTime_4(float value)
	{
		___maxRecordingTime_4 = value;
	}

	inline static int32_t get_offset_of_soundWakeThreshold_5() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___soundWakeThreshold_5)); }
	inline float get_soundWakeThreshold_5() const { return ___soundWakeThreshold_5; }
	inline float* get_address_of_soundWakeThreshold_5() { return &___soundWakeThreshold_5; }
	inline void set_soundWakeThreshold_5(float value)
	{
		___soundWakeThreshold_5 = value;
	}

	inline static int32_t get_offset_of_sampleLengthInMs_6() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___sampleLengthInMs_6)); }
	inline int32_t get_sampleLengthInMs_6() const { return ___sampleLengthInMs_6; }
	inline int32_t* get_address_of_sampleLengthInMs_6() { return &___sampleLengthInMs_6; }
	inline void set_sampleLengthInMs_6(int32_t value)
	{
		___sampleLengthInMs_6 = value;
	}

	inline static int32_t get_offset_of_micBufferLengthInSeconds_7() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___micBufferLengthInSeconds_7)); }
	inline float get_micBufferLengthInSeconds_7() const { return ___micBufferLengthInSeconds_7; }
	inline float* get_address_of_micBufferLengthInSeconds_7() { return &___micBufferLengthInSeconds_7; }
	inline void set_micBufferLengthInSeconds_7(float value)
	{
		___micBufferLengthInSeconds_7 = value;
	}

	inline static int32_t get_offset_of_maxConcurrentRequests_8() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___maxConcurrentRequests_8)); }
	inline int32_t get_maxConcurrentRequests_8() const { return ___maxConcurrentRequests_8; }
	inline int32_t* get_address_of_maxConcurrentRequests_8() { return &___maxConcurrentRequests_8; }
	inline void set_maxConcurrentRequests_8(int32_t value)
	{
		___maxConcurrentRequests_8 = value;
	}

	inline static int32_t get_offset_of_sendAudioToWit_9() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___sendAudioToWit_9)); }
	inline bool get_sendAudioToWit_9() const { return ___sendAudioToWit_9; }
	inline bool* get_address_of_sendAudioToWit_9() { return &___sendAudioToWit_9; }
	inline void set_sendAudioToWit_9(bool value)
	{
		___sendAudioToWit_9 = value;
	}

	inline static int32_t get_offset_of_customTranscriptionProvider_10() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___customTranscriptionProvider_10)); }
	inline CustomTranscriptionProvider_tF690178502A6AC2682EDE3E3DDC067B4574A5F82 * get_customTranscriptionProvider_10() const { return ___customTranscriptionProvider_10; }
	inline CustomTranscriptionProvider_tF690178502A6AC2682EDE3E3DDC067B4574A5F82 ** get_address_of_customTranscriptionProvider_10() { return &___customTranscriptionProvider_10; }
	inline void set_customTranscriptionProvider_10(CustomTranscriptionProvider_tF690178502A6AC2682EDE3E3DDC067B4574A5F82 * value)
	{
		___customTranscriptionProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customTranscriptionProvider_10), (void*)value);
	}

	inline static int32_t get_offset_of_alwaysRecord_11() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___alwaysRecord_11)); }
	inline bool get_alwaysRecord_11() const { return ___alwaysRecord_11; }
	inline bool* get_address_of_alwaysRecord_11() { return &___alwaysRecord_11; }
	inline void set_alwaysRecord_11(bool value)
	{
		___alwaysRecord_11 = value;
	}

	inline static int32_t get_offset_of_preferredActivationOffset_12() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___preferredActivationOffset_12)); }
	inline float get_preferredActivationOffset_12() const { return ___preferredActivationOffset_12; }
	inline float* get_address_of_preferredActivationOffset_12() { return &___preferredActivationOffset_12; }
	inline void set_preferredActivationOffset_12(float value)
	{
		___preferredActivationOffset_12 = value;
	}
};


// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.WitRequest>
struct UnityEvent_1_t3524738F9C88423D30E1E8A8BCD1A9B98D131711  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3524738F9C88423D30E1E8A8BCD1A9B98D131711, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Lib.WitResponseNode>
struct UnityEvent_1_tCC2044C9D8DFBD8AFF4B651013FF7DCAC5CB6055  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tCC2044C9D8DFBD8AFF4B651013FF7DCAC5CB6055, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.String,System.String>
struct UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// Oculus.Voice.Bindings.Android.VoiceSDKBinding
struct VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2  : public BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6
{
public:

public:
};


// Oculus.Voice.Bindings.Android.VoiceSDKImpl
struct VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D  : public BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F
{
public:
	// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::_isServiceAvailable
	bool ____isServiceAvailable_3;
	// System.Action Oculus.Voice.Bindings.Android.VoiceSDKImpl::OnServiceNotAvailableEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnServiceNotAvailableEvent_4;
	// Facebook.WitAi.IVoiceService Oculus.Voice.Bindings.Android.VoiceSDKImpl::_baseVoiceService
	RuntimeObject* ____baseVoiceService_5;
	// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::_isActive
	bool ____isActive_6;
	// Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding Oculus.Voice.Bindings.Android.VoiceSDKImpl::eventBinding
	VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * ___eventBinding_7;
	// Facebook.WitAi.Interfaces.ITranscriptionProvider Oculus.Voice.Bindings.Android.VoiceSDKImpl::<TranscriptionProvider>k__BackingField
	RuntimeObject* ___U3CTranscriptionProviderU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of__isServiceAvailable_3() { return static_cast<int32_t>(offsetof(VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D, ____isServiceAvailable_3)); }
	inline bool get__isServiceAvailable_3() const { return ____isServiceAvailable_3; }
	inline bool* get_address_of__isServiceAvailable_3() { return &____isServiceAvailable_3; }
	inline void set__isServiceAvailable_3(bool value)
	{
		____isServiceAvailable_3 = value;
	}

	inline static int32_t get_offset_of_OnServiceNotAvailableEvent_4() { return static_cast<int32_t>(offsetof(VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D, ___OnServiceNotAvailableEvent_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnServiceNotAvailableEvent_4() const { return ___OnServiceNotAvailableEvent_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnServiceNotAvailableEvent_4() { return &___OnServiceNotAvailableEvent_4; }
	inline void set_OnServiceNotAvailableEvent_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnServiceNotAvailableEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServiceNotAvailableEvent_4), (void*)value);
	}

	inline static int32_t get_offset_of__baseVoiceService_5() { return static_cast<int32_t>(offsetof(VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D, ____baseVoiceService_5)); }
	inline RuntimeObject* get__baseVoiceService_5() const { return ____baseVoiceService_5; }
	inline RuntimeObject** get_address_of__baseVoiceService_5() { return &____baseVoiceService_5; }
	inline void set__baseVoiceService_5(RuntimeObject* value)
	{
		____baseVoiceService_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baseVoiceService_5), (void*)value);
	}

	inline static int32_t get_offset_of__isActive_6() { return static_cast<int32_t>(offsetof(VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D, ____isActive_6)); }
	inline bool get__isActive_6() const { return ____isActive_6; }
	inline bool* get_address_of__isActive_6() { return &____isActive_6; }
	inline void set__isActive_6(bool value)
	{
		____isActive_6 = value;
	}

	inline static int32_t get_offset_of_eventBinding_7() { return static_cast<int32_t>(offsetof(VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D, ___eventBinding_7)); }
	inline VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * get_eventBinding_7() const { return ___eventBinding_7; }
	inline VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 ** get_address_of_eventBinding_7() { return &___eventBinding_7; }
	inline void set_eventBinding_7(VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * value)
	{
		___eventBinding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventBinding_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTranscriptionProviderU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D, ___U3CTranscriptionProviderU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CTranscriptionProviderU3Ek__BackingField_8() const { return ___U3CTranscriptionProviderU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CTranscriptionProviderU3Ek__BackingField_8() { return &___U3CTranscriptionProviderU3Ek__BackingField_8; }
	inline void set_U3CTranscriptionProviderU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CTranscriptionProviderU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTranscriptionProviderU3Ek__BackingField_8), (void*)value);
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Facebook.WitAi.Events.WitErrorEvent
struct WitErrorEvent_t75A2B26145BEFDEC6A91E014BBA329E35862E571  : public UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4
{
public:

public:
};


// Facebook.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_t8B4131C6B21D3887BC9192ABC8DE29B97197480B  : public UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC
{
public:

public:
};


// Facebook.WitAi.WitRequest
struct WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622  : public RuntimeObject
{
public:
	// Facebook.WitAi.Data.Configuration.WitConfiguration Facebook.WitAi.WitRequest::configuration
	WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * ___configuration_19;
	// System.String Facebook.WitAi.WitRequest::command
	String_t* ___command_20;
	// System.String Facebook.WitAi.WitRequest::path
	String_t* ___path_21;
	// Facebook.WitAi.WitRequest/QueryParam[] Facebook.WitAi.WitRequest::queryParams
	QueryParamU5BU5D_t599632D16DA1C62459C16B3C1A9206C89C61D61B* ___queryParams_22;
	// Facebook.WitAi.IRequest Facebook.WitAi.WitRequest::_request
	RuntimeObject* ____request_23;
	// System.Net.HttpWebResponse Facebook.WitAi.WitRequest::response
	HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * ___response_24;
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.WitRequest::responseData
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___responseData_25;
	// System.Boolean Facebook.WitAi.WitRequest::isActive
	bool ___isActive_26;
	// System.Boolean Facebook.WitAi.WitRequest::responseStarted
	bool ___responseStarted_27;
	// System.Byte[] Facebook.WitAi.WitRequest::postData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___postData_28;
	// System.String Facebook.WitAi.WitRequest::postContentType
	String_t* ___postContentType_29;
	// System.Object Facebook.WitAi.WitRequest::streamLock
	RuntimeObject * ___streamLock_30;
	// System.Int32 Facebook.WitAi.WitRequest::bytesWritten
	int32_t ___bytesWritten_31;
	// System.Boolean Facebook.WitAi.WitRequest::requestRequiresBody
	bool ___requestRequiresBody_32;
	// System.Action`1<Facebook.WitAi.WitRequest> Facebook.WitAi.WitRequest::onResponse
	Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * ___onResponse_33;
	// System.Action`1<Facebook.WitAi.WitRequest> Facebook.WitAi.WitRequest::onInputStreamReady
	Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * ___onInputStreamReady_34;
	// System.Action`1<System.String> Facebook.WitAi.WitRequest::onRawResponse
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onRawResponse_35;
	// System.Action`1<System.String> Facebook.WitAi.WitRequest::onPartialTranscription
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onPartialTranscription_36;
	// System.Action`1<System.String> Facebook.WitAi.WitRequest::onFullTranscription
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onFullTranscription_37;
	// Facebook.WitAi.WitRequest/OnCustomizeUriEvent Facebook.WitAi.WitRequest::onCustomizeUri
	OnCustomizeUriEvent_t9D13E53AB8681A345A39DAA3B800A45F146199FF * ___onCustomizeUri_39;
	// Facebook.WitAi.WitRequest/OnProvideCustomHeadersEvent Facebook.WitAi.WitRequest::onProvideCustomHeaders
	OnProvideCustomHeadersEvent_tFB4F29CECA9500A91331B43CEBADB0F51DDEC4D0 * ___onProvideCustomHeaders_40;
	// Facebook.WitAi.Data.AudioEncoding Facebook.WitAi.WitRequest::audioEncoding
	AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 * ___audioEncoding_41;
	// System.Int32 Facebook.WitAi.WitRequest::statusCode
	int32_t ___statusCode_42;
	// System.String Facebook.WitAi.WitRequest::statusDescription
	String_t* ___statusDescription_43;
	// System.Boolean Facebook.WitAi.WitRequest::isRequestStreamActive
	bool ___isRequestStreamActive_44;
	// System.Boolean Facebook.WitAi.WitRequest::isServerAuthRequired
	bool ___isServerAuthRequired_45;
	// Facebook.WitAi.IRequest Facebook.WitAi.WitRequest::<RequestProvider>k__BackingField
	RuntimeObject* ___U3CRequestProviderU3Ek__BackingField_46;
	// System.Boolean Facebook.WitAi.WitRequest::configurationRequired
	bool ___configurationRequired_47;
	// System.String Facebook.WitAi.WitRequest::serverToken
	String_t* ___serverToken_48;
	// System.String Facebook.WitAi.WitRequest::callingStackTrace
	String_t* ___callingStackTrace_49;
	// System.DateTime Facebook.WitAi.WitRequest::requestStartTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___requestStartTime_50;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]> Facebook.WitAi.WitRequest::writeBuffer
	ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 * ___writeBuffer_51;
	// System.Boolean Facebook.WitAi.WitRequest::_performing
	bool ____performing_57;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Action> Facebook.WitAi.WitRequest::_mainThreadCallbacks
	ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * ____mainThreadCallbacks_58;
	// System.IO.Stream Facebook.WitAi.WitRequest::writeStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___writeStream_59;

public:
	inline static int32_t get_offset_of_configuration_19() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___configuration_19)); }
	inline WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * get_configuration_19() const { return ___configuration_19; }
	inline WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 ** get_address_of_configuration_19() { return &___configuration_19; }
	inline void set_configuration_19(WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * value)
	{
		___configuration_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configuration_19), (void*)value);
	}

	inline static int32_t get_offset_of_command_20() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___command_20)); }
	inline String_t* get_command_20() const { return ___command_20; }
	inline String_t** get_address_of_command_20() { return &___command_20; }
	inline void set_command_20(String_t* value)
	{
		___command_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___command_20), (void*)value);
	}

	inline static int32_t get_offset_of_path_21() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___path_21)); }
	inline String_t* get_path_21() const { return ___path_21; }
	inline String_t** get_address_of_path_21() { return &___path_21; }
	inline void set_path_21(String_t* value)
	{
		___path_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_21), (void*)value);
	}

	inline static int32_t get_offset_of_queryParams_22() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___queryParams_22)); }
	inline QueryParamU5BU5D_t599632D16DA1C62459C16B3C1A9206C89C61D61B* get_queryParams_22() const { return ___queryParams_22; }
	inline QueryParamU5BU5D_t599632D16DA1C62459C16B3C1A9206C89C61D61B** get_address_of_queryParams_22() { return &___queryParams_22; }
	inline void set_queryParams_22(QueryParamU5BU5D_t599632D16DA1C62459C16B3C1A9206C89C61D61B* value)
	{
		___queryParams_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queryParams_22), (void*)value);
	}

	inline static int32_t get_offset_of__request_23() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ____request_23)); }
	inline RuntimeObject* get__request_23() const { return ____request_23; }
	inline RuntimeObject** get_address_of__request_23() { return &____request_23; }
	inline void set__request_23(RuntimeObject* value)
	{
		____request_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____request_23), (void*)value);
	}

	inline static int32_t get_offset_of_response_24() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___response_24)); }
	inline HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * get_response_24() const { return ___response_24; }
	inline HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB ** get_address_of_response_24() { return &___response_24; }
	inline void set_response_24(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * value)
	{
		___response_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___response_24), (void*)value);
	}

	inline static int32_t get_offset_of_responseData_25() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___responseData_25)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_responseData_25() const { return ___responseData_25; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_responseData_25() { return &___responseData_25; }
	inline void set_responseData_25(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___responseData_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseData_25), (void*)value);
	}

	inline static int32_t get_offset_of_isActive_26() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___isActive_26)); }
	inline bool get_isActive_26() const { return ___isActive_26; }
	inline bool* get_address_of_isActive_26() { return &___isActive_26; }
	inline void set_isActive_26(bool value)
	{
		___isActive_26 = value;
	}

	inline static int32_t get_offset_of_responseStarted_27() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___responseStarted_27)); }
	inline bool get_responseStarted_27() const { return ___responseStarted_27; }
	inline bool* get_address_of_responseStarted_27() { return &___responseStarted_27; }
	inline void set_responseStarted_27(bool value)
	{
		___responseStarted_27 = value;
	}

	inline static int32_t get_offset_of_postData_28() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___postData_28)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_postData_28() const { return ___postData_28; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_postData_28() { return &___postData_28; }
	inline void set_postData_28(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___postData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postData_28), (void*)value);
	}

	inline static int32_t get_offset_of_postContentType_29() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___postContentType_29)); }
	inline String_t* get_postContentType_29() const { return ___postContentType_29; }
	inline String_t** get_address_of_postContentType_29() { return &___postContentType_29; }
	inline void set_postContentType_29(String_t* value)
	{
		___postContentType_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postContentType_29), (void*)value);
	}

	inline static int32_t get_offset_of_streamLock_30() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___streamLock_30)); }
	inline RuntimeObject * get_streamLock_30() const { return ___streamLock_30; }
	inline RuntimeObject ** get_address_of_streamLock_30() { return &___streamLock_30; }
	inline void set_streamLock_30(RuntimeObject * value)
	{
		___streamLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___streamLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_bytesWritten_31() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___bytesWritten_31)); }
	inline int32_t get_bytesWritten_31() const { return ___bytesWritten_31; }
	inline int32_t* get_address_of_bytesWritten_31() { return &___bytesWritten_31; }
	inline void set_bytesWritten_31(int32_t value)
	{
		___bytesWritten_31 = value;
	}

	inline static int32_t get_offset_of_requestRequiresBody_32() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___requestRequiresBody_32)); }
	inline bool get_requestRequiresBody_32() const { return ___requestRequiresBody_32; }
	inline bool* get_address_of_requestRequiresBody_32() { return &___requestRequiresBody_32; }
	inline void set_requestRequiresBody_32(bool value)
	{
		___requestRequiresBody_32 = value;
	}

	inline static int32_t get_offset_of_onResponse_33() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___onResponse_33)); }
	inline Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * get_onResponse_33() const { return ___onResponse_33; }
	inline Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 ** get_address_of_onResponse_33() { return &___onResponse_33; }
	inline void set_onResponse_33(Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * value)
	{
		___onResponse_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onResponse_33), (void*)value);
	}

	inline static int32_t get_offset_of_onInputStreamReady_34() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___onInputStreamReady_34)); }
	inline Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * get_onInputStreamReady_34() const { return ___onInputStreamReady_34; }
	inline Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 ** get_address_of_onInputStreamReady_34() { return &___onInputStreamReady_34; }
	inline void set_onInputStreamReady_34(Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * value)
	{
		___onInputStreamReady_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onInputStreamReady_34), (void*)value);
	}

	inline static int32_t get_offset_of_onRawResponse_35() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___onRawResponse_35)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onRawResponse_35() const { return ___onRawResponse_35; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onRawResponse_35() { return &___onRawResponse_35; }
	inline void set_onRawResponse_35(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onRawResponse_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRawResponse_35), (void*)value);
	}

	inline static int32_t get_offset_of_onPartialTranscription_36() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___onPartialTranscription_36)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onPartialTranscription_36() const { return ___onPartialTranscription_36; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onPartialTranscription_36() { return &___onPartialTranscription_36; }
	inline void set_onPartialTranscription_36(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onPartialTranscription_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPartialTranscription_36), (void*)value);
	}

	inline static int32_t get_offset_of_onFullTranscription_37() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___onFullTranscription_37)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onFullTranscription_37() const { return ___onFullTranscription_37; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onFullTranscription_37() { return &___onFullTranscription_37; }
	inline void set_onFullTranscription_37(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onFullTranscription_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFullTranscription_37), (void*)value);
	}

	inline static int32_t get_offset_of_onCustomizeUri_39() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___onCustomizeUri_39)); }
	inline OnCustomizeUriEvent_t9D13E53AB8681A345A39DAA3B800A45F146199FF * get_onCustomizeUri_39() const { return ___onCustomizeUri_39; }
	inline OnCustomizeUriEvent_t9D13E53AB8681A345A39DAA3B800A45F146199FF ** get_address_of_onCustomizeUri_39() { return &___onCustomizeUri_39; }
	inline void set_onCustomizeUri_39(OnCustomizeUriEvent_t9D13E53AB8681A345A39DAA3B800A45F146199FF * value)
	{
		___onCustomizeUri_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCustomizeUri_39), (void*)value);
	}

	inline static int32_t get_offset_of_onProvideCustomHeaders_40() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___onProvideCustomHeaders_40)); }
	inline OnProvideCustomHeadersEvent_tFB4F29CECA9500A91331B43CEBADB0F51DDEC4D0 * get_onProvideCustomHeaders_40() const { return ___onProvideCustomHeaders_40; }
	inline OnProvideCustomHeadersEvent_tFB4F29CECA9500A91331B43CEBADB0F51DDEC4D0 ** get_address_of_onProvideCustomHeaders_40() { return &___onProvideCustomHeaders_40; }
	inline void set_onProvideCustomHeaders_40(OnProvideCustomHeadersEvent_tFB4F29CECA9500A91331B43CEBADB0F51DDEC4D0 * value)
	{
		___onProvideCustomHeaders_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onProvideCustomHeaders_40), (void*)value);
	}

	inline static int32_t get_offset_of_audioEncoding_41() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___audioEncoding_41)); }
	inline AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 * get_audioEncoding_41() const { return ___audioEncoding_41; }
	inline AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 ** get_address_of_audioEncoding_41() { return &___audioEncoding_41; }
	inline void set_audioEncoding_41(AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 * value)
	{
		___audioEncoding_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioEncoding_41), (void*)value);
	}

	inline static int32_t get_offset_of_statusCode_42() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___statusCode_42)); }
	inline int32_t get_statusCode_42() const { return ___statusCode_42; }
	inline int32_t* get_address_of_statusCode_42() { return &___statusCode_42; }
	inline void set_statusCode_42(int32_t value)
	{
		___statusCode_42 = value;
	}

	inline static int32_t get_offset_of_statusDescription_43() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___statusDescription_43)); }
	inline String_t* get_statusDescription_43() const { return ___statusDescription_43; }
	inline String_t** get_address_of_statusDescription_43() { return &___statusDescription_43; }
	inline void set_statusDescription_43(String_t* value)
	{
		___statusDescription_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___statusDescription_43), (void*)value);
	}

	inline static int32_t get_offset_of_isRequestStreamActive_44() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___isRequestStreamActive_44)); }
	inline bool get_isRequestStreamActive_44() const { return ___isRequestStreamActive_44; }
	inline bool* get_address_of_isRequestStreamActive_44() { return &___isRequestStreamActive_44; }
	inline void set_isRequestStreamActive_44(bool value)
	{
		___isRequestStreamActive_44 = value;
	}

	inline static int32_t get_offset_of_isServerAuthRequired_45() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___isServerAuthRequired_45)); }
	inline bool get_isServerAuthRequired_45() const { return ___isServerAuthRequired_45; }
	inline bool* get_address_of_isServerAuthRequired_45() { return &___isServerAuthRequired_45; }
	inline void set_isServerAuthRequired_45(bool value)
	{
		___isServerAuthRequired_45 = value;
	}

	inline static int32_t get_offset_of_U3CRequestProviderU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___U3CRequestProviderU3Ek__BackingField_46)); }
	inline RuntimeObject* get_U3CRequestProviderU3Ek__BackingField_46() const { return ___U3CRequestProviderU3Ek__BackingField_46; }
	inline RuntimeObject** get_address_of_U3CRequestProviderU3Ek__BackingField_46() { return &___U3CRequestProviderU3Ek__BackingField_46; }
	inline void set_U3CRequestProviderU3Ek__BackingField_46(RuntimeObject* value)
	{
		___U3CRequestProviderU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestProviderU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_configurationRequired_47() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___configurationRequired_47)); }
	inline bool get_configurationRequired_47() const { return ___configurationRequired_47; }
	inline bool* get_address_of_configurationRequired_47() { return &___configurationRequired_47; }
	inline void set_configurationRequired_47(bool value)
	{
		___configurationRequired_47 = value;
	}

	inline static int32_t get_offset_of_serverToken_48() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___serverToken_48)); }
	inline String_t* get_serverToken_48() const { return ___serverToken_48; }
	inline String_t** get_address_of_serverToken_48() { return &___serverToken_48; }
	inline void set_serverToken_48(String_t* value)
	{
		___serverToken_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serverToken_48), (void*)value);
	}

	inline static int32_t get_offset_of_callingStackTrace_49() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___callingStackTrace_49)); }
	inline String_t* get_callingStackTrace_49() const { return ___callingStackTrace_49; }
	inline String_t** get_address_of_callingStackTrace_49() { return &___callingStackTrace_49; }
	inline void set_callingStackTrace_49(String_t* value)
	{
		___callingStackTrace_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callingStackTrace_49), (void*)value);
	}

	inline static int32_t get_offset_of_requestStartTime_50() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___requestStartTime_50)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_requestStartTime_50() const { return ___requestStartTime_50; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_requestStartTime_50() { return &___requestStartTime_50; }
	inline void set_requestStartTime_50(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___requestStartTime_50 = value;
	}

	inline static int32_t get_offset_of_writeBuffer_51() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___writeBuffer_51)); }
	inline ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 * get_writeBuffer_51() const { return ___writeBuffer_51; }
	inline ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 ** get_address_of_writeBuffer_51() { return &___writeBuffer_51; }
	inline void set_writeBuffer_51(ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 * value)
	{
		___writeBuffer_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeBuffer_51), (void*)value);
	}

	inline static int32_t get_offset_of__performing_57() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ____performing_57)); }
	inline bool get__performing_57() const { return ____performing_57; }
	inline bool* get_address_of__performing_57() { return &____performing_57; }
	inline void set__performing_57(bool value)
	{
		____performing_57 = value;
	}

	inline static int32_t get_offset_of__mainThreadCallbacks_58() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ____mainThreadCallbacks_58)); }
	inline ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * get__mainThreadCallbacks_58() const { return ____mainThreadCallbacks_58; }
	inline ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE ** get_address_of__mainThreadCallbacks_58() { return &____mainThreadCallbacks_58; }
	inline void set__mainThreadCallbacks_58(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * value)
	{
		____mainThreadCallbacks_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mainThreadCallbacks_58), (void*)value);
	}

	inline static int32_t get_offset_of_writeStream_59() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___writeStream_59)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_writeStream_59() const { return ___writeStream_59; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_writeStream_59() { return &___writeStream_59; }
	inline void set_writeStream_59(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___writeStream_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeStream_59), (void*)value);
	}
};

struct WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_StaticFields
{
public:
	// Facebook.WitAi.WitRequest/PreSendRequestDelegate Facebook.WitAi.WitRequest::onPreSendRequest
	PreSendRequestDelegate_t59C335BC80A012FB63121965FD64BB1A8F937955 * ___onPreSendRequest_38;
	// System.String Facebook.WitAi.WitRequest::_operatingSystem
	String_t* ____operatingSystem_52;
	// System.String Facebook.WitAi.WitRequest::_deviceModel
	String_t* ____deviceModel_53;
	// System.String Facebook.WitAi.WitRequest::_appIdentifier
	String_t* ____appIdentifier_54;
	// System.String Facebook.WitAi.WitRequest::_unityVersion
	String_t* ____unityVersion_55;
	// System.Func`1<System.String> Facebook.WitAi.WitRequest::OnProvideCustomUserAgent
	Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * ___OnProvideCustomUserAgent_56;

public:
	inline static int32_t get_offset_of_onPreSendRequest_38() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_StaticFields, ___onPreSendRequest_38)); }
	inline PreSendRequestDelegate_t59C335BC80A012FB63121965FD64BB1A8F937955 * get_onPreSendRequest_38() const { return ___onPreSendRequest_38; }
	inline PreSendRequestDelegate_t59C335BC80A012FB63121965FD64BB1A8F937955 ** get_address_of_onPreSendRequest_38() { return &___onPreSendRequest_38; }
	inline void set_onPreSendRequest_38(PreSendRequestDelegate_t59C335BC80A012FB63121965FD64BB1A8F937955 * value)
	{
		___onPreSendRequest_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreSendRequest_38), (void*)value);
	}

	inline static int32_t get_offset_of__operatingSystem_52() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_StaticFields, ____operatingSystem_52)); }
	inline String_t* get__operatingSystem_52() const { return ____operatingSystem_52; }
	inline String_t** get_address_of__operatingSystem_52() { return &____operatingSystem_52; }
	inline void set__operatingSystem_52(String_t* value)
	{
		____operatingSystem_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____operatingSystem_52), (void*)value);
	}

	inline static int32_t get_offset_of__deviceModel_53() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_StaticFields, ____deviceModel_53)); }
	inline String_t* get__deviceModel_53() const { return ____deviceModel_53; }
	inline String_t** get_address_of__deviceModel_53() { return &____deviceModel_53; }
	inline void set__deviceModel_53(String_t* value)
	{
		____deviceModel_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____deviceModel_53), (void*)value);
	}

	inline static int32_t get_offset_of__appIdentifier_54() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_StaticFields, ____appIdentifier_54)); }
	inline String_t* get__appIdentifier_54() const { return ____appIdentifier_54; }
	inline String_t** get_address_of__appIdentifier_54() { return &____appIdentifier_54; }
	inline void set__appIdentifier_54(String_t* value)
	{
		____appIdentifier_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____appIdentifier_54), (void*)value);
	}

	inline static int32_t get_offset_of__unityVersion_55() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_StaticFields, ____unityVersion_55)); }
	inline String_t* get__unityVersion_55() const { return ____unityVersion_55; }
	inline String_t** get_address_of__unityVersion_55() { return &____unityVersion_55; }
	inline void set__unityVersion_55(String_t* value)
	{
		____unityVersion_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unityVersion_55), (void*)value);
	}

	inline static int32_t get_offset_of_OnProvideCustomUserAgent_56() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_StaticFields, ___OnProvideCustomUserAgent_56)); }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * get_OnProvideCustomUserAgent_56() const { return ___OnProvideCustomUserAgent_56; }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 ** get_address_of_OnProvideCustomUserAgent_56() { return &___OnProvideCustomUserAgent_56; }
	inline void set_OnProvideCustomUserAgent_56(Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * value)
	{
		___OnProvideCustomUserAgent_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnProvideCustomUserAgent_56), (void*)value);
	}
};


// Facebook.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_tC0FA819B0DDD5D9FBDB63FF11D5FEBC287C4BF82  : public UnityEvent_1_t3524738F9C88423D30E1E8A8BCD1A9B98D131711
{
public:

public:
};


// Facebook.WitAi.Events.WitResponseEvent
struct WitResponseEvent_tB6FF10625816530C0B3B946E94F9701FF0FAC6B4  : public UnityEvent_1_tCC2044C9D8DFBD8AFF4B651013FF7DCAC5CB6055
{
public:

public:
};


// Facebook.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding
struct VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// Facebook.WitAi.IVoiceService Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::_voiceService
	RuntimeObject* ____voiceService_4;
	// Oculus.Voice.Bindings.Android.IVCBindingEvents Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::_bindingEvents
	RuntimeObject* ____bindingEvents_5;

public:
	inline static int32_t get_offset_of__voiceService_4() { return static_cast<int32_t>(offsetof(VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118, ____voiceService_4)); }
	inline RuntimeObject* get__voiceService_4() const { return ____voiceService_4; }
	inline RuntimeObject** get_address_of__voiceService_4() { return &____voiceService_4; }
	inline void set__voiceService_4(RuntimeObject* value)
	{
		____voiceService_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____voiceService_4), (void*)value);
	}

	inline static int32_t get_offset_of__bindingEvents_5() { return static_cast<int32_t>(offsetof(VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118, ____bindingEvents_5)); }
	inline RuntimeObject* get__bindingEvents_5() const { return ____bindingEvents_5; }
	inline RuntimeObject** get_address_of__bindingEvents_5() { return &____bindingEvents_5; }
	inline void set__bindingEvents_5(RuntimeObject* value)
	{
		____bindingEvents_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bindingEvents_5), (void*)value);
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// Facebook.WitAi.Data.Configuration.WitApplication Facebook.WitAi.Data.Configuration.WitConfiguration::application
	WitApplication_t7A7F18E3FBD810923842318ADB5935CC9BBA2E89 * ___application_4;
	// System.String Facebook.WitAi.Data.Configuration.WitConfiguration::configId
	String_t* ___configId_5;
	// System.String Facebook.WitAi.Data.Configuration.WitConfiguration::clientAccessToken
	String_t* ___clientAccessToken_6;
	// System.Int32 Facebook.WitAi.Data.Configuration.WitConfiguration::timeoutMS
	int32_t ___timeoutMS_7;
	// Facebook.WitAi.Configuration.WitEndpointConfig Facebook.WitAi.Data.Configuration.WitConfiguration::endpointConfiguration
	WitEndpointConfig_t6974155BF4F518549C3D435F2DA4BC4077706731 * ___endpointConfiguration_8;
	// Facebook.WitAi.Data.Entities.WitEntity[] Facebook.WitAi.Data.Configuration.WitConfiguration::entities
	WitEntityU5BU5D_tA95536CFAD78C68FB33FDF0B3BFA1BD73302E66D* ___entities_9;
	// Facebook.WitAi.Data.Intents.WitIntent[] Facebook.WitAi.Data.Configuration.WitConfiguration::intents
	WitIntentU5BU5D_t41058B7A90DE88E8ED6B651A68997887FF21586C* ___intents_10;
	// Facebook.WitAi.Data.Traits.WitTrait[] Facebook.WitAi.Data.Configuration.WitConfiguration::traits
	WitTraitU5BU5D_tF4A72012100EA4C0AAB6B63A20D37197CA259702* ___traits_11;
	// System.Boolean Facebook.WitAi.Data.Configuration.WitConfiguration::isDemoOnly
	bool ___isDemoOnly_12;

public:
	inline static int32_t get_offset_of_application_4() { return static_cast<int32_t>(offsetof(WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631, ___application_4)); }
	inline WitApplication_t7A7F18E3FBD810923842318ADB5935CC9BBA2E89 * get_application_4() const { return ___application_4; }
	inline WitApplication_t7A7F18E3FBD810923842318ADB5935CC9BBA2E89 ** get_address_of_application_4() { return &___application_4; }
	inline void set_application_4(WitApplication_t7A7F18E3FBD810923842318ADB5935CC9BBA2E89 * value)
	{
		___application_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___application_4), (void*)value);
	}

	inline static int32_t get_offset_of_configId_5() { return static_cast<int32_t>(offsetof(WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631, ___configId_5)); }
	inline String_t* get_configId_5() const { return ___configId_5; }
	inline String_t** get_address_of_configId_5() { return &___configId_5; }
	inline void set_configId_5(String_t* value)
	{
		___configId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configId_5), (void*)value);
	}

	inline static int32_t get_offset_of_clientAccessToken_6() { return static_cast<int32_t>(offsetof(WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631, ___clientAccessToken_6)); }
	inline String_t* get_clientAccessToken_6() const { return ___clientAccessToken_6; }
	inline String_t** get_address_of_clientAccessToken_6() { return &___clientAccessToken_6; }
	inline void set_clientAccessToken_6(String_t* value)
	{
		___clientAccessToken_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientAccessToken_6), (void*)value);
	}

	inline static int32_t get_offset_of_timeoutMS_7() { return static_cast<int32_t>(offsetof(WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631, ___timeoutMS_7)); }
	inline int32_t get_timeoutMS_7() const { return ___timeoutMS_7; }
	inline int32_t* get_address_of_timeoutMS_7() { return &___timeoutMS_7; }
	inline void set_timeoutMS_7(int32_t value)
	{
		___timeoutMS_7 = value;
	}

	inline static int32_t get_offset_of_endpointConfiguration_8() { return static_cast<int32_t>(offsetof(WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631, ___endpointConfiguration_8)); }
	inline WitEndpointConfig_t6974155BF4F518549C3D435F2DA4BC4077706731 * get_endpointConfiguration_8() const { return ___endpointConfiguration_8; }
	inline WitEndpointConfig_t6974155BF4F518549C3D435F2DA4BC4077706731 ** get_address_of_endpointConfiguration_8() { return &___endpointConfiguration_8; }
	inline void set_endpointConfiguration_8(WitEndpointConfig_t6974155BF4F518549C3D435F2DA4BC4077706731 * value)
	{
		___endpointConfiguration_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endpointConfiguration_8), (void*)value);
	}

	inline static int32_t get_offset_of_entities_9() { return static_cast<int32_t>(offsetof(WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631, ___entities_9)); }
	inline WitEntityU5BU5D_tA95536CFAD78C68FB33FDF0B3BFA1BD73302E66D* get_entities_9() const { return ___entities_9; }
	inline WitEntityU5BU5D_tA95536CFAD78C68FB33FDF0B3BFA1BD73302E66D** get_address_of_entities_9() { return &___entities_9; }
	inline void set_entities_9(WitEntityU5BU5D_tA95536CFAD78C68FB33FDF0B3BFA1BD73302E66D* value)
	{
		___entities_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entities_9), (void*)value);
	}

	inline static int32_t get_offset_of_intents_10() { return static_cast<int32_t>(offsetof(WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631, ___intents_10)); }
	inline WitIntentU5BU5D_t41058B7A90DE88E8ED6B651A68997887FF21586C* get_intents_10() const { return ___intents_10; }
	inline WitIntentU5BU5D_t41058B7A90DE88E8ED6B651A68997887FF21586C** get_address_of_intents_10() { return &___intents_10; }
	inline void set_intents_10(WitIntentU5BU5D_t41058B7A90DE88E8ED6B651A68997887FF21586C* value)
	{
		___intents_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___intents_10), (void*)value);
	}

	inline static int32_t get_offset_of_traits_11() { return static_cast<int32_t>(offsetof(WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631, ___traits_11)); }
	inline WitTraitU5BU5D_tF4A72012100EA4C0AAB6B63A20D37197CA259702* get_traits_11() const { return ___traits_11; }
	inline WitTraitU5BU5D_tF4A72012100EA4C0AAB6B63A20D37197CA259702** get_address_of_traits_11() { return &___traits_11; }
	inline void set_traits_11(WitTraitU5BU5D_tF4A72012100EA4C0AAB6B63A20D37197CA259702* value)
	{
		___traits_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___traits_11), (void*)value);
	}

	inline static int32_t get_offset_of_isDemoOnly_12() { return static_cast<int32_t>(offsetof(WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631, ___isDemoOnly_12)); }
	inline bool get_isDemoOnly_12() const { return ___isDemoOnly_12; }
	inline bool* get_address_of_isDemoOnly_12() { return &___isDemoOnly_12; }
	inline void set_isDemoOnly_12(bool value)
	{
		___isDemoOnly_12 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Facebook.WitAi.VoiceService
struct VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Facebook.WitAi.Events.VoiceEvents Facebook.WitAi.VoiceService::events
	VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * ___events_4;

public:
	inline static int32_t get_offset_of_events_4() { return static_cast<int32_t>(offsetof(VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400, ___events_4)); }
	inline VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * get_events_4() const { return ___events_4; }
	inline VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D ** get_address_of_events_4() { return &___events_4; }
	inline void set_events_4(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * value)
	{
		___events_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_4), (void*)value);
	}
};


// Oculus.Voice.AppVoiceExperience
struct AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12  : public VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400
{
public:
	// Facebook.WitAi.Configuration.WitRuntimeConfiguration Oculus.Voice.AppVoiceExperience::witRuntimeConfiguration
	WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * ___witRuntimeConfiguration_5;
	// System.Boolean Oculus.Voice.AppVoiceExperience::usePlatformServices
	bool ___usePlatformServices_6;
	// Oculus.Voice.Interfaces.IPlatformVoiceService Oculus.Voice.AppVoiceExperience::platformService
	RuntimeObject* ___platformService_7;
	// Facebook.WitAi.IVoiceService Oculus.Voice.AppVoiceExperience::voiceServiceImpl
	RuntimeObject* ___voiceServiceImpl_8;

public:
	inline static int32_t get_offset_of_witRuntimeConfiguration_5() { return static_cast<int32_t>(offsetof(AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12, ___witRuntimeConfiguration_5)); }
	inline WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * get_witRuntimeConfiguration_5() const { return ___witRuntimeConfiguration_5; }
	inline WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 ** get_address_of_witRuntimeConfiguration_5() { return &___witRuntimeConfiguration_5; }
	inline void set_witRuntimeConfiguration_5(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * value)
	{
		___witRuntimeConfiguration_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___witRuntimeConfiguration_5), (void*)value);
	}

	inline static int32_t get_offset_of_usePlatformServices_6() { return static_cast<int32_t>(offsetof(AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12, ___usePlatformServices_6)); }
	inline bool get_usePlatformServices_6() const { return ___usePlatformServices_6; }
	inline bool* get_address_of_usePlatformServices_6() { return &___usePlatformServices_6; }
	inline void set_usePlatformServices_6(bool value)
	{
		___usePlatformServices_6 = value;
	}

	inline static int32_t get_offset_of_platformService_7() { return static_cast<int32_t>(offsetof(AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12, ___platformService_7)); }
	inline RuntimeObject* get_platformService_7() const { return ___platformService_7; }
	inline RuntimeObject** get_address_of_platformService_7() { return &___platformService_7; }
	inline void set_platformService_7(RuntimeObject* value)
	{
		___platformService_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platformService_7), (void*)value);
	}

	inline static int32_t get_offset_of_voiceServiceImpl_8() { return static_cast<int32_t>(offsetof(AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12, ___voiceServiceImpl_8)); }
	inline RuntimeObject* get_voiceServiceImpl_8() const { return ___voiceServiceImpl_8; }
	inline RuntimeObject** get_address_of_voiceServiceImpl_8() { return &___voiceServiceImpl_8; }
	inline void set_voiceServiceImpl_8(RuntimeObject* value)
	{
		___voiceServiceImpl_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceServiceImpl_8), (void*)value);
	}
};


// Facebook.WitAi.Wit
struct Wit_t56D21E306ECB54B06B548149BC8103A807A158D8  : public VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400
{
public:
	// Facebook.WitAi.Configuration.WitRuntimeConfiguration Facebook.WitAi.Wit::witRuntimeConfiguration
	WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * ___witRuntimeConfiguration_5;
	// Facebook.WitAi.WitService Facebook.WitAi.Wit::witService
	WitService_t860537723698CF0607466342346F3B1FECA68DCB * ___witService_6;

public:
	inline static int32_t get_offset_of_witRuntimeConfiguration_5() { return static_cast<int32_t>(offsetof(Wit_t56D21E306ECB54B06B548149BC8103A807A158D8, ___witRuntimeConfiguration_5)); }
	inline WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * get_witRuntimeConfiguration_5() const { return ___witRuntimeConfiguration_5; }
	inline WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 ** get_address_of_witRuntimeConfiguration_5() { return &___witRuntimeConfiguration_5; }
	inline void set_witRuntimeConfiguration_5(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * value)
	{
		___witRuntimeConfiguration_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___witRuntimeConfiguration_5), (void*)value);
	}

	inline static int32_t get_offset_of_witService_6() { return static_cast<int32_t>(offsetof(Wit_t56D21E306ECB54B06B548149BC8103A807A158D8, ___witService_6)); }
	inline WitService_t860537723698CF0607466342346F3B1FECA68DCB * get_witService_6() const { return ___witService_6; }
	inline WitService_t860537723698CF0607466342346F3B1FECA68DCB ** get_address_of_witService_6() { return &___witService_6; }
	inline void set_witService_6(WitService_t860537723698CF0607466342346F3B1FECA68DCB * value)
	{
		___witService_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___witService_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_get_Count_m63E6DF1AA7AE0E00DC3800A837256C5B258AC71D_gshared (KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::CopyTo(!0[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection_CopyTo_mDD1B1C659F8126261FE53B23432BB451196D0837_gshared (KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Set<System.Object>(System.String,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisRuntimeObject_m2914957418A0AC6FD1F738FDBED7CB07CC20E800_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, RuntimeObject * ___val1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Set<System.Single>(System.String,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, float ___val1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Set<System.Int32>(System.String,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2AF1FB1EDDF724F87A163497D120E653037EB54C_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, int32_t ___val1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Set<System.Boolean>(System.String,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC0A9F47C492107DC29D9AD3960BF83E84BD776FB_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, bool ___val1, const RuntimeMethod* method);
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<System.Object>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAndroidConnectionImpl_1__ctor_m418B190152EEC4C99CC576124B47A198C189D6D7_gshared (BaseAndroidConnectionImpl_1_tA385AC35967B49A71BAB023CE6363A7D25A2F36B * __this, String_t* ___className0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<System.Object>::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAndroidConnectionImpl_1_Connect_mB57E16FF6EBF72EDE04EDA63DBE600DA1B850E23_gshared (BaseAndroidConnectionImpl_1_tA385AC35967B49A71BAB023CE6363A7D25A2F36B * __this, const RuntimeMethod* method);
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<System.Object>::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAndroidConnectionImpl_1_Disconnect_m6167A0FAA2BCF5D7C0CB60A5BF9776CE2FDF46DD_gshared (BaseAndroidConnectionImpl_1_tA385AC35967B49A71BAB023CE6363A7D25A2F36B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_mBF66265092F853A13F5698ED2B62F0ADA48E4F0A_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, float ___arg00, const RuntimeMethod* method);

// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::get_Keys()
inline KeyCollection_tEFC457E9F0FD4BE3F1E8D03D08C57E0FEDCE324A * Dictionary_2_get_Keys_m9AEB54A2F6FDBD9E1C3A3655FCAA612A1F0AFD34 (Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tEFC457E9F0FD4BE3F1E8D03D08C57E0FEDCE324A * (*) (Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E *, const RuntimeMethod*))Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::get_Count()
inline int32_t KeyCollection_get_Count_mC26B198CCB6DE9D6804B26D036F6435AE879E62C (KeyCollection_tEFC457E9F0FD4BE3F1E8D03D08C57E0FEDCE324A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyCollection_tEFC457E9F0FD4BE3F1E8D03D08C57E0FEDCE324A *, const RuntimeMethod*))KeyCollection_get_Count_m63E6DF1AA7AE0E00DC3800A837256C5B258AC71D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::CopyTo(!0[],System.Int32)
inline void KeyCollection_CopyTo_m4710FE6F70E54DCAE43661D63499C3961210CA1A (KeyCollection_tEFC457E9F0FD4BE3F1E8D03D08C57E0FEDCE324A * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tEFC457E9F0FD4BE3F1E8D03D08C57E0FEDCE324A *, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, int32_t, const RuntimeMethod*))KeyCollection_CopyTo_mDD1B1C659F8126261FE53B23432BB451196D0837_gshared)(__this, ___array0, ___index1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor()
inline void Dictionary_2__ctor_mC1E83FC6C973AAA99FDC936FFCD03F750D377E54 (Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::Add(!0,!1)
inline void Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE (Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * __this, String_t* ___key0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E *, String_t*, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_HasPlatformIntegrations()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_HasPlatformIntegrations_m7882C9A275163FC894F0A863402C2C19FE9A2BB0_inline (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::.ctor(Facebook.WitAi.IVoiceService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl__ctor_mB6AA37992649188E2A461D61888A30D91D3A7982 (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, RuntimeObject* ___baseVoiceService0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// Facebook.WitAi.Configuration.WitRuntimeConfiguration Oculus.Voice.AppVoiceExperience::get_RuntimeConfiguration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * AppVoiceExperience_get_RuntimeConfiguration_mB4BD9F2821001AC00FDD57A7DE07DF929B5C0FFE_inline (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method);
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::SetRuntimeConfiguration(Facebook.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_SetRuntimeConfiguration_mCDD3F6D82C6AE5E2EF91CB79D1F23FDC9D3BFCE5 (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * ___configuration0, const RuntimeMethod* method);
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_PlatformSupportsWit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKImpl_get_PlatformSupportsWit_mDF8BC259EA908FBB9C028FBDC1DA0FA1DC0674B1 (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Wit::set_RuntimeConfiguration(Facebook.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Wit_set_RuntimeConfiguration_m62EF21A1D006E0B2AB537EF58FB60F92889035A9_inline (Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 * __this, WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * ___value0, const RuntimeMethod* method);
// System.Void Oculus.Voice.AppVoiceExperience::RevertToWitUnity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_RevertToWitUnity_mC1C38663B0170469273299C774EC55ACC448E792 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Facebook.WitAi.Wit>()
inline Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 * Component_GetComponent_TisWit_t56D21E306ECB54B06B548149BC8103A807A158D8_m062E60F4931FEE641EBBC3DB2D2F1EC0346F293F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Facebook.WitAi.Wit>()
inline Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 * GameObject_AddComponent_TisWit_t56D21E306ECB54B06B548149BC8103A807A158D8_mC4D7F7C6EE25C593AA1D216877B8276E0CBED30A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Facebook.WitAi.VoiceService::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceService_OnEnable_mA18321DEE6E6CD119D4FA57F07B4AFDD0944A60F (VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 * __this, const RuntimeMethod* method);
// System.Boolean Oculus.VoiceSDK.Utilities.MicPermissionsManager::HasMicPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MicPermissionsManager_HasMicPermission_mF8FB7BE68D9E3A202BDDB8E3DA7BF3B0C0F80528 (const RuntimeMethod* method);
// System.Void Oculus.Voice.AppVoiceExperience::InitVoiceSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_InitVoiceSDK_m4B20AF2EBAA151BF865DA52538E2C4007F9AFF40 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method);
// System.Void Oculus.VoiceSDK.Utilities.MicPermissionsManager::RequestMicPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicPermissionsManager_RequestMicPermission_m6C4EE7E9EB94293A740250D10754413EC3A25D75 (const RuntimeMethod* method);
// System.Void Facebook.WitAi.VoiceService::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceService_OnDisable_m37548BCBB7B26B31D4BDB31E243A3E32040C3F81 (VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 * __this, const RuntimeMethod* method);
// System.Boolean Oculus.Voice.AppVoiceExperience::get_Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_Initialized_m99D44C4F745F16524F0CE216E24315E933D22749 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.VoiceService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceService__ctor_m05C18E3CCBCBB09D89BC9DD6FD0D247C5AD139EE (VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_m85B154FEA4C22EDCD5B1EAA98E3D682A1184EA18 (String_t* ___permission0, const RuntimeMethod* method);
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mF5FEC728857617E74AA605C6F92F1B496E2B8DBF (String_t* ___permission0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Oculus.Voice.Core.Bindings.Android.BaseServiceBinding::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseServiceBinding__ctor_mE48FF343A8BD176981F554E32D16216587EB1872 (BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___sdkInstance0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding::.ctor(Facebook.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKConfigBinding__ctor_mB1CC05F3191CD15BCE36790CFD1134D349CC3493 (VoiceSDKConfigBinding_t4CA77A43FA0B1835873B7CA7ED10CB48240278A6 * __this, WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * ___config0, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding::ToJavaObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * VoiceSDKConfigBinding_ToJavaObject_m865C74F03FD60D025168D6EDEB15885216F971E6 (VoiceSDKConfigBinding_t4CA77A43FA0B1835873B7CA7ED10CB48240278A6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Set<System.String>(System.String,!!0)
inline void AndroidJavaObject_Set_TisString_t_m2DA3663726A288B80B948F1405495E0AF9A8F347 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, String_t* ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, String_t*, const RuntimeMethod*))AndroidJavaObject_Set_TisRuntimeObject_m2914957418A0AC6FD1F738FDBED7CB07CC20E800_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Set<UnityEngine.AndroidJavaObject>(System.String,!!0)
inline void AndroidJavaObject_Set_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mF768D2F7310A4A5788843430433EEC2BFF05A8E3 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*))AndroidJavaObject_Set_TisRuntimeObject_m2914957418A0AC6FD1F738FDBED7CB07CC20E800_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Set<System.Single>(System.String,!!0)
inline void AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, float ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, float, const RuntimeMethod*))AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Set<System.Int32>(System.String,!!0)
inline void AndroidJavaObject_Set_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2AF1FB1EDDF724F87A163497D120E653037EB54C (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, int32_t ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, int32_t, const RuntimeMethod*))AndroidJavaObject_Set_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2AF1FB1EDDF724F87A163497D120E653037EB54C_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Set<System.Boolean>(System.String,!!0)
inline void AndroidJavaObject_Set_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC0A9F47C492107DC29D9AD3960BF83E84BD776FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, bool ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, bool, const RuntimeMethod*))AndroidJavaObject_Set_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC0A9F47C492107DC29D9AD3960BF83E84BD776FB_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Bindings.Android.VoiceSDKBinding>::.ctor(System.String)
inline void BaseAndroidConnectionImpl_1__ctor_m63FE40AA0F655EBB6431640D7092C0055394A5DE (BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F * __this, String_t* ___className0, const RuntimeMethod* method)
{
	((  void (*) (BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F *, String_t*, const RuntimeMethod*))BaseAndroidConnectionImpl_1__ctor_m418B190152EEC4C99CC576124B47A198C189D6D7_gshared)(__this, ___className0, method);
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_PlatformSupportsWit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_PlatformSupportsWit_m9E6893583E603941B7351E1008F660C72D515F65 (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, const RuntimeMethod* method);
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_Active_m09D7CDA4F56323048B65074DB987AA46416CE34D (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, const RuntimeMethod* method);
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_IsRequestActive_mE270A11A52C1AD4D3CA4A55F7B7E330AA1247342 (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, const RuntimeMethod* method);
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_MicActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_MicActive_m45CD8895B212648D801574C20FA76E4C6651E9EC (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, const RuntimeMethod* method);
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::SetRuntimeConfiguration(Facebook.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_SetRuntimeConfiguration_mC868CD77571B7F15D1DBA21D550409420521B113 (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * ___configuration0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Bindings.Android.VoiceSDKBinding>::Connect()
inline void BaseAndroidConnectionImpl_1_Connect_mA1CB5E34819686404186897ED627B9AA84A90171 (BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F * __this, const RuntimeMethod* method)
{
	((  void (*) (BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F *, const RuntimeMethod*))BaseAndroidConnectionImpl_1_Connect_mB57E16FF6EBF72EDE04EDA63DBE600DA1B850E23_gshared)(__this, method);
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::.ctor(Facebook.WitAi.IVoiceService,Oculus.Voice.Bindings.Android.IVCBindingEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding__ctor_mDA0E4C22830921482F8CEAB2B978EFECDAFE8F15 (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * __this, RuntimeObject* ___voiceService0, RuntimeObject* ___bindingEvents1, const RuntimeMethod* method);
// Facebook.WitAi.Events.VoiceEvents Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::get_VoiceEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * VoiceSDKListenerBinding_get_VoiceEvents_m4326A578DC78A053883704536826582A6BA389DA (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::SetListener(Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_SetListener_m7488CC22AAD677683BE9D7D18F6A240CB25D0C80 (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * ___listener0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Connect_mC829E36ABC9F3BA19B2B931B4880FE730ECD5491 (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Bindings.Android.VoiceSDKBinding>::Disconnect()
inline void BaseAndroidConnectionImpl_1_Disconnect_m8466A5C9F1E6F0AC81C1944C06B7BCBE94C69CF7 (BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F * __this, const RuntimeMethod* method)
{
	((  void (*) (BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F *, const RuntimeMethod*))BaseAndroidConnectionImpl_1_Disconnect_m6167A0FAA2BCF5D7C0CB60A5BF9776CE2FDF46DD_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_m76514CF6509E364B71ABA1801D90B206F70F509E (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate(System.String,Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_m72DCA2C1A074C91870E499C18F4D75E0BAAD0B1F (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, String_t* ___text0, WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * ___options1, const RuntimeMethod* method);
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_m20422735ACA81DA500EC670D6D154F1A79E7898D (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, const RuntimeMethod* method);
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate(Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_m02C8A8FB3E4F5B06659BF4F19B1F450D7D72424B (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * ___options0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::ActivateImmediately()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_ActivateImmediately_m09DF22FB1438F4DF865EDCDD1684952C4774EA88 (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, const RuntimeMethod* method);
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::ActivateImmediately(Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_ActivateImmediately_m97DE475C9FD0E91BB40272DEB5CCE48EB894C55D (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * ___options0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Deactivate_m7941512C3434A6F4E5AC62A749705AFEE9CECA3F (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseJson::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * WitResponseJson_Parse_m65F6381321705885F147425DCB63F3840635D4D6 (String_t* ___aJSON0, const RuntimeMethod* method);
// System.String Facebook.WitAi.Lib.WitResponseNode::op_Implicit(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitResponseNode_op_Implicit_m6AE01772CDB9839507732D5D953329688607B62E (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___d0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(!0)
inline void UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10 (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, String_t* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Lib.WitResponseNode>::Invoke(!0)
inline void UnityEvent_1_Invoke_m65140CE9B1391F17461B85941BAD199745AD67D6 (UnityEvent_1_tCC2044C9D8DFBD8AFF4B651013FF7DCAC5CB6055 * __this, WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tCC2044C9D8DFBD8AFF4B651013FF7DCAC5CB6055 *, WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, const RuntimeMethod*))UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.String>::Invoke(!0,!1)
inline void UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1 (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 * __this, String_t* ___arg00, String_t* ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 *, String_t*, String_t*, const RuntimeMethod*))UnityEvent_2_Invoke_mBF66265092F853A13F5698ED2B62F0ADA48E4F0A_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(!0)
inline void UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, float ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *, float, const RuntimeMethod*))UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.WitRequest>::Invoke(!0)
inline void UnityEvent_1_Invoke_mE7B69F204F1D5780888EB968EB6AF610B17E303A (UnityEvent_1_t3524738F9C88423D30E1E8A8BCD1A9B98D131711 * __this, WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3524738F9C88423D30E1E8A8BCD1A9B98D131711 *, WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 *, const RuntimeMethod*))UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared)(__this, ___arg00, method);
}
// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.VoiceEvents::get_OnPartialTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * VoiceEvents_get_OnPartialTranscription_m42A410529487FA1E9A6BA3104E4CE6E2063E82A7_inline (VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * __this, const RuntimeMethod* method);
// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.VoiceEvents::get_OnFullTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * VoiceEvents_get_OnFullTranscription_m2F3454ABA3D28D8BCA75778AC33D5AC2B93EEA28_inline (VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String[] Oculus.Voice.AppBuiltIns::get_appNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* AppBuiltIns_get_appNames_m6947CE1793F097AB2D8FBFFD25082ABCB4CCA744 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m9AEB54A2F6FDBD9E1C3A3655FCAA612A1F0AFD34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_CopyTo_m4710FE6F70E54DCAE43661D63499C3961210CA1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_get_Count_mC26B198CCB6DE9D6804B26D036F6435AE879E62C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	{
		// string[] keys = new string[apps.Keys.Count];
		IL2CPP_RUNTIME_CLASS_INIT(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var);
		Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * L_0 = ((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->get_apps_2();
		NullCheck(L_0);
		KeyCollection_tEFC457E9F0FD4BE3F1E8D03D08C57E0FEDCE324A * L_1;
		L_1 = Dictionary_2_get_Keys_m9AEB54A2F6FDBD9E1C3A3655FCAA612A1F0AFD34(L_0, /*hidden argument*/Dictionary_2_get_Keys_m9AEB54A2F6FDBD9E1C3A3655FCAA612A1F0AFD34_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = KeyCollection_get_Count_mC26B198CCB6DE9D6804B26D036F6435AE879E62C(L_1, /*hidden argument*/KeyCollection_get_Count_mC26B198CCB6DE9D6804B26D036F6435AE879E62C_RuntimeMethod_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		// apps.Keys.CopyTo(keys, 0);
		Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * L_4 = ((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->get_apps_2();
		NullCheck(L_4);
		KeyCollection_tEFC457E9F0FD4BE3F1E8D03D08C57E0FEDCE324A * L_5;
		L_5 = Dictionary_2_get_Keys_m9AEB54A2F6FDBD9E1C3A3655FCAA612A1F0AFD34(L_4, /*hidden argument*/Dictionary_2_get_Keys_m9AEB54A2F6FDBD9E1C3A3655FCAA612A1F0AFD34_RuntimeMethod_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = V_0;
		NullCheck(L_5);
		KeyCollection_CopyTo_m4710FE6F70E54DCAE43661D63499C3961210CA1A(L_5, L_6, 0, /*hidden argument*/KeyCollection_CopyTo_m4710FE6F70E54DCAE43661D63499C3961210CA1A_RuntimeMethod_var);
		// return keys;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = V_0;
		return L_7;
	}
}
// System.Void Oculus.Voice.AppBuiltIns::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppBuiltIns__cctor_mADBEC8AB63B555738D54B6AD161F7359E8107504 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC1E83FC6C973AAA99FDC936FFCD03F750D377E54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092BA6AD0413546226AD2BEA11159B0EB044FDB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ADCE98000A1E213D168FF9E6AD07CD47FBA0EE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C45DB50527FCFAD456E74EB416B617329505309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DF52374CCE8AA942D55172FF34E782E0277521F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17A5AD13F3B52AA01A6CBB2F9F414BE34E8AB9A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B62E5629805E3224249BCAA0D9ECBB4C84AE48B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral203DD5C89072A85E4D8D935A3028CCC3E3855F85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C25F3C2950E0AFEA7FBD0AEB1FD0CC9CF30F713);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F3DB030C8BDF0926D14123D900497AE12BB3AD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F59628CFCF68C1C363F48F1FB91CF30C77F0D31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral375ED8BBE05A9343F552D3F8863536344C38BCA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral376CA77BE87EBF24FE3233A567285926D6704A8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral459CA1A783220A8007E9DD248A257FE22F59A157);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B0E509E3481549FC8F096287EFB425FAAFC38A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral541ADAD93719A7753AA265CAD6BA6276D2686025);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral550894D8930D82CF3BB3AC17DFA88A6C23CEFAA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral591184A69213A4D299171C75373FEABB89BF8937);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62DF8B883A7680DEF02C157C7AF38B4A3E89D8BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647CF137C0F27918F699BD1C0B1DC7FF9EFC1014);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ACA126350941A62677533ACC01C769BF2C144F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C2259C1F5D9911CDDA502DB9262E503845291FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CD966C6F70DF98361E72B6885D22A1DAAAEDC33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DB33ADD301402F08747C4EE933A8EF10A8128F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5431EF8CF17B42351F85D399751058873E7E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77EE5971434CDE6F74A1DAE44D94954E1624D77C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A27C2F288438DD1823D8FA78BB3A4F69453087B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C022E2202C33B05A9AD14AE1A1E837AC3233551);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C5E86B8C3F36CC9EE33BD83A2E4C40D583CF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8973AE49BD46E89F131A8F5F8A58904E2C1CA11A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9155F30AA734CC9F26A86F037D8B48FDF7869B2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10E972FF3AD9BCA9E85E8ACEC160516A000E86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DC94CE2E4ADB08254413E0E3386625CB614D76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6814B83C0CAFFAC7308A42994ACCC03CA22FCCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB87F49253CFFED648B03A8D5C67D4624305684D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9CE0BCF216F3F1257A8C396F63FF8CECAB574F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA8F86E450F61205EF060F7DA79C0B6904644890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBF23B4B70E0BD3FF31AB982C6BDF878E58833CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC04CC788232484E918569E326AD3839934507B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC9163C315671EAC81D72701BD6DCF13C6773FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6083E3193B2C42160931E36C8DF7C83A18368C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6CF1388F62C641E47D1C0FC9A05AF1D6F8FCB6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC982AFF5E079BBDA3580BE37ECC91BC71135F59E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF168F877EC6D86E1C62FE514023B4373C1018D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBF28E8A6AC6C4E3A3E60076E430BBC6501C8AF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A60C78B1E543FC99764C33AEB77BCFE4231207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD744E0023ACB34526A1B142EFA90B5CFF45FDC53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCCA071A995303A9BBCD5E2DBE5E190C2B0A05FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1423475EA278C8BCE568970404EECBE529CBEAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8F4B323C30FAE436F30D6A29F7DDC0C29CD5F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAA0AD4C9DDC7B173ACD12710BBE084A3B32C5F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECE395CDAEB0ECDBD5A23AA77D43B5263126619C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE166EB545AC42FA5F62142A18E3268B3A5D8A77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC140051BF200AB88497170B5004988B2DA52192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6C1DC2224936F4BEE7CBA35A0036A85E7B52F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string builtInPrefix = "builtin:";
		((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->set_builtInPrefix_0(_stringLiteralBA8F86E450F61205EF060F7DA79C0B6904644890);
		// private static string modelName = "Built-in Models";
		((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->set_modelName_1(_stringLiteralEE166EB545AC42FA5F62142A18E3268B3A5D8A77);
		// public static readonly Dictionary<string, Dictionary<string, string>>
		//     apps = new Dictionary<string, Dictionary<string, string>>
		//     {
		//         {
		//             "Chinese", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_zh"},
		//                 {"name", modelName},
		//                 {"lang", "zh"},
		//                 {"clientToken", "3KQH33637TAT7WD4TG7T65SDRO73WZGY"},
		//             }
		//         },
		//         {
		//             "Dutch", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_nl"},
		//                 {"name", modelName},
		//                 {"lang", "nl"},
		//                 {"clientToken", "ZCD6HCNCL6GTJKZ3QKWNKQVEDI4GUL7C"},
		//             }
		//         },
		//         {
		//             "English", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_en"},
		//                 {"name", modelName},
		//                 {"lang", "en"},
		//                 {"clientToken", "HOKEABS7HPIQVSRSVWRPTTV75TQJ5QBP"},
		//             }
		//         },
		//         {
		//             "French", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_fr"},
		//                 {"name", modelName},
		//                 {"lang", "fr"},
		//                 {"clientToken", "7PP7NK2QAH67MREGZV6SB6RIEWAYDNRY"},
		//             }
		//         },
		//         {
		//             "German", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_de"},
		//                 {"name", modelName},
		//                 {"lang", "de"},
		//                 {"clientToken", "7LXOOB4JC7MXPUTTGQHDVQMHGEEJT6LE"},
		//             }
		//         },
		//         {
		//             "Italian", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_it"},
		//                 {"name", modelName},
		//                 {"lang", "it"},
		//                 {"clientToken", "KELCNR4DCCPPOCF2RDFS4M6JOCWWIFII"},
		//             }
		//         },
		//         {
		//             "Japanese", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_ja"},
		//                 {"name", modelName},
		//                 {"lang", "ja"},
		//                 {"clientToken", "TPJGLBBCHJ5F7BVVN5XLEGP6YDQRUE3P"},
		//             }
		//         },
		//         {
		//             "Korean", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_ko"},
		//                 {"name", modelName},
		//                 {"lang", "ko"},
		//                 {"clientToken", "NT4WJLL7ACMFBXS4B7W5GRLTKDZQ36R4"},
		//             }
		//         },
		//         {
		//             "Polish", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_pl"},
		//                 {"name", modelName},
		//                 {"lang", "pl"},
		//                 {"clientToken", "DMDRHGYDYN33D3IKCX5BG5R57EL2IIC4"},
		//             }
		//         },
		//         {
		//             "Portuguese", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_pt"},
		//                 {"name", modelName},
		//                 {"lang", "pt"},
		//                 {"clientToken", "W4W3BSKL72HZC5MXLILONJUCG732SQQN"},
		//             }
		//         },
		//         {
		//             "Russian", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_ru"},
		//                 {"name", modelName},
		//                 {"lang", "ru"},
		//                 {"clientToken", "W67HLUWA3MBYVEKRW3VVWUKSNZGAOFBI"},
		//             }
		//         },
		//         {
		//             "Spanish", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_es"},
		//                 {"name", modelName},
		//                 {"lang", "es"},
		//                 {"clientToken", "YW7AM5OOVSW5XKGYKFE2S2HLC2WHC3UI"},
		//             }
		//         },
		//         {
		//             "Swedish", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_sv"},
		//                 {"name", modelName},
		//                 {"lang", "sv"},
		//                 {"clientToken", "NPE3UJ7Y4NIVTUOZ7QPPAP3TY6FYPXJY"},
		//             }
		//         },
		//         {
		//             "Turkish", new Dictionary<string, string>
		//             {
		//                 {"id", "voiceSDK_tr"},
		//                 {"name", modelName},
		//                 {"lang", "tr"},
		//                 {"clientToken", "ZCISEDXESLYJOROLNOODCGGPZXHLUAEE"},
		//             }
		//         },
		//     };
		Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * L_0 = (Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E *)il2cpp_codegen_object_new(Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC1E83FC6C973AAA99FDC936FFCD03F750D377E54(L_0, /*hidden argument*/Dictionary_2__ctor_mC1E83FC6C973AAA99FDC936FFCD03F750D377E54_RuntimeMethod_var);
		Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * L_1 = L_0;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_2 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_2, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_3, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralCAF168F877EC6D86E1C62FE514023B4373C1018D, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_4 = L_3;
		String_t* L_5 = ((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->get_modelName_1();
		NullCheck(L_4);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_4, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_5, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_6 = L_4;
		NullCheck(L_6);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_6, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteralEAA0AD4C9DDC7B173ACD12710BBE084A3B32C5F6, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_7, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteral591184A69213A4D299171C75373FEABB89BF8937, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		NullCheck(L_1);
		Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE(L_1, _stringLiteral876C5E86B8C3F36CC9EE33BD83A2E4C40D583CF7, L_7, /*hidden argument*/Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE_RuntimeMethod_var);
		Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * L_8 = L_1;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_9 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_9, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_10 = L_9;
		NullCheck(L_10);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_10, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralE1423475EA278C8BCE568970404EECBE529CBEAA, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_11 = L_10;
		String_t* L_12 = ((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->get_modelName_1();
		NullCheck(L_11);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_12, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_13 = L_11;
		NullCheck(L_13);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_13, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral6DB33ADD301402F08747C4EE933A8EF10A8128F7, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_14 = L_13;
		NullCheck(L_14);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_14, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralDCCA071A995303A9BBCD5E2DBE5E190C2B0A05FA, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		NullCheck(L_8);
		Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE(L_8, _stringLiteral7C022E2202C33B05A9AD14AE1A1E837AC3233551, L_14, /*hidden argument*/Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE_RuntimeMethod_var);
		Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * L_15 = L_8;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_16 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_16, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_17 = L_16;
		NullCheck(L_17);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_17, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralB87F49253CFFED648B03A8D5C67D4624305684D4, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_18 = L_17;
		String_t* L_19 = ((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->get_modelName_1();
		NullCheck(L_18);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_18, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_19, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_20 = L_18;
		NullCheck(L_20);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_20, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_21 = L_20;
		NullCheck(L_21);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_21, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteral6CD966C6F70DF98361E72B6885D22A1DAAAEDC33, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		NullCheck(L_15);
		Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE(L_15, _stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127, L_21, /*hidden argument*/Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE_RuntimeMethod_var);
		Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * L_22 = L_15;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_23 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_23, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_24 = L_23;
		NullCheck(L_24);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_24, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralC6CF1388F62C641E47D1C0FC9A05AF1D6F8FCB6F, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_25 = L_24;
		String_t* L_26 = ((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->get_modelName_1();
		NullCheck(L_25);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_25, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_26, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_27 = L_25;
		NullCheck(L_27);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_27, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral203DD5C89072A85E4D8D935A3028CCC3E3855F85, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_28 = L_27;
		NullCheck(L_28);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_28, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralBBF23B4B70E0BD3FF31AB982C6BDF878E58833CB, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		NullCheck(L_22);
		Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE(L_22, _stringLiteralFC6C1DC2224936F4BEE7CBA35A0036A85E7B52F4, L_28, /*hidden argument*/Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE_RuntimeMethod_var);
		Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * L_29 = L_22;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_30 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_30, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_31 = L_30;
		NullCheck(L_31);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_31, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral2C25F3C2950E0AFEA7FBD0AEB1FD0CC9CF30F713, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_32 = L_31;
		String_t* L_33 = ((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->get_modelName_1();
		NullCheck(L_32);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_32, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_33, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_34 = L_32;
		NullCheck(L_34);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_34, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_35 = L_34;
		NullCheck(L_35);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_35, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralFC140051BF200AB88497170B5004988B2DA52192, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		NullCheck(L_29);
		Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE(L_29, _stringLiteral647CF137C0F27918F699BD1C0B1DC7FF9EFC1014, L_35, /*hidden argument*/Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE_RuntimeMethod_var);
		Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * L_36 = L_29;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_37 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_37, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_38 = L_37;
		NullCheck(L_38);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_38, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral092BA6AD0413546226AD2BEA11159B0EB044FDB2, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_39 = L_38;
		String_t* L_40 = ((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->get_modelName_1();
		NullCheck(L_39);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_39, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_40, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_41 = L_39;
		NullCheck(L_41);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_41, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral1B62E5629805E3224249BCAA0D9ECBB4C84AE48B, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_42 = L_41;
		NullCheck(L_42);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_42, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralB9CE0BCF216F3F1257A8C396F63FF8CECAB574F7, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		NullCheck(L_36);
		Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE(L_36, _stringLiteral375ED8BBE05A9343F552D3F8863536344C38BCA2, L_42, /*hidden argument*/Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE_RuntimeMethod_var);
		Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * L_43 = L_36;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_44 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_44, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_45 = L_44;
		NullCheck(L_45);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_45, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral0ADCE98000A1E213D168FF9E6AD07CD47FBA0EE9, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_46 = L_45;
		String_t* L_47 = ((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->get_modelName_1();
		NullCheck(L_46);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_46, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_47, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_48 = L_46;
		NullCheck(L_48);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_48, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral0C45DB50527FCFAD456E74EB416B617329505309, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_49 = L_48;
		NullCheck(L_49);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_49, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralBDC9163C315671EAC81D72701BD6DCF13C6773FA, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		NullCheck(L_43);
		Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE(L_43, _stringLiteral376CA77BE87EBF24FE3233A567285926D6704A8E, L_49, /*hidden argument*/Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE_RuntimeMethod_var);
		Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * L_50 = L_43;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_51 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_51, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_52 = L_51;
		NullCheck(L_52);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_52, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral8973AE49BD46E89F131A8F5F8A58904E2C1CA11A, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_53 = L_52;
		String_t* L_54 = ((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->get_modelName_1();
		NullCheck(L_53);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_53, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_54, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_55 = L_53;
		NullCheck(L_55);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_55, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral4B0E509E3481549FC8F096287EFB425FAAFC38A4, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_56 = L_55;
		NullCheck(L_56);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_56, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteral550894D8930D82CF3BB3AC17DFA88A6C23CEFAA2, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		NullCheck(L_50);
		Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE(L_50, _stringLiteralE8F4B323C30FAE436F30D6A29F7DDC0C29CD5F62, L_56, /*hidden argument*/Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE_RuntimeMethod_var);
		Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * L_57 = L_50;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_58 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_58, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_59 = L_58;
		NullCheck(L_59);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_59, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralCBF28E8A6AC6C4E3A3E60076E430BBC6501C8AF4, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_60 = L_59;
		String_t* L_61 = ((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->get_modelName_1();
		NullCheck(L_60);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_60, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_61, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_62 = L_60;
		NullCheck(L_62);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_62, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteralD744E0023ACB34526A1B142EFA90B5CFF45FDC53, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_63 = L_62;
		NullCheck(L_63);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_63, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralBDC04CC788232484E918569E326AD3839934507B, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		NullCheck(L_57);
		Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE(L_57, _stringLiteral9155F30AA734CC9F26A86F037D8B48FDF7869B2B, L_63, /*hidden argument*/Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE_RuntimeMethod_var);
		Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * L_64 = L_57;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_65 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_65, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_66 = L_65;
		NullCheck(L_66);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_66, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral9F10E972FF3AD9BCA9E85E8ACEC160516A000E86, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_67 = L_66;
		String_t* L_68 = ((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->get_modelName_1();
		NullCheck(L_67);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_67, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_68, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_69 = L_67;
		NullCheck(L_69);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_69, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral17A5AD13F3B52AA01A6CBB2F9F414BE34E8AB9A9, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_70 = L_69;
		NullCheck(L_70);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_70, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteral6ACA126350941A62677533ACC01C769BF2C144F3, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		NullCheck(L_64);
		Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE(L_64, _stringLiteralECE395CDAEB0ECDBD5A23AA77D43B5263126619C, L_70, /*hidden argument*/Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE_RuntimeMethod_var);
		Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * L_71 = L_64;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_72 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_72, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_73 = L_72;
		NullCheck(L_73);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_73, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralC6083E3193B2C42160931E36C8DF7C83A18368C1, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_74 = L_73;
		String_t* L_75 = ((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->get_modelName_1();
		NullCheck(L_74);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_74, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_75, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_76 = L_74;
		NullCheck(L_76);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_76, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteralC295AE7F3D676E2CAA3DE0DC641EF335E57A2E37, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_77 = L_76;
		NullCheck(L_77);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_77, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralD4A60C78B1E543FC99764C33AEB77BCFE4231207, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		NullCheck(L_71);
		Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE(L_71, _stringLiteral2F3DB030C8BDF0926D14123D900497AE12BB3AD1, L_77, /*hidden argument*/Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE_RuntimeMethod_var);
		Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * L_78 = L_71;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_79 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_79, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_80 = L_79;
		NullCheck(L_80);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_80, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral6C2259C1F5D9911CDDA502DB9262E503845291FD, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_81 = L_80;
		String_t* L_82 = ((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->get_modelName_1();
		NullCheck(L_81);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_81, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_82, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_83 = L_81;
		NullCheck(L_83);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_83, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral77EE5971434CDE6F74A1DAE44D94954E1624D77C, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_84 = L_83;
		NullCheck(L_84);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_84, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteral459CA1A783220A8007E9DD248A257FE22F59A157, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		NullCheck(L_78);
		Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE(L_78, _stringLiteral2F59628CFCF68C1C363F48F1FB91CF30C77F0D31, L_84, /*hidden argument*/Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE_RuntimeMethod_var);
		Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * L_85 = L_78;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_86 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_86, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_87 = L_86;
		NullCheck(L_87);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_87, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteral7A27C2F288438DD1823D8FA78BB3A4F69453087B, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_88 = L_87;
		String_t* L_89 = ((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->get_modelName_1();
		NullCheck(L_88);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_88, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_89, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_90 = L_88;
		NullCheck(L_90);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_90, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteralA3DC94CE2E4ADB08254413E0E3386625CB614D76, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_91 = L_90;
		NullCheck(L_91);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_91, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteralC982AFF5E079BBDA3580BE37ECC91BC71135F59E, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		NullCheck(L_85);
		Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE(L_85, _stringLiteral62DF8B883A7680DEF02C157C7AF38B4A3E89D8BF, L_91, /*hidden argument*/Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE_RuntimeMethod_var);
		Dictionary_2_t0343811FA3392A7C9A889971BB1AD39D0F64EC7E * L_92 = L_85;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_93 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_93, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_94 = L_93;
		NullCheck(L_94);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_94, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, _stringLiteralB6814B83C0CAFFAC7308A42994ACCC03CA22FCCE, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_95 = L_94;
		String_t* L_96 = ((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->get_modelName_1();
		NullCheck(L_95);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_95, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_96, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_97 = L_95;
		NullCheck(L_97);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_97, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, _stringLiteral541ADAD93719A7753AA265CAD6BA6276D2686025, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_98 = L_97;
		NullCheck(L_98);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_98, _stringLiteralF9EC853EB9F1F4D6A42E65C072525E5EFEF4BD2B, _stringLiteral6F5431EF8CF17B42351F85D399751058873E7E92, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		NullCheck(L_92);
		Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE(L_92, _stringLiteral0DF52374CCE8AA942D55172FF34E782E0277521F, L_98, /*hidden argument*/Dictionary_2_Add_mB3CB8641DBF2EEE600F69EAF8A333473825291CE_RuntimeMethod_var);
		((AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_StaticFields*)il2cpp_codegen_static_fields_for(AppBuiltIns_tBCAAF4A2CA60925F19AC701AED32D2C85D76071F_il2cpp_TypeInfo_var))->set_apps_2(L_92);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Facebook.WitAi.Configuration.WitRuntimeConfiguration Oculus.Voice.AppVoiceExperience::get_RuntimeConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * AppVoiceExperience_get_RuntimeConfiguration_mB4BD9F2821001AC00FDD57A7DE07DF929B5C0FFE (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	{
		// get => witRuntimeConfiguration;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_0 = __this->get_witRuntimeConfiguration_5();
		return L_0;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::set_RuntimeConfiguration(Facebook.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_set_RuntimeConfiguration_mC08DBCBFF981A22A7230D375215D0DB97FEDB564 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * ___value0, const RuntimeMethod* method)
{
	{
		// set => witRuntimeConfiguration = value;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_0 = ___value0;
		__this->set_witRuntimeConfiguration_5(L_0);
		return;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_Initialized_m99D44C4F745F16524F0CE216E24315E933D22749 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	{
		// private bool Initialized => null != voiceServiceImpl;
		RuntimeObject* L_0 = __this->get_voiceServiceImpl_8();
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_Active_mC341C0F8F33BCE80E5DF3E7039BA2ACC8DCDBBF1 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Active => null != voiceServiceImpl && voiceServiceImpl.Active;
		RuntimeObject* L_0 = __this->get_voiceServiceImpl_8();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_voiceServiceImpl_8();
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Facebook.WitAi.IVoiceService::get_Active() */, IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_IsRequestActive_m0F4A874DE2DB31E5777E4CC71C735D60DD03E8B9 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool IsRequestActive => null != voiceServiceImpl && voiceServiceImpl.IsRequestActive;
		RuntimeObject* L_0 = __this->get_voiceServiceImpl_8();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_voiceServiceImpl_8();
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Facebook.WitAi.IVoiceService::get_IsRequestActive() */, IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// Facebook.WitAi.Interfaces.ITranscriptionProvider Oculus.Voice.AppVoiceExperience::get_TranscriptionProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppVoiceExperience_get_TranscriptionProvider_mE34032A7D3BB10A7355094ACEB892219E738F3B7 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => voiceServiceImpl.TranscriptionProvider;
		RuntimeObject* L_0 = __this->get_voiceServiceImpl_8();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.Interfaces.ITranscriptionProvider Facebook.WitAi.IVoiceService::get_TranscriptionProvider() */, IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::set_TranscriptionProvider(Facebook.WitAi.Interfaces.ITranscriptionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_set_TranscriptionProvider_mC015A13DEF1A6660100D66BC4FD78732D3DD80BF (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => voiceServiceImpl.TranscriptionProvider = value;
		RuntimeObject* L_0 = __this->get_voiceServiceImpl_8();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(6 /* System.Void Facebook.WitAi.IVoiceService::set_TranscriptionProvider(Facebook.WitAi.Interfaces.ITranscriptionProvider) */, IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_MicActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_MicActive_m1EBA5763B32286A9B966F8809632602C87E2DF3C (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool MicActive => null != voiceServiceImpl && voiceServiceImpl.MicActive;
		RuntimeObject* L_0 = __this->get_voiceServiceImpl_8();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_voiceServiceImpl_8();
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Facebook.WitAi.IVoiceService::get_MicActive() */, IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_ShouldSendMicData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_ShouldSendMicData_mA1E5CBF279586CAF065F2A4BE087A4E238DA2057 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	{
		// protected override bool ShouldSendMicData => witRuntimeConfiguration.sendAudioToWit ||
		//                                           null == TranscriptionProvider;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_0 = __this->get_witRuntimeConfiguration_5();
		NullCheck(L_0);
		bool L_1 = L_0->get_sendAudioToWit_9();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(22 /* Facebook.WitAi.Interfaces.ITranscriptionProvider Facebook.WitAi.VoiceService::get_TranscriptionProvider() */, __this);
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_0017:
	{
		return (bool)1;
	}
}
// System.Boolean Oculus.Voice.AppVoiceExperience::get_HasPlatformIntegrations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_HasPlatformIntegrations_m7882C9A275163FC894F0A863402C2C19FE9A2BB0 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	{
		// public bool HasPlatformIntegrations => usePlatformServices;
		bool L_0 = __this->get_usePlatformServices_6();
		return L_0;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_Activate_m41AE22B92961F463238F5BA34E81FEE56FA4DD19 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl.Activate();
		RuntimeObject* L_0 = __this->get_voiceServiceImpl_8();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(7 /* System.Void Facebook.WitAi.IVoiceService::Activate() */, IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::Activate(Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_Activate_m17BC2AA1B01B9A1B179963683F7C7B3A63F40950 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl.Activate(options);
		RuntimeObject* L_0 = __this->get_voiceServiceImpl_8();
		WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * L_1 = ___options0;
		NullCheck(L_0);
		InterfaceActionInvoker1< WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * >::Invoke(8 /* System.Void Facebook.WitAi.IVoiceService::Activate(Facebook.WitAi.Configuration.WitRequestOptions) */, IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::ActivateImmediately()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_ActivateImmediately_mB494FB2C77D7FD1E160B67B653483BB570E424B4 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl.ActivateImmediately();
		RuntimeObject* L_0 = __this->get_voiceServiceImpl_8();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(9 /* System.Void Facebook.WitAi.IVoiceService::ActivateImmediately() */, IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::ActivateImmediately(Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_ActivateImmediately_mCED409AC5C843151934F3FFEC3EF97D3FF2713A4 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl.ActivateImmediately(options);
		RuntimeObject* L_0 = __this->get_voiceServiceImpl_8();
		WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * L_1 = ___options0;
		NullCheck(L_0);
		InterfaceActionInvoker1< WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * >::Invoke(10 /* System.Void Facebook.WitAi.IVoiceService::ActivateImmediately(Facebook.WitAi.Configuration.WitRequestOptions) */, IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_Deactivate_m80E16AF383EF6D8F03E8F836A5BB6DE3EF0BDC20 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl.Deactivate();
		RuntimeObject* L_0 = __this->get_voiceServiceImpl_8();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(11 /* System.Void Facebook.WitAi.IVoiceService::Deactivate() */, IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::DeactivateAndAbortRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_DeactivateAndAbortRequest_mFC7796C97D0878BD2D18244326622D31A53E12D2 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl.DeactivateAndAbortRequest();
		RuntimeObject* L_0 = __this->get_voiceServiceImpl_8();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(12 /* System.Void Facebook.WitAi.IVoiceService::DeactivateAndAbortRequest() */, IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::Activate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_Activate_mFC4545257465FC95F1D2EC9A9B3DBF260E419CC3 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl.Activate(text);
		RuntimeObject* L_0 = __this->get_voiceServiceImpl_8();
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(13 /* System.Void Facebook.WitAi.IVoiceService::Activate(System.String) */, IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::Activate(System.String,Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_Activate_m5C13CD597662A86F3CB1AB47743FA438CCE880B3 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, String_t* ___text0, WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * ___requestOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceServiceImpl.Activate(text, requestOptions);
		RuntimeObject* L_0 = __this->get_voiceServiceImpl_8();
		String_t* L_1 = ___text0;
		WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * L_2 = ___requestOptions1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * >::Invoke(14 /* System.Void Facebook.WitAi.IVoiceService::Activate(System.String,Facebook.WitAi.Configuration.WitRequestOptions) */, IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::InitVoiceSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_InitVoiceSDK_m4B20AF2EBAA151BF865DA52538E2C4007F9AFF40 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppVoiceExperience_U3CInitVoiceSDKU3Eb__30_0_mF677B5CFDCA83292EAEACBB1B2D055EDE2B216D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wit_t56D21E306ECB54B06B548149BC8103A807A158D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1820E647BC43B12E095BB83CACC06DCCF7C816B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0973000AFB7A33EB6108E555F37DE0D4155B187);
		s_Il2CppMethodInitialized = true;
	}
	VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * V_0 = NULL;
	Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 * V_1 = NULL;
	{
		// if (HasPlatformIntegrations)
		bool L_0;
		L_0 = AppVoiceExperience_get_HasPlatformIntegrations_m7882C9A275163FC894F0A863402C2C19FE9A2BB0_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_009d;
		}
	}
	{
		// Debug.Log("Checking platform capabilities...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE0973000AFB7A33EB6108E555F37DE0D4155B187, /*hidden argument*/NULL);
		// var platformImpl = new VoiceSDKImpl(this);
		VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * L_1 = (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D *)il2cpp_codegen_object_new(VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D_il2cpp_TypeInfo_var);
		VoiceSDKImpl__ctor_mB6AA37992649188E2A461D61888A30D91D3A7982(L_1, __this, /*hidden argument*/NULL);
		V_0 = L_1;
		// platformImpl.OnServiceNotAvailableEvent += () => RevertToWitUnity();
		VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * L_2 = V_0;
		VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * L_3 = L_2;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3->get_OnServiceNotAvailableEvent_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_5, __this, (intptr_t)((intptr_t)AppVoiceExperience_U3CInitVoiceSDKU3Eb__30_0_mF677B5CFDCA83292EAEACBB1B2D055EDE2B216D8_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_6;
		L_6 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_OnServiceNotAvailableEvent_4(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_6, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// platformImpl.Connect();
		VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * L_7 = V_0;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(4 /* System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Bindings.Android.VoiceSDKBinding>::Connect() */, L_7);
		// platformImpl.SetRuntimeConfiguration(RuntimeConfiguration);
		VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * L_8 = V_0;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_9;
		L_9 = AppVoiceExperience_get_RuntimeConfiguration_mB4BD9F2821001AC00FDD57A7DE07DF929B5C0FFE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		VoiceSDKImpl_SetRuntimeConfiguration_mCDD3F6D82C6AE5E2EF91CB79D1F23FDC9D3BFCE5(L_8, L_9, /*hidden argument*/NULL);
		// if (platformImpl.PlatformSupportsWit)
		VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = VoiceSDKImpl_get_PlatformSupportsWit_mDF8BC259EA908FBB9C028FBDC1DA0FA1DC0674B1(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_008c;
		}
	}
	{
		// voiceServiceImpl = platformImpl;
		VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * L_12 = V_0;
		__this->set_voiceServiceImpl_8(L_12);
		// if (voiceServiceImpl is Wit wit)
		RuntimeObject* L_13 = __this->get_voiceServiceImpl_8();
		V_1 = ((Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 *)IsInstClass((RuntimeObject*)L_13, Wit_t56D21E306ECB54B06B548149BC8103A807A158D8_il2cpp_TypeInfo_var));
		Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 * L_14 = V_1;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		// wit.RuntimeConfiguration = witRuntimeConfiguration;
		Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 * L_15 = V_1;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_16 = __this->get_witRuntimeConfiguration_5();
		NullCheck(L_15);
		Wit_set_RuntimeConfiguration_m62EF21A1D006E0B2AB537EF58FB60F92889035A9_inline(L_15, L_16, /*hidden argument*/NULL);
	}

IL_007a:
	{
		// voiceServiceImpl.VoiceEvents = VoiceEvents;
		RuntimeObject* L_17 = __this->get_voiceServiceImpl_8();
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_18;
		L_18 = VirtFuncInvoker0< VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * >::Invoke(25 /* Facebook.WitAi.Events.VoiceEvents Facebook.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_17);
		InterfaceActionInvoker1< VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * >::Invoke(4 /* System.Void Facebook.WitAi.IVoiceService::set_VoiceEvents(Facebook.WitAi.Events.VoiceEvents) */, IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var, L_17, L_18);
		// }
		return;
	}

IL_008c:
	{
		// Debug.Log("Platform registration indicated platform support is not currently available.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1820E647BC43B12E095BB83CACC06DCCF7C816B9, /*hidden argument*/NULL);
		// RevertToWitUnity();
		AppVoiceExperience_RevertToWitUnity_mC1C38663B0170469273299C774EC55ACC448E792(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_009d:
	{
		// RevertToWitUnity();
		AppVoiceExperience_RevertToWitUnity_mC1C38663B0170469273299C774EC55ACC448E792(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::RevertToWitUnity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_RevertToWitUnity_mC1C38663B0170469273299C774EC55ACC448E792 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisWit_t56D21E306ECB54B06B548149BC8103A807A158D8_m062E60F4931FEE641EBBC3DB2D2F1EC0346F293F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisWit_t56D21E306ECB54B06B548149BC8103A807A158D8_mC4D7F7C6EE25C593AA1D216877B8276E0CBED30A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wit_t56D21E306ECB54B06B548149BC8103A807A158D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 * V_0 = NULL;
	Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 * V_1 = NULL;
	{
		// Wit w = GetComponent<Wit>();
		Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 * L_0;
		L_0 = Component_GetComponent_TisWit_t56D21E306ECB54B06B548149BC8103A807A158D8_m062E60F4931FEE641EBBC3DB2D2F1EC0346F293F(__this, /*hidden argument*/Component_GetComponent_TisWit_t56D21E306ECB54B06B548149BC8103A807A158D8_m062E60F4931FEE641EBBC3DB2D2F1EC0346F293F_RuntimeMethod_var);
		V_0 = L_0;
		// if (null == w)
		Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// w = gameObject.AddComponent<Wit>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 * L_4;
		L_4 = GameObject_AddComponent_TisWit_t56D21E306ECB54B06B548149BC8103A807A158D8_mC4D7F7C6EE25C593AA1D216877B8276E0CBED30A(L_3, /*hidden argument*/GameObject_AddComponent_TisWit_t56D21E306ECB54B06B548149BC8103A807A158D8_mC4D7F7C6EE25C593AA1D216877B8276E0CBED30A_RuntimeMethod_var);
		V_0 = L_4;
		// w.hideFlags = HideFlags.HideInInspector;
		Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 * L_5 = V_0;
		NullCheck(L_5);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_5, 2, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// voiceServiceImpl = w;
		Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 * L_6 = V_0;
		__this->set_voiceServiceImpl_8(L_6);
		// if (voiceServiceImpl is Wit wit)
		RuntimeObject* L_7 = __this->get_voiceServiceImpl_8();
		V_1 = ((Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 *)IsInstClass((RuntimeObject*)L_7, Wit_t56D21E306ECB54B06B548149BC8103A807A158D8_il2cpp_TypeInfo_var));
		Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// wit.RuntimeConfiguration = witRuntimeConfiguration;
		Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 * L_9 = V_1;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_10 = __this->get_witRuntimeConfiguration_5();
		NullCheck(L_9);
		Wit_set_RuntimeConfiguration_m62EF21A1D006E0B2AB537EF58FB60F92889035A9_inline(L_9, L_10, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// voiceServiceImpl.VoiceEvents = VoiceEvents;
		RuntimeObject* L_11 = __this->get_voiceServiceImpl_8();
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_12;
		L_12 = VirtFuncInvoker0< VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * >::Invoke(25 /* Facebook.WitAi.Events.VoiceEvents Facebook.WitAi.VoiceService::get_VoiceEvents() */, __this);
		NullCheck(L_11);
		InterfaceActionInvoker1< VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * >::Invoke(4 /* System.Void Facebook.WitAi.IVoiceService::set_VoiceEvents(Facebook.WitAi.Events.VoiceEvents) */, IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var, L_11, L_12);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnEnable_mB25AD91F296CA2078BC2294CDCDC79D8E156476C (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformVoiceService_tFC1D07648D3588DD6E8E03B3F1FB1CD692E529BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// base.OnEnable();
		VoiceService_OnEnable_mA18321DEE6E6CD119D4FA57F07B4AFDD0944A60F(__this, /*hidden argument*/NULL);
		// if (MicPermissionsManager.HasMicPermission())
		bool L_0;
		L_0 = MicPermissionsManager_HasMicPermission_mF8FB7BE68D9E3A202BDDB8E3DA7BF3B0C0F80528(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// InitVoiceSDK();
		AppVoiceExperience_InitVoiceSDK_m4B20AF2EBAA151BF865DA52538E2C4007F9AFF40(__this, /*hidden argument*/NULL);
		// }
		goto IL_001a;
	}

IL_0015:
	{
		// MicPermissionsManager.RequestMicPermission();
		MicPermissionsManager_RequestMicPermission_m6C4EE7E9EB94293A740250D10754413EC3A25D75(/*hidden argument*/NULL);
	}

IL_001a:
	{
		// platformService?.SetRuntimeConfiguration(witRuntimeConfiguration);
		RuntimeObject* L_1 = __this->get_platformService_7();
		RuntimeObject* L_2 = L_1;
		G_B4_0 = L_2;
		if (L_2)
		{
			G_B5_0 = L_2;
			goto IL_0025;
		}
	}
	{
		return;
	}

IL_0025:
	{
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_3 = __this->get_witRuntimeConfiguration_5();
		NullCheck(G_B5_0);
		InterfaceActionInvoker1< WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * >::Invoke(1 /* System.Void Oculus.Voice.Interfaces.IPlatformVoiceService::SetRuntimeConfiguration(Facebook.WitAi.Configuration.WitRuntimeConfiguration) */, IPlatformVoiceService_tFC1D07648D3588DD6E8E03B3F1FB1CD692E529BE_il2cpp_TypeInfo_var, G_B5_0, L_3);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnDisable_m057261B5023DBB79B7BA0DB4189E62202C25DE8C (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * V_0 = NULL;
	{
		// base.OnDisable();
		VoiceService_OnDisable_m37548BCBB7B26B31D4BDB31E243A3E32040C3F81(__this, /*hidden argument*/NULL);
		// if (voiceServiceImpl is VoiceSDKImpl platformImpl)
		RuntimeObject* L_0 = __this->get_voiceServiceImpl_8();
		V_0 = ((VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D *)IsInstClass((RuntimeObject*)L_0, VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D_il2cpp_TypeInfo_var));
		VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// platformImpl.Disconnect();
		VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(5 /* System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Bindings.Android.VoiceSDKBinding>::Disconnect() */, L_2);
	}

IL_001b:
	{
		// voiceServiceImpl = null;
		__this->set_voiceServiceImpl_8((RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_OnApplicationFocus_m4EBFD96602B9CBA62487C42D3B89D2C5540131E9 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	{
		// if (hasFocus && !Initialized)
		bool L_0 = ___hasFocus0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1;
		L_1 = AppVoiceExperience_get_Initialized_m99D44C4F745F16524F0CE216E24315E933D22749(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (MicPermissionsManager.HasMicPermission())
		bool L_2;
		L_2 = MicPermissionsManager_HasMicPermission_mF8FB7BE68D9E3A202BDDB8E3DA7BF3B0C0F80528(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// InitVoiceSDK();
		AppVoiceExperience_InitVoiceSDK_m4B20AF2EBAA151BF865DA52538E2C4007F9AFF40(__this, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience__ctor_mBFB2447C24C3D149A0DB2A859DF485A8E8077201 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	{
		VoiceService__ctor_m05C18E3CCBCBB09D89BC9DD6FD0D247C5AD139EE(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Voice.AppVoiceExperience::<InitVoiceSDK>b__30_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppVoiceExperience_U3CInitVoiceSDKU3Eb__30_0_mF677B5CFDCA83292EAEACBB1B2D055EDE2B216D8 (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	{
		// platformImpl.OnServiceNotAvailableEvent += () => RevertToWitUnity();
		AppVoiceExperience_RevertToWitUnity_mC1C38663B0170469273299C774EC55ACC448E792(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Oculus.VoiceSDK.Utilities.MicPermissionsManager::HasMicPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MicPermissionsManager_HasMicPermission_mF8FB7BE68D9E3A202BDDB8E3DA7BF3B0C0F80528 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Permission.HasUserAuthorizedPermission(Permission.Microphone);
		bool L_0;
		L_0 = Permission_HasUserAuthorizedPermission_m85B154FEA4C22EDCD5B1EAA98E3D682A1184EA18(_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Oculus.VoiceSDK.Utilities.MicPermissionsManager::RequestMicPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicPermissionsManager_RequestMicPermission_m6C4EE7E9EB94293A740250D10754413EC3A25D75 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Permission.RequestUserPermission(Permission.Microphone);
		Permission_RequestUserPermission_mF5FEC728857617E74AA605C6F92F1B496E2B8DBF(_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.VoiceSDK.Utilities.MicPermissionsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicPermissionsManager__ctor_m1DC02F90CF2013CBE0EC481F9B4037044DE5A1AE (MicPermissionsManager_t4E86EA4DACF1397B194FB628C57173E0E89A54FD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding__ctor_m0C5F7509B3025BC053FB16F3FAA968E76824152A (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___sdkInstance0, const RuntimeMethod* method)
{
	{
		// public VoiceSDKBinding(AndroidJavaObject sdkInstance) : base(sdkInstance)
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___sdkInstance0;
		BaseServiceBinding__ctor_mE48FF343A8BD176981F554E32D16216587EB1872(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_Active_m09D7CDA4F56323048B65074DB987AA46416CE34D (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A9AEFD32E63F4C4FEAE65BF93199A9A35785D51);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Active => binding.Call<bool>("isActive");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteral5A9AEFD32E63F4C4FEAE65BF93199A9A35785D51, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_IsRequestActive_mE270A11A52C1AD4D3CA4A55F7B7E330AA1247342 (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AD681F3CCA95D9E6DBE642350F27A4677186DCE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsRequestActive => binding.Call<bool>("isRequestActive");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteral0AD681F3CCA95D9E6DBE642350F27A4677186DCE, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_MicActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_MicActive_m45CD8895B212648D801574C20FA76E4C6651E9EC (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FCACA7D51404EF06FCE5239D8C92E6191ABA80F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool MicActive => binding.Call<bool>("isMicActive");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteral6FCACA7D51404EF06FCE5239D8C92E6191ABA80F, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKBinding::get_PlatformSupportsWit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKBinding_get_PlatformSupportsWit_m9E6893583E603941B7351E1008F660C72D515F65 (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E376700E58DD3581CFBE1F901798D5C61E52BA0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool PlatformSupportsWit => binding.Call<bool>("isSupported");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteral6E376700E58DD3581CFBE1F901798D5C61E52BA0, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_m76514CF6509E364B71ABA1801D90B206F70F509E (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("activate", text, "");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___text0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate(System.String,Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_m72DCA2C1A074C91870E499C18F4D75E0BAAD0B1F (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, String_t* ___text0, WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("activate", text, JsonUtility.ToJson(options));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___text0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * L_5 = ___options1;
		String_t* L_6;
		L_6 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_m20422735ACA81DA500EC670D6D154F1A79E7898D (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("activate");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Activate(Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Activate_m02C8A8FB3E4F5B06659BF4F19B1F450D7D72424B (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("activate", JsonUtility.ToJson(options));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * L_3 = ___options0;
		String_t* L_4;
		L_4 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteralFDD982C09C7DF7957C8E1CC08711B18D96BDA605, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::ActivateImmediately()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_ActivateImmediately_m09DF22FB1438F4DF865EDCDD1684952C4774EA88 (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73D8E11C6B0DFF5D3141AFDA853D918DD590FE66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("activateImmediately");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral73D8E11C6B0DFF5D3141AFDA853D918DD590FE66, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::ActivateImmediately(Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_ActivateImmediately_m97DE475C9FD0E91BB40272DEB5CCE48EB894C55D (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73D8E11C6B0DFF5D3141AFDA853D918DD590FE66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("activateImmediately", JsonUtility.ToJson(options));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * L_3 = ___options0;
		String_t* L_4;
		L_4 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral73D8E11C6B0DFF5D3141AFDA853D918DD590FE66, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Deactivate_m7941512C3434A6F4E5AC62A749705AFEE9CECA3F (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral654BFE537B0ADB16C92A45895BD6054F35C69AC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("deactivate");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral654BFE537B0ADB16C92A45895BD6054F35C69AC2, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::DeactivateAndAbortRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_DeactivateAndAbortRequest_mF57E46AB57DC176E2B45331CC86AEA2BAE380CAD (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D5A4764C731B021A048CFC139A82DD3DA9BD940);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("deactivateAndAbortRequest");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral5D5A4764C731B021A048CFC139A82DD3DA9BD940, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::SetRuntimeConfiguration(Facebook.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_SetRuntimeConfiguration_mC868CD77571B7F15D1DBA21D550409420521B113 (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * ___configuration0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKConfigBinding_t4CA77A43FA0B1835873B7CA7ED10CB48240278A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral361CDD76EEF3F6E43190EA2E6D184590B6545659);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("setRuntimeConfig", new VoiceSDKConfigBinding(configuration).ToJavaObject());
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_3 = ___configuration0;
		VoiceSDKConfigBinding_t4CA77A43FA0B1835873B7CA7ED10CB48240278A6 * L_4 = (VoiceSDKConfigBinding_t4CA77A43FA0B1835873B7CA7ED10CB48240278A6 *)il2cpp_codegen_object_new(VoiceSDKConfigBinding_t4CA77A43FA0B1835873B7CA7ED10CB48240278A6_il2cpp_TypeInfo_var);
		VoiceSDKConfigBinding__ctor_mB1CC05F3191CD15BCE36790CFD1134D349CC3493(L_4, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5;
		L_5 = VoiceSDKConfigBinding_ToJavaObject_m865C74F03FD60D025168D6EDEB15885216F971E6(L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral361CDD76EEF3F6E43190EA2E6D184590B6545659, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::SetListener(Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_SetListener_m7488CC22AAD677683BE9D7D18F6A240CB25D0C80 (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("setListener", listener);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * L_3 = ___listener0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKBinding::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKBinding_Connect_mC829E36ABC9F3BA19B2B931B4880FE730ECD5491 (VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FD7B3C1033C1EF1C45607B35492B62E1CFC7C11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call<bool>("connect");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteral0FD7B3C1033C1EF1C45607B35492B62E1CFC7C11, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding::.ctor(Facebook.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKConfigBinding__ctor_mB1CC05F3191CD15BCE36790CFD1134D349CC3493 (VoiceSDKConfigBinding_t4CA77A43FA0B1835873B7CA7ED10CB48240278A6 * __this, WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * ___config0, const RuntimeMethod* method)
{
	{
		// public VoiceSDKConfigBinding(WitRuntimeConfiguration config)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// configuration = config;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_0 = ___config0;
		__this->set_configuration_0(L_0);
		// }
		return;
	}
}
// UnityEngine.AndroidJavaObject Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding::ToJavaObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * VoiceSDKConfigBinding_ToJavaObject_m865C74F03FD60D025168D6EDEB15885216F971E6 (VoiceSDKConfigBinding_t4CA77A43FA0B1835873B7CA7ED10CB48240278A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mF768D2F7310A4A5788843430433EEC2BFF05A8E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC0A9F47C492107DC29D9AD3960BF83E84BD776FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2AF1FB1EDDF724F87A163497D120E653037EB54C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisString_t_m2DA3663726A288B80B948F1405495E0AF9A8F347_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4C9B994D78DE3313E2AEE4DF0964592BF389FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8E84E39D0E62D31544DE3953FDF92C5BAB60EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21916927D1C2A23DD6DA3C2E7FE2F3D6317F563A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52BB1AD0DD3A85E7F05A9AEA98E0EEB98B478F6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5756AECEA7064F13CC9765BE1F87065EA5B3D18E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58AE457A2E7C031E4E4EADC82BC37330A84838AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60DB2D6C7D1E32BCBAC4811B3E7978364FFC0102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90299BFCD00E6E29A61209F375686A81B96665F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0C6FF001ADF1824C2B6266A303671C2386842C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC73D661602F46A092AF190767F8E68241BB314F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD4104677145B876F292A0DE0E3D05E4D6B15066);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC992C951DB0BC53E8B3C5900205297E72E6E965);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5F89232B0CDE6B0E7076884EA8579F8F38D88C1);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	{
		// AndroidJavaObject witConfig =
		//     new AndroidJavaObject("com.oculus.assistant.api.voicesdk.immersivevoicecommands.WitConfiguration");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_1, _stringLiteral5756AECEA7064F13CC9765BE1F87065EA5B3D18E, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// witConfig.Set("clientAccessToken", configuration.witConfiguration.clientAccessToken);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = V_0;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_3 = __this->get_configuration_0();
		NullCheck(L_3);
		WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * L_4 = L_3->get_witConfiguration_0();
		NullCheck(L_4);
		String_t* L_5 = L_4->get_clientAccessToken_6();
		NullCheck(L_2);
		AndroidJavaObject_Set_TisString_t_m2DA3663726A288B80B948F1405495E0AF9A8F347(L_2, _stringLiteralEC992C951DB0BC53E8B3C5900205297E72E6E965, L_5, /*hidden argument*/AndroidJavaObject_Set_TisString_t_m2DA3663726A288B80B948F1405495E0AF9A8F347_RuntimeMethod_var);
		// AndroidJavaObject witRuntimeConfig = new AndroidJavaObject("com.oculus.assistant.api.voicesdk.immersivevoicecommands.WitRuntimeConfiguration");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6;
		L_6 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_7 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_7, _stringLiteralAC73D661602F46A092AF190767F8E68241BB314F, L_6, /*hidden argument*/NULL);
		// witRuntimeConfig.Set("witConfiguration", witConfig);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8 = L_7;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_9 = V_0;
		NullCheck(L_8);
		AndroidJavaObject_Set_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mF768D2F7310A4A5788843430433EEC2BFF05A8E3(L_8, _stringLiteral0C8E84E39D0E62D31544DE3953FDF92C5BAB60EB, L_9, /*hidden argument*/AndroidJavaObject_Set_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mF768D2F7310A4A5788843430433EEC2BFF05A8E3_RuntimeMethod_var);
		// witRuntimeConfig.Set("minKeepAliveVolume", configuration.minKeepAliveVolume);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_10 = L_8;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_11 = __this->get_configuration_0();
		NullCheck(L_11);
		float L_12 = L_11->get_minKeepAliveVolume_1();
		NullCheck(L_10);
		AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A(L_10, _stringLiteral60DB2D6C7D1E32BCBAC4811B3E7978364FFC0102, L_12, /*hidden argument*/AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A_RuntimeMethod_var);
		// witRuntimeConfig.Set("minKeepAliveTimeInSeconds",
		//     configuration.minKeepAliveTimeInSeconds);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_13 = L_10;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_14 = __this->get_configuration_0();
		NullCheck(L_14);
		float L_15 = L_14->get_minKeepAliveTimeInSeconds_2();
		NullCheck(L_13);
		AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A(L_13, _stringLiteral58AE457A2E7C031E4E4EADC82BC37330A84838AD, L_15, /*hidden argument*/AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A_RuntimeMethod_var);
		// witRuntimeConfig.Set("minTranscriptionKeepAliveTimeInSeconds",
		//     configuration.minTranscriptionKeepAliveTimeInSeconds);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_16 = L_13;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_17 = __this->get_configuration_0();
		NullCheck(L_17);
		float L_18 = L_17->get_minTranscriptionKeepAliveTimeInSeconds_3();
		NullCheck(L_16);
		AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A(L_16, _stringLiteralF5F89232B0CDE6B0E7076884EA8579F8F38D88C1, L_18, /*hidden argument*/AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A_RuntimeMethod_var);
		// witRuntimeConfig.Set("maxRecordingTime",
		//     configuration.maxRecordingTime);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_19 = L_16;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_20 = __this->get_configuration_0();
		NullCheck(L_20);
		float L_21 = L_20->get_maxRecordingTime_4();
		NullCheck(L_19);
		AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A(L_19, _stringLiteralDD4104677145B876F292A0DE0E3D05E4D6B15066, L_21, /*hidden argument*/AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A_RuntimeMethod_var);
		// witRuntimeConfig.Set("soundWakeThreshold",
		//     configuration.soundWakeThreshold);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_22 = L_19;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_23 = __this->get_configuration_0();
		NullCheck(L_23);
		float L_24 = L_23->get_soundWakeThreshold_5();
		NullCheck(L_22);
		AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A(L_22, _stringLiteral90299BFCD00E6E29A61209F375686A81B96665F6, L_24, /*hidden argument*/AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A_RuntimeMethod_var);
		// witRuntimeConfig.Set("sampleLengthInMs",
		//     configuration.sampleLengthInMs);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_25 = L_22;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_26 = __this->get_configuration_0();
		NullCheck(L_26);
		int32_t L_27 = L_26->get_sampleLengthInMs_6();
		NullCheck(L_25);
		AndroidJavaObject_Set_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2AF1FB1EDDF724F87A163497D120E653037EB54C(L_25, _stringLiteral52BB1AD0DD3A85E7F05A9AEA98E0EEB98B478F6D, L_27, /*hidden argument*/AndroidJavaObject_Set_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2AF1FB1EDDF724F87A163497D120E653037EB54C_RuntimeMethod_var);
		// witRuntimeConfig.Set("micBufferLengthInSeconds",
		//     configuration.micBufferLengthInSeconds);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_28 = L_25;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_29 = __this->get_configuration_0();
		NullCheck(L_29);
		float L_30 = L_29->get_micBufferLengthInSeconds_7();
		NullCheck(L_28);
		AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A(L_28, _stringLiteralA0C6FF001ADF1824C2B6266A303671C2386842C6, L_30, /*hidden argument*/AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A_RuntimeMethod_var);
		// witRuntimeConfig.Set("sendAudioToWit",
		//     configuration.sendAudioToWit);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_31 = L_28;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_32 = __this->get_configuration_0();
		NullCheck(L_32);
		bool L_33 = L_32->get_sendAudioToWit_9();
		NullCheck(L_31);
		AndroidJavaObject_Set_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC0A9F47C492107DC29D9AD3960BF83E84BD776FB(L_31, _stringLiteral21916927D1C2A23DD6DA3C2E7FE2F3D6317F563A, L_33, /*hidden argument*/AndroidJavaObject_Set_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC0A9F47C492107DC29D9AD3960BF83E84BD776FB_RuntimeMethod_var);
		// witRuntimeConfig.Set("preferredActivationOffset",
		//     configuration.preferredActivationOffset);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_34 = L_31;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_35 = __this->get_configuration_0();
		NullCheck(L_35);
		float L_36 = L_35->get_preferredActivationOffset_12();
		NullCheck(L_34);
		AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A(L_34, _stringLiteral0B4C9B994D78DE3313E2AEE4DF0964592BF389FE, L_36, /*hidden argument*/AndroidJavaObject_Set_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m23C608AD11933949B08719B7FDDC4B19C3E2276A_RuntimeMethod_var);
		// return witRuntimeConfig;
		return L_34;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::.ctor(Facebook.WitAi.IVoiceService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl__ctor_mB6AA37992649188E2A461D61888A30D91D3A7982 (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, RuntimeObject* ___baseVoiceService0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseAndroidConnectionImpl_1__ctor_m63FE40AA0F655EBB6431640D7092C0055394A5DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9198612C1E03878B69FB53EDEFD1E20C986857B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool _isServiceAvailable = true;
		__this->set__isServiceAvailable_3((bool)1);
		// public VoiceSDKImpl(IVoiceService baseVoiceService) : base(
		//     "com.oculus.assistant.api.unity.immersivevoicecommands.UnityIVCServiceFragment")
		BaseAndroidConnectionImpl_1__ctor_m63FE40AA0F655EBB6431640D7092C0055394A5DE(__this, _stringLiteral9198612C1E03878B69FB53EDEFD1E20C986857B4, /*hidden argument*/BaseAndroidConnectionImpl_1__ctor_m63FE40AA0F655EBB6431640D7092C0055394A5DE_RuntimeMethod_var);
		// _baseVoiceService = baseVoiceService;
		RuntimeObject* L_0 = ___baseVoiceService0;
		__this->set__baseVoiceService_5(L_0);
		// }
		return;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_PlatformSupportsWit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKImpl_get_PlatformSupportsWit_mDF8BC259EA908FBB9C028FBDC1DA0FA1DC0674B1 (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, const RuntimeMethod* method)
{
	{
		// public bool PlatformSupportsWit => service.PlatformSupportsWit && _isServiceAvailable;
		VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * L_0 = ((BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F *)__this)->get_service_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = VoiceSDKBinding_get_PlatformSupportsWit_m9E6893583E603941B7351E1008F660C72D515F65(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		bool L_2 = __this->get__isServiceAvailable_3();
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKImpl_get_Active_mF49C0FD2D3FE0347A58F095FFF1BBD9D30B5450F (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, const RuntimeMethod* method)
{
	{
		// public bool Active => service.Active && _isActive;
		VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * L_0 = ((BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F *)__this)->get_service_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = VoiceSDKBinding_get_Active_m09D7CDA4F56323048B65074DB987AA46416CE34D(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		bool L_2 = __this->get__isActive_6();
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKImpl_get_IsRequestActive_m7AEEA12A5EFA94B10D37C7CC04E0C367799A3431 (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRequestActive => service.IsRequestActive;
		VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * L_0 = ((BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F *)__this)->get_service_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = VoiceSDKBinding_get_IsRequestActive_mE270A11A52C1AD4D3CA4A55F7B7E330AA1247342(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_MicActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceSDKImpl_get_MicActive_mEE6E3E1CCD9D482D6E13BC2DAE29DAC509823BEA (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, const RuntimeMethod* method)
{
	{
		// public bool MicActive => service.MicActive;
		VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * L_0 = ((BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F *)__this)->get_service_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = VoiceSDKBinding_get_MicActive_m45CD8895B212648D801574C20FA76E4C6651E9EC(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::SetRuntimeConfiguration(Facebook.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_SetRuntimeConfiguration_mCDD3F6D82C6AE5E2EF91CB79D1F23FDC9D3BFCE5 (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * ___configuration0, const RuntimeMethod* method)
{
	{
		// service.SetRuntimeConfiguration(configuration);
		VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * L_0 = ((BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F *)__this)->get_service_1();
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_1 = ___configuration0;
		NullCheck(L_0);
		VoiceSDKBinding_SetRuntimeConfiguration_mC868CD77571B7F15D1DBA21D550409420521B113(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Facebook.WitAi.Interfaces.ITranscriptionProvider Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_TranscriptionProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoiceSDKImpl_get_TranscriptionProvider_m821A9CD25178705F8C6110A7D350D9DBAEB12D78 (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, const RuntimeMethod* method)
{
	{
		// public ITranscriptionProvider TranscriptionProvider { get; set; }
		RuntimeObject* L_0 = __this->get_U3CTranscriptionProviderU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::set_TranscriptionProvider(Facebook.WitAi.Interfaces.ITranscriptionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_set_TranscriptionProvider_m1F4A51974462FA7DC7911236FCA756F311D7595F (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public ITranscriptionProvider TranscriptionProvider { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CTranscriptionProviderU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_Connect_m1776D9A51A8B9AEC5DB4E3FED7287199065E5DA4 (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseAndroidConnectionImpl_1_Connect_mA1CB5E34819686404186897ED627B9AA84A90171_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImpl_OnStoppedListening_m6D465BB919DC89C3A509127EAB13908D24ACC042_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47DA4AFC29222C9791B731DF4DADD99DC88F94B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral734D834219E25F6AC949E3C4A33AA80BB578DC1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9611837DC9F59CE850732A48008AE16B5242C6BE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// base.Connect();
		BaseAndroidConnectionImpl_1_Connect_mA1CB5E34819686404186897ED627B9AA84A90171(__this, /*hidden argument*/BaseAndroidConnectionImpl_1_Connect_mA1CB5E34819686404186897ED627B9AA84A90171_RuntimeMethod_var);
		// eventBinding = new VoiceSDKListenerBinding(this, this);
		VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * L_0 = (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 *)il2cpp_codegen_object_new(VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118_il2cpp_TypeInfo_var);
		VoiceSDKListenerBinding__ctor_mDA0E4C22830921482F8CEAB2B978EFECDAFE8F15(L_0, __this, __this, /*hidden argument*/NULL);
		__this->set_eventBinding_7(L_0);
		// eventBinding.VoiceEvents.OnStoppedListening.AddListener(OnStoppedListening);
		VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * L_1 = __this->get_eventBinding_7();
		NullCheck(L_1);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_2;
		L_2 = VoiceSDKListenerBinding_get_VoiceEvents_m4326A578DC78A053883704536826582A6BA389DA(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_3 = L_2->get_OnStoppedListening_8();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_4 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_4, __this, (intptr_t)((intptr_t)VoiceSDKImpl_OnStoppedListening_m6D465BB919DC89C3A509127EAB13908D24ACC042_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_3, L_4, /*hidden argument*/NULL);
		// service.SetListener(eventBinding);
		VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * L_5 = ((BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F *)__this)->get_service_1();
		VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * L_6 = __this->get_eventBinding_7();
		NullCheck(L_5);
		VoiceSDKBinding_SetListener_m7488CC22AAD677683BE9D7D18F6A240CB25D0C80(L_5, L_6, /*hidden argument*/NULL);
		// service.Connect();
		VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * L_7 = ((BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F *)__this)->get_service_1();
		NullCheck(L_7);
		VoiceSDKBinding_Connect_mC829E36ABC9F3BA19B2B931B4880FE730ECD5491(L_7, /*hidden argument*/NULL);
		// Debug.Log(
		//     $"Platform integration initialization complete. Platform integrations are {(PlatformSupportsWit ? "active" : "inactive")}");
		bool L_8;
		L_8 = VoiceSDKImpl_get_PlatformSupportsWit_mDF8BC259EA908FBB9C028FBDC1DA0FA1DC0674B1(__this, /*hidden argument*/NULL);
		G_B1_0 = _stringLiteral47DA4AFC29222C9791B731DF4DADD99DC88F94B0;
		if (L_8)
		{
			G_B2_0 = _stringLiteral47DA4AFC29222C9791B731DF4DADD99DC88F94B0;
			goto IL_0064;
		}
	}
	{
		G_B3_0 = _stringLiteral9611837DC9F59CE850732A48008AE16B5242C6BE;
		G_B3_1 = G_B1_0;
		goto IL_0069;
	}

IL_0064:
	{
		G_B3_0 = _stringLiteral734D834219E25F6AC949E3C4A33AA80BB578DC1A;
		G_B3_1 = G_B2_0;
	}

IL_0069:
	{
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_Disconnect_mEAC841BE821EF84B7EF868E27367FB242C42003B (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseAndroidConnectionImpl_1_Disconnect_m8466A5C9F1E6F0AC81C1944C06B7BCBE94C69CF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKImpl_OnStoppedListening_m6D465BB919DC89C3A509127EAB13908D24ACC042_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Disconnect();
		BaseAndroidConnectionImpl_1_Disconnect_m8466A5C9F1E6F0AC81C1944C06B7BCBE94C69CF7(__this, /*hidden argument*/BaseAndroidConnectionImpl_1_Disconnect_m8466A5C9F1E6F0AC81C1944C06B7BCBE94C69CF7_RuntimeMethod_var);
		// if (null != eventBinding)
		VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * L_0 = __this->get_eventBinding_7();
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// eventBinding.VoiceEvents.OnStoppedListening.RemoveListener(OnStoppedListening);
		VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * L_1 = __this->get_eventBinding_7();
		NullCheck(L_1);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_2;
		L_2 = VoiceSDKListenerBinding_get_VoiceEvents_m4326A578DC78A053883704536826582A6BA389DA(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_3 = L_2->get_OnStoppedListening_8();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_4 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_4, __this, (intptr_t)((intptr_t)VoiceSDKImpl_OnStoppedListening_m6D465BB919DC89C3A509127EAB13908D24ACC042_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_3, L_4, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::OnStoppedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_OnStoppedListening_m6D465BB919DC89C3A509127EAB13908D24ACC042 (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, const RuntimeMethod* method)
{
	{
		// _isActive = false;
		__this->set__isActive_6((bool)0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::Activate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_Activate_mEC782ECF29D9CECDFAB4CA36FBD63CA95322D635 (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		// service.Activate(text);
		VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * L_0 = ((BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F *)__this)->get_service_1();
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		VoiceSDKBinding_Activate_m76514CF6509E364B71ABA1801D90B206F70F509E(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::Activate(System.String,Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_Activate_m405EF29B013BFCBD597ED8FAC8C538F7FE157BE3 (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, String_t* ___text0, WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * ___requestOptions1, const RuntimeMethod* method)
{
	{
		// service.Activate(text, requestOptions);
		VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * L_0 = ((BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F *)__this)->get_service_1();
		String_t* L_1 = ___text0;
		WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * L_2 = ___requestOptions1;
		NullCheck(L_0);
		VoiceSDKBinding_Activate_m72DCA2C1A074C91870E499C18F4D75E0BAAD0B1F(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_Activate_mA227C5369C59CC9DDA8892F40FA233014FC81D27 (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, const RuntimeMethod* method)
{
	{
		// if (_isActive) return;
		bool L_0 = __this->get__isActive_6();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_isActive) return;
		return;
	}

IL_0009:
	{
		// _isActive = true;
		__this->set__isActive_6((bool)1);
		// service.Activate();
		VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * L_1 = ((BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F *)__this)->get_service_1();
		NullCheck(L_1);
		VoiceSDKBinding_Activate_m20422735ACA81DA500EC670D6D154F1A79E7898D(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::Activate(Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_Activate_mFAE12AD47E12996D1D767D818E1570AF2D2F103B (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * ___requestOptions0, const RuntimeMethod* method)
{
	{
		// if (_isActive) return;
		bool L_0 = __this->get__isActive_6();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_isActive) return;
		return;
	}

IL_0009:
	{
		// _isActive = true;
		__this->set__isActive_6((bool)1);
		// service.Activate(requestOptions);
		VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * L_1 = ((BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F *)__this)->get_service_1();
		WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * L_2 = ___requestOptions0;
		NullCheck(L_1);
		VoiceSDKBinding_Activate_m02C8A8FB3E4F5B06659BF4F19B1F450D7D72424B(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::ActivateImmediately()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_ActivateImmediately_mB2AA4C090F0C1A0947D67557DB87DA0272D2486B (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, const RuntimeMethod* method)
{
	{
		// if (_isActive) return;
		bool L_0 = __this->get__isActive_6();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_isActive) return;
		return;
	}

IL_0009:
	{
		// _isActive = true;
		__this->set__isActive_6((bool)1);
		// service.ActivateImmediately();
		VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * L_1 = ((BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F *)__this)->get_service_1();
		NullCheck(L_1);
		VoiceSDKBinding_ActivateImmediately_m09DF22FB1438F4DF865EDCDD1684952C4774EA88(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::ActivateImmediately(Facebook.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_ActivateImmediately_mE13BFC633BB07ABB0F1A78EAFECD24E70E7F0D8C (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * ___requestOptions0, const RuntimeMethod* method)
{
	{
		// if (_isActive) return;
		bool L_0 = __this->get__isActive_6();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_isActive) return;
		return;
	}

IL_0009:
	{
		// _isActive = true;
		__this->set__isActive_6((bool)1);
		// service.ActivateImmediately(requestOptions);
		VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * L_1 = ((BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F *)__this)->get_service_1();
		WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * L_2 = ___requestOptions0;
		NullCheck(L_1);
		VoiceSDKBinding_ActivateImmediately_m97DE475C9FD0E91BB40272DEB5CCE48EB894C55D(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_Deactivate_mDC883CD677AE860FF624DCC2A9D0FFD0819391B4 (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, const RuntimeMethod* method)
{
	{
		// _isActive = false;
		__this->set__isActive_6((bool)0);
		// service.Deactivate();
		VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * L_0 = ((BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F *)__this)->get_service_1();
		NullCheck(L_0);
		VoiceSDKBinding_Deactivate_m7941512C3434A6F4E5AC62A749705AFEE9CECA3F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::DeactivateAndAbortRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_DeactivateAndAbortRequest_m85B3E5E1004F896D2A7763F933DAD4C5B168DB99 (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, const RuntimeMethod* method)
{
	{
		// _isActive = false;
		__this->set__isActive_6((bool)0);
		// service.Deactivate();
		VoiceSDKBinding_t5D8C48C001321A05594734D7EB7A03E54BCDDFB2 * L_0 = ((BaseAndroidConnectionImpl_1_t665453150E11318FF2394EAC4DF251EFDC5C0E0F *)__this)->get_service_1();
		NullCheck(L_0);
		VoiceSDKBinding_Deactivate_m7941512C3434A6F4E5AC62A749705AFEE9CECA3F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::OnServiceNotAvailable(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_OnServiceNotAvailable_mB188F8EA2CE5BE0A30C4498E3C4404C9ED39D72E (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, String_t* ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// _isActive = false;
		__this->set__isActive_6((bool)0);
		// _isServiceAvailable = false;
		__this->set__isServiceAvailable_3((bool)0);
		// OnServiceNotAvailableEvent?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnServiceNotAvailableEvent_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Facebook.WitAi.Events.VoiceEvents Oculus.Voice.Bindings.Android.VoiceSDKImpl::get_VoiceEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * VoiceSDKImpl_get_VoiceEvents_mEB15B3E14800F28C6E996CCD01C9266097742B19 (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => _baseVoiceService.VoiceEvents;
		RuntimeObject* L_0 = __this->get__baseVoiceService_5();
		NullCheck(L_0);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_1;
		L_1 = InterfaceFuncInvoker0< VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * >::Invoke(3 /* Facebook.WitAi.Events.VoiceEvents Facebook.WitAi.IVoiceService::get_VoiceEvents() */, IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKImpl::set_VoiceEvents(Facebook.WitAi.Events.VoiceEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKImpl_set_VoiceEvents_mFD9DB971A296C8317D30F34630C2EFFDA154C9DF (VoiceSDKImpl_t53C45D20BE1364F5B1DF6FB19F036DB2F4A4DA4D * __this, VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => _baseVoiceService.VoiceEvents = value;
		RuntimeObject* L_0 = __this->get__baseVoiceService_5();
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * >::Invoke(4 /* System.Void Facebook.WitAi.IVoiceService::set_VoiceEvents(Facebook.WitAi.Events.VoiceEvents) */, IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Facebook.WitAi.Events.VoiceEvents Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::get_VoiceEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * VoiceSDKListenerBinding_get_VoiceEvents_m4326A578DC78A053883704536826582A6BA389DA (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VoiceEvents VoiceEvents => _voiceService.VoiceEvents;
		RuntimeObject* L_0 = __this->get__voiceService_4();
		NullCheck(L_0);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_1;
		L_1 = InterfaceFuncInvoker0< VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * >::Invoke(3 /* Facebook.WitAi.Events.VoiceEvents Facebook.WitAi.IVoiceService::get_VoiceEvents() */, IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::.ctor(Facebook.WitAi.IVoiceService,Oculus.Voice.Bindings.Android.IVCBindingEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding__ctor_mDA0E4C22830921482F8CEAB2B978EFECDAFE8F15 (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * __this, RuntimeObject* ___voiceService0, RuntimeObject* ___bindingEvents1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52CCE57FBBB435D24E1DD8F182FA0BDA2750C166);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VoiceSDKListenerBinding(IVoiceService voiceService, IVCBindingEvents bindingEvents) : base(
		//     "com.oculus.assistant.api.voicesdk.immersivevoicecommands.IVCEventsListener")
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral52CCE57FBBB435D24E1DD8F182FA0BDA2750C166, /*hidden argument*/NULL);
		// _voiceService = voiceService;
		RuntimeObject* L_0 = ___voiceService0;
		__this->set__voiceService_4(L_0);
		// _bindingEvents = bindingEvents;
		RuntimeObject* L_1 = ___bindingEvents1;
		__this->set__bindingEvents_5(L_1);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onResponse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onResponse_m2272D0B78526424993A5A996725011AE0ADA4A45 (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * __this, String_t* ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m65140CE9B1391F17461B85941BAD199745AD67D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		s_Il2CppMethodInitialized = true;
	}
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * V_0 = NULL;
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * V_1 = NULL;
	WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * G_B2_0 = NULL;
	WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * G_B1_0 = NULL;
	WitResponseEvent_tB6FF10625816530C0B3B946E94F9701FF0FAC6B4 * G_B5_0 = NULL;
	WitResponseEvent_tB6FF10625816530C0B3B946E94F9701FF0FAC6B4 * G_B4_0 = NULL;
	{
		// var responseNode = WitResponseJson.Parse(response);
		String_t* L_0 = ___response0;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_1;
		L_1 = WitResponseJson_Parse_m65F6381321705885F147425DCB63F3840635D4D6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var transcription = responseNode["text"];
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_2 = V_0;
		NullCheck(L_2);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_3;
		L_3 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_2, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		V_1 = L_3;
		// VoiceEvents.onFullTranscription?.Invoke(transcription);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_4;
		L_4 = VoiceSDKListenerBinding_get_VoiceEvents_m4326A578DC78A053883704536826582A6BA389DA(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * L_5 = L_4->get_onFullTranscription_15();
		WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_0024;
		}
	}
	{
		goto IL_002f;
	}

IL_0024:
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_7 = V_1;
		String_t* L_8;
		L_8 = WitResponseNode_op_Implicit_m6AE01772CDB9839507732D5D953329688607B62E(L_7, /*hidden argument*/NULL);
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10(G_B2_0, L_8, /*hidden argument*/UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
	}

IL_002f:
	{
		// VoiceEvents.OnResponse?.Invoke(responseNode);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_9;
		L_9 = VoiceSDKListenerBinding_get_VoiceEvents_m4326A578DC78A053883704536826582A6BA389DA(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		WitResponseEvent_tB6FF10625816530C0B3B946E94F9701FF0FAC6B4 * L_10 = L_9->get_OnResponse_0();
		WitResponseEvent_tB6FF10625816530C0B3B946E94F9701FF0FAC6B4 * L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_12 = V_0;
		NullCheck(G_B5_0);
		UnityEvent_1_Invoke_m65140CE9B1391F17461B85941BAD199745AD67D6(G_B5_0, L_12, /*hidden argument*/UnityEvent_1_Invoke_m65140CE9B1391F17461B85941BAD199745AD67D6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onPartialResponse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onPartialResponse_mFFE64E3EFDCEF67B421EC7A1EE2294CE8DEC3FBD (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * __this, String_t* ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		s_Il2CppMethodInitialized = true;
	}
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * V_0 = NULL;
	WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * G_B2_0 = NULL;
	WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * G_B1_0 = NULL;
	{
		// var responseNode = WitResponseJson.Parse(response);
		String_t* L_0 = ___response0;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_1;
		L_1 = WitResponseJson_Parse_m65F6381321705885F147425DCB63F3840635D4D6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// VoiceEvents.onPartialTranscription?.Invoke(responseNode["text"]);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_2;
		L_2 = VoiceSDKListenerBinding_get_VoiceEvents_m4326A578DC78A053883704536826582A6BA389DA(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * L_3 = L_2->get_onPartialTranscription_14();
		WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_5 = V_0;
		NullCheck(L_5);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_6;
		L_6 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_5, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		String_t* L_7;
		L_7 = WitResponseNode_op_Implicit_m6AE01772CDB9839507732D5D953329688607B62E(L_6, /*hidden argument*/NULL);
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10(G_B2_0, L_7, /*hidden argument*/UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onError(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onError_mE7535E7E934B976AB0C8473043D136A8A74697D4 (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * __this, String_t* ___error0, String_t* ___message1, String_t* ___errorBody2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitErrorEvent_t75A2B26145BEFDEC6A91E014BBA329E35862E571 * G_B2_0 = NULL;
	WitErrorEvent_t75A2B26145BEFDEC6A91E014BBA329E35862E571 * G_B1_0 = NULL;
	{
		// VoiceEvents.OnError?.Invoke(error, message);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_0;
		L_0 = VoiceSDKListenerBinding_get_VoiceEvents_m4326A578DC78A053883704536826582A6BA389DA(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WitErrorEvent_t75A2B26145BEFDEC6A91E014BBA329E35862E571 * L_1 = L_0->get_OnError_1();
		WitErrorEvent_t75A2B26145BEFDEC6A91E014BBA329E35862E571 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = ___error0;
		String_t* L_4 = ___message1;
		NullCheck(G_B2_0);
		UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1(G_B2_0, L_3, L_4, /*hidden argument*/UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onAborted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onAborted_m191CD839F75D9CE699784D50D128FD257B5DD066 (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * __this, const RuntimeMethod* method)
{
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B1_0 = NULL;
	{
		// VoiceEvents.OnAborted?.Invoke();
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_0;
		L_0 = VoiceSDKListenerBinding_get_VoiceEvents_m4326A578DC78A053883704536826582A6BA389DA(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = L_0->get_OnAborted_3();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onRequestCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onRequestCompleted_m1B3BFADC48CBD48F90B810A3A1A8F794E32CA2BA (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * __this, const RuntimeMethod* method)
{
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B1_0 = NULL;
	{
		// VoiceEvents.OnRequestCompleted?.Invoke();
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_0;
		L_0 = VoiceSDKListenerBinding_get_VoiceEvents_m4326A578DC78A053883704536826582A6BA389DA(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = L_0->get_OnRequestCompleted_4();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onMicLevelChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onMicLevelChanged_mA4349AF78736CE24A1B51F58153101CE7EF5D7F3 (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * __this, float ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitMicLevelChangedEvent_t8B4131C6B21D3887BC9192ABC8DE29B97197480B * G_B2_0 = NULL;
	WitMicLevelChangedEvent_t8B4131C6B21D3887BC9192ABC8DE29B97197480B * G_B1_0 = NULL;
	{
		// VoiceEvents.OnMicLevelChanged?.Invoke(level);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_0;
		L_0 = VoiceSDKListenerBinding_get_VoiceEvents_m4326A578DC78A053883704536826582A6BA389DA(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WitMicLevelChangedEvent_t8B4131C6B21D3887BC9192ABC8DE29B97197480B * L_1 = L_0->get_OnMicLevelChanged_5();
		WitMicLevelChangedEvent_t8B4131C6B21D3887BC9192ABC8DE29B97197480B * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		float L_3 = ___level0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E(G_B2_0, L_3, /*hidden argument*/UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onRequestCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onRequestCreated_m1C33AD7D1CC2AA1129982B98353B2343BA6A473E (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mE7B69F204F1D5780888EB968EB6AF610B17E303A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitRequestCreatedEvent_tC0FA819B0DDD5D9FBDB63FF11D5FEBC287C4BF82 * G_B2_0 = NULL;
	WitRequestCreatedEvent_tC0FA819B0DDD5D9FBDB63FF11D5FEBC287C4BF82 * G_B1_0 = NULL;
	{
		// VoiceEvents.OnRequestCreated?.Invoke(null);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_0;
		L_0 = VoiceSDKListenerBinding_get_VoiceEvents_m4326A578DC78A053883704536826582A6BA389DA(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WitRequestCreatedEvent_tC0FA819B0DDD5D9FBDB63FF11D5FEBC287C4BF82 * L_1 = L_0->get_OnRequestCreated_6();
		WitRequestCreatedEvent_tC0FA819B0DDD5D9FBDB63FF11D5FEBC287C4BF82 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mE7B69F204F1D5780888EB968EB6AF610B17E303A(G_B2_0, (WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 *)NULL, /*hidden argument*/UnityEvent_1_Invoke_mE7B69F204F1D5780888EB968EB6AF610B17E303A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onStartListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onStartListening_m523E1CC754E8B53CA05905FB3330706F5B8D672F (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * __this, const RuntimeMethod* method)
{
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B1_0 = NULL;
	{
		// VoiceEvents.OnStartListening?.Invoke();
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_0;
		L_0 = VoiceSDKListenerBinding_get_VoiceEvents_m4326A578DC78A053883704536826582A6BA389DA(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = L_0->get_OnStartListening_7();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onStoppedListening(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onStoppedListening_mF14FC489E0969A665AE8C87DD003779F7B38FABD (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * __this, int32_t ___reason0, const RuntimeMethod* method)
{
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B1_0 = NULL;
	{
		// VoiceEvents.OnStoppedListening?.Invoke();
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_0;
		L_0 = VoiceSDKListenerBinding_get_VoiceEvents_m4326A578DC78A053883704536826582A6BA389DA(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = L_0->get_OnStoppedListening_8();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onMicDataSent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onMicDataSent_m1E0452B60223AB9EDF966EDA1294D3F700A39619 (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * __this, const RuntimeMethod* method)
{
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B1_0 = NULL;
	{
		// VoiceEvents.OnMicDataSent?.Invoke();
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_0;
		L_0 = VoiceSDKListenerBinding_get_VoiceEvents_m4326A578DC78A053883704536826582A6BA389DA(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = L_0->get_OnMicDataSent_12();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onMinimumWakeThresholdHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onMinimumWakeThresholdHit_mB69ABF4066BFDE473434E0ED207516B95C087B8B (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * __this, const RuntimeMethod* method)
{
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B1_0 = NULL;
	{
		// VoiceEvents.OnMinimumWakeThresholdHit?.Invoke();
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_0;
		L_0 = VoiceSDKListenerBinding_get_VoiceEvents_m4326A578DC78A053883704536826582A6BA389DA(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = L_0->get_OnMinimumWakeThresholdHit_13();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onPartialTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onPartialTranscription_mCEB971BD66D82F4ED0B76092A8DF98AD89FD165E (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * __this, String_t* ___transcription0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * G_B2_0 = NULL;
	WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * G_B1_0 = NULL;
	{
		// VoiceEvents.OnPartialTranscription?.Invoke(transcription);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_0;
		L_0 = VoiceSDKListenerBinding_get_VoiceEvents_m4326A578DC78A053883704536826582A6BA389DA(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * L_1;
		L_1 = VoiceEvents_get_OnPartialTranscription_m42A410529487FA1E9A6BA3104E4CE6E2063E82A7_inline(L_0, /*hidden argument*/NULL);
		WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = ___transcription0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10(G_B2_0, L_3, /*hidden argument*/UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onFullTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onFullTranscription_m8AB08997A1E6C934848309012808437FC4CCAA03 (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * __this, String_t* ___transcription0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * G_B2_0 = NULL;
	WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * G_B1_0 = NULL;
	{
		// VoiceEvents.OnFullTranscription?.Invoke(transcription);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_0;
		L_0 = VoiceSDKListenerBinding_get_VoiceEvents_m4326A578DC78A053883704536826582A6BA389DA(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * L_1;
		L_1 = VoiceEvents_get_OnFullTranscription_m2F3454ABA3D28D8BCA75778AC33D5AC2B93EEA28_inline(L_0, /*hidden argument*/NULL);
		WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = ___transcription0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10(G_B2_0, L_3, /*hidden argument*/UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding::onServiceNotAvailable(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKListenerBinding_onServiceNotAvailable_m73F6D98B4DFF0817F4774DF1D4B50C76B43E094F (VoiceSDKListenerBinding_t572E3CF1C308A9193A7272166DE751534F6C0118 * __this, String_t* ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVCBindingEvents_tE3F7B95673AB2A5451237184072108BC41591478_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD6C5540AB43FA5EAE750894E23E2E250DD5E7B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning($"Platform service is not available: {error} - {message}");
		String_t* L_0 = ___error0;
		String_t* L_1 = ___message1;
		String_t* L_2;
		L_2 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralDD6C5540AB43FA5EAE750894E23E2E250DD5E7B1, L_0, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_2, /*hidden argument*/NULL);
		// _bindingEvents.OnServiceNotAvailable(error, message);
		RuntimeObject* L_3 = __this->get__bindingEvents_5();
		String_t* L_4 = ___error0;
		String_t* L_5 = ___message1;
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void Oculus.Voice.Bindings.Android.IVCBindingEvents::OnServiceNotAvailable(System.String,System.String) */, IVCBindingEvents_tE3F7B95673AB2A5451237184072108BC41591478_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AppVoiceExperience_get_HasPlatformIntegrations_m7882C9A275163FC894F0A863402C2C19FE9A2BB0_inline (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	{
		// public bool HasPlatformIntegrations => usePlatformServices;
		bool L_0 = __this->get_usePlatformServices_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * AppVoiceExperience_get_RuntimeConfiguration_mB4BD9F2821001AC00FDD57A7DE07DF929B5C0FFE_inline (AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * __this, const RuntimeMethod* method)
{
	{
		// get => witRuntimeConfiguration;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_0 = __this->get_witRuntimeConfiguration_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Wit_set_RuntimeConfiguration_m62EF21A1D006E0B2AB537EF58FB60F92889035A9_inline (Wit_t56D21E306ECB54B06B548149BC8103A807A158D8 * __this, WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * ___value0, const RuntimeMethod* method)
{
	{
		// set => witRuntimeConfiguration = value;
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_0 = ___value0;
		__this->set_witRuntimeConfiguration_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * VoiceEvents_get_OnPartialTranscription_m42A410529487FA1E9A6BA3104E4CE6E2063E82A7_inline (VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * __this, const RuntimeMethod* method)
{
	{
		// public WitTranscriptionEvent OnPartialTranscription => onPartialTranscription;
		WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * L_0 = __this->get_onPartialTranscription_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * VoiceEvents_get_OnFullTranscription_m2F3454ABA3D28D8BCA75778AC33D5AC2B93EEA28_inline (VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * __this, const RuntimeMethod* method)
{
	{
		// public WitTranscriptionEvent OnFullTranscription => onFullTranscription;
		WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * L_0 = __this->get_onFullTranscription_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
