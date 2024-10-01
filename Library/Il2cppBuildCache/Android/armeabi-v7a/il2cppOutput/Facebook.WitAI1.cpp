#include "pch-cpp.hpp"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`1<Facebook.WitAi.WitRequest>
struct Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]>
struct ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.Lib.WitResponseNode>
struct Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B;
// System.Func`1<System.String>
struct Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<Facebook.WitAi.WitRequest>
struct HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<Facebook.WitAi.WitRequest>
struct IEnumerable_1_t48AF4F06B8F55AD4419E0CB18D869DA795D513BE;
// System.Collections.Generic.IEnumerable`1<Facebook.WitAi.Lib.WitResponseNode>
struct IEnumerable_1_t664AF55B30D40ED13AC2A4F7EC61037AD36405D5;
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode>
struct IEnumerator_1_tCD28F113D39C58FA892063CF522C739FA02AB8FD;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<Facebook.WitAi.WitRequest>
struct IEqualityComparer_1_tA4C826F4CE726803D31A6E33AB47A3F73B346F5A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Facebook.WitAi.Lib.WitResponseNode>
struct KeyCollection_tE4FB49928AF18F98422CE926AB5A601C2B50C342;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Facebook.WitAi.Lib.WitResponseNode>
struct List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653;
// Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte>
struct Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Facebook.WitAi.Lib.WitResponseNode>
struct ValueCollection_t4435A3A10B7172241A24AE4ED8102D81102B2753;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Facebook.WitAi.Lib.WitResponseNode>[]
struct EntryU5BU5D_t8C8ADFB52E978C287B07F3D57452756F1E4F68DB;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494;
// System.Collections.Generic.HashSet`1/Slot<Facebook.WitAi.WitRequest>[]
struct SlotU5BU5D_t3E7B052D2F10FD52CAEEBED962CF816827F679F7;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// Facebook.WitAi.Interfaces.IDynamicEntitiesProvider[]
struct IDynamicEntitiesProviderU5BU5D_tDDBA52ABBE7FA2E95A314F6D72D3FB0FDFED2107;
// Facebook.WitAi.Events.IWitByteDataReadyHandler[]
struct IWitByteDataReadyHandlerU5BU5D_tDAF18FFFEDA7AD9375B6460D05A3F76B7B129180;
// Facebook.WitAi.Events.IWitByteDataSentHandler[]
struct IWitByteDataSentHandlerU5BU5D_t50A06A7E11B774416F56D27DCF1E85671DA8D804;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// Facebook.WitAi.Lib.WitResponseNode[]
struct WitResponseNodeU5BU5D_t42E4097A09B7F711382FC005993E3F945A419968;
// Facebook.WitAi.WitRequest/QueryParam[]
struct QueryParamU5BU5D_t599632D16DA1C62459C16B3C1A9206C89C61D61B;
// Facebook.WitAi.Data.AudioEncoding
struct AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Facebook.WitAi.Interfaces.CustomTranscriptionProvider
struct CustomTranscriptionProvider_tF690178502A6AC2682EDE3E3DDC067B4574A5F82;
// System.Net.HttpWebResponse
struct HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Facebook.WitAi.IRequest
struct IRequest_t24B46254E38326238D6A127740FA8CCB413083A7;
// Facebook.WitAi.Interfaces.ITranscriptionProvider
struct ITranscriptionProvider_tC607BE81017791B4ED85025471847899CE24E30C;
// Facebook.WitAi.IVoiceEventProvider
struct IVoiceEventProvider_t6B278DE031A329588899A64447D6030B6369A536;
// Facebook.WitAi.IWitRuntimeConfigProvider
struct IWitRuntimeConfigProvider_tDCB7116C69FB4BA12B8EDBE3E51AAFB0F526BB65;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// Facebook.WitAi.Events.VoiceEvents
struct VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Facebook.WitAi.Events.WitByteDataEvent
struct WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6;
// Facebook.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631;
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
// Facebook.WitAi.Lib.WitResponseArray
struct WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015;
// Facebook.WitAi.Lib.WitResponseClass
struct WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55;
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
// Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675;
// Facebook.WitAi.WitRequest/OnCustomizeUriEvent
struct OnCustomizeUriEvent_t9D13E53AB8681A345A39DAA3B800A45F146199FF;
// Facebook.WitAi.WitRequest/OnProvideCustomHeadersEvent
struct OnProvideCustomHeadersEvent_tFB4F29CECA9500A91331B43CEBADB0F51DDEC4D0;
// Facebook.WitAi.WitRequest/PreSendRequestDelegate
struct PreSendRequestDelegate_t59C335BC80A012FB63121965FD64BB1A8F937955;
// Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13
struct U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC;
// Facebook.WitAi.Lib.WitResponseClass/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tFD1C9FF91A1538E15ED009962EBFC16BF2AA738D;
// Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18
struct U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C;
// Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17
struct U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632;
// Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17
struct U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE;
// Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19
struct U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878;
// Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62
struct U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592;
// Facebook.WitAi.WitService/<PerformDequeue>d__70
struct U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E;
// Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<RuntimeCoroutineIterate>d__7
struct U3CRuntimeCoroutineIterateU3Ed__7_tE0F893D2157620B17A8C27539FE0BED740CF218E;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t664AF55B30D40ED13AC2A4F7EC61037AD36405D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tCD28F113D39C58FA892063CF522C739FA02AB8FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralF6CDEB7B5373DAB5ECC8942A7DC008C2E60F0AFA;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m10677EB2EE1949F744300CD30FCA7CD3C6C1E053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisWitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_m85BED11F1D3008DD0F1B1826752A9FF02AF2C850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m96E070C8159309DEF2D500ECEF6D8746E93FA53E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9EA9258A012DBCBC28E4D055694FABFE67AC12D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB2B0EDE205F16235A4B8232D09E17663DEA41C5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD4749DB40FB468135C8EE322D67004EFC83CA797_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m38A9E91443369F87FAA044FE976FF7601F8E8975_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6C0415A47C5AF1C777C32CF8B65CEFCA2626DEE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mD36B17D607A2E14AE400B8B0D0678AA9CEA2DFF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m04A4DDF0C01FEA999619DA4ECC7E50570B70B53E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_mE31B0F89DB0BD81E83F184E982B2FEBAE7B91644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m33A7EAF1E41A4710D7CC399AC848A6F65627E99C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6122040F54414AB6A4B0CFC3338E1BD602CF2457_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDeactivateDueToTimeLimitU3Ed__62_System_Collections_IEnumerator_Reset_m04D0E4F24C7FD5CA15F6F711FA9420842AAED2D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_Reset_mD822AD4F252921AD7B65BAFFD1C3304E8AE3F340_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPerformDequeueU3Ed__70_System_Collections_IEnumerator_Reset_mD4766C852E5FADEB8B0C73421974CB35363AC5FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRuntimeCoroutineIterateU3Ed__7_System_Collections_IEnumerator_Reset_m2258BC9CBED9FA053178F6D8BD75548BAA595BD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_Reset_m6F355B941A11C8C9F89D80EA1FDF9DABC80F64E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_m90DC6E2B2F6665945CF3B7F0B4A0C578CFDFE507_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_mB7D3280C87D90DEA758EC29D5944688A10116DBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_Reset_m4532B1D8A9A8015578CEE29790100608FCC01933_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.Lib.WitResponseNode>
struct Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8C8ADFB52E978C287B07F3D57452756F1E4F68DB* ___entries_1;
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
	KeyCollection_tE4FB49928AF18F98422CE926AB5A601C2B50C342 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4435A3A10B7172241A24AE4ED8102D81102B2753 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ___entries_1)); }
	inline EntryU5BU5D_t8C8ADFB52E978C287B07F3D57452756F1E4F68DB* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8C8ADFB52E978C287B07F3D57452756F1E4F68DB** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8C8ADFB52E978C287B07F3D57452756F1E4F68DB* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ___keys_7)); }
	inline KeyCollection_tE4FB49928AF18F98422CE926AB5A601C2B50C342 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE4FB49928AF18F98422CE926AB5A601C2B50C342 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE4FB49928AF18F98422CE926AB5A601C2B50C342 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ___values_8)); }
	inline ValueCollection_t4435A3A10B7172241A24AE4ED8102D81102B2753 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4435A3A10B7172241A24AE4ED8102D81102B2753 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4435A3A10B7172241A24AE4ED8102D81102B2753 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____slots_8)); }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<Facebook.WitAi.WitRequest>
struct HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t3E7B052D2F10FD52CAEEBED962CF816827F679F7* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC, ____slots_8)); }
	inline SlotU5BU5D_t3E7B052D2F10FD52CAEEBED962CF816827F679F7* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t3E7B052D2F10FD52CAEEBED962CF816827F679F7** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t3E7B052D2F10FD52CAEEBED962CF816827F679F7* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<Facebook.WitAi.Lib.WitResponseNode>
struct List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WitResponseNodeU5BU5D_t42E4097A09B7F711382FC005993E3F945A419968* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653, ____items_1)); }
	inline WitResponseNodeU5BU5D_t42E4097A09B7F711382FC005993E3F945A419968* get__items_1() const { return ____items_1; }
	inline WitResponseNodeU5BU5D_t42E4097A09B7F711382FC005993E3F945A419968** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WitResponseNodeU5BU5D_t42E4097A09B7F711382FC005993E3F945A419968* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WitResponseNodeU5BU5D_t42E4097A09B7F711382FC005993E3F945A419968* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653_StaticFields, ____emptyArray_5)); }
	inline WitResponseNodeU5BU5D_t42E4097A09B7F711382FC005993E3F945A419968* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WitResponseNodeU5BU5D_t42E4097A09B7F711382FC005993E3F945A419968** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WitResponseNodeU5BU5D_t42E4097A09B7F711382FC005993E3F945A419968* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Facebook.WitAi.Lib.WitResponseClass/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tFD1C9FF91A1538E15ED009962EBFC16BF2AA738D  : public RuntimeObject
{
public:
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseClass/<>c__DisplayClass15_0::aNode
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___aNode_0;

public:
	inline static int32_t get_offset_of_aNode_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_tFD1C9FF91A1538E15ED009962EBFC16BF2AA738D, ___aNode_0)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_aNode_0() const { return ___aNode_0; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_aNode_0() { return &___aNode_0; }
	inline void set_aNode_0(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___aNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aNode_0), (void*)value);
	}
};


// Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17
struct U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::<>2__current
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___U3CU3E2__current_1;
	// System.Int32 Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE, ___U3CU3E2__current_1)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}
};


// Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19
struct U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>2__current
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___U3CU3E2__current_1;
	// System.Int32 Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>4__this
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___U3CU3E4__this_3;
	// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_4;
	// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878, ___U3CU3E2__current_1)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878, ___U3CU3E4__this_3)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878, ___U3CU3E7__wrap1_4)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_5() { return static_cast<int32_t>(offsetof(U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878, ___U3CU3E7__wrap2_5)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_5() const { return ___U3CU3E7__wrap2_5; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_5() { return &___U3CU3E7__wrap2_5; }
	inline void set_U3CU3E7__wrap2_5(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_5), (void*)value);
	}
};


// Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62
struct U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Facebook.WitAi.WitService Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62::<>4__this
	WitService_t860537723698CF0607466342346F3B1FECA68DCB * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592, ___U3CU3E4__this_2)); }
	inline WitService_t860537723698CF0607466342346F3B1FECA68DCB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WitService_t860537723698CF0607466342346F3B1FECA68DCB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WitService_t860537723698CF0607466342346F3B1FECA68DCB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Facebook.WitAi.WitService/<PerformDequeue>d__70
struct U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.WitService/<PerformDequeue>d__70::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.WitAi.WitService/<PerformDequeue>d__70::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Facebook.WitAi.WitService Facebook.WitAi.WitService/<PerformDequeue>d__70::<>4__this
	WitService_t860537723698CF0607466342346F3B1FECA68DCB * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E, ___U3CU3E4__this_2)); }
	inline WitService_t860537723698CF0607466342346F3B1FECA68DCB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WitService_t860537723698CF0607466342346F3B1FECA68DCB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WitService_t860537723698CF0607466342346F3B1FECA68DCB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<RuntimeCoroutineIterate>d__7
struct U3CRuntimeCoroutineIterateU3Ed__7_tE0F893D2157620B17A8C27539FE0BED740CF218E  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<RuntimeCoroutineIterate>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<RuntimeCoroutineIterate>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Collections.IEnumerator Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<RuntimeCoroutineIterate>d__7::asyncMethod
	RuntimeObject* ___asyncMethod_2;
	// Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<RuntimeCoroutineIterate>d__7::<>4__this
	CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRuntimeCoroutineIterateU3Ed__7_tE0F893D2157620B17A8C27539FE0BED740CF218E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRuntimeCoroutineIterateU3Ed__7_tE0F893D2157620B17A8C27539FE0BED740CF218E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_asyncMethod_2() { return static_cast<int32_t>(offsetof(U3CRuntimeCoroutineIterateU3Ed__7_tE0F893D2157620B17A8C27539FE0BED740CF218E, ___asyncMethod_2)); }
	inline RuntimeObject* get_asyncMethod_2() const { return ___asyncMethod_2; }
	inline RuntimeObject** get_address_of_asyncMethod_2() { return &___asyncMethod_2; }
	inline void set_asyncMethod_2(RuntimeObject* value)
	{
		___asyncMethod_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asyncMethod_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CRuntimeCoroutineIterateU3Ed__7_tE0F893D2157620B17A8C27539FE0BED740CF218E, ___U3CU3E4__this_3)); }
	inline CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Lib.WitResponseNode>
struct Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE, ___list_0)); }
	inline List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * get_list_0() const { return ___list_0; }
	inline List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE, ___current_3)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_current_3() const { return ___current_3; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Facebook.WitAi.Lib.WitResponseNode>
struct KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE, ___value_1)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_value_1() const { return ___value_1; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// Facebook.WitAi.Lib.WitResponseArray
struct WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015  : public WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F
{
public:
	// System.Collections.Generic.List`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseArray::m_List
	List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * ___m_List_0;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015, ___m_List_0)); }
	inline List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_List_0), (void*)value);
	}
};


// Facebook.WitAi.Lib.WitResponseClass
struct WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55  : public WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseClass::m_Dict
	Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B * ___m_Dict_0;

public:
	inline static int32_t get_offset_of_m_Dict_0() { return static_cast<int32_t>(offsetof(WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55, ___m_Dict_0)); }
	inline Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B * get_m_Dict_0() const { return ___m_Dict_0; }
	inline Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B ** get_address_of_m_Dict_0() { return &___m_Dict_0; }
	inline void set_m_Dict_0(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B * value)
	{
		___m_Dict_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dict_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Facebook.WitAi.Lib.WitResponseNode>
struct Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4, ___dictionary_0)); }
	inline Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4, ___current_3)); }
	inline KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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


// Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13
struct U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::<>2__current
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___U3CU3E2__current_1;
	// System.Int32 Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::<>4__this
	WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * ___U3CU3E4__this_3;
	// System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::<>7__wrap1
	Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC, ___U3CU3E2__current_1)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC, ___U3CU3E4__this_3)); }
	inline WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___current_3), (void*)NULL);
		#endif
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18
struct U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Facebook.WitAi.Lib.WitResponseClass Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::<>4__this
	WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * ___U3CU3E4__this_2;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::<>7__wrap1
	Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C, ___U3CU3E4__this_2)); }
	inline WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C, ___U3CU3E7__wrap1_3)); }
	inline Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_3))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_3))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17
struct U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::<>2__current
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___U3CU3E2__current_1;
	// System.Int32 Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Facebook.WitAi.Lib.WitResponseClass Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::<>4__this
	WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::<>7__wrap1
	Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632, ___U3CU3E2__current_1)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632, ___U3CU3E4__this_3)); }
	inline WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Facebook.WitAi.WitService
struct WitService_t860537723698CF0607466342346F3B1FECA68DCB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Facebook.WitAi.Configuration.WitRequestOptions Facebook.WitAi.WitService::_currentRequestOptions
	WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * ____currentRequestOptions_4;
	// System.Single Facebook.WitAi.WitService::_lastMinVolumeLevelTime
	float ____lastMinVolumeLevelTime_5;
	// Facebook.WitAi.WitRequest Facebook.WitAi.WitService::_recordingRequest
	WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * ____recordingRequest_6;
	// System.Boolean Facebook.WitAi.WitService::_isSoundWakeActive
	bool ____isSoundWakeActive_7;
	// Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte> Facebook.WitAi.WitService::_lastSampleMarker
	Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A * ____lastSampleMarker_8;
	// System.Boolean Facebook.WitAi.WitService::_minKeepAliveWasHit
	bool ____minKeepAliveWasHit_9;
	// System.Boolean Facebook.WitAi.WitService::_isActive
	bool ____isActive_10;
	// System.Int64 Facebook.WitAi.WitService::_minSampleByteCount
	int64_t ____minSampleByteCount_11;
	// Facebook.WitAi.IVoiceEventProvider Facebook.WitAi.WitService::_voiceEventProvider
	RuntimeObject* ____voiceEventProvider_12;
	// Facebook.WitAi.IWitRuntimeConfigProvider Facebook.WitAi.WitService::_runtimeConfigProvider
	RuntimeObject* ____runtimeConfigProvider_13;
	// Facebook.WitAi.Interfaces.ITranscriptionProvider Facebook.WitAi.WitService::_activeTranscriptionProvider
	RuntimeObject* ____activeTranscriptionProvider_14;
	// UnityEngine.Coroutine Facebook.WitAi.WitService::_timeLimitCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____timeLimitCoroutine_15;
	// System.Boolean Facebook.WitAi.WitService::_receivedTranscription
	bool ____receivedTranscription_16;
	// System.Single Facebook.WitAi.WitService::_lastWordTime
	float ____lastWordTime_17;
	// System.Collections.Generic.HashSet`1<Facebook.WitAi.WitRequest> Facebook.WitAi.WitService::_transmitRequests
	HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * ____transmitRequests_18;
	// System.Collections.Generic.HashSet`1<Facebook.WitAi.WitRequest> Facebook.WitAi.WitService::_queuedRequests
	HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * ____queuedRequests_19;
	// UnityEngine.Coroutine Facebook.WitAi.WitService::_queueHandler
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____queueHandler_20;
	// Facebook.WitAi.Events.IWitByteDataReadyHandler[] Facebook.WitAi.WitService::_dataReadyHandlers
	IWitByteDataReadyHandlerU5BU5D_tDAF18FFFEDA7AD9375B6460D05A3F76B7B129180* ____dataReadyHandlers_21;
	// Facebook.WitAi.Events.IWitByteDataSentHandler[] Facebook.WitAi.WitService::_dataSentHandlers
	IWitByteDataSentHandlerU5BU5D_t50A06A7E11B774416F56D27DCF1E85671DA8D804* ____dataSentHandlers_22;
	// Facebook.WitAi.Interfaces.IDynamicEntitiesProvider[] Facebook.WitAi.WitService::_dynamicEntityProviders
	IDynamicEntitiesProviderU5BU5D_tDDBA52ABBE7FA2E95A314F6D72D3FB0FDFED2107* ____dynamicEntityProviders_23;

public:
	inline static int32_t get_offset_of__currentRequestOptions_4() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____currentRequestOptions_4)); }
	inline WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * get__currentRequestOptions_4() const { return ____currentRequestOptions_4; }
	inline WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F ** get_address_of__currentRequestOptions_4() { return &____currentRequestOptions_4; }
	inline void set__currentRequestOptions_4(WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * value)
	{
		____currentRequestOptions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentRequestOptions_4), (void*)value);
	}

	inline static int32_t get_offset_of__lastMinVolumeLevelTime_5() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____lastMinVolumeLevelTime_5)); }
	inline float get__lastMinVolumeLevelTime_5() const { return ____lastMinVolumeLevelTime_5; }
	inline float* get_address_of__lastMinVolumeLevelTime_5() { return &____lastMinVolumeLevelTime_5; }
	inline void set__lastMinVolumeLevelTime_5(float value)
	{
		____lastMinVolumeLevelTime_5 = value;
	}

	inline static int32_t get_offset_of__recordingRequest_6() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____recordingRequest_6)); }
	inline WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * get__recordingRequest_6() const { return ____recordingRequest_6; }
	inline WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 ** get_address_of__recordingRequest_6() { return &____recordingRequest_6; }
	inline void set__recordingRequest_6(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * value)
	{
		____recordingRequest_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recordingRequest_6), (void*)value);
	}

	inline static int32_t get_offset_of__isSoundWakeActive_7() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____isSoundWakeActive_7)); }
	inline bool get__isSoundWakeActive_7() const { return ____isSoundWakeActive_7; }
	inline bool* get_address_of__isSoundWakeActive_7() { return &____isSoundWakeActive_7; }
	inline void set__isSoundWakeActive_7(bool value)
	{
		____isSoundWakeActive_7 = value;
	}

	inline static int32_t get_offset_of__lastSampleMarker_8() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____lastSampleMarker_8)); }
	inline Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A * get__lastSampleMarker_8() const { return ____lastSampleMarker_8; }
	inline Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A ** get_address_of__lastSampleMarker_8() { return &____lastSampleMarker_8; }
	inline void set__lastSampleMarker_8(Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A * value)
	{
		____lastSampleMarker_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastSampleMarker_8), (void*)value);
	}

	inline static int32_t get_offset_of__minKeepAliveWasHit_9() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____minKeepAliveWasHit_9)); }
	inline bool get__minKeepAliveWasHit_9() const { return ____minKeepAliveWasHit_9; }
	inline bool* get_address_of__minKeepAliveWasHit_9() { return &____minKeepAliveWasHit_9; }
	inline void set__minKeepAliveWasHit_9(bool value)
	{
		____minKeepAliveWasHit_9 = value;
	}

	inline static int32_t get_offset_of__isActive_10() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____isActive_10)); }
	inline bool get__isActive_10() const { return ____isActive_10; }
	inline bool* get_address_of__isActive_10() { return &____isActive_10; }
	inline void set__isActive_10(bool value)
	{
		____isActive_10 = value;
	}

	inline static int32_t get_offset_of__minSampleByteCount_11() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____minSampleByteCount_11)); }
	inline int64_t get__minSampleByteCount_11() const { return ____minSampleByteCount_11; }
	inline int64_t* get_address_of__minSampleByteCount_11() { return &____minSampleByteCount_11; }
	inline void set__minSampleByteCount_11(int64_t value)
	{
		____minSampleByteCount_11 = value;
	}

	inline static int32_t get_offset_of__voiceEventProvider_12() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____voiceEventProvider_12)); }
	inline RuntimeObject* get__voiceEventProvider_12() const { return ____voiceEventProvider_12; }
	inline RuntimeObject** get_address_of__voiceEventProvider_12() { return &____voiceEventProvider_12; }
	inline void set__voiceEventProvider_12(RuntimeObject* value)
	{
		____voiceEventProvider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____voiceEventProvider_12), (void*)value);
	}

	inline static int32_t get_offset_of__runtimeConfigProvider_13() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____runtimeConfigProvider_13)); }
	inline RuntimeObject* get__runtimeConfigProvider_13() const { return ____runtimeConfigProvider_13; }
	inline RuntimeObject** get_address_of__runtimeConfigProvider_13() { return &____runtimeConfigProvider_13; }
	inline void set__runtimeConfigProvider_13(RuntimeObject* value)
	{
		____runtimeConfigProvider_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____runtimeConfigProvider_13), (void*)value);
	}

	inline static int32_t get_offset_of__activeTranscriptionProvider_14() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____activeTranscriptionProvider_14)); }
	inline RuntimeObject* get__activeTranscriptionProvider_14() const { return ____activeTranscriptionProvider_14; }
	inline RuntimeObject** get_address_of__activeTranscriptionProvider_14() { return &____activeTranscriptionProvider_14; }
	inline void set__activeTranscriptionProvider_14(RuntimeObject* value)
	{
		____activeTranscriptionProvider_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeTranscriptionProvider_14), (void*)value);
	}

	inline static int32_t get_offset_of__timeLimitCoroutine_15() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____timeLimitCoroutine_15)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__timeLimitCoroutine_15() const { return ____timeLimitCoroutine_15; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__timeLimitCoroutine_15() { return &____timeLimitCoroutine_15; }
	inline void set__timeLimitCoroutine_15(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____timeLimitCoroutine_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____timeLimitCoroutine_15), (void*)value);
	}

	inline static int32_t get_offset_of__receivedTranscription_16() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____receivedTranscription_16)); }
	inline bool get__receivedTranscription_16() const { return ____receivedTranscription_16; }
	inline bool* get_address_of__receivedTranscription_16() { return &____receivedTranscription_16; }
	inline void set__receivedTranscription_16(bool value)
	{
		____receivedTranscription_16 = value;
	}

	inline static int32_t get_offset_of__lastWordTime_17() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____lastWordTime_17)); }
	inline float get__lastWordTime_17() const { return ____lastWordTime_17; }
	inline float* get_address_of__lastWordTime_17() { return &____lastWordTime_17; }
	inline void set__lastWordTime_17(float value)
	{
		____lastWordTime_17 = value;
	}

	inline static int32_t get_offset_of__transmitRequests_18() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____transmitRequests_18)); }
	inline HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * get__transmitRequests_18() const { return ____transmitRequests_18; }
	inline HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC ** get_address_of__transmitRequests_18() { return &____transmitRequests_18; }
	inline void set__transmitRequests_18(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * value)
	{
		____transmitRequests_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transmitRequests_18), (void*)value);
	}

	inline static int32_t get_offset_of__queuedRequests_19() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____queuedRequests_19)); }
	inline HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * get__queuedRequests_19() const { return ____queuedRequests_19; }
	inline HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC ** get_address_of__queuedRequests_19() { return &____queuedRequests_19; }
	inline void set__queuedRequests_19(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * value)
	{
		____queuedRequests_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____queuedRequests_19), (void*)value);
	}

	inline static int32_t get_offset_of__queueHandler_20() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____queueHandler_20)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__queueHandler_20() const { return ____queueHandler_20; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__queueHandler_20() { return &____queueHandler_20; }
	inline void set__queueHandler_20(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____queueHandler_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____queueHandler_20), (void*)value);
	}

	inline static int32_t get_offset_of__dataReadyHandlers_21() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____dataReadyHandlers_21)); }
	inline IWitByteDataReadyHandlerU5BU5D_tDAF18FFFEDA7AD9375B6460D05A3F76B7B129180* get__dataReadyHandlers_21() const { return ____dataReadyHandlers_21; }
	inline IWitByteDataReadyHandlerU5BU5D_tDAF18FFFEDA7AD9375B6460D05A3F76B7B129180** get_address_of__dataReadyHandlers_21() { return &____dataReadyHandlers_21; }
	inline void set__dataReadyHandlers_21(IWitByteDataReadyHandlerU5BU5D_tDAF18FFFEDA7AD9375B6460D05A3F76B7B129180* value)
	{
		____dataReadyHandlers_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataReadyHandlers_21), (void*)value);
	}

	inline static int32_t get_offset_of__dataSentHandlers_22() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____dataSentHandlers_22)); }
	inline IWitByteDataSentHandlerU5BU5D_t50A06A7E11B774416F56D27DCF1E85671DA8D804* get__dataSentHandlers_22() const { return ____dataSentHandlers_22; }
	inline IWitByteDataSentHandlerU5BU5D_t50A06A7E11B774416F56D27DCF1E85671DA8D804** get_address_of__dataSentHandlers_22() { return &____dataSentHandlers_22; }
	inline void set__dataSentHandlers_22(IWitByteDataSentHandlerU5BU5D_t50A06A7E11B774416F56D27DCF1E85671DA8D804* value)
	{
		____dataSentHandlers_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSentHandlers_22), (void*)value);
	}

	inline static int32_t get_offset_of__dynamicEntityProviders_23() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____dynamicEntityProviders_23)); }
	inline IDynamicEntitiesProviderU5BU5D_tDDBA52ABBE7FA2E95A314F6D72D3FB0FDFED2107* get__dynamicEntityProviders_23() const { return ____dynamicEntityProviders_23; }
	inline IDynamicEntitiesProviderU5BU5D_tDDBA52ABBE7FA2E95A314F6D72D3FB0FDFED2107** get_address_of__dynamicEntityProviders_23() { return &____dynamicEntityProviders_23; }
	inline void set__dynamicEntityProviders_23(IDynamicEntitiesProviderU5BU5D_tDDBA52ABBE7FA2E95A314F6D72D3FB0FDFED2107* value)
	{
		____dynamicEntityProviders_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicEntityProviders_23), (void*)value);
	}
};


// Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_4;
	// UnityEngine.Coroutine Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::_runtimeCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____runtimeCoroutine_5;

public:
	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675, ___U3CIsRunningU3Ek__BackingField_4)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_4() const { return ___U3CIsRunningU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_4() { return &___U3CIsRunningU3Ek__BackingField_4; }
	inline void set_U3CIsRunningU3Ek__BackingField_4(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__runtimeCoroutine_5() { return static_cast<int32_t>(offsetof(CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675, ____runtimeCoroutine_5)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__runtimeCoroutine_5() const { return ____runtimeCoroutine_5; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__runtimeCoroutine_5() { return &____runtimeCoroutine_5; }
	inline void set__runtimeCoroutine_5(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____runtimeCoroutine_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____runtimeCoroutine_5), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_First_TisRuntimeObject_mFC89774BB9348B656E12C9D2C73495237A31A399_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13_U3CU3Em__Finally1_mE7537D5E9D76893675E683D68A3A84BB51AEF840 (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Facebook.WitAi.Lib.WitResponseNode>::GetEnumerator()
inline Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE  List_1_GetEnumerator_m6122040F54414AB6A4B0CFC3338E1BD602CF2457 (List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE  (*) (List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Lib.WitResponseNode>::get_Current()
inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * Enumerator_get_Current_m6C0415A47C5AF1C777C32CF8B65CEFCA2626DEE7_inline (Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * __this, const RuntimeMethod* method)
{
	return ((  WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * (*) (Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Lib.WitResponseNode>::MoveNext()
inline bool Enumerator_MoveNext_mD4749DB40FB468135C8EE322D67004EFC83CA797 (Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13_System_IDisposable_Dispose_m58A6DA9982776E1105CF6EAD536EF24E1A2A429B (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Lib.WitResponseNode>::Dispose()
inline void Enumerator_Dispose_m9EA9258A012DBCBC28E4D055694FABFE67AC12D4 (Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13__ctor_m26C53E7D92FFF9CF2107D32127F5A80F77D7F2D2 (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::System.Collections.Generic.IEnumerable<Facebook.WitAi.Lib.WitResponseNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_m4FB5EBF1039718A5CC8719972E07EA6D79E411A4 (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,Facebook.WitAi.Lib.WitResponseNode>::get_Value()
inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * KeyValuePair_2_get_Value_m33A7EAF1E41A4710D7CC399AC848A6F65627E99C_inline (KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE * __this, const RuntimeMethod* method)
{
	return ((  WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * (*) (KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean Facebook.WitAi.Lib.WitResponseNode::op_Equality(Facebook.WitAi.Lib.WitResponseNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseNode_op_Equality_m8CBEED47147C074BA26494FA79BE910107DC182E (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18_U3CU3Em__Finally1_mC1CDBA1E86F9CD16D2A538AC5FD840302B74686A (U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.Lib.WitResponseNode>::GetEnumerator()
inline Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  Dictionary_2_GetEnumerator_m10677EB2EE1949F744300CD30FCA7CD3C6C1E053 (Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  (*) (Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Facebook.WitAi.Lib.WitResponseNode>::get_Current()
inline KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  Enumerator_get_Current_m38A9E91443369F87FAA044FE976FF7601F8E8975_inline (Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  (*) (Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Facebook.WitAi.Lib.WitResponseNode>::MoveNext()
inline bool Enumerator_MoveNext_mB2B0EDE205F16235A4B8232D09E17663DEA41C5E (Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18_System_IDisposable_Dispose_mDAA57C2657D4D4BBC1ECA723F0E59A3F0AA5504E (U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Facebook.WitAi.Lib.WitResponseNode>::Dispose()
inline void Enumerator_Dispose_m96E070C8159309DEF2D500ECEF6D8746E93FA53E (Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Void Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17_U3CU3Em__Finally1_mF054CE126CC37E4B8CC938B8820506E90CB0DECD (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_m99A0F7D36B993AA3FB54203627839C7E51456897 (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17__ctor_m62B7DA6027D36CFDB5E0335FE8CBFF0B18923EF7 (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::System.Collections.Generic.IEnumerable<Facebook.WitAi.Lib.WitResponseNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_m0C771F1E5C0EEA7A5D7E8CD354F4910BEE333643 (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17__ctor_mCEAC81EF7E63226983D8CA71D3A18E390347A96D (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::System.Collections.Generic.IEnumerable<Facebook.WitAi.Lib.WitResponseNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_m10A241A389AB2DBABCA9BFCC455C7658F355E8A3 (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally2_m49B6D5F34AA921ADAA12B2EB51B2D3D9FA67E9B0 (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally1_mFF85E034D76A01A459C7E6DCB024E9209B95DE4E (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseNode::get_DeepChilds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitResponseNode_get_DeepChilds_mB9CCC1BAC46715F7CB089F7F486E3561807F4AA3 (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_System_IDisposable_Dispose_mBB2790BED727AAAC4A36E52CD311FA1A07DBB071 (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19__ctor_m1592F385AC0949E2F4CAA96808E0A4B9B6DE7C28 (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::System.Collections.Generic.IEnumerable<Facebook.WitAi.Lib.WitResponseNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_mE2E32DF281BCB8A1322C0025F649BA0B9CB8F4AB (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method);
// Facebook.WitAi.Configuration.WitRuntimeConfiguration Facebook.WitAi.WitService::get_RuntimeConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * WitService_get_RuntimeConfiguration_mB827ACB3886D063B202BDB1A6AEDF850B4E2EB18 (WitService_t860537723698CF0607466342346F3B1FECA68DCB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean Facebook.WitAi.WitService::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitService_get_IsRequestActive_m7DCDC5C172F24DC0E04F70B72A877EF6B228368F (WitService_t860537723698CF0607466342346F3B1FECA68DCB * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Facebook.WitAi.Events.VoiceEvents Facebook.WitAi.WitService::get_VoiceEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * WitService_get_VoiceEvents_m79574F0947BFED13FC4CB240E340164525F21AFA (WitService_t860537723698CF0607466342346F3B1FECA68DCB * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.WitService::DeactivateRequest(UnityEngine.Events.UnityEvent,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitService_DeactivateRequest_m4CE7B86FE8975381332413857B324CE05955E7A7 (WitService_t860537723698CF0607466342346F3B1FECA68DCB * __this, UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onComplete0, bool ___abort1, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<Facebook.WitAi.WitRequest>::get_Count()
inline int32_t HashSet_1_get_Count_mE31B0F89DB0BD81E83F184E982B2FEBAE7B91644_inline (HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC *, const RuntimeMethod*))HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline)(__this, method);
}
// !!0 System.Linq.Enumerable::First<Facebook.WitAi.WitRequest>(System.Collections.Generic.IEnumerable`1<!!0>)
inline WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * Enumerable_First_TisWitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_m85BED11F1D3008DD0F1B1826752A9FF02AF2C850 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mFC89774BB9348B656E12C9D2C73495237A31A399_gshared)(___source0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Facebook.WitAi.WitRequest>::Remove(!0)
inline bool HashSet_1_Remove_m04A4DDF0C01FEA999619DA4ECC7E50570B70B53E (HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * __this, WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC *, WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 *, const RuntimeMethod*))HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Facebook.WitAi.WitRequest>::Add(!0)
inline bool HashSet_1_Add_mD36B17D607A2E14AE400B8B0D0678AA9CEA2DFF5 (HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * __this, WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC *, WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Void Facebook.WitAi.WitRequest::Request()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRequest_Request_m25DBB180B8EB2486AFAD4D2DBD9E8434CA756C53 (WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::CoroutineComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutinePerformer_CoroutineComplete_m5264AE014748A7B8E1140332AEF09E7F7FEDB283 (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13__ctor_m26C53E7D92FFF9CF2107D32127F5A80F77D7F2D2 (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13_System_IDisposable_Dispose_m58A6DA9982776E1105CF6EAD536EF24E1A2A429B (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3Cget_ChildsU3Ed__13_U3CU3Em__Finally1_mE7537D5E9D76893675E683D68A3A84BB51AEF840(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildsU3Ed__13_MoveNext_m7853226F5C3A688F653CA058D786BBF5FFB15AA4 (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD4749DB40FB468135C8EE322D67004EFC83CA797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6C0415A47C5AF1C777C32CF8B65CEFCA2626DEE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6122040F54414AB6A4B0CFC3338E1BD602CF2457_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * V_2 = NULL;
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0059;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_008b;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (WitResponseNode N in m_List)
			WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * L_4 = V_2;
			NullCheck(L_4);
			List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * L_5 = L_4->get_m_List_0();
			NullCheck(L_5);
			Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE  L_6;
			L_6 = List_1_GetEnumerator_m6122040F54414AB6A4B0CFC3338E1BD602CF2457(L_5, /*hidden argument*/List_1_GetEnumerator_m6122040F54414AB6A4B0CFC3338E1BD602CF2457_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0061;
		}

IL_003b:
		{
			// foreach (WitResponseNode N in m_List)
			Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * L_7 = __this->get_address_of_U3CU3E7__wrap1_4();
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_8;
			L_8 = Enumerator_get_Current_m6C0415A47C5AF1C777C32CF8B65CEFCA2626DEE7_inline((Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE *)L_7, /*hidden argument*/Enumerator_get_Current_m6C0415A47C5AF1C777C32CF8B65CEFCA2626DEE7_RuntimeMethod_var);
			V_3 = L_8;
			// yield return N;
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_9 = V_3;
			__this->set_U3CU3E2__current_1(L_9);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_008b;
		}

IL_0059:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0061:
		{
			// foreach (WitResponseNode N in m_List)
			Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * L_10 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_11;
			L_11 = Enumerator_MoveNext_mD4749DB40FB468135C8EE322D67004EFC83CA797((Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE *)L_10, /*hidden argument*/Enumerator_MoveNext_mD4749DB40FB468135C8EE322D67004EFC83CA797_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_003b;
			}
		}

IL_006e:
		{
			U3Cget_ChildsU3Ed__13_U3CU3Em__Finally1_mE7537D5E9D76893675E683D68A3A84BB51AEF840(__this, /*hidden argument*/NULL);
			Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * L_12 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_12, sizeof(Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE ));
			// }
			V_0 = (bool)0;
			goto IL_008b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0084;
	}

FAULT_0084:
	{ // begin fault (depth: 1)
		U3Cget_ChildsU3Ed__13_System_IDisposable_Dispose_m58A6DA9982776E1105CF6EAD536EF24E1A2A429B(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(132)
	} // end fault
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13_U3CU3Em__Finally1_mE7537D5E9D76893675E683D68A3A84BB51AEF840 (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9EA9258A012DBCBC28E4D055694FABFE67AC12D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_m9EA9258A012DBCBC28E4D055694FABFE67AC12D4((Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE *)L_0, /*hidden argument*/Enumerator_Dispose_m9EA9258A012DBCBC28E4D055694FABFE67AC12D4_RuntimeMethod_var);
		return;
	}
}
// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::System.Collections.Generic.IEnumerator<Facebook.WitAi.Lib.WitResponseNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumeratorU3CFacebook_WitAi_Lib_WitResponseNodeU3E_get_Current_mCB79E8E62D327928558A00CF27ECFA66371FBB76 (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method)
{
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_Reset_m6F355B941A11C8C9F89D80EA1FDF9DABC80F64E0 (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_Reset_m6F355B941A11C8C9F89D80EA1FDF9DABC80F64E0_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_get_Current_m12609D5E1200617B4F4E06A244E177A616BB30CB (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method)
{
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::System.Collections.Generic.IEnumerable<Facebook.WitAi.Lib.WitResponseNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_m4FB5EBF1039718A5CC8719972E07EA6D79E411A4 (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * L_3 = (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC *)il2cpp_codegen_object_new(U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC_il2cpp_TypeInfo_var);
		U3Cget_ChildsU3Ed__13__ctor_m26C53E7D92FFF9CF2107D32127F5A80F77D7F2D2(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * L_4 = V_0;
		WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__13_System_Collections_IEnumerable_GetEnumerator_m045D035637145E4A6C9F11998D426AE67500C7DB (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_m4FB5EBF1039718A5CC8719972E07EA6D79E411A4(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void Facebook.WitAi.Lib.WitResponseClass/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mF311B9141E7A963BC72C3C84E5379054BB8E19E9 (U3CU3Ec__DisplayClass15_0_tFD1C9FF91A1538E15ED009962EBFC16BF2AA738D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Facebook.WitAi.Lib.WitResponseClass/<>c__DisplayClass15_0::<Remove>b__0(System.Collections.Generic.KeyValuePair`2<System.String,Facebook.WitAi.Lib.WitResponseNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass15_0_U3CRemoveU3Eb__0_mCAE819F57B899CC5ECC5541D00D4D74033A4B964 (U3CU3Ec__DisplayClass15_0_tFD1C9FF91A1538E15ED009962EBFC16BF2AA738D * __this, KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  ___k0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m33A7EAF1E41A4710D7CC399AC848A6F65627E99C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var item = m_Dict.Where(k => k.Value == aNode).First();
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0;
		L_0 = KeyValuePair_2_get_Value_m33A7EAF1E41A4710D7CC399AC848A6F65627E99C_inline((KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE *)(&___k0), /*hidden argument*/KeyValuePair_2_get_Value_m33A7EAF1E41A4710D7CC399AC848A6F65627E99C_RuntimeMethod_var);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_1 = __this->get_aNode_0();
		bool L_2;
		L_2 = WitResponseNode_op_Equality_m8CBEED47147C074BA26494FA79BE910107DC182E(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18__ctor_m77964991F5191F7307A8CDF617BD8F0EBA6F860D (U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18_System_IDisposable_Dispose_mDAA57C2657D4D4BBC1ECA723F0E59A3F0AA5504E (U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__18_U3CU3Em__Finally1_mC1CDBA1E86F9CD16D2A538AC5FD840302B74686A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__18_MoveNext_mAC5728BC08351CD9D77BEC016422345320A0CB93 (U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m10677EB2EE1949F744300CD30FCA7CD3C6C1E053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB2B0EDE205F16235A4B8232D09E17663DEA41C5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m38A9E91443369F87FAA044FE976FF7601F8E8975_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * V_2 = NULL;
	KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_005e;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_0090;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (KeyValuePair<string, WitResponseNode> N in m_Dict)
			WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * L_4 = V_2;
			NullCheck(L_4);
			Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B * L_5 = L_4->get_m_Dict_0();
			NullCheck(L_5);
			Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  L_6;
			L_6 = Dictionary_2_GetEnumerator_m10677EB2EE1949F744300CD30FCA7CD3C6C1E053(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_m10677EB2EE1949F744300CD30FCA7CD3C6C1E053_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0066;
		}

IL_003b:
		{
			// foreach (KeyValuePair<string, WitResponseNode> N in m_Dict)
			Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * L_7 = __this->get_address_of_U3CU3E7__wrap1_3();
			KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  L_8;
			L_8 = Enumerator_get_Current_m38A9E91443369F87FAA044FE976FF7601F8E8975_inline((Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 *)L_7, /*hidden argument*/Enumerator_get_Current_m38A9E91443369F87FAA044FE976FF7601F8E8975_RuntimeMethod_var);
			V_3 = L_8;
			// yield return N;
			KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  L_9 = V_3;
			KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  L_10 = L_9;
			RuntimeObject * L_11 = Box(KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE_il2cpp_TypeInfo_var, &L_10);
			__this->set_U3CU3E2__current_1(L_11);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0090;
		}

IL_005e:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0066:
		{
			// foreach (KeyValuePair<string, WitResponseNode> N in m_Dict)
			Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * L_12 = __this->get_address_of_U3CU3E7__wrap1_3();
			bool L_13;
			L_13 = Enumerator_MoveNext_mB2B0EDE205F16235A4B8232D09E17663DEA41C5E((Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 *)L_12, /*hidden argument*/Enumerator_MoveNext_mB2B0EDE205F16235A4B8232D09E17663DEA41C5E_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_003b;
			}
		}

IL_0073:
		{
			U3CGetEnumeratorU3Ed__18_U3CU3Em__Finally1_mC1CDBA1E86F9CD16D2A538AC5FD840302B74686A(__this, /*hidden argument*/NULL);
			Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * L_14 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_14, sizeof(Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 ));
			// }
			V_0 = (bool)0;
			goto IL_0090;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0089;
	}

FAULT_0089:
	{ // begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__18_System_IDisposable_Dispose_mDAA57C2657D4D4BBC1ECA723F0E59A3F0AA5504E(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(137)
	} // end fault
	IL2CPP_CLEANUP(137)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0090:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18_U3CU3Em__Finally1_mC1CDBA1E86F9CD16D2A538AC5FD840302B74686A (U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m96E070C8159309DEF2D500ECEF6D8746E93FA53E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * L_0 = __this->get_address_of_U3CU3E7__wrap1_3();
		Enumerator_Dispose_m96E070C8159309DEF2D500ECEF6D8746E93FA53E((Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 *)L_0, /*hidden argument*/Enumerator_Dispose_m96E070C8159309DEF2D500ECEF6D8746E93FA53E_RuntimeMethod_var);
		return;
	}
}
// System.Object Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5FD1DB50FB449A1BBA8DBAE27EE76887847578DD (U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_Reset_mD822AD4F252921AD7B65BAFFD1C3304E8AE3F340 (U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_Reset_mD822AD4F252921AD7B65BAFFD1C3304E8AE3F340_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_get_Current_m73C16EB8E0DA8FC6A0A68FE9C3A5EF436D1A1D6A (U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17__ctor_m62B7DA6027D36CFDB5E0335FE8CBFF0B18923EF7 (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_m99A0F7D36B993AA3FB54203627839C7E51456897 (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3Cget_ChildsU3Ed__17_U3CU3Em__Finally1_mF054CE126CC37E4B8CC938B8820506E90CB0DECD(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildsU3Ed__17_MoveNext_m9CE2336D74A38FFA524D8D9C14CA3E2324545D76 (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m10677EB2EE1949F744300CD30FCA7CD3C6C1E053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB2B0EDE205F16235A4B8232D09E17663DEA41C5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m38A9E91443369F87FAA044FE976FF7601F8E8975_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m33A7EAF1E41A4710D7CC399AC848A6F65627E99C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * V_2 = NULL;
	KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_005f;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_0091;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (KeyValuePair<string, WitResponseNode> N in m_Dict)
			WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * L_4 = V_2;
			NullCheck(L_4);
			Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B * L_5 = L_4->get_m_Dict_0();
			NullCheck(L_5);
			Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  L_6;
			L_6 = Dictionary_2_GetEnumerator_m10677EB2EE1949F744300CD30FCA7CD3C6C1E053(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_m10677EB2EE1949F744300CD30FCA7CD3C6C1E053_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0067;
		}

IL_003b:
		{
			// foreach (KeyValuePair<string, WitResponseNode> N in m_Dict)
			Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * L_7 = __this->get_address_of_U3CU3E7__wrap1_4();
			KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  L_8;
			L_8 = Enumerator_get_Current_m38A9E91443369F87FAA044FE976FF7601F8E8975_inline((Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 *)L_7, /*hidden argument*/Enumerator_get_Current_m38A9E91443369F87FAA044FE976FF7601F8E8975_RuntimeMethod_var);
			V_3 = L_8;
			// yield return N.Value;
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_9;
			L_9 = KeyValuePair_2_get_Value_m33A7EAF1E41A4710D7CC399AC848A6F65627E99C_inline((KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m33A7EAF1E41A4710D7CC399AC848A6F65627E99C_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_9);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0091;
		}

IL_005f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0067:
		{
			// foreach (KeyValuePair<string, WitResponseNode> N in m_Dict)
			Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * L_10 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_11;
			L_11 = Enumerator_MoveNext_mB2B0EDE205F16235A4B8232D09E17663DEA41C5E((Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 *)L_10, /*hidden argument*/Enumerator_MoveNext_mB2B0EDE205F16235A4B8232D09E17663DEA41C5E_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_003b;
			}
		}

IL_0074:
		{
			U3Cget_ChildsU3Ed__17_U3CU3Em__Finally1_mF054CE126CC37E4B8CC938B8820506E90CB0DECD(__this, /*hidden argument*/NULL);
			Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * L_12 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 ));
			// }
			V_0 = (bool)0;
			goto IL_0091;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_008a;
	}

FAULT_008a:
	{ // begin fault (depth: 1)
		U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_m99A0F7D36B993AA3FB54203627839C7E51456897(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(138)
	} // end fault
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0091:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17_U3CU3Em__Finally1_mF054CE126CC37E4B8CC938B8820506E90CB0DECD (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m96E070C8159309DEF2D500ECEF6D8746E93FA53E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_m96E070C8159309DEF2D500ECEF6D8746E93FA53E((Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 *)L_0, /*hidden argument*/Enumerator_Dispose_m96E070C8159309DEF2D500ECEF6D8746E93FA53E_RuntimeMethod_var);
		return;
	}
}
// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::System.Collections.Generic.IEnumerator<Facebook.WitAi.Lib.WitResponseNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumeratorU3CFacebook_WitAi_Lib_WitResponseNodeU3E_get_Current_m2A8794A1E9C1BDD868DDDDC05769C00867382191 (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method)
{
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_mB7D3280C87D90DEA758EC29D5944688A10116DBB (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_mB7D3280C87D90DEA758EC29D5944688A10116DBB_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_get_Current_m7A532B989B74A6005B53D3CFD00D2E208F45F32D (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method)
{
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::System.Collections.Generic.IEnumerable<Facebook.WitAi.Lib.WitResponseNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_m0C771F1E5C0EEA7A5D7E8CD354F4910BEE333643 (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * L_3 = (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 *)il2cpp_codegen_object_new(U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632_il2cpp_TypeInfo_var);
		U3Cget_ChildsU3Ed__17__ctor_m62B7DA6027D36CFDB5E0335FE8CBFF0B18923EF7(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * L_4 = V_0;
		WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__17_System_Collections_IEnumerable_GetEnumerator_m5BF1C9E933B9E3C0937D4E0CDCB3F0675E34094C (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_m0C771F1E5C0EEA7A5D7E8CD354F4910BEE333643(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17__ctor_mCEAC81EF7E63226983D8CA71D3A18E390347A96D (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_m6BB0F941BA833F605AE134BBAEE1686CCC3DAED9 (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildsU3Ed__17_MoveNext_m942458CCEE96AC408D2CBC846840346FF1E52E75 (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// get { yield break; }
		return (bool)0;
	}
}
// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::System.Collections.Generic.IEnumerator<Facebook.WitAi.Lib.WitResponseNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumeratorU3CFacebook_WitAi_Lib_WitResponseNodeU3E_get_Current_mE4AFE5026872F3DEBA000FA9F1D4ACAF46B62228 (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, const RuntimeMethod* method)
{
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_m90DC6E2B2F6665945CF3B7F0B4A0C578CFDFE507 (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_m90DC6E2B2F6665945CF3B7F0B4A0C578CFDFE507_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_get_Current_m1D975A65E5CF89770F93FD8775E36BDED7929B23 (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, const RuntimeMethod* method)
{
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::System.Collections.Generic.IEnumerable<Facebook.WitAi.Lib.WitResponseNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_m10A241A389AB2DBABCA9BFCC455C7658F355E8A3 (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * L_3 = (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE *)il2cpp_codegen_object_new(U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE_il2cpp_TypeInfo_var);
		U3Cget_ChildsU3Ed__17__ctor_mCEAC81EF7E63226983D8CA71D3A18E390347A96D(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__17_System_Collections_IEnumerable_GetEnumerator_m3A14AC3112023AED69A66929A2D4FAA0C2482C54 (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_m10A241A389AB2DBABCA9BFCC455C7658F355E8A3(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19__ctor_m1592F385AC0949E2F4CAA96808E0A4B9B6DE7C28 (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_System_IDisposable_Dispose_mBB2790BED727AAAC4A36E52CD311FA1A07DBB071 (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)1)))
			{
				goto IL_001e;
			}
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0028);
		}

IL_001e:
		{
		}

IL_001f:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0021;
		}

FINALLY_0021:
		{ // begin finally (depth: 2)
			U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally2_m49B6D5F34AA921ADAA12B2EB51B2D3D9FA67E9B0(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(33)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(33)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x2F, FINALLY_0028);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally1_mFF85E034D76A01A459C7E6DCB024E9209B95DE4E(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_DeepChildsU3Ed__19_MoveNext_m1FFE91056E778838EC2911B5BEE4EB658F4FBED8 (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t664AF55B30D40ED13AC2A4F7EC61037AD36405D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tCD28F113D39C58FA892063CF522C739FA02AB8FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * V_2 = NULL;
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * V_3 = NULL;
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0085;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_00cc;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var C in Childs)
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(16 /* System.Collections.Generic.IEnumerable`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseNode::get_Childs() */, L_4);
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Facebook.WitAi.Lib.WitResponseNode>::GetEnumerator() */, IEnumerable_1_t664AF55B30D40ED13AC2A4F7EC61037AD36405D5_il2cpp_TypeInfo_var, L_5);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00a7;
		}

IL_003e:
		{
			// foreach (var C in Childs)
			RuntimeObject* L_7 = __this->get_U3CU3E7__wrap1_4();
			NullCheck(L_7);
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_8;
			L_8 = InterfaceFuncInvoker0< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode>::get_Current() */, IEnumerator_1_tCD28F113D39C58FA892063CF522C739FA02AB8FD_il2cpp_TypeInfo_var, L_7);
			V_3 = L_8;
			// foreach (var D in C.DeepChilds)
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_9 = V_3;
			NullCheck(L_9);
			RuntimeObject* L_10;
			L_10 = WitResponseNode_get_DeepChilds_mB9CCC1BAC46715F7CB089F7F486E3561807F4AA3(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Facebook.WitAi.Lib.WitResponseNode>::GetEnumerator() */, IEnumerable_1_t664AF55B30D40ED13AC2A4F7EC61037AD36405D5_il2cpp_TypeInfo_var, L_10);
			__this->set_U3CU3E7__wrap2_5(L_11);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_008d;
		}

IL_0065:
		{
			// foreach (var D in C.DeepChilds)
			RuntimeObject* L_12 = __this->get_U3CU3E7__wrap2_5();
			NullCheck(L_12);
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_13;
			L_13 = InterfaceFuncInvoker0< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode>::get_Current() */, IEnumerator_1_tCD28F113D39C58FA892063CF522C739FA02AB8FD_il2cpp_TypeInfo_var, L_12);
			V_4 = L_13;
			// yield return D;
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_14 = V_4;
			__this->set_U3CU3E2__current_1(L_14);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00cc;
		}

IL_0085:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_008d:
		{
			// foreach (var D in C.DeepChilds)
			RuntimeObject* L_15 = __this->get_U3CU3E7__wrap2_5();
			NullCheck(L_15);
			bool L_16;
			L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0065;
			}
		}

IL_009a:
		{
			U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally2_m49B6D5F34AA921ADAA12B2EB51B2D3D9FA67E9B0(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_5((RuntimeObject*)NULL);
		}

IL_00a7:
		{
			// foreach (var C in Childs)
			RuntimeObject* L_17 = __this->get_U3CU3E7__wrap1_4();
			NullCheck(L_17);
			bool L_18;
			L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_003e;
			}
		}

IL_00b4:
		{
			U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally1_mFF85E034D76A01A459C7E6DCB024E9209B95DE4E(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_4((RuntimeObject*)NULL);
			// }
			V_0 = (bool)0;
			goto IL_00cc;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00c5;
	}

FAULT_00c5:
	{ // begin fault (depth: 1)
		U3Cget_DeepChildsU3Ed__19_System_IDisposable_Dispose_mBB2790BED727AAAC4A36E52CD311FA1A07DBB071(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(197)
	} // end fault
	IL2CPP_CLEANUP(197)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00cc:
	{
		bool L_19 = V_0;
		return L_19;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally1_mFF85E034D76A01A459C7E6DCB024E9209B95DE4E (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally2_m49B6D5F34AA921ADAA12B2EB51B2D3D9FA67E9B0 (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap2_5();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap2_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::System.Collections.Generic.IEnumerator<Facebook.WitAi.Lib.WitResponseNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumeratorU3CFacebook_WitAi_Lib_WitResponseNodeU3E_get_Current_mF56DAEDAF2B39D7C8E0CAE7AF57495AC74FE9C2C (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method)
{
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_Reset_m4532B1D8A9A8015578CEE29790100608FCC01933 (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_Reset_m4532B1D8A9A8015578CEE29790100608FCC01933_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_get_Current_mF5E2731DDA765FA2F2730FFFF68E28467CD6BBE3 (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method)
{
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::System.Collections.Generic.IEnumerable<Facebook.WitAi.Lib.WitResponseNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_mE2E32DF281BCB8A1322C0025F649BA0B9CB8F4AB (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * L_3 = (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 *)il2cpp_codegen_object_new(U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878_il2cpp_TypeInfo_var);
		U3Cget_DeepChildsU3Ed__19__ctor_m1592F385AC0949E2F4CAA96808E0A4B9B6DE7C28(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * L_4 = V_0;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerable_GetEnumerator_m4E58E75818945A988C004FAF760E9EC5778CA6EC (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_mE2E32DF281BCB8A1322C0025F649BA0B9CB8F4AB(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateDueToTimeLimitU3Ed__62__ctor_m0284F5629801DAC8E0068CF5B5EE7555FDA9860D (U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateDueToTimeLimitU3Ed__62_System_IDisposable_Dispose_mE76AEB9E44EC3DDEFAFDCC6F4994461F8B2C60DD (U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDeactivateDueToTimeLimitU3Ed__62_MoveNext_m3F12BDEBAB1AC67E6DC305B7471E6BC80261B73B (U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6CDEB7B5373DAB5ECC8942A7DC008C2E60F0AFA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WitService_t860537723698CF0607466342346F3B1FECA68DCB * V_1 = NULL;
	VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * G_B7_0 = NULL;
	WitService_t860537723698CF0607466342346F3B1FECA68DCB * G_B7_1 = NULL;
	VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * G_B6_0 = NULL;
	WitService_t860537723698CF0607466342346F3B1FECA68DCB * G_B6_1 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B8_0 = NULL;
	WitService_t860537723698CF0607466342346F3B1FECA68DCB * G_B8_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(RuntimeConfiguration.maxRecordingTime);
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_4 = V_1;
		NullCheck(L_4);
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_5;
		L_5 = WitService_get_RuntimeConfiguration_mB827ACB3886D063B202BDB1A6AEDF850B4E2EB18(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		float L_6 = L_5->get_maxRecordingTime_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (IsRequestActive)
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = WitService_get_IsRequestActive_m7DCDC5C172F24DC0E04F70B72A877EF6B228368F(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		// Debug.Log($"Deactivated input due to timeout.\nMax Record Time: {RuntimeConfiguration.maxRecordingTime}");
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_10 = V_1;
		NullCheck(L_10);
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_11;
		L_11 = WitService_get_RuntimeConfiguration_mB827ACB3886D063B202BDB1A6AEDF850B4E2EB18(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		float L_12 = L_11->get_maxRecordingTime_4();
		float L_13 = L_12;
		RuntimeObject * L_14 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralF6CDEB7B5373DAB5ECC8942A7DC008C2E60F0AFA, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_15, /*hidden argument*/NULL);
		// DeactivateRequest(VoiceEvents?.OnStoppedListeningDueToTimeout, false);
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_16 = V_1;
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_17 = V_1;
		NullCheck(L_17);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_18;
		L_18 = WitService_get_VoiceEvents_m79574F0947BFED13FC4CB240E340164525F21AFA(L_17, /*hidden argument*/NULL);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_19 = L_18;
		G_B6_0 = L_19;
		G_B6_1 = L_16;
		if (L_19)
		{
			G_B7_0 = L_19;
			G_B7_1 = L_16;
			goto IL_0079;
		}
	}
	{
		G_B8_0 = ((UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)(NULL));
		G_B8_1 = G_B6_1;
		goto IL_007e;
	}

IL_0079:
	{
		NullCheck(G_B7_0);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_20 = G_B7_0->get_OnStoppedListeningDueToTimeout_10();
		G_B8_0 = L_20;
		G_B8_1 = G_B7_1;
	}

IL_007e:
	{
		NullCheck(G_B8_1);
		WitService_DeactivateRequest_m4CE7B86FE8975381332413857B324CE05955E7A7(G_B8_1, G_B8_0, (bool)0, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// }
		return (bool)0;
	}
}
// System.Object Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDeactivateDueToTimeLimitU3Ed__62_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5474D1EB0919F0971A476ADBB19070BB0B0E57A7 (U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateDueToTimeLimitU3Ed__62_System_Collections_IEnumerator_Reset_m04D0E4F24C7FD5CA15F6F711FA9420842AAED2D1 (U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDeactivateDueToTimeLimitU3Ed__62_System_Collections_IEnumerator_Reset_m04D0E4F24C7FD5CA15F6F711FA9420842AAED2D1_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDeactivateDueToTimeLimitU3Ed__62_System_Collections_IEnumerator_get_Current_mEE18144E7EDB55983DF7D08F51BC4B90D499B185 (U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Facebook.WitAi.WitService/<PerformDequeue>d__70::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformDequeueU3Ed__70__ctor_mF636EC1943D0E83071594B5E8D6EE2ABDF77862B (U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.WitAi.WitService/<PerformDequeue>d__70::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformDequeueU3Ed__70_System_IDisposable_Dispose_m7823E075DDE49944B1A3AA9A67FCC35B2185AF76 (U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.WitService/<PerformDequeue>d__70::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPerformDequeueU3Ed__70_MoveNext_mE6F3FC264767166E0CD953272A387F584C60CD5C (U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisWitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_m85BED11F1D3008DD0F1B1826752A9FF02AF2C850_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mD36B17D607A2E14AE400B8B0D0678AA9CEA2DFF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m04A4DDF0C01FEA999619DA4ECC7E50570B70B53E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_mE31B0F89DB0BD81E83F184E982B2FEBAE7B91644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WitService_t860537723698CF0607466342346F3B1FECA68DCB * V_1 = NULL;
	WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_007f;
	}

IL_0020:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0034:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (_transmitRequests.Count < RuntimeConfiguration.maxConcurrentRequests)
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_5 = V_1;
		NullCheck(L_5);
		HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * L_6 = L_5->get__transmitRequests_18();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = HashSet_1_get_Count_mE31B0F89DB0BD81E83F184E982B2FEBAE7B91644_inline(L_6, /*hidden argument*/HashSet_1_get_Count_mE31B0F89DB0BD81E83F184E982B2FEBAE7B91644_RuntimeMethod_var);
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_8 = V_1;
		NullCheck(L_8);
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_9;
		L_9 = WitService_get_RuntimeConfiguration_mB827ACB3886D063B202BDB1A6AEDF850B4E2EB18(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = L_9->get_maxConcurrentRequests_8();
		if ((((int32_t)L_7) >= ((int32_t)L_10)))
		{
			goto IL_007f;
		}
	}
	{
		// WitRequest request = _queuedRequests.First();
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_11 = V_1;
		NullCheck(L_11);
		HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * L_12 = L_11->get__queuedRequests_19();
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_13;
		L_13 = Enumerable_First_TisWitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_m85BED11F1D3008DD0F1B1826752A9FF02AF2C850(L_12, /*hidden argument*/Enumerable_First_TisWitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_m85BED11F1D3008DD0F1B1826752A9FF02AF2C850_RuntimeMethod_var);
		V_2 = L_13;
		// _queuedRequests.Remove(request);
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_14 = V_1;
		NullCheck(L_14);
		HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * L_15 = L_14->get__queuedRequests_19();
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_16 = V_2;
		NullCheck(L_15);
		bool L_17;
		L_17 = HashSet_1_Remove_m04A4DDF0C01FEA999619DA4ECC7E50570B70B53E(L_15, L_16, /*hidden argument*/HashSet_1_Remove_m04A4DDF0C01FEA999619DA4ECC7E50570B70B53E_RuntimeMethod_var);
		// _transmitRequests.Add(request);
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_18 = V_1;
		NullCheck(L_18);
		HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * L_19 = L_18->get__transmitRequests_18();
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_20 = V_2;
		NullCheck(L_19);
		bool L_21;
		L_21 = HashSet_1_Add_mD36B17D607A2E14AE400B8B0D0678AA9CEA2DFF5(L_19, L_20, /*hidden argument*/HashSet_1_Add_mD36B17D607A2E14AE400B8B0D0678AA9CEA2DFF5_RuntimeMethod_var);
		// request.Request();
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_22 = V_2;
		NullCheck(L_22);
		WitRequest_Request_m25DBB180B8EB2486AFAD4D2DBD9E8434CA756C53(L_22, /*hidden argument*/NULL);
	}

IL_007f:
	{
		// while (_queuedRequests.Count > 0)
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_23 = V_1;
		NullCheck(L_23);
		HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * L_24 = L_23->get__queuedRequests_19();
		NullCheck(L_24);
		int32_t L_25;
		L_25 = HashSet_1_get_Count_mE31B0F89DB0BD81E83F184E982B2FEBAE7B91644_inline(L_24, /*hidden argument*/HashSet_1_get_Count_mE31B0F89DB0BD81E83F184E982B2FEBAE7B91644_RuntimeMethod_var);
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		// _queueHandler = null;
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_26 = V_1;
		NullCheck(L_26);
		L_26->set__queueHandler_20((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object Facebook.WitAi.WitService/<PerformDequeue>d__70::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPerformDequeueU3Ed__70_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAA5310810280BE9CC4F56E4A7B23C10A6ADE1DE9 (U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.WitService/<PerformDequeue>d__70::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformDequeueU3Ed__70_System_Collections_IEnumerator_Reset_mD4766C852E5FADEB8B0C73421974CB35363AC5FF (U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPerformDequeueU3Ed__70_System_Collections_IEnumerator_Reset_mD4766C852E5FADEB8B0C73421974CB35363AC5FF_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.WitService/<PerformDequeue>d__70::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPerformDequeueU3Ed__70_System_Collections_IEnumerator_get_Current_mE4F8800E547195DBDC9A3371579D4BCA04853F7A (U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<RuntimeCoroutineIterate>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRuntimeCoroutineIterateU3Ed__7__ctor_m18E4406E7005CA6ABE1306CB7DCD69A239536559 (U3CRuntimeCoroutineIterateU3Ed__7_tE0F893D2157620B17A8C27539FE0BED740CF218E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<RuntimeCoroutineIterate>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRuntimeCoroutineIterateU3Ed__7_System_IDisposable_Dispose_m41B3D88C12FC8A00D6D863C726023053843C3C4A (U3CRuntimeCoroutineIterateU3Ed__7_tE0F893D2157620B17A8C27539FE0BED740CF218E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<RuntimeCoroutineIterate>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRuntimeCoroutineIterateU3Ed__7_MoveNext_mD3DF36DD7E00CFF153B4DC46F4C6E77B4CFC429D (U3CRuntimeCoroutineIterateU3Ed__7_tE0F893D2157620B17A8C27539FE0BED740CF218E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0033;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return asyncMethod;
		RuntimeObject* L_4 = __this->get_asyncMethod_2();
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0033:
	{
		__this->set_U3CU3E1__state_0((-1));
		// CoroutineComplete();
		CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * L_5 = V_1;
		NullCheck(L_5);
		CoroutinePerformer_CoroutineComplete_m5264AE014748A7B8E1140332AEF09E7F7FEDB283(L_5, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<RuntimeCoroutineIterate>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRuntimeCoroutineIterateU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFFFE7170D95D0B014B5BE644CF20CB4DDCC3A990 (U3CRuntimeCoroutineIterateU3Ed__7_tE0F893D2157620B17A8C27539FE0BED740CF218E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<RuntimeCoroutineIterate>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRuntimeCoroutineIterateU3Ed__7_System_Collections_IEnumerator_Reset_m2258BC9CBED9FA053178F6D8BD75548BAA595BD4 (U3CRuntimeCoroutineIterateU3Ed__7_tE0F893D2157620B17A8C27539FE0BED740CF218E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRuntimeCoroutineIterateU3Ed__7_System_Collections_IEnumerator_Reset_m2258BC9CBED9FA053178F6D8BD75548BAA595BD4_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<RuntimeCoroutineIterate>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRuntimeCoroutineIterateU3Ed__7_System_Collections_IEnumerator_get_Current_m3872C3FFC243FCA249CEFDE048E585F9A3820958 (U3CRuntimeCoroutineIterateU3Ed__7_tE0F893D2157620B17A8C27539FE0BED740CF218E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_9();
		return (int32_t)L_0;
	}
}
