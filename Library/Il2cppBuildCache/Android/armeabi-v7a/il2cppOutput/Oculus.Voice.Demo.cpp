#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`1<Facebook.WitAi.WitRequest>
struct Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]>
struct ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE;
// System.Func`1<System.String>
struct Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647;
// UnityEngine.Events.UnityAction`1<Facebook.WitAi.WitRequest>
struct UnityAction_1_t2E47E8DB66CA879A9E47B3A087453AC8F7C32734;
// UnityEngine.Events.UnityAction`1<Facebook.WitAi.Lib.WitResponseNode>
struct UnityAction_1_tB7A7CC3781E21429950CD118D054C59A4EB6C001;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD;
// UnityEngine.Events.UnityAction`2<System.String,System.String>
struct UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Facebook.WitAi.WitRequest/QueryParam[]
struct QueryParamU5BU5D_t599632D16DA1C62459C16B3C1A9206C89C61D61B;
// Oculus.Voice.AppVoiceExperience
struct AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// Facebook.WitAi.Data.AudioEncoding
struct AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516;
// Oculus.Voice.Demo.ButtonEventWatcher
struct ButtonEventWatcher_t9C89DF1FEB93786FA968A3E0AF58652813C862DE;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// Oculus.Voice.Demo.UIShapesDemo.ColorChanger
struct ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// System.Net.HttpWebResponse
struct HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Oculus.Voice.Interfaces.IPlatformVoiceService
struct IPlatformVoiceService_tFC1D07648D3588DD6E8E03B3F1FB1CD692E529BE;
// Facebook.WitAi.IRequest
struct IRequest_t24B46254E38326238D6A127740FA8CCB413083A7;
// Facebook.WitAi.IVoiceService
struct IVoiceService_t6417B0391F8C4EA9BE9FA682C143DCA93AC9B930;
// Oculus.Voice.Demo.UIShapesDemo.Instructions
struct Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5;
// Oculus.Voice.Demo.InteractionHandler
struct InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Oculus.Voice.Demo.UIShapesDemo.ParallelTranscriptHandler
struct ParallelTranscriptHandler_t1F9B8272B2E9654606D4231397320487075D7FAC;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Oculus.Voice.Demo.BuiltInDemo.TimerController
struct TimerController_t3035005099318E93DA2D8388A795CD05B604417D;
// Oculus.Voice.Demo.BuiltInDemo.TimerDisplay
struct TimerDisplay_t57B43DA79696BE27F3049ACEF3BAF716198EE7CD;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// Facebook.WitAi.Events.VoiceEvents
struct VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D;
// Facebook.WitAi.VoiceService
struct VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
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
// Facebook.WitAi.Events.WitResponseEvent
struct WitResponseEvent_tB6FF10625816530C0B3B946E94F9701FF0FAC6B4;
// Facebook.WitAi.Lib.WitResponseNode
struct WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F;
// Facebook.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24;
// Facebook.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Facebook.WitAi.WitRequest/OnCustomizeUriEvent
struct OnCustomizeUriEvent_t9D13E53AB8681A345A39DAA3B800A45F146199FF;
// Facebook.WitAi.WitRequest/OnProvideCustomHeadersEvent
struct OnProvideCustomHeadersEvent_tFB4F29CECA9500A91331B43CEBADB0F51DDEC4D0;
// Facebook.WitAi.WitRequest/PreSendRequestDelegate
struct PreSendRequestDelegate_t59C335BC80A012FB63121965FD64BB1A8F937955;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t2E47E8DB66CA879A9E47B3A087453AC8F7C32734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tB7A7CC3781E21429950CD118D054C59A4EB6C001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06055A31D913616225C8AA9808676FAD9AA4549A;
IL2CPP_EXTERN_C String_t* _stringLiteral0A5D08C7E98DA121F009B7BFC331E06EE804C90A;
IL2CPP_EXTERN_C String_t* _stringLiteral11B7DBC79AE1731C98022861F51963665A1692FF;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2E9474EF9AE32EDB50A68D4F59F03387298BFC73;
IL2CPP_EXTERN_C String_t* _stringLiteral34073A77D1FC0099E5D4E1AA07A1A3995BF30CF5;
IL2CPP_EXTERN_C String_t* _stringLiteral377C585B1B1DFB2354530C907FF3AF34F921983D;
IL2CPP_EXTERN_C String_t* _stringLiteral39CCECF27122D10050A5606AD517A96F5CCF55CA;
IL2CPP_EXTERN_C String_t* _stringLiteral3DFAD45D6A8DA43B5B1B588751F66ED962320CBC;
IL2CPP_EXTERN_C String_t* _stringLiteral3EF40B7DDA545BF6CE2B27BE7ECD6F8FB7F7F147;
IL2CPP_EXTERN_C String_t* _stringLiteral41EC8CF96484907F34E81AEF7F803DDBBE6FC97F;
IL2CPP_EXTERN_C String_t* _stringLiteral4E3F3CE7F088199C5A9ADB690290F91F45814107;
IL2CPP_EXTERN_C String_t* _stringLiteral4EF566C65746AD4D5BA1993FC6401B021FFA82A7;
IL2CPP_EXTERN_C String_t* _stringLiteral50FD7CB5C781AA1CB1598D172D99D573C3F2BB9F;
IL2CPP_EXTERN_C String_t* _stringLiteral560ED8D4B879A92BD23CB10540270C39C3E19D78;
IL2CPP_EXTERN_C String_t* _stringLiteral593C48B5B64125B2A87743E68909883CFDF40C2A;
IL2CPP_EXTERN_C String_t* _stringLiteral674D566FF6101DD0EF36AC986DEF66156B7E9A54;
IL2CPP_EXTERN_C String_t* _stringLiteral6C2779828DB4F6FD0BAFA174EC8935FB45601490;
IL2CPP_EXTERN_C String_t* _stringLiteral719FCF042A08D7D4229795007BD69A9107EE8F6A;
IL2CPP_EXTERN_C String_t* _stringLiteral7FDD57A554F4937B1372DCDFBB149567C0704967;
IL2CPP_EXTERN_C String_t* _stringLiteral84D00B228D10C715DA89DB12080F9DA6C37464B3;
IL2CPP_EXTERN_C String_t* _stringLiteral8682956BC4320075709B4B2396B4F890B21B525E;
IL2CPP_EXTERN_C String_t* _stringLiteral900D12FD6EE1407168379DF0B561E5206790E8AF;
IL2CPP_EXTERN_C String_t* _stringLiteral982EB241688495C1AF6152F618833411DB4F9B35;
IL2CPP_EXTERN_C String_t* _stringLiteral984058CED8B3C72D22A95708F196F8A38804B395;
IL2CPP_EXTERN_C String_t* _stringLiteral9D6B66BF93AFC12DE5805D06BA0ABBD6C3659968;
IL2CPP_EXTERN_C String_t* _stringLiteralA4249AEA5B1AE9E78829F6D9A0EFE24DE7967450;
IL2CPP_EXTERN_C String_t* _stringLiteralA83B8EF1A0DD0928ED5318216A030FC69A13643E;
IL2CPP_EXTERN_C String_t* _stringLiteralB46971E487185F55C44F40E1807F8CFF6C46F543;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2;
IL2CPP_EXTERN_C String_t* _stringLiteralCC2A5334237FF8576DD07245EB919757BF72CBA9;
IL2CPP_EXTERN_C String_t* _stringLiteralD2A5212C71D031E67C453835AC07A6181980EF40;
IL2CPP_EXTERN_C String_t* _stringLiteralD7D1658DF3541A4A8F4FDBB6BD782A1F6BB2636D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D;
IL2CPP_EXTERN_C String_t* _stringLiteralE84F498776F6C20BBE955ABF1908A5D218FD8026;
IL2CPP_EXTERN_C String_t* _stringLiteralF3AED789946AED0395215D1DE21BCD5437046CAE;
IL2CPP_EXTERN_C String_t* _stringLiteralFC9AEAA9B8ED2A1EF2F08E10DE610AA75B1AC318;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionHandler_OnListenForcedStop_m715C1B7C1028750D6AD4562BC5AF16EAAF2C0950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionHandler_OnListenStart_m3E8855565042818E914FAA276376CF5638D68EBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionHandler_OnListenStop_mF0963F52D52DEA32E3EF3BB9A82BA7620C847538_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionHandler_OnRequestError_m2023B78E66D807338FDB8F5982B2ABB8AB8C1D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionHandler_OnRequestResponse_m5772CB55322D82D2521BF4BD7CBBE81B2175EAF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionHandler_OnRequestStarted_m9B26A559E16DA7565845A82157E4508795CE43CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionHandler_OnRequestTranscript_mA6E0212C3DC9912EDF9A7A0C01A03AE6D004AE89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionHandler_U3COnRequestStartedU3Eb__9_0_mE88FBE7A317B58B24795F37305346DDCD8698485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimerController_ParseTime_m1CCD2091A91F28CFF4813F8F49E56A396F96CB0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m8A8631A2985B5422ABFB746C4D6D43FFEBAF3E08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m9E8A2D2936711EC90CDCF934AAE9A2485A9F3EEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mC862B0487562E93445C65F24FE68CD55D2236A9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mD3D7A3D4C032A019C0D15860F4EBDC95EBE812E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m3AD600DB38F3A6E8D846AEAF3A6127393E209BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m74CB1BCA31BF5CE98AD0E7DE7386EB609EA8854E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_AddListener_m3E022579578FE256EB77167A33F3003A4FC63B06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_RemoveListener_m23EE42492565C29932813AA8242EC48E5C5CCF73_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

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
struct U3CModuleU3E_tD074FD2CDC563C011312199F2FF5725F50737094 
{
public:

public:
};


// System.Object

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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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

// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// Facebook.WitAi.Events.WitErrorEvent
struct WitErrorEvent_t75A2B26145BEFDEC6A91E014BBA329E35862E571  : public UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4
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


// Oculus.Voice.Demo.UIShapesDemo.Instructions/Step
struct Step_tE3B9639B7D0A1C67F35EA44B599C56025BDF5DF9 
{
public:
	// System.Int32 Oculus.Voice.Demo.UIShapesDemo.Instructions/Step::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Step_tE3B9639B7D0A1C67F35EA44B599C56025BDF5DF9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<Facebook.WitAi.WitRequest>
struct UnityAction_1_t2E47E8DB66CA879A9E47B3A087453AC8F7C32734  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<Facebook.WitAi.Lib.WitResponseNode>
struct UnityAction_1_tB7A7CC3781E21429950CD118D054C59A4EB6C001  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.String,System.String>
struct UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Oculus.Voice.Demo.ButtonEventWatcher
struct ButtonEventWatcher_t9C89DF1FEB93786FA968A3E0AF58652813C862DE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Events.UnityEvent Oculus.Voice.Demo.ButtonEventWatcher::OnButtonDown
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnButtonDown_4;
	// UnityEngine.Events.UnityEvent Oculus.Voice.Demo.ButtonEventWatcher::OnButtonUp
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnButtonUp_5;

public:
	inline static int32_t get_offset_of_OnButtonDown_4() { return static_cast<int32_t>(offsetof(ButtonEventWatcher_t9C89DF1FEB93786FA968A3E0AF58652813C862DE, ___OnButtonDown_4)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnButtonDown_4() const { return ___OnButtonDown_4; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnButtonDown_4() { return &___OnButtonDown_4; }
	inline void set_OnButtonDown_4(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnButtonDown_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnButtonDown_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnButtonUp_5() { return static_cast<int32_t>(offsetof(ButtonEventWatcher_t9C89DF1FEB93786FA968A3E0AF58652813C862DE, ___OnButtonUp_5)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnButtonUp_5() const { return ___OnButtonUp_5; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnButtonUp_5() { return &___OnButtonUp_5; }
	inline void set_OnButtonUp_5(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnButtonUp_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnButtonUp_5), (void*)value);
	}
};


// Oculus.Voice.Demo.UIShapesDemo.ColorChanger
struct ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Oculus.Voice.Demo.UIShapesDemo.Instructions
struct Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Oculus.Voice.Demo.UIShapesDemo.Instructions::instructionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___instructionText_5;
	// Oculus.Voice.Demo.UIShapesDemo.Instructions/Step Oculus.Voice.Demo.UIShapesDemo.Instructions::currentStep
	int32_t ___currentStep_6;

public:
	inline static int32_t get_offset_of_instructionText_5() { return static_cast<int32_t>(offsetof(Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5, ___instructionText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_instructionText_5() const { return ___instructionText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_instructionText_5() { return &___instructionText_5; }
	inline void set_instructionText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___instructionText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instructionText_5), (void*)value);
	}

	inline static int32_t get_offset_of_currentStep_6() { return static_cast<int32_t>(offsetof(Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5, ___currentStep_6)); }
	inline int32_t get_currentStep_6() const { return ___currentStep_6; }
	inline int32_t* get_address_of_currentStep_6() { return &___currentStep_6; }
	inline void set_currentStep_6(int32_t value)
	{
		___currentStep_6 = value;
	}
};

struct Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_StaticFields
{
public:
	// System.String[] Oculus.Voice.Demo.UIShapesDemo.Instructions::steps
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___steps_4;

public:
	inline static int32_t get_offset_of_steps_4() { return static_cast<int32_t>(offsetof(Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_StaticFields, ___steps_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_steps_4() const { return ___steps_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_steps_4() { return &___steps_4; }
	inline void set_steps_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___steps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___steps_4), (void*)value);
	}
};


// Oculus.Voice.Demo.InteractionHandler
struct InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Oculus.Voice.Demo.InteractionHandler::freshStateText
	String_t* ___freshStateText_4;
	// UnityEngine.UI.Text Oculus.Voice.Demo.InteractionHandler::textArea
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textArea_5;
	// System.Boolean Oculus.Voice.Demo.InteractionHandler::showJson
	bool ___showJson_6;
	// Oculus.Voice.AppVoiceExperience Oculus.Voice.Demo.InteractionHandler::appVoiceExperience
	AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * ___appVoiceExperience_7;
	// System.Boolean Oculus.Voice.Demo.InteractionHandler::_active
	bool ____active_8;

public:
	inline static int32_t get_offset_of_freshStateText_4() { return static_cast<int32_t>(offsetof(InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03, ___freshStateText_4)); }
	inline String_t* get_freshStateText_4() const { return ___freshStateText_4; }
	inline String_t** get_address_of_freshStateText_4() { return &___freshStateText_4; }
	inline void set_freshStateText_4(String_t* value)
	{
		___freshStateText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___freshStateText_4), (void*)value);
	}

	inline static int32_t get_offset_of_textArea_5() { return static_cast<int32_t>(offsetof(InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03, ___textArea_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textArea_5() const { return ___textArea_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textArea_5() { return &___textArea_5; }
	inline void set_textArea_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textArea_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textArea_5), (void*)value);
	}

	inline static int32_t get_offset_of_showJson_6() { return static_cast<int32_t>(offsetof(InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03, ___showJson_6)); }
	inline bool get_showJson_6() const { return ___showJson_6; }
	inline bool* get_address_of_showJson_6() { return &___showJson_6; }
	inline void set_showJson_6(bool value)
	{
		___showJson_6 = value;
	}

	inline static int32_t get_offset_of_appVoiceExperience_7() { return static_cast<int32_t>(offsetof(InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03, ___appVoiceExperience_7)); }
	inline AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * get_appVoiceExperience_7() const { return ___appVoiceExperience_7; }
	inline AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 ** get_address_of_appVoiceExperience_7() { return &___appVoiceExperience_7; }
	inline void set_appVoiceExperience_7(AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * value)
	{
		___appVoiceExperience_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appVoiceExperience_7), (void*)value);
	}

	inline static int32_t get_offset_of__active_8() { return static_cast<int32_t>(offsetof(InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03, ____active_8)); }
	inline bool get__active_8() const { return ____active_8; }
	inline bool* get_address_of__active_8() { return &____active_8; }
	inline void set__active_8(bool value)
	{
		____active_8 = value;
	}
};


// Oculus.Voice.Demo.UIShapesDemo.ParallelTranscriptHandler
struct ParallelTranscriptHandler_t1F9B8272B2E9654606D4231397320487075D7FAC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String[] Oculus.Voice.Demo.UIShapesDemo.ParallelTranscriptHandler::requests
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___requests_4;
	// Facebook.WitAi.VoiceService Oculus.Voice.Demo.UIShapesDemo.ParallelTranscriptHandler::voiceService
	VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 * ___voiceService_5;

public:
	inline static int32_t get_offset_of_requests_4() { return static_cast<int32_t>(offsetof(ParallelTranscriptHandler_t1F9B8272B2E9654606D4231397320487075D7FAC, ___requests_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_requests_4() const { return ___requests_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_requests_4() { return &___requests_4; }
	inline void set_requests_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___requests_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requests_4), (void*)value);
	}

	inline static int32_t get_offset_of_voiceService_5() { return static_cast<int32_t>(offsetof(ParallelTranscriptHandler_t1F9B8272B2E9654606D4231397320487075D7FAC, ___voiceService_5)); }
	inline VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 * get_voiceService_5() const { return ___voiceService_5; }
	inline VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 ** get_address_of_voiceService_5() { return &___voiceService_5; }
	inline void set_voiceService_5(VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 * value)
	{
		___voiceService_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceService_5), (void*)value);
	}
};


// Oculus.Voice.Demo.BuiltInDemo.TimerController
struct TimerController_t3035005099318E93DA2D8388A795CD05B604417D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Double Oculus.Voice.Demo.BuiltInDemo.TimerController::_time
	double ____time_4;
	// System.Boolean Oculus.Voice.Demo.BuiltInDemo.TimerController::_timerExist
	bool ____timerExist_5;
	// System.Boolean Oculus.Voice.Demo.BuiltInDemo.TimerController::_timerRunning
	bool ____timerRunning_6;
	// UnityEngine.UI.Text Oculus.Voice.Demo.BuiltInDemo.TimerController::logText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___logText_7;
	// UnityEngine.AudioClip Oculus.Voice.Demo.BuiltInDemo.TimerController::buzzSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___buzzSound_8;

public:
	inline static int32_t get_offset_of__time_4() { return static_cast<int32_t>(offsetof(TimerController_t3035005099318E93DA2D8388A795CD05B604417D, ____time_4)); }
	inline double get__time_4() const { return ____time_4; }
	inline double* get_address_of__time_4() { return &____time_4; }
	inline void set__time_4(double value)
	{
		____time_4 = value;
	}

	inline static int32_t get_offset_of__timerExist_5() { return static_cast<int32_t>(offsetof(TimerController_t3035005099318E93DA2D8388A795CD05B604417D, ____timerExist_5)); }
	inline bool get__timerExist_5() const { return ____timerExist_5; }
	inline bool* get_address_of__timerExist_5() { return &____timerExist_5; }
	inline void set__timerExist_5(bool value)
	{
		____timerExist_5 = value;
	}

	inline static int32_t get_offset_of__timerRunning_6() { return static_cast<int32_t>(offsetof(TimerController_t3035005099318E93DA2D8388A795CD05B604417D, ____timerRunning_6)); }
	inline bool get__timerRunning_6() const { return ____timerRunning_6; }
	inline bool* get_address_of__timerRunning_6() { return &____timerRunning_6; }
	inline void set__timerRunning_6(bool value)
	{
		____timerRunning_6 = value;
	}

	inline static int32_t get_offset_of_logText_7() { return static_cast<int32_t>(offsetof(TimerController_t3035005099318E93DA2D8388A795CD05B604417D, ___logText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_logText_7() const { return ___logText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_logText_7() { return &___logText_7; }
	inline void set_logText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___logText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logText_7), (void*)value);
	}

	inline static int32_t get_offset_of_buzzSound_8() { return static_cast<int32_t>(offsetof(TimerController_t3035005099318E93DA2D8388A795CD05B604417D, ___buzzSound_8)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_buzzSound_8() const { return ___buzzSound_8; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_buzzSound_8() { return &___buzzSound_8; }
	inline void set_buzzSound_8(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___buzzSound_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buzzSound_8), (void*)value);
	}
};


// Oculus.Voice.Demo.BuiltInDemo.TimerDisplay
struct TimerDisplay_t57B43DA79696BE27F3049ACEF3BAF716198EE7CD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Oculus.Voice.Demo.BuiltInDemo.TimerController Oculus.Voice.Demo.BuiltInDemo.TimerDisplay::timer
	TimerController_t3035005099318E93DA2D8388A795CD05B604417D * ___timer_4;
	// UnityEngine.UI.Text Oculus.Voice.Demo.BuiltInDemo.TimerDisplay::_uiText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____uiText_5;

public:
	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(TimerDisplay_t57B43DA79696BE27F3049ACEF3BAF716198EE7CD, ___timer_4)); }
	inline TimerController_t3035005099318E93DA2D8388A795CD05B604417D * get_timer_4() const { return ___timer_4; }
	inline TimerController_t3035005099318E93DA2D8388A795CD05B604417D ** get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(TimerController_t3035005099318E93DA2D8388A795CD05B604417D * value)
	{
		___timer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timer_4), (void*)value);
	}

	inline static int32_t get_offset_of__uiText_5() { return static_cast<int32_t>(offsetof(TimerDisplay_t57B43DA79696BE27F3049ACEF3BAF716198EE7CD, ____uiText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__uiText_5() const { return ____uiText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__uiText_5() { return &____uiText_5; }
	inline void set__uiText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____uiText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uiText_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
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


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m8727842F47B6F77FCB70DE281A21C3E1DD2C7B5E_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`2<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_AddListener_m03A808706EF8B435537D817F2A43FD453E639D6C_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::RemoveListener(UnityEngine.Events.UnityAction`2<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_RemoveListener_mE340477D10D41DB3D0011507846998A5369C8E9F_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * ___call0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.String[] Facebook.WitAi.WitResultUtilities::GetAllEntityValues(Facebook.WitAi.Lib.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* WitResultUtilities_GetAllEntityValues_m96F0B656715383A319CED2FBD44E5CC40258557D (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___witResponse0, String_t* ___name1, const RuntimeMethod* method);
// System.Void Oculus.Voice.Demo.UIShapesDemo.ColorChanger::UpdateColor(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_UpdateColor_m4599597DF8842F6153F681C232F0D938A61B6D2B (ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___colorNames0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___shapes1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Oculus.Voice.Demo.UIShapesDemo.ColorChanger::UpdateColorAllShapes(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_UpdateColorAllShapes_m2A7079248BDB39DD110FB8D3A7BC9FB48FFD43BB (ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___colorNames0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ColorUtility::TryParseHtmlString(System.String,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorUtility_TryParseHtmlString_m69BEFAF655920930399471B79CF668FC3BAD4069 (String_t* ___htmlString0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * ___color1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Void Oculus.Voice.Demo.UIShapesDemo.ColorChanger::SetColor(UnityEngine.Transform,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_SetColor_m8D12B2E15896D811B757756E77C3A0B2864D9E2E (ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___trans0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Oculus.Voice.Demo.UIShapesDemo.Instructions::UpdateStep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions_UpdateStep_mBAC0AE9FB5A871406101119FC21F8A9E4C61FE1B (Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<Facebook.WitAi.WitRequest>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m9E8A2D2936711EC90CDCF934AAE9A2485A9F3EEB (UnityAction_1_t2E47E8DB66CA879A9E47B3A087453AC8F7C32734 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t2E47E8DB66CA879A9E47B3A087453AC8F7C32734 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.WitRequest>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mD3D7A3D4C032A019C0D15860F4EBDC95EBE812E4 (UnityEvent_1_t3524738F9C88423D30E1E8A8BCD1A9B98D131711 * __this, UnityAction_1_t2E47E8DB66CA879A9E47B3A087453AC8F7C32734 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3524738F9C88423D30E1E8A8BCD1A9B98D131711 *, UnityAction_1_t2E47E8DB66CA879A9E47B3A087453AC8F7C32734 *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.VoiceEvents::get_OnPartialTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * VoiceEvents_get_OnPartialTranscription_m42A410529487FA1E9A6BA3104E4CE6E2063E82A7_inline (VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398 (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.VoiceEvents::get_OnFullTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * VoiceEvents_get_OnFullTranscription_m2F3454ABA3D28D8BCA75778AC33D5AC2B93EEA28_inline (VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<Facebook.WitAi.Lib.WitResponseNode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m8A8631A2985B5422ABFB746C4D6D43FFEBAF3E08 (UnityAction_1_tB7A7CC3781E21429950CD118D054C59A4EB6C001 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tB7A7CC3781E21429950CD118D054C59A4EB6C001 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Lib.WitResponseNode>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mC862B0487562E93445C65F24FE68CD55D2236A9E (UnityEvent_1_tCC2044C9D8DFBD8AFF4B651013FF7DCAC5CB6055 * __this, UnityAction_1_tB7A7CC3781E21429950CD118D054C59A4EB6C001 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tCC2044C9D8DFBD8AFF4B651013FF7DCAC5CB6055 *, UnityAction_1_tB7A7CC3781E21429950CD118D054C59A4EB6C001 *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627 (UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m8727842F47B6F77FCB70DE281A21C3E1DD2C7B5E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.String>::AddListener(UnityEngine.Events.UnityAction`2<!0,!1>)
inline void UnityEvent_2_AddListener_m3E022579578FE256EB77167A33F3003A4FC63B06 (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 * __this, UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 *, UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC *, const RuntimeMethod*))UnityEvent_2_AddListener_m03A808706EF8B435537D817F2A43FD453E639D6C_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.WitRequest>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_m74CB1BCA31BF5CE98AD0E7DE7386EB609EA8854E (UnityEvent_1_t3524738F9C88423D30E1E8A8BCD1A9B98D131711 * __this, UnityAction_1_t2E47E8DB66CA879A9E47B3A087453AC8F7C32734 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3524738F9C88423D30E1E8A8BCD1A9B98D131711 *, UnityAction_1_t2E47E8DB66CA879A9E47B3A087453AC8F7C32734 *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Lib.WitResponseNode>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_m3AD600DB38F3A6E8D846AEAF3A6127393E209BC4 (UnityEvent_1_tCC2044C9D8DFBD8AFF4B651013FF7DCAC5CB6055 * __this, UnityAction_1_tB7A7CC3781E21429950CD118D054C59A4EB6C001 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tCC2044C9D8DFBD8AFF4B651013FF7DCAC5CB6055 *, UnityAction_1_tB7A7CC3781E21429950CD118D054C59A4EB6C001 *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.String>::RemoveListener(UnityEngine.Events.UnityAction`2<!0,!1>)
inline void UnityEvent_2_RemoveListener_m23EE42492565C29932813AA8242EC48E5C5CCF73 (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 * __this, UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 *, UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC *, const RuntimeMethod*))UnityEvent_2_RemoveListener_mE340477D10D41DB3D0011507846998A5369C8E9F_gshared)(__this, ___call0, method);
}
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnRequestComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnRequestComplete_m5BFD9A5110DB922AD347A765E0BB5B18D3814A27 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method);
// System.String Facebook.WitAi.Lib.WitResponseNode::op_Implicit(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitResponseNode_op_Implicit_m6AE01772CDB9839507732D5D953329688607B62E (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___d0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Demo.InteractionHandler::SetActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_SetActivation_mFADFEE64C08FD1630B7268DFBC293D6B862842B9 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, bool ___toActivated0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::OnElapsedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_OnElapsedTime_m2BC82B0559903F75A55B590AC21931E0038DC7E3 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, String_t* ___msg0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_m9E225CC4435215CDF7E8DECCD3D1CEFCCB82AC79 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.Boolean Oculus.Voice.Demo.BuiltInDemo.TimerController::ParseTime(System.String[],System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimerController_ParseTime_m1CCD2091A91F28CFF4813F8F49E56A396F96CB0E (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___entityValues0, double* ___time1, const RuntimeMethod* method);
// System.String Oculus.Voice.Demo.BuiltInDemo.TimerController::GetFormattedTimeFromSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimerController_GetFormattedTimeFromSeconds_mC50D3B48CE9A906F63069E6D452CD0EFEA421BBA (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TimeSpan_FromSeconds_m4644EABECA69BC6C07AD649C5898A8E53F4FE7B0 (double ___value0, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalHours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalHours_mE58EBCC460F12B66CEFB7FBDF4F6ACCD5B4AF6FA (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Minutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Minutes_mF5A78108FEB64953C298CEC19637378380881202 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Seconds_m3324F3A1F96CA956DAEDDB69DB32CAA320A053F7 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Milliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Milliseconds_m7DCE7C8875295A46F8A3ED0326F498F30D1F9BEE (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m9152D976CDFE0B30C7E251DDD04EAD6BBD0800B0 (String_t* ___s0, double* ___result1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
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
// System.Void Oculus.Voice.Demo.ButtonEventWatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonEventWatcher__ctor_mA6F2E5DEECEFA121073245325DC0C5B34AE198F5 (ButtonEventWatcher_t9C89DF1FEB93786FA968A3E0AF58652813C862DE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Oculus.Voice.Demo.UIShapesDemo.ColorChanger::SetColor(UnityEngine.Transform,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_SetColor_m8D12B2E15896D811B757756E77C3A0B2864D9E2E (ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___trans0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trans.GetComponent<Renderer>().material.color = color;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___trans0;
		NullCheck(L_0);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1;
		L_1 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_0, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2;
		L_2 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_1, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___color1;
		NullCheck(L_2);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.ColorChanger::UpdateColor(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_UpdateColor_m319ADD42B1C15F724288A1DBC5BF7885D9E6595A (ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495 * __this, WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___commandResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DFAD45D6A8DA43B5B1B588751F66ED962320CBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral982EB241688495C1AF6152F618833411DB4F9B35);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	{
		// string[] colorNames = commandResult.GetAllEntityValues("color:color");
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = ___commandResult0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1;
		L_1 = WitResultUtilities_GetAllEntityValues_m96F0B656715383A319CED2FBD44E5CC40258557D(L_0, _stringLiteral982EB241688495C1AF6152F618833411DB4F9B35, /*hidden argument*/NULL);
		V_0 = L_1;
		// string[] shapes = commandResult.GetAllEntityValues("shape:shape");
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_2 = ___commandResult0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = WitResultUtilities_GetAllEntityValues_m96F0B656715383A319CED2FBD44E5CC40258557D(L_2, _stringLiteral3DFAD45D6A8DA43B5B1B588751F66ED962320CBC, /*hidden argument*/NULL);
		V_1 = L_3;
		// UpdateColor(colorNames, shapes);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = V_1;
		ColorChanger_UpdateColor_m4599597DF8842F6153F681C232F0D938A61B6D2B(__this, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.ColorChanger::UpdateColor(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_UpdateColor_m4599597DF8842F6153F681C232F0D938A61B6D2B (ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___colorNames0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___shapes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E9474EF9AE32EDB50A68D4F59F03387298BFC73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EF40B7DDA545BF6CE2B27BE7ECD6F8FB7F7F147);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_3 = NULL;
	{
		// if (shapes.Length != 0 && colorNames.Length != shapes.Length)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___shapes1;
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0017;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___colorNames0;
		NullCheck(L_1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___shapes1;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogWarning("Mismatched entity pairings.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral3EF40B7DDA545BF6CE2B27BE7ECD6F8FB7F7F147, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0017:
	{
		// if (shapes.Length == 0 || shapes[0] == "color"){
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___shapes1;
		NullCheck(L_3);
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_002a;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___shapes1;
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}

IL_002a:
	{
		// Debug.LogWarning("updating all.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral2E9474EF9AE32EDB50A68D4F59F03387298BFC73, /*hidden argument*/NULL);
		// UpdateColorAllShapes(colorNames);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = ___colorNames0;
		ColorChanger_UpdateColorAllShapes_m2A7079248BDB39DD110FB8D3A7BC9FB48FFD43BB(__this, L_8, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_003c:
	{
		// for(var entity = 0; entity < colorNames.Length; entity++)
		V_0 = 0;
		goto IL_008f;
	}

IL_0040:
	{
		// if (!ColorUtility.TryParseHtmlString(colorNames[entity], out var color)) return;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = ___colorNames0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		bool L_13;
		L_13 = ColorUtility_TryParseHtmlString_m69BEFAF655920930399471B79CF668FC3BAD4069(L_12, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_1), /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_004d;
		}
	}
	{
		// if (!ColorUtility.TryParseHtmlString(colorNames[entity], out var color)) return;
		return;
	}

IL_004d:
	{
		// for (int i = 0; i < transform.childCount; i++)
		V_2 = 0;
		goto IL_007d;
	}

IL_0051:
	{
		// Transform child = transform.GetChild(i);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		// if (String.Equals(shapes[entity], child.name,
		//         StringComparison.CurrentCultureIgnoreCase))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = ___shapes1;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		String_t* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = V_3;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_21, /*hidden argument*/NULL);
		bool L_23;
		L_23 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(L_20, L_22, 1, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0079;
		}
	}
	{
		// SetColor(child, color);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = V_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25 = V_1;
		ColorChanger_SetColor_m8D12B2E15896D811B757756E77C3A0B2864D9E2E(__this, L_24, L_25, /*hidden argument*/NULL);
		// break;
		goto IL_008b;
	}

IL_0079:
	{
		// for (int i = 0; i < transform.childCount; i++)
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_007d:
	{
		// for (int i = 0; i < transform.childCount; i++)
		int32_t L_27 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		int32_t L_29;
		L_29 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0051;
		}
	}

IL_008b:
	{
		// for(var entity = 0; entity < colorNames.Length; entity++)
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_008f:
	{
		// for(var entity = 0; entity < colorNames.Length; entity++)
		int32_t L_31 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = ___colorNames0;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.ColorChanger::UpdateColorAllShapes(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_UpdateColorAllShapes_m2A7079248BDB39DD110FB8D3A7BC9FB48FFD43BB (ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___colorNames0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// var unspecifiedShape = 0;
		V_0 = 0;
		// for(var entity = 0; entity < colorNames.Length; entity++)
		V_1 = 0;
		goto IL_0048;
	}

IL_0006:
	{
		// if (!ColorUtility.TryParseHtmlString(colorNames[entity], out var color)) return;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___colorNames0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4;
		L_4 = ColorUtility_TryParseHtmlString_m69BEFAF655920930399471B79CF668FC3BAD4069(L_3, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_2), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0013;
		}
	}
	{
		// if (!ColorUtility.TryParseHtmlString(colorNames[entity], out var color)) return;
		return;
	}

IL_0013:
	{
		// var splitLimit = (transform.childCount/colorNames.Length) * (entity+1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_5, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = ___colorNames0;
		NullCheck(L_7);
		int32_t L_8 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_6/(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1))));
		goto IL_0040;
	}

IL_0029:
	{
		// SetColor(transform.GetChild(unspecifiedShape), color);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_9, L_10, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = V_2;
		ColorChanger_SetColor_m8D12B2E15896D811B757756E77C3A0B2864D9E2E(__this, L_11, L_12, /*hidden argument*/NULL);
		// unspecifiedShape++;
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0040:
	{
		// while (unspecifiedShape < splitLimit)
		int32_t L_14 = V_0;
		int32_t L_15 = V_3;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0029;
		}
	}
	{
		// for(var entity = 0; entity < colorNames.Length; entity++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0048:
	{
		// for(var entity = 0; entity < colorNames.Length; entity++)
		int32_t L_17 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = ___colorNames0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.ColorChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger__ctor_m0EA7C97D87273E387C3356771AFCDC12BAC1AC2E (ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// Oculus.Voice.Demo.UIShapesDemo.Instructions/Step Oculus.Voice.Demo.UIShapesDemo.Instructions::get_CurrentStep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Instructions_get_CurrentStep_m7413B01B8FE8640786CFCE1B3534333DE097F8C3 (Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5 * __this, const RuntimeMethod* method)
{
	{
		// internal Step CurrentStep => currentStep;
		int32_t L_0 = __this->get_currentStep_6();
		return L_0;
	}
}
// System.String Oculus.Voice.Demo.UIShapesDemo.Instructions::get_CurrentStepText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Instructions_get_CurrentStepText_m6E186BF7D3B3106A0919A624B119FBF4E3FDFBE0 (Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal string CurrentStepText => steps[(int) currentStep];
		IL2CPP_RUNTIME_CLASS_INIT(Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ((Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_StaticFields*)il2cpp_codegen_static_fields_for(Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_il2cpp_TypeInfo_var))->get_steps_4();
		int32_t L_1 = __this->get_currentStep_6();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.Instructions::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions_OnValidate_m02978D5B955BCD01F90EEA3ABEF6B684AF01D7BD (Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5 * __this, const RuntimeMethod* method)
{
	{
		// UpdateStep();
		Instructions_UpdateStep_mBAC0AE9FB5A871406101119FC21F8A9E4C61FE1B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.Instructions::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions_OnEnable_m7E8516B2EE27B23F479C7316E39CA35FA1903E05 (Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5 * __this, const RuntimeMethod* method)
{
	{
		// UpdateStep();
		Instructions_UpdateStep_mBAC0AE9FB5A871406101119FC21F8A9E4C61FE1B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.Instructions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions_Update_mC1343AA31C0BF4D668D889680A329BD4B2E76074 (Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5 * __this, const RuntimeMethod* method)
{
	{
		// UpdateStep();
		Instructions_UpdateStep_mBAC0AE9FB5A871406101119FC21F8A9E4C61FE1B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.Instructions::UpdateStep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions_UpdateStep_mBAC0AE9FB5A871406101119FC21F8A9E4C61FE1B (Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.Instructions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions__ctor_m5E4E498551B9F4C64CDC000A3934631F1D93D23A (Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5 * __this, const RuntimeMethod* method)
{
	{
		// private Step currentStep = Step.Ready;
		__this->set_currentStep_6(6);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.Instructions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions__cctor_m62F85D06085BB09CC60C40CC4F92C3509B1539A7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41EC8CF96484907F34E81AEF7F803DDBBE6FC97F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral560ED8D4B879A92BD23CB10540270C39C3E19D78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6B66BF93AFC12DE5805D06BA0ABBD6C3659968);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA83B8EF1A0DD0928ED5318216A030FC69A13643E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB46971E487185F55C44F40E1807F8CFF6C46F543);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7D1658DF3541A4A8F4FDBB6BD782A1F6BB2636D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly string[] steps = new string[]
		// {
		//     "Create an application at https://wit.ai. You can import the \"shapes_demo - Wit.ai Config.zip\" in the Demo/Data directory to create it for you.\n\nConnect to the Wit.ai app by clicking Oculus>Voice SDK>Settings and copy the Server Access Token from the Wit.ai app's settings page.Next, create a new Wit configuration by clicking Create.",
		//     "Copy the Server Access Token from the Wit.ai app's settings page and paste it in field found in Oculus/Voice SDK/Settings.",
		//     "Wit configuration is missing a Client Access Token. Open the Wit configuration, expand Application Configuration, and click Refresh or paste a Client Access Token from your Wit.ai app settings page.",
		//     "Create a Wit configuration by clicking Assets/Create/Voice SDK/Configuration.",
		//     "The scene is missing the App Voice Experience component. Add it by clicking Assets/Create/Voice SDK/Add App Voice Experience to Scene.",
		//     "The App Voice Experience GameObject is missing its Wit configuration. Set the configuration to begin trying voice commands.",
		//     ""
		// };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral41EC8CF96484907F34E81AEF7F803DDBBE6FC97F);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral41EC8CF96484907F34E81AEF7F803DDBBE6FC97F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralD7D1658DF3541A4A8F4FDBB6BD782A1F6BB2636D);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD7D1658DF3541A4A8F4FDBB6BD782A1F6BB2636D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralA83B8EF1A0DD0928ED5318216A030FC69A13643E);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA83B8EF1A0DD0928ED5318216A030FC69A13643E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral560ED8D4B879A92BD23CB10540270C39C3E19D78);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral560ED8D4B879A92BD23CB10540270C39C3E19D78);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralB46971E487185F55C44F40E1807F8CFF6C46F543);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB46971E487185F55C44F40E1807F8CFF6C46F543);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral9D6B66BF93AFC12DE5805D06BA0ABBD6C3659968);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral9D6B66BF93AFC12DE5805D06BA0ABBD6C3659968);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		((Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_StaticFields*)il2cpp_codegen_static_fields_for(Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_il2cpp_TypeInfo_var))->set_steps_4(L_7);
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
// System.Boolean Oculus.Voice.Demo.InteractionHandler::get_IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionHandler_get_IsActive_m5E459FA37602698CA4E1C8264FD84F358FC8E311 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsActive => _active;
		bool L_0 = __this->get__active_8();
		return L_0;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnEnable_m5288C2230CB27FC490E3681F13C344A83410EBA8 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnListenForcedStop_m715C1B7C1028750D6AD4562BC5AF16EAAF2C0950_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnListenStart_m3E8855565042818E914FAA276376CF5638D68EBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnListenStop_mF0963F52D52DEA32E3EF3BB9A82BA7620C847538_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnRequestError_m2023B78E66D807338FDB8F5982B2ABB8AB8C1D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnRequestResponse_m5772CB55322D82D2521BF4BD7CBBE81B2175EAF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnRequestStarted_m9B26A559E16DA7565845A82157E4508795CE43CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnRequestTranscript_mA6E0212C3DC9912EDF9A7A0C01A03AE6D004AE89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m8A8631A2985B5422ABFB746C4D6D43FFEBAF3E08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m9E8A2D2936711EC90CDCF934AAE9A2485A9F3EEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t2E47E8DB66CA879A9E47B3A087453AC8F7C32734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tB7A7CC3781E21429950CD118D054C59A4EB6C001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mC862B0487562E93445C65F24FE68CD55D2236A9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mD3D7A3D4C032A019C0D15860F4EBDC95EBE812E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_AddListener_m3E022579578FE256EB77167A33F3003A4FC63B06_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appVoiceExperience.events.OnRequestCreated.AddListener(OnRequestStarted);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_0 = __this->get_appVoiceExperience_7();
		NullCheck(L_0);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_1 = ((VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 *)L_0)->get_events_4();
		NullCheck(L_1);
		WitRequestCreatedEvent_tC0FA819B0DDD5D9FBDB63FF11D5FEBC287C4BF82 * L_2 = L_1->get_OnRequestCreated_6();
		UnityAction_1_t2E47E8DB66CA879A9E47B3A087453AC8F7C32734 * L_3 = (UnityAction_1_t2E47E8DB66CA879A9E47B3A087453AC8F7C32734 *)il2cpp_codegen_object_new(UnityAction_1_t2E47E8DB66CA879A9E47B3A087453AC8F7C32734_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m9E8A2D2936711EC90CDCF934AAE9A2485A9F3EEB(L_3, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestStarted_m9B26A559E16DA7565845A82157E4508795CE43CD_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m9E8A2D2936711EC90CDCF934AAE9A2485A9F3EEB_RuntimeMethod_var);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mD3D7A3D4C032A019C0D15860F4EBDC95EBE812E4(L_2, L_3, /*hidden argument*/UnityEvent_1_AddListener_mD3D7A3D4C032A019C0D15860F4EBDC95EBE812E4_RuntimeMethod_var);
		// appVoiceExperience.events.OnPartialTranscription.AddListener(OnRequestTranscript);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_4 = __this->get_appVoiceExperience_7();
		NullCheck(L_4);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_5 = ((VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 *)L_4)->get_events_4();
		NullCheck(L_5);
		WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * L_6;
		L_6 = VoiceEvents_get_OnPartialTranscription_m42A410529487FA1E9A6BA3104E4CE6E2063E82A7_inline(L_5, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_7 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_7, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestTranscript_mA6E0212C3DC9912EDF9A7A0C01A03AE6D004AE89_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_6);
		UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398(L_6, L_7, /*hidden argument*/UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		// appVoiceExperience.events.OnFullTranscription.AddListener(OnRequestTranscript);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_8 = __this->get_appVoiceExperience_7();
		NullCheck(L_8);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_9 = ((VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 *)L_8)->get_events_4();
		NullCheck(L_9);
		WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * L_10;
		L_10 = VoiceEvents_get_OnFullTranscription_m2F3454ABA3D28D8BCA75778AC33D5AC2B93EEA28_inline(L_9, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_11 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_11, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestTranscript_mA6E0212C3DC9912EDF9A7A0C01A03AE6D004AE89_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_10);
		UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398(L_10, L_11, /*hidden argument*/UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		// appVoiceExperience.events.OnStartListening.AddListener(OnListenStart);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_12 = __this->get_appVoiceExperience_7();
		NullCheck(L_12);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_13 = ((VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 *)L_12)->get_events_4();
		NullCheck(L_13);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_14 = L_13->get_OnStartListening_7();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_15 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_15, __this, (intptr_t)((intptr_t)InteractionHandler_OnListenStart_m3E8855565042818E914FAA276376CF5638D68EBC_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_14, L_15, /*hidden argument*/NULL);
		// appVoiceExperience.events.OnStoppedListening.AddListener(OnListenStop);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_16 = __this->get_appVoiceExperience_7();
		NullCheck(L_16);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_17 = ((VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 *)L_16)->get_events_4();
		NullCheck(L_17);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_18 = L_17->get_OnStoppedListening_8();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_19 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_19, __this, (intptr_t)((intptr_t)InteractionHandler_OnListenStop_mF0963F52D52DEA32E3EF3BB9A82BA7620C847538_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_18);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_18, L_19, /*hidden argument*/NULL);
		// appVoiceExperience.events.OnStoppedListeningDueToDeactivation.AddListener(OnListenForcedStop);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_20 = __this->get_appVoiceExperience_7();
		NullCheck(L_20);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_21 = ((VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 *)L_20)->get_events_4();
		NullCheck(L_21);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_22 = L_21->get_OnStoppedListeningDueToDeactivation_11();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_23 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_23, __this, (intptr_t)((intptr_t)InteractionHandler_OnListenForcedStop_m715C1B7C1028750D6AD4562BC5AF16EAAF2C0950_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_22);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_22, L_23, /*hidden argument*/NULL);
		// appVoiceExperience.events.OnResponse.AddListener(OnRequestResponse);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_24 = __this->get_appVoiceExperience_7();
		NullCheck(L_24);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_25 = ((VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 *)L_24)->get_events_4();
		NullCheck(L_25);
		WitResponseEvent_tB6FF10625816530C0B3B946E94F9701FF0FAC6B4 * L_26 = L_25->get_OnResponse_0();
		UnityAction_1_tB7A7CC3781E21429950CD118D054C59A4EB6C001 * L_27 = (UnityAction_1_tB7A7CC3781E21429950CD118D054C59A4EB6C001 *)il2cpp_codegen_object_new(UnityAction_1_tB7A7CC3781E21429950CD118D054C59A4EB6C001_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m8A8631A2985B5422ABFB746C4D6D43FFEBAF3E08(L_27, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestResponse_m5772CB55322D82D2521BF4BD7CBBE81B2175EAF0_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m8A8631A2985B5422ABFB746C4D6D43FFEBAF3E08_RuntimeMethod_var);
		NullCheck(L_26);
		UnityEvent_1_AddListener_mC862B0487562E93445C65F24FE68CD55D2236A9E(L_26, L_27, /*hidden argument*/UnityEvent_1_AddListener_mC862B0487562E93445C65F24FE68CD55D2236A9E_RuntimeMethod_var);
		// appVoiceExperience.events.OnError.AddListener(OnRequestError);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_28 = __this->get_appVoiceExperience_7();
		NullCheck(L_28);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_29 = ((VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 *)L_28)->get_events_4();
		NullCheck(L_29);
		WitErrorEvent_t75A2B26145BEFDEC6A91E014BBA329E35862E571 * L_30 = L_29->get_OnError_1();
		UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC * L_31 = (UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC *)il2cpp_codegen_object_new(UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627(L_31, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestError_m2023B78E66D807338FDB8F5982B2ABB8AB8C1D5F_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627_RuntimeMethod_var);
		NullCheck(L_30);
		UnityEvent_2_AddListener_m3E022579578FE256EB77167A33F3003A4FC63B06(L_30, L_31, /*hidden argument*/UnityEvent_2_AddListener_m3E022579578FE256EB77167A33F3003A4FC63B06_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnDisable_m0517AE8057707F19CED9037F87F8C64AF952909F (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnListenForcedStop_m715C1B7C1028750D6AD4562BC5AF16EAAF2C0950_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnListenStart_m3E8855565042818E914FAA276376CF5638D68EBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnListenStop_mF0963F52D52DEA32E3EF3BB9A82BA7620C847538_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnRequestError_m2023B78E66D807338FDB8F5982B2ABB8AB8C1D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnRequestResponse_m5772CB55322D82D2521BF4BD7CBBE81B2175EAF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnRequestStarted_m9B26A559E16DA7565845A82157E4508795CE43CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnRequestTranscript_mA6E0212C3DC9912EDF9A7A0C01A03AE6D004AE89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m8A8631A2985B5422ABFB746C4D6D43FFEBAF3E08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m9E8A2D2936711EC90CDCF934AAE9A2485A9F3EEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t2E47E8DB66CA879A9E47B3A087453AC8F7C32734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tB7A7CC3781E21429950CD118D054C59A4EB6C001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m3AD600DB38F3A6E8D846AEAF3A6127393E209BC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m74CB1BCA31BF5CE98AD0E7DE7386EB609EA8854E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_RemoveListener_m23EE42492565C29932813AA8242EC48E5C5CCF73_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appVoiceExperience.events.OnRequestCreated.RemoveListener(OnRequestStarted);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_0 = __this->get_appVoiceExperience_7();
		NullCheck(L_0);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_1 = ((VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 *)L_0)->get_events_4();
		NullCheck(L_1);
		WitRequestCreatedEvent_tC0FA819B0DDD5D9FBDB63FF11D5FEBC287C4BF82 * L_2 = L_1->get_OnRequestCreated_6();
		UnityAction_1_t2E47E8DB66CA879A9E47B3A087453AC8F7C32734 * L_3 = (UnityAction_1_t2E47E8DB66CA879A9E47B3A087453AC8F7C32734 *)il2cpp_codegen_object_new(UnityAction_1_t2E47E8DB66CA879A9E47B3A087453AC8F7C32734_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m9E8A2D2936711EC90CDCF934AAE9A2485A9F3EEB(L_3, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestStarted_m9B26A559E16DA7565845A82157E4508795CE43CD_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m9E8A2D2936711EC90CDCF934AAE9A2485A9F3EEB_RuntimeMethod_var);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_m74CB1BCA31BF5CE98AD0E7DE7386EB609EA8854E(L_2, L_3, /*hidden argument*/UnityEvent_1_RemoveListener_m74CB1BCA31BF5CE98AD0E7DE7386EB609EA8854E_RuntimeMethod_var);
		// appVoiceExperience.events.OnPartialTranscription.RemoveListener(OnRequestTranscript);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_4 = __this->get_appVoiceExperience_7();
		NullCheck(L_4);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_5 = ((VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 *)L_4)->get_events_4();
		NullCheck(L_5);
		WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * L_6;
		L_6 = VoiceEvents_get_OnPartialTranscription_m42A410529487FA1E9A6BA3104E4CE6E2063E82A7_inline(L_5, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_7 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_7, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestTranscript_mA6E0212C3DC9912EDF9A7A0C01A03AE6D004AE89_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_6);
		UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC(L_6, L_7, /*hidden argument*/UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var);
		// appVoiceExperience.events.OnFullTranscription.RemoveListener(OnRequestTranscript);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_8 = __this->get_appVoiceExperience_7();
		NullCheck(L_8);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_9 = ((VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 *)L_8)->get_events_4();
		NullCheck(L_9);
		WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * L_10;
		L_10 = VoiceEvents_get_OnFullTranscription_m2F3454ABA3D28D8BCA75778AC33D5AC2B93EEA28_inline(L_9, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_11 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_11, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestTranscript_mA6E0212C3DC9912EDF9A7A0C01A03AE6D004AE89_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_10);
		UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC(L_10, L_11, /*hidden argument*/UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var);
		// appVoiceExperience.events.OnStartListening.RemoveListener(OnListenStart);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_12 = __this->get_appVoiceExperience_7();
		NullCheck(L_12);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_13 = ((VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 *)L_12)->get_events_4();
		NullCheck(L_13);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_14 = L_13->get_OnStartListening_7();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_15 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_15, __this, (intptr_t)((intptr_t)InteractionHandler_OnListenStart_m3E8855565042818E914FAA276376CF5638D68EBC_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_14, L_15, /*hidden argument*/NULL);
		// appVoiceExperience.events.OnStoppedListening.RemoveListener(OnListenStop);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_16 = __this->get_appVoiceExperience_7();
		NullCheck(L_16);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_17 = ((VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 *)L_16)->get_events_4();
		NullCheck(L_17);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_18 = L_17->get_OnStoppedListening_8();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_19 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_19, __this, (intptr_t)((intptr_t)InteractionHandler_OnListenStop_mF0963F52D52DEA32E3EF3BB9A82BA7620C847538_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_18);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_18, L_19, /*hidden argument*/NULL);
		// appVoiceExperience.events.OnStoppedListeningDueToDeactivation.RemoveListener(OnListenForcedStop);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_20 = __this->get_appVoiceExperience_7();
		NullCheck(L_20);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_21 = ((VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 *)L_20)->get_events_4();
		NullCheck(L_21);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_22 = L_21->get_OnStoppedListeningDueToDeactivation_11();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_23 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_23, __this, (intptr_t)((intptr_t)InteractionHandler_OnListenForcedStop_m715C1B7C1028750D6AD4562BC5AF16EAAF2C0950_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_22);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_22, L_23, /*hidden argument*/NULL);
		// appVoiceExperience.events.OnResponse.RemoveListener(OnRequestResponse);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_24 = __this->get_appVoiceExperience_7();
		NullCheck(L_24);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_25 = ((VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 *)L_24)->get_events_4();
		NullCheck(L_25);
		WitResponseEvent_tB6FF10625816530C0B3B946E94F9701FF0FAC6B4 * L_26 = L_25->get_OnResponse_0();
		UnityAction_1_tB7A7CC3781E21429950CD118D054C59A4EB6C001 * L_27 = (UnityAction_1_tB7A7CC3781E21429950CD118D054C59A4EB6C001 *)il2cpp_codegen_object_new(UnityAction_1_tB7A7CC3781E21429950CD118D054C59A4EB6C001_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m8A8631A2985B5422ABFB746C4D6D43FFEBAF3E08(L_27, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestResponse_m5772CB55322D82D2521BF4BD7CBBE81B2175EAF0_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m8A8631A2985B5422ABFB746C4D6D43FFEBAF3E08_RuntimeMethod_var);
		NullCheck(L_26);
		UnityEvent_1_RemoveListener_m3AD600DB38F3A6E8D846AEAF3A6127393E209BC4(L_26, L_27, /*hidden argument*/UnityEvent_1_RemoveListener_m3AD600DB38F3A6E8D846AEAF3A6127393E209BC4_RuntimeMethod_var);
		// appVoiceExperience.events.OnError.RemoveListener(OnRequestError);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_28 = __this->get_appVoiceExperience_7();
		NullCheck(L_28);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_29 = ((VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 *)L_28)->get_events_4();
		NullCheck(L_29);
		WitErrorEvent_t75A2B26145BEFDEC6A91E014BBA329E35862E571 * L_30 = L_29->get_OnError_1();
		UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC * L_31 = (UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC *)il2cpp_codegen_object_new(UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627(L_31, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestError_m2023B78E66D807338FDB8F5982B2ABB8AB8C1D5F_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627_RuntimeMethod_var);
		NullCheck(L_30);
		UnityEvent_2_RemoveListener_m23EE42492565C29932813AA8242EC48E5C5CCF73(L_30, L_31, /*hidden argument*/UnityEvent_2_RemoveListener_m23EE42492565C29932813AA8242EC48E5C5CCF73_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnRequestStarted(Facebook.WitAi.WitRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnRequestStarted_m9B26A559E16DA7565845A82157E4508795CE43CD (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_U3COnRequestStartedU3Eb__9_0_mE88FBE7A317B58B24795F37305346DDCD8698485_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showJson) r.onRawResponse = (response) => textArea.text = response;
		bool L_0 = __this->get_showJson_6();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// if (showJson) r.onRawResponse = (response) => textArea.text = response;
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_1 = ___r0;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_2, __this, (intptr_t)((intptr_t)InteractionHandler_U3COnRequestStartedU3Eb__9_0_mE88FBE7A317B58B24795F37305346DDCD8698485_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->set_onRawResponse_35(L_2);
	}

IL_001a:
	{
		// _active = true;
		__this->set__active_8((bool)1);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnRequestTranscript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnRequestTranscript_mA6E0212C3DC9912EDF9A7A0C01A03AE6D004AE89 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, String_t* ___transcript0, const RuntimeMethod* method)
{
	{
		// textArea.text = transcript;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_textArea_5();
		String_t* L_1 = ___transcript0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnListenStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnListenStart_m3E8855565042818E914FAA276376CF5638D68EBC (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4249AEA5B1AE9E78829F6D9A0EFE24DE7967450);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textArea.text = "Listening...";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_textArea_5();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralA4249AEA5B1AE9E78829F6D9A0EFE24DE7967450);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnListenStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnListenStop_mF0963F52D52DEA32E3EF3BB9A82BA7620C847538 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A5D08C7E98DA121F009B7BFC331E06EE804C90A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textArea.text = "Processing...";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_textArea_5();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral0A5D08C7E98DA121F009B7BFC331E06EE804C90A);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnListenForcedStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnListenForcedStop_m715C1B7C1028750D6AD4562BC5AF16EAAF2C0950 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method)
{
	{
		// if (!showJson)
		bool L_0 = __this->get_showJson_6();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// textArea.text = freshStateText;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_textArea_5();
		String_t* L_2 = __this->get_freshStateText_4();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
	}

IL_0019:
	{
		// OnRequestComplete();
		InteractionHandler_OnRequestComplete_m5BFD9A5110DB922AD347A765E0BB5B18D3814A27(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnRequestResponse(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnRequestResponse_m5772CB55322D82D2521BF4BD7CBBE81B2175EAF0 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34073A77D1FC0099E5D4E1AA07A1A3995BF30CF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!showJson)
		bool L_0 = __this->get_showJson_6();
		if (L_0)
		{
			goto IL_0057;
		}
	}
	{
		// if (!string.IsNullOrEmpty(response["text"]))
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_1 = ___response0;
		NullCheck(L_1);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_2;
		L_2 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_1, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		String_t* L_3;
		L_3 = WitResponseNode_op_Implicit_m6AE01772CDB9839507732D5D953329688607B62E(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		// textArea.text = "I heard: " + response["text"];
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_textArea_5();
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_6 = ___response0;
		NullCheck(L_6);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_7;
		L_7 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_6, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		String_t* L_8;
		L_8 = WitResponseNode_op_Implicit_m6AE01772CDB9839507732D5D953329688607B62E(L_7, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral34073A77D1FC0099E5D4E1AA07A1A3995BF30CF5, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
		// }
		goto IL_0057;
	}

IL_0046:
	{
		// textArea.text = freshStateText;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_textArea_5();
		String_t* L_11 = __this->get_freshStateText_4();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
	}

IL_0057:
	{
		// OnRequestComplete();
		InteractionHandler_OnRequestComplete_m5BFD9A5110DB922AD347A765E0BB5B18D3814A27(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnRequestError(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnRequestError_m2023B78E66D807338FDB8F5982B2ABB8AB8C1D5F (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, String_t* ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06055A31D913616225C8AA9808676FAD9AA4549A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!showJson)
		bool L_0 = __this->get_showJson_6();
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		// textArea.text = $"<color=\"red\">Error: {error}\n\n{message}</color>";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_textArea_5();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral06055A31D913616225C8AA9808676FAD9AA4549A);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral06055A31D913616225C8AA9808676FAD9AA4549A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		String_t* L_5 = ___error0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		String_t* L_8 = ___message1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		String_t* L_10;
		L_10 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_9, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_10);
	}

IL_003e:
	{
		// OnRequestComplete();
		InteractionHandler_OnRequestComplete_m5BFD9A5110DB922AD347A765E0BB5B18D3814A27(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnRequestComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnRequestComplete_m5BFD9A5110DB922AD347A765E0BB5B18D3814A27 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method)
{
	{
		// _active = false;
		__this->set__active_8((bool)0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::ToggleActivation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_ToggleActivation_mF760814E4A34F63FA860F05A77D1CBAC998C34FE (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method)
{
	{
		// SetActivation(!_active);
		bool L_0 = __this->get__active_8();
		InteractionHandler_SetActivation_mFADFEE64C08FD1630B7268DFBC293D6B862842B9(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::SetActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_SetActivation_mFADFEE64C08FD1630B7268DFBC293D6B862842B9 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, bool ___toActivated0, const RuntimeMethod* method)
{
	{
		// if (_active != toActivated)
		bool L_0 = __this->get__active_8();
		bool L_1 = ___toActivated0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// _active = toActivated;
		bool L_2 = ___toActivated0;
		__this->set__active_8(L_2);
		// if (_active)
		bool L_3 = __this->get__active_8();
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// appVoiceExperience.Activate();
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_4 = __this->get_appVoiceExperience_7();
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(28 /* System.Void Facebook.WitAi.VoiceService::Activate() */, L_4);
		// }
		return;
	}

IL_0024:
	{
		// appVoiceExperience.Deactivate();
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_5 = __this->get_appVoiceExperience_7();
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(32 /* System.Void Facebook.WitAi.VoiceService::Deactivate() */, L_5);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler__ctor_m82606BDB51FA43FA9EF2835E9683A4B85583683F (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2A5212C71D031E67C453835AC07A6181980EF40);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string freshStateText = "Try pressing the Activate button and saying \"Make the cube red\"";
		__this->set_freshStateText_4(_stringLiteralD2A5212C71D031E67C453835AC07A6181980EF40);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::<OnRequestStarted>b__9_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_U3COnRequestStartedU3Eb__9_0_mE88FBE7A317B58B24795F37305346DDCD8698485 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, String_t* ___response0, const RuntimeMethod* method)
{
	{
		// if (showJson) r.onRawResponse = (response) => textArea.text = response;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_textArea_5();
		String_t* L_1 = ___response0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
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
// System.Void Oculus.Voice.Demo.UIShapesDemo.ParallelTranscriptHandler::SendParallelRequests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelTranscriptHandler_SendParallelRequests_mA3B97EC8CCD07ACB34839BA22442A5EB0BDCB54A (ParallelTranscriptHandler_t1F9B8272B2E9654606D4231397320487075D7FAC * __this, const RuntimeMethod* method)
{
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// foreach (var request in requests)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_requests_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_001f;
	}

IL_000b:
	{
		// foreach (var request in requests)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// voiceService.Activate(request);
		VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 * L_5 = __this->get_voiceService_5();
		String_t* L_6 = V_2;
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(34 /* System.Void Facebook.WitAi.VoiceService::Activate(System.String) */, L_5, L_6);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_001f:
	{
		// foreach (var request in requests)
		int32_t L_8 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.ParallelTranscriptHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelTranscriptHandler__ctor_m8DC63AEC5142D22BBA4C78E790EA1E694E39D064 (ParallelTranscriptHandler_t1F9B8272B2E9654606D4231397320487075D7FAC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_Update_mFED5C08DACF4F0E3EFA0617722587A51EC1EFD5B (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method)
{
	{
		// if (_timerExist && _timerRunning)
		bool L_0 = __this->get__timerExist_5();
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		bool L_1 = __this->get__timerRunning_6();
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// _time -= Time.deltaTime;
		double L_2 = __this->get__time_4();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__time_4(((double)il2cpp_codegen_subtract((double)L_2, (double)((double)((double)L_3)))));
		// if (_time < 0)
		double L_4 = __this->get__time_4();
		if ((!(((double)L_4) < ((double)(0.0)))))
		{
			goto IL_003a;
		}
	}
	{
		// OnElapsedTime();
		TimerController_OnElapsedTime_m2BC82B0559903F75A55B590AC21931E0038DC7E3(__this, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(msg);
		String_t* L_0 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_0, /*hidden argument*/NULL);
		// logText.text = msg;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_logText_7();
		String_t* L_2 = ___msg0;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::OnElapsedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_OnElapsedTime_m2BC82B0559903F75A55B590AC21931E0038DC7E3 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral719FCF042A08D7D4229795007BD69A9107EE8F6A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _time = 0;
		__this->set__time_4((0.0));
		// _timerRunning = false;
		__this->set__timerRunning_6((bool)0);
		// _timerExist = false;
		__this->set__timerExist_5((bool)0);
		// Log("Buzz!");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteral719FCF042A08D7D4229795007BD69A9107EE8F6A, /*hidden argument*/NULL);
		// AudioSource.PlayClipAtPoint(buzzSound, Vector3.zero);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0 = __this->get_buzzSound_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m9E225CC4435215CDF7E8DECCD3D1CEFCCB82AC79(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::DeleteTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_DeleteTimer_m303448AA57AE8D124A2835B36ECBEE8601E6FE7C (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral593C48B5B64125B2A87743E68909883CFDF40C2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE84F498776F6C20BBE955ABF1908A5D218FD8026);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_timerExist)
		bool L_0 = __this->get__timerExist_5();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Log("Error: There is no timer to delete.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteralE84F498776F6C20BBE955ABF1908A5D218FD8026, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0014:
	{
		// _timerExist = false;
		__this->set__timerExist_5((bool)0);
		// _time = 0;
		__this->set__time_4((0.0));
		// _timerRunning = false;
		__this->set__timerRunning_6((bool)0);
		// Log("Timer deleted.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteral593C48B5B64125B2A87743E68909883CFDF40C2A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::CreateTimer(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_CreateTimer_m723B3D4FD4CB5E24D6294A59BC3E5F2231544D49 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___entityValues0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11B7DBC79AE1731C98022861F51963665A1692FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E3F3CE7F088199C5A9ADB690290F91F45814107);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EF566C65746AD4D5BA1993FC6401B021FFA82A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral674D566FF6101DD0EF36AC986DEF66156B7E9A54);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_timerExist)
		bool L_0 = __this->get__timerExist_5();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Log("A timer already exist.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteral11B7DBC79AE1731C98022861F51963665A1692FF, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0014:
	{
		// if (ParseTime(entityValues, out _time))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___entityValues0;
		double* L_2 = __this->get_address_of__time_4();
		bool L_3;
		L_3 = TimerController_ParseTime_m1CCD2091A91F28CFF4813F8F49E56A396F96CB0E(__this, L_1, (double*)L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0067;
		}
	}
	{
		// _timerExist = true;
		__this->set__timerExist_5((bool)1);
		// _timerRunning = true;
		__this->set__timerRunning_6((bool)1);
		// Log($"Countdown Timer is set for {entityValues[0]} {entityValues[1]}(s).");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral674D566FF6101DD0EF36AC986DEF66156B7E9A54);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral674D566FF6101DD0EF36AC986DEF66156B7E9A54);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = ___entityValues0;
		NullCheck(L_7);
		int32_t L_8 = 0;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = ___entityValues0;
		NullCheck(L_12);
		int32_t L_13 = 1;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_11;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral4E3F3CE7F088199C5A9ADB690290F91F45814107);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4E3F3CE7F088199C5A9ADB690290F91F45814107);
		String_t* L_16;
		L_16 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_15, /*hidden argument*/NULL);
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0067:
	{
		// Log("Error in CreateTimer(): Could not parse wit reply.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteral4EF566C65746AD4D5BA1993FC6401B021FFA82A7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::GetTimerIntent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_GetTimerIntent_m70A725B3A270D3A354D254AC21C9B81B3A199AB5 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// var msg = GetFormattedTimeFromSeconds();
		String_t* L_0;
		L_0 = TimerController_GetFormattedTimeFromSeconds_mC50D3B48CE9A906F63069E6D452CD0EFEA421BBA(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Log(msg);
		String_t* L_1 = V_0;
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::PauseTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_PauseTimer_m22DF952F353EA8EE30CF2AA946475101A0B7363F (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC2A5334237FF8576DD07245EB919757BF72CBA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _timerRunning = false;
		__this->set__timerRunning_6((bool)0);
		// Log("Timer paused.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteralCC2A5334237FF8576DD07245EB919757BF72CBA9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::ResumeTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_ResumeTimer_mE51AEE9B8E61F2776699A7E0235728FA06D119E2 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral900D12FD6EE1407168379DF0B561E5206790E8AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _timerRunning = true;
		__this->set__timerRunning_6((bool)1);
		// Log("Timer resumed.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteral900D12FD6EE1407168379DF0B561E5206790E8AF, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::SubtractTimeTimer(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_SubtractTimeTimer_m93BDE34D272E8779A18368972DBC0A26DD3746D7 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___entityValues0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39CCECF27122D10050A5606AD517A96F5CCF55CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50FD7CB5C781AA1CB1598D172D99D573C3F2BB9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8682956BC4320075709B4B2396B4F890B21B525E);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	String_t* V_1 = NULL;
	{
		// if (!_timerExist)
		bool L_0 = __this->get__timerExist_5();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Log("Error: No Timer is created.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteral50FD7CB5C781AA1CB1598D172D99D573C3F2BB9F, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0014:
	{
		// if (ParseTime(entityValues, out var time))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___entityValues0;
		bool L_2;
		L_2 = TimerController_ParseTime_m1CCD2091A91F28CFF4813F8F49E56A396F96CB0E(__this, L_1, (double*)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0073;
		}
	}
	{
		// var msg = $"{entityValues[0]} {entityValues[1]}(s) were subtracted from the timer.";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___entityValues0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = ___entityValues0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		String_t* L_9;
		L_9 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_8, _stringLiteral39CCECF27122D10050A5606AD517A96F5CCF55CA, /*hidden argument*/NULL);
		V_1 = L_9;
		// _time -= time;
		double L_10 = __this->get__time_4();
		double L_11 = V_0;
		__this->set__time_4(((double)il2cpp_codegen_subtract((double)L_10, (double)L_11)));
		// if (_time < 0)
		double L_12 = __this->get__time_4();
		if ((!(((double)L_12) < ((double)(0.0)))))
		{
			goto IL_006b;
		}
	}
	{
		// _time = 0;
		__this->set__time_4((0.0));
		// Log(msg);
		String_t* L_13 = V_1;
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, L_13, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_006b:
	{
		// Log(msg);
		String_t* L_14 = V_1;
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, L_14, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0073:
	{
		// Log("Error in Subtract_time_timer(): Could not parse the wit reply.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteral8682956BC4320075709B4B2396B4F890B21B525E, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::AddTimeToTimer(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_AddTimeToTimer_m923F25F33F611F56A17565B1B0CA81255AEA80B8 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___entityValues0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50FD7CB5C781AA1CB1598D172D99D573C3F2BB9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3AED789946AED0395215D1DE21BCD5437046CAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC9AEAA9B8ED2A1EF2F08E10DE610AA75B1AC318);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	String_t* V_1 = NULL;
	{
		// if (!_timerExist)
		bool L_0 = __this->get__timerExist_5();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Log("Error: No Timer is created.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteral50FD7CB5C781AA1CB1598D172D99D573C3F2BB9F, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0014:
	{
		// if (ParseTime(entityValues, out var time))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___entityValues0;
		bool L_2;
		L_2 = TimerController_ParseTime_m1CCD2091A91F28CFF4813F8F49E56A396F96CB0E(__this, L_1, (double*)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		// _time += time;
		double L_3 = __this->get__time_4();
		double L_4 = V_0;
		__this->set__time_4(((double)il2cpp_codegen_add((double)L_3, (double)L_4)));
		// var msg = $"{entityValues[0]} {entityValues[1]}(s) were added to the timer.";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = ___entityValues0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = ___entityValues0;
		NullCheck(L_8);
		int32_t L_9 = 1;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		String_t* L_11;
		L_11 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_7, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_10, _stringLiteralFC9AEAA9B8ED2A1EF2F08E10DE610AA75B1AC318, /*hidden argument*/NULL);
		V_1 = L_11;
		// Log(msg);
		String_t* L_12 = V_1;
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, L_12, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004b:
	{
		// Log("Error in AddTimeToTimer(): Could not parse with reply.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteralF3AED789946AED0395215D1DE21BCD5437046CAE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double Oculus.Voice.Demo.BuiltInDemo.TimerController::GetRemainingTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimerController_GetRemainingTime_m3F5C9164742269FBFC6A526583D700F4A3668D03 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method)
{
	{
		// return _time;
		double L_0 = __this->get__time_4();
		return L_0;
	}
}
// System.String Oculus.Voice.Demo.BuiltInDemo.TimerController::GetFormattedTimeFromSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimerController_GetFormattedTimeFromSeconds_mC50D3B48CE9A906F63069E6D452CD0EFEA421BBA (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral377C585B1B1DFB2354530C907FF3AF34F921983D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral984058CED8B3C72D22A95708F196F8A38804B395);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (_time >= TimeSpan.MaxValue.TotalSeconds)
		double L_0 = __this->get__time_4();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_MaxValue_20();
		V_1 = L_1;
		double L_2;
		L_2 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_1), /*hidden argument*/NULL);
		if ((!(((double)L_0) >= ((double)L_2))))
		{
			goto IL_003d;
		}
	}
	{
		// _time = TimeSpan.MaxValue.TotalSeconds - 1;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_3 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_MaxValue_20();
		V_1 = L_3;
		double L_4;
		L_4 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_1), /*hidden argument*/NULL);
		__this->set__time_4(((double)il2cpp_codegen_subtract((double)L_4, (double)(1.0))));
		// Log("Error: Hit max time");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteral984058CED8B3C72D22A95708F196F8A38804B395, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// TimeSpan span = TimeSpan.FromSeconds(_time);
		double L_5 = __this->get__time_4();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_6;
		L_6 = TimeSpan_FromSeconds_m4644EABECA69BC6C07AD649C5898A8E53F4FE7B0(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// return $"{Math.Floor(span.TotalHours)}:{span.Minutes:00}:{span.Seconds:00}.{Math.Floor(span.Milliseconds/100f)}";
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
		double L_9;
		L_9 = TimeSpan_get_TotalHours_mE58EBCC460F12B66CEFB7FBDF4F6ACCD5B4AF6FA((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = floor(L_9);
		double L_11 = L_10;
		RuntimeObject * L_12 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_8;
		int32_t L_14;
		L_14 = TimeSpan_get_Minutes_mF5A78108FEB64953C298CEC19637378380881202((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		int32_t L_18;
		L_18 = TimeSpan_get_Seconds_m3324F3A1F96CA956DAEDDB69DB32CAA320A053F7((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_20);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = L_17;
		int32_t L_22;
		L_22 = TimeSpan_get_Milliseconds_m7DCE7C8875295A46F8A3ED0326F498F30D1F9BEE((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		double L_23;
		L_23 = floor(((double)((double)((float)((float)((float)((float)L_22))/(float)(100.0f))))));
		double L_24 = L_23;
		RuntimeObject * L_25 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_25);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_25);
		String_t* L_26;
		L_26 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral377C585B1B1DFB2354530C907FF3AF34F921983D, L_21, /*hidden argument*/NULL);
		return L_26;
	}
}
// System.Boolean Oculus.Voice.Demo.BuiltInDemo.TimerController::ParseTime(System.String[],System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimerController_ParseTime_m1CCD2091A91F28CFF4813F8F49E56A396F96CB0E (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___entityValues0, double* ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C2779828DB4F6FD0BAFA174EC8935FB45601490);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FDD57A554F4937B1372DCDFBB149567C0704967);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// time = _time;
		double* L_0 = ___time1;
		double L_1 = __this->get__time_4();
		*((double*)L_0) = (double)L_1;
		// if (entityValues.Length > 0 && double.TryParse(entityValues[0], out time))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___entityValues0;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0075;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___entityValues0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		double* L_6 = ___time1;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Double_TryParse_m9152D976CDFE0B30C7E251DDD04EAD6BBD0800B0(L_5, (double*)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		// if (entityValues.Length < 2)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = ___entityValues0;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))) >= ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		// throw new ArgumentException("Entities being parsed must include time value and unit.");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84D00B228D10C715DA89DB12080F9DA6C37464B3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimerController_ParseTime_m1CCD2091A91F28CFF4813F8F49E56A396F96CB0E_RuntimeMethod_var)));
	}

IL_0028:
	{
		// if (!string.IsNullOrEmpty(entityValues[1]))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = ___entityValues0;
		NullCheck(L_10);
		int32_t L_11 = 1;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		bool L_13;
		L_13 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0073;
		}
	}
	{
		// switch (entityValues[1])
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = ___entityValues0;
		NullCheck(L_14);
		int32_t L_15 = 1;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = L_16;
		String_t* L_17 = V_0;
		if (!L_17)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_18 = V_0;
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral6C2779828DB4F6FD0BAFA174EC8935FB45601490, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_20 = V_0;
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteral7FDD57A554F4937B1372DCDFBB149567C0704967, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0073;
	}

IL_0055:
	{
		// time *= 60;
		double* L_22 = ___time1;
		double* L_23 = ___time1;
		double L_24 = *((double*)L_23);
		*((double*)L_22) = (double)((double)il2cpp_codegen_multiply((double)L_24, (double)(60.0)));
		// break;
		goto IL_0073;
	}

IL_0065:
	{
		// time *= 60 * 60;
		double* L_25 = ___time1;
		double* L_26 = ___time1;
		double L_27 = *((double*)L_26);
		*((double*)L_25) = (double)((double)il2cpp_codegen_multiply((double)L_27, (double)(3600.0)));
	}

IL_0073:
	{
		// return true;
		return (bool)1;
	}

IL_0075:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController__ctor_m73CB10D7342EE8D30456DE136C7040C6CB785C1B (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerDisplay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerDisplay_Start_m2989259F59276166B1BDB70248C97F790009B3AF (TimerDisplay_t57B43DA79696BE27F3049ACEF3BAF716198EE7CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _uiText = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set__uiText_5(L_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerDisplay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerDisplay_Update_m852DB87673493176197118E1166745CED5CD28BA (TimerDisplay_t57B43DA79696BE27F3049ACEF3BAF716198EE7CD * __this, const RuntimeMethod* method)
{
	{
		// _uiText.text = timer.GetFormattedTimeFromSeconds();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get__uiText_5();
		TimerController_t3035005099318E93DA2D8388A795CD05B604417D * L_1 = __this->get_timer_4();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TimerController_GetFormattedTimeFromSeconds_mC50D3B48CE9A906F63069E6D452CD0EFEA421BBA(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerDisplay__ctor_m35858718740446D539F144C65E05E5144069D14B (TimerDisplay_t57B43DA79696BE27F3049ACEF3BAF716198EE7CD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
