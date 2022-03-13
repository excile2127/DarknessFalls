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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Delegate>
struct Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Delegate>
struct KeyCollection_t0AD2DA40AC8BC38306680EF315DC73A925928BC2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Delegate>
struct ValueCollection_t95FD4F8422D4204F94F64CC2BD10440026707DD0;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Delegate>[]
struct EntryU5BU5D_tD7FCDD66A48A28C1990072180391BBA2D830A0D9;
// System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1;
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
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DistantBackground
struct DistantBackground_tAA29CAA1FF6C76248905FABA29443464952BB257;
// EnemyHitboxResponder
struct EnemyHitboxResponder_t67560E29F581274085582C41B30C95AEC4EC6E5F;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Hitbox
struct Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1;
// HitboxResponder
struct HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C;
// Hurtbox
struct Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012;
// HurtboxResponder
struct HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.Experimental.Rendering.Universal.Light2D
struct Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlatformerCamera
struct PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC;
// PlatformerPlayer
struct PlatformerPlayer_t1EEA73D38617DB797E55BDE5F96AB99BA0F6E651;
// PlayerHurtboxResponder
struct PlayerHurtboxResponder_t35C306FF023C4865F0DD52F4E29629D27E8C84DE;
// RepeatedBackground
struct RepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// TempHitboxController
struct TempHitboxController_tBDC41251AB7820BE491BFA0BE445095F27B0FBE7;
// Torch
struct Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED;
// TorchController
struct TorchController_t7434050B3F78758875007E515A07196A5A2E3879;
// TorchFlicker
struct TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9;
// TorchRadius
struct TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// HitboxResponder/<AttackCoroutine>d__6
struct U3CAttackCoroutineU3Ed__6_t61F905EC8D3888F875EFCD9A032BD26942B90B42;
// HurtboxResponder/<HurtCoroutine>d__5
struct U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B;
// MessengerInternal/BroadcastException
struct BroadcastException_tE2F16986CC332C7EDA6B86CC45B72590515B0A56;
// MessengerInternal/ListenerException
struct ListenerException_tE73B553E8075BABF879CA3DFA2CDD4D6ED29A749;
// TorchController/<PassiveLoseTorchlight>d__18
struct U3CPassiveLoseTorchlightU3Ed__18_t82633CDE44D9228F622F56D2433B5C92BD3A9BA2;
// TorchFlicker/<Flicker>d__20
struct U3CFlickerU3Ed__20_tEBE444594C2546F6F6C399ADE6A8527FCCE7EB63;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BroadcastException_tE2F16986CC332C7EDA6B86CC45B72590515B0A56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListenerException_tE73B553E8075BABF879CA3DFA2CDD4D6ED29A749_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAttackCoroutineU3Ed__6_t61F905EC8D3888F875EFCD9A032BD26942B90B42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFlickerU3Ed__20_tEBE444594C2546F6F6C399ADE6A8527FCCE7EB63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPassiveLoseTorchlightU3Ed__18_t82633CDE44D9228F622F56D2433B5C92BD3A9BA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0DACDC65392B469F122731F31A54B00AEAC89CD3;
IL2CPP_EXTERN_C String_t* _stringLiteral1C0CAE471F0DB9CAB86D11A4A09B7515A93C4F5B;
IL2CPP_EXTERN_C String_t* _stringLiteral290B876AA43C7C6F2942B6120BCBD9979FFFFB08;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral405E8E2C2849E67B92C235BF5EE228BD845DA6FB;
IL2CPP_EXTERN_C String_t* _stringLiteral527C0AEB874B42DB0817D46374DE8B6844AA3587;
IL2CPP_EXTERN_C String_t* _stringLiteral75FB5064DCAC9D486827BE30A90E0388B3ECB368;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral869BDC11A573306F1810123274FC58775C28A483;
IL2CPP_EXTERN_C String_t* _stringLiteral99696C7D6AC57E0F5C75D9B574BC1C8C9817D13C;
IL2CPP_EXTERN_C String_t* _stringLiteral9A585FEB8EC7C6EDDBD59F139E12803C0F90F60E;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE4A06AE7D3148AF9CD98AF0B0DC4B57105C8E90E;
IL2CPP_EXTERN_C String_t* _stringLiteralEBF289997F8E08C52B1ACA31CDB13BF770C7D4E9;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C_mC977126AC3B839C501778CB3B07104C1AF5A8E47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1_m53D17A66F619925751E2E994AD65A0FEE434E86D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC_mA527F71BBF1E39A924FDF3B1DA72EB21F523336E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHurtbox_t24F500594B4FF288922299618B8C2857D3F08012_m4C786AE19FE4886A7056921436EAC93917B09844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m2F3DE9B931439C147D47AF607AAEBD9B1CBCA0F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTorch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED_mC6692ACCBC466C7E35803CD3CBCCB5FDC01B2A20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m452488D89E0EAE6D5ED8A7ABD7EA431021208FD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m358B0C67A935CC016F723C4BD54BB219660EFF4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mDA53EAA38E54A0AE239561F7E5088F6C4E55FA6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m210799E1C2576446641CA24C1D9463F791556112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8718EF71937922D19BC098D81DC080A77D1FFFCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD905CE374900422217A27DA1E4336DE0F82959B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9_m875397C799581838F000735A907F2BABE5E39D8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessengerInternal_GetInvocationList_TisAction_tAF41423D285AE0862865348CF6CE51CD085ABBA6_m31575B2B83B42F0B62F619517C11874BBDC0D02C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessengerInternal_OnBroadcasting_mA5D03B0E019323AA80AC542792F52E90A736BD5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessengerInternal_OnListenerAdding_m4834299F957BC198727BDC94651FBD1029BBADFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessengerInternal_OnListenerRemoving_mF1E7EC12A334D430C3727F8C68861C4DE32A324A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TorchController_OnDoubleAction_m2D22E96A68EDFCE0EEA6CE7C9368A5D45612F456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TorchController_OnEnemySlayed_m920B3863255CACEB4CEB295419F4A91609A2F626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TorchController_OnPlayerFell_mCB9F3DEA155D183107C8DC0D9E7DF7E104D3A348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TorchController_OnPlayerHit_mF5BE654E1F09E16D1A4E69C8C9ACF7DD2A291887_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TorchRadius_OnTorchChanged_m60EE1A26A97AFB7380ACF214F253953CBF7353CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAttackCoroutineU3Ed__6_System_Collections_IEnumerator_Reset_m454D96F1DEA467EBB7E7F7BF979787B5B4F39410_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFlickerU3Ed__20_System_Collections_IEnumerator_Reset_m88747022DED199159907EB85F6B909DBB156EB1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHurtCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m1494364D1485C449385D5F75F57D36355659031F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPassiveLoseTorchlightU3Ed__18_System_Collections_IEnumerator_Reset_m8276C0945E44C4914427B5C448D26DF8540B3B22_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2;
struct Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Delegate>
struct Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD7FCDD66A48A28C1990072180391BBA2D830A0D9* ___entries_1;
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
	KeyCollection_t0AD2DA40AC8BC38306680EF315DC73A925928BC2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t95FD4F8422D4204F94F64CC2BD10440026707DD0 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ___entries_1)); }
	inline EntryU5BU5D_tD7FCDD66A48A28C1990072180391BBA2D830A0D9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD7FCDD66A48A28C1990072180391BBA2D830A0D9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD7FCDD66A48A28C1990072180391BBA2D830A0D9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ___keys_7)); }
	inline KeyCollection_t0AD2DA40AC8BC38306680EF315DC73A925928BC2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0AD2DA40AC8BC38306680EF315DC73A925928BC2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0AD2DA40AC8BC38306680EF315DC73A925928BC2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ___values_8)); }
	inline ValueCollection_t95FD4F8422D4204F94F64CC2BD10440026707DD0 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t95FD4F8422D4204F94F64CC2BD10440026707DD0 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t95FD4F8422D4204F94F64CC2BD10440026707DD0 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// GameEvent
struct GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Messenger
struct Messenger_tBCC3CB2B80BF930B2100230D876ACE3702B2C178  : public RuntimeObject
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

// HitboxResponder/<AttackCoroutine>d__6
struct U3CAttackCoroutineU3Ed__6_t61F905EC8D3888F875EFCD9A032BD26942B90B42  : public RuntimeObject
{
public:
	// System.Int32 HitboxResponder/<AttackCoroutine>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HitboxResponder/<AttackCoroutine>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// HitboxResponder HitboxResponder/<AttackCoroutine>d__6::<>4__this
	HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAttackCoroutineU3Ed__6_t61F905EC8D3888F875EFCD9A032BD26942B90B42, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAttackCoroutineU3Ed__6_t61F905EC8D3888F875EFCD9A032BD26942B90B42, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAttackCoroutineU3Ed__6_t61F905EC8D3888F875EFCD9A032BD26942B90B42, ___U3CU3E4__this_2)); }
	inline HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// HurtboxResponder/<HurtCoroutine>d__5
struct U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B  : public RuntimeObject
{
public:
	// System.Int32 HurtboxResponder/<HurtCoroutine>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HurtboxResponder/<HurtCoroutine>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// HurtboxResponder HurtboxResponder/<HurtCoroutine>d__5::<>4__this
	HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * ___U3CU3E4__this_2;
	// System.String HurtboxResponder/<HurtCoroutine>d__5::parameter
	String_t* ___parameter_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B, ___U3CU3E4__this_2)); }
	inline HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_parameter_3() { return static_cast<int32_t>(offsetof(U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B, ___parameter_3)); }
	inline String_t* get_parameter_3() const { return ___parameter_3; }
	inline String_t** get_address_of_parameter_3() { return &___parameter_3; }
	inline void set_parameter_3(String_t* value)
	{
		___parameter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parameter_3), (void*)value);
	}
};


// TorchController/<PassiveLoseTorchlight>d__18
struct U3CPassiveLoseTorchlightU3Ed__18_t82633CDE44D9228F622F56D2433B5C92BD3A9BA2  : public RuntimeObject
{
public:
	// System.Int32 TorchController/<PassiveLoseTorchlight>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TorchController/<PassiveLoseTorchlight>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TorchController TorchController/<PassiveLoseTorchlight>d__18::<>4__this
	TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPassiveLoseTorchlightU3Ed__18_t82633CDE44D9228F622F56D2433B5C92BD3A9BA2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPassiveLoseTorchlightU3Ed__18_t82633CDE44D9228F622F56D2433B5C92BD3A9BA2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPassiveLoseTorchlightU3Ed__18_t82633CDE44D9228F622F56D2433B5C92BD3A9BA2, ___U3CU3E4__this_2)); }
	inline TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TorchController_t7434050B3F78758875007E515A07196A5A2E3879 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TorchFlicker/<Flicker>d__20
struct U3CFlickerU3Ed__20_tEBE444594C2546F6F6C399ADE6A8527FCCE7EB63  : public RuntimeObject
{
public:
	// System.Int32 TorchFlicker/<Flicker>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TorchFlicker/<Flicker>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TorchFlicker TorchFlicker/<Flicker>d__20::<>4__this
	TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFlickerU3Ed__20_tEBE444594C2546F6F6C399ADE6A8527FCCE7EB63, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFlickerU3Ed__20_tEBE444594C2546F6F6C399ADE6A8527FCCE7EB63, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFlickerU3Ed__20_tEBE444594C2546F6F6C399ADE6A8527FCCE7EB63, ___U3CU3E4__this_2)); }
	inline TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
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

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.BoundingSphere
struct BoundingSphere_t97CFF9ADC6DC8157DBA993251691A9868DAFF709 
{
public:
	// UnityEngine.Vector3 UnityEngine.BoundingSphere::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// System.Single UnityEngine.BoundingSphere::radius
	float ___radius_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(BoundingSphere_t97CFF9ADC6DC8157DBA993251691A9868DAFF709, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_radius_1() { return static_cast<int32_t>(offsetof(BoundingSphere_t97CFF9ADC6DC8157DBA993251691A9868DAFF709, ___radius_1)); }
	inline float get_radius_1() const { return ___radius_1; }
	inline float* get_address_of_radius_1() { return &___radius_1; }
	inline void set_radius_1(float value)
	{
		___radius_1 = value;
	}
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// ColliderState
struct ColliderState_t5E9197B21E23AB86D983C896EC58E67342AA7D6E 
{
public:
	// System.Int32 ColliderState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColliderState_t5E9197B21E23AB86D983C896EC58E67342AA7D6E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.ForceMode2D
struct ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MessengerMode
struct MessengerMode_t1F8188F3FC74D2DDA7462154A8721293C8CC3B23 
{
public:
	// System.Int32 MessengerMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessengerMode_t1F8188F3FC74D2DDA7462154A8721293C8CC3B23, ___value___2)); }
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.Light2D/LightType
struct LightType_t932AA0C9AE514928E47B04E01E108889E66CF5CD 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D/LightType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t932AA0C9AE514928E47B04E01E108889E66CF5CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.Light2D/PointLightQuality
struct PointLightQuality_t71B86FB9E127F9DD2550B2C774BCB9F9DB404C55 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D/PointLightQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PointLightQuality_t71B86FB9E127F9DD2550B2C774BCB9F9DB404C55, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PlatformerPlayer/DashState
struct DashState_tE46770D85917C3CFC27B15D243F400E8ED06EEE7 
{
public:
	// System.Int32 PlatformerPlayer/DashState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DashState_tE46770D85917C3CFC27B15D243F400E8ED06EEE7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// MessengerInternal
struct MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0  : public RuntimeObject
{
public:

public:
};

struct MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Delegate> MessengerInternal::eventTable
	Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * ___eventTable_0;
	// MessengerMode MessengerInternal::DEFAULT_MODE
	int32_t ___DEFAULT_MODE_1;

public:
	inline static int32_t get_offset_of_eventTable_0() { return static_cast<int32_t>(offsetof(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_StaticFields, ___eventTable_0)); }
	inline Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * get_eventTable_0() const { return ___eventTable_0; }
	inline Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD ** get_address_of_eventTable_0() { return &___eventTable_0; }
	inline void set_eventTable_0(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * value)
	{
		___eventTable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventTable_0), (void*)value);
	}

	inline static int32_t get_offset_of_DEFAULT_MODE_1() { return static_cast<int32_t>(offsetof(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_StaticFields, ___DEFAULT_MODE_1)); }
	inline int32_t get_DEFAULT_MODE_1() const { return ___DEFAULT_MODE_1; }
	inline int32_t* get_address_of_DEFAULT_MODE_1() { return &___DEFAULT_MODE_1; }
	inline void set_DEFAULT_MODE_1(int32_t value)
	{
		___DEFAULT_MODE_1 = value;
	}
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


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// MessengerInternal/BroadcastException
struct BroadcastException_tE2F16986CC332C7EDA6B86CC45B72590515B0A56  : public Exception_t
{
public:

public:
};


// MessengerInternal/ListenerException
struct ListenerException_tE73B553E8075BABF879CA3DFA2CDD4D6ED29A749  : public Exception_t
{
public:

public:
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


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// DistantBackground
struct DistantBackground_tAA29CAA1FF6C76248905FABA29443464952BB257  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single DistantBackground::distanceDivisor
	float ___distanceDivisor_4;
	// UnityEngine.Transform DistantBackground::backgroundTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___backgroundTransform_5;
	// UnityEngine.Transform DistantBackground::cameraTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___cameraTransform_6;
	// System.Single DistantBackground::cameraLastX
	float ___cameraLastX_7;

public:
	inline static int32_t get_offset_of_distanceDivisor_4() { return static_cast<int32_t>(offsetof(DistantBackground_tAA29CAA1FF6C76248905FABA29443464952BB257, ___distanceDivisor_4)); }
	inline float get_distanceDivisor_4() const { return ___distanceDivisor_4; }
	inline float* get_address_of_distanceDivisor_4() { return &___distanceDivisor_4; }
	inline void set_distanceDivisor_4(float value)
	{
		___distanceDivisor_4 = value;
	}

	inline static int32_t get_offset_of_backgroundTransform_5() { return static_cast<int32_t>(offsetof(DistantBackground_tAA29CAA1FF6C76248905FABA29443464952BB257, ___backgroundTransform_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_backgroundTransform_5() const { return ___backgroundTransform_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_backgroundTransform_5() { return &___backgroundTransform_5; }
	inline void set_backgroundTransform_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___backgroundTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundTransform_5), (void*)value);
	}

	inline static int32_t get_offset_of_cameraTransform_6() { return static_cast<int32_t>(offsetof(DistantBackground_tAA29CAA1FF6C76248905FABA29443464952BB257, ___cameraTransform_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_cameraTransform_6() const { return ___cameraTransform_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_cameraTransform_6() { return &___cameraTransform_6; }
	inline void set_cameraTransform_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___cameraTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraTransform_6), (void*)value);
	}

	inline static int32_t get_offset_of_cameraLastX_7() { return static_cast<int32_t>(offsetof(DistantBackground_tAA29CAA1FF6C76248905FABA29443464952BB257, ___cameraLastX_7)); }
	inline float get_cameraLastX_7() const { return ___cameraLastX_7; }
	inline float* get_address_of_cameraLastX_7() { return &___cameraLastX_7; }
	inline void set_cameraLastX_7(float value)
	{
		___cameraLastX_7 = value;
	}
};


// Hitbox
struct Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Hitbox::active
	bool ___active_4;
	// UnityEngine.Color Hitbox::closedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___closedColor_5;
	// UnityEngine.Color Hitbox::openColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___openColor_6;
	// UnityEngine.Color Hitbox::collidingColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___collidingColor_7;
	// System.Single Hitbox::transparency
	float ___transparency_8;
	// ColliderState Hitbox::_colliderState
	int32_t ____colliderState_9;
	// UnityEngine.LayerMask Hitbox::_layerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ____layerMask_10;
	// HitboxResponder Hitbox::_hitboxResponder
	HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * ____hitboxResponder_11;

public:
	inline static int32_t get_offset_of_active_4() { return static_cast<int32_t>(offsetof(Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1, ___active_4)); }
	inline bool get_active_4() const { return ___active_4; }
	inline bool* get_address_of_active_4() { return &___active_4; }
	inline void set_active_4(bool value)
	{
		___active_4 = value;
	}

	inline static int32_t get_offset_of_closedColor_5() { return static_cast<int32_t>(offsetof(Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1, ___closedColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_closedColor_5() const { return ___closedColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_closedColor_5() { return &___closedColor_5; }
	inline void set_closedColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___closedColor_5 = value;
	}

	inline static int32_t get_offset_of_openColor_6() { return static_cast<int32_t>(offsetof(Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1, ___openColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_openColor_6() const { return ___openColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_openColor_6() { return &___openColor_6; }
	inline void set_openColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___openColor_6 = value;
	}

	inline static int32_t get_offset_of_collidingColor_7() { return static_cast<int32_t>(offsetof(Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1, ___collidingColor_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_collidingColor_7() const { return ___collidingColor_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_collidingColor_7() { return &___collidingColor_7; }
	inline void set_collidingColor_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___collidingColor_7 = value;
	}

	inline static int32_t get_offset_of_transparency_8() { return static_cast<int32_t>(offsetof(Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1, ___transparency_8)); }
	inline float get_transparency_8() const { return ___transparency_8; }
	inline float* get_address_of_transparency_8() { return &___transparency_8; }
	inline void set_transparency_8(float value)
	{
		___transparency_8 = value;
	}

	inline static int32_t get_offset_of__colliderState_9() { return static_cast<int32_t>(offsetof(Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1, ____colliderState_9)); }
	inline int32_t get__colliderState_9() const { return ____colliderState_9; }
	inline int32_t* get_address_of__colliderState_9() { return &____colliderState_9; }
	inline void set__colliderState_9(int32_t value)
	{
		____colliderState_9 = value;
	}

	inline static int32_t get_offset_of__layerMask_10() { return static_cast<int32_t>(offsetof(Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1, ____layerMask_10)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get__layerMask_10() const { return ____layerMask_10; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of__layerMask_10() { return &____layerMask_10; }
	inline void set__layerMask_10(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		____layerMask_10 = value;
	}

	inline static int32_t get_offset_of__hitboxResponder_11() { return static_cast<int32_t>(offsetof(Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1, ____hitboxResponder_11)); }
	inline HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * get__hitboxResponder_11() const { return ____hitboxResponder_11; }
	inline HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C ** get_address_of__hitboxResponder_11() { return &____hitboxResponder_11; }
	inline void set__hitboxResponder_11(HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * value)
	{
		____hitboxResponder_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hitboxResponder_11), (void*)value);
	}
};


// HitboxResponder
struct HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single HitboxResponder::attackDuration
	float ___attackDuration_4;
	// Hitbox HitboxResponder::_hitbox
	Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * ____hitbox_5;

public:
	inline static int32_t get_offset_of_attackDuration_4() { return static_cast<int32_t>(offsetof(HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C, ___attackDuration_4)); }
	inline float get_attackDuration_4() const { return ___attackDuration_4; }
	inline float* get_address_of_attackDuration_4() { return &___attackDuration_4; }
	inline void set_attackDuration_4(float value)
	{
		___attackDuration_4 = value;
	}

	inline static int32_t get_offset_of__hitbox_5() { return static_cast<int32_t>(offsetof(HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C, ____hitbox_5)); }
	inline Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * get__hitbox_5() const { return ____hitbox_5; }
	inline Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 ** get_address_of__hitbox_5() { return &____hitbox_5; }
	inline void set__hitbox_5(Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * value)
	{
		____hitbox_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hitbox_5), (void*)value);
	}
};


// Hurtbox
struct Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Hurtbox::active
	bool ___active_4;
	// UnityEngine.Color Hurtbox::activeColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___activeColor_5;
	// UnityEngine.Color Hurtbox::inactiveColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___inactiveColor_6;
	// System.Single Hurtbox::transparency
	float ___transparency_7;
	// HurtboxResponder Hurtbox::hurtboxResponder
	HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * ___hurtboxResponder_8;
	// UnityEngine.BoxCollider2D Hurtbox::_boxCollider
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * ____boxCollider_9;

public:
	inline static int32_t get_offset_of_active_4() { return static_cast<int32_t>(offsetof(Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012, ___active_4)); }
	inline bool get_active_4() const { return ___active_4; }
	inline bool* get_address_of_active_4() { return &___active_4; }
	inline void set_active_4(bool value)
	{
		___active_4 = value;
	}

	inline static int32_t get_offset_of_activeColor_5() { return static_cast<int32_t>(offsetof(Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012, ___activeColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_activeColor_5() const { return ___activeColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_activeColor_5() { return &___activeColor_5; }
	inline void set_activeColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___activeColor_5 = value;
	}

	inline static int32_t get_offset_of_inactiveColor_6() { return static_cast<int32_t>(offsetof(Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012, ___inactiveColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_inactiveColor_6() const { return ___inactiveColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_inactiveColor_6() { return &___inactiveColor_6; }
	inline void set_inactiveColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___inactiveColor_6 = value;
	}

	inline static int32_t get_offset_of_transparency_7() { return static_cast<int32_t>(offsetof(Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012, ___transparency_7)); }
	inline float get_transparency_7() const { return ___transparency_7; }
	inline float* get_address_of_transparency_7() { return &___transparency_7; }
	inline void set_transparency_7(float value)
	{
		___transparency_7 = value;
	}

	inline static int32_t get_offset_of_hurtboxResponder_8() { return static_cast<int32_t>(offsetof(Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012, ___hurtboxResponder_8)); }
	inline HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * get_hurtboxResponder_8() const { return ___hurtboxResponder_8; }
	inline HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC ** get_address_of_hurtboxResponder_8() { return &___hurtboxResponder_8; }
	inline void set_hurtboxResponder_8(HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * value)
	{
		___hurtboxResponder_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hurtboxResponder_8), (void*)value);
	}

	inline static int32_t get_offset_of__boxCollider_9() { return static_cast<int32_t>(offsetof(Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012, ____boxCollider_9)); }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * get__boxCollider_9() const { return ____boxCollider_9; }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 ** get_address_of__boxCollider_9() { return &____boxCollider_9; }
	inline void set__boxCollider_9(BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * value)
	{
		____boxCollider_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____boxCollider_9), (void*)value);
	}
};


// HurtboxResponder
struct HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single HurtboxResponder::immunityDuration
	float ___immunityDuration_4;
	// Hurtbox HurtboxResponder::_hurtbox
	Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * ____hurtbox_5;

public:
	inline static int32_t get_offset_of_immunityDuration_4() { return static_cast<int32_t>(offsetof(HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC, ___immunityDuration_4)); }
	inline float get_immunityDuration_4() const { return ___immunityDuration_4; }
	inline float* get_address_of_immunityDuration_4() { return &___immunityDuration_4; }
	inline void set_immunityDuration_4(float value)
	{
		___immunityDuration_4 = value;
	}

	inline static int32_t get_offset_of__hurtbox_5() { return static_cast<int32_t>(offsetof(HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC, ____hurtbox_5)); }
	inline Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * get__hurtbox_5() const { return ____hurtbox_5; }
	inline Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 ** get_address_of__hurtbox_5() { return &____hurtbox_5; }
	inline void set__hurtbox_5(Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * value)
	{
		____hurtbox_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hurtbox_5), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.Universal.Light2D
struct Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Experimental.Rendering.Universal.Light2D/LightType UnityEngine.Experimental.Rendering.Universal.Light2D::m_LightType
	int32_t ___m_LightType_4;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D::m_BlendStyleIndex
	int32_t ___m_BlendStyleIndex_5;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_FalloffIntensity
	float ___m_FalloffIntensity_6;
	// UnityEngine.Color UnityEngine.Experimental.Rendering.Universal.Light2D::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_Intensity
	float ___m_Intensity_8;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_LightVolumeOpacity
	float ___m_LightVolumeOpacity_9;
	// System.Int32[] UnityEngine.Experimental.Rendering.Universal.Light2D::m_ApplyToSortingLayers
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m_ApplyToSortingLayers_10;
	// UnityEngine.Sprite UnityEngine.Experimental.Rendering.Universal.Light2D::m_LightCookieSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_LightCookieSprite_11;
	// System.Boolean UnityEngine.Experimental.Rendering.Universal.Light2D::m_UseNormalMap
	bool ___m_UseNormalMap_12;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D::m_LightOrder
	int32_t ___m_LightOrder_13;
	// System.Boolean UnityEngine.Experimental.Rendering.Universal.Light2D::m_AlphaBlendOnOverlap
	bool ___m_AlphaBlendOnOverlap_14;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShadowIntensity
	float ___m_ShadowIntensity_15;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShadowVolumeIntensity
	float ___m_ShadowVolumeIntensity_16;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousLightCookieSprite
	int32_t ___m_PreviousLightCookieSprite_17;
	// UnityEngine.Mesh UnityEngine.Experimental.Rendering.Universal.Light2D::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_18;
	// UnityEngine.Bounds UnityEngine.Experimental.Rendering.Universal.Light2D::m_LocalBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_LocalBounds_19;
	// UnityEngine.BoundingSphere UnityEngine.Experimental.Rendering.Universal.Light2D::<boundingSphere>k__BackingField
	BoundingSphere_t97CFF9ADC6DC8157DBA993251691A9868DAFF709  ___U3CboundingSphereU3Ek__BackingField_20;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PointLightInnerAngle
	float ___m_PointLightInnerAngle_21;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PointLightOuterAngle
	float ___m_PointLightOuterAngle_22;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PointLightInnerRadius
	float ___m_PointLightInnerRadius_23;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PointLightOuterRadius
	float ___m_PointLightOuterRadius_24;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PointLightDistance
	float ___m_PointLightDistance_25;
	// UnityEngine.Experimental.Rendering.Universal.Light2D/PointLightQuality UnityEngine.Experimental.Rendering.Universal.Light2D::m_PointLightQuality
	int32_t ___m_PointLightQuality_26;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShapeLightParametricSides
	int32_t ___m_ShapeLightParametricSides_27;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShapeLightParametricAngleOffset
	float ___m_ShapeLightParametricAngleOffset_28;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShapeLightParametricRadius
	float ___m_ShapeLightParametricRadius_29;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShapeLightFalloffSize
	float ___m_ShapeLightFalloffSize_30;
	// UnityEngine.Vector2 UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShapeLightFalloffOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_ShapeLightFalloffOffset_31;
	// UnityEngine.Vector3[] UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShapePath
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_ShapePath_32;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousShapeLightFalloffSize
	float ___m_PreviousShapeLightFalloffSize_33;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousShapeLightParametricSides
	int32_t ___m_PreviousShapeLightParametricSides_34;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousShapeLightParametricAngleOffset
	float ___m_PreviousShapeLightParametricAngleOffset_35;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousShapeLightParametricRadius
	float ___m_PreviousShapeLightParametricRadius_36;

public:
	inline static int32_t get_offset_of_m_LightType_4() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_LightType_4)); }
	inline int32_t get_m_LightType_4() const { return ___m_LightType_4; }
	inline int32_t* get_address_of_m_LightType_4() { return &___m_LightType_4; }
	inline void set_m_LightType_4(int32_t value)
	{
		___m_LightType_4 = value;
	}

	inline static int32_t get_offset_of_m_BlendStyleIndex_5() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_BlendStyleIndex_5)); }
	inline int32_t get_m_BlendStyleIndex_5() const { return ___m_BlendStyleIndex_5; }
	inline int32_t* get_address_of_m_BlendStyleIndex_5() { return &___m_BlendStyleIndex_5; }
	inline void set_m_BlendStyleIndex_5(int32_t value)
	{
		___m_BlendStyleIndex_5 = value;
	}

	inline static int32_t get_offset_of_m_FalloffIntensity_6() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_FalloffIntensity_6)); }
	inline float get_m_FalloffIntensity_6() const { return ___m_FalloffIntensity_6; }
	inline float* get_address_of_m_FalloffIntensity_6() { return &___m_FalloffIntensity_6; }
	inline void set_m_FalloffIntensity_6(float value)
	{
		___m_FalloffIntensity_6 = value;
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_Intensity_8() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_Intensity_8)); }
	inline float get_m_Intensity_8() const { return ___m_Intensity_8; }
	inline float* get_address_of_m_Intensity_8() { return &___m_Intensity_8; }
	inline void set_m_Intensity_8(float value)
	{
		___m_Intensity_8 = value;
	}

	inline static int32_t get_offset_of_m_LightVolumeOpacity_9() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_LightVolumeOpacity_9)); }
	inline float get_m_LightVolumeOpacity_9() const { return ___m_LightVolumeOpacity_9; }
	inline float* get_address_of_m_LightVolumeOpacity_9() { return &___m_LightVolumeOpacity_9; }
	inline void set_m_LightVolumeOpacity_9(float value)
	{
		___m_LightVolumeOpacity_9 = value;
	}

	inline static int32_t get_offset_of_m_ApplyToSortingLayers_10() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ApplyToSortingLayers_10)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_m_ApplyToSortingLayers_10() const { return ___m_ApplyToSortingLayers_10; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_m_ApplyToSortingLayers_10() { return &___m_ApplyToSortingLayers_10; }
	inline void set_m_ApplyToSortingLayers_10(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___m_ApplyToSortingLayers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ApplyToSortingLayers_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_LightCookieSprite_11() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_LightCookieSprite_11)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_LightCookieSprite_11() const { return ___m_LightCookieSprite_11; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_LightCookieSprite_11() { return &___m_LightCookieSprite_11; }
	inline void set_m_LightCookieSprite_11(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_LightCookieSprite_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LightCookieSprite_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_UseNormalMap_12() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_UseNormalMap_12)); }
	inline bool get_m_UseNormalMap_12() const { return ___m_UseNormalMap_12; }
	inline bool* get_address_of_m_UseNormalMap_12() { return &___m_UseNormalMap_12; }
	inline void set_m_UseNormalMap_12(bool value)
	{
		___m_UseNormalMap_12 = value;
	}

	inline static int32_t get_offset_of_m_LightOrder_13() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_LightOrder_13)); }
	inline int32_t get_m_LightOrder_13() const { return ___m_LightOrder_13; }
	inline int32_t* get_address_of_m_LightOrder_13() { return &___m_LightOrder_13; }
	inline void set_m_LightOrder_13(int32_t value)
	{
		___m_LightOrder_13 = value;
	}

	inline static int32_t get_offset_of_m_AlphaBlendOnOverlap_14() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_AlphaBlendOnOverlap_14)); }
	inline bool get_m_AlphaBlendOnOverlap_14() const { return ___m_AlphaBlendOnOverlap_14; }
	inline bool* get_address_of_m_AlphaBlendOnOverlap_14() { return &___m_AlphaBlendOnOverlap_14; }
	inline void set_m_AlphaBlendOnOverlap_14(bool value)
	{
		___m_AlphaBlendOnOverlap_14 = value;
	}

	inline static int32_t get_offset_of_m_ShadowIntensity_15() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShadowIntensity_15)); }
	inline float get_m_ShadowIntensity_15() const { return ___m_ShadowIntensity_15; }
	inline float* get_address_of_m_ShadowIntensity_15() { return &___m_ShadowIntensity_15; }
	inline void set_m_ShadowIntensity_15(float value)
	{
		___m_ShadowIntensity_15 = value;
	}

	inline static int32_t get_offset_of_m_ShadowVolumeIntensity_16() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShadowVolumeIntensity_16)); }
	inline float get_m_ShadowVolumeIntensity_16() const { return ___m_ShadowVolumeIntensity_16; }
	inline float* get_address_of_m_ShadowVolumeIntensity_16() { return &___m_ShadowVolumeIntensity_16; }
	inline void set_m_ShadowVolumeIntensity_16(float value)
	{
		___m_ShadowVolumeIntensity_16 = value;
	}

	inline static int32_t get_offset_of_m_PreviousLightCookieSprite_17() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousLightCookieSprite_17)); }
	inline int32_t get_m_PreviousLightCookieSprite_17() const { return ___m_PreviousLightCookieSprite_17; }
	inline int32_t* get_address_of_m_PreviousLightCookieSprite_17() { return &___m_PreviousLightCookieSprite_17; }
	inline void set_m_PreviousLightCookieSprite_17(int32_t value)
	{
		___m_PreviousLightCookieSprite_17 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_18() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_Mesh_18)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_18() const { return ___m_Mesh_18; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_18() { return &___m_Mesh_18; }
	inline void set_m_Mesh_18(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalBounds_19() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_LocalBounds_19)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_LocalBounds_19() const { return ___m_LocalBounds_19; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_LocalBounds_19() { return &___m_LocalBounds_19; }
	inline void set_m_LocalBounds_19(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_LocalBounds_19 = value;
	}

	inline static int32_t get_offset_of_U3CboundingSphereU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___U3CboundingSphereU3Ek__BackingField_20)); }
	inline BoundingSphere_t97CFF9ADC6DC8157DBA993251691A9868DAFF709  get_U3CboundingSphereU3Ek__BackingField_20() const { return ___U3CboundingSphereU3Ek__BackingField_20; }
	inline BoundingSphere_t97CFF9ADC6DC8157DBA993251691A9868DAFF709 * get_address_of_U3CboundingSphereU3Ek__BackingField_20() { return &___U3CboundingSphereU3Ek__BackingField_20; }
	inline void set_U3CboundingSphereU3Ek__BackingField_20(BoundingSphere_t97CFF9ADC6DC8157DBA993251691A9868DAFF709  value)
	{
		___U3CboundingSphereU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_m_PointLightInnerAngle_21() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PointLightInnerAngle_21)); }
	inline float get_m_PointLightInnerAngle_21() const { return ___m_PointLightInnerAngle_21; }
	inline float* get_address_of_m_PointLightInnerAngle_21() { return &___m_PointLightInnerAngle_21; }
	inline void set_m_PointLightInnerAngle_21(float value)
	{
		___m_PointLightInnerAngle_21 = value;
	}

	inline static int32_t get_offset_of_m_PointLightOuterAngle_22() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PointLightOuterAngle_22)); }
	inline float get_m_PointLightOuterAngle_22() const { return ___m_PointLightOuterAngle_22; }
	inline float* get_address_of_m_PointLightOuterAngle_22() { return &___m_PointLightOuterAngle_22; }
	inline void set_m_PointLightOuterAngle_22(float value)
	{
		___m_PointLightOuterAngle_22 = value;
	}

	inline static int32_t get_offset_of_m_PointLightInnerRadius_23() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PointLightInnerRadius_23)); }
	inline float get_m_PointLightInnerRadius_23() const { return ___m_PointLightInnerRadius_23; }
	inline float* get_address_of_m_PointLightInnerRadius_23() { return &___m_PointLightInnerRadius_23; }
	inline void set_m_PointLightInnerRadius_23(float value)
	{
		___m_PointLightInnerRadius_23 = value;
	}

	inline static int32_t get_offset_of_m_PointLightOuterRadius_24() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PointLightOuterRadius_24)); }
	inline float get_m_PointLightOuterRadius_24() const { return ___m_PointLightOuterRadius_24; }
	inline float* get_address_of_m_PointLightOuterRadius_24() { return &___m_PointLightOuterRadius_24; }
	inline void set_m_PointLightOuterRadius_24(float value)
	{
		___m_PointLightOuterRadius_24 = value;
	}

	inline static int32_t get_offset_of_m_PointLightDistance_25() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PointLightDistance_25)); }
	inline float get_m_PointLightDistance_25() const { return ___m_PointLightDistance_25; }
	inline float* get_address_of_m_PointLightDistance_25() { return &___m_PointLightDistance_25; }
	inline void set_m_PointLightDistance_25(float value)
	{
		___m_PointLightDistance_25 = value;
	}

	inline static int32_t get_offset_of_m_PointLightQuality_26() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PointLightQuality_26)); }
	inline int32_t get_m_PointLightQuality_26() const { return ___m_PointLightQuality_26; }
	inline int32_t* get_address_of_m_PointLightQuality_26() { return &___m_PointLightQuality_26; }
	inline void set_m_PointLightQuality_26(int32_t value)
	{
		___m_PointLightQuality_26 = value;
	}

	inline static int32_t get_offset_of_m_ShapeLightParametricSides_27() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShapeLightParametricSides_27)); }
	inline int32_t get_m_ShapeLightParametricSides_27() const { return ___m_ShapeLightParametricSides_27; }
	inline int32_t* get_address_of_m_ShapeLightParametricSides_27() { return &___m_ShapeLightParametricSides_27; }
	inline void set_m_ShapeLightParametricSides_27(int32_t value)
	{
		___m_ShapeLightParametricSides_27 = value;
	}

	inline static int32_t get_offset_of_m_ShapeLightParametricAngleOffset_28() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShapeLightParametricAngleOffset_28)); }
	inline float get_m_ShapeLightParametricAngleOffset_28() const { return ___m_ShapeLightParametricAngleOffset_28; }
	inline float* get_address_of_m_ShapeLightParametricAngleOffset_28() { return &___m_ShapeLightParametricAngleOffset_28; }
	inline void set_m_ShapeLightParametricAngleOffset_28(float value)
	{
		___m_ShapeLightParametricAngleOffset_28 = value;
	}

	inline static int32_t get_offset_of_m_ShapeLightParametricRadius_29() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShapeLightParametricRadius_29)); }
	inline float get_m_ShapeLightParametricRadius_29() const { return ___m_ShapeLightParametricRadius_29; }
	inline float* get_address_of_m_ShapeLightParametricRadius_29() { return &___m_ShapeLightParametricRadius_29; }
	inline void set_m_ShapeLightParametricRadius_29(float value)
	{
		___m_ShapeLightParametricRadius_29 = value;
	}

	inline static int32_t get_offset_of_m_ShapeLightFalloffSize_30() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShapeLightFalloffSize_30)); }
	inline float get_m_ShapeLightFalloffSize_30() const { return ___m_ShapeLightFalloffSize_30; }
	inline float* get_address_of_m_ShapeLightFalloffSize_30() { return &___m_ShapeLightFalloffSize_30; }
	inline void set_m_ShapeLightFalloffSize_30(float value)
	{
		___m_ShapeLightFalloffSize_30 = value;
	}

	inline static int32_t get_offset_of_m_ShapeLightFalloffOffset_31() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShapeLightFalloffOffset_31)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_ShapeLightFalloffOffset_31() const { return ___m_ShapeLightFalloffOffset_31; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_ShapeLightFalloffOffset_31() { return &___m_ShapeLightFalloffOffset_31; }
	inline void set_m_ShapeLightFalloffOffset_31(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_ShapeLightFalloffOffset_31 = value;
	}

	inline static int32_t get_offset_of_m_ShapePath_32() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShapePath_32)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_ShapePath_32() const { return ___m_ShapePath_32; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_ShapePath_32() { return &___m_ShapePath_32; }
	inline void set_m_ShapePath_32(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_ShapePath_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShapePath_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousShapeLightFalloffSize_33() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousShapeLightFalloffSize_33)); }
	inline float get_m_PreviousShapeLightFalloffSize_33() const { return ___m_PreviousShapeLightFalloffSize_33; }
	inline float* get_address_of_m_PreviousShapeLightFalloffSize_33() { return &___m_PreviousShapeLightFalloffSize_33; }
	inline void set_m_PreviousShapeLightFalloffSize_33(float value)
	{
		___m_PreviousShapeLightFalloffSize_33 = value;
	}

	inline static int32_t get_offset_of_m_PreviousShapeLightParametricSides_34() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousShapeLightParametricSides_34)); }
	inline int32_t get_m_PreviousShapeLightParametricSides_34() const { return ___m_PreviousShapeLightParametricSides_34; }
	inline int32_t* get_address_of_m_PreviousShapeLightParametricSides_34() { return &___m_PreviousShapeLightParametricSides_34; }
	inline void set_m_PreviousShapeLightParametricSides_34(int32_t value)
	{
		___m_PreviousShapeLightParametricSides_34 = value;
	}

	inline static int32_t get_offset_of_m_PreviousShapeLightParametricAngleOffset_35() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousShapeLightParametricAngleOffset_35)); }
	inline float get_m_PreviousShapeLightParametricAngleOffset_35() const { return ___m_PreviousShapeLightParametricAngleOffset_35; }
	inline float* get_address_of_m_PreviousShapeLightParametricAngleOffset_35() { return &___m_PreviousShapeLightParametricAngleOffset_35; }
	inline void set_m_PreviousShapeLightParametricAngleOffset_35(float value)
	{
		___m_PreviousShapeLightParametricAngleOffset_35 = value;
	}

	inline static int32_t get_offset_of_m_PreviousShapeLightParametricRadius_36() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousShapeLightParametricRadius_36)); }
	inline float get_m_PreviousShapeLightParametricRadius_36() const { return ___m_PreviousShapeLightParametricRadius_36; }
	inline float* get_address_of_m_PreviousShapeLightParametricRadius_36() { return &___m_PreviousShapeLightParametricRadius_36; }
	inline void set_m_PreviousShapeLightParametricRadius_36(float value)
	{
		___m_PreviousShapeLightParametricRadius_36 = value;
	}
};


// PlatformerCamera
struct PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform PlatformerCamera::trackingTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___trackingTarget_4;
	// System.Single PlatformerCamera::followSpeed
	float ___followSpeed_5;
	// System.Boolean PlatformerCamera::xAxisLock
	bool ___xAxisLock_6;
	// System.Boolean PlatformerCamera::xHasMax
	bool ___xHasMax_7;
	// System.Boolean PlatformerCamera::xHasMin
	bool ___xHasMin_8;
	// System.Single PlatformerCamera::xMax
	float ___xMax_9;
	// System.Single PlatformerCamera::xMin
	float ___xMin_10;
	// System.Single PlatformerCamera::xOffset
	float ___xOffset_11;
	// System.Boolean PlatformerCamera::yAxisLock
	bool ___yAxisLock_12;
	// System.Boolean PlatformerCamera::yHasMax
	bool ___yHasMax_13;
	// System.Boolean PlatformerCamera::yHasMin
	bool ___yHasMin_14;
	// System.Single PlatformerCamera::yMax
	float ___yMax_15;
	// System.Single PlatformerCamera::yMin
	float ___yMin_16;
	// System.Single PlatformerCamera::yOffset
	float ___yOffset_17;

public:
	inline static int32_t get_offset_of_trackingTarget_4() { return static_cast<int32_t>(offsetof(PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC, ___trackingTarget_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_trackingTarget_4() const { return ___trackingTarget_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_trackingTarget_4() { return &___trackingTarget_4; }
	inline void set_trackingTarget_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___trackingTarget_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingTarget_4), (void*)value);
	}

	inline static int32_t get_offset_of_followSpeed_5() { return static_cast<int32_t>(offsetof(PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC, ___followSpeed_5)); }
	inline float get_followSpeed_5() const { return ___followSpeed_5; }
	inline float* get_address_of_followSpeed_5() { return &___followSpeed_5; }
	inline void set_followSpeed_5(float value)
	{
		___followSpeed_5 = value;
	}

	inline static int32_t get_offset_of_xAxisLock_6() { return static_cast<int32_t>(offsetof(PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC, ___xAxisLock_6)); }
	inline bool get_xAxisLock_6() const { return ___xAxisLock_6; }
	inline bool* get_address_of_xAxisLock_6() { return &___xAxisLock_6; }
	inline void set_xAxisLock_6(bool value)
	{
		___xAxisLock_6 = value;
	}

	inline static int32_t get_offset_of_xHasMax_7() { return static_cast<int32_t>(offsetof(PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC, ___xHasMax_7)); }
	inline bool get_xHasMax_7() const { return ___xHasMax_7; }
	inline bool* get_address_of_xHasMax_7() { return &___xHasMax_7; }
	inline void set_xHasMax_7(bool value)
	{
		___xHasMax_7 = value;
	}

	inline static int32_t get_offset_of_xHasMin_8() { return static_cast<int32_t>(offsetof(PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC, ___xHasMin_8)); }
	inline bool get_xHasMin_8() const { return ___xHasMin_8; }
	inline bool* get_address_of_xHasMin_8() { return &___xHasMin_8; }
	inline void set_xHasMin_8(bool value)
	{
		___xHasMin_8 = value;
	}

	inline static int32_t get_offset_of_xMax_9() { return static_cast<int32_t>(offsetof(PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC, ___xMax_9)); }
	inline float get_xMax_9() const { return ___xMax_9; }
	inline float* get_address_of_xMax_9() { return &___xMax_9; }
	inline void set_xMax_9(float value)
	{
		___xMax_9 = value;
	}

	inline static int32_t get_offset_of_xMin_10() { return static_cast<int32_t>(offsetof(PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC, ___xMin_10)); }
	inline float get_xMin_10() const { return ___xMin_10; }
	inline float* get_address_of_xMin_10() { return &___xMin_10; }
	inline void set_xMin_10(float value)
	{
		___xMin_10 = value;
	}

	inline static int32_t get_offset_of_xOffset_11() { return static_cast<int32_t>(offsetof(PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC, ___xOffset_11)); }
	inline float get_xOffset_11() const { return ___xOffset_11; }
	inline float* get_address_of_xOffset_11() { return &___xOffset_11; }
	inline void set_xOffset_11(float value)
	{
		___xOffset_11 = value;
	}

	inline static int32_t get_offset_of_yAxisLock_12() { return static_cast<int32_t>(offsetof(PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC, ___yAxisLock_12)); }
	inline bool get_yAxisLock_12() const { return ___yAxisLock_12; }
	inline bool* get_address_of_yAxisLock_12() { return &___yAxisLock_12; }
	inline void set_yAxisLock_12(bool value)
	{
		___yAxisLock_12 = value;
	}

	inline static int32_t get_offset_of_yHasMax_13() { return static_cast<int32_t>(offsetof(PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC, ___yHasMax_13)); }
	inline bool get_yHasMax_13() const { return ___yHasMax_13; }
	inline bool* get_address_of_yHasMax_13() { return &___yHasMax_13; }
	inline void set_yHasMax_13(bool value)
	{
		___yHasMax_13 = value;
	}

	inline static int32_t get_offset_of_yHasMin_14() { return static_cast<int32_t>(offsetof(PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC, ___yHasMin_14)); }
	inline bool get_yHasMin_14() const { return ___yHasMin_14; }
	inline bool* get_address_of_yHasMin_14() { return &___yHasMin_14; }
	inline void set_yHasMin_14(bool value)
	{
		___yHasMin_14 = value;
	}

	inline static int32_t get_offset_of_yMax_15() { return static_cast<int32_t>(offsetof(PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC, ___yMax_15)); }
	inline float get_yMax_15() const { return ___yMax_15; }
	inline float* get_address_of_yMax_15() { return &___yMax_15; }
	inline void set_yMax_15(float value)
	{
		___yMax_15 = value;
	}

	inline static int32_t get_offset_of_yMin_16() { return static_cast<int32_t>(offsetof(PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC, ___yMin_16)); }
	inline float get_yMin_16() const { return ___yMin_16; }
	inline float* get_address_of_yMin_16() { return &___yMin_16; }
	inline void set_yMin_16(float value)
	{
		___yMin_16 = value;
	}

	inline static int32_t get_offset_of_yOffset_17() { return static_cast<int32_t>(offsetof(PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC, ___yOffset_17)); }
	inline float get_yOffset_17() const { return ___yOffset_17; }
	inline float* get_address_of_yOffset_17() { return &___yOffset_17; }
	inline void set_yOffset_17(float value)
	{
		___yOffset_17 = value;
	}
};


// PlatformerPlayer
struct PlatformerPlayer_t1EEA73D38617DB797E55BDE5F96AB99BA0F6E651  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single PlatformerPlayer::walkSpeed
	float ___walkSpeed_4;
	// System.Single PlatformerPlayer::dashMultiplier
	float ___dashMultiplier_5;
	// System.Single PlatformerPlayer::dashDuration
	float ___dashDuration_6;
	// System.Single PlatformerPlayer::dashCooldown
	float ___dashCooldown_7;
	// System.Single PlatformerPlayer::jumpForce
	float ___jumpForce_8;
	// UnityEngine.Rigidbody2D PlatformerPlayer::body
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___body_9;
	// UnityEngine.BoxCollider2D PlatformerPlayer::box
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * ___box_10;
	// PlatformerPlayer/DashState PlatformerPlayer::dashState
	int32_t ___dashState_11;
	// System.Single PlatformerPlayer::dashTimer
	float ___dashTimer_12;
	// System.Boolean PlatformerPlayer::doubleJumpAvailable
	bool ___doubleJumpAvailable_13;
	// System.Boolean PlatformerPlayer::dashJumping
	bool ___dashJumping_14;
	// UnityEngine.SpriteRenderer PlatformerPlayer::sprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sprite_15;

public:
	inline static int32_t get_offset_of_walkSpeed_4() { return static_cast<int32_t>(offsetof(PlatformerPlayer_t1EEA73D38617DB797E55BDE5F96AB99BA0F6E651, ___walkSpeed_4)); }
	inline float get_walkSpeed_4() const { return ___walkSpeed_4; }
	inline float* get_address_of_walkSpeed_4() { return &___walkSpeed_4; }
	inline void set_walkSpeed_4(float value)
	{
		___walkSpeed_4 = value;
	}

	inline static int32_t get_offset_of_dashMultiplier_5() { return static_cast<int32_t>(offsetof(PlatformerPlayer_t1EEA73D38617DB797E55BDE5F96AB99BA0F6E651, ___dashMultiplier_5)); }
	inline float get_dashMultiplier_5() const { return ___dashMultiplier_5; }
	inline float* get_address_of_dashMultiplier_5() { return &___dashMultiplier_5; }
	inline void set_dashMultiplier_5(float value)
	{
		___dashMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_dashDuration_6() { return static_cast<int32_t>(offsetof(PlatformerPlayer_t1EEA73D38617DB797E55BDE5F96AB99BA0F6E651, ___dashDuration_6)); }
	inline float get_dashDuration_6() const { return ___dashDuration_6; }
	inline float* get_address_of_dashDuration_6() { return &___dashDuration_6; }
	inline void set_dashDuration_6(float value)
	{
		___dashDuration_6 = value;
	}

	inline static int32_t get_offset_of_dashCooldown_7() { return static_cast<int32_t>(offsetof(PlatformerPlayer_t1EEA73D38617DB797E55BDE5F96AB99BA0F6E651, ___dashCooldown_7)); }
	inline float get_dashCooldown_7() const { return ___dashCooldown_7; }
	inline float* get_address_of_dashCooldown_7() { return &___dashCooldown_7; }
	inline void set_dashCooldown_7(float value)
	{
		___dashCooldown_7 = value;
	}

	inline static int32_t get_offset_of_jumpForce_8() { return static_cast<int32_t>(offsetof(PlatformerPlayer_t1EEA73D38617DB797E55BDE5F96AB99BA0F6E651, ___jumpForce_8)); }
	inline float get_jumpForce_8() const { return ___jumpForce_8; }
	inline float* get_address_of_jumpForce_8() { return &___jumpForce_8; }
	inline void set_jumpForce_8(float value)
	{
		___jumpForce_8 = value;
	}

	inline static int32_t get_offset_of_body_9() { return static_cast<int32_t>(offsetof(PlatformerPlayer_t1EEA73D38617DB797E55BDE5F96AB99BA0F6E651, ___body_9)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_body_9() const { return ___body_9; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_body_9() { return &___body_9; }
	inline void set_body_9(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___body_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___body_9), (void*)value);
	}

	inline static int32_t get_offset_of_box_10() { return static_cast<int32_t>(offsetof(PlatformerPlayer_t1EEA73D38617DB797E55BDE5F96AB99BA0F6E651, ___box_10)); }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * get_box_10() const { return ___box_10; }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 ** get_address_of_box_10() { return &___box_10; }
	inline void set_box_10(BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * value)
	{
		___box_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___box_10), (void*)value);
	}

	inline static int32_t get_offset_of_dashState_11() { return static_cast<int32_t>(offsetof(PlatformerPlayer_t1EEA73D38617DB797E55BDE5F96AB99BA0F6E651, ___dashState_11)); }
	inline int32_t get_dashState_11() const { return ___dashState_11; }
	inline int32_t* get_address_of_dashState_11() { return &___dashState_11; }
	inline void set_dashState_11(int32_t value)
	{
		___dashState_11 = value;
	}

	inline static int32_t get_offset_of_dashTimer_12() { return static_cast<int32_t>(offsetof(PlatformerPlayer_t1EEA73D38617DB797E55BDE5F96AB99BA0F6E651, ___dashTimer_12)); }
	inline float get_dashTimer_12() const { return ___dashTimer_12; }
	inline float* get_address_of_dashTimer_12() { return &___dashTimer_12; }
	inline void set_dashTimer_12(float value)
	{
		___dashTimer_12 = value;
	}

	inline static int32_t get_offset_of_doubleJumpAvailable_13() { return static_cast<int32_t>(offsetof(PlatformerPlayer_t1EEA73D38617DB797E55BDE5F96AB99BA0F6E651, ___doubleJumpAvailable_13)); }
	inline bool get_doubleJumpAvailable_13() const { return ___doubleJumpAvailable_13; }
	inline bool* get_address_of_doubleJumpAvailable_13() { return &___doubleJumpAvailable_13; }
	inline void set_doubleJumpAvailable_13(bool value)
	{
		___doubleJumpAvailable_13 = value;
	}

	inline static int32_t get_offset_of_dashJumping_14() { return static_cast<int32_t>(offsetof(PlatformerPlayer_t1EEA73D38617DB797E55BDE5F96AB99BA0F6E651, ___dashJumping_14)); }
	inline bool get_dashJumping_14() const { return ___dashJumping_14; }
	inline bool* get_address_of_dashJumping_14() { return &___dashJumping_14; }
	inline void set_dashJumping_14(bool value)
	{
		___dashJumping_14 = value;
	}

	inline static int32_t get_offset_of_sprite_15() { return static_cast<int32_t>(offsetof(PlatformerPlayer_t1EEA73D38617DB797E55BDE5F96AB99BA0F6E651, ___sprite_15)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sprite_15() const { return ___sprite_15; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sprite_15() { return &___sprite_15; }
	inline void set_sprite_15(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sprite_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_15), (void*)value);
	}
};


// RepeatedBackground
struct RepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpriteRenderer RepeatedBackground::bgSprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___bgSprite_4;
	// UnityEngine.Transform RepeatedBackground::cBgTrans
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___cBgTrans_5;
	// UnityEngine.Transform RepeatedBackground::lBgTrans
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___lBgTrans_6;
	// UnityEngine.Transform RepeatedBackground::rBgTrans
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___rBgTrans_7;

public:
	inline static int32_t get_offset_of_bgSprite_4() { return static_cast<int32_t>(offsetof(RepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9, ___bgSprite_4)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_bgSprite_4() const { return ___bgSprite_4; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_bgSprite_4() { return &___bgSprite_4; }
	inline void set_bgSprite_4(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___bgSprite_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bgSprite_4), (void*)value);
	}

	inline static int32_t get_offset_of_cBgTrans_5() { return static_cast<int32_t>(offsetof(RepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9, ___cBgTrans_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_cBgTrans_5() const { return ___cBgTrans_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_cBgTrans_5() { return &___cBgTrans_5; }
	inline void set_cBgTrans_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___cBgTrans_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cBgTrans_5), (void*)value);
	}

	inline static int32_t get_offset_of_lBgTrans_6() { return static_cast<int32_t>(offsetof(RepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9, ___lBgTrans_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_lBgTrans_6() const { return ___lBgTrans_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_lBgTrans_6() { return &___lBgTrans_6; }
	inline void set_lBgTrans_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___lBgTrans_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lBgTrans_6), (void*)value);
	}

	inline static int32_t get_offset_of_rBgTrans_7() { return static_cast<int32_t>(offsetof(RepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9, ___rBgTrans_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_rBgTrans_7() const { return ___rBgTrans_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_rBgTrans_7() { return &___rBgTrans_7; }
	inline void set_rBgTrans_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___rBgTrans_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rBgTrans_7), (void*)value);
	}
};


// TempHitboxController
struct TempHitboxController_tBDC41251AB7820BE491BFA0BE445095F27B0FBE7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Torch
struct Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Torch::_torchlightMax
	float ____torchlightMax_4;
	// System.Single Torch::_torchlight
	float ____torchlight_5;

public:
	inline static int32_t get_offset_of__torchlightMax_4() { return static_cast<int32_t>(offsetof(Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED, ____torchlightMax_4)); }
	inline float get__torchlightMax_4() const { return ____torchlightMax_4; }
	inline float* get_address_of__torchlightMax_4() { return &____torchlightMax_4; }
	inline void set__torchlightMax_4(float value)
	{
		____torchlightMax_4 = value;
	}

	inline static int32_t get_offset_of__torchlight_5() { return static_cast<int32_t>(offsetof(Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED, ____torchlight_5)); }
	inline float get__torchlight_5() const { return ____torchlight_5; }
	inline float* get_address_of__torchlight_5() { return &____torchlight_5; }
	inline void set__torchlight_5(float value)
	{
		____torchlight_5 = value;
	}
};


// TorchController
struct TorchController_t7434050B3F78758875007E515A07196A5A2E3879  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TorchController::torchDuration
	float ___torchDuration_4;
	// System.Single TorchController::doubleActionTimeLoss
	float ___doubleActionTimeLoss_5;
	// System.Single TorchController::playerHitTimeLoss
	float ___playerHitTimeLoss_6;
	// System.Single TorchController::playerFellTimeLoss
	float ___playerFellTimeLoss_7;
	// System.Single TorchController::enemySlayedTimeGain
	float ___enemySlayedTimeGain_8;
	// System.Boolean TorchController::staticTorch
	bool ___staticTorch_9;
	// Torch TorchController::_torch
	Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * ____torch_10;
	// System.Single TorchController::_baseTorchLoss
	float ____baseTorchLoss_11;
	// System.Single TorchController::_doubleActionTorchLoss
	float ____doubleActionTorchLoss_12;
	// System.Single TorchController::_playerHitTorchLoss
	float ____playerHitTorchLoss_13;
	// System.Single TorchController::_playerFellTorchLoss
	float ____playerFellTorchLoss_14;
	// System.Single TorchController::_enemySlayedTorchGain
	float ____enemySlayedTorchGain_15;
	// System.Boolean TorchController::_losingTorchlight
	bool ____losingTorchlight_16;

public:
	inline static int32_t get_offset_of_torchDuration_4() { return static_cast<int32_t>(offsetof(TorchController_t7434050B3F78758875007E515A07196A5A2E3879, ___torchDuration_4)); }
	inline float get_torchDuration_4() const { return ___torchDuration_4; }
	inline float* get_address_of_torchDuration_4() { return &___torchDuration_4; }
	inline void set_torchDuration_4(float value)
	{
		___torchDuration_4 = value;
	}

	inline static int32_t get_offset_of_doubleActionTimeLoss_5() { return static_cast<int32_t>(offsetof(TorchController_t7434050B3F78758875007E515A07196A5A2E3879, ___doubleActionTimeLoss_5)); }
	inline float get_doubleActionTimeLoss_5() const { return ___doubleActionTimeLoss_5; }
	inline float* get_address_of_doubleActionTimeLoss_5() { return &___doubleActionTimeLoss_5; }
	inline void set_doubleActionTimeLoss_5(float value)
	{
		___doubleActionTimeLoss_5 = value;
	}

	inline static int32_t get_offset_of_playerHitTimeLoss_6() { return static_cast<int32_t>(offsetof(TorchController_t7434050B3F78758875007E515A07196A5A2E3879, ___playerHitTimeLoss_6)); }
	inline float get_playerHitTimeLoss_6() const { return ___playerHitTimeLoss_6; }
	inline float* get_address_of_playerHitTimeLoss_6() { return &___playerHitTimeLoss_6; }
	inline void set_playerHitTimeLoss_6(float value)
	{
		___playerHitTimeLoss_6 = value;
	}

	inline static int32_t get_offset_of_playerFellTimeLoss_7() { return static_cast<int32_t>(offsetof(TorchController_t7434050B3F78758875007E515A07196A5A2E3879, ___playerFellTimeLoss_7)); }
	inline float get_playerFellTimeLoss_7() const { return ___playerFellTimeLoss_7; }
	inline float* get_address_of_playerFellTimeLoss_7() { return &___playerFellTimeLoss_7; }
	inline void set_playerFellTimeLoss_7(float value)
	{
		___playerFellTimeLoss_7 = value;
	}

	inline static int32_t get_offset_of_enemySlayedTimeGain_8() { return static_cast<int32_t>(offsetof(TorchController_t7434050B3F78758875007E515A07196A5A2E3879, ___enemySlayedTimeGain_8)); }
	inline float get_enemySlayedTimeGain_8() const { return ___enemySlayedTimeGain_8; }
	inline float* get_address_of_enemySlayedTimeGain_8() { return &___enemySlayedTimeGain_8; }
	inline void set_enemySlayedTimeGain_8(float value)
	{
		___enemySlayedTimeGain_8 = value;
	}

	inline static int32_t get_offset_of_staticTorch_9() { return static_cast<int32_t>(offsetof(TorchController_t7434050B3F78758875007E515A07196A5A2E3879, ___staticTorch_9)); }
	inline bool get_staticTorch_9() const { return ___staticTorch_9; }
	inline bool* get_address_of_staticTorch_9() { return &___staticTorch_9; }
	inline void set_staticTorch_9(bool value)
	{
		___staticTorch_9 = value;
	}

	inline static int32_t get_offset_of__torch_10() { return static_cast<int32_t>(offsetof(TorchController_t7434050B3F78758875007E515A07196A5A2E3879, ____torch_10)); }
	inline Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * get__torch_10() const { return ____torch_10; }
	inline Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED ** get_address_of__torch_10() { return &____torch_10; }
	inline void set__torch_10(Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * value)
	{
		____torch_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____torch_10), (void*)value);
	}

	inline static int32_t get_offset_of__baseTorchLoss_11() { return static_cast<int32_t>(offsetof(TorchController_t7434050B3F78758875007E515A07196A5A2E3879, ____baseTorchLoss_11)); }
	inline float get__baseTorchLoss_11() const { return ____baseTorchLoss_11; }
	inline float* get_address_of__baseTorchLoss_11() { return &____baseTorchLoss_11; }
	inline void set__baseTorchLoss_11(float value)
	{
		____baseTorchLoss_11 = value;
	}

	inline static int32_t get_offset_of__doubleActionTorchLoss_12() { return static_cast<int32_t>(offsetof(TorchController_t7434050B3F78758875007E515A07196A5A2E3879, ____doubleActionTorchLoss_12)); }
	inline float get__doubleActionTorchLoss_12() const { return ____doubleActionTorchLoss_12; }
	inline float* get_address_of__doubleActionTorchLoss_12() { return &____doubleActionTorchLoss_12; }
	inline void set__doubleActionTorchLoss_12(float value)
	{
		____doubleActionTorchLoss_12 = value;
	}

	inline static int32_t get_offset_of__playerHitTorchLoss_13() { return static_cast<int32_t>(offsetof(TorchController_t7434050B3F78758875007E515A07196A5A2E3879, ____playerHitTorchLoss_13)); }
	inline float get__playerHitTorchLoss_13() const { return ____playerHitTorchLoss_13; }
	inline float* get_address_of__playerHitTorchLoss_13() { return &____playerHitTorchLoss_13; }
	inline void set__playerHitTorchLoss_13(float value)
	{
		____playerHitTorchLoss_13 = value;
	}

	inline static int32_t get_offset_of__playerFellTorchLoss_14() { return static_cast<int32_t>(offsetof(TorchController_t7434050B3F78758875007E515A07196A5A2E3879, ____playerFellTorchLoss_14)); }
	inline float get__playerFellTorchLoss_14() const { return ____playerFellTorchLoss_14; }
	inline float* get_address_of__playerFellTorchLoss_14() { return &____playerFellTorchLoss_14; }
	inline void set__playerFellTorchLoss_14(float value)
	{
		____playerFellTorchLoss_14 = value;
	}

	inline static int32_t get_offset_of__enemySlayedTorchGain_15() { return static_cast<int32_t>(offsetof(TorchController_t7434050B3F78758875007E515A07196A5A2E3879, ____enemySlayedTorchGain_15)); }
	inline float get__enemySlayedTorchGain_15() const { return ____enemySlayedTorchGain_15; }
	inline float* get_address_of__enemySlayedTorchGain_15() { return &____enemySlayedTorchGain_15; }
	inline void set__enemySlayedTorchGain_15(float value)
	{
		____enemySlayedTorchGain_15 = value;
	}

	inline static int32_t get_offset_of__losingTorchlight_16() { return static_cast<int32_t>(offsetof(TorchController_t7434050B3F78758875007E515A07196A5A2E3879, ____losingTorchlight_16)); }
	inline bool get__losingTorchlight_16() const { return ____losingTorchlight_16; }
	inline bool* get_address_of__losingTorchlight_16() { return &____losingTorchlight_16; }
	inline void set__losingTorchlight_16(bool value)
	{
		____losingTorchlight_16 = value;
	}
};


// TorchFlicker
struct TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TorchFlicker::maxIntensityIncrease
	float ___maxIntensityIncrease_4;
	// System.Single TorchFlicker::maxIntensityDecrease
	float ___maxIntensityDecrease_5;
	// System.Single TorchFlicker::maxGreenIncrease
	float ___maxGreenIncrease_6;
	// System.Single TorchFlicker::maxGreenDecrease
	float ___maxGreenDecrease_7;
	// System.Single TorchFlicker::minFlickerDuration
	float ___minFlickerDuration_8;
	// System.Single TorchFlicker::maxFlickerDuration
	float ___maxFlickerDuration_9;
	// System.Boolean TorchFlicker::flickering
	bool ___flickering_10;
	// UnityEngine.Experimental.Rendering.Universal.Light2D TorchFlicker::_light
	Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * ____light_11;
	// System.Single TorchFlicker::_baseIntensity
	float ____baseIntensity_12;
	// System.Single TorchFlicker::_baseGreen
	float ____baseGreen_13;
	// System.Boolean TorchFlicker::_flickering
	bool ____flickering_14;
	// System.Single TorchFlicker::_lastIntensity
	float ____lastIntensity_15;
	// System.Single TorchFlicker::_targetIntensity
	float ____targetIntensity_16;
	// System.Single TorchFlicker::_lastGreen
	float ____lastGreen_17;
	// System.Single TorchFlicker::_targetGreen
	float ____targetGreen_18;
	// System.Single TorchFlicker::_flickerDuration
	float ____flickerDuration_19;
	// System.Single TorchFlicker::_interpolator
	float ____interpolator_20;

public:
	inline static int32_t get_offset_of_maxIntensityIncrease_4() { return static_cast<int32_t>(offsetof(TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9, ___maxIntensityIncrease_4)); }
	inline float get_maxIntensityIncrease_4() const { return ___maxIntensityIncrease_4; }
	inline float* get_address_of_maxIntensityIncrease_4() { return &___maxIntensityIncrease_4; }
	inline void set_maxIntensityIncrease_4(float value)
	{
		___maxIntensityIncrease_4 = value;
	}

	inline static int32_t get_offset_of_maxIntensityDecrease_5() { return static_cast<int32_t>(offsetof(TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9, ___maxIntensityDecrease_5)); }
	inline float get_maxIntensityDecrease_5() const { return ___maxIntensityDecrease_5; }
	inline float* get_address_of_maxIntensityDecrease_5() { return &___maxIntensityDecrease_5; }
	inline void set_maxIntensityDecrease_5(float value)
	{
		___maxIntensityDecrease_5 = value;
	}

	inline static int32_t get_offset_of_maxGreenIncrease_6() { return static_cast<int32_t>(offsetof(TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9, ___maxGreenIncrease_6)); }
	inline float get_maxGreenIncrease_6() const { return ___maxGreenIncrease_6; }
	inline float* get_address_of_maxGreenIncrease_6() { return &___maxGreenIncrease_6; }
	inline void set_maxGreenIncrease_6(float value)
	{
		___maxGreenIncrease_6 = value;
	}

	inline static int32_t get_offset_of_maxGreenDecrease_7() { return static_cast<int32_t>(offsetof(TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9, ___maxGreenDecrease_7)); }
	inline float get_maxGreenDecrease_7() const { return ___maxGreenDecrease_7; }
	inline float* get_address_of_maxGreenDecrease_7() { return &___maxGreenDecrease_7; }
	inline void set_maxGreenDecrease_7(float value)
	{
		___maxGreenDecrease_7 = value;
	}

	inline static int32_t get_offset_of_minFlickerDuration_8() { return static_cast<int32_t>(offsetof(TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9, ___minFlickerDuration_8)); }
	inline float get_minFlickerDuration_8() const { return ___minFlickerDuration_8; }
	inline float* get_address_of_minFlickerDuration_8() { return &___minFlickerDuration_8; }
	inline void set_minFlickerDuration_8(float value)
	{
		___minFlickerDuration_8 = value;
	}

	inline static int32_t get_offset_of_maxFlickerDuration_9() { return static_cast<int32_t>(offsetof(TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9, ___maxFlickerDuration_9)); }
	inline float get_maxFlickerDuration_9() const { return ___maxFlickerDuration_9; }
	inline float* get_address_of_maxFlickerDuration_9() { return &___maxFlickerDuration_9; }
	inline void set_maxFlickerDuration_9(float value)
	{
		___maxFlickerDuration_9 = value;
	}

	inline static int32_t get_offset_of_flickering_10() { return static_cast<int32_t>(offsetof(TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9, ___flickering_10)); }
	inline bool get_flickering_10() const { return ___flickering_10; }
	inline bool* get_address_of_flickering_10() { return &___flickering_10; }
	inline void set_flickering_10(bool value)
	{
		___flickering_10 = value;
	}

	inline static int32_t get_offset_of__light_11() { return static_cast<int32_t>(offsetof(TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9, ____light_11)); }
	inline Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * get__light_11() const { return ____light_11; }
	inline Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF ** get_address_of__light_11() { return &____light_11; }
	inline void set__light_11(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * value)
	{
		____light_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____light_11), (void*)value);
	}

	inline static int32_t get_offset_of__baseIntensity_12() { return static_cast<int32_t>(offsetof(TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9, ____baseIntensity_12)); }
	inline float get__baseIntensity_12() const { return ____baseIntensity_12; }
	inline float* get_address_of__baseIntensity_12() { return &____baseIntensity_12; }
	inline void set__baseIntensity_12(float value)
	{
		____baseIntensity_12 = value;
	}

	inline static int32_t get_offset_of__baseGreen_13() { return static_cast<int32_t>(offsetof(TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9, ____baseGreen_13)); }
	inline float get__baseGreen_13() const { return ____baseGreen_13; }
	inline float* get_address_of__baseGreen_13() { return &____baseGreen_13; }
	inline void set__baseGreen_13(float value)
	{
		____baseGreen_13 = value;
	}

	inline static int32_t get_offset_of__flickering_14() { return static_cast<int32_t>(offsetof(TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9, ____flickering_14)); }
	inline bool get__flickering_14() const { return ____flickering_14; }
	inline bool* get_address_of__flickering_14() { return &____flickering_14; }
	inline void set__flickering_14(bool value)
	{
		____flickering_14 = value;
	}

	inline static int32_t get_offset_of__lastIntensity_15() { return static_cast<int32_t>(offsetof(TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9, ____lastIntensity_15)); }
	inline float get__lastIntensity_15() const { return ____lastIntensity_15; }
	inline float* get_address_of__lastIntensity_15() { return &____lastIntensity_15; }
	inline void set__lastIntensity_15(float value)
	{
		____lastIntensity_15 = value;
	}

	inline static int32_t get_offset_of__targetIntensity_16() { return static_cast<int32_t>(offsetof(TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9, ____targetIntensity_16)); }
	inline float get__targetIntensity_16() const { return ____targetIntensity_16; }
	inline float* get_address_of__targetIntensity_16() { return &____targetIntensity_16; }
	inline void set__targetIntensity_16(float value)
	{
		____targetIntensity_16 = value;
	}

	inline static int32_t get_offset_of__lastGreen_17() { return static_cast<int32_t>(offsetof(TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9, ____lastGreen_17)); }
	inline float get__lastGreen_17() const { return ____lastGreen_17; }
	inline float* get_address_of__lastGreen_17() { return &____lastGreen_17; }
	inline void set__lastGreen_17(float value)
	{
		____lastGreen_17 = value;
	}

	inline static int32_t get_offset_of__targetGreen_18() { return static_cast<int32_t>(offsetof(TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9, ____targetGreen_18)); }
	inline float get__targetGreen_18() const { return ____targetGreen_18; }
	inline float* get_address_of__targetGreen_18() { return &____targetGreen_18; }
	inline void set__targetGreen_18(float value)
	{
		____targetGreen_18 = value;
	}

	inline static int32_t get_offset_of__flickerDuration_19() { return static_cast<int32_t>(offsetof(TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9, ____flickerDuration_19)); }
	inline float get__flickerDuration_19() const { return ____flickerDuration_19; }
	inline float* get_address_of__flickerDuration_19() { return &____flickerDuration_19; }
	inline void set__flickerDuration_19(float value)
	{
		____flickerDuration_19 = value;
	}

	inline static int32_t get_offset_of__interpolator_20() { return static_cast<int32_t>(offsetof(TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9, ____interpolator_20)); }
	inline float get__interpolator_20() const { return ____interpolator_20; }
	inline float* get_address_of__interpolator_20() { return &____interpolator_20; }
	inline void set__interpolator_20(float value)
	{
		____interpolator_20 = value;
	}
};


// TorchRadius
struct TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TorchRadius::innerMinRadius
	float ___innerMinRadius_4;
	// System.Single TorchRadius::innerMaxRadius
	float ___innerMaxRadius_5;
	// System.Single TorchRadius::outerMinRadius
	float ___outerMinRadius_6;
	// System.Single TorchRadius::outerMaxRadius
	float ___outerMaxRadius_7;
	// System.Single TorchRadius::radiusChangeDuration
	float ___radiusChangeDuration_8;
	// UnityEngine.Experimental.Rendering.Universal.Light2D TorchRadius::_pointLight
	Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * ____pointLight_9;
	// Torch TorchRadius::_torch
	Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * ____torch_10;
	// System.Single TorchRadius::_lastInnerRadius
	float ____lastInnerRadius_11;
	// System.Single TorchRadius::_targetInnerRadius
	float ____targetInnerRadius_12;
	// System.Single TorchRadius::_lastOuterRadius
	float ____lastOuterRadius_13;
	// System.Single TorchRadius::_targetOuterRadius
	float ____targetOuterRadius_14;
	// System.Single TorchRadius::_interpolator
	float ____interpolator_15;

public:
	inline static int32_t get_offset_of_innerMinRadius_4() { return static_cast<int32_t>(offsetof(TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E, ___innerMinRadius_4)); }
	inline float get_innerMinRadius_4() const { return ___innerMinRadius_4; }
	inline float* get_address_of_innerMinRadius_4() { return &___innerMinRadius_4; }
	inline void set_innerMinRadius_4(float value)
	{
		___innerMinRadius_4 = value;
	}

	inline static int32_t get_offset_of_innerMaxRadius_5() { return static_cast<int32_t>(offsetof(TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E, ___innerMaxRadius_5)); }
	inline float get_innerMaxRadius_5() const { return ___innerMaxRadius_5; }
	inline float* get_address_of_innerMaxRadius_5() { return &___innerMaxRadius_5; }
	inline void set_innerMaxRadius_5(float value)
	{
		___innerMaxRadius_5 = value;
	}

	inline static int32_t get_offset_of_outerMinRadius_6() { return static_cast<int32_t>(offsetof(TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E, ___outerMinRadius_6)); }
	inline float get_outerMinRadius_6() const { return ___outerMinRadius_6; }
	inline float* get_address_of_outerMinRadius_6() { return &___outerMinRadius_6; }
	inline void set_outerMinRadius_6(float value)
	{
		___outerMinRadius_6 = value;
	}

	inline static int32_t get_offset_of_outerMaxRadius_7() { return static_cast<int32_t>(offsetof(TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E, ___outerMaxRadius_7)); }
	inline float get_outerMaxRadius_7() const { return ___outerMaxRadius_7; }
	inline float* get_address_of_outerMaxRadius_7() { return &___outerMaxRadius_7; }
	inline void set_outerMaxRadius_7(float value)
	{
		___outerMaxRadius_7 = value;
	}

	inline static int32_t get_offset_of_radiusChangeDuration_8() { return static_cast<int32_t>(offsetof(TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E, ___radiusChangeDuration_8)); }
	inline float get_radiusChangeDuration_8() const { return ___radiusChangeDuration_8; }
	inline float* get_address_of_radiusChangeDuration_8() { return &___radiusChangeDuration_8; }
	inline void set_radiusChangeDuration_8(float value)
	{
		___radiusChangeDuration_8 = value;
	}

	inline static int32_t get_offset_of__pointLight_9() { return static_cast<int32_t>(offsetof(TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E, ____pointLight_9)); }
	inline Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * get__pointLight_9() const { return ____pointLight_9; }
	inline Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF ** get_address_of__pointLight_9() { return &____pointLight_9; }
	inline void set__pointLight_9(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * value)
	{
		____pointLight_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointLight_9), (void*)value);
	}

	inline static int32_t get_offset_of__torch_10() { return static_cast<int32_t>(offsetof(TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E, ____torch_10)); }
	inline Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * get__torch_10() const { return ____torch_10; }
	inline Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED ** get_address_of__torch_10() { return &____torch_10; }
	inline void set__torch_10(Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * value)
	{
		____torch_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____torch_10), (void*)value);
	}

	inline static int32_t get_offset_of__lastInnerRadius_11() { return static_cast<int32_t>(offsetof(TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E, ____lastInnerRadius_11)); }
	inline float get__lastInnerRadius_11() const { return ____lastInnerRadius_11; }
	inline float* get_address_of__lastInnerRadius_11() { return &____lastInnerRadius_11; }
	inline void set__lastInnerRadius_11(float value)
	{
		____lastInnerRadius_11 = value;
	}

	inline static int32_t get_offset_of__targetInnerRadius_12() { return static_cast<int32_t>(offsetof(TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E, ____targetInnerRadius_12)); }
	inline float get__targetInnerRadius_12() const { return ____targetInnerRadius_12; }
	inline float* get_address_of__targetInnerRadius_12() { return &____targetInnerRadius_12; }
	inline void set__targetInnerRadius_12(float value)
	{
		____targetInnerRadius_12 = value;
	}

	inline static int32_t get_offset_of__lastOuterRadius_13() { return static_cast<int32_t>(offsetof(TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E, ____lastOuterRadius_13)); }
	inline float get__lastOuterRadius_13() const { return ____lastOuterRadius_13; }
	inline float* get_address_of__lastOuterRadius_13() { return &____lastOuterRadius_13; }
	inline void set__lastOuterRadius_13(float value)
	{
		____lastOuterRadius_13 = value;
	}

	inline static int32_t get_offset_of__targetOuterRadius_14() { return static_cast<int32_t>(offsetof(TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E, ____targetOuterRadius_14)); }
	inline float get__targetOuterRadius_14() const { return ____targetOuterRadius_14; }
	inline float* get_address_of__targetOuterRadius_14() { return &____targetOuterRadius_14; }
	inline void set__targetOuterRadius_14(float value)
	{
		____targetOuterRadius_14 = value;
	}

	inline static int32_t get_offset_of__interpolator_15() { return static_cast<int32_t>(offsetof(TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E, ____interpolator_15)); }
	inline float get__interpolator_15() const { return ____interpolator_15; }
	inline float* get_address_of__interpolator_15() { return &____interpolator_15; }
	inline void set__interpolator_15(float value)
	{
		____interpolator_15 = value;
	}
};


// EnemyHitboxResponder
struct EnemyHitboxResponder_t67560E29F581274085582C41B30C95AEC4EC6E5F  : public HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C
{
public:

public:
};


// PlayerHurtboxResponder
struct PlayerHurtboxResponder_t35C306FF023C4865F0DD52F4E29629D27E8C84DE  : public HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * m_Items[1];

public:
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * m_Items[1];

public:
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// T[] MessengerInternal::GetInvocationList<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* MessengerInternal_GetInvocationList_TisRuntimeObject_mBA9A53F4CCC568A30A6C73B793297A83B3669A84_gshared (String_t* ___eventType0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void HurtboxResponder::Hurt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HurtboxResponder_Hurt_mA16840AC2F6984D347491FAB7E42B9560E07E0ED (HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * __this, String_t* ___parameter0, const RuntimeMethod* method);
// System.Void HitboxResponder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitboxResponder__ctor_m958B29132E288E05E45FA563CEB39628AFBA4108 (HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686 (const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C (int32_t ___intVal0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapBoxAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* Physics2D_OverlapBoxAll_m2BAC22EAC2F6F9C96BF9534C201A1489EF27D77B (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size1, float ___angle2, int32_t ___layerMask3, const RuntimeMethod* method);
// System.Void HitboxResponder::CollisionedWith(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitboxResponder_CollisionedWith_m6C6B04FE1F1A7AA42B67EC59DDCA17EAB28AB577 (HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collider0, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s2, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawCube_mCF599EC2E7ABB92994C186412B6E8F39140F66C4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Hitbox>()
inline Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * Component_GetComponent_TisHitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1_m53D17A66F619925751E2E994AD65A0FEE434E86D (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Hurtbox>()
inline Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * Component_GetComponent_TisHurtbox_t24F500594B4FF288922299618B8C2857D3F08012_m4C786AE19FE4886A7056921436EAC93917B09844 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void HitboxResponder/<AttackCoroutine>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackCoroutineU3Ed__6__ctor_mEB1F0C82F980C91FA555D5AD993F5EF5880EAB99 (U3CAttackCoroutineU3Ed__6_t61F905EC8D3888F875EFCD9A032BD26942B90B42 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<HurtboxResponder>()
inline HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * Component_GetComponent_TisHurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC_mA527F71BBF1E39A924FDF3B1DA72EB21F523336E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.BoxCollider2D::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoxCollider2D_get_size_m011E7AA7861BF58898A64D986A4235C1E2061BF9 (BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator HurtboxResponder::HurtCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HurtboxResponder_HurtCoroutine_mE5C0399A08E06EE461718FF7E71E6B1C4E868D45 (HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * __this, String_t* ___parameter0, const RuntimeMethod* method);
// System.Void HurtboxResponder/<HurtCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHurtCoroutineU3Ed__5__ctor_m0A6DC7D644A63CC40CD0CF95FF572A295770B339 (U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void MessengerInternal::AddListener(System.String,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessengerInternal_AddListener_m9454973F814F1B049528F534B2131ED7A63635A3 (String_t* ___eventType0, Delegate_t * ___callback1, const RuntimeMethod* method);
// System.Void MessengerInternal::RemoveListener(System.String,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessengerInternal_RemoveListener_m58FD7B8928EBF68D6148F16191A13751B46878A5 (String_t* ___eventType0, Delegate_t * ___handler1, const RuntimeMethod* method);
// System.Void Messenger::Broadcast(System.String,MessengerMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Messenger_Broadcast_m933D05BEDBDB49AD646C79B42AF07D6D84D2591A (String_t* ___eventType0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void MessengerInternal::OnBroadcasting(System.String,MessengerMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessengerInternal_OnBroadcasting_mA5D03B0E019323AA80AC542792F52E90A736BD5F (String_t* ___eventType0, int32_t ___mode1, const RuntimeMethod* method);
// T[] MessengerInternal::GetInvocationList<System.Action>(System.String)
inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* MessengerInternal_GetInvocationList_TisAction_tAF41423D285AE0862865348CF6CE51CD085ABBA6_m31575B2B83B42F0B62F619517C11874BBDC0D02C (String_t* ___eventType0, const RuntimeMethod* method)
{
	return ((  ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* (*) (String_t*, const RuntimeMethod*))MessengerInternal_GetInvocationList_TisRuntimeObject_mBA9A53F4CCC568A30A6C73B793297A83B3669A84_gshared)(___eventType0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void MessengerInternal::OnListenerAdding(System.String,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessengerInternal_OnListenerAdding_m4834299F957BC198727BDC94651FBD1029BBADFE (String_t* ___eventType0, Delegate_t * ___listenerBeingAdded1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Delegate>::get_Item(!0)
inline Delegate_t * Dictionary_2_get_Item_m8718EF71937922D19BC098D81DC080A77D1FFFCA (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Delegate_t * (*) (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Delegate>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD905CE374900422217A27DA1E4336DE0F82959B5 (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * __this, String_t* ___key0, Delegate_t * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD *, String_t*, Delegate_t *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void MessengerInternal::OnListenerRemoving(System.String,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessengerInternal_OnListenerRemoving_mF1E7EC12A334D430C3727F8C68861C4DE32A324A (String_t* ___eventType0, Delegate_t * ___listenerBeingRemoved1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void MessengerInternal::OnListenerRemoved(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessengerInternal_OnListenerRemoved_m45A6F67645CD6DEF3E975FF79D450FD9F7B36330 (String_t* ___eventType0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Delegate>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m358B0C67A935CC016F723C4BD54BB219660EFF4F (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Delegate>::Add(!0,!1)
inline void Dictionary_2_Add_m452488D89E0EAE6D5ED8A7ABD7EA431021208FD2 (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * __this, String_t* ___key0, Delegate_t * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD *, String_t*, Delegate_t *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void MessengerInternal/ListenerException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListenerException__ctor_mFBD80DFB4AECEB09B400B4EC01912AF4B01E352F (ListenerException_tE73B553E8075BABF879CA3DFA2CDD4D6ED29A749 * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Delegate>::Remove(!0)
inline bool Dictionary_2_Remove_mDA53EAA38E54A0AE239561F7E5088F6C4E55FA6B (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Void MessengerInternal/BroadcastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BroadcastException__ctor_m55CF8853FC0BB1A42913C54893A98C62BEF2EDB7 (BroadcastException_tE2F16986CC332C7EDA6B86CC45B72590515B0A56 * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Delegate>::.ctor()
inline void Dictionary_2__ctor_m210799E1C2576446641CA24C1D9463F791556112 (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8 (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapArea(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Physics2D_OverlapArea_mF7D82A2855313771B31862016BCB12BFBD267DDD (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pointA0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pointB1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Int32 System.Math::Sign(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Sign_m607F7014224C0DD1D1F6D7B44DAB00A2A16CCC8F (float ___value0, const RuntimeMethod* method);
// System.Void Messenger::Broadcast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Messenger_Broadcast_mF26D1411194B524B3F93BD73C0F8EA4E52CE2539 (String_t* ___eventType0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void HurtboxResponder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HurtboxResponder__ctor_m9139605CAC6138F661C4795EBD2AD58F3DDCD8A9 (HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<RepeatedBackground>()
inline RepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9 * GameObject_GetComponent_TisRepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9_m875397C799581838F000735A907F2BABE5E39D8E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.SpriteRenderer::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SpriteRenderer_get_size_mB0C8D3133ABDB73AA1BCC468F23DD9EE0A8C97C7 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<HitboxResponder>()
inline HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * Component_GetComponent_TisHitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C_mC977126AC3B839C501778CB3B07104C1AF5A8E47 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Hitbox::SetResponder(HitboxResponder)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hitbox_SetResponder_mCA6D48931791E6E8245207EEC25F1DE9C019946F_inline (Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * __this, HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * ___hitboxResponder0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Messenger::AddListener(System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Messenger_AddListener_m5B2419C4C51FE1F0EFC6EBBE69F16DB37D155121 (String_t* ___eventType0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___handler1, const RuntimeMethod* method);
// System.Void Messenger::RemoveListener(System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Messenger_RemoveListener_mBB491F54AE7A23F961E6D89DE099BD9FE906C959 (String_t* ___eventType0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___handler1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Torch>()
inline Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * Component_GetComponent_TisTorch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED_mC6692ACCBC466C7E35803CD3CBCCB5FDC01B2A20 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single Torch::get_TorchlightMax()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Torch_get_TorchlightMax_m195E20CBEE6AF8A157104B83E2A1159608DEFC9A_inline (Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator TorchController::PassiveLoseTorchlight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TorchController_PassiveLoseTorchlight_m4DD71B7E45746334DF7E8744A717E17FCC973386 (TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * __this, const RuntimeMethod* method);
// System.Void TorchController/<PassiveLoseTorchlight>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPassiveLoseTorchlightU3Ed__18__ctor_mE5E86076972BAA01DFF7D5EB0B11D53894282E0D (U3CPassiveLoseTorchlightU3Ed__18_t82633CDE44D9228F622F56D2433B5C92BD3A9BA2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Single Torch::get_Torchlight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Torch_get_Torchlight_m58BA5008E669DA276C009F9102D5ED5F4EE134EA_inline (Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * __this, const RuntimeMethod* method);
// System.Void Torch::set_Torchlight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Torch_set_Torchlight_m60138B0BC22825EDBE58F993023B39617D2EABC6 (Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Experimental.Rendering.Universal.Light2D>()
inline Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * Component_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m2F3DE9B931439C147D47AF607AAEBD9B1CBCA0F1 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::get_intensity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Light2D_get_intensity_m12C2A712E18652DEC877F79FCBA3C3D3AC2269D5_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Experimental.Rendering.Universal.Light2D::get_color()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Light2D_get_color_m16AFB88E801DA3FDA4C42014D4498BA52AFBF3A1_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Collections.IEnumerator TorchFlicker::Flicker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TorchFlicker_Flicker_mC14427DD552A599964C182A64BB367BDEC351A01 (TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * __this, const RuntimeMethod* method);
// System.Void TorchFlicker/<Flicker>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlickerU3Ed__20__ctor_mE52FE71619DEC27C53AED3F43F519D7C87AF8DF8 (U3CFlickerU3Ed__20_tEBE444594C2546F6F6C399ADE6A8527FCCE7EB63 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::get_pointLightInnerRadius()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Light2D_get_pointLightInnerRadius_m87BFD475CEDA7396C437A12AB5A5AB734C86280D_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::get_pointLightOuterRadius()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Light2D_get_pointLightOuterRadius_m126D4AAC3373C0B9AD272253668E6352440D839B_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Rendering.Universal.Light2D::set_pointLightInnerRadius(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Light2D_set_pointLightInnerRadius_m4026527EF1B523F5613EB81293B43D4A60331733_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Rendering.Universal.Light2D::set_pointLightOuterRadius(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Light2D_set_pointLightOuterRadius_m3E90D5FC31B6DF517CDFCD16FBE5284B51C85782_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Rendering.Universal.Light2D::set_intensity(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Light2D_set_intensity_m906585AD3CD4319A37DE766A9412561D6E654224_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Rendering.Universal.Light2D::set_color(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Light2D_set_color_m728FF8483DEC5DB968BDE4B0A92518C5EBD2E2FC_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DistantBackground::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantBackground_Reset_m5C6C2DA62E331640CAFD07B16C282D012B769F99 (DistantBackground_tAA29CAA1FF6C76248905FABA29443464952BB257 * __this, const RuntimeMethod* method)
{
	{
		// distanceDivisor = 1.25f;
		__this->set_distanceDivisor_4((1.25f));
		// }
		return;
	}
}
// System.Void DistantBackground::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantBackground_Start_m73B4DAAF8AAF3D39832DBBF338C551D71D18D856 (DistantBackground_tAA29CAA1FF6C76248905FABA29443464952BB257 * __this, const RuntimeMethod* method)
{
	{
		// backgroundTransform = gameObject.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		__this->set_backgroundTransform_5(L_1);
		// cameraTransform = Camera.main.transform;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		__this->set_cameraTransform_6(L_3);
		// cameraLastX = cameraTransform.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_cameraTransform_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		__this->set_cameraLastX_7(L_6);
		// }
		return;
	}
}
// System.Void DistantBackground::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantBackground_Update_m717A5C75F86690A258A801B130FC26B64AFC5510 (DistantBackground_tAA29CAA1FF6C76248905FABA29443464952BB257 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// if (cameraLastX != cameraTransform.position.x)
		float L_0 = __this->get_cameraLastX_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_cameraTransform_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		if ((((float)L_0) == ((float)L_3)))
		{
			goto IL_008f;
		}
	}
	{
		// float cameraMovement = cameraTransform.position.x - cameraLastX;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_cameraTransform_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		float L_7 = __this->get_cameraLastX_7();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_6, (float)L_7));
		// backgroundTransform.position = new Vector3(backgroundTransform.position.x + cameraMovement/distanceDivisor,
		//                                             backgroundTransform.position.y,
		//                                             backgroundTransform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_backgroundTransform_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = __this->get_backgroundTransform_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		float L_12 = V_0;
		float L_13 = __this->get_distanceDivisor_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = __this->get_backgroundTransform_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = __this->get_backgroundTransform_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), ((float)il2cpp_codegen_add((float)L_11, (float)((float)((float)L_12/(float)L_13)))), L_16, L_19, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_20, /*hidden argument*/NULL);
		// cameraLastX = cameraTransform.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = __this->get_cameraTransform_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_x_2();
		__this->set_cameraLastX_7(L_23);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void DistantBackground::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantBackground__ctor_m69672948164ADDE8B4316E5B00F51FAA032709F2 (DistantBackground_tAA29CAA1FF6C76248905FABA29443464952BB257 * __this, const RuntimeMethod* method)
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
// System.Void EnemyHitboxResponder::OnHit(Hurtbox)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHitboxResponder_OnHit_m7AB6A93AAE1DAC77C0506D6D4D581FF2692ED7C5 (EnemyHitboxResponder_t67560E29F581274085582C41B30C95AEC4EC6E5F * __this, Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * ___hurtbox0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hurtbox.hurtboxResponder.Hurt("");
		Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * L_0 = ___hurtbox0;
		HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * L_1 = L_0->get_hurtboxResponder_8();
		HurtboxResponder_Hurt_mA16840AC2F6984D347491FAB7E42B9560E07E0ED(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyHitboxResponder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHitboxResponder__ctor_m6D988940BB94209F4DF679E7FA9B37384292E9A5 (EnemyHitboxResponder_t67560E29F581274085582C41B30C95AEC4EC6E5F * __this, const RuntimeMethod* method)
{
	{
		HitboxResponder__ctor_m958B29132E288E05E45FA563CEB39628AFBA4108(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Hitbox::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hitbox_Reset_mBC8BA33D225C075EFEC3681980B962AD4989BA6A (Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * __this, const RuntimeMethod* method)
{
	{
		// active = false;
		__this->set_active_4((bool)0);
		// closedColor = Color.gray;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
		__this->set_closedColor_5(L_0);
		// openColor = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		__this->set_openColor_6(L_1);
		// collidingColor = Color.cyan;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		__this->set_collidingColor_7(L_2);
		// transparency = 0.5f;
		__this->set_transparency_8((0.5f));
		// }
		return;
	}
}
// System.Void Hitbox::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hitbox_Start_m03ADC913370D62906711366081751F75137EFFC6 (Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * __this, const RuntimeMethod* method)
{
	Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * G_B2_0 = NULL;
	Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * G_B3_1 = NULL;
	{
		// _colliderState = active ? ColliderState.Open : ColliderState.Closed;
		bool L_0 = __this->get_active_4();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		G_B3_1->set__colliderState_9(G_B3_0);
		// _layerMask = 1 << 7;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_1;
		L_1 = LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C(((int32_t)128), /*hidden argument*/NULL);
		__this->set__layerMask_10(L_1);
		// }
		return;
	}
}
// System.Void Hitbox::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hitbox_Update_m87B39F3F9052ED1979E3AB3AE35F22265B629872 (Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* V_1 = NULL;
	int32_t V_2 = 0;
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * V_3 = NULL;
	HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * G_B5_0 = NULL;
	HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * G_B4_0 = NULL;
	Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * G_B10_0 = NULL;
	Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * G_B9_0 = NULL;
	int32_t G_B11_0 = 0;
	Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * G_B11_1 = NULL;
	{
		// if (!active)
		bool L_0 = __this->get_active_4();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// _colliderState = ColliderState.Closed;
		__this->set__colliderState_9(0);
		// }
		return;
	}

IL_0010:
	{
		// Vector2 halfExtents = new Vector2(transform.localScale.x/2, transform.localScale.y/2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), ((float)((float)L_3/(float)(2.0f))), ((float)((float)L_6/(float)(2.0f))), /*hidden argument*/NULL);
		// Collider2D[] colliders = Physics2D.OverlapBoxAll(transform.position, halfExtents, transform.eulerAngles.z, _layerMask);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_8, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_z_4();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_14 = __this->get__layerMask_10();
		int32_t L_15;
		L_15 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_16;
		L_16 = Physics2D_OverlapBoxAll_m2BAC22EAC2F6F9C96BF9534C201A1489EF27D77B(L_9, L_10, L_13, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		// for (int i = 0; i < colliders.Length; i++)
		V_2 = 0;
		goto IL_0093;
	}

IL_0079:
	{
		// Collider2D collider = colliders[i];
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = L_18;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		V_3 = L_20;
		// _hitboxResponder?.CollisionedWith(collider);
		HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * L_21 = __this->get__hitboxResponder_11();
		HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * L_22 = L_21;
		G_B4_0 = L_22;
		if (L_22)
		{
			G_B5_0 = L_22;
			goto IL_0089;
		}
	}
	{
		goto IL_008f;
	}

IL_0089:
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_23 = V_3;
		HitboxResponder_CollisionedWith_m6C6B04FE1F1A7AA42B67EC59DDCA17EAB28AB577(G_B5_0, L_23, /*hidden argument*/NULL);
	}

IL_008f:
	{
		// for (int i = 0; i < colliders.Length; i++)
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0093:
	{
		// for (int i = 0; i < colliders.Length; i++)
		int32_t L_25 = V_2;
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))
		{
			goto IL_0079;
		}
	}
	{
		// _colliderState = colliders.Length > 0 ? ColliderState.Colliding : ColliderState.Open;
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_27 = V_1;
		G_B9_0 = __this;
		if ((((RuntimeArray*)L_27)->max_length))
		{
			G_B10_0 = __this;
			goto IL_00a1;
		}
	}
	{
		G_B11_0 = 1;
		G_B11_1 = G_B9_0;
		goto IL_00a2;
	}

IL_00a1:
	{
		G_B11_0 = 2;
		G_B11_1 = G_B10_0;
	}

IL_00a2:
	{
		G_B11_1->set__colliderState_9(G_B11_0);
		// }
		return;
	}
}
// System.Void Hitbox::SetResponder(HitboxResponder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hitbox_SetResponder_mCA6D48931791E6E8245207EEC25F1DE9C019946F (Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * __this, HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * ___hitboxResponder0, const RuntimeMethod* method)
{
	{
		// _hitboxResponder = hitboxResponder;
		HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * L_0 = ___hitboxResponder0;
		__this->set__hitboxResponder_11(L_0);
		// }
		return;
	}
}
// System.Void Hitbox::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hitbox_OnDrawGizmos_m019727378AD51F89D79EC55ED19E7B0B837DDF3F (Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * __this, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// switch (_colliderState)
		int32_t L_0 = __this->get__colliderState_9();
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0024;
			}
			case 2:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_0036;
	}

IL_001b:
	{
		// tempColor = closedColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = __this->get_closedColor_5();
		V_0 = L_2;
		// break;
		goto IL_003d;
	}

IL_0024:
	{
		// tempColor = openColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = __this->get_openColor_6();
		V_0 = L_3;
		// break;
		goto IL_003d;
	}

IL_002d:
	{
		// tempColor = collidingColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = __this->get_collidingColor_7();
		V_0 = L_4;
		// break;
		goto IL_003d;
	}

IL_0036:
	{
		// tempColor = openColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = __this->get_openColor_6();
		V_0 = L_5;
	}

IL_003d:
	{
		// tempColor.a = transparency;
		float L_6 = __this->get_transparency_8();
		(&V_0)->set_a_3(L_6);
		// Gizmos.color = tempColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = V_0;
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_7, /*hidden argument*/NULL);
		// Gizmos.matrix = Matrix4x4.TRS(transform.position, transform.rotation, transform.localScale);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_12, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_14;
		L_14 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_9, L_11, L_13, /*hidden argument*/NULL);
		Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(L_14, /*hidden argument*/NULL);
		// Gizmos.DrawCube(Vector3.zero, new Vector3(transform.localScale.x, transform.localScale.y, 0));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_22), L_18, L_21, (0.0f), /*hidden argument*/NULL);
		Gizmos_DrawCube_mCF599EC2E7ABB92994C186412B6E8F39140F66C4(L_15, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Hitbox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hitbox__ctor_m4DE0542AD9C039A50013E27DA8A89F9687CF9930 (Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * __this, const RuntimeMethod* method)
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
// System.Void HitboxResponder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitboxResponder_Reset_m7EA017CA3CA392D4A4DBA2EA2AFB9C42188C8F44 (HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * __this, const RuntimeMethod* method)
{
	{
		// attackDuration = 1.0f;
		__this->set_attackDuration_4((1.0f));
		// }
		return;
	}
}
// System.Void HitboxResponder::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitboxResponder_Start_m9363A581587F9476E82C6EDDE0D3446EA2BB0DDB (HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1_m53D17A66F619925751E2E994AD65A0FEE434E86D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hitbox = GetComponent<Hitbox>();
		Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * L_0;
		L_0 = Component_GetComponent_TisHitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1_m53D17A66F619925751E2E994AD65A0FEE434E86D(__this, /*hidden argument*/Component_GetComponent_TisHitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1_m53D17A66F619925751E2E994AD65A0FEE434E86D_RuntimeMethod_var);
		__this->set__hitbox_5(L_0);
		// }
		return;
	}
}
// System.Boolean HitboxResponder::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HitboxResponder_Attack_m6862C4B28E3571A6213D2FB055E1B5B3412DB2ED (HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * __this, const RuntimeMethod* method)
{
	{
		// if (!_hitbox.active)
		Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * L_0 = __this->get__hitbox_5();
		bool L_1 = L_0->get_active_4();
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// StartCoroutine(AttackCoroutine());
		RuntimeObject* L_2;
		L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.IEnumerator HitboxResponder::AttackCoroutine() */, __this);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_001c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void HitboxResponder::CollisionedWith(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitboxResponder_CollisionedWith_m6C6B04FE1F1A7AA42B67EC59DDCA17EAB28AB577 (HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHurtbox_t24F500594B4FF288922299618B8C2857D3F08012_m4C786AE19FE4886A7056921436EAC93917B09844_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * V_0 = NULL;
	{
		// Hurtbox hurtbox = collider.GetComponent<Hurtbox>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collider0;
		Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * L_1;
		L_1 = Component_GetComponent_TisHurtbox_t24F500594B4FF288922299618B8C2857D3F08012_m4C786AE19FE4886A7056921436EAC93917B09844(L_0, /*hidden argument*/Component_GetComponent_TisHurtbox_t24F500594B4FF288922299618B8C2857D3F08012_m4C786AE19FE4886A7056921436EAC93917B09844_RuntimeMethod_var);
		V_0 = L_1;
		// if (hurtbox.active && ((gameObject.tag == "Player" && collider.gameObject.tag == "Enemy") || (gameObject.tag == "Enemy" && collider.gameObject.tag == "Player")))
		Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * L_2 = V_0;
		bool L_3 = L_2->get_active_4();
		if (!L_3)
		{
			goto IL_0072;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_7 = ___collider0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_006b;
		}
	}

IL_003d:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_14 = ___collider0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_14, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_15, /*hidden argument*/NULL);
		bool L_17;
		L_17 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_16, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0072;
		}
	}

IL_006b:
	{
		// OnHit(hurtbox);
		Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * L_18 = V_0;
		VirtActionInvoker1< Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * >::Invoke(5 /* System.Void HitboxResponder::OnHit(Hurtbox) */, __this, L_18);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator HitboxResponder::AttackCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HitboxResponder_AttackCoroutine_m79ED3786216AC2BD894151DE5F5F8FD1B850E277 (HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAttackCoroutineU3Ed__6_t61F905EC8D3888F875EFCD9A032BD26942B90B42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAttackCoroutineU3Ed__6_t61F905EC8D3888F875EFCD9A032BD26942B90B42 * L_0 = (U3CAttackCoroutineU3Ed__6_t61F905EC8D3888F875EFCD9A032BD26942B90B42 *)il2cpp_codegen_object_new(U3CAttackCoroutineU3Ed__6_t61F905EC8D3888F875EFCD9A032BD26942B90B42_il2cpp_TypeInfo_var);
		U3CAttackCoroutineU3Ed__6__ctor_mEB1F0C82F980C91FA555D5AD993F5EF5880EAB99(L_0, 0, /*hidden argument*/NULL);
		U3CAttackCoroutineU3Ed__6_t61F905EC8D3888F875EFCD9A032BD26942B90B42 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void HitboxResponder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitboxResponder__ctor_m958B29132E288E05E45FA563CEB39628AFBA4108 (HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * __this, const RuntimeMethod* method)
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
// System.Void Hurtbox::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hurtbox_Reset_m527DD86829B6EC21AC85189310841FAF37277243 (Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// active = true;
		__this->set_active_4((bool)1);
		// activeColor = Color.blue;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		__this->set_activeColor_5(L_0);
		// inactiveColor = Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		__this->set_inactiveColor_6(L_1);
		// transparency = 0.5f;
		__this->set_transparency_7((0.5f));
		// _boxCollider = GetComponent<BoxCollider2D>();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_2;
		L_2 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		__this->set__boxCollider_9(L_2);
		// }
		return;
	}
}
// System.Void Hurtbox::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hurtbox_Start_mF53AFA9A5C123B6F867223E468BABBF3954C7249 (Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC_mA527F71BBF1E39A924FDF3B1DA72EB21F523336E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hurtboxResponder = GetComponent<HurtboxResponder>();
		HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * L_0;
		L_0 = Component_GetComponent_TisHurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC_mA527F71BBF1E39A924FDF3B1DA72EB21F523336E(__this, /*hidden argument*/Component_GetComponent_TisHurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC_mA527F71BBF1E39A924FDF3B1DA72EB21F523336E_RuntimeMethod_var);
		__this->set_hurtboxResponder_8(L_0);
		// }
		return;
	}
}
// System.Void Hurtbox::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hurtbox_OnDrawGizmos_mBD52546D63560BAE56CFE42D68C19854F3E6CD53 (Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * __this, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// Color tempColor = active ? activeColor : inactiveColor;
		bool L_0 = __this->get_active_4();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = __this->get_inactiveColor_6();
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0010:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = __this->get_activeColor_5();
		G_B3_0 = L_2;
	}

IL_0016:
	{
		V_0 = G_B3_0;
		// tempColor.a = transparency;
		float L_3 = __this->get_transparency_7();
		(&V_0)->set_a_3(L_3);
		// Gizmos.color = tempColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = V_0;
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_4, /*hidden argument*/NULL);
		// Gizmos.matrix = Matrix4x4.TRS(transform.position, transform.rotation, transform.localScale);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_9, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_11;
		L_11 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_6, L_8, L_10, /*hidden argument*/NULL);
		Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(L_11, /*hidden argument*/NULL);
		// Gizmos.DrawCube(Vector3.zero, new Vector3(_boxCollider.size.x * transform.lossyScale.x, _boxCollider.size.y * transform.lossyScale.y, 1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_13 = __this->get__boxCollider_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = BoxCollider2D_get_size_m011E7AA7861BF58898A64D986A4235C1E2061BF9(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_2();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_19 = __this->get__boxCollider_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = BoxCollider2D_get_size_m011E7AA7861BF58898A64D986A4235C1E2061BF9(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_y_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_25), ((float)il2cpp_codegen_multiply((float)L_15, (float)L_18)), ((float)il2cpp_codegen_multiply((float)L_21, (float)L_24)), (1.0f), /*hidden argument*/NULL);
		Gizmos_DrawCube_mCF599EC2E7ABB92994C186412B6E8F39140F66C4(L_12, L_25, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Hurtbox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hurtbox__ctor_mFD50873A54E2D85FF4C3D8BF1A03CD0F83482296 (Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * __this, const RuntimeMethod* method)
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
// System.Void HurtboxResponder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HurtboxResponder_Reset_m1C2C724381156331FA9B525FDD08BB3B67D29C5B (HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * __this, const RuntimeMethod* method)
{
	{
		// immunityDuration = 1.0f;
		__this->set_immunityDuration_4((1.0f));
		// }
		return;
	}
}
// System.Void HurtboxResponder::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HurtboxResponder_Start_m876B1FDA9C3E8EDBCBF58707516CC57CF9345CD8 (HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHurtbox_t24F500594B4FF288922299618B8C2857D3F08012_m4C786AE19FE4886A7056921436EAC93917B09844_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hurtbox = GetComponent<Hurtbox>();
		Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * L_0;
		L_0 = Component_GetComponent_TisHurtbox_t24F500594B4FF288922299618B8C2857D3F08012_m4C786AE19FE4886A7056921436EAC93917B09844(__this, /*hidden argument*/Component_GetComponent_TisHurtbox_t24F500594B4FF288922299618B8C2857D3F08012_m4C786AE19FE4886A7056921436EAC93917B09844_RuntimeMethod_var);
		__this->set__hurtbox_5(L_0);
		// }
		return;
	}
}
// System.Void HurtboxResponder::Hurt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HurtboxResponder_Hurt_mA16840AC2F6984D347491FAB7E42B9560E07E0ED (HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * __this, String_t* ___parameter0, const RuntimeMethod* method)
{
	{
		// if(_hurtbox.active)
		Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * L_0 = __this->get__hurtbox_5();
		bool L_1 = L_0->get_active_4();
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// StartCoroutine(HurtCoroutine(parameter));
		String_t* L_2 = ___parameter0;
		RuntimeObject* L_3;
		L_3 = HurtboxResponder_HurtCoroutine_mE5C0399A08E06EE461718FF7E71E6B1C4E868D45(__this, L_2, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator HurtboxResponder::HurtCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HurtboxResponder_HurtCoroutine_mE5C0399A08E06EE461718FF7E71E6B1C4E868D45 (HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * __this, String_t* ___parameter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B * L_0 = (U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B *)il2cpp_codegen_object_new(U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B_il2cpp_TypeInfo_var);
		U3CHurtCoroutineU3Ed__5__ctor_m0A6DC7D644A63CC40CD0CF95FF572A295770B339(L_0, 0, /*hidden argument*/NULL);
		U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B * L_2 = L_1;
		String_t* L_3 = ___parameter0;
		L_2->set_parameter_3(L_3);
		return L_2;
	}
}
// System.Void HurtboxResponder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HurtboxResponder__ctor_m9139605CAC6138F661C4795EBD2AD58F3DDCD8A9 (HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * __this, const RuntimeMethod* method)
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
// System.Void Messenger::AddListener(System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Messenger_AddListener_m5B2419C4C51FE1F0EFC6EBBE69F16DB37D155121 (String_t* ___eventType0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MessengerInternal.AddListener(eventType, handler);
		String_t* L_0 = ___eventType0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___handler1;
		IL2CPP_RUNTIME_CLASS_INIT(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		MessengerInternal_AddListener_m9454973F814F1B049528F534B2131ED7A63635A3(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Messenger::RemoveListener(System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Messenger_RemoveListener_mBB491F54AE7A23F961E6D89DE099BD9FE906C959 (String_t* ___eventType0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MessengerInternal.RemoveListener(eventType, handler);
		String_t* L_0 = ___eventType0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___handler1;
		IL2CPP_RUNTIME_CLASS_INIT(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		MessengerInternal_RemoveListener_m58FD7B8928EBF68D6148F16191A13751B46878A5(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Messenger::Broadcast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Messenger_Broadcast_mF26D1411194B524B3F93BD73C0F8EA4E52CE2539 (String_t* ___eventType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Broadcast(eventType, MessengerInternal.DEFAULT_MODE);
		String_t* L_0 = ___eventType0;
		IL2CPP_RUNTIME_CLASS_INIT(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		int32_t L_1 = ((MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_StaticFields*)il2cpp_codegen_static_fields_for(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var))->get_DEFAULT_MODE_1();
		Messenger_Broadcast_m933D05BEDBDB49AD646C79B42AF07D6D84D2591A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Messenger::Broadcast(System.String,MessengerMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Messenger_Broadcast_m933D05BEDBDB49AD646C79B42AF07D6D84D2591A (String_t* ___eventType0, int32_t ___mode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessengerInternal_GetInvocationList_TisAction_tAF41423D285AE0862865348CF6CE51CD085ABBA6_m31575B2B83B42F0B62F619517C11874BBDC0D02C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// MessengerInternal.OnBroadcasting(eventType, mode);
		String_t* L_0 = ___eventType0;
		int32_t L_1 = ___mode1;
		IL2CPP_RUNTIME_CLASS_INIT(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		MessengerInternal_OnBroadcasting_mA5D03B0E019323AA80AC542792F52E90A736BD5F(L_0, L_1, /*hidden argument*/NULL);
		// var invocationList = MessengerInternal.GetInvocationList<Action>(eventType);
		String_t* L_2 = ___eventType0;
		ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* L_3;
		L_3 = MessengerInternal_GetInvocationList_TisAction_tAF41423D285AE0862865348CF6CE51CD085ABBA6_m31575B2B83B42F0B62F619517C11874BBDC0D02C(L_2, /*hidden argument*/MessengerInternal_GetInvocationList_TisAction_tAF41423D285AE0862865348CF6CE51CD085ABBA6_m31575B2B83B42F0B62F619517C11874BBDC0D02C_RuntimeMethod_var);
		// foreach(var callback in invocationList)
		V_0 = L_3;
		V_1 = 0;
		goto IL_001e;
	}

IL_0012:
	{
		// foreach(var callback in invocationList)
		ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		// callback.Invoke();
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_001e:
	{
		// foreach(var callback in invocationList)
		int32_t L_9 = V_1;
		ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
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
// System.Void MessengerInternal::AddListener(System.String,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessengerInternal_AddListener_m9454973F814F1B049528F534B2131ED7A63635A3 (String_t* ___eventType0, Delegate_t * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8718EF71937922D19BC098D81DC080A77D1FFFCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD905CE374900422217A27DA1E4336DE0F82959B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MessengerInternal.OnListenerAdding(eventType, callback);
		String_t* L_0 = ___eventType0;
		Delegate_t * L_1 = ___callback1;
		IL2CPP_RUNTIME_CLASS_INIT(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		MessengerInternal_OnListenerAdding_m4834299F957BC198727BDC94651FBD1029BBADFE(L_0, L_1, /*hidden argument*/NULL);
		// eventTable[eventType] = Delegate.Combine(eventTable[eventType], callback);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_2 = ((MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_StaticFields*)il2cpp_codegen_static_fields_for(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var))->get_eventTable_0();
		String_t* L_3 = ___eventType0;
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_4 = ((MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_StaticFields*)il2cpp_codegen_static_fields_for(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var))->get_eventTable_0();
		String_t* L_5 = ___eventType0;
		Delegate_t * L_6;
		L_6 = Dictionary_2_get_Item_m8718EF71937922D19BC098D81DC080A77D1FFFCA(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m8718EF71937922D19BC098D81DC080A77D1FFFCA_RuntimeMethod_var);
		Delegate_t * L_7 = ___callback1;
		Delegate_t * L_8;
		L_8 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_6, L_7, /*hidden argument*/NULL);
		Dictionary_2_set_Item_mD905CE374900422217A27DA1E4336DE0F82959B5(L_2, L_3, L_8, /*hidden argument*/Dictionary_2_set_Item_mD905CE374900422217A27DA1E4336DE0F82959B5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MessengerInternal::RemoveListener(System.String,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessengerInternal_RemoveListener_m58FD7B8928EBF68D6148F16191A13751B46878A5 (String_t* ___eventType0, Delegate_t * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8718EF71937922D19BC098D81DC080A77D1FFFCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD905CE374900422217A27DA1E4336DE0F82959B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MessengerInternal.OnListenerRemoving(eventType, handler);
		String_t* L_0 = ___eventType0;
		Delegate_t * L_1 = ___handler1;
		IL2CPP_RUNTIME_CLASS_INIT(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		MessengerInternal_OnListenerRemoving_mF1E7EC12A334D430C3727F8C68861C4DE32A324A(L_0, L_1, /*hidden argument*/NULL);
		// eventTable[eventType] = Delegate.Remove(eventTable[eventType], handler);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_2 = ((MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_StaticFields*)il2cpp_codegen_static_fields_for(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var))->get_eventTable_0();
		String_t* L_3 = ___eventType0;
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_4 = ((MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_StaticFields*)il2cpp_codegen_static_fields_for(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var))->get_eventTable_0();
		String_t* L_5 = ___eventType0;
		Delegate_t * L_6;
		L_6 = Dictionary_2_get_Item_m8718EF71937922D19BC098D81DC080A77D1FFFCA(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m8718EF71937922D19BC098D81DC080A77D1FFFCA_RuntimeMethod_var);
		Delegate_t * L_7 = ___handler1;
		Delegate_t * L_8;
		L_8 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_6, L_7, /*hidden argument*/NULL);
		Dictionary_2_set_Item_mD905CE374900422217A27DA1E4336DE0F82959B5(L_2, L_3, L_8, /*hidden argument*/Dictionary_2_set_Item_mD905CE374900422217A27DA1E4336DE0F82959B5_RuntimeMethod_var);
		// MessengerInternal.OnListenerRemoved(eventType);
		String_t* L_9 = ___eventType0;
		MessengerInternal_OnListenerRemoved_m45A6F67645CD6DEF3E975FF79D450FD9F7B36330(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MessengerInternal::OnListenerAdding(System.String,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessengerInternal_OnListenerAdding_m4834299F957BC198727BDC94651FBD1029BBADFE (String_t* ___eventType0, Delegate_t * ___listenerBeingAdded1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m452488D89E0EAE6D5ED8A7ABD7EA431021208FD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m358B0C67A935CC016F723C4BD54BB219660EFF4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8718EF71937922D19BC098D81DC080A77D1FFFCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t * V_0 = NULL;
	{
		// if (!eventTable.ContainsKey(eventType)) {
		IL2CPP_RUNTIME_CLASS_INIT(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_0 = ((MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_StaticFields*)il2cpp_codegen_static_fields_for(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var))->get_eventTable_0();
		String_t* L_1 = ___eventType0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m358B0C67A935CC016F723C4BD54BB219660EFF4F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m358B0C67A935CC016F723C4BD54BB219660EFF4F_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// eventTable.Add(eventType, null);
		IL2CPP_RUNTIME_CLASS_INIT(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_3 = ((MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_StaticFields*)il2cpp_codegen_static_fields_for(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var))->get_eventTable_0();
		String_t* L_4 = ___eventType0;
		Dictionary_2_Add_m452488D89E0EAE6D5ED8A7ABD7EA431021208FD2(L_3, L_4, (Delegate_t *)NULL, /*hidden argument*/Dictionary_2_Add_m452488D89E0EAE6D5ED8A7ABD7EA431021208FD2_RuntimeMethod_var);
	}

IL_0019:
	{
		// var d = eventTable[eventType];
		IL2CPP_RUNTIME_CLASS_INIT(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_5 = ((MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_StaticFields*)il2cpp_codegen_static_fields_for(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var))->get_eventTable_0();
		String_t* L_6 = ___eventType0;
		Delegate_t * L_7;
		L_7 = Dictionary_2_get_Item_m8718EF71937922D19BC098D81DC080A77D1FFFCA(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m8718EF71937922D19BC098D81DC080A77D1FFFCA_RuntimeMethod_var);
		V_0 = L_7;
		// if (d != null && d.GetType() != listenerBeingAdded.GetType()) {
		Delegate_t * L_8 = V_0;
		if (!L_8)
		{
			goto IL_0062;
		}
	}
	{
		Delegate_t * L_9 = V_0;
		Type_t * L_10;
		L_10 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_9, /*hidden argument*/NULL);
		Delegate_t * L_11 = ___listenerBeingAdded1;
		Type_t * L_12;
		L_12 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_10, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0062;
		}
	}
	{
		// throw new ListenerException(string.Format("Attempting to add listener with inconsistent signature for event type {0}. Current listeners have type {1} and listener being added has type {2}", eventType, d.GetType().Name, listenerBeingAdded.GetType().Name));
		String_t* L_14 = ___eventType0;
		Delegate_t * L_15 = V_0;
		Type_t * L_16;
		L_16 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_15, /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		Delegate_t * L_18 = ___listenerBeingAdded1;
		Type_t * L_19;
		L_19 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		String_t* L_21;
		L_21 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral527C0AEB874B42DB0817D46374DE8B6844AA3587)), L_14, L_17, L_20, /*hidden argument*/NULL);
		ListenerException_tE73B553E8075BABF879CA3DFA2CDD4D6ED29A749 * L_22 = (ListenerException_tE73B553E8075BABF879CA3DFA2CDD4D6ED29A749 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ListenerException_tE73B553E8075BABF879CA3DFA2CDD4D6ED29A749_il2cpp_TypeInfo_var)));
		ListenerException__ctor_mFBD80DFB4AECEB09B400B4EC01912AF4B01E352F(L_22, L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MessengerInternal_OnListenerAdding_m4834299F957BC198727BDC94651FBD1029BBADFE_RuntimeMethod_var)));
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void MessengerInternal::OnListenerRemoving(System.String,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessengerInternal_OnListenerRemoving_mF1E7EC12A334D430C3727F8C68861C4DE32A324A (String_t* ___eventType0, Delegate_t * ___listenerBeingRemoved1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m358B0C67A935CC016F723C4BD54BB219660EFF4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8718EF71937922D19BC098D81DC080A77D1FFFCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t * V_0 = NULL;
	{
		// if (eventTable.ContainsKey(eventType)) {
		IL2CPP_RUNTIME_CLASS_INIT(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_0 = ((MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_StaticFields*)il2cpp_codegen_static_fields_for(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var))->get_eventTable_0();
		String_t* L_1 = ___eventType0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m358B0C67A935CC016F723C4BD54BB219660EFF4F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m358B0C67A935CC016F723C4BD54BB219660EFF4F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0067;
		}
	}
	{
		// var d = eventTable[eventType];
		IL2CPP_RUNTIME_CLASS_INIT(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_3 = ((MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_StaticFields*)il2cpp_codegen_static_fields_for(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var))->get_eventTable_0();
		String_t* L_4 = ___eventType0;
		Delegate_t * L_5;
		L_5 = Dictionary_2_get_Item_m8718EF71937922D19BC098D81DC080A77D1FFFCA(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m8718EF71937922D19BC098D81DC080A77D1FFFCA_RuntimeMethod_var);
		V_0 = L_5;
		// if (d == null) {
		Delegate_t * L_6 = V_0;
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		// throw new ListenerException(string.Format("Attempting to remove listener with for event type {0} but current listener is null.", eventType));
		String_t* L_7 = ___eventType0;
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1C0CAE471F0DB9CAB86D11A4A09B7515A93C4F5B)), L_7, /*hidden argument*/NULL);
		ListenerException_tE73B553E8075BABF879CA3DFA2CDD4D6ED29A749 * L_9 = (ListenerException_tE73B553E8075BABF879CA3DFA2CDD4D6ED29A749 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ListenerException_tE73B553E8075BABF879CA3DFA2CDD4D6ED29A749_il2cpp_TypeInfo_var)));
		ListenerException__ctor_mFBD80DFB4AECEB09B400B4EC01912AF4B01E352F(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MessengerInternal_OnListenerRemoving_mF1E7EC12A334D430C3727F8C68861C4DE32A324A_RuntimeMethod_var)));
	}

IL_002d:
	{
		// } else if (d.GetType() != listenerBeingRemoved.GetType()) {
		Delegate_t * L_10 = V_0;
		Type_t * L_11;
		L_11 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_10, /*hidden argument*/NULL);
		Delegate_t * L_12 = ___listenerBeingRemoved1;
		Type_t * L_13;
		L_13 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_11, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0078;
		}
	}
	{
		// throw new ListenerException(string.Format("Attempting to remove listener with inconsistent signature for event type {0}. Current listeners have type {1} and listener being removed has type {2}", eventType, d.GetType().Name, listenerBeingRemoved.GetType().Name));
		String_t* L_15 = ___eventType0;
		Delegate_t * L_16 = V_0;
		Type_t * L_17;
		L_17 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_17);
		Delegate_t * L_19 = ___listenerBeingRemoved1;
		Type_t * L_20;
		L_20 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_19, /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_20);
		String_t* L_22;
		L_22 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral99696C7D6AC57E0F5C75D9B574BC1C8C9817D13C)), L_15, L_18, L_21, /*hidden argument*/NULL);
		ListenerException_tE73B553E8075BABF879CA3DFA2CDD4D6ED29A749 * L_23 = (ListenerException_tE73B553E8075BABF879CA3DFA2CDD4D6ED29A749 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ListenerException_tE73B553E8075BABF879CA3DFA2CDD4D6ED29A749_il2cpp_TypeInfo_var)));
		ListenerException__ctor_mFBD80DFB4AECEB09B400B4EC01912AF4B01E352F(L_23, L_22, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MessengerInternal_OnListenerRemoving_mF1E7EC12A334D430C3727F8C68861C4DE32A324A_RuntimeMethod_var)));
	}

IL_0067:
	{
		// throw new ListenerException(string.Format("Attempting to remove listener for type {0} but Messenger doesn't know about this event type.", eventType));
		String_t* L_24 = ___eventType0;
		String_t* L_25;
		L_25 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral290B876AA43C7C6F2942B6120BCBD9979FFFFB08)), L_24, /*hidden argument*/NULL);
		ListenerException_tE73B553E8075BABF879CA3DFA2CDD4D6ED29A749 * L_26 = (ListenerException_tE73B553E8075BABF879CA3DFA2CDD4D6ED29A749 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ListenerException_tE73B553E8075BABF879CA3DFA2CDD4D6ED29A749_il2cpp_TypeInfo_var)));
		ListenerException__ctor_mFBD80DFB4AECEB09B400B4EC01912AF4B01E352F(L_26, L_25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MessengerInternal_OnListenerRemoving_mF1E7EC12A334D430C3727F8C68861C4DE32A324A_RuntimeMethod_var)));
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void MessengerInternal::OnListenerRemoved(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessengerInternal_OnListenerRemoved_m45A6F67645CD6DEF3E975FF79D450FD9F7B36330 (String_t* ___eventType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mDA53EAA38E54A0AE239561F7E5088F6C4E55FA6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8718EF71937922D19BC098D81DC080A77D1FFFCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (eventTable[eventType] == null) {
		IL2CPP_RUNTIME_CLASS_INIT(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_0 = ((MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_StaticFields*)il2cpp_codegen_static_fields_for(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var))->get_eventTable_0();
		String_t* L_1 = ___eventType0;
		Delegate_t * L_2;
		L_2 = Dictionary_2_get_Item_m8718EF71937922D19BC098D81DC080A77D1FFFCA(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m8718EF71937922D19BC098D81DC080A77D1FFFCA_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// eventTable.Remove(eventType);
		IL2CPP_RUNTIME_CLASS_INIT(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_3 = ((MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_StaticFields*)il2cpp_codegen_static_fields_for(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var))->get_eventTable_0();
		String_t* L_4 = ___eventType0;
		bool L_5;
		L_5 = Dictionary_2_Remove_mDA53EAA38E54A0AE239561F7E5088F6C4E55FA6B(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_mDA53EAA38E54A0AE239561F7E5088F6C4E55FA6B_RuntimeMethod_var);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void MessengerInternal::OnBroadcasting(System.String,MessengerMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessengerInternal_OnBroadcasting_mA5D03B0E019323AA80AC542792F52E90A736BD5F (String_t* ___eventType0, int32_t ___mode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m358B0C67A935CC016F723C4BD54BB219660EFF4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mode == MessengerMode.REQUIRE_LISTENER && !eventTable.ContainsKey(eventType)) {
		int32_t L_0 = ___mode1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_1 = ((MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_StaticFields*)il2cpp_codegen_static_fields_for(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var))->get_eventTable_0();
		String_t* L_2 = ___eventType0;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m358B0C67A935CC016F723C4BD54BB219660EFF4F(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m358B0C67A935CC016F723C4BD54BB219660EFF4F_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		// throw new MessengerInternal.BroadcastException(string.Format("Broadcasting message {0} but no listener found.", eventType));
		String_t* L_4 = ___eventType0;
		String_t* L_5;
		L_5 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A585FEB8EC7C6EDDBD59F139E12803C0F90F60E)), L_4, /*hidden argument*/NULL);
		BroadcastException_tE2F16986CC332C7EDA6B86CC45B72590515B0A56 * L_6 = (BroadcastException_tE2F16986CC332C7EDA6B86CC45B72590515B0A56 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BroadcastException_tE2F16986CC332C7EDA6B86CC45B72590515B0A56_il2cpp_TypeInfo_var)));
		BroadcastException__ctor_m55CF8853FC0BB1A42913C54893A98C62BEF2EDB7(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MessengerInternal_OnBroadcasting_mA5D03B0E019323AA80AC542792F52E90A736BD5F_RuntimeMethod_var)));
	}

IL_0022:
	{
		// }
		return;
	}
}
// MessengerInternal/BroadcastException MessengerInternal::CreateBroadcastSignatureException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BroadcastException_tE2F16986CC332C7EDA6B86CC45B72590515B0A56 * MessengerInternal_CreateBroadcastSignatureException_m289128E40D30A6999BA4C2EA5CBC54F9041B7308 (String_t* ___eventType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BroadcastException_tE2F16986CC332C7EDA6B86CC45B72590515B0A56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral869BDC11A573306F1810123274FC58775C28A483);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new BroadcastException(string.Format("Broadcasting message {0} but listeners have a different signature than the broadcaster.", eventType));
		String_t* L_0 = ___eventType0;
		String_t* L_1;
		L_1 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral869BDC11A573306F1810123274FC58775C28A483, L_0, /*hidden argument*/NULL);
		BroadcastException_tE2F16986CC332C7EDA6B86CC45B72590515B0A56 * L_2 = (BroadcastException_tE2F16986CC332C7EDA6B86CC45B72590515B0A56 *)il2cpp_codegen_object_new(BroadcastException_tE2F16986CC332C7EDA6B86CC45B72590515B0A56_il2cpp_TypeInfo_var);
		BroadcastException__ctor_m55CF8853FC0BB1A42913C54893A98C62BEF2EDB7(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void MessengerInternal::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessengerInternal__cctor_mE4ECD46D6192ED71AA082F8CB457BB20FD8E2D2D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m210799E1C2576446641CA24C1D9463F791556112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly public static Dictionary<string, Delegate> eventTable = new Dictionary<string, Delegate>();
		Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD * L_0 = (Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD *)il2cpp_codegen_object_new(Dictionary_2_t521306497EEE741202CFF9F69FB533CCAD8C8ACD_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m210799E1C2576446641CA24C1D9463F791556112(L_0, /*hidden argument*/Dictionary_2__ctor_m210799E1C2576446641CA24C1D9463F791556112_RuntimeMethod_var);
		((MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_StaticFields*)il2cpp_codegen_static_fields_for(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var))->set_eventTable_0(L_0);
		// static public readonly MessengerMode DEFAULT_MODE = MessengerMode.REQUIRE_LISTENER;
		((MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_StaticFields*)il2cpp_codegen_static_fields_for(MessengerInternal_t05E27EA8E377F82453753EAC214E7FC7D39A8BE0_il2cpp_TypeInfo_var))->set_DEFAULT_MODE_1(1);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlatformerCamera::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformerCamera_Reset_mC20C610898FA00229E9EB68919211D5C6A43F069 (PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC * __this, const RuntimeMethod* method)
{
	{
		// followSpeed = 9.6f;
		__this->set_followSpeed_5((9.60000038f));
		// xAxisLock = false;
		__this->set_xAxisLock_6((bool)0);
		// xHasMax = false;
		__this->set_xHasMax_7((bool)0);
		// xHasMin = true;
		__this->set_xHasMin_8((bool)1);
		// xMax = 0;
		__this->set_xMax_9((0.0f));
		// xMin = 0;
		__this->set_xMin_10((0.0f));
		// xOffset = 4.8f;
		__this->set_xOffset_11((4.80000019f));
		// yAxisLock = true;
		__this->set_yAxisLock_12((bool)1);
		// yHasMax = false;
		__this->set_yHasMax_13((bool)0);
		// yHasMin = false;
		__this->set_yHasMin_14((bool)0);
		// yMax = 0;
		__this->set_yMax_15((0.0f));
		// yMin = 0;
		__this->set_yMin_16((0.0f));
		// yOffset = 3.45f;
		__this->set_yOffset_17((3.45000005f));
		// }
		return;
	}
}
// System.Void PlatformerCamera::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformerCamera_LateUpdate_mA952106C33DFEFBE2400B722793CAEE8CC1F8423 (PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// float xTarget = trackingTarget.position.x + xOffset;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_trackingTarget_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		float L_3 = __this->get_xOffset_11();
		V_0 = ((float)il2cpp_codegen_add((float)L_2, (float)L_3));
		// float yTarget = trackingTarget.position.y + yOffset;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_trackingTarget_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		float L_7 = __this->get_yOffset_17();
		V_1 = ((float)il2cpp_codegen_add((float)L_6, (float)L_7));
		// float xNew = transform.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		V_2 = L_10;
		// if(!xAxisLock)
		bool L_11 = __this->get_xAxisLock_6();
		if (L_11)
		{
			goto IL_009c;
		}
	}
	{
		// xNew = Mathf.Lerp(transform.position.x, xTarget, Time.deltaTime * followSpeed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_x_2();
		float L_15 = V_0;
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_17 = __this->get_followSpeed_5();
		float L_18;
		L_18 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_14, L_15, ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), /*hidden argument*/NULL);
		V_2 = L_18;
		// if (xHasMax && xNew > xMax)
		bool L_19 = __this->get_xHasMax_7();
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		float L_20 = V_2;
		float L_21 = __this->get_xMax_9();
		if ((!(((float)L_20) > ((float)L_21))))
		{
			goto IL_0084;
		}
	}
	{
		// xNew = xMax;
		float L_22 = __this->get_xMax_9();
		V_2 = L_22;
	}

IL_0084:
	{
		// if (xHasMin && xNew < xMin)
		bool L_23 = __this->get_xHasMin_8();
		if (!L_23)
		{
			goto IL_009c;
		}
	}
	{
		float L_24 = V_2;
		float L_25 = __this->get_xMin_10();
		if ((!(((float)L_24) < ((float)L_25))))
		{
			goto IL_009c;
		}
	}
	{
		// xNew = xMin;
		float L_26 = __this->get_xMin_10();
		V_2 = L_26;
	}

IL_009c:
	{
		// float yNew = transform.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_y_3();
		V_3 = L_29;
		// if(!yAxisLock)
		bool L_30 = __this->get_yAxisLock_12();
		if (L_30)
		{
			goto IL_0108;
		}
	}
	{
		// yNew = Mathf.Lerp(transform.position.y, yTarget, Time.deltaTime * followSpeed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		float L_33 = L_32.get_y_3();
		float L_34 = V_1;
		float L_35;
		L_35 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_36 = __this->get_followSpeed_5();
		float L_37;
		L_37 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_33, L_34, ((float)il2cpp_codegen_multiply((float)L_35, (float)L_36)), /*hidden argument*/NULL);
		V_3 = L_37;
		// if (yHasMax && yNew > yMax)
		bool L_38 = __this->get_yHasMax_13();
		if (!L_38)
		{
			goto IL_00f0;
		}
	}
	{
		float L_39 = V_3;
		float L_40 = __this->get_yMax_15();
		if ((!(((float)L_39) > ((float)L_40))))
		{
			goto IL_00f0;
		}
	}
	{
		// yNew = yMax;
		float L_41 = __this->get_yMax_15();
		V_3 = L_41;
	}

IL_00f0:
	{
		// if (yHasMin && yNew < yMin)
		bool L_42 = __this->get_yHasMin_14();
		if (!L_42)
		{
			goto IL_0108;
		}
	}
	{
		float L_43 = V_3;
		float L_44 = __this->get_yMin_16();
		if ((!(((float)L_43) < ((float)L_44))))
		{
			goto IL_0108;
		}
	}
	{
		// yNew = yMin;
		float L_45 = __this->get_yMin_16();
		V_3 = L_45;
	}

IL_0108:
	{
		// transform.position = new Vector3(xNew, yNew, transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_47 = V_2;
		float L_48 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
		float L_51 = L_50.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_52), L_47, L_48, L_51, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_46, L_52, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlatformerCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformerCamera__ctor_m667E02947EBC70A5021B3C62436DC348FB0A8C62 (PlatformerCamera_tB8F91B374DB1AAE63E3E675943E79136B644E5FC * __this, const RuntimeMethod* method)
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
// System.Void PlatformerPlayer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformerPlayer_Reset_mAF679C376EE8ABE4B055E66CDDD34AE714DC071D (PlatformerPlayer_t1EEA73D38617DB797E55BDE5F96AB99BA0F6E651 * __this, const RuntimeMethod* method)
{
	{
		// walkSpeed = 7.2f;
		__this->set_walkSpeed_4((7.19999981f));
		// dashMultiplier = 1.5f;
		__this->set_dashMultiplier_5((1.5f));
		// dashDuration = 0.25f;
		__this->set_dashDuration_6((0.25f));
		// dashCooldown = 0.5f;
		__this->set_dashCooldown_7((0.5f));
		// jumpForce = 13.5f;
		__this->set_jumpForce_8((13.5f));
		// }
		return;
	}
}
// System.Void PlatformerPlayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformerPlayer_Start_m9F4DCC4FEF04476201F0A07BD4C58D3A51ADAB80 (PlatformerPlayer_t1EEA73D38617DB797E55BDE5F96AB99BA0F6E651 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// body = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_body_9(L_0);
		// box = GetComponent<BoxCollider2D>();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_1;
		L_1 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		__this->set_box_10(L_1);
		// dashState = DashState.Ready;
		__this->set_dashState_11(0);
		// dashTimer = 0.0f;
		__this->set_dashTimer_12((0.0f));
		// doubleJumpAvailable = true;
		__this->set_doubleJumpAvailable_13((bool)1);
		// dashJumping = false;
		__this->set_dashJumping_14((bool)0);
		// sprite = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_sprite_15(L_2);
		// }
		return;
	}
}
// System.Void PlatformerPlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformerPlayer_Update_m3FD72E2672D814B6D7E60649F5F827D57469BA5B (PlatformerPlayer_t1EEA73D38617DB797E55BDE5F96AB99BA0F6E651 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DACDC65392B469F122731F31A54B00AEAC89CD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	float V_5 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t G_B16_0 = 0;
	{
		// if (dashJumping && Input.GetAxis("Horizontal") * body.velocity.x <= 0)
		bool L_0 = __this->get_dashJumping_14();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		float L_1;
		L_1 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2 = __this->get_body_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_0();
		if ((!(((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_4))) <= ((float)(0.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		// dashJumping = false;
		__this->set_dashJumping_14((bool)0);
	}

IL_0031:
	{
		// if (!(dashState == DashState.Dashing || dashState == DashState.DoubleDashing || dashJumping))
		int32_t L_5 = __this->get_dashState_11();
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_6 = __this->get_dashState_11();
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0084;
		}
	}
	{
		bool L_7 = __this->get_dashJumping_14();
		if (L_7)
		{
			goto IL_0084;
		}
	}
	{
		// float deltaX = Input.GetAxis("Horizontal") * walkSpeed;
		float L_8;
		L_8 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_9 = __this->get_walkSpeed_4();
		V_5 = ((float)il2cpp_codegen_multiply((float)L_8, (float)L_9));
		// Vector2 movement = new Vector2(deltaX, body.velocity.y);
		float L_10 = V_5;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_11 = __this->get_body_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_1();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_6), L_10, L_13, /*hidden argument*/NULL);
		// body.velocity = movement;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_14 = __this->get_body_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_6;
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// bool grounded = false;
		V_0 = (bool)0;
		// Vector3 max = box.bounds.max;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_16 = __this->get_box_10();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_17;
		L_17 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_16, /*hidden argument*/NULL);
		V_7 = L_17;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_7), /*hidden argument*/NULL);
		V_1 = L_18;
		// Vector3 min = box.bounds.min;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_19 = __this->get_box_10();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_20;
		L_20 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_19, /*hidden argument*/NULL);
		V_7 = L_20;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_7), /*hidden argument*/NULL);
		V_2 = L_21;
		// Vector2 corner1 = new Vector2(max.x - .1f, min.y - .1f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_1;
		float L_23 = L_22.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_2;
		float L_25 = L_24.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_26), ((float)il2cpp_codegen_subtract((float)L_23, (float)(0.100000001f))), ((float)il2cpp_codegen_subtract((float)L_25, (float)(0.100000001f))), /*hidden argument*/NULL);
		// Vector2 corner2 = new Vector2(min.x + .1f, min.y - .1f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_2;
		float L_28 = L_27.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_2;
		float L_30 = L_29.get_y_3();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), ((float)il2cpp_codegen_add((float)L_28, (float)(0.100000001f))), ((float)il2cpp_codegen_subtract((float)L_30, (float)(0.100000001f))), /*hidden argument*/NULL);
		// Collider2D hit = Physics2D.OverlapArea(corner1, corner2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_32;
		L_32 = Physics2D_OverlapArea_mF7D82A2855313771B31862016BCB12BFBD267DDD(L_26, L_31, /*hidden argument*/NULL);
		// if (hit != null && body.velocity.y == 0)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_32, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0131;
		}
	}
	{
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_34 = __this->get_body_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_y_1();
		if ((!(((float)L_36) == ((float)(0.0f)))))
		{
			goto IL_0131;
		}
	}
	{
		// grounded = true;
		V_0 = (bool)1;
		// if (!doubleJumpAvailable)
		bool L_37 = __this->get_doubleJumpAvailable_13();
		if (L_37)
		{
			goto IL_0122;
		}
	}
	{
		// doubleJumpAvailable = true;
		__this->set_doubleJumpAvailable_13((bool)1);
	}

IL_0122:
	{
		// if (dashJumping)
		bool L_38 = __this->get_dashJumping_14();
		if (!L_38)
		{
			goto IL_0131;
		}
	}
	{
		// dashJumping = false;
		__this->set_dashJumping_14((bool)0);
	}

IL_0131:
	{
		// bool canDash = grounded && Input.GetAxis("Horizontal") != 0;
		bool L_39 = V_0;
		if (!L_39)
		{
			goto IL_014a;
		}
	}
	{
		float L_40;
		L_40 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		G_B16_0 = ((((int32_t)((((float)L_40) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_014b;
	}

IL_014a:
	{
		G_B16_0 = 0;
	}

IL_014b:
	{
		V_4 = (bool)G_B16_0;
		// switch (dashState)
		int32_t L_41 = __this->get_dashState_11();
		V_8 = L_41;
		int32_t L_42 = V_8;
		switch (L_42)
		{
			case 0:
			{
				goto IL_0175;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_040b;
			}
			case 3:
			{
				goto IL_0346;
			}
			case 4:
			{
				goto IL_04f7;
			}
		}
	}
	{
		goto IL_054c;
	}

IL_0175:
	{
		// sprite.color = new Color(0, 1, 0, 1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_43 = __this->get_sprite_15();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_44;
		memset((&L_44), 0, sizeof(L_44));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_44), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_43, L_44, /*hidden argument*/NULL);
		// if (Input.GetKeyDown(KeyCode.LeftShift) && canDash)
		bool L_45;
		L_45 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)304), /*hidden argument*/NULL);
		bool L_46 = V_4;
		if (!((int32_t)((int32_t)L_45&(int32_t)L_46)))
		{
			goto IL_054c;
		}
	}
	{
		// body.velocity = new Vector2(Input.GetAxis("Horizontal") * walkSpeed * dashMultiplier, body.velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_47 = __this->get_body_9();
		float L_48;
		L_48 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_49 = __this->get_walkSpeed_4();
		float L_50 = __this->get_dashMultiplier_5();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_51 = __this->get_body_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52;
		L_52 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_51, /*hidden argument*/NULL);
		float L_53 = L_52.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_54), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_48, (float)L_49)), (float)L_50)), L_53, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_47, L_54, /*hidden argument*/NULL);
		// dashState = DashState.Dashing;
		__this->set_dashState_11(1);
		// break;
		goto IL_054c;
	}

IL_01ef:
	{
		// sprite.color = new Color(0, 1, 1, 1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_55 = __this->get_sprite_15();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_56;
		memset((&L_56), 0, sizeof(L_56));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_56), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_55, L_56, /*hidden argument*/NULL);
		// dashTimer += Time.deltaTime;
		float L_57 = __this->get_dashTimer_12();
		float L_58;
		L_58 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_dashTimer_12(((float)il2cpp_codegen_add((float)L_57, (float)L_58)));
		// body.velocity = new Vector2(Math.Sign(body.velocity.x) * walkSpeed * dashMultiplier, body.velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_59 = __this->get_body_9();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_60 = __this->get_body_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_61;
		L_61 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_60, /*hidden argument*/NULL);
		float L_62 = L_61.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_63;
		L_63 = Math_Sign_m607F7014224C0DD1D1F6D7B44DAB00A2A16CCC8F(L_62, /*hidden argument*/NULL);
		float L_64 = __this->get_walkSpeed_4();
		float L_65 = __this->get_dashMultiplier_5();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_66 = __this->get_body_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_67;
		L_67 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_66, /*hidden argument*/NULL);
		float L_68 = L_67.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_69), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_63)), (float)L_64)), (float)L_65)), L_68, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_59, L_69, /*hidden argument*/NULL);
		// if (dashTimer >= dashDuration || !grounded)
		float L_70 = __this->get_dashTimer_12();
		float L_71 = __this->get_dashDuration_6();
		if ((((float)L_70) >= ((float)L_71)))
		{
			goto IL_027a;
		}
	}
	{
		bool L_72 = V_0;
		if (L_72)
		{
			goto IL_02db;
		}
	}

IL_027a:
	{
		// dashTimer = dashCooldown;
		float L_73 = __this->get_dashCooldown_7();
		__this->set_dashTimer_12(L_73);
		// if (!grounded)
		bool L_74 = V_0;
		if (L_74)
		{
			goto IL_0292;
		}
	}
	{
		// dashJumping = true;
		__this->set_dashJumping_14((bool)1);
		// }
		goto IL_02cf;
	}

IL_0292:
	{
		// body.velocity = new Vector2(Math.Sign(body.velocity.x) * walkSpeed, body.velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_75 = __this->get_body_9();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_76 = __this->get_body_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_77;
		L_77 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_76, /*hidden argument*/NULL);
		float L_78 = L_77.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_79;
		L_79 = Math_Sign_m607F7014224C0DD1D1F6D7B44DAB00A2A16CCC8F(L_78, /*hidden argument*/NULL);
		float L_80 = __this->get_walkSpeed_4();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_81 = __this->get_body_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_82;
		L_82 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_81, /*hidden argument*/NULL);
		float L_83 = L_82.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_84;
		memset((&L_84), 0, sizeof(L_84));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_84), ((float)il2cpp_codegen_multiply((float)((float)((float)L_79)), (float)L_80)), L_83, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_75, L_84, /*hidden argument*/NULL);
	}

IL_02cf:
	{
		// dashState = DashState.DashCooldown;
		__this->set_dashState_11(3);
		// }
		goto IL_054c;
	}

IL_02db:
	{
		// else if (Input.GetKeyDown(KeyCode.LeftShift) && canDash)
		bool L_85;
		L_85 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)304), /*hidden argument*/NULL);
		bool L_86 = V_4;
		if (!((int32_t)((int32_t)L_85&(int32_t)L_86)))
		{
			goto IL_054c;
		}
	}
	{
		// dashTimer = 0;
		__this->set_dashTimer_12((0.0f));
		// body.velocity = new Vector2(Input.GetAxis("Horizontal") * walkSpeed * dashMultiplier, body.velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_87 = __this->get_body_9();
		float L_88;
		L_88 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_89 = __this->get_walkSpeed_4();
		float L_90 = __this->get_dashMultiplier_5();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_91 = __this->get_body_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_92;
		L_92 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_91, /*hidden argument*/NULL);
		float L_93 = L_92.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_94;
		memset((&L_94), 0, sizeof(L_94));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_94), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_88, (float)L_89)), (float)L_90)), L_93, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_87, L_94, /*hidden argument*/NULL);
		// Messenger.Broadcast(GameEvent.DOUBLE_ACTION);
		Messenger_Broadcast_mF26D1411194B524B3F93BD73C0F8EA4E52CE2539(_stringLiteral0DACDC65392B469F122731F31A54B00AEAC89CD3, /*hidden argument*/NULL);
		// dashState = DashState.DoubleDashing;
		__this->set_dashState_11(2);
		// break;
		goto IL_054c;
	}

IL_0346:
	{
		// sprite.color = new Color(0, 0, 1, 1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_95 = __this->get_sprite_15();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_96;
		memset((&L_96), 0, sizeof(L_96));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_96), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_95, L_96, /*hidden argument*/NULL);
		// dashTimer -= Time.deltaTime;
		float L_97 = __this->get_dashTimer_12();
		float L_98;
		L_98 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_dashTimer_12(((float)il2cpp_codegen_subtract((float)L_97, (float)L_98)));
		// if (dashTimer <= 0)
		float L_99 = __this->get_dashTimer_12();
		if ((!(((float)L_99) <= ((float)(0.0f)))))
		{
			goto IL_03a0;
		}
	}
	{
		// dashTimer = 0;
		__this->set_dashTimer_12((0.0f));
		// dashState = DashState.Ready;
		__this->set_dashState_11(0);
		// }
		goto IL_054c;
	}

IL_03a0:
	{
		// else if (Input.GetKeyDown(KeyCode.LeftShift) && canDash)
		bool L_100;
		L_100 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)304), /*hidden argument*/NULL);
		bool L_101 = V_4;
		if (!((int32_t)((int32_t)L_100&(int32_t)L_101)))
		{
			goto IL_054c;
		}
	}
	{
		// dashTimer = 0;
		__this->set_dashTimer_12((0.0f));
		// body.velocity = new Vector2(Input.GetAxis("Horizontal") * walkSpeed * dashMultiplier, body.velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_102 = __this->get_body_9();
		float L_103;
		L_103 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_104 = __this->get_walkSpeed_4();
		float L_105 = __this->get_dashMultiplier_5();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_106 = __this->get_body_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_107;
		L_107 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_106, /*hidden argument*/NULL);
		float L_108 = L_107.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_109), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_103, (float)L_104)), (float)L_105)), L_108, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_102, L_109, /*hidden argument*/NULL);
		// Messenger.Broadcast(GameEvent.DOUBLE_ACTION);
		Messenger_Broadcast_mF26D1411194B524B3F93BD73C0F8EA4E52CE2539(_stringLiteral0DACDC65392B469F122731F31A54B00AEAC89CD3, /*hidden argument*/NULL);
		// dashState = DashState.DoubleDashing;
		__this->set_dashState_11(2);
		// break;
		goto IL_054c;
	}

IL_040b:
	{
		// sprite.color = new Color(1, 0, 0, 1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_110 = __this->get_sprite_15();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_111;
		memset((&L_111), 0, sizeof(L_111));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_111), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_110, L_111, /*hidden argument*/NULL);
		// dashTimer += Time.deltaTime;
		float L_112 = __this->get_dashTimer_12();
		float L_113;
		L_113 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_dashTimer_12(((float)il2cpp_codegen_add((float)L_112, (float)L_113)));
		// body.velocity = new Vector2(Math.Sign(body.velocity.x) * walkSpeed * dashMultiplier, body.velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_114 = __this->get_body_9();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_115 = __this->get_body_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_116;
		L_116 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_115, /*hidden argument*/NULL);
		float L_117 = L_116.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_118;
		L_118 = Math_Sign_m607F7014224C0DD1D1F6D7B44DAB00A2A16CCC8F(L_117, /*hidden argument*/NULL);
		float L_119 = __this->get_walkSpeed_4();
		float L_120 = __this->get_dashMultiplier_5();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_121 = __this->get_body_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_122;
		L_122 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_121, /*hidden argument*/NULL);
		float L_123 = L_122.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_124;
		memset((&L_124), 0, sizeof(L_124));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_124), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_118)), (float)L_119)), (float)L_120)), L_123, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_114, L_124, /*hidden argument*/NULL);
		// if (dashTimer >= dashDuration || !grounded)
		float L_125 = __this->get_dashTimer_12();
		float L_126 = __this->get_dashDuration_6();
		if ((((float)L_125) >= ((float)L_126)))
		{
			goto IL_0499;
		}
	}
	{
		bool L_127 = V_0;
		if (L_127)
		{
			goto IL_054c;
		}
	}

IL_0499:
	{
		// dashTimer = dashCooldown;
		float L_128 = __this->get_dashCooldown_7();
		__this->set_dashTimer_12(L_128);
		// if (!grounded)
		bool L_129 = V_0;
		if (L_129)
		{
			goto IL_04b1;
		}
	}
	{
		// dashJumping = true;
		__this->set_dashJumping_14((bool)1);
		// }
		goto IL_04ee;
	}

IL_04b1:
	{
		// body.velocity = new Vector2(Math.Sign(body.velocity.x) * walkSpeed, body.velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_130 = __this->get_body_9();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_131 = __this->get_body_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_132;
		L_132 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_131, /*hidden argument*/NULL);
		float L_133 = L_132.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_134;
		L_134 = Math_Sign_m607F7014224C0DD1D1F6D7B44DAB00A2A16CCC8F(L_133, /*hidden argument*/NULL);
		float L_135 = __this->get_walkSpeed_4();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_136 = __this->get_body_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_137;
		L_137 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_136, /*hidden argument*/NULL);
		float L_138 = L_137.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_139;
		memset((&L_139), 0, sizeof(L_139));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_139), ((float)il2cpp_codegen_multiply((float)((float)((float)L_134)), (float)L_135)), L_138, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_130, L_139, /*hidden argument*/NULL);
	}

IL_04ee:
	{
		// dashState = DashState.DoubleDashCooldown;
		__this->set_dashState_11(4);
		// break;
		goto IL_054c;
	}

IL_04f7:
	{
		// sprite.color = new Color(1, 0, 1, 1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_140 = __this->get_sprite_15();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_141;
		memset((&L_141), 0, sizeof(L_141));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_141), (1.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_140, L_141, /*hidden argument*/NULL);
		// dashTimer -= Time.deltaTime;
		float L_142 = __this->get_dashTimer_12();
		float L_143;
		L_143 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_dashTimer_12(((float)il2cpp_codegen_subtract((float)L_142, (float)L_143)));
		// if (dashTimer <= 0)
		float L_144 = __this->get_dashTimer_12();
		if ((!(((float)L_144) <= ((float)(0.0f)))))
		{
			goto IL_054c;
		}
	}
	{
		// dashTimer = 0;
		__this->set_dashTimer_12((0.0f));
		// dashState = DashState.Ready;
		__this->set_dashState_11(0);
	}

IL_054c:
	{
		// if (Input.GetKeyDown(KeyCode.Space) && (grounded || doubleJumpAvailable))
		bool L_145;
		L_145 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_145)
		{
			goto IL_05b5;
		}
	}
	{
		bool L_146 = V_0;
		if (L_146)
		{
			goto IL_0560;
		}
	}
	{
		bool L_147 = __this->get_doubleJumpAvailable_13();
		if (!L_147)
		{
			goto IL_05b5;
		}
	}

IL_0560:
	{
		// body.velocity = new Vector2(body.velocity.x, 0);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_148 = __this->get_body_9();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_149 = __this->get_body_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_150;
		L_150 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_149, /*hidden argument*/NULL);
		float L_151 = L_150.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_152;
		memset((&L_152), 0, sizeof(L_152));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_152), L_151, (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_148, L_152, /*hidden argument*/NULL);
		// body.AddForce(Vector2.up * jumpForce, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_153 = __this->get_body_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_154;
		L_154 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_155 = __this->get_jumpForce_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_156;
		L_156 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_154, L_155, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_153, L_156, 1, /*hidden argument*/NULL);
		// if (!grounded)
		bool L_157 = V_0;
		if (L_157)
		{
			goto IL_05b5;
		}
	}
	{
		// doubleJumpAvailable = false;
		__this->set_doubleJumpAvailable_13((bool)0);
		// Messenger.Broadcast(GameEvent.DOUBLE_ACTION);
		Messenger_Broadcast_mF26D1411194B524B3F93BD73C0F8EA4E52CE2539(_stringLiteral0DACDC65392B469F122731F31A54B00AEAC89CD3, /*hidden argument*/NULL);
	}

IL_05b5:
	{
		// }
		return;
	}
}
// System.Void PlatformerPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformerPlayer__ctor_mFB8D8AF50B5D3CD8E80E7FC8BED9AEDFCCEFE1E8 (PlatformerPlayer_t1EEA73D38617DB797E55BDE5F96AB99BA0F6E651 * __this, const RuntimeMethod* method)
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
// System.Void PlayerHurtboxResponder::OnHurt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHurtboxResponder_OnHurt_m48B890C830410220B47FBDAEEA7B3F4F14690AB6 (PlayerHurtboxResponder_t35C306FF023C4865F0DD52F4E29629D27E8C84DE * __this, String_t* ___torchlightDamage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF289997F8E08C52B1ACA31CDB13BF770C7D4E9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Messenger.Broadcast(GameEvent.PLAYER_HIT);
		Messenger_Broadcast_mF26D1411194B524B3F93BD73C0F8EA4E52CE2539(_stringLiteralEBF289997F8E08C52B1ACA31CDB13BF770C7D4E9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerHurtboxResponder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHurtboxResponder__ctor_m7AAFAD9A466FBE7158829456FC6C732225C7D6EE (PlayerHurtboxResponder_t35C306FF023C4865F0DD52F4E29629D27E8C84DE * __this, const RuntimeMethod* method)
{
	{
		HurtboxResponder__ctor_m9139605CAC6138F661C4795EBD2AD58F3DDCD8A9(__this, /*hidden argument*/NULL);
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
// System.Void RepeatedBackground::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedBackground_Start_mC23265CFAC6B8E074B1B964D5CF624AE48987694 (RepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9_m875397C799581838F000735A907F2BABE5E39D8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// bgSprite = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_bgSprite_4(L_0);
		// cBgTrans = gameObject.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		__this->set_cBgTrans_5(L_2);
		// GameObject tempObject = GameObject.Instantiate(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_0 = L_4;
		// tempObject.transform.SetParent(gameObject.transform.parent.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_8, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_6, L_10, /*hidden argument*/NULL);
		// tempObject.GetComponent<RepeatedBackground>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_0;
		RepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9 * L_12;
		L_12 = GameObject_GetComponent_TisRepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9_m875397C799581838F000735A907F2BABE5E39D8E(L_11, /*hidden argument*/GameObject_GetComponent_TisRepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9_m875397C799581838F000735A907F2BABE5E39D8E_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_12, (bool)0, /*hidden argument*/NULL);
		// lBgTrans = tempObject.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		__this->set_lBgTrans_6(L_14);
		// lBgTrans.position = new Vector3(cBgTrans.position.x - bgSprite.size.x + 0.1f,
		//                                 cBgTrans.position.y,
		//                                 cBgTrans.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_lBgTrans_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = __this->get_cBgTrans_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_2();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_19 = __this->get_bgSprite_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = SpriteRenderer_get_size_mB0C8D3133ABDB73AA1BCC468F23DD9EE0A8C97C7(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = __this->get_cBgTrans_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = __this->get_cBgTrans_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_18, (float)L_21)), (float)(0.100000001f))), L_24, L_27, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_15, L_28, /*hidden argument*/NULL);
		// tempObject = GameObject.Instantiate(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_29, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_0 = L_30;
		// tempObject.transform.SetParent(gameObject.transform.parent.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
		L_33 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_33, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_34, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_35, /*hidden argument*/NULL);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_32, L_36, /*hidden argument*/NULL);
		// tempObject.GetComponent<RepeatedBackground>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = V_0;
		RepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9 * L_38;
		L_38 = GameObject_GetComponent_TisRepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9_m875397C799581838F000735A907F2BABE5E39D8E(L_37, /*hidden argument*/GameObject_GetComponent_TisRepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9_m875397C799581838F000735A907F2BABE5E39D8E_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_38, (bool)0, /*hidden argument*/NULL);
		// rBgTrans = tempObject.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		__this->set_rBgTrans_7(L_40);
		// rBgTrans.position = new Vector3(cBgTrans.position.x + bgSprite.size.x - 0.1f,
		//                                 cBgTrans.position.y,
		//                                 cBgTrans.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41 = __this->get_rBgTrans_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42 = __this->get_cBgTrans_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_42, /*hidden argument*/NULL);
		float L_44 = L_43.get_x_2();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_45 = __this->get_bgSprite_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46;
		L_46 = SpriteRenderer_get_size_mB0C8D3133ABDB73AA1BCC468F23DD9EE0A8C97C7(L_45, /*hidden argument*/NULL);
		float L_47 = L_46.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48 = __this->get_cBgTrans_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_48, /*hidden argument*/NULL);
		float L_50 = L_49.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51 = __this->get_cBgTrans_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_51, /*hidden argument*/NULL);
		float L_53 = L_52.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_54), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_44, (float)L_47)), (float)(0.100000001f))), L_50, L_53, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_41, L_54, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RepeatedBackground::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedBackground_Update_m6F9E7B81EEC5080E4FDB01C36B744CCECC161863 (RepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9 * __this, const RuntimeMethod* method)
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	{
		// if (Camera.main.transform.position.x < (cBgTrans.position.x - bgSprite.size.x/2))
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_cBgTrans_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_7 = __this->get_bgSprite_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = SpriteRenderer_get_size_mB0C8D3133ABDB73AA1BCC468F23DD9EE0A8C97C7(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_0();
		if ((!(((float)L_3) < ((float)((float)il2cpp_codegen_subtract((float)L_6, (float)((float)((float)L_9/(float)(2.0f)))))))))
		{
			goto IL_00ba;
		}
	}
	{
		// Transform tempBgTrans = rBgTrans;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_rBgTrans_7();
		V_0 = L_10;
		// rBgTrans = cBgTrans;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_cBgTrans_5();
		__this->set_rBgTrans_7(L_11);
		// cBgTrans = lBgTrans;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = __this->get_lBgTrans_6();
		__this->set_cBgTrans_5(L_12);
		// lBgTrans = tempBgTrans;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = V_0;
		__this->set_lBgTrans_6(L_13);
		// lBgTrans.position = new Vector3(cBgTrans.position.x - bgSprite.size.x + 0.1f,
		//                                 cBgTrans.position.y,
		//                                 cBgTrans.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = __this->get_lBgTrans_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_cBgTrans_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_x_2();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_18 = __this->get_bgSprite_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = SpriteRenderer_get_size_mB0C8D3133ABDB73AA1BCC468F23DD9EE0A8C97C7(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = __this->get_cBgTrans_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = __this->get_cBgTrans_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_27), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_17, (float)L_20)), (float)(0.100000001f))), L_23, L_26, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_14, L_27, /*hidden argument*/NULL);
	}

IL_00ba:
	{
		// if (Camera.main.transform.position.x > (cBgTrans.position.x + bgSprite.size.x/2))
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_28;
		L_28 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = __this->get_cBgTrans_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_x_2();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_35 = __this->get_bgSprite_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36;
		L_36 = SpriteRenderer_get_size_mB0C8D3133ABDB73AA1BCC468F23DD9EE0A8C97C7(L_35, /*hidden argument*/NULL);
		float L_37 = L_36.get_x_0();
		if ((!(((float)L_31) > ((float)((float)il2cpp_codegen_add((float)L_34, (float)((float)((float)L_37/(float)(2.0f)))))))))
		{
			goto IL_0174;
		}
	}
	{
		// Transform tempBgTrans = lBgTrans;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38 = __this->get_lBgTrans_6();
		V_1 = L_38;
		// lBgTrans = cBgTrans;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39 = __this->get_cBgTrans_5();
		__this->set_lBgTrans_6(L_39);
		// cBgTrans = rBgTrans;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40 = __this->get_rBgTrans_7();
		__this->set_cBgTrans_5(L_40);
		// rBgTrans = tempBgTrans;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41 = V_1;
		__this->set_rBgTrans_7(L_41);
		// rBgTrans.position = new Vector3(cBgTrans.position.x + bgSprite.size.x - 0.1f,
		//                                 cBgTrans.position.y,
		//                                 cBgTrans.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42 = __this->get_rBgTrans_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43 = __this->get_cBgTrans_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_43, /*hidden argument*/NULL);
		float L_45 = L_44.get_x_2();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_46 = __this->get_bgSprite_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		L_47 = SpriteRenderer_get_size_mB0C8D3133ABDB73AA1BCC468F23DD9EE0A8C97C7(L_46, /*hidden argument*/NULL);
		float L_48 = L_47.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49 = __this->get_cBgTrans_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
		float L_51 = L_50.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52 = __this->get_cBgTrans_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_52, /*hidden argument*/NULL);
		float L_54 = L_53.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_55), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_45, (float)L_48)), (float)(0.100000001f))), L_51, L_54, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_42, L_55, /*hidden argument*/NULL);
	}

IL_0174:
	{
		// }
		return;
	}
}
// System.Void RepeatedBackground::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedBackground__ctor_m7B4D3F1CE71062E905E796353CE6B0F937678295 (RepeatedBackground_t8967D819B3926A96AA3D172F35C82FCD13FBB8B9 * __this, const RuntimeMethod* method)
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
// System.Void TempHitboxController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempHitboxController_Update_mCB85B95C8F231811BD8654068A7518054F327866 (TempHitboxController_tBDC41251AB7820BE491BFA0BE445095F27B0FBE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C_mC977126AC3B839C501778CB3B07104C1AF5A8E47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1_m53D17A66F619925751E2E994AD65A0FEE434E86D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * V_0 = NULL;
	{
		// Hitbox hitbox = GetComponent<Hitbox>();
		Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * L_0;
		L_0 = Component_GetComponent_TisHitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1_m53D17A66F619925751E2E994AD65A0FEE434E86D(__this, /*hidden argument*/Component_GetComponent_TisHitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1_m53D17A66F619925751E2E994AD65A0FEE434E86D_RuntimeMethod_var);
		// HitboxResponder hitboxResponder = GetComponent<HitboxResponder>();
		HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * L_1;
		L_1 = Component_GetComponent_TisHitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C_mC977126AC3B839C501778CB3B07104C1AF5A8E47(__this, /*hidden argument*/Component_GetComponent_TisHitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C_mC977126AC3B839C501778CB3B07104C1AF5A8E47_RuntimeMethod_var);
		V_0 = L_1;
		// hitbox.SetResponder(hitboxResponder);
		Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * L_2 = L_0;
		HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * L_3 = V_0;
		Hitbox_SetResponder_mCA6D48931791E6E8245207EEC25F1DE9C019946F_inline(L_2, L_3, /*hidden argument*/NULL);
		// hitbox.active = true;
		L_2->set_active_4((bool)1);
		// }
		return;
	}
}
// System.Void TempHitboxController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempHitboxController__ctor_m5DADE02FD580C8F88F3A32A094F5CF62B0F6B661 (TempHitboxController_tBDC41251AB7820BE491BFA0BE445095F27B0FBE7 * __this, const RuntimeMethod* method)
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
// System.Single Torch::get_TorchlightMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Torch_get_TorchlightMax_m195E20CBEE6AF8A157104B83E2A1159608DEFC9A (Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * __this, const RuntimeMethod* method)
{
	{
		// get { return _torchlightMax; }
		float L_0 = __this->get__torchlightMax_4();
		return L_0;
	}
}
// System.Single Torch::get_Torchlight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Torch_get_Torchlight_m58BA5008E669DA276C009F9102D5ED5F4EE134EA (Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * __this, const RuntimeMethod* method)
{
	{
		// get { return _torchlight; }
		float L_0 = __this->get__torchlight_5();
		return L_0;
	}
}
// System.Void Torch::set_Torchlight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Torch_set_Torchlight_m60138B0BC22825EDBE58F993023B39617D2EABC6 (Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral405E8E2C2849E67B92C235BF5EE228BD845DA6FB);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float previousTorchlight = _torchlight;
		float L_0 = __this->get__torchlight_5();
		V_0 = L_0;
		// _torchlight = value;
		float L_1 = ___value0;
		__this->set__torchlight_5(L_1);
		// if (_torchlight > _torchlightMax)
		float L_2 = __this->get__torchlight_5();
		float L_3 = __this->get__torchlightMax_4();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_002a;
		}
	}
	{
		// _torchlight = _torchlightMax;
		float L_4 = __this->get__torchlightMax_4();
		__this->set__torchlight_5(L_4);
		// }
		goto IL_0042;
	}

IL_002a:
	{
		// else if (_torchlight < 0)
		float L_5 = __this->get__torchlight_5();
		if ((!(((float)L_5) < ((float)(0.0f)))))
		{
			goto IL_0042;
		}
	}
	{
		// _torchlight = 0;
		__this->set__torchlight_5((0.0f));
	}

IL_0042:
	{
		// if (_torchlight != previousTorchlight)
		float L_6 = __this->get__torchlight_5();
		float L_7 = V_0;
		if ((((float)L_6) == ((float)L_7)))
		{
			goto IL_0055;
		}
	}
	{
		// Messenger.Broadcast(GameEvent.TORCH_CHANGED);
		Messenger_Broadcast_mF26D1411194B524B3F93BD73C0F8EA4E52CE2539(_stringLiteral405E8E2C2849E67B92C235BF5EE228BD845DA6FB, /*hidden argument*/NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Torch::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Torch_Awake_mCEEABF5C9963881E4A39C6A186396B20DDB87F48 (Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * __this, const RuntimeMethod* method)
{
	{
		// _torchlight = _torchlightMax;
		float L_0 = __this->get__torchlightMax_4();
		__this->set__torchlight_5(L_0);
		// }
		return;
	}
}
// System.Void Torch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Torch__ctor_mB511FE4FEE037882E62905746C478CE2B46B001B (Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * __this, const RuntimeMethod* method)
{
	{
		// private float _torchlightMax = 100.0f;
		__this->set__torchlightMax_4((100.0f));
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
// System.Void TorchController::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchController_Reset_mC8CDB0AD48DD0708404FF635D71C050175F16216 (TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * __this, const RuntimeMethod* method)
{
	{
		// torchDuration = 180.0f;
		__this->set_torchDuration_4((180.0f));
		// doubleActionTimeLoss = 15.0f;
		__this->set_doubleActionTimeLoss_5((15.0f));
		// playerHitTimeLoss = 30.0f;
		__this->set_playerHitTimeLoss_6((30.0f));
		// playerFellTimeLoss = 60.0f;
		__this->set_playerFellTimeLoss_7((60.0f));
		// enemySlayedTimeGain = 30.0f;
		__this->set_enemySlayedTimeGain_8((30.0f));
		// staticTorch = false;
		__this->set_staticTorch_9((bool)0);
		// }
		return;
	}
}
// System.Void TorchController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchController_OnEnable_m76D5D474408E3E4D7964F1EF083DA9F41434B4BA (TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TorchController_OnDoubleAction_m2D22E96A68EDFCE0EEA6CE7C9368A5D45612F456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TorchController_OnEnemySlayed_m920B3863255CACEB4CEB295419F4A91609A2F626_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TorchController_OnPlayerFell_mCB9F3DEA155D183107C8DC0D9E7DF7E104D3A348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TorchController_OnPlayerHit_mF5BE654E1F09E16D1A4E69C8C9ACF7DD2A291887_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DACDC65392B469F122731F31A54B00AEAC89CD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75FB5064DCAC9D486827BE30A90E0388B3ECB368);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4A06AE7D3148AF9CD98AF0B0DC4B57105C8E90E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF289997F8E08C52B1ACA31CDB13BF770C7D4E9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Messenger.AddListener(GameEvent.DOUBLE_ACTION, OnDoubleAction);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)TorchController_OnDoubleAction_m2D22E96A68EDFCE0EEA6CE7C9368A5D45612F456_RuntimeMethod_var), /*hidden argument*/NULL);
		Messenger_AddListener_m5B2419C4C51FE1F0EFC6EBBE69F16DB37D155121(_stringLiteral0DACDC65392B469F122731F31A54B00AEAC89CD3, L_0, /*hidden argument*/NULL);
		// Messenger.AddListener(GameEvent.PLAYER_HIT, OnPlayerHit);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, __this, (intptr_t)((intptr_t)TorchController_OnPlayerHit_mF5BE654E1F09E16D1A4E69C8C9ACF7DD2A291887_RuntimeMethod_var), /*hidden argument*/NULL);
		Messenger_AddListener_m5B2419C4C51FE1F0EFC6EBBE69F16DB37D155121(_stringLiteralEBF289997F8E08C52B1ACA31CDB13BF770C7D4E9, L_1, /*hidden argument*/NULL);
		// Messenger.AddListener(GameEvent.PLAYER_FELL, OnPlayerFell);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_2, __this, (intptr_t)((intptr_t)TorchController_OnPlayerFell_mCB9F3DEA155D183107C8DC0D9E7DF7E104D3A348_RuntimeMethod_var), /*hidden argument*/NULL);
		Messenger_AddListener_m5B2419C4C51FE1F0EFC6EBBE69F16DB37D155121(_stringLiteralE4A06AE7D3148AF9CD98AF0B0DC4B57105C8E90E, L_2, /*hidden argument*/NULL);
		// Messenger.AddListener(GameEvent.ENEMY_SLAYED, OnEnemySlayed);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, __this, (intptr_t)((intptr_t)TorchController_OnEnemySlayed_m920B3863255CACEB4CEB295419F4A91609A2F626_RuntimeMethod_var), /*hidden argument*/NULL);
		Messenger_AddListener_m5B2419C4C51FE1F0EFC6EBBE69F16DB37D155121(_stringLiteral75FB5064DCAC9D486827BE30A90E0388B3ECB368, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TorchController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchController_OnDisable_mFCEFDBB4E718E00DF6ACC0E80E656A19E00C9BA5 (TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TorchController_OnDoubleAction_m2D22E96A68EDFCE0EEA6CE7C9368A5D45612F456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TorchController_OnEnemySlayed_m920B3863255CACEB4CEB295419F4A91609A2F626_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TorchController_OnPlayerFell_mCB9F3DEA155D183107C8DC0D9E7DF7E104D3A348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TorchController_OnPlayerHit_mF5BE654E1F09E16D1A4E69C8C9ACF7DD2A291887_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DACDC65392B469F122731F31A54B00AEAC89CD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75FB5064DCAC9D486827BE30A90E0388B3ECB368);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4A06AE7D3148AF9CD98AF0B0DC4B57105C8E90E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF289997F8E08C52B1ACA31CDB13BF770C7D4E9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Messenger.RemoveListener(GameEvent.DOUBLE_ACTION, OnDoubleAction);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)TorchController_OnDoubleAction_m2D22E96A68EDFCE0EEA6CE7C9368A5D45612F456_RuntimeMethod_var), /*hidden argument*/NULL);
		Messenger_RemoveListener_mBB491F54AE7A23F961E6D89DE099BD9FE906C959(_stringLiteral0DACDC65392B469F122731F31A54B00AEAC89CD3, L_0, /*hidden argument*/NULL);
		// Messenger.RemoveListener(GameEvent.PLAYER_HIT, OnPlayerHit);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, __this, (intptr_t)((intptr_t)TorchController_OnPlayerHit_mF5BE654E1F09E16D1A4E69C8C9ACF7DD2A291887_RuntimeMethod_var), /*hidden argument*/NULL);
		Messenger_RemoveListener_mBB491F54AE7A23F961E6D89DE099BD9FE906C959(_stringLiteralEBF289997F8E08C52B1ACA31CDB13BF770C7D4E9, L_1, /*hidden argument*/NULL);
		// Messenger.RemoveListener(GameEvent.PLAYER_FELL, OnPlayerFell);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_2, __this, (intptr_t)((intptr_t)TorchController_OnPlayerFell_mCB9F3DEA155D183107C8DC0D9E7DF7E104D3A348_RuntimeMethod_var), /*hidden argument*/NULL);
		Messenger_RemoveListener_mBB491F54AE7A23F961E6D89DE099BD9FE906C959(_stringLiteralE4A06AE7D3148AF9CD98AF0B0DC4B57105C8E90E, L_2, /*hidden argument*/NULL);
		// Messenger.RemoveListener(GameEvent.ENEMY_SLAYED, OnEnemySlayed);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, __this, (intptr_t)((intptr_t)TorchController_OnEnemySlayed_m920B3863255CACEB4CEB295419F4A91609A2F626_RuntimeMethod_var), /*hidden argument*/NULL);
		Messenger_RemoveListener_mBB491F54AE7A23F961E6D89DE099BD9FE906C959(_stringLiteral75FB5064DCAC9D486827BE30A90E0388B3ECB368, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TorchController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchController_Start_m3E37EE76B2DA5B8CF3F134D298DF4892D5756590 (TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTorch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED_mC6692ACCBC466C7E35803CD3CBCCB5FDC01B2A20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _torch = GetComponent<Torch>();
		Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * L_0;
		L_0 = Component_GetComponent_TisTorch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED_mC6692ACCBC466C7E35803CD3CBCCB5FDC01B2A20(__this, /*hidden argument*/Component_GetComponent_TisTorch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED_mC6692ACCBC466C7E35803CD3CBCCB5FDC01B2A20_RuntimeMethod_var);
		__this->set__torch_10(L_0);
		// _baseTorchLoss = _torch.TorchlightMax / torchDuration;
		Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * L_1 = __this->get__torch_10();
		float L_2;
		L_2 = Torch_get_TorchlightMax_m195E20CBEE6AF8A157104B83E2A1159608DEFC9A_inline(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_torchDuration_4();
		__this->set__baseTorchLoss_11(((float)((float)L_2/(float)L_3)));
		// _doubleActionTorchLoss = _baseTorchLoss * doubleActionTimeLoss;
		float L_4 = __this->get__baseTorchLoss_11();
		float L_5 = __this->get_doubleActionTimeLoss_5();
		__this->set__doubleActionTorchLoss_12(((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)));
		// _playerHitTorchLoss = _baseTorchLoss * playerHitTimeLoss;
		float L_6 = __this->get__baseTorchLoss_11();
		float L_7 = __this->get_playerHitTimeLoss_6();
		__this->set__playerHitTorchLoss_13(((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)));
		// _playerFellTorchLoss = _baseTorchLoss * playerFellTimeLoss;
		float L_8 = __this->get__baseTorchLoss_11();
		float L_9 = __this->get_playerFellTimeLoss_7();
		__this->set__playerFellTorchLoss_14(((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)));
		// _enemySlayedTorchGain = _baseTorchLoss * enemySlayedTimeGain;
		float L_10 = __this->get__baseTorchLoss_11();
		float L_11 = __this->get_enemySlayedTimeGain_8();
		__this->set__enemySlayedTorchGain_15(((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)));
		// _losingTorchlight = false;
		__this->set__losingTorchlight_16((bool)0);
		// if (!staticTorch)
		bool L_12 = __this->get_staticTorch_9();
		if (L_12)
		{
			goto IL_008c;
		}
	}
	{
		// StartCoroutine(PassiveLoseTorchlight());
		RuntimeObject* L_13;
		L_13 = TorchController_PassiveLoseTorchlight_m4DD71B7E45746334DF7E8744A717E17FCC973386(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_14;
		L_14 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_13, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void TorchController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchController_Update_m967F2857EE552DED35292AB960911148D2241B22 (TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * __this, const RuntimeMethod* method)
{
	{
		// if (!staticTorch && !_losingTorchlight)
		bool L_0 = __this->get_staticTorch_9();
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		bool L_1 = __this->get__losingTorchlight_16();
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		// StartCoroutine(PassiveLoseTorchlight());
		RuntimeObject* L_2;
		L_2 = TorchController_PassiveLoseTorchlight_m4DD71B7E45746334DF7E8744A717E17FCC973386(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TorchController::PassiveLoseTorchlight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TorchController_PassiveLoseTorchlight_m4DD71B7E45746334DF7E8744A717E17FCC973386 (TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPassiveLoseTorchlightU3Ed__18_t82633CDE44D9228F622F56D2433B5C92BD3A9BA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPassiveLoseTorchlightU3Ed__18_t82633CDE44D9228F622F56D2433B5C92BD3A9BA2 * L_0 = (U3CPassiveLoseTorchlightU3Ed__18_t82633CDE44D9228F622F56D2433B5C92BD3A9BA2 *)il2cpp_codegen_object_new(U3CPassiveLoseTorchlightU3Ed__18_t82633CDE44D9228F622F56D2433B5C92BD3A9BA2_il2cpp_TypeInfo_var);
		U3CPassiveLoseTorchlightU3Ed__18__ctor_mE5E86076972BAA01DFF7D5EB0B11D53894282E0D(L_0, 0, /*hidden argument*/NULL);
		U3CPassiveLoseTorchlightU3Ed__18_t82633CDE44D9228F622F56D2433B5C92BD3A9BA2 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void TorchController::OnDoubleAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchController_OnDoubleAction_m2D22E96A68EDFCE0EEA6CE7C9368A5D45612F456 (TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * __this, const RuntimeMethod* method)
{
	{
		// if (!staticTorch)
		bool L_0 = __this->get_staticTorch_9();
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// _torch.Torchlight -= _doubleActionTorchLoss;
		Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * L_1 = __this->get__torch_10();
		Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * L_2 = L_1;
		float L_3;
		L_3 = Torch_get_Torchlight_m58BA5008E669DA276C009F9102D5ED5F4EE134EA_inline(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get__doubleActionTorchLoss_12();
		Torch_set_Torchlight_m60138B0BC22825EDBE58F993023B39617D2EABC6(L_2, ((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)), /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void TorchController::OnPlayerHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchController_OnPlayerHit_mF5BE654E1F09E16D1A4E69C8C9ACF7DD2A291887 (TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * __this, const RuntimeMethod* method)
{
	{
		// if (!staticTorch)
		bool L_0 = __this->get_staticTorch_9();
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// _torch.Torchlight -= _playerHitTorchLoss;
		Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * L_1 = __this->get__torch_10();
		Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * L_2 = L_1;
		float L_3;
		L_3 = Torch_get_Torchlight_m58BA5008E669DA276C009F9102D5ED5F4EE134EA_inline(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get__playerHitTorchLoss_13();
		Torch_set_Torchlight_m60138B0BC22825EDBE58F993023B39617D2EABC6(L_2, ((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)), /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void TorchController::OnPlayerFell()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchController_OnPlayerFell_mCB9F3DEA155D183107C8DC0D9E7DF7E104D3A348 (TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * __this, const RuntimeMethod* method)
{
	{
		// if (!staticTorch)
		bool L_0 = __this->get_staticTorch_9();
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// _torch.Torchlight -= _playerFellTorchLoss;
		Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * L_1 = __this->get__torch_10();
		Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * L_2 = L_1;
		float L_3;
		L_3 = Torch_get_Torchlight_m58BA5008E669DA276C009F9102D5ED5F4EE134EA_inline(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get__playerFellTorchLoss_14();
		Torch_set_Torchlight_m60138B0BC22825EDBE58F993023B39617D2EABC6(L_2, ((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)), /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void TorchController::OnEnemySlayed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchController_OnEnemySlayed_m920B3863255CACEB4CEB295419F4A91609A2F626 (TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * __this, const RuntimeMethod* method)
{
	{
		// if (!staticTorch)
		bool L_0 = __this->get_staticTorch_9();
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// _torch.Torchlight += _enemySlayedTorchGain;
		Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * L_1 = __this->get__torch_10();
		Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * L_2 = L_1;
		float L_3;
		L_3 = Torch_get_Torchlight_m58BA5008E669DA276C009F9102D5ED5F4EE134EA_inline(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get__enemySlayedTorchGain_15();
		Torch_set_Torchlight_m60138B0BC22825EDBE58F993023B39617D2EABC6(L_2, ((float)il2cpp_codegen_add((float)L_3, (float)L_4)), /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void TorchController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchController__ctor_m8A55A1A7A3633BFDAF7186173EC4AF3B27A15EA7 (TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * __this, const RuntimeMethod* method)
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
// System.Void TorchFlicker::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchFlicker_Reset_m563BD88E81C044B7E14A81E34F69BF36A9DF5811 (TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * __this, const RuntimeMethod* method)
{
	{
		// maxIntensityIncrease = 0.05f;
		__this->set_maxIntensityIncrease_4((0.0500000007f));
		// maxIntensityDecrease = 0.05f;
		__this->set_maxIntensityDecrease_5((0.0500000007f));
		// maxGreenDecrease = 0.0625f;
		__this->set_maxGreenDecrease_7((0.0625f));
		// maxGreenIncrease = 0.0625f;
		__this->set_maxGreenIncrease_6((0.0625f));
		// minFlickerDuration = 0.1f;
		__this->set_minFlickerDuration_8((0.100000001f));
		// maxFlickerDuration = 0.2f;
		__this->set_maxFlickerDuration_9((0.200000003f));
		// flickering = true;
		__this->set_flickering_10((bool)1);
		// }
		return;
	}
}
// System.Void TorchFlicker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchFlicker_Start_mE88C6D55D0CF147411CA55773CDE4E884068AD6F (TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m2F3DE9B931439C147D47AF607AAEBD9B1CBCA0F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// _light = GetComponent<Light2D>();
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_0;
		L_0 = Component_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m2F3DE9B931439C147D47AF607AAEBD9B1CBCA0F1(__this, /*hidden argument*/Component_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m2F3DE9B931439C147D47AF607AAEBD9B1CBCA0F1_RuntimeMethod_var);
		__this->set__light_11(L_0);
		// _baseIntensity = _light.intensity;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_1 = __this->get__light_11();
		float L_2;
		L_2 = Light2D_get_intensity_m12C2A712E18652DEC877F79FCBA3C3D3AC2269D5_inline(L_1, /*hidden argument*/NULL);
		__this->set__baseIntensity_12(L_2);
		// _baseGreen = _light.color.g;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_3 = __this->get__light_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Light2D_get_color_m16AFB88E801DA3FDA4C42014D4498BA52AFBF3A1_inline(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_g_1();
		__this->set__baseGreen_13(L_5);
		// _flickering = false;
		__this->set__flickering_14((bool)0);
		// if (flickering)
		bool L_6 = __this->get_flickering_10();
		if (!L_6)
		{
			goto IL_00d5;
		}
	}
	{
		// float rand = Random.Range(0.0f, 1.0f);
		float L_7;
		L_7 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_7;
		// _lastIntensity = _baseIntensity;
		float L_8 = __this->get__baseIntensity_12();
		__this->set__lastIntensity_15(L_8);
		// _targetIntensity = (rand * (maxIntensityDecrease + maxIntensityIncrease)) + (_baseIntensity - maxIntensityDecrease);
		float L_9 = V_0;
		float L_10 = __this->get_maxIntensityDecrease_5();
		float L_11 = __this->get_maxIntensityIncrease_4();
		float L_12 = __this->get__baseIntensity_12();
		float L_13 = __this->get_maxIntensityDecrease_5();
		__this->set__targetIntensity_16(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_9, (float)((float)il2cpp_codegen_add((float)L_10, (float)L_11)))), (float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_13)))));
		// _lastGreen = _baseGreen;
		float L_14 = __this->get__baseGreen_13();
		__this->set__lastGreen_17(L_14);
		// _targetGreen = (rand * (maxGreenDecrease + maxGreenIncrease)) + (_baseGreen - maxGreenDecrease);
		float L_15 = V_0;
		float L_16 = __this->get_maxGreenDecrease_7();
		float L_17 = __this->get_maxGreenIncrease_6();
		float L_18 = __this->get__baseGreen_13();
		float L_19 = __this->get_maxGreenDecrease_7();
		__this->set__targetGreen_18(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_15, (float)((float)il2cpp_codegen_add((float)L_16, (float)L_17)))), (float)((float)il2cpp_codegen_subtract((float)L_18, (float)L_19)))));
		// _interpolator = 0.0f;
		__this->set__interpolator_20((0.0f));
		// _flickerDuration = Random.Range(minFlickerDuration, maxFlickerDuration);
		float L_20 = __this->get_minFlickerDuration_8();
		float L_21 = __this->get_maxFlickerDuration_9();
		float L_22;
		L_22 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_20, L_21, /*hidden argument*/NULL);
		__this->set__flickerDuration_19(L_22);
	}

IL_00d5:
	{
		// StartCoroutine(Flicker());
		RuntimeObject* L_23;
		L_23 = TorchFlicker_Flicker_mC14427DD552A599964C182A64BB367BDEC351A01(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_24;
		L_24 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TorchFlicker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchFlicker_Update_mCB83A0B395256AE25671CC3F2C243595565564BA (TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * __this, const RuntimeMethod* method)
{
	{
		// if (flickering && !_flickering)
		bool L_0 = __this->get_flickering_10();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		bool L_1 = __this->get__flickering_14();
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		// StartCoroutine(Flicker());
		RuntimeObject* L_2;
		L_2 = TorchFlicker_Flicker_mC14427DD552A599964C182A64BB367BDEC351A01(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TorchFlicker::Flicker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TorchFlicker_Flicker_mC14427DD552A599964C182A64BB367BDEC351A01 (TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFlickerU3Ed__20_tEBE444594C2546F6F6C399ADE6A8527FCCE7EB63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFlickerU3Ed__20_tEBE444594C2546F6F6C399ADE6A8527FCCE7EB63 * L_0 = (U3CFlickerU3Ed__20_tEBE444594C2546F6F6C399ADE6A8527FCCE7EB63 *)il2cpp_codegen_object_new(U3CFlickerU3Ed__20_tEBE444594C2546F6F6C399ADE6A8527FCCE7EB63_il2cpp_TypeInfo_var);
		U3CFlickerU3Ed__20__ctor_mE52FE71619DEC27C53AED3F43F519D7C87AF8DF8(L_0, 0, /*hidden argument*/NULL);
		U3CFlickerU3Ed__20_tEBE444594C2546F6F6C399ADE6A8527FCCE7EB63 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void TorchFlicker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchFlicker__ctor_mA95C66899541288F75D367084D43BFA3DB9D7643 (TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * __this, const RuntimeMethod* method)
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
// System.Void TorchRadius::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchRadius_Reset_m40986152C98BB80AE174FD6390A4F38640627FC0 (TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E * __this, const RuntimeMethod* method)
{
	{
		// innerMinRadius = 0.0f;
		__this->set_innerMinRadius_4((0.0f));
		// innerMaxRadius = 10.0f;
		__this->set_innerMaxRadius_5((10.0f));
		// outerMinRadius = 2.5f;
		__this->set_outerMinRadius_6((2.5f));
		// outerMaxRadius = 12.5f;
		__this->set_outerMaxRadius_7((12.5f));
		// radiusChangeDuration = 1.0f;
		__this->set_radiusChangeDuration_8((1.0f));
		// }
		return;
	}
}
// System.Void TorchRadius::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchRadius_OnEnable_m618C04A75C08DE25159B65FDFB9352D113402BBC (TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TorchRadius_OnTorchChanged_m60EE1A26A97AFB7380ACF214F253953CBF7353CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral405E8E2C2849E67B92C235BF5EE228BD845DA6FB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Messenger.AddListener(GameEvent.TORCH_CHANGED, OnTorchChanged);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)TorchRadius_OnTorchChanged_m60EE1A26A97AFB7380ACF214F253953CBF7353CC_RuntimeMethod_var), /*hidden argument*/NULL);
		Messenger_AddListener_m5B2419C4C51FE1F0EFC6EBBE69F16DB37D155121(_stringLiteral405E8E2C2849E67B92C235BF5EE228BD845DA6FB, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TorchRadius::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchRadius_OnDisable_m2ACF33E8E5AFDAC0EFE8F2C0BB419AC7800513F0 (TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TorchRadius_OnTorchChanged_m60EE1A26A97AFB7380ACF214F253953CBF7353CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral405E8E2C2849E67B92C235BF5EE228BD845DA6FB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Messenger.RemoveListener(GameEvent.TORCH_CHANGED, OnTorchChanged);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)TorchRadius_OnTorchChanged_m60EE1A26A97AFB7380ACF214F253953CBF7353CC_RuntimeMethod_var), /*hidden argument*/NULL);
		Messenger_RemoveListener_mBB491F54AE7A23F961E6D89DE099BD9FE906C959(_stringLiteral405E8E2C2849E67B92C235BF5EE228BD845DA6FB, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TorchRadius::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchRadius_Start_m72A39DAF109F689F0DC270B9961FAAE1CDB70545 (TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m2F3DE9B931439C147D47AF607AAEBD9B1CBCA0F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTorch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED_mC6692ACCBC466C7E35803CD3CBCCB5FDC01B2A20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _pointLight = GetComponent<Light2D>();
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_0;
		L_0 = Component_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m2F3DE9B931439C147D47AF607AAEBD9B1CBCA0F1(__this, /*hidden argument*/Component_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m2F3DE9B931439C147D47AF607AAEBD9B1CBCA0F1_RuntimeMethod_var);
		__this->set__pointLight_9(L_0);
		// _torch = GetComponent<Torch>();
		Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * L_1;
		L_1 = Component_GetComponent_TisTorch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED_mC6692ACCBC466C7E35803CD3CBCCB5FDC01B2A20(__this, /*hidden argument*/Component_GetComponent_TisTorch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED_mC6692ACCBC466C7E35803CD3CBCCB5FDC01B2A20_RuntimeMethod_var);
		__this->set__torch_10(L_1);
		// _lastInnerRadius = _pointLight.pointLightInnerRadius;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_2 = __this->get__pointLight_9();
		float L_3;
		L_3 = Light2D_get_pointLightInnerRadius_m87BFD475CEDA7396C437A12AB5A5AB734C86280D_inline(L_2, /*hidden argument*/NULL);
		__this->set__lastInnerRadius_11(L_3);
		// _targetInnerRadius = _pointLight.pointLightInnerRadius;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_4 = __this->get__pointLight_9();
		float L_5;
		L_5 = Light2D_get_pointLightInnerRadius_m87BFD475CEDA7396C437A12AB5A5AB734C86280D_inline(L_4, /*hidden argument*/NULL);
		__this->set__targetInnerRadius_12(L_5);
		// _lastOuterRadius = _pointLight.pointLightOuterRadius;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_6 = __this->get__pointLight_9();
		float L_7;
		L_7 = Light2D_get_pointLightOuterRadius_m126D4AAC3373C0B9AD272253668E6352440D839B_inline(L_6, /*hidden argument*/NULL);
		__this->set__lastOuterRadius_13(L_7);
		// _targetOuterRadius = _pointLight.pointLightOuterRadius;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_8 = __this->get__pointLight_9();
		float L_9;
		L_9 = Light2D_get_pointLightOuterRadius_m126D4AAC3373C0B9AD272253668E6352440D839B_inline(L_8, /*hidden argument*/NULL);
		__this->set__targetOuterRadius_14(L_9);
		// _interpolator = 0.0f;
		__this->set__interpolator_15((0.0f));
		// }
		return;
	}
}
// System.Void TorchRadius::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchRadius_Update_m92D0F713FE8AF6E52AF1FCC9913C10D62E18A349 (TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E * __this, const RuntimeMethod* method)
{
	{
		// if (_interpolator < 1.0f)
		float L_0 = __this->get__interpolator_15();
		if ((!(((float)L_0) < ((float)(1.0f)))))
		{
			goto IL_006b;
		}
	}
	{
		// _pointLight.pointLightInnerRadius = Mathf.Lerp(_lastInnerRadius, _targetInnerRadius, _interpolator);
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_1 = __this->get__pointLight_9();
		float L_2 = __this->get__lastInnerRadius_11();
		float L_3 = __this->get__targetInnerRadius_12();
		float L_4 = __this->get__interpolator_15();
		float L_5;
		L_5 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_2, L_3, L_4, /*hidden argument*/NULL);
		Light2D_set_pointLightInnerRadius_m4026527EF1B523F5613EB81293B43D4A60331733_inline(L_1, L_5, /*hidden argument*/NULL);
		// _pointLight.pointLightOuterRadius = Mathf.Lerp(_lastOuterRadius, _targetOuterRadius, _interpolator);
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_6 = __this->get__pointLight_9();
		float L_7 = __this->get__lastOuterRadius_13();
		float L_8 = __this->get__targetOuterRadius_14();
		float L_9 = __this->get__interpolator_15();
		float L_10;
		L_10 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_7, L_8, L_9, /*hidden argument*/NULL);
		Light2D_set_pointLightOuterRadius_m3E90D5FC31B6DF517CDFCD16FBE5284B51C85782_inline(L_6, L_10, /*hidden argument*/NULL);
		// _interpolator += Time.deltaTime / radiusChangeDuration;
		float L_11 = __this->get__interpolator_15();
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_13 = __this->get_radiusChangeDuration_8();
		__this->set__interpolator_15(((float)il2cpp_codegen_add((float)L_11, (float)((float)((float)L_12/(float)L_13)))));
		// }
		return;
	}

IL_006b:
	{
		// else if (_interpolator > 1.0f)
		float L_14 = __this->get__interpolator_15();
		if ((!(((float)L_14) > ((float)(1.0f)))))
		{
			goto IL_00c7;
		}
	}
	{
		// _pointLight.pointLightInnerRadius = _targetInnerRadius;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_15 = __this->get__pointLight_9();
		float L_16 = __this->get__targetInnerRadius_12();
		Light2D_set_pointLightInnerRadius_m4026527EF1B523F5613EB81293B43D4A60331733_inline(L_15, L_16, /*hidden argument*/NULL);
		// _pointLight.pointLightOuterRadius = _targetOuterRadius;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_17 = __this->get__pointLight_9();
		float L_18 = __this->get__targetOuterRadius_14();
		Light2D_set_pointLightOuterRadius_m3E90D5FC31B6DF517CDFCD16FBE5284B51C85782_inline(L_17, L_18, /*hidden argument*/NULL);
		// _lastInnerRadius = _pointLight.pointLightInnerRadius;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_19 = __this->get__pointLight_9();
		float L_20;
		L_20 = Light2D_get_pointLightInnerRadius_m87BFD475CEDA7396C437A12AB5A5AB734C86280D_inline(L_19, /*hidden argument*/NULL);
		__this->set__lastInnerRadius_11(L_20);
		// _lastOuterRadius = _pointLight.pointLightOuterRadius;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_21 = __this->get__pointLight_9();
		float L_22;
		L_22 = Light2D_get_pointLightOuterRadius_m126D4AAC3373C0B9AD272253668E6352440D839B_inline(L_21, /*hidden argument*/NULL);
		__this->set__lastOuterRadius_13(L_22);
		// _interpolator = 1.0f;
		__this->set__interpolator_15((1.0f));
	}

IL_00c7:
	{
		// }
		return;
	}
}
// System.Void TorchRadius::OnTorchChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchRadius_OnTorchChanged_m60EE1A26A97AFB7380ACF214F253953CBF7353CC (TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E * __this, const RuntimeMethod* method)
{
	{
		// _lastInnerRadius = _pointLight.pointLightInnerRadius;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_0 = __this->get__pointLight_9();
		float L_1;
		L_1 = Light2D_get_pointLightInnerRadius_m87BFD475CEDA7396C437A12AB5A5AB734C86280D_inline(L_0, /*hidden argument*/NULL);
		__this->set__lastInnerRadius_11(L_1);
		// _lastOuterRadius = _pointLight.pointLightOuterRadius;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_2 = __this->get__pointLight_9();
		float L_3;
		L_3 = Light2D_get_pointLightOuterRadius_m126D4AAC3373C0B9AD272253668E6352440D839B_inline(L_2, /*hidden argument*/NULL);
		__this->set__lastOuterRadius_13(L_3);
		// _targetInnerRadius = (innerMaxRadius - innerMinRadius) * _torch.Torchlight / _torch.TorchlightMax + innerMinRadius;
		float L_4 = __this->get_innerMaxRadius_5();
		float L_5 = __this->get_innerMinRadius_4();
		Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * L_6 = __this->get__torch_10();
		float L_7;
		L_7 = Torch_get_Torchlight_m58BA5008E669DA276C009F9102D5ED5F4EE134EA_inline(L_6, /*hidden argument*/NULL);
		Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * L_8 = __this->get__torch_10();
		float L_9;
		L_9 = Torch_get_TorchlightMax_m195E20CBEE6AF8A157104B83E2A1159608DEFC9A_inline(L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_innerMinRadius_4();
		__this->set__targetInnerRadius_12(((float)il2cpp_codegen_add((float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), (float)L_7))/(float)L_9)), (float)L_10)));
		// _targetOuterRadius = (outerMaxRadius - outerMinRadius) * _torch.Torchlight / _torch.TorchlightMax + outerMinRadius;
		float L_11 = __this->get_outerMaxRadius_7();
		float L_12 = __this->get_outerMinRadius_6();
		Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * L_13 = __this->get__torch_10();
		float L_14;
		L_14 = Torch_get_Torchlight_m58BA5008E669DA276C009F9102D5ED5F4EE134EA_inline(L_13, /*hidden argument*/NULL);
		Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * L_15 = __this->get__torch_10();
		float L_16;
		L_16 = Torch_get_TorchlightMax_m195E20CBEE6AF8A157104B83E2A1159608DEFC9A_inline(L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_outerMinRadius_6();
		__this->set__targetOuterRadius_14(((float)il2cpp_codegen_add((float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_11, (float)L_12)), (float)L_14))/(float)L_16)), (float)L_17)));
		// _interpolator = 0.0f;
		__this->set__interpolator_15((0.0f));
		// }
		return;
	}
}
// System.Void TorchRadius::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorchRadius__ctor_m6855DA936C33D744D758D9730C1158EEDD60BAFA (TorchRadius_t0AC07024F2C40E65E45CD42AE3A68328E2F5195E * __this, const RuntimeMethod* method)
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
// System.Void HitboxResponder/<AttackCoroutine>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackCoroutineU3Ed__6__ctor_mEB1F0C82F980C91FA555D5AD993F5EF5880EAB99 (U3CAttackCoroutineU3Ed__6_t61F905EC8D3888F875EFCD9A032BD26942B90B42 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void HitboxResponder/<AttackCoroutine>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackCoroutineU3Ed__6_System_IDisposable_Dispose_m9F880CD010D093B83CCBAD15D8BA79A6F96359AC (U3CAttackCoroutineU3Ed__6_t61F905EC8D3888F875EFCD9A032BD26942B90B42 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean HitboxResponder/<AttackCoroutine>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAttackCoroutineU3Ed__6_MoveNext_m763C4A8B2873DDB306A395A7A3B4849D12B71ADA (U3CAttackCoroutineU3Ed__6_t61F905EC8D3888F875EFCD9A032BD26942B90B42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _hitbox.SetResponder(this);
		HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * L_4 = V_1;
		Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * L_5 = L_4->get__hitbox_5();
		HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * L_6 = V_1;
		Hitbox_SetResponder_mCA6D48931791E6E8245207EEC25F1DE9C019946F_inline(L_5, L_6, /*hidden argument*/NULL);
		// _hitbox.active = true;
		HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * L_7 = V_1;
		Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * L_8 = L_7->get__hitbox_5();
		L_8->set_active_4((bool)1);
		// yield return new WaitForSeconds(attackDuration);
		HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * L_9 = V_1;
		float L_10 = L_9->get_attackDuration_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_11 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_11, L_10, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0050:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _hitbox.active = false;
		HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * L_12 = V_1;
		Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * L_13 = L_12->get__hitbox_5();
		L_13->set_active_4((bool)0);
		// _hitbox.SetResponder(null);
		HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * L_14 = V_1;
		Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * L_15 = L_14->get__hitbox_5();
		Hitbox_SetResponder_mCA6D48931791E6E8245207EEC25F1DE9C019946F_inline(L_15, (HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C *)NULL, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object HitboxResponder/<AttackCoroutine>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAttackCoroutineU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF247773658A310C62A659129C3F680949109DEC7 (U3CAttackCoroutineU3Ed__6_t61F905EC8D3888F875EFCD9A032BD26942B90B42 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void HitboxResponder/<AttackCoroutine>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackCoroutineU3Ed__6_System_Collections_IEnumerator_Reset_m454D96F1DEA467EBB7E7F7BF979787B5B4F39410 (U3CAttackCoroutineU3Ed__6_t61F905EC8D3888F875EFCD9A032BD26942B90B42 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAttackCoroutineU3Ed__6_System_Collections_IEnumerator_Reset_m454D96F1DEA467EBB7E7F7BF979787B5B4F39410_RuntimeMethod_var)));
	}
}
// System.Object HitboxResponder/<AttackCoroutine>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAttackCoroutineU3Ed__6_System_Collections_IEnumerator_get_Current_mEEBCBD4FE479239A6E954B4F6FE75FD29E941DB3 (U3CAttackCoroutineU3Ed__6_t61F905EC8D3888F875EFCD9A032BD26942B90B42 * __this, const RuntimeMethod* method)
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
// System.Void HurtboxResponder/<HurtCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHurtCoroutineU3Ed__5__ctor_m0A6DC7D644A63CC40CD0CF95FF572A295770B339 (U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void HurtboxResponder/<HurtCoroutine>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHurtCoroutineU3Ed__5_System_IDisposable_Dispose_mBA774E353ECC2AC0089554D63DD9883896798F09 (U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean HurtboxResponder/<HurtCoroutine>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CHurtCoroutineU3Ed__5_MoveNext_mDF86F3946E41C8DF66CC21FA0C67C61898681E34 (U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _hurtbox.active = false;
		HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * L_4 = V_1;
		Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * L_5 = L_4->get__hurtbox_5();
		L_5->set_active_4((bool)0);
		// OnHurt(parameter);
		HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * L_6 = V_1;
		String_t* L_7 = __this->get_parameter_3();
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void HurtboxResponder::OnHurt(System.String) */, L_6, L_7);
		// yield return new WaitForSeconds(immunityDuration);
		HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * L_8 = V_1;
		float L_9 = L_8->get_immunityDuration_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_10 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_10, L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0050:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _hurtbox.active = true;
		HurtboxResponder_t9E7D753265989CE26A06E10970AA9610AC64C3DC * L_11 = V_1;
		Hurtbox_t24F500594B4FF288922299618B8C2857D3F08012 * L_12 = L_11->get__hurtbox_5();
		L_12->set_active_4((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object HurtboxResponder/<HurtCoroutine>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CHurtCoroutineU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDFE788FC62C267370354C66C8FCE3571BF476417 (U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void HurtboxResponder/<HurtCoroutine>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHurtCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m1494364D1485C449385D5F75F57D36355659031F (U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHurtCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m1494364D1485C449385D5F75F57D36355659031F_RuntimeMethod_var)));
	}
}
// System.Object HurtboxResponder/<HurtCoroutine>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CHurtCoroutineU3Ed__5_System_Collections_IEnumerator_get_Current_m6456C7B25DA67B31A879A9A12D9E57EF4E208297 (U3CHurtCoroutineU3Ed__5_tCA2D7F73074C868BDF0C9D0F53EF3FE02997A00B * __this, const RuntimeMethod* method)
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
// System.Void MessengerInternal/BroadcastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BroadcastException__ctor_m55CF8853FC0BB1A42913C54893A98C62BEF2EDB7 (BroadcastException_tE2F16986CC332C7EDA6B86CC45B72590515B0A56 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(msg) {
		String_t* L_0 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
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
// System.Void MessengerInternal/ListenerException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListenerException__ctor_mFBD80DFB4AECEB09B400B4EC01912AF4B01E352F (ListenerException_tE73B553E8075BABF879CA3DFA2CDD4D6ED29A749 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(msg) {
		String_t* L_0 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TorchController/<PassiveLoseTorchlight>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPassiveLoseTorchlightU3Ed__18__ctor_mE5E86076972BAA01DFF7D5EB0B11D53894282E0D (U3CPassiveLoseTorchlightU3Ed__18_t82633CDE44D9228F622F56D2433B5C92BD3A9BA2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TorchController/<PassiveLoseTorchlight>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPassiveLoseTorchlightU3Ed__18_System_IDisposable_Dispose_m959D877AAF1EF77D6112AB0F7B4FA6A07FE9B3FB (U3CPassiveLoseTorchlightU3Ed__18_t82633CDE44D9228F622F56D2433B5C92BD3A9BA2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TorchController/<PassiveLoseTorchlight>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPassiveLoseTorchlightU3Ed__18_MoveNext_mAF5C043BF368DBE219F85F72828E1317A0390323 (U3CPassiveLoseTorchlightU3Ed__18_t82633CDE44D9228F622F56D2433B5C92BD3A9BA2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _losingTorchlight = true;
		TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * L_4 = V_1;
		L_4->set__losingTorchlight_16((bool)1);
		goto IL_005f;
	}

IL_0027:
	{
		// _torch.Torchlight -= _baseTorchLoss;
		TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * L_5 = V_1;
		Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * L_6 = L_5->get__torch_10();
		Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * L_7 = L_6;
		float L_8;
		L_8 = Torch_get_Torchlight_m58BA5008E669DA276C009F9102D5ED5F4EE134EA_inline(L_7, /*hidden argument*/NULL);
		TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * L_9 = V_1;
		float L_10 = L_9->get__baseTorchLoss_11();
		Torch_set_Torchlight_m60138B0BC22825EDBE58F993023B39617D2EABC6(L_7, ((float)il2cpp_codegen_subtract((float)L_8, (float)L_10)), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1.0f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_11 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_11, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0058:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_005f:
	{
		// while (!staticTorch)
		TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * L_12 = V_1;
		bool L_13 = L_12->get_staticTorch_9();
		if (!L_13)
		{
			goto IL_0027;
		}
	}
	{
		// _losingTorchlight = false;
		TorchController_t7434050B3F78758875007E515A07196A5A2E3879 * L_14 = V_1;
		L_14->set__losingTorchlight_16((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object TorchController/<PassiveLoseTorchlight>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPassiveLoseTorchlightU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBCBDF4D13535708E4FAA5517FCEABB544A4A7984 (U3CPassiveLoseTorchlightU3Ed__18_t82633CDE44D9228F622F56D2433B5C92BD3A9BA2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TorchController/<PassiveLoseTorchlight>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPassiveLoseTorchlightU3Ed__18_System_Collections_IEnumerator_Reset_m8276C0945E44C4914427B5C448D26DF8540B3B22 (U3CPassiveLoseTorchlightU3Ed__18_t82633CDE44D9228F622F56D2433B5C92BD3A9BA2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPassiveLoseTorchlightU3Ed__18_System_Collections_IEnumerator_Reset_m8276C0945E44C4914427B5C448D26DF8540B3B22_RuntimeMethod_var)));
	}
}
// System.Object TorchController/<PassiveLoseTorchlight>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPassiveLoseTorchlightU3Ed__18_System_Collections_IEnumerator_get_Current_m3F48193D190DBBD2B77CF72905171ADC30D3714C (U3CPassiveLoseTorchlightU3Ed__18_t82633CDE44D9228F622F56D2433B5C92BD3A9BA2 * __this, const RuntimeMethod* method)
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
// System.Void TorchFlicker/<Flicker>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlickerU3Ed__20__ctor_mE52FE71619DEC27C53AED3F43F519D7C87AF8DF8 (U3CFlickerU3Ed__20_tEBE444594C2546F6F6C399ADE6A8527FCCE7EB63 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TorchFlicker/<Flicker>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlickerU3Ed__20_System_IDisposable_Dispose_mB841AED45EAEB7DE03B3E0F080DE334DF671D628 (U3CFlickerU3Ed__20_tEBE444594C2546F6F6C399ADE6A8527FCCE7EB63 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TorchFlicker/<Flicker>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFlickerU3Ed__20_MoveNext_m381452E39340672479D6E60A7EBF1E16D5CF765E (U3CFlickerU3Ed__20_tEBE444594C2546F6F6C399ADE6A8527FCCE7EB63 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0170;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _flickering = true;
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_4 = V_1;
		L_4->set__flickering_14((bool)1);
		goto IL_0177;
	}

IL_002d:
	{
		// _light.intensity = Mathf.Lerp(_lastIntensity, _targetIntensity, _interpolator);
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_5 = V_1;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_6 = L_5->get__light_11();
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_7 = V_1;
		float L_8 = L_7->get__lastIntensity_15();
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_9 = V_1;
		float L_10 = L_9->get__targetIntensity_16();
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_11 = V_1;
		float L_12 = L_11->get__interpolator_20();
		float L_13;
		L_13 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_8, L_10, L_12, /*hidden argument*/NULL);
		Light2D_set_intensity_m906585AD3CD4319A37DE766A9412561D6E654224_inline(L_6, L_13, /*hidden argument*/NULL);
		// float newGreen = Mathf.Lerp(_lastGreen, _targetGreen, _interpolator);
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_14 = V_1;
		float L_15 = L_14->get__lastGreen_17();
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_16 = V_1;
		float L_17 = L_16->get__targetGreen_18();
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_18 = V_1;
		float L_19 = L_18->get__interpolator_20();
		float L_20;
		L_20 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_15, L_17, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		// _light.color = new Color(_light.color.r, newGreen, _light.color.b);
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_21 = V_1;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_22 = L_21->get__light_11();
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_23 = V_1;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_24 = L_23->get__light_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25;
		L_25 = Light2D_get_color_m16AFB88E801DA3FDA4C42014D4498BA52AFBF3A1_inline(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_r_0();
		float L_27 = V_2;
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_28 = V_1;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_29 = L_28->get__light_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30;
		L_30 = Light2D_get_color_m16AFB88E801DA3FDA4C42014D4498BA52AFBF3A1_inline(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_32), L_26, L_27, L_31, /*hidden argument*/NULL);
		Light2D_set_color_m728FF8483DEC5DB968BDE4B0A92518C5EBD2E2FC_inline(L_22, L_32, /*hidden argument*/NULL);
		// _interpolator +=  Time.deltaTime / _flickerDuration;
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_33 = V_1;
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_34 = V_1;
		float L_35 = L_34->get__interpolator_20();
		float L_36;
		L_36 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_37 = V_1;
		float L_38 = L_37->get__flickerDuration_19();
		L_33->set__interpolator_20(((float)il2cpp_codegen_add((float)L_35, (float)((float)((float)L_36/(float)L_38)))));
		// if (_interpolator > 1.0f)
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_39 = V_1;
		float L_40 = L_39->get__interpolator_20();
		if ((!(((float)L_40) > ((float)(1.0f)))))
		{
			goto IL_0160;
		}
	}
	{
		// float rand = Random.Range(0.0f, 1.0f);
		float L_41;
		L_41 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), (1.0f), /*hidden argument*/NULL);
		V_3 = L_41;
		// _lastIntensity = _light.intensity;
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_42 = V_1;
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_43 = V_1;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_44 = L_43->get__light_11();
		float L_45;
		L_45 = Light2D_get_intensity_m12C2A712E18652DEC877F79FCBA3C3D3AC2269D5_inline(L_44, /*hidden argument*/NULL);
		L_42->set__lastIntensity_15(L_45);
		// _targetIntensity = (rand * (maxIntensityDecrease + maxIntensityIncrease)) + (_baseIntensity - maxIntensityDecrease);
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_46 = V_1;
		float L_47 = V_3;
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_48 = V_1;
		float L_49 = L_48->get_maxIntensityDecrease_5();
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_50 = V_1;
		float L_51 = L_50->get_maxIntensityIncrease_4();
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_52 = V_1;
		float L_53 = L_52->get__baseIntensity_12();
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_54 = V_1;
		float L_55 = L_54->get_maxIntensityDecrease_5();
		L_46->set__targetIntensity_16(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_47, (float)((float)il2cpp_codegen_add((float)L_49, (float)L_51)))), (float)((float)il2cpp_codegen_subtract((float)L_53, (float)L_55)))));
		// _lastGreen = _light.color.g;
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_56 = V_1;
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_57 = V_1;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_58 = L_57->get__light_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_59;
		L_59 = Light2D_get_color_m16AFB88E801DA3FDA4C42014D4498BA52AFBF3A1_inline(L_58, /*hidden argument*/NULL);
		float L_60 = L_59.get_g_1();
		L_56->set__lastGreen_17(L_60);
		// _targetGreen = (rand * (maxGreenDecrease + maxGreenIncrease)) + (_baseGreen - maxGreenDecrease);
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_61 = V_1;
		float L_62 = V_3;
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_63 = V_1;
		float L_64 = L_63->get_maxGreenDecrease_7();
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_65 = V_1;
		float L_66 = L_65->get_maxGreenIncrease_6();
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_67 = V_1;
		float L_68 = L_67->get__baseGreen_13();
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_69 = V_1;
		float L_70 = L_69->get_maxGreenDecrease_7();
		L_61->set__targetGreen_18(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_62, (float)((float)il2cpp_codegen_add((float)L_64, (float)L_66)))), (float)((float)il2cpp_codegen_subtract((float)L_68, (float)L_70)))));
		// _interpolator = 0.0f;
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_71 = V_1;
		L_71->set__interpolator_20((0.0f));
		// _flickerDuration = Random.Range(minFlickerDuration, maxFlickerDuration);
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_72 = V_1;
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_73 = V_1;
		float L_74 = L_73->get_minFlickerDuration_8();
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_75 = V_1;
		float L_76 = L_75->get_maxFlickerDuration_9();
		float L_77;
		L_77 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_74, L_76, /*hidden argument*/NULL);
		L_72->set__flickerDuration_19(L_77);
	}

IL_0160:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0170:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0177:
	{
		// while (flickering)
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_78 = V_1;
		bool L_79 = L_78->get_flickering_10();
		if (L_79)
		{
			goto IL_002d;
		}
	}
	{
		// _flickering = false;
		TorchFlicker_t7481E654CBCF4954DFC3BB253A25B320575D85C9 * L_80 = V_1;
		L_80->set__flickering_14((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object TorchFlicker/<Flicker>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFlickerU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE9628C664C78AF53749A9FED82F8A1E3305866D4 (U3CFlickerU3Ed__20_tEBE444594C2546F6F6C399ADE6A8527FCCE7EB63 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TorchFlicker/<Flicker>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlickerU3Ed__20_System_Collections_IEnumerator_Reset_m88747022DED199159907EB85F6B909DBB156EB1D (U3CFlickerU3Ed__20_tEBE444594C2546F6F6C399ADE6A8527FCCE7EB63 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFlickerU3Ed__20_System_Collections_IEnumerator_Reset_m88747022DED199159907EB85F6B909DBB156EB1D_RuntimeMethod_var)));
	}
}
// System.Object TorchFlicker/<Flicker>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFlickerU3Ed__20_System_Collections_IEnumerator_get_Current_m05DB3DD0ACBDE6FD817FAABAD539A7EC0F2A79EE (U3CFlickerU3Ed__20_tEBE444594C2546F6F6C399ADE6A8527FCCE7EB63 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hitbox_SetResponder_mCA6D48931791E6E8245207EEC25F1DE9C019946F_inline (Hitbox_t883CC6CF6531085583ADCA23D48D332BFF0B5EB1 * __this, HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * ___hitboxResponder0, const RuntimeMethod* method)
{
	{
		// _hitboxResponder = hitboxResponder;
		HitboxResponder_tFBC520B3CFA21E8561B6F80C6885AC3C1E5FA05C * L_0 = ___hitboxResponder0;
		__this->set__hitboxResponder_11(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Torch_get_TorchlightMax_m195E20CBEE6AF8A157104B83E2A1159608DEFC9A_inline (Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * __this, const RuntimeMethod* method)
{
	{
		// get { return _torchlightMax; }
		float L_0 = __this->get__torchlightMax_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Torch_get_Torchlight_m58BA5008E669DA276C009F9102D5ED5F4EE134EA_inline (Torch_t92AB2229AA436C6C6A202DDFF5E110234B8BB3ED * __this, const RuntimeMethod* method)
{
	{
		// get { return _torchlight; }
		float L_0 = __this->get__torchlight_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Light2D_get_intensity_m12C2A712E18652DEC877F79FCBA3C3D3AC2269D5_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, const RuntimeMethod* method)
{
	{
		// public float intensity { get => m_Intensity; set => m_Intensity = value; }
		float L_0 = __this->get_m_Intensity_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Light2D_get_color_m16AFB88E801DA3FDA4C42014D4498BA52AFBF3A1_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, const RuntimeMethod* method)
{
	{
		// public Color color { get => m_Color; set => m_Color = value; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_m_Color_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Light2D_get_pointLightInnerRadius_m87BFD475CEDA7396C437A12AB5A5AB734C86280D_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, const RuntimeMethod* method)
{
	{
		// get => m_PointLightInnerRadius;
		float L_0 = __this->get_m_PointLightInnerRadius_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Light2D_get_pointLightOuterRadius_m126D4AAC3373C0B9AD272253668E6352440D839B_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, const RuntimeMethod* method)
{
	{
		// get => m_PointLightOuterRadius;
		float L_0 = __this->get_m_PointLightOuterRadius_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Light2D_set_pointLightInnerRadius_m4026527EF1B523F5613EB81293B43D4A60331733_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => m_PointLightInnerRadius = value;
		float L_0 = ___value0;
		__this->set_m_PointLightInnerRadius_23(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Light2D_set_pointLightOuterRadius_m3E90D5FC31B6DF517CDFCD16FBE5284B51C85782_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => m_PointLightOuterRadius = value;
		float L_0 = ___value0;
		__this->set_m_PointLightOuterRadius_24(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Light2D_set_intensity_m906585AD3CD4319A37DE766A9412561D6E654224_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float intensity { get => m_Intensity; set => m_Intensity = value; }
		float L_0 = ___value0;
		__this->set_m_Intensity_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Light2D_set_color_m728FF8483DEC5DB968BDE4B0A92518C5EBD2E2FC_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	{
		// public Color color { get => m_Color; set => m_Color = value; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___value0;
		__this->set_m_Color_7(L_0);
		return;
	}
}
