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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_t5472B645E25171C2E317D45F750D5FF28CC299CF;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>
struct Dictionary_2_t35F6DA04C7EFC816B6AD81C46497F41CA75EFB0F;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_tAFEDE3C9AA32099A79643638296C906CB91D1ED1;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.InputDevice>
struct IEqualityComparer_1_tC19DB848F703F8CA24DB77C30EBE9F5B58ABFDD4;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint>
struct IEqualityComparer_1_tF9B48F7120BFB759EE9353FBE3691618B52BFE91;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct KeyCollection_t566C065B2521EABF9CF07D2F81BA75B295ABDDD7;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.InputDevice,System.Object>
struct KeyCollection_t69255059E5B8EAE1A58D06178D7144DFB54D890B;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct KeyCollection_t95E65C50A8C48FB1D823F12AABED5C739471D39D;
// System.Collections.Generic.List`1<System.Globalization.CultureInfo>
struct List_1_tB93032867275F6C802C3659FC027FF6FB1372359;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.Ray>
struct List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct ValueCollection_t5FED2B14AA5D400A2EE8F9829DEA1D8EC9308CA9;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct ValueCollection_t402005AD43CDEE0693B9204BFA8489BA470A2141;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>[]
struct EntryU5BU5D_t1F0BEE301CCBA128695805C44A54D060A6A40F15;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>[]
struct EntryU5BU5D_tABAADCF1CFD8ABE04EA395A1D01AD03D12675182;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Microsoft.MixedReality.OpenXR.HandJoint[]
struct HandJointU5BU5D_t3D62EFCC2E65FEB2D8C0E2A2E6A688D8395010CA;
// Microsoft.MixedReality.OpenXR.HandJointLocation[]
struct HandJointLocationU5BU5D_t0C173328D87820623DD413A91272E04D79C80EA4;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[]
struct MixedRealityInputDataProviderConfigurationU5BU5D_tB03780835CE061BFE86575A4B949709E3397C852;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA;
// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother
struct EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8;
// Microsoft.MixedReality.Toolkit.Input.HPMotionControllerDefinition
struct HPMotionControllerDefinition_t575691F70AFFC019E7F3003F94054872691E1E14;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HPReverbG2Controller
struct HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8;
// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo
struct HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3;
// Microsoft.MixedReality.OpenXR.HandMeshTracker
struct HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146;
// Microsoft.MixedReality.OpenXR.HandTracker
struct HandTracker_t3327910B18D234F06B185BFA99047E30046D0957;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_t9E9FEB797F41C255D06A458C4F739A3E28C70CB5;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeSaccadeProvider
struct IMixedRealityEyeSaccadeProvider_tC885929281B6E822339D0E2FDFD116380438B12F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tD261D929DA8A0944B1219F9D547B6A242AFF7FA2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition
struct IMixedRealityInputSourceDefinition_tAF272541B2D0287D5BD0165BA893E8145252ADA0;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t81B35976BCAABB86634D8CAB6C5EBECE36D65D3A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer
struct IMixedRealityTeleportPointer_t512E8888A79D939AFE8F3809D15266C0B104B9E5;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand
struct MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftMotionController
struct MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile
struct MixedRealityControllerMappingProfile_t620A6DD34C353B5656CDEC6FB519F56C2D272712;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityEyeTrackingProfile
struct MixedRealityEyeTrackingProfile_tFFC54FF088BA636B718A9C98EA2DDD58D9303470;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile
struct MixedRealityGesturesProfile_t46311659BA1D182BFAF1C5F51DF1F56DBADF5D1C;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile
struct MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile
struct MixedRealityInputActionsProfile_tAA5B4FC5E707253DEEFDB8FBD4A7AECDB9D40272;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile
struct MixedRealityPointerProfile_tDC8F41622EFFC012D67C0016CDDC8B83F717FC2F;
// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile
struct MixedRealitySpeechCommandsProfile_t64625E495606E3C46112AAA0B69C6BB05490C348;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager
struct OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider
struct OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider
struct OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t8D2323983B85594F1037C020D3497109700B78DF;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityControllerDefinition
struct WindowsMixedRealityControllerDefinition_tDABBC06841C17A28BEA058F9E4F9E015459E80FD;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EyeTrackingUsages_t2565B3A66F3F5613150CF0C8E0634EE9C1461EB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HPMotionControllerDefinition_t575691F70AFFC019E7F3003F94054872691E1E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandJointLocationU5BU5D_t0C173328D87820623DD413A91272E04D79C80EA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandJointU5BU5D_t3D62EFCC2E65FEB2D8C0E2A2E6A688D8395010CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandTracker_t3327910B18D234F06B185BFA99047E30046D0957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityEyeGazeProvider_tA854FE94B4C220F8742E193148C51A8C30744627_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityEyeTrackingProfile_tFFC54FF088BA636B718A9C98EA2DDD58D9303470_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityControllerDefinition_tDABBC06841C17A28BEA058F9E4F9E015459E80FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A15B6B283C98B4F62B301AF4050963B9F35C000;
IL2CPP_EXTERN_C String_t* _stringLiteral52BA95C20C03ADFBDAF6B5C64272DD4A5C9D1FE0;
IL2CPP_EXTERN_C String_t* _stringLiteral612C3797426144C3C776DE00617309EF6A458B06;
IL2CPP_EXTERN_C String_t* _stringLiteral785C543519EB6E0B5983BDD07361B07451B939E6;
IL2CPP_EXTERN_C String_t* _stringLiteral80D1648E8FE647DFFDBAD4B89EC0DB2877CCB220;
IL2CPP_EXTERN_C String_t* _stringLiteral87645AC8450BCE81DEB59B1D37567DC26C625401;
IL2CPP_EXTERN_C String_t* _stringLiteral8F1A06D44AA46BA3D099F4AF2B341469C7B5F8DE;
IL2CPP_EXTERN_C String_t* _stringLiteralA99564B21D524436BCBDE413157922CDA544BA1B;
IL2CPP_EXTERN_C String_t* _stringLiteralB225114D2C3857BE9E73DA5D5C96CEF5957D1AC1;
IL2CPP_EXTERN_C String_t* _stringLiteralB3BA1DAEB772EC12A843CE87109432F8ACE760C0;
IL2CPP_EXTERN_C String_t* _stringLiteralB6B2CD42E6C5B2E5B6B1197528D0FEE4D0121EAB;
IL2CPP_EXTERN_C String_t* _stringLiteralBBABDBD5000A085E82E4D1F28B12069391E261AA;
IL2CPP_EXTERN_C String_t* _stringLiteralD51862061BEF6981AB4BE866F6A89BA4489E5DDC;
IL2CPP_EXTERN_C String_t* _stringLiteralE5FA4BC17D3659FB38B6BBA49E9EC577A2E3A449;
IL2CPP_EXTERN_C String_t* _stringLiteralF6EED814CF57561BB951430F9A6E99A9476E9744;
IL2CPP_EXTERN_C String_t* _stringLiteralFA21F085857C25FA6633EF256DA63F630C4ACF75;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC3392A0E9E9EB05973D3080F10A7393E03AF070E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC2DACDF139CA610FD19BB15681E7E796D27DE866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m9F5BA5B79A182AFDC2DF26CF50D5C1ABF31D5734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9CC878FE7F12DF8B4C25C62C80A68ECAC784E0C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEBA54D53782CDC8695416345EA43239C678D9804_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m7DC25952CD75AF4D9E51FA6736618F8ED7285C02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m8EA720D9048B289CB2F05B5E9122D2D30B0ED728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF484F413794D98215D2E5F187E5AE70CB0E01197_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCE4968FB9071D1324CDE7BF43D8715218BBA0D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB9245F902F320DD3F0552EE19729444EDD76FD85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF409E2E8BC93E91578B8150D2E683B99E19C4153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m127ABABD841E78B6B461C88B063C12AC082CB5AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m69B586C86E7A415FDE5732E94E28549EAAE35DD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXREyeGazeDataProvider_GazeSmoother_OnSaccadeX_mB620DC1DD964B1FE30D351240804E0DBA704314F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXREyeGazeDataProvider_GazeSmoother_OnSaccadeY_m21C98C97661DD6B18EC7F57E8097E8F177536DF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXREyeGazeDataProvider_GazeSmoother_OnSaccade_mC6433906297DD8807BDF16939B14C9060823683B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSDKDeviceManager_IsLoaderActive_TisOpenXRLoaderBase_t98E3D636562FBE383DF4829734DD3E6D1585CAED_m934DB800BFC1015113F202BEA09B003FD607ECE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HandJoint_t92CF9529350840E74720B9B155F0A0655D7C1972_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct HandJointU5BU5D_t3D62EFCC2E65FEB2D8C0E2A2E6A688D8395010CA;
struct HandJointLocationU5BU5D_t0C173328D87820623DD413A91272E04D79C80EA4;
struct InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5EA1DA7E3A53D57A71281D69493C863EBAE5A328 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1F0BEE301CCBA128695805C44A54D060A6A40F15* ___entries_1;
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
	KeyCollection_t566C065B2521EABF9CF07D2F81BA75B295ABDDD7 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t5FED2B14AA5D400A2EE8F9829DEA1D8EC9308CA9 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ___entries_1)); }
	inline EntryU5BU5D_t1F0BEE301CCBA128695805C44A54D060A6A40F15* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1F0BEE301CCBA128695805C44A54D060A6A40F15** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1F0BEE301CCBA128695805C44A54D060A6A40F15* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ___keys_7)); }
	inline KeyCollection_t566C065B2521EABF9CF07D2F81BA75B295ABDDD7 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t566C065B2521EABF9CF07D2F81BA75B295ABDDD7 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t566C065B2521EABF9CF07D2F81BA75B295ABDDD7 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ___values_8)); }
	inline ValueCollection_t5FED2B14AA5D400A2EE8F9829DEA1D8EC9308CA9 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t5FED2B14AA5D400A2EE8F9829DEA1D8EC9308CA9 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t5FED2B14AA5D400A2EE8F9829DEA1D8EC9308CA9 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tABAADCF1CFD8ABE04EA395A1D01AD03D12675182* ___entries_1;
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
	KeyCollection_t95E65C50A8C48FB1D823F12AABED5C739471D39D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t402005AD43CDEE0693B9204BFA8489BA470A2141 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ___entries_1)); }
	inline EntryU5BU5D_tABAADCF1CFD8ABE04EA395A1D01AD03D12675182* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tABAADCF1CFD8ABE04EA395A1D01AD03D12675182** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tABAADCF1CFD8ABE04EA395A1D01AD03D12675182* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ___keys_7)); }
	inline KeyCollection_t95E65C50A8C48FB1D823F12AABED5C739471D39D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t95E65C50A8C48FB1D823F12AABED5C739471D39D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t95E65C50A8C48FB1D823F12AABED5C739471D39D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ___values_8)); }
	inline ValueCollection_t402005AD43CDEE0693B9204BFA8489BA470A2141 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t402005AD43CDEE0693B9204BFA8489BA470A2141 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t402005AD43CDEE0693B9204BFA8489BA470A2141 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct KeyCollection_t566C065B2521EABF9CF07D2F81BA75B295ABDDD7  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t566C065B2521EABF9CF07D2F81BA75B295ABDDD7, ___dictionary_0)); }
	inline Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____items_1)); }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* get__items_1() const { return ____items_1; }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_StaticFields, ____emptyArray_5)); }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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

// UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;

public:
	inline static int32_t get_offset_of_m_DeviceId_1() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_DeviceId_1)); }
	inline uint64_t get_m_DeviceId_1() const { return ___m_DeviceId_1; }
	inline uint64_t* get_address_of_m_DeviceId_1() { return &___m_DeviceId_1; }
	inline void set_m_DeviceId_1(uint64_t value)
	{
		___m_DeviceId_1 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_2() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_Initialized_2)); }
	inline bool get_m_Initialized_2() const { return ___m_Initialized_2; }
	inline bool* get_address_of_m_Initialized_2() { return &___m_Initialized_2; }
	inline void set_m_Initialized_2(bool value)
	{
		___m_Initialized_2 = value;
	}
};

struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___s_InputSubsystemCache_0;

public:
	inline static int32_t get_offset_of_s_InputSubsystemCache_0() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields, ___s_InputSubsystemCache_0)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_s_InputSubsystemCache_0() const { return ___s_InputSubsystemCache_0; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_s_InputSubsystemCache_0() { return &___s_InputSubsystemCache_0; }
	inline void set_s_InputSubsystemCache_0(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___s_InputSubsystemCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystemCache_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
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


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
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


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6, ___dictionary_0)); }
	inline Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6, ___currentKey_3)); }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  get_currentKey_3() const { return ___currentKey_3; }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  value)
	{
		___currentKey_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.XR.InputDevice,System.Object>
struct Enumerator_tCF9AEEA909BF6824FB035022FD283DBA24CFE3D4 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_t35F6DA04C7EFC816B6AD81C46497F41CA75EFB0F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tCF9AEEA909BF6824FB035022FD283DBA24CFE3D4, ___dictionary_0)); }
	inline Dictionary_2_t35F6DA04C7EFC816B6AD81C46497F41CA75EFB0F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t35F6DA04C7EFC816B6AD81C46497F41CA75EFB0F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t35F6DA04C7EFC816B6AD81C46497F41CA75EFB0F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCF9AEEA909BF6824FB035022FD283DBA24CFE3D4, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCF9AEEA909BF6824FB035022FD283DBA24CFE3D4, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_tCF9AEEA909BF6824FB035022FD283DBA24CFE3D4, ___currentKey_3)); }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  get_currentKey_3() const { return ___currentKey_3; }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  value)
	{
		___currentKey_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_tFA382360CBEDF34BB549410E81A1B1D1FA76A459 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tFA382360CBEDF34BB549410E81A1B1D1FA76A459, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_isEnabled_5() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___isEnabled_5)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_5() const { return ___isEnabled_5; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_5() { return &___isEnabled_5; }
	inline void set_isEnabled_5(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_5 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_6() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___isMarkedDestroyed_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_6() const { return ___isMarkedDestroyed_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_6() { return &___isMarkedDestroyed_6; }
	inline void set_isMarkedDestroyed_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
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


// UnityEngine.XR.CommonUsages
struct CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A  : public RuntimeObject
{
public:

public:
};

struct CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___thumbTouch_58;

public:
	inline static int32_t get_offset_of_isTracked_0() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___isTracked_0)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_isTracked_0() const { return ___isTracked_0; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_isTracked_0() { return &___isTracked_0; }
	inline void set_isTracked_0(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___isTracked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___isTracked_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryButton_1() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primaryButton_1)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primaryButton_1() const { return ___primaryButton_1; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primaryButton_1() { return &___primaryButton_1; }
	inline void set_primaryButton_1(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primaryButton_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryButton_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryTouch_2() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primaryTouch_2)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primaryTouch_2() const { return ___primaryTouch_2; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primaryTouch_2() { return &___primaryTouch_2; }
	inline void set_primaryTouch_2(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primaryTouch_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryTouch_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryButton_3() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondaryButton_3)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondaryButton_3() const { return ___secondaryButton_3; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondaryButton_3() { return &___secondaryButton_3; }
	inline void set_secondaryButton_3(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondaryButton_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryButton_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryTouch_4() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondaryTouch_4)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondaryTouch_4() const { return ___secondaryTouch_4; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondaryTouch_4() { return &___secondaryTouch_4; }
	inline void set_secondaryTouch_4(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondaryTouch_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryTouch_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_gripButton_5() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___gripButton_5)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_gripButton_5() const { return ___gripButton_5; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_gripButton_5() { return &___gripButton_5; }
	inline void set_gripButton_5(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___gripButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___gripButton_5))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_triggerButton_6() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___triggerButton_6)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_triggerButton_6() const { return ___triggerButton_6; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_triggerButton_6() { return &___triggerButton_6; }
	inline void set_triggerButton_6(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___triggerButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___triggerButton_6))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_menuButton_7() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___menuButton_7)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_menuButton_7() const { return ___menuButton_7; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_menuButton_7() { return &___menuButton_7; }
	inline void set_menuButton_7(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___menuButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___menuButton_7))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisClick_8() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxisClick_8)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primary2DAxisClick_8() const { return ___primary2DAxisClick_8; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primary2DAxisClick_8() { return &___primary2DAxisClick_8; }
	inline void set_primary2DAxisClick_8(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primary2DAxisClick_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisClick_8))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisTouch_9() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxisTouch_9)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primary2DAxisTouch_9() const { return ___primary2DAxisTouch_9; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primary2DAxisTouch_9() { return &___primary2DAxisTouch_9; }
	inline void set_primary2DAxisTouch_9(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primary2DAxisTouch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisTouch_9))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisClick_10() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxisClick_10)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondary2DAxisClick_10() const { return ___secondary2DAxisClick_10; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondary2DAxisClick_10() { return &___secondary2DAxisClick_10; }
	inline void set_secondary2DAxisClick_10(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondary2DAxisClick_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisClick_10))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisTouch_11() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxisTouch_11)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondary2DAxisTouch_11() const { return ___secondary2DAxisTouch_11; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondary2DAxisTouch_11() { return &___secondary2DAxisTouch_11; }
	inline void set_secondary2DAxisTouch_11(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondary2DAxisTouch_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisTouch_11))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_userPresence_12() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___userPresence_12)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_userPresence_12() const { return ___userPresence_12; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_userPresence_12() { return &___userPresence_12; }
	inline void set_userPresence_12(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___userPresence_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___userPresence_12))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trackingState_13() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___trackingState_13)); }
	inline InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  get_trackingState_13() const { return ___trackingState_13; }
	inline InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 * get_address_of_trackingState_13() { return &___trackingState_13; }
	inline void set_trackingState_13(InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  value)
	{
		___trackingState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trackingState_13))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_batteryLevel_14() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___batteryLevel_14)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_batteryLevel_14() const { return ___batteryLevel_14; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_batteryLevel_14() { return &___batteryLevel_14; }
	inline void set_batteryLevel_14(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___batteryLevel_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___batteryLevel_14))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trigger_15() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___trigger_15)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_trigger_15() const { return ___trigger_15; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_trigger_15() { return &___trigger_15; }
	inline void set_trigger_15(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___trigger_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trigger_15))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_grip_16() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___grip_16)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_grip_16() const { return ___grip_16; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_grip_16() { return &___grip_16; }
	inline void set_grip_16(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___grip_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grip_16))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxis_17() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxis_17)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_primary2DAxis_17() const { return ___primary2DAxis_17; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_primary2DAxis_17() { return &___primary2DAxis_17; }
	inline void set_primary2DAxis_17(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___primary2DAxis_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxis_17))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxis_18() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxis_18)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_secondary2DAxis_18() const { return ___secondary2DAxis_18; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_secondary2DAxis_18() { return &___secondary2DAxis_18; }
	inline void set_secondary2DAxis_18(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___secondary2DAxis_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxis_18))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_devicePosition_19() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___devicePosition_19)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_devicePosition_19() const { return ___devicePosition_19; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_devicePosition_19() { return &___devicePosition_19; }
	inline void set_devicePosition_19(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___devicePosition_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___devicePosition_19))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyePosition_20() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyePosition_20)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyePosition_20() const { return ___leftEyePosition_20; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyePosition_20() { return &___leftEyePosition_20; }
	inline void set_leftEyePosition_20(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyePosition_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyePosition_20))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyePosition_21() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyePosition_21)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyePosition_21() const { return ___rightEyePosition_21; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyePosition_21() { return &___rightEyePosition_21; }
	inline void set_rightEyePosition_21(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyePosition_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyePosition_21))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyePosition_22() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyePosition_22)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyePosition_22() const { return ___centerEyePosition_22; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyePosition_22() { return &___centerEyePosition_22; }
	inline void set_centerEyePosition_22(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyePosition_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyePosition_22))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraPosition_23() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraPosition_23)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraPosition_23() const { return ___colorCameraPosition_23; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraPosition_23() { return &___colorCameraPosition_23; }
	inline void set_colorCameraPosition_23(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraPosition_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraPosition_23))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceVelocity_24() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceVelocity_24)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceVelocity_24() const { return ___deviceVelocity_24; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceVelocity_24() { return &___deviceVelocity_24; }
	inline void set_deviceVelocity_24(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceVelocity_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceVelocity_24))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularVelocity_25() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAngularVelocity_25)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAngularVelocity_25() const { return ___deviceAngularVelocity_25; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAngularVelocity_25() { return &___deviceAngularVelocity_25; }
	inline void set_deviceAngularVelocity_25(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAngularVelocity_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularVelocity_25))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeVelocity_26() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeVelocity_26)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeVelocity_26() const { return ___leftEyeVelocity_26; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeVelocity_26() { return &___leftEyeVelocity_26; }
	inline void set_leftEyeVelocity_26(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeVelocity_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeVelocity_26))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularVelocity_27() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAngularVelocity_27)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAngularVelocity_27() const { return ___leftEyeAngularVelocity_27; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAngularVelocity_27() { return &___leftEyeAngularVelocity_27; }
	inline void set_leftEyeAngularVelocity_27(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAngularVelocity_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularVelocity_27))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeVelocity_28() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeVelocity_28)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeVelocity_28() const { return ___rightEyeVelocity_28; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeVelocity_28() { return &___rightEyeVelocity_28; }
	inline void set_rightEyeVelocity_28(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeVelocity_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeVelocity_28))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularVelocity_29() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAngularVelocity_29)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAngularVelocity_29() const { return ___rightEyeAngularVelocity_29; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAngularVelocity_29() { return &___rightEyeAngularVelocity_29; }
	inline void set_rightEyeAngularVelocity_29(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAngularVelocity_29 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularVelocity_29))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeVelocity_30() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeVelocity_30)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeVelocity_30() const { return ___centerEyeVelocity_30; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeVelocity_30() { return &___centerEyeVelocity_30; }
	inline void set_centerEyeVelocity_30(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeVelocity_30 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeVelocity_30))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularVelocity_31() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAngularVelocity_31)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAngularVelocity_31() const { return ___centerEyeAngularVelocity_31; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAngularVelocity_31() { return &___centerEyeAngularVelocity_31; }
	inline void set_centerEyeAngularVelocity_31(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAngularVelocity_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularVelocity_31))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraVelocity_32() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraVelocity_32)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraVelocity_32() const { return ___colorCameraVelocity_32; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraVelocity_32() { return &___colorCameraVelocity_32; }
	inline void set_colorCameraVelocity_32(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraVelocity_32 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraVelocity_32))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularVelocity_33() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAngularVelocity_33)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAngularVelocity_33() const { return ___colorCameraAngularVelocity_33; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAngularVelocity_33() { return &___colorCameraAngularVelocity_33; }
	inline void set_colorCameraAngularVelocity_33(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAngularVelocity_33 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularVelocity_33))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAcceleration_34() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAcceleration_34)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAcceleration_34() const { return ___deviceAcceleration_34; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAcceleration_34() { return &___deviceAcceleration_34; }
	inline void set_deviceAcceleration_34(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAcceleration_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAcceleration_34))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularAcceleration_35() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAngularAcceleration_35)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAngularAcceleration_35() const { return ___deviceAngularAcceleration_35; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAngularAcceleration_35() { return &___deviceAngularAcceleration_35; }
	inline void set_deviceAngularAcceleration_35(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAngularAcceleration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularAcceleration_35))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAcceleration_36() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAcceleration_36)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAcceleration_36() const { return ___leftEyeAcceleration_36; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAcceleration_36() { return &___leftEyeAcceleration_36; }
	inline void set_leftEyeAcceleration_36(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAcceleration_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAcceleration_36))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularAcceleration_37() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAngularAcceleration_37)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAngularAcceleration_37() const { return ___leftEyeAngularAcceleration_37; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAngularAcceleration_37() { return &___leftEyeAngularAcceleration_37; }
	inline void set_leftEyeAngularAcceleration_37(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAngularAcceleration_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularAcceleration_37))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAcceleration_38() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAcceleration_38)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAcceleration_38() const { return ___rightEyeAcceleration_38; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAcceleration_38() { return &___rightEyeAcceleration_38; }
	inline void set_rightEyeAcceleration_38(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAcceleration_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAcceleration_38))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularAcceleration_39() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAngularAcceleration_39)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAngularAcceleration_39() const { return ___rightEyeAngularAcceleration_39; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAngularAcceleration_39() { return &___rightEyeAngularAcceleration_39; }
	inline void set_rightEyeAngularAcceleration_39(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAngularAcceleration_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularAcceleration_39))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAcceleration_40() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAcceleration_40)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAcceleration_40() const { return ___centerEyeAcceleration_40; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAcceleration_40() { return &___centerEyeAcceleration_40; }
	inline void set_centerEyeAcceleration_40(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAcceleration_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAcceleration_40))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularAcceleration_41() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAngularAcceleration_41)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAngularAcceleration_41() const { return ___centerEyeAngularAcceleration_41; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAngularAcceleration_41() { return &___centerEyeAngularAcceleration_41; }
	inline void set_centerEyeAngularAcceleration_41(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAngularAcceleration_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularAcceleration_41))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAcceleration_42() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAcceleration_42)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAcceleration_42() const { return ___colorCameraAcceleration_42; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAcceleration_42() { return &___colorCameraAcceleration_42; }
	inline void set_colorCameraAcceleration_42(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAcceleration_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAcceleration_42))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularAcceleration_43() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAngularAcceleration_43)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAngularAcceleration_43() const { return ___colorCameraAngularAcceleration_43; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAngularAcceleration_43() { return &___colorCameraAngularAcceleration_43; }
	inline void set_colorCameraAngularAcceleration_43(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAngularAcceleration_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularAcceleration_43))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceRotation_44() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceRotation_44)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_deviceRotation_44() const { return ___deviceRotation_44; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_deviceRotation_44() { return &___deviceRotation_44; }
	inline void set_deviceRotation_44(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___deviceRotation_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceRotation_44))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeRotation_45() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeRotation_45)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_leftEyeRotation_45() const { return ___leftEyeRotation_45; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_leftEyeRotation_45() { return &___leftEyeRotation_45; }
	inline void set_leftEyeRotation_45(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___leftEyeRotation_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeRotation_45))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeRotation_46() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeRotation_46)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_rightEyeRotation_46() const { return ___rightEyeRotation_46; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_rightEyeRotation_46() { return &___rightEyeRotation_46; }
	inline void set_rightEyeRotation_46(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___rightEyeRotation_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeRotation_46))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeRotation_47() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeRotation_47)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_centerEyeRotation_47() const { return ___centerEyeRotation_47; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_centerEyeRotation_47() { return &___centerEyeRotation_47; }
	inline void set_centerEyeRotation_47(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___centerEyeRotation_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeRotation_47))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraRotation_48() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraRotation_48)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_colorCameraRotation_48() const { return ___colorCameraRotation_48; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_colorCameraRotation_48() { return &___colorCameraRotation_48; }
	inline void set_colorCameraRotation_48(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___colorCameraRotation_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraRotation_48))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_handData_49() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___handData_49)); }
	inline InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  get_handData_49() const { return ___handData_49; }
	inline InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E * get_address_of_handData_49() { return &___handData_49; }
	inline void set_handData_49(InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  value)
	{
		___handData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___handData_49))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_eyesData_50() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___eyesData_50)); }
	inline InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  get_eyesData_50() const { return ___eyesData_50; }
	inline InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 * get_address_of_eyesData_50() { return &___eyesData_50; }
	inline void set_eyesData_50(InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  value)
	{
		___eyesData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___eyesData_50))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_dPad_51() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___dPad_51)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_dPad_51() const { return ___dPad_51; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_dPad_51() { return &___dPad_51; }
	inline void set_dPad_51(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___dPad_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___dPad_51))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexFinger_52() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___indexFinger_52)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_indexFinger_52() const { return ___indexFinger_52; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_indexFinger_52() { return &___indexFinger_52; }
	inline void set_indexFinger_52(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___indexFinger_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexFinger_52))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_middleFinger_53() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___middleFinger_53)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_middleFinger_53() const { return ___middleFinger_53; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_middleFinger_53() { return &___middleFinger_53; }
	inline void set_middleFinger_53(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___middleFinger_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___middleFinger_53))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_ringFinger_54() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___ringFinger_54)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_ringFinger_54() const { return ___ringFinger_54; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_ringFinger_54() { return &___ringFinger_54; }
	inline void set_ringFinger_54(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___ringFinger_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ringFinger_54))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_pinkyFinger_55() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___pinkyFinger_55)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_pinkyFinger_55() const { return ___pinkyFinger_55; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_pinkyFinger_55() { return &___pinkyFinger_55; }
	inline void set_pinkyFinger_55(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___pinkyFinger_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pinkyFinger_55))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbrest_56() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___thumbrest_56)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_thumbrest_56() const { return ___thumbrest_56; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_thumbrest_56() { return &___thumbrest_56; }
	inline void set_thumbrest_56(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___thumbrest_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbrest_56))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexTouch_57() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___indexTouch_57)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_indexTouch_57() const { return ___indexTouch_57; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_indexTouch_57() { return &___indexTouch_57; }
	inline void set_indexTouch_57(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___indexTouch_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexTouch_57))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbTouch_58() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___thumbTouch_58)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_thumbTouch_58() const { return ___thumbTouch_58; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_thumbTouch_58() { return &___thumbTouch_58; }
	inline void set_thumbTouch_58(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___thumbTouch_58 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbTouch_58))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages
struct CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA  : public RuntimeObject
{
public:

public:
};

struct CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::PointerPosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___PointerPosition_0;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::PointerRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___PointerRotation_1;

public:
	inline static int32_t get_offset_of_PointerPosition_0() { return static_cast<int32_t>(offsetof(CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_StaticFields, ___PointerPosition_0)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_PointerPosition_0() const { return ___PointerPosition_0; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_PointerPosition_0() { return &___PointerPosition_0; }
	inline void set_PointerPosition_0(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___PointerPosition_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PointerPosition_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_PointerRotation_1() { return static_cast<int32_t>(offsetof(CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_StaticFields, ___PointerRotation_1)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_PointerRotation_1() const { return ___PointerRotation_1; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_PointerRotation_1() { return &___PointerRotation_1; }
	inline void set_PointerRotation_1(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___PointerRotation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PointerRotation_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
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

// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct DeviceInputType_t67840BFEC29D6B484D0950C77E075C4C8C31A74D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_t67840BFEC29D6B484D0950C77E075C4C8C31A74D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.Features.Interactions.EyeTrackingUsages
struct EyeTrackingUsages_t2565B3A66F3F5613150CF0C8E0634EE9C1461EB9  : public RuntimeObject
{
public:

public:
};

struct EyeTrackingUsages_t2565B3A66F3F5613150CF0C8E0634EE9C1461EB9_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.OpenXR.Features.Interactions.EyeTrackingUsages::gazePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___gazePosition_0;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.OpenXR.Features.Interactions.EyeTrackingUsages::gazeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___gazeRotation_1;

public:
	inline static int32_t get_offset_of_gazePosition_0() { return static_cast<int32_t>(offsetof(EyeTrackingUsages_t2565B3A66F3F5613150CF0C8E0634EE9C1461EB9_StaticFields, ___gazePosition_0)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_gazePosition_0() const { return ___gazePosition_0; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_gazePosition_0() { return &___gazePosition_0; }
	inline void set_gazePosition_0(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___gazePosition_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___gazePosition_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_gazeRotation_1() { return static_cast<int32_t>(offsetof(EyeTrackingUsages_t2565B3A66F3F5613150CF0C8E0634EE9C1461EB9_StaticFields, ___gazeRotation_1)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_gazeRotation_1() const { return ___gazeRotation_1; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_gazeRotation_1() { return &___gazeRotation_1; }
	inline void set_gazeRotation_1(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___gazeRotation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___gazeRotation_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.OpenXR.FrameTime
struct FrameTime_t07711880DD1D128CE835CB93392344B86D67A1F8 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.FrameTime::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FrameTime_t07711880DD1D128CE835CB93392344B86D67A1F8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.HandJoint
struct HandJoint_t92CF9529350840E74720B9B155F0A0655D7C1972 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.HandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandJoint_t92CF9529350840E74720B9B155F0A0655D7C1972, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo
struct HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::vertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vertices_0;
	// System.Int32[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::triangles
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___triangles_1;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::normals
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___normals_2;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::uvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uvs_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_4;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_5;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3, ___vertices_0)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_vertices_0() const { return ___vertices_0; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_0), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_1() { return static_cast<int32_t>(offsetof(HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3, ___triangles_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_triangles_1() const { return ___triangles_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_triangles_1() { return &___triangles_1; }
	inline void set_triangles_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___triangles_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_1), (void*)value);
	}

	inline static int32_t get_offset_of_normals_2() { return static_cast<int32_t>(offsetof(HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3, ___normals_2)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_normals_2() const { return ___normals_2; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_normals_2() { return &___normals_2; }
	inline void set_normals_2(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___normals_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normals_2), (void*)value);
	}

	inline static int32_t get_offset_of_uvs_3() { return static_cast<int32_t>(offsetof(HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3, ___uvs_3)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_uvs_3() const { return ___uvs_3; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_uvs_3() { return &___uvs_3; }
	inline void set_uvs_3(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___uvs_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs_3), (void*)value);
	}

	inline static int32_t get_offset_of_position_4() { return static_cast<int32_t>(offsetof(HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3, ___position_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_4() const { return ___position_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_4() { return &___position_4; }
	inline void set_position_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_4 = value;
	}

	inline static int32_t get_offset_of_rotation_5() { return static_cast<int32_t>(offsetof(HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3, ___rotation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_5() const { return ___rotation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_5() { return &___rotation_5; }
	inline void set_rotation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_5 = value;
	}
};


// Microsoft.MixedReality.OpenXR.HandPoseType
struct HandPoseType_t28375642404E7F141F5D61B9120162639BBFC55D 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.HandPoseType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandPoseType_t28375642404E7F141F5D61B9120162639BBFC55D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.Handedness
struct Handedness_t653D1620789B56687767B78026DDB3A9BAF77892 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Handedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t653D1620789B56687767B78026DDB3A9BAF77892, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputDeviceCharacteristics
struct InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64 
{
public:
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSourceType
struct InputSourceType_t00BDB537631E33C705627B9B1BBDA0899B7AABA4 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_t00BDB537631E33C705627B9B1BBDA0899B7AABA4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
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


// Unity.Profiling.LowLevel.MarkerFlags
struct MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityCapability
struct MixedRealityCapability_t392A7711E9575DCD842EC55AE52637797BDAD1F7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCapability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixedRealityCapability_t392A7711E9575DCD842EC55AE52637797BDAD1F7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.OpenXR.NativeLibToken
struct NativeLibToken_t0B4A194D064257C7BAA4ECF633C15DB8C8957023 
{
public:
	// System.UInt64 Microsoft.MixedReality.OpenXR.NativeLibToken::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeLibToken_t0B4A194D064257C7BAA4ECF633C15DB8C8957023, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
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

// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
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


// Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes
struct SupportedApplicationModes_t8B7E82503E9D3D860E33D7E2BCD50DC56F492FF7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedApplicationModes_t8B7E82503E9D3D860E33D7E2BCD50DC56F492FF7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType
struct SupportedControllerType_t877DA6C54014EDDC1606A4D54E1872E52E50F02C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SupportedControllerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedControllerType_t877DA6C54014EDDC1606A4D54E1872E52E50F02C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct TrackedHandJoint_tFDADC49BA87BC6CBE390A69B0CC80925BAA37FD6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_tFDADC49BA87BC6CBE390A69B0CC80925BAA37FD6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct TrackingState_tF1797874F4C862EF716DCF9E952F427C7CEA9632 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tF1797874F4C862EF716DCF9E952F427C7CEA9632, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02  : public BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_8;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02, ___U3CRegistrarU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_8() const { return ___U3CRegistrarU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_8() { return &___U3CRegistrarU3Ek__BackingField_8; }
	inline void set_U3CRegistrarU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02, ___U3CServiceU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_9() const { return ___U3CServiceU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_9() { return &___U3CServiceU3Ek__BackingField_9; }
	inline void set_U3CServiceU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_t5472B645E25171C2E317D45F750D5FF28CC299CF  : public BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_8;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject * ___U3CServiceU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t5472B645E25171C2E317D45F750D5FF28CC299CF, ___U3CRegistrarU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_8() const { return ___U3CRegistrarU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_8() { return &___U3CRegistrarU3Ek__BackingField_8; }
	inline void set_U3CRegistrarU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t5472B645E25171C2E317D45F750D5FF28CC299CF, ___U3CServiceU3Ek__BackingField_9)); }
	inline RuntimeObject * get_U3CServiceU3Ek__BackingField_9() const { return ___U3CServiceU3Ek__BackingField_9; }
	inline RuntimeObject ** get_address_of_U3CServiceU3Ek__BackingField_9() { return &___U3CServiceU3Ek__BackingField_9; }
	inline void set_U3CServiceU3Ek__BackingField_9(RuntimeObject * value)
	{
		___U3CServiceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_9), (void*)value);
	}
};


// System.Nullable`1<UnityEngine.Ray>
struct Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963 
{
public:
	// T System.Nullable`1::value
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963, ___value_0)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_value_0() const { return ___value_0; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition Microsoft.MixedReality.Toolkit.Input.BaseController::<Definition>k__BackingField
	RuntimeObject* ___U3CDefinitionU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___U3CInteractionsU3Ek__BackingField_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<AngularVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CAngularVelocityU3Ek__BackingField_10;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<Velocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CVelocityU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CDefinitionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CDefinitionU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CDefinitionU3Ek__BackingField_0() const { return ___U3CDefinitionU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CDefinitionU3Ek__BackingField_0() { return &___U3CDefinitionU3Ek__BackingField_0; }
	inline void set_U3CDefinitionU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CDefinitionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefinitionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CEnabledU3Ek__BackingField_1)); }
	inline bool get_U3CEnabledU3Ek__BackingField_1() const { return ___U3CEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_1() { return &___U3CEnabledU3Ek__BackingField_1; }
	inline void set_U3CEnabledU3Ek__BackingField_1(bool value)
	{
		___U3CEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CTrackingStateU3Ek__BackingField_2)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_2() const { return ___U3CTrackingStateU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_2() { return &___U3CTrackingStateU3Ek__BackingField_2; }
	inline void set_U3CTrackingStateU3Ek__BackingField_2(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CControllerHandednessU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CControllerHandednessU3Ek__BackingField_3)); }
	inline uint8_t get_U3CControllerHandednessU3Ek__BackingField_3() const { return ___U3CControllerHandednessU3Ek__BackingField_3; }
	inline uint8_t* get_address_of_U3CControllerHandednessU3Ek__BackingField_3() { return &___U3CControllerHandednessU3Ek__BackingField_3; }
	inline void set_U3CControllerHandednessU3Ek__BackingField_3(uint8_t value)
	{
		___U3CControllerHandednessU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CInputSourceU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_4() const { return ___U3CInputSourceU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_4() { return &___U3CInputSourceU3Ek__BackingField_4; }
	inline void set_U3CInputSourceU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVisualizerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CVisualizerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CVisualizerU3Ek__BackingField_5() const { return ___U3CVisualizerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CVisualizerU3Ek__BackingField_5() { return &___U3CVisualizerU3Ek__BackingField_5; }
	inline void set_U3CVisualizerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CVisualizerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVisualizerU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CIsPositionAvailableU3Ek__BackingField_6)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_6() const { return ___U3CIsPositionAvailableU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_6() { return &___U3CIsPositionAvailableU3Ek__BackingField_6; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_6(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CIsPositionApproximateU3Ek__BackingField_7)); }
	inline bool get_U3CIsPositionApproximateU3Ek__BackingField_7() const { return ___U3CIsPositionApproximateU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsPositionApproximateU3Ek__BackingField_7() { return &___U3CIsPositionApproximateU3Ek__BackingField_7; }
	inline void set_U3CIsPositionApproximateU3Ek__BackingField_7(bool value)
	{
		___U3CIsPositionApproximateU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CIsRotationAvailableU3Ek__BackingField_8)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_8() const { return ___U3CIsRotationAvailableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_8() { return &___U3CIsRotationAvailableU3Ek__BackingField_8; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_8(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CInteractionsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CInteractionsU3Ek__BackingField_9)); }
	inline MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* get_U3CInteractionsU3Ek__BackingField_9() const { return ___U3CInteractionsU3Ek__BackingField_9; }
	inline MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7** get_address_of_U3CInteractionsU3Ek__BackingField_9() { return &___U3CInteractionsU3Ek__BackingField_9; }
	inline void set_U3CInteractionsU3Ek__BackingField_9(MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* value)
	{
		___U3CInteractionsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInteractionsU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAngularVelocityU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CAngularVelocityU3Ek__BackingField_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CAngularVelocityU3Ek__BackingField_10() const { return ___U3CAngularVelocityU3Ek__BackingField_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CAngularVelocityU3Ek__BackingField_10() { return &___U3CAngularVelocityU3Ek__BackingField_10; }
	inline void set_U3CAngularVelocityU3Ek__BackingField_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CAngularVelocityU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CVelocityU3Ek__BackingField_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CVelocityU3Ek__BackingField_11() const { return ___U3CVelocityU3Ek__BackingField_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CVelocityU3Ek__BackingField_11() { return &___U3CVelocityU3Ek__BackingField_11; }
	inline void set_U3CVelocityU3Ek__BackingField_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CVelocityU3Ek__BackingField_11 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputSourceDefinition
struct BaseInputSourceDefinition_t56EFAF9EA1A9D2C3C153727076A6A0E3CC373505  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseInputSourceDefinition::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseInputSourceDefinition_t56EFAF9EA1A9D2C3C153727076A6A0E3CC373505, ___U3CHandednessU3Ek__BackingField_0)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_0() const { return ___U3CHandednessU3Ek__BackingField_0; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_0() { return &___U3CHandednessU3Ek__BackingField_0; }
	inline void set_U3CHandednessU3Ek__BackingField_0(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.OpenXR.HandJointLocation
#pragma pack(push, tp, 8)
struct HandJointLocation_t6417344072BEE803CA511D7582144CE369974CC2 
{
public:
	// System.Byte Microsoft.MixedReality.OpenXR.HandJointLocation::isTracked
	uint8_t ___isTracked_0;
	// UnityEngine.Pose Microsoft.MixedReality.OpenXR.HandJointLocation::<Pose>k__BackingField
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3CPoseU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.OpenXR.HandJointLocation::<Radius>k__BackingField
	float ___U3CRadiusU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_isTracked_0() { return static_cast<int32_t>(offsetof(HandJointLocation_t6417344072BEE803CA511D7582144CE369974CC2, ___isTracked_0)); }
	inline uint8_t get_isTracked_0() const { return ___isTracked_0; }
	inline uint8_t* get_address_of_isTracked_0() { return &___isTracked_0; }
	inline void set_isTracked_0(uint8_t value)
	{
		___isTracked_0 = value;
	}

	inline static int32_t get_offset_of_U3CPoseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(HandJointLocation_t6417344072BEE803CA511D7582144CE369974CC2, ___U3CPoseU3Ek__BackingField_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_U3CPoseU3Ek__BackingField_1() const { return ___U3CPoseU3Ek__BackingField_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_U3CPoseU3Ek__BackingField_1() { return &___U3CPoseU3Ek__BackingField_1; }
	inline void set_U3CPoseU3Ek__BackingField_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___U3CPoseU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRadiusU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(HandJointLocation_t6417344072BEE803CA511D7582144CE369974CC2, ___U3CRadiusU3Ek__BackingField_2)); }
	inline float get_U3CRadiusU3Ek__BackingField_2() const { return ___U3CRadiusU3Ek__BackingField_2; }
	inline float* get_address_of_U3CRadiusU3Ek__BackingField_2() { return &___U3CRadiusU3Ek__BackingField_2; }
	inline void set_U3CRadiusU3Ek__BackingField_2(float value)
	{
		___U3CRadiusU3Ek__BackingField_2 = value;
	}
};
#pragma pack(pop, tp)


// Microsoft.MixedReality.OpenXR.HandMeshTracker
struct HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.OpenXR.NativeLibToken Microsoft.MixedReality.OpenXR.HandMeshTracker::m_token
	uint64_t ___m_token_2;
	// Microsoft.MixedReality.OpenXR.Handedness Microsoft.MixedReality.OpenXR.HandMeshTracker::m_handedness
	int32_t ___m_handedness_3;
	// UnityEngine.Vector3[] Microsoft.MixedReality.OpenXR.HandMeshTracker::m_handMeshVertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_handMeshVertices_4;
	// UnityEngine.Vector3[] Microsoft.MixedReality.OpenXR.HandMeshTracker::m_handMeshNormals
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_handMeshNormals_5;
	// System.Int32[] Microsoft.MixedReality.OpenXR.HandMeshTracker::m_handMeshIndices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m_handMeshIndices_6;

public:
	inline static int32_t get_offset_of_m_token_2() { return static_cast<int32_t>(offsetof(HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146, ___m_token_2)); }
	inline uint64_t get_m_token_2() const { return ___m_token_2; }
	inline uint64_t* get_address_of_m_token_2() { return &___m_token_2; }
	inline void set_m_token_2(uint64_t value)
	{
		___m_token_2 = value;
	}

	inline static int32_t get_offset_of_m_handedness_3() { return static_cast<int32_t>(offsetof(HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146, ___m_handedness_3)); }
	inline int32_t get_m_handedness_3() const { return ___m_handedness_3; }
	inline int32_t* get_address_of_m_handedness_3() { return &___m_handedness_3; }
	inline void set_m_handedness_3(int32_t value)
	{
		___m_handedness_3 = value;
	}

	inline static int32_t get_offset_of_m_handMeshVertices_4() { return static_cast<int32_t>(offsetof(HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146, ___m_handMeshVertices_4)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_handMeshVertices_4() const { return ___m_handMeshVertices_4; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_handMeshVertices_4() { return &___m_handMeshVertices_4; }
	inline void set_m_handMeshVertices_4(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_handMeshVertices_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_handMeshVertices_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_handMeshNormals_5() { return static_cast<int32_t>(offsetof(HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146, ___m_handMeshNormals_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_handMeshNormals_5() const { return ___m_handMeshNormals_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_handMeshNormals_5() { return &___m_handMeshNormals_5; }
	inline void set_m_handMeshNormals_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_handMeshNormals_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_handMeshNormals_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_handMeshIndices_6() { return static_cast<int32_t>(offsetof(HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146, ___m_handMeshIndices_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_m_handMeshIndices_6() const { return ___m_handMeshIndices_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_m_handMeshIndices_6() { return &___m_handMeshIndices_6; }
	inline void set_m_handMeshIndices_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___m_handMeshIndices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_handMeshIndices_6), (void*)value);
	}
};

struct HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146_StaticFields
{
public:
	// Microsoft.MixedReality.OpenXR.HandMeshTracker Microsoft.MixedReality.OpenXR.HandMeshTracker::<Left>k__BackingField
	HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * ___U3CLeftU3Ek__BackingField_0;
	// Microsoft.MixedReality.OpenXR.HandMeshTracker Microsoft.MixedReality.OpenXR.HandMeshTracker::<Right>k__BackingField
	HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * ___U3CRightU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLeftU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146_StaticFields, ___U3CLeftU3Ek__BackingField_0)); }
	inline HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * get_U3CLeftU3Ek__BackingField_0() const { return ___U3CLeftU3Ek__BackingField_0; }
	inline HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 ** get_address_of_U3CLeftU3Ek__BackingField_0() { return &___U3CLeftU3Ek__BackingField_0; }
	inline void set_U3CLeftU3Ek__BackingField_0(HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * value)
	{
		___U3CLeftU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLeftU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146_StaticFields, ___U3CRightU3Ek__BackingField_1)); }
	inline HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * get_U3CRightU3Ek__BackingField_1() const { return ___U3CRightU3Ek__BackingField_1; }
	inline HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 ** get_address_of_U3CRightU3Ek__BackingField_1() { return &___U3CRightU3Ek__BackingField_1; }
	inline void set_U3CRightU3Ek__BackingField_1(HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * value)
	{
		___U3CRightU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRightU3Ek__BackingField_1), (void*)value);
	}
};


// Microsoft.MixedReality.OpenXR.HandTracker
struct HandTracker_t3327910B18D234F06B185BFA99047E30046D0957  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.OpenXR.NativeLibToken Microsoft.MixedReality.OpenXR.HandTracker::token
	uint64_t ___token_2;
	// Microsoft.MixedReality.OpenXR.Handedness Microsoft.MixedReality.OpenXR.HandTracker::handedness
	int32_t ___handedness_3;

public:
	inline static int32_t get_offset_of_token_2() { return static_cast<int32_t>(offsetof(HandTracker_t3327910B18D234F06B185BFA99047E30046D0957, ___token_2)); }
	inline uint64_t get_token_2() const { return ___token_2; }
	inline uint64_t* get_address_of_token_2() { return &___token_2; }
	inline void set_token_2(uint64_t value)
	{
		___token_2 = value;
	}

	inline static int32_t get_offset_of_handedness_3() { return static_cast<int32_t>(offsetof(HandTracker_t3327910B18D234F06B185BFA99047E30046D0957, ___handedness_3)); }
	inline int32_t get_handedness_3() const { return ___handedness_3; }
	inline int32_t* get_address_of_handedness_3() { return &___handedness_3; }
	inline void set_handedness_3(int32_t value)
	{
		___handedness_3 = value;
	}
};

struct HandTracker_t3327910B18D234F06B185BFA99047E30046D0957_StaticFields
{
public:
	// Microsoft.MixedReality.OpenXR.HandTracker Microsoft.MixedReality.OpenXR.HandTracker::<Left>k__BackingField
	HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * ___U3CLeftU3Ek__BackingField_0;
	// Microsoft.MixedReality.OpenXR.HandTracker Microsoft.MixedReality.OpenXR.HandTracker::<Right>k__BackingField
	HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * ___U3CRightU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLeftU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(HandTracker_t3327910B18D234F06B185BFA99047E30046D0957_StaticFields, ___U3CLeftU3Ek__BackingField_0)); }
	inline HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * get_U3CLeftU3Ek__BackingField_0() const { return ___U3CLeftU3Ek__BackingField_0; }
	inline HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 ** get_address_of_U3CLeftU3Ek__BackingField_0() { return &___U3CLeftU3Ek__BackingField_0; }
	inline void set_U3CLeftU3Ek__BackingField_0(HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * value)
	{
		___U3CLeftU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLeftU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(HandTracker_t3327910B18D234F06B185BFA99047E30046D0957_StaticFields, ___U3CRightU3Ek__BackingField_1)); }
	inline HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * get_U3CRightU3Ek__BackingField_1() const { return ___U3CRightU3Ek__BackingField_1; }
	inline HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 ** get_address_of_U3CRightU3Ek__BackingField_1() { return &___U3CRightU3Ek__BackingField_1; }
	inline void set_U3CRightU3Ek__BackingField_1(HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * value)
	{
		___U3CRightU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRightU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
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

// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider
struct OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.OpenXR.HandMeshTracker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::handMeshTracker
	HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * ___handMeshTracker_2;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::handedness
	uint8_t ___handedness_3;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::neutralPoseMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___neutralPoseMesh_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::vertices
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___vertices_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::normals
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___normals_7;
	// System.Collections.Generic.List`1<System.Int32> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::triangles
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___triangles_8;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::handMeshUVs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___handMeshUVs_9;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::inputSource
	RuntimeObject* ___inputSource_10;

public:
	inline static int32_t get_offset_of_handMeshTracker_2() { return static_cast<int32_t>(offsetof(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171, ___handMeshTracker_2)); }
	inline HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * get_handMeshTracker_2() const { return ___handMeshTracker_2; }
	inline HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 ** get_address_of_handMeshTracker_2() { return &___handMeshTracker_2; }
	inline void set_handMeshTracker_2(HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * value)
	{
		___handMeshTracker_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTracker_2), (void*)value);
	}

	inline static int32_t get_offset_of_handedness_3() { return static_cast<int32_t>(offsetof(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171, ___handedness_3)); }
	inline uint8_t get_handedness_3() const { return ___handedness_3; }
	inline uint8_t* get_address_of_handedness_3() { return &___handedness_3; }
	inline void set_handedness_3(uint8_t value)
	{
		___handedness_3 = value;
	}

	inline static int32_t get_offset_of_mesh_4() { return static_cast<int32_t>(offsetof(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171, ___mesh_4)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mesh_4() const { return ___mesh_4; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mesh_4() { return &___mesh_4; }
	inline void set_mesh_4(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_neutralPoseMesh_5() { return static_cast<int32_t>(offsetof(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171, ___neutralPoseMesh_5)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_neutralPoseMesh_5() const { return ___neutralPoseMesh_5; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_neutralPoseMesh_5() { return &___neutralPoseMesh_5; }
	inline void set_neutralPoseMesh_5(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___neutralPoseMesh_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neutralPoseMesh_5), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_6() { return static_cast<int32_t>(offsetof(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171, ___vertices_6)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_vertices_6() const { return ___vertices_6; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_vertices_6() { return &___vertices_6; }
	inline void set_vertices_6(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___vertices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_6), (void*)value);
	}

	inline static int32_t get_offset_of_normals_7() { return static_cast<int32_t>(offsetof(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171, ___normals_7)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_normals_7() const { return ___normals_7; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_normals_7() { return &___normals_7; }
	inline void set_normals_7(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___normals_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normals_7), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_8() { return static_cast<int32_t>(offsetof(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171, ___triangles_8)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_triangles_8() const { return ___triangles_8; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_triangles_8() { return &___triangles_8; }
	inline void set_triangles_8(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___triangles_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_8), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshUVs_9() { return static_cast<int32_t>(offsetof(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171, ___handMeshUVs_9)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_handMeshUVs_9() const { return ___handMeshUVs_9; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_handMeshUVs_9() { return &___handMeshUVs_9; }
	inline void set_handMeshUVs_9(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___handMeshUVs_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshUVs_9), (void*)value);
	}

	inline static int32_t get_offset_of_inputSource_10() { return static_cast<int32_t>(offsetof(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171, ___inputSource_10)); }
	inline RuntimeObject* get_inputSource_10() const { return ___inputSource_10; }
	inline RuntimeObject** get_address_of_inputSource_10() { return &___inputSource_10; }
	inline void set_inputSource_10(RuntimeObject* value)
	{
		___inputSource_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_10), (void*)value);
	}
};

struct OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::<Left>k__BackingField
	OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * ___U3CLeftU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::<Right>k__BackingField
	OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * ___U3CRightU3Ek__BackingField_1;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::UpdateHandMeshPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHandMeshPerfMarker_11;

public:
	inline static int32_t get_offset_of_U3CLeftU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_StaticFields, ___U3CLeftU3Ek__BackingField_0)); }
	inline OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * get_U3CLeftU3Ek__BackingField_0() const { return ___U3CLeftU3Ek__BackingField_0; }
	inline OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 ** get_address_of_U3CLeftU3Ek__BackingField_0() { return &___U3CLeftU3Ek__BackingField_0; }
	inline void set_U3CLeftU3Ek__BackingField_0(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * value)
	{
		___U3CLeftU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLeftU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_StaticFields, ___U3CRightU3Ek__BackingField_1)); }
	inline OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * get_U3CRightU3Ek__BackingField_1() const { return ___U3CRightU3Ek__BackingField_1; }
	inline OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 ** get_address_of_U3CRightU3Ek__BackingField_1() { return &___U3CRightU3Ek__BackingField_1; }
	inline void set_U3CRightU3Ek__BackingField_1(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * value)
	{
		___U3CRightU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRightU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateHandMeshPerfMarker_11() { return static_cast<int32_t>(offsetof(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_StaticFields, ___UpdateHandMeshPerfMarker_11)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHandMeshPerfMarker_11() const { return ___UpdateHandMeshPerfMarker_11; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHandMeshPerfMarker_11() { return &___UpdateHandMeshPerfMarker_11; }
	inline void set_UpdateHandMeshPerfMarker_11(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHandMeshPerfMarker_11 = value;
	}
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


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0  : public BaseInputSourceDefinition_t56EFAF9EA1A9D2C3C153727076A6A0E3CC373505
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::cursorBeamBackwardTolerance
	float ___cursorBeamBackwardTolerance_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::cursorBeamUpTolerance
	float ___cursorBeamUpTolerance_3;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::unityJointPoses
	Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * ___unityJointPoses_4;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::currentIndexPose
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___currentIndexPose_5;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::minimumPinchDistance
	float ___minimumPinchDistance_6;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::maximumPinchDistance
	float ___maximumPinchDistance_7;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::enterPinchDistance
	float ___enterPinchDistance_8;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::exitPinchDistance
	float ___exitPinchDistance_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isPinching
	bool ___isPinching_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isIndexGrabbing
	bool ___isIndexGrabbing_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isMiddleGrabbing
	bool ___isMiddleGrabbing_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isThumbGrabbing
	bool ___isThumbGrabbing_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::previousReadyToTeleport
	bool ___previousReadyToTeleport_16;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::teleportPointer
	RuntimeObject* ___teleportPointer_17;

public:
	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0, ___U3CInputSourceU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_1() const { return ___U3CInputSourceU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_1() { return &___U3CInputSourceU3Ek__BackingField_1; }
	inline void set_U3CInputSourceU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_cursorBeamBackwardTolerance_2() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0, ___cursorBeamBackwardTolerance_2)); }
	inline float get_cursorBeamBackwardTolerance_2() const { return ___cursorBeamBackwardTolerance_2; }
	inline float* get_address_of_cursorBeamBackwardTolerance_2() { return &___cursorBeamBackwardTolerance_2; }
	inline void set_cursorBeamBackwardTolerance_2(float value)
	{
		___cursorBeamBackwardTolerance_2 = value;
	}

	inline static int32_t get_offset_of_cursorBeamUpTolerance_3() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0, ___cursorBeamUpTolerance_3)); }
	inline float get_cursorBeamUpTolerance_3() const { return ___cursorBeamUpTolerance_3; }
	inline float* get_address_of_cursorBeamUpTolerance_3() { return &___cursorBeamUpTolerance_3; }
	inline void set_cursorBeamUpTolerance_3(float value)
	{
		___cursorBeamUpTolerance_3 = value;
	}

	inline static int32_t get_offset_of_unityJointPoses_4() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0, ___unityJointPoses_4)); }
	inline Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * get_unityJointPoses_4() const { return ___unityJointPoses_4; }
	inline Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 ** get_address_of_unityJointPoses_4() { return &___unityJointPoses_4; }
	inline void set_unityJointPoses_4(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * value)
	{
		___unityJointPoses_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityJointPoses_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndexPose_5() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0, ___currentIndexPose_5)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_currentIndexPose_5() const { return ___currentIndexPose_5; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_currentIndexPose_5() { return &___currentIndexPose_5; }
	inline void set_currentIndexPose_5(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___currentIndexPose_5 = value;
	}

	inline static int32_t get_offset_of_minimumPinchDistance_6() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0, ___minimumPinchDistance_6)); }
	inline float get_minimumPinchDistance_6() const { return ___minimumPinchDistance_6; }
	inline float* get_address_of_minimumPinchDistance_6() { return &___minimumPinchDistance_6; }
	inline void set_minimumPinchDistance_6(float value)
	{
		___minimumPinchDistance_6 = value;
	}

	inline static int32_t get_offset_of_maximumPinchDistance_7() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0, ___maximumPinchDistance_7)); }
	inline float get_maximumPinchDistance_7() const { return ___maximumPinchDistance_7; }
	inline float* get_address_of_maximumPinchDistance_7() { return &___maximumPinchDistance_7; }
	inline void set_maximumPinchDistance_7(float value)
	{
		___maximumPinchDistance_7 = value;
	}

	inline static int32_t get_offset_of_enterPinchDistance_8() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0, ___enterPinchDistance_8)); }
	inline float get_enterPinchDistance_8() const { return ___enterPinchDistance_8; }
	inline float* get_address_of_enterPinchDistance_8() { return &___enterPinchDistance_8; }
	inline void set_enterPinchDistance_8(float value)
	{
		___enterPinchDistance_8 = value;
	}

	inline static int32_t get_offset_of_exitPinchDistance_9() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0, ___exitPinchDistance_9)); }
	inline float get_exitPinchDistance_9() const { return ___exitPinchDistance_9; }
	inline float* get_address_of_exitPinchDistance_9() { return &___exitPinchDistance_9; }
	inline void set_exitPinchDistance_9(float value)
	{
		___exitPinchDistance_9 = value;
	}

	inline static int32_t get_offset_of_isPinching_10() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0, ___isPinching_10)); }
	inline bool get_isPinching_10() const { return ___isPinching_10; }
	inline bool* get_address_of_isPinching_10() { return &___isPinching_10; }
	inline void set_isPinching_10(bool value)
	{
		___isPinching_10 = value;
	}

	inline static int32_t get_offset_of_isIndexGrabbing_11() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0, ___isIndexGrabbing_11)); }
	inline bool get_isIndexGrabbing_11() const { return ___isIndexGrabbing_11; }
	inline bool* get_address_of_isIndexGrabbing_11() { return &___isIndexGrabbing_11; }
	inline void set_isIndexGrabbing_11(bool value)
	{
		___isIndexGrabbing_11 = value;
	}

	inline static int32_t get_offset_of_isMiddleGrabbing_12() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0, ___isMiddleGrabbing_12)); }
	inline bool get_isMiddleGrabbing_12() const { return ___isMiddleGrabbing_12; }
	inline bool* get_address_of_isMiddleGrabbing_12() { return &___isMiddleGrabbing_12; }
	inline void set_isMiddleGrabbing_12(bool value)
	{
		___isMiddleGrabbing_12 = value;
	}

	inline static int32_t get_offset_of_isThumbGrabbing_13() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0, ___isThumbGrabbing_13)); }
	inline bool get_isThumbGrabbing_13() const { return ___isThumbGrabbing_13; }
	inline bool* get_address_of_isThumbGrabbing_13() { return &___isThumbGrabbing_13; }
	inline void set_isThumbGrabbing_13(bool value)
	{
		___isThumbGrabbing_13 = value;
	}

	inline static int32_t get_offset_of_previousReadyToTeleport_16() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0, ___previousReadyToTeleport_16)); }
	inline bool get_previousReadyToTeleport_16() const { return ___previousReadyToTeleport_16; }
	inline bool* get_address_of_previousReadyToTeleport_16() { return &___previousReadyToTeleport_16; }
	inline void set_previousReadyToTeleport_16(bool value)
	{
		___previousReadyToTeleport_16 = value;
	}

	inline static int32_t get_offset_of_teleportPointer_17() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0, ___teleportPointer_17)); }
	inline RuntimeObject* get_teleportPointer_17() const { return ___teleportPointer_17; }
	inline RuntimeObject** get_address_of_teleportPointer_17() { return &___teleportPointer_17; }
	inline void set_teleportPointer_17(RuntimeObject* value)
	{
		___teleportPointer_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportPointer_17), (void*)value);
	}
};

struct ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateHandJointsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHandJointsPerfMarker_14;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentIndexPosePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateCurrentIndexPosePerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentTeleportPosePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateCurrentTeleportPosePerfMarker_18;

public:
	inline static int32_t get_offset_of_UpdateHandJointsPerfMarker_14() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0_StaticFields, ___UpdateHandJointsPerfMarker_14)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHandJointsPerfMarker_14() const { return ___UpdateHandJointsPerfMarker_14; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHandJointsPerfMarker_14() { return &___UpdateHandJointsPerfMarker_14; }
	inline void set_UpdateHandJointsPerfMarker_14(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHandJointsPerfMarker_14 = value;
	}

	inline static int32_t get_offset_of_UpdateCurrentIndexPosePerfMarker_15() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0_StaticFields, ___UpdateCurrentIndexPosePerfMarker_15)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateCurrentIndexPosePerfMarker_15() const { return ___UpdateCurrentIndexPosePerfMarker_15; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateCurrentIndexPosePerfMarker_15() { return &___UpdateCurrentIndexPosePerfMarker_15; }
	inline void set_UpdateCurrentIndexPosePerfMarker_15(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateCurrentIndexPosePerfMarker_15 = value;
	}

	inline static int32_t get_offset_of_UpdateCurrentTeleportPosePerfMarker_18() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0_StaticFields, ___UpdateCurrentTeleportPosePerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateCurrentTeleportPosePerfMarker_18() const { return ___UpdateCurrentTeleportPosePerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateCurrentTeleportPosePerfMarker_18() { return &___UpdateCurrentTeleportPosePerfMarker_18; }
	inline void set_UpdateCurrentTeleportPosePerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateCurrentTeleportPosePerfMarker_18 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB  : public BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_10;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E* ___pointerConfigurations_11;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B * ___activePointersToConfig_13;

public:
	inline static int32_t get_offset_of_enablePointerCache_10() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB, ___enablePointerCache_10)); }
	inline bool get_enablePointerCache_10() const { return ___enablePointerCache_10; }
	inline bool* get_address_of_enablePointerCache_10() { return &___enablePointerCache_10; }
	inline void set_enablePointerCache_10(bool value)
	{
		___enablePointerCache_10 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_11() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB, ___pointerConfigurations_11)); }
	inline PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E* get_pointerConfigurations_11() const { return ___pointerConfigurations_11; }
	inline PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E** get_address_of_pointerConfigurations_11() { return &___pointerConfigurations_11; }
	inline void set_pointerConfigurations_11(PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E* value)
	{
		___pointerConfigurations_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerConfigurations_11), (void*)value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_13() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB, ___activePointersToConfig_13)); }
	inline Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B * get_activePointersToConfig_13() const { return ___activePointersToConfig_13; }
	inline Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B ** get_address_of_activePointersToConfig_13() { return &___activePointersToConfig_13; }
	inline void set_activePointersToConfig_13(Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B * value)
	{
		___activePointersToConfig_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointersToConfig_13), (void*)value);
	}
};

struct BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestPointersPerfMarker_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RecyclePointersPerfMarker_14;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CreatePointerPerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CleanActivePointersPerfMarker_16;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_12() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields, ___RequestPointersPerfMarker_12)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestPointersPerfMarker_12() const { return ___RequestPointersPerfMarker_12; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestPointersPerfMarker_12() { return &___RequestPointersPerfMarker_12; }
	inline void set_RequestPointersPerfMarker_12(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestPointersPerfMarker_12 = value;
	}

	inline static int32_t get_offset_of_RecyclePointersPerfMarker_14() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields, ___RecyclePointersPerfMarker_14)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RecyclePointersPerfMarker_14() const { return ___RecyclePointersPerfMarker_14; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RecyclePointersPerfMarker_14() { return &___RecyclePointersPerfMarker_14; }
	inline void set_RecyclePointersPerfMarker_14(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RecyclePointersPerfMarker_14 = value;
	}

	inline static int32_t get_offset_of_CreatePointerPerfMarker_15() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields, ___CreatePointerPerfMarker_15)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CreatePointerPerfMarker_15() const { return ___CreatePointerPerfMarker_15; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CreatePointerPerfMarker_15() { return &___CreatePointerPerfMarker_15; }
	inline void set_CreatePointerPerfMarker_15(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CreatePointerPerfMarker_15 = value;
	}

	inline static int32_t get_offset_of_CleanActivePointersPerfMarker_16() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields, ___CleanActivePointersPerfMarker_16)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CleanActivePointersPerfMarker_16() const { return ___CleanActivePointersPerfMarker_16; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CleanActivePointersPerfMarker_16() { return &___CleanActivePointersPerfMarker_16; }
	inline void set_CleanActivePointersPerfMarker_16(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CleanActivePointersPerfMarker_16 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother
struct EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D  : public RuntimeObject
{
public:
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::OnSaccade
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccade_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::OnSaccadeX
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeX_1;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::OnSaccadeY
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeY_2;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::smoothFactorNormalized
	float ___smoothFactorNormalized_3;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::saccadeThreshInDegree
	float ___saccadeThreshInDegree_4;
	// System.Nullable`1<UnityEngine.Ray> Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::oldGaze
	Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963  ___oldGaze_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::confidenceOfSaccade
	int32_t ___confidenceOfSaccade_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::confidenceOfSaccadeThreshold
	int32_t ___confidenceOfSaccadeThreshold_7;
	// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::saccade_initialGazePoint
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___saccade_initialGazePoint_8;
	// System.Collections.Generic.List`1<UnityEngine.Ray> Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::saccade_newGazeCluster
	List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * ___saccade_newGazeCluster_9;

public:
	inline static int32_t get_offset_of_OnSaccade_0() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D, ___OnSaccade_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccade_0() const { return ___OnSaccade_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccade_0() { return &___OnSaccade_0; }
	inline void set_OnSaccade_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccade_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccade_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeX_1() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D, ___OnSaccadeX_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeX_1() const { return ___OnSaccadeX_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeX_1() { return &___OnSaccadeX_1; }
	inline void set_OnSaccadeX_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeX_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeX_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeY_2() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D, ___OnSaccadeY_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeY_2() const { return ___OnSaccadeY_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeY_2() { return &___OnSaccadeY_2; }
	inline void set_OnSaccadeY_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeY_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeY_2), (void*)value);
	}

	inline static int32_t get_offset_of_smoothFactorNormalized_3() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D, ___smoothFactorNormalized_3)); }
	inline float get_smoothFactorNormalized_3() const { return ___smoothFactorNormalized_3; }
	inline float* get_address_of_smoothFactorNormalized_3() { return &___smoothFactorNormalized_3; }
	inline void set_smoothFactorNormalized_3(float value)
	{
		___smoothFactorNormalized_3 = value;
	}

	inline static int32_t get_offset_of_saccadeThreshInDegree_4() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D, ___saccadeThreshInDegree_4)); }
	inline float get_saccadeThreshInDegree_4() const { return ___saccadeThreshInDegree_4; }
	inline float* get_address_of_saccadeThreshInDegree_4() { return &___saccadeThreshInDegree_4; }
	inline void set_saccadeThreshInDegree_4(float value)
	{
		___saccadeThreshInDegree_4 = value;
	}

	inline static int32_t get_offset_of_oldGaze_5() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D, ___oldGaze_5)); }
	inline Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963  get_oldGaze_5() const { return ___oldGaze_5; }
	inline Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963 * get_address_of_oldGaze_5() { return &___oldGaze_5; }
	inline void set_oldGaze_5(Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963  value)
	{
		___oldGaze_5 = value;
	}

	inline static int32_t get_offset_of_confidenceOfSaccade_6() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D, ___confidenceOfSaccade_6)); }
	inline int32_t get_confidenceOfSaccade_6() const { return ___confidenceOfSaccade_6; }
	inline int32_t* get_address_of_confidenceOfSaccade_6() { return &___confidenceOfSaccade_6; }
	inline void set_confidenceOfSaccade_6(int32_t value)
	{
		___confidenceOfSaccade_6 = value;
	}

	inline static int32_t get_offset_of_confidenceOfSaccadeThreshold_7() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D, ___confidenceOfSaccadeThreshold_7)); }
	inline int32_t get_confidenceOfSaccadeThreshold_7() const { return ___confidenceOfSaccadeThreshold_7; }
	inline int32_t* get_address_of_confidenceOfSaccadeThreshold_7() { return &___confidenceOfSaccadeThreshold_7; }
	inline void set_confidenceOfSaccadeThreshold_7(int32_t value)
	{
		___confidenceOfSaccadeThreshold_7 = value;
	}

	inline static int32_t get_offset_of_saccade_initialGazePoint_8() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D, ___saccade_initialGazePoint_8)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_saccade_initialGazePoint_8() const { return ___saccade_initialGazePoint_8; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_saccade_initialGazePoint_8() { return &___saccade_initialGazePoint_8; }
	inline void set_saccade_initialGazePoint_8(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___saccade_initialGazePoint_8 = value;
	}

	inline static int32_t get_offset_of_saccade_newGazeCluster_9() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D, ___saccade_newGazeCluster_9)); }
	inline List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * get_saccade_newGazeCluster_9() const { return ___saccade_newGazeCluster_9; }
	inline List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B ** get_address_of_saccade_newGazeCluster_9() { return &___saccade_newGazeCluster_9; }
	inline void set_saccade_newGazeCluster_9(List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * value)
	{
		___saccade_newGazeCluster_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saccade_newGazeCluster_9), (void*)value);
	}
};

struct EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::SmoothGazePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SmoothGazePerfMarker_10;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::IsSaccadingPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___IsSaccadingPerfMarker_11;

public:
	inline static int32_t get_offset_of_SmoothGazePerfMarker_10() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D_StaticFields, ___SmoothGazePerfMarker_10)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SmoothGazePerfMarker_10() const { return ___SmoothGazePerfMarker_10; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SmoothGazePerfMarker_10() { return &___SmoothGazePerfMarker_10; }
	inline void set_SmoothGazePerfMarker_10(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SmoothGazePerfMarker_10 = value;
	}

	inline static int32_t get_offset_of_IsSaccadingPerfMarker_11() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D_StaticFields, ___IsSaccadingPerfMarker_11)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_IsSaccadingPerfMarker_11() const { return ___IsSaccadingPerfMarker_11; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_IsSaccadingPerfMarker_11() { return &___IsSaccadingPerfMarker_11; }
	inline void set_IsSaccadingPerfMarker_11(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___IsSaccadingPerfMarker_11 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8  : public BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPose
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___CurrentControllerPose_12;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::LastControllerPose
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___LastControllerPose_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___CurrentControllerPosition_14;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___CurrentControllerRotation_15;

public:
	inline static int32_t get_offset_of_CurrentControllerPose_12() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8, ___CurrentControllerPose_12)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_CurrentControllerPose_12() const { return ___CurrentControllerPose_12; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_CurrentControllerPose_12() { return &___CurrentControllerPose_12; }
	inline void set_CurrentControllerPose_12(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___CurrentControllerPose_12 = value;
	}

	inline static int32_t get_offset_of_LastControllerPose_13() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8, ___LastControllerPose_13)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_LastControllerPose_13() const { return ___LastControllerPose_13; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_LastControllerPose_13() { return &___LastControllerPose_13; }
	inline void set_LastControllerPose_13(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___LastControllerPose_13 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerPosition_14() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8, ___CurrentControllerPosition_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_CurrentControllerPosition_14() const { return ___CurrentControllerPosition_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_CurrentControllerPosition_14() { return &___CurrentControllerPosition_14; }
	inline void set_CurrentControllerPosition_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___CurrentControllerPosition_14 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerRotation_15() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8, ___CurrentControllerRotation_15)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_CurrentControllerRotation_15() const { return ___CurrentControllerRotation_15; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_CurrentControllerRotation_15() { return &___CurrentControllerRotation_15; }
	inline void set_CurrentControllerRotation_15(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___CurrentControllerRotation_15 = value;
	}
};

struct GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateControllerPerfMarker_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateButtonDataPerfMarker_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateSingleAxisDataPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateDualAxisDataPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePoseDataPerfMarker_20;

public:
	inline static int32_t get_offset_of_UpdateControllerPerfMarker_16() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields, ___UpdateControllerPerfMarker_16)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateControllerPerfMarker_16() const { return ___UpdateControllerPerfMarker_16; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateControllerPerfMarker_16() { return &___UpdateControllerPerfMarker_16; }
	inline void set_UpdateControllerPerfMarker_16(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateControllerPerfMarker_16 = value;
	}

	inline static int32_t get_offset_of_UpdateButtonDataPerfMarker_17() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields, ___UpdateButtonDataPerfMarker_17)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateButtonDataPerfMarker_17() const { return ___UpdateButtonDataPerfMarker_17; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateButtonDataPerfMarker_17() { return &___UpdateButtonDataPerfMarker_17; }
	inline void set_UpdateButtonDataPerfMarker_17(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateButtonDataPerfMarker_17 = value;
	}

	inline static int32_t get_offset_of_UpdateSingleAxisDataPerfMarker_18() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields, ___UpdateSingleAxisDataPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateSingleAxisDataPerfMarker_18() const { return ___UpdateSingleAxisDataPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateSingleAxisDataPerfMarker_18() { return &___UpdateSingleAxisDataPerfMarker_18; }
	inline void set_UpdateSingleAxisDataPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateSingleAxisDataPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_UpdateDualAxisDataPerfMarker_19() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields, ___UpdateDualAxisDataPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateDualAxisDataPerfMarker_19() const { return ___UpdateDualAxisDataPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateDualAxisDataPerfMarker_19() { return &___UpdateDualAxisDataPerfMarker_19; }
	inline void set_UpdateDualAxisDataPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateDualAxisDataPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_UpdatePoseDataPerfMarker_20() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields, ___UpdatePoseDataPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePoseDataPerfMarker_20() const { return ___UpdatePoseDataPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePoseDataPerfMarker_20() { return &___UpdatePoseDataPerfMarker_20; }
	inline void set_UpdatePoseDataPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePoseDataPerfMarker_20 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.HPMotionControllerDefinition
struct HPMotionControllerDefinition_t575691F70AFFC019E7F3003F94054872691E1E14  : public BaseInputSourceDefinition_t56EFAF9EA1A9D2C3C153727076A6A0E3CC373505
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___inputAction_4)); }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  value)
	{
		___inputAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_4))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeX_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeY_7), (void*)value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_11), (void*)value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___vector2Data_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___positionData_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___rotationData_16)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___poseData_17)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___poseData_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityControllerDefinition
struct WindowsMixedRealityControllerDefinition_tDABBC06841C17A28BEA058F9E4F9E015459E80FD  : public BaseInputSourceDefinition_t56EFAF9EA1A9D2C3C153727076A6A0E3CC373505
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HPReverbG2Controller
struct HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8  : public GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HPReverbG2Controller::currentPointerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentPointerPosition_21;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HPReverbG2Controller::currentPointerRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___currentPointerRotation_22;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HPReverbG2Controller::currentPointerPose
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___currentPointerPose_23;

public:
	inline static int32_t get_offset_of_currentPointerPosition_21() { return static_cast<int32_t>(offsetof(HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8, ___currentPointerPosition_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentPointerPosition_21() const { return ___currentPointerPosition_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentPointerPosition_21() { return &___currentPointerPosition_21; }
	inline void set_currentPointerPosition_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentPointerPosition_21 = value;
	}

	inline static int32_t get_offset_of_currentPointerRotation_22() { return static_cast<int32_t>(offsetof(HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8, ___currentPointerRotation_22)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_currentPointerRotation_22() const { return ___currentPointerRotation_22; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_currentPointerRotation_22() { return &___currentPointerRotation_22; }
	inline void set_currentPointerRotation_22(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___currentPointerRotation_22 = value;
	}

	inline static int32_t get_offset_of_currentPointerPose_23() { return static_cast<int32_t>(offsetof(HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8, ___currentPointerPose_23)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_currentPointerPose_23() const { return ___currentPointerPose_23; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_currentPointerPose_23() { return &___currentPointerPose_23; }
	inline void set_currentPointerPose_23(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___currentPointerPose_23 = value;
	}
};

struct HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HPReverbG2Controller::UpdatePoseDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePoseDataPerfMarker_24;

public:
	inline static int32_t get_offset_of_UpdatePoseDataPerfMarker_24() { return static_cast<int32_t>(offsetof(HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8_StaticFields, ___UpdatePoseDataPerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePoseDataPerfMarker_24() const { return ___UpdatePoseDataPerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePoseDataPerfMarker_24() { return &___UpdatePoseDataPerfMarker_24; }
	inline void set_UpdatePoseDataPerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePoseDataPerfMarker_24 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand
struct MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313  : public GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8
{
public:
	// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::handDefinition
	ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * ___handDefinition_21;
	// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::handMeshProvider
	OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * ___handMeshProvider_22;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::unityJointPoses
	Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * ___unityJointPoses_23;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::currentPointerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentPointerPosition_24;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::currentPointerRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___currentPointerRotation_25;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::currentPointerPose
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___currentPointerPose_26;
	// Microsoft.MixedReality.OpenXR.HandTracker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::handTracker
	HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * ___handTracker_28;
	// Microsoft.MixedReality.OpenXR.HandJointLocation[] Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::locations
	HandJointLocationU5BU5D_t0C173328D87820623DD413A91272E04D79C80EA4* ___locations_29;

public:
	inline static int32_t get_offset_of_handDefinition_21() { return static_cast<int32_t>(offsetof(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313, ___handDefinition_21)); }
	inline ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * get_handDefinition_21() const { return ___handDefinition_21; }
	inline ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 ** get_address_of_handDefinition_21() { return &___handDefinition_21; }
	inline void set_handDefinition_21(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * value)
	{
		___handDefinition_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handDefinition_21), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshProvider_22() { return static_cast<int32_t>(offsetof(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313, ___handMeshProvider_22)); }
	inline OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * get_handMeshProvider_22() const { return ___handMeshProvider_22; }
	inline OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 ** get_address_of_handMeshProvider_22() { return &___handMeshProvider_22; }
	inline void set_handMeshProvider_22(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * value)
	{
		___handMeshProvider_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshProvider_22), (void*)value);
	}

	inline static int32_t get_offset_of_unityJointPoses_23() { return static_cast<int32_t>(offsetof(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313, ___unityJointPoses_23)); }
	inline Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * get_unityJointPoses_23() const { return ___unityJointPoses_23; }
	inline Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 ** get_address_of_unityJointPoses_23() { return &___unityJointPoses_23; }
	inline void set_unityJointPoses_23(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * value)
	{
		___unityJointPoses_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityJointPoses_23), (void*)value);
	}

	inline static int32_t get_offset_of_currentPointerPosition_24() { return static_cast<int32_t>(offsetof(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313, ___currentPointerPosition_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentPointerPosition_24() const { return ___currentPointerPosition_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentPointerPosition_24() { return &___currentPointerPosition_24; }
	inline void set_currentPointerPosition_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentPointerPosition_24 = value;
	}

	inline static int32_t get_offset_of_currentPointerRotation_25() { return static_cast<int32_t>(offsetof(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313, ___currentPointerRotation_25)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_currentPointerRotation_25() const { return ___currentPointerRotation_25; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_currentPointerRotation_25() { return &___currentPointerRotation_25; }
	inline void set_currentPointerRotation_25(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___currentPointerRotation_25 = value;
	}

	inline static int32_t get_offset_of_currentPointerPose_26() { return static_cast<int32_t>(offsetof(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313, ___currentPointerPose_26)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_currentPointerPose_26() const { return ___currentPointerPose_26; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_currentPointerPose_26() { return &___currentPointerPose_26; }
	inline void set_currentPointerPose_26(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___currentPointerPose_26 = value;
	}

	inline static int32_t get_offset_of_handTracker_28() { return static_cast<int32_t>(offsetof(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313, ___handTracker_28)); }
	inline HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * get_handTracker_28() const { return ___handTracker_28; }
	inline HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 ** get_address_of_handTracker_28() { return &___handTracker_28; }
	inline void set_handTracker_28(HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * value)
	{
		___handTracker_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTracker_28), (void*)value);
	}

	inline static int32_t get_offset_of_locations_29() { return static_cast<int32_t>(offsetof(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313, ___locations_29)); }
	inline HandJointLocationU5BU5D_t0C173328D87820623DD413A91272E04D79C80EA4* get_locations_29() const { return ___locations_29; }
	inline HandJointLocationU5BU5D_t0C173328D87820623DD413A91272E04D79C80EA4** get_address_of_locations_29() { return &___locations_29; }
	inline void set_locations_29(HandJointLocationU5BU5D_t0C173328D87820623DD413A91272E04D79C80EA4* value)
	{
		___locations_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locations_29), (void*)value);
	}
};

struct MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields
{
public:
	// Microsoft.MixedReality.OpenXR.HandJoint[] Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::HandJoints
	HandJointU5BU5D_t3D62EFCC2E65FEB2D8C0E2A2E6A688D8395010CA* ___HandJoints_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdateControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateControllerPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdateSingleAxisDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateSingleAxisDataPerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdateButtonDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateButtonDataPerfMarker_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdatePoseDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePoseDataPerfMarker_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdateHandDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHandDataPerfMarker_34;

public:
	inline static int32_t get_offset_of_HandJoints_27() { return static_cast<int32_t>(offsetof(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields, ___HandJoints_27)); }
	inline HandJointU5BU5D_t3D62EFCC2E65FEB2D8C0E2A2E6A688D8395010CA* get_HandJoints_27() const { return ___HandJoints_27; }
	inline HandJointU5BU5D_t3D62EFCC2E65FEB2D8C0E2A2E6A688D8395010CA** get_address_of_HandJoints_27() { return &___HandJoints_27; }
	inline void set_HandJoints_27(HandJointU5BU5D_t3D62EFCC2E65FEB2D8C0E2A2E6A688D8395010CA* value)
	{
		___HandJoints_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HandJoints_27), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateControllerPerfMarker_30() { return static_cast<int32_t>(offsetof(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields, ___UpdateControllerPerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateControllerPerfMarker_30() const { return ___UpdateControllerPerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateControllerPerfMarker_30() { return &___UpdateControllerPerfMarker_30; }
	inline void set_UpdateControllerPerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateControllerPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_UpdateSingleAxisDataPerfMarker_31() { return static_cast<int32_t>(offsetof(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields, ___UpdateSingleAxisDataPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateSingleAxisDataPerfMarker_31() const { return ___UpdateSingleAxisDataPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateSingleAxisDataPerfMarker_31() { return &___UpdateSingleAxisDataPerfMarker_31; }
	inline void set_UpdateSingleAxisDataPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateSingleAxisDataPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_UpdateButtonDataPerfMarker_32() { return static_cast<int32_t>(offsetof(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields, ___UpdateButtonDataPerfMarker_32)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateButtonDataPerfMarker_32() const { return ___UpdateButtonDataPerfMarker_32; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateButtonDataPerfMarker_32() { return &___UpdateButtonDataPerfMarker_32; }
	inline void set_UpdateButtonDataPerfMarker_32(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateButtonDataPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_UpdatePoseDataPerfMarker_33() { return static_cast<int32_t>(offsetof(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields, ___UpdatePoseDataPerfMarker_33)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePoseDataPerfMarker_33() const { return ___UpdatePoseDataPerfMarker_33; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePoseDataPerfMarker_33() { return &___UpdatePoseDataPerfMarker_33; }
	inline void set_UpdatePoseDataPerfMarker_33(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePoseDataPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_UpdateHandDataPerfMarker_34() { return static_cast<int32_t>(offsetof(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields, ___UpdateHandDataPerfMarker_34)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHandDataPerfMarker_34() const { return ___UpdateHandDataPerfMarker_34; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHandDataPerfMarker_34() { return &___UpdateHandDataPerfMarker_34; }
	inline void set_UpdateHandDataPerfMarker_34(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHandDataPerfMarker_34 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftMotionController
struct MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072  : public GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftMotionController::currentPointerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentPointerPosition_21;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftMotionController::currentPointerRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___currentPointerRotation_22;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftMotionController::currentPointerPose
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___currentPointerPose_23;

public:
	inline static int32_t get_offset_of_currentPointerPosition_21() { return static_cast<int32_t>(offsetof(MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072, ___currentPointerPosition_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentPointerPosition_21() const { return ___currentPointerPosition_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentPointerPosition_21() { return &___currentPointerPosition_21; }
	inline void set_currentPointerPosition_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentPointerPosition_21 = value;
	}

	inline static int32_t get_offset_of_currentPointerRotation_22() { return static_cast<int32_t>(offsetof(MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072, ___currentPointerRotation_22)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_currentPointerRotation_22() const { return ___currentPointerRotation_22; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_currentPointerRotation_22() { return &___currentPointerRotation_22; }
	inline void set_currentPointerRotation_22(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___currentPointerRotation_22 = value;
	}

	inline static int32_t get_offset_of_currentPointerPose_23() { return static_cast<int32_t>(offsetof(MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072, ___currentPointerPose_23)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_currentPointerPose_23() const { return ___currentPointerPose_23; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_currentPointerPose_23() { return &___currentPointerPose_23; }
	inline void set_currentPointerPose_23(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___currentPointerPose_23 = value;
	}
};

struct MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftMotionController::UpdatePoseDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePoseDataPerfMarker_24;

public:
	inline static int32_t get_offset_of_UpdatePoseDataPerfMarker_24() { return static_cast<int32_t>(offsetof(MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072_StaticFields, ___UpdatePoseDataPerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePoseDataPerfMarker_24() const { return ___UpdatePoseDataPerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePoseDataPerfMarker_24() { return &___UpdatePoseDataPerfMarker_24; }
	inline void set_UpdatePoseDataPerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePoseDataPerfMarker_24 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityEyeTrackingProfile
struct MixedRealityEyeTrackingProfile_tFFC54FF088BA636B718A9C98EA2DDD58D9303470  : public BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityEyeTrackingProfile::smoothEyeTracking
	bool ___smoothEyeTracking_5;

public:
	inline static int32_t get_offset_of_smoothEyeTracking_5() { return static_cast<int32_t>(offsetof(MixedRealityEyeTrackingProfile_tFFC54FF088BA636B718A9C98EA2DDD58D9303470, ___smoothEyeTracking_5)); }
	inline bool get_smoothEyeTracking_5() const { return ___smoothEyeTracking_5; }
	inline bool* get_address_of_smoothEyeTracking_5() { return &___smoothEyeTracking_5; }
	inline void set_smoothEyeTracking_5(bool value)
	{
		___smoothEyeTracking_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile
struct MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740  : public BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::jointPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___jointPrefab_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::palmPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___palmPrefab_6;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::fingertipPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fingertipPrefab_7;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::handMeshPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___handMeshPrefab_8;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::handMeshVisualizationModes
	int32_t ___handMeshVisualizationModes_9;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::handJointVisualizationModes
	int32_t ___handJointVisualizationModes_10;

public:
	inline static int32_t get_offset_of_jointPrefab_5() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740, ___jointPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_jointPrefab_5() const { return ___jointPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_jointPrefab_5() { return &___jointPrefab_5; }
	inline void set_jointPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___jointPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_palmPrefab_6() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740, ___palmPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_palmPrefab_6() const { return ___palmPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_palmPrefab_6() { return &___palmPrefab_6; }
	inline void set_palmPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___palmPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___palmPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_fingertipPrefab_7() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740, ___fingertipPrefab_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fingertipPrefab_7() const { return ___fingertipPrefab_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fingertipPrefab_7() { return &___fingertipPrefab_7; }
	inline void set_fingertipPrefab_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fingertipPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingertipPrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshPrefab_8() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740, ___handMeshPrefab_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_handMeshPrefab_8() const { return ___handMeshPrefab_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_handMeshPrefab_8() { return &___handMeshPrefab_8; }
	inline void set_handMeshPrefab_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___handMeshPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshPrefab_8), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshVisualizationModes_9() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740, ___handMeshVisualizationModes_9)); }
	inline int32_t get_handMeshVisualizationModes_9() const { return ___handMeshVisualizationModes_9; }
	inline int32_t* get_address_of_handMeshVisualizationModes_9() { return &___handMeshVisualizationModes_9; }
	inline void set_handMeshVisualizationModes_9(int32_t value)
	{
		___handMeshVisualizationModes_9 = value;
	}

	inline static int32_t get_offset_of_handJointVisualizationModes_10() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740, ___handJointVisualizationModes_10)); }
	inline int32_t get_handJointVisualizationModes_10() const { return ___handJointVisualizationModes_10; }
	inline int32_t* get_address_of_handJointVisualizationModes_10() { return &___handJointVisualizationModes_10; }
	inline void set_handJointVisualizationModes_10(int32_t value)
	{
		___handJointVisualizationModes_10 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7  : public BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[] Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::dataProviderConfigurations
	MixedRealityInputDataProviderConfigurationU5BU5D_tB03780835CE061BFE86575A4B949709E3397C852* ___dataProviderConfigurations_5;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusProviderType
	SystemType_t8D2323983B85594F1037C020D3497109700B78DF * ___focusProviderType_6;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::raycastProviderType
	SystemType_t8D2323983B85594F1037C020D3497109700B78DF * ___raycastProviderType_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusQueryBufferSize
	int32_t ___focusQueryBufferSize_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusIndividualCompoundCollider
	bool ___focusIndividualCompoundCollider_9;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionsProfile
	MixedRealityInputActionsProfile_tAA5B4FC5E707253DEEFDB8FBD4A7AECDB9D40272 * ___inputActionsProfile_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionRulesProfile
	MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD * ___inputActionRulesProfile_11;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::pointerProfile
	MixedRealityPointerProfile_tDC8F41622EFFC012D67C0016CDDC8B83F717FC2F * ___pointerProfile_12;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::gesturesProfile
	MixedRealityGesturesProfile_t46311659BA1D182BFAF1C5F51DF1F56DBADF5D1C * ___gesturesProfile_13;
	// System.Collections.Generic.List`1<System.Globalization.CultureInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::supportedVoiceCultures
	List_1_tB93032867275F6C802C3659FC027FF6FB1372359 * ___supportedVoiceCultures_14;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::speechCommandsProfile
	MixedRealitySpeechCommandsProfile_t64625E495606E3C46112AAA0B69C6BB05490C348 * ___speechCommandsProfile_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::enableControllerMapping
	bool ___enableControllerMapping_16;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerMappingProfile
	MixedRealityControllerMappingProfile_t620A6DD34C353B5656CDEC6FB519F56C2D272712 * ___controllerMappingProfile_17;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerVisualizationProfile
	MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1 * ___controllerVisualizationProfile_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::handTrackingProfile
	MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740 * ___handTrackingProfile_19;

public:
	inline static int32_t get_offset_of_dataProviderConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7, ___dataProviderConfigurations_5)); }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_tB03780835CE061BFE86575A4B949709E3397C852* get_dataProviderConfigurations_5() const { return ___dataProviderConfigurations_5; }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_tB03780835CE061BFE86575A4B949709E3397C852** get_address_of_dataProviderConfigurations_5() { return &___dataProviderConfigurations_5; }
	inline void set_dataProviderConfigurations_5(MixedRealityInputDataProviderConfigurationU5BU5D_tB03780835CE061BFE86575A4B949709E3397C852* value)
	{
		___dataProviderConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviderConfigurations_5), (void*)value);
	}

	inline static int32_t get_offset_of_focusProviderType_6() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7, ___focusProviderType_6)); }
	inline SystemType_t8D2323983B85594F1037C020D3497109700B78DF * get_focusProviderType_6() const { return ___focusProviderType_6; }
	inline SystemType_t8D2323983B85594F1037C020D3497109700B78DF ** get_address_of_focusProviderType_6() { return &___focusProviderType_6; }
	inline void set_focusProviderType_6(SystemType_t8D2323983B85594F1037C020D3497109700B78DF * value)
	{
		___focusProviderType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusProviderType_6), (void*)value);
	}

	inline static int32_t get_offset_of_raycastProviderType_7() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7, ___raycastProviderType_7)); }
	inline SystemType_t8D2323983B85594F1037C020D3497109700B78DF * get_raycastProviderType_7() const { return ___raycastProviderType_7; }
	inline SystemType_t8D2323983B85594F1037C020D3497109700B78DF ** get_address_of_raycastProviderType_7() { return &___raycastProviderType_7; }
	inline void set_raycastProviderType_7(SystemType_t8D2323983B85594F1037C020D3497109700B78DF * value)
	{
		___raycastProviderType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastProviderType_7), (void*)value);
	}

	inline static int32_t get_offset_of_focusQueryBufferSize_8() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7, ___focusQueryBufferSize_8)); }
	inline int32_t get_focusQueryBufferSize_8() const { return ___focusQueryBufferSize_8; }
	inline int32_t* get_address_of_focusQueryBufferSize_8() { return &___focusQueryBufferSize_8; }
	inline void set_focusQueryBufferSize_8(int32_t value)
	{
		___focusQueryBufferSize_8 = value;
	}

	inline static int32_t get_offset_of_focusIndividualCompoundCollider_9() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7, ___focusIndividualCompoundCollider_9)); }
	inline bool get_focusIndividualCompoundCollider_9() const { return ___focusIndividualCompoundCollider_9; }
	inline bool* get_address_of_focusIndividualCompoundCollider_9() { return &___focusIndividualCompoundCollider_9; }
	inline void set_focusIndividualCompoundCollider_9(bool value)
	{
		___focusIndividualCompoundCollider_9 = value;
	}

	inline static int32_t get_offset_of_inputActionsProfile_10() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7, ___inputActionsProfile_10)); }
	inline MixedRealityInputActionsProfile_tAA5B4FC5E707253DEEFDB8FBD4A7AECDB9D40272 * get_inputActionsProfile_10() const { return ___inputActionsProfile_10; }
	inline MixedRealityInputActionsProfile_tAA5B4FC5E707253DEEFDB8FBD4A7AECDB9D40272 ** get_address_of_inputActionsProfile_10() { return &___inputActionsProfile_10; }
	inline void set_inputActionsProfile_10(MixedRealityInputActionsProfile_tAA5B4FC5E707253DEEFDB8FBD4A7AECDB9D40272 * value)
	{
		___inputActionsProfile_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputActionsProfile_10), (void*)value);
	}

	inline static int32_t get_offset_of_inputActionRulesProfile_11() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7, ___inputActionRulesProfile_11)); }
	inline MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD * get_inputActionRulesProfile_11() const { return ___inputActionRulesProfile_11; }
	inline MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD ** get_address_of_inputActionRulesProfile_11() { return &___inputActionRulesProfile_11; }
	inline void set_inputActionRulesProfile_11(MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD * value)
	{
		___inputActionRulesProfile_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputActionRulesProfile_11), (void*)value);
	}

	inline static int32_t get_offset_of_pointerProfile_12() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7, ___pointerProfile_12)); }
	inline MixedRealityPointerProfile_tDC8F41622EFFC012D67C0016CDDC8B83F717FC2F * get_pointerProfile_12() const { return ___pointerProfile_12; }
	inline MixedRealityPointerProfile_tDC8F41622EFFC012D67C0016CDDC8B83F717FC2F ** get_address_of_pointerProfile_12() { return &___pointerProfile_12; }
	inline void set_pointerProfile_12(MixedRealityPointerProfile_tDC8F41622EFFC012D67C0016CDDC8B83F717FC2F * value)
	{
		___pointerProfile_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerProfile_12), (void*)value);
	}

	inline static int32_t get_offset_of_gesturesProfile_13() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7, ___gesturesProfile_13)); }
	inline MixedRealityGesturesProfile_t46311659BA1D182BFAF1C5F51DF1F56DBADF5D1C * get_gesturesProfile_13() const { return ___gesturesProfile_13; }
	inline MixedRealityGesturesProfile_t46311659BA1D182BFAF1C5F51DF1F56DBADF5D1C ** get_address_of_gesturesProfile_13() { return &___gesturesProfile_13; }
	inline void set_gesturesProfile_13(MixedRealityGesturesProfile_t46311659BA1D182BFAF1C5F51DF1F56DBADF5D1C * value)
	{
		___gesturesProfile_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gesturesProfile_13), (void*)value);
	}

	inline static int32_t get_offset_of_supportedVoiceCultures_14() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7, ___supportedVoiceCultures_14)); }
	inline List_1_tB93032867275F6C802C3659FC027FF6FB1372359 * get_supportedVoiceCultures_14() const { return ___supportedVoiceCultures_14; }
	inline List_1_tB93032867275F6C802C3659FC027FF6FB1372359 ** get_address_of_supportedVoiceCultures_14() { return &___supportedVoiceCultures_14; }
	inline void set_supportedVoiceCultures_14(List_1_tB93032867275F6C802C3659FC027FF6FB1372359 * value)
	{
		___supportedVoiceCultures_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___supportedVoiceCultures_14), (void*)value);
	}

	inline static int32_t get_offset_of_speechCommandsProfile_15() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7, ___speechCommandsProfile_15)); }
	inline MixedRealitySpeechCommandsProfile_t64625E495606E3C46112AAA0B69C6BB05490C348 * get_speechCommandsProfile_15() const { return ___speechCommandsProfile_15; }
	inline MixedRealitySpeechCommandsProfile_t64625E495606E3C46112AAA0B69C6BB05490C348 ** get_address_of_speechCommandsProfile_15() { return &___speechCommandsProfile_15; }
	inline void set_speechCommandsProfile_15(MixedRealitySpeechCommandsProfile_t64625E495606E3C46112AAA0B69C6BB05490C348 * value)
	{
		___speechCommandsProfile_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechCommandsProfile_15), (void*)value);
	}

	inline static int32_t get_offset_of_enableControllerMapping_16() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7, ___enableControllerMapping_16)); }
	inline bool get_enableControllerMapping_16() const { return ___enableControllerMapping_16; }
	inline bool* get_address_of_enableControllerMapping_16() { return &___enableControllerMapping_16; }
	inline void set_enableControllerMapping_16(bool value)
	{
		___enableControllerMapping_16 = value;
	}

	inline static int32_t get_offset_of_controllerMappingProfile_17() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7, ___controllerMappingProfile_17)); }
	inline MixedRealityControllerMappingProfile_t620A6DD34C353B5656CDEC6FB519F56C2D272712 * get_controllerMappingProfile_17() const { return ___controllerMappingProfile_17; }
	inline MixedRealityControllerMappingProfile_t620A6DD34C353B5656CDEC6FB519F56C2D272712 ** get_address_of_controllerMappingProfile_17() { return &___controllerMappingProfile_17; }
	inline void set_controllerMappingProfile_17(MixedRealityControllerMappingProfile_t620A6DD34C353B5656CDEC6FB519F56C2D272712 * value)
	{
		___controllerMappingProfile_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerMappingProfile_17), (void*)value);
	}

	inline static int32_t get_offset_of_controllerVisualizationProfile_18() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7, ___controllerVisualizationProfile_18)); }
	inline MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1 * get_controllerVisualizationProfile_18() const { return ___controllerVisualizationProfile_18; }
	inline MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1 ** get_address_of_controllerVisualizationProfile_18() { return &___controllerVisualizationProfile_18; }
	inline void set_controllerVisualizationProfile_18(MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1 * value)
	{
		___controllerVisualizationProfile_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerVisualizationProfile_18), (void*)value);
	}

	inline static int32_t get_offset_of_handTrackingProfile_19() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7, ___handTrackingProfile_19)); }
	inline MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740 * get_handTrackingProfile_19() const { return ___handTrackingProfile_19; }
	inline MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740 ** get_address_of_handTrackingProfile_19() { return &___handTrackingProfile_19; }
	inline void set_handTrackingProfile_19(MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740 * value)
	{
		___handTrackingProfile_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackingProfile_19), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider
struct OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85  : public BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::<SmoothEyeTracking>k__BackingField
	bool ___U3CSmoothEyeTrackingU3Ek__BackingField_17;
	// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::gazeSmoother
	EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * ___gazeSmoother_18;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::OnSaccade
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccade_19;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::OnSaccadeX
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeX_20;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::OnSaccadeY
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeY_21;
	// UnityEngine.XR.InputDevice Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::eyeTrackingDevice
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___eyeTrackingDevice_23;

public:
	inline static int32_t get_offset_of_U3CSmoothEyeTrackingU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85, ___U3CSmoothEyeTrackingU3Ek__BackingField_17)); }
	inline bool get_U3CSmoothEyeTrackingU3Ek__BackingField_17() const { return ___U3CSmoothEyeTrackingU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CSmoothEyeTrackingU3Ek__BackingField_17() { return &___U3CSmoothEyeTrackingU3Ek__BackingField_17; }
	inline void set_U3CSmoothEyeTrackingU3Ek__BackingField_17(bool value)
	{
		___U3CSmoothEyeTrackingU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_gazeSmoother_18() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85, ___gazeSmoother_18)); }
	inline EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * get_gazeSmoother_18() const { return ___gazeSmoother_18; }
	inline EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D ** get_address_of_gazeSmoother_18() { return &___gazeSmoother_18; }
	inline void set_gazeSmoother_18(EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * value)
	{
		___gazeSmoother_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeSmoother_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccade_19() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85, ___OnSaccade_19)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccade_19() const { return ___OnSaccade_19; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccade_19() { return &___OnSaccade_19; }
	inline void set_OnSaccade_19(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccade_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccade_19), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeX_20() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85, ___OnSaccadeX_20)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeX_20() const { return ___OnSaccadeX_20; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeX_20() { return &___OnSaccadeX_20; }
	inline void set_OnSaccadeX_20(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeX_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeX_20), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeY_21() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85, ___OnSaccadeY_21)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeY_21() const { return ___OnSaccadeY_21; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeY_21() { return &___OnSaccadeY_21; }
	inline void set_OnSaccadeY_21(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeY_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeY_21), (void*)value);
	}

	inline static int32_t get_offset_of_eyeTrackingDevice_23() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85, ___eyeTrackingDevice_23)); }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  get_eyeTrackingDevice_23() const { return ___eyeTrackingDevice_23; }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * get_address_of_eyeTrackingDevice_23() { return &___eyeTrackingDevice_23; }
	inline void set_eyeTrackingDevice_23(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  value)
	{
		___eyeTrackingDevice_23 = value;
	}
};

struct OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::InputDeviceList
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___InputDeviceList_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_24;

public:
	inline static int32_t get_offset_of_InputDeviceList_22() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_StaticFields, ___InputDeviceList_22)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_InputDeviceList_22() const { return ___InputDeviceList_22; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_InputDeviceList_22() { return &___InputDeviceList_22; }
	inline void set_InputDeviceList_22(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___InputDeviceList_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputDeviceList_22), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_24() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_StaticFields, ___UpdatePerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_24() const { return ___UpdatePerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_24() { return &___UpdatePerfMarker_24; }
	inline void set_UpdatePerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_24 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719  : public BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevicesSubset
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevicesSubset_19;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::lastInputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___lastInputDevices_20;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::<DesiredInputCharacteristics>k__BackingField
	List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * ___U3CDesiredInputCharacteristicsU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_inputDevices_18() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719, ___inputDevices_18)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevices_18() const { return ___inputDevices_18; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevices_18() { return &___inputDevices_18; }
	inline void set_inputDevices_18(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevices_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevices_18), (void*)value);
	}

	inline static int32_t get_offset_of_inputDevicesSubset_19() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719, ___inputDevicesSubset_19)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevicesSubset_19() const { return ___inputDevicesSubset_19; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevicesSubset_19() { return &___inputDevicesSubset_19; }
	inline void set_inputDevicesSubset_19(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevicesSubset_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevicesSubset_19), (void*)value);
	}

	inline static int32_t get_offset_of_lastInputDevices_20() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719, ___lastInputDevices_20)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_lastInputDevices_20() const { return ___lastInputDevices_20; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_lastInputDevices_20() { return &___lastInputDevices_20; }
	inline void set_lastInputDevices_20(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___lastInputDevices_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastInputDevices_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719, ___U3CDesiredInputCharacteristicsU3Ek__BackingField_21)); }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * get_U3CDesiredInputCharacteristicsU3Ek__BackingField_21() const { return ___U3CDesiredInputCharacteristicsU3Ek__BackingField_21; }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C ** get_address_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_21() { return &___U3CDesiredInputCharacteristicsU3Ek__BackingField_21; }
	inline void set_U3CDesiredInputCharacteristicsU3Ek__BackingField_21(List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * value)
	{
		___U3CDesiredInputCharacteristicsU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDesiredInputCharacteristicsU3Ek__BackingField_21), (void*)value);
	}
};

struct XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::ActiveControllers
	Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * ___ActiveControllers_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetOrAddControllerPerfMarker_23;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveControllerPerfMarker_24;

public:
	inline static int32_t get_offset_of_ActiveControllers_17() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields, ___ActiveControllers_17)); }
	inline Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * get_ActiveControllers_17() const { return ___ActiveControllers_17; }
	inline Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E ** get_address_of_ActiveControllers_17() { return &___ActiveControllers_17; }
	inline void set_ActiveControllers_17(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * value)
	{
		___ActiveControllers_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveControllers_17), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_22() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields, ___UpdatePerfMarker_22)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_22() const { return ___UpdatePerfMarker_22; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_22() { return &___UpdatePerfMarker_22; }
	inline void set_UpdatePerfMarker_22(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_GetOrAddControllerPerfMarker_23() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields, ___GetOrAddControllerPerfMarker_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetOrAddControllerPerfMarker_23() const { return ___GetOrAddControllerPerfMarker_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetOrAddControllerPerfMarker_23() { return &___GetOrAddControllerPerfMarker_23; }
	inline void set_GetOrAddControllerPerfMarker_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetOrAddControllerPerfMarker_23 = value;
	}

	inline static int32_t get_offset_of_RemoveControllerPerfMarker_24() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields, ___RemoveControllerPerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveControllerPerfMarker_24() const { return ___RemoveControllerPerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveControllerPerfMarker_24() { return &___RemoveControllerPerfMarker_24; }
	inline void set_RemoveControllerPerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveControllerPerfMarker_24 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager
struct OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604  : public XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719
{
public:
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::isActiveLoader
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isActiveLoader_25;

public:
	inline static int32_t get_offset_of_isActiveLoader_25() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604, ___isActiveLoader_25)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isActiveLoader_25() const { return ___isActiveLoader_25; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isActiveLoader_25() { return &___isActiveLoader_25; }
	inline void set_isActiveLoader_25(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isActiveLoader_25 = value;
	}
};

struct OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetOrAddControllerPerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveControllerPerfMarker_27;

public:
	inline static int32_t get_offset_of_GetOrAddControllerPerfMarker_26() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604_StaticFields, ___GetOrAddControllerPerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetOrAddControllerPerfMarker_26() const { return ___GetOrAddControllerPerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetOrAddControllerPerfMarker_26() { return &___GetOrAddControllerPerfMarker_26; }
	inline void set_GetOrAddControllerPerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetOrAddControllerPerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_RemoveControllerPerfMarker_27() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604_StaticFields, ___RemoveControllerPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveControllerPerfMarker_27() const { return ___RemoveControllerPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveControllerPerfMarker_27() { return &___RemoveControllerPerfMarker_27; }
	inline void set_RemoveControllerPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveControllerPerfMarker_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * m_Items[1];

public:
	inline MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.OpenXR.HandJointLocation[]
struct HandJointLocationU5BU5D_t0C173328D87820623DD413A91272E04D79C80EA4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HandJointLocation_t6417344072BEE803CA511D7582144CE369974CC2  m_Items[1];

public:
	inline HandJointLocation_t6417344072BEE803CA511D7582144CE369974CC2  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HandJointLocation_t6417344072BEE803CA511D7582144CE369974CC2 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HandJointLocation_t6417344072BEE803CA511D7582144CE369974CC2  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HandJointLocation_t6417344072BEE803CA511D7582144CE369974CC2  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HandJointLocation_t6417344072BEE803CA511D7582144CE369974CC2 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HandJointLocation_t6417344072BEE803CA511D7582144CE369974CC2  value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.OpenXR.HandJoint[]
struct HandJointU5BU5D_t3D62EFCC2E65FEB2D8C0E2A2E6A688D8395010CA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  m_Items[1];

public:
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m53DA92C371D548DD44E17EAA1EB21BE0CE8B4ED4_gshared (Dictionary_2_tAFEDE3C9AA32099A79643638296C906CB91D1ED1 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m8B6D2B3B16F427C0629E5656A3402F1568B990B4_gshared (Dictionary_2_tAFEDE3C9AA32099A79643638296C906CB91D1ED1 * __this, int32_t ___key0, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * ___value1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mBF1FE08B9E63353FDC7B861F23217F7FBF1B9EB6_gshared (Dictionary_2_tAFEDE3C9AA32099A79643638296C906CB91D1ED1 * __this, int32_t ___key0, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___value1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_gshared_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_gshared (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, bool ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_gshared_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m78A3936F86E71AA975058C9A3A497E01B52528BB_gshared (Dictionary_2_t35F6DA04C7EFC816B6AD81C46497F41CA75EFB0F * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___key0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t69255059E5B8EAE1A58D06178D7144DFB54D890B * Dictionary_2_get_Keys_mA4D39CE34B8D878C1F28B76FC7FCBD334FD76D31_gshared (Dictionary_2_t35F6DA04C7EFC816B6AD81C46497F41CA75EFB0F * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.InputDevice,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCF9AEEA909BF6824FB035022FD283DBA24CFE3D4  KeyCollection_GetEnumerator_m23C5D4AFBE744FC1E7863EB68821C115C23FA1DE_gshared (KeyCollection_t69255059E5B8EAE1A58D06178D7144DFB54D890B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.XR.InputDevice,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  Enumerator_get_Current_m6D4612E5C4CC04DA20E93A9B46F46F4E419322FF_gshared_inline (Enumerator_tCF9AEEA909BF6824FB035022FD283DBA24CFE3D4 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m92879B727AF55DE471833AA4C69EF4E2F2182A52_gshared (Dictionary_2_t35F6DA04C7EFC816B6AD81C46497F41CA75EFB0F * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1306C86C5809CB81EF4B1C56DC8EB0E468FB2FD4_gshared (Dictionary_2_t35F6DA04C7EFC816B6AD81C46497F41CA75EFB0F * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.XR.InputDevice,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1B292EE11954C476B4AC5A8A464FDEE26DC70D76_gshared (Enumerator_tCF9AEEA909BF6824FB035022FD283DBA24CFE3D4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.XR.InputDevice,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mBA36B68FC93FE701E28C4866F90BE4A13CEFDD2C_gshared (Enumerator_tCF9AEEA909BF6824FB035022FD283DBA24CFE3D4 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mC4ADE4DEED04A700D5AB254DF933BBFF5247542B_gshared (Dictionary_2_t35F6DA04C7EFC816B6AD81C46497F41CA75EFB0F * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___key0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_gshared_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  List_1_get_Item_m69B586C86E7A415FDE5732E94E28549EAAE35DD7_gshared_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::get_Service()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m985BA1C94F0384130AB1AFBCBB9A7866A9BD75B7_gshared_inline (BaseDataProvider_1_t5472B645E25171C2E317D45F750D5FF28CC299CF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  MixedRealityPose_get_ZeroIdentity_m95D9F3844DD9A90DAEC2046FE9152D721CCF19D2_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.HPMotionControllerDefinition::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPMotionControllerDefinition__ctor_m22E65395AFB87602E52E3EBDD5432223D6699155 (HPMotionControllerDefinition_t575691F70AFFC019E7F3003F94054872691E1E14 * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[],Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController__ctor_m7A614E451D0964103F9223A7E495FB49F2C599E3 (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___interactions3, RuntimeObject* ___definition4, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m9B40B8FAD5FED79E840DA7064A7A48FD9AA61C1A (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___usage0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___value1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_TransformPoint_m19E4EA2C7A16830A9C76F73E557E44D6817211F3 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m773EB94276F208A7BA4555B67A819F3E47BB72B6_inline (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___usage0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value1, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPlayspace_get_Rotation_m4C3F294754D54E4604AFEEB0E8399BFF5933DF05 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m880A6F5D3947A513E13FEDE089FE7C677A58B27D_inline (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_PoseData(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_PoseData_m8E3311E7A47A01E6C295AECCF128E00E8BFBE5FB (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_Changed_m22D457FF63C2D11B9EE602F6C777206085B9B2C8 (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::get_InputSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::get_ControllerHandedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PoseData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  MixedRealityInteractionMapping_get_PoseData_m1FE5A5F111B5E311D5532B2754B6232EED0344E2_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdatePoseData_m93FCF8BE2D1D842B80FFAE13D50A5F437E2F3F40 (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
inline void Dictionary_2__ctor_mEBA54D53782CDC8695416345EA43239C678D9804 (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 *, const RuntimeMethod*))Dictionary_2__ctor_m53DA92C371D548DD44E17EAA1EB21BE0CE8B4ED4_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition__ctor_m88202268E417A42F6970E2B27CDAE8113F3F1496 (ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * __this, RuntimeObject* ___source0, uint8_t ___handedness1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::get_Right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * OpenXRHandMeshProvider_get_Right_m2972BB0FC0827E9F3D561B305215686E2E1A2FBF_inline (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::get_Left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * OpenXRHandMeshProvider_get_Left_m5BD6A2487D5447F05110B73C7634BACD047D673C_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::SetInputSource(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRHandMeshProvider_SetInputSource_m553D4F04015E2A930BBC39C330EF164D88E485F6_inline (OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * __this, RuntimeObject* ___inputSource0, const RuntimeMethod* method);
// Microsoft.MixedReality.OpenXR.HandTracker Microsoft.MixedReality.OpenXR.HandTracker::get_Right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * HandTracker_get_Right_m65535255C8267CCABFFDD58A6BE59F4DBCCAB159_inline (const RuntimeMethod* method);
// Microsoft.MixedReality.OpenXR.HandTracker Microsoft.MixedReality.OpenXR.HandTracker::get_Left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * HandTracker_get_Left_m708C38E9BC40B0FBEB07E9163C3148E8007A1A7F_inline (const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m9CC878FE7F12DF8B4C25C62C80A68ECAC784E0C0 (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * __this, int32_t ___key0, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 *, int32_t, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m8B6D2B3B16F427C0629E5656A3402F1568B990B4_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArticulatedHandDefinition_get_IsInPointingPose_m321BFC0307BB8CB312C4D342CDC5934DB9DB788E (ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_Enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m745CDDA851D0C022D2705E1E225AD97095F9200E_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_Interactions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_Enabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_Enabled_m7215364614CFBF1B603CDC712914188512C7EC86_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateController_m4863A07EA619069FE1989D8576497DAB99D9F51F (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdateHandData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftArticulatedHand_UpdateHandData_m2236A33038FCB1F13C533E7CB9F31118E80323A9 (MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_AxisType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_AxisType_mDA08F6F89AC029C3E7A9E9735E461A7C4569F308_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184 (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Single>,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m531D0670B4FBDA6CD5B8E899627B70F3DB840E69 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___usage0, float* ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_BoolData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_BoolData_m03B2CF34CC007394B4B0B3FD0240F117234ADA6C (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateSingleAxisData_m6760DE3E99BB65723586EFBA1D591E10A5E91597 (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m5D39EBEE43023C9782742ECC3700D75CD8AF9875_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___usage0, bool* ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateButtonData_m718BAC7ADD76632A1AE25DAC2CF4B4A60B4DB994 (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentIndexPose(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateCurrentIndexPose_m1E0B044B733AE6DEE1B540B464B3FCD1A74C1AAB (ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::UpdateHandMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandMeshProvider_UpdateHandMesh_m1BBC53D3D3B8B9F5D7B443752CE968DD6003A664 (OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.OpenXR.HandTracker::TryLocateHandJoints(Microsoft.MixedReality.OpenXR.FrameTime,Microsoft.MixedReality.OpenXR.HandJointLocation[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandTracker_TryLocateHandJoints_mB8FE6A877DE60EF653018450D6157F8205CB71D4 (HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * __this, int32_t ___frameTime0, HandJointLocationU5BU5D_t0C173328D87820623DD413A91272E04D79C80EA4* ___handJointLocations1, const RuntimeMethod* method);
// UnityEngine.Pose Microsoft.MixedReality.OpenXR.HandJointLocation::get_Pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  HandJointLocation_get_Pose_mEC69083D5F01D41D2737848B69B570C88771B652_inline (HandJointLocation_t6417344072BEE803CA511D7582144CE369974CC2 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::ConvertToTrackedHandJoint(Microsoft.MixedReality.OpenXR.HandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MicrosoftArticulatedHand_ConvertToTrackedHandJoint_mAD63B7DB97D52105BB3377D0328B726BFCFA213A (MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313 * __this, int32_t ___handJoint0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPose__ctor_m0722BE081AA8822BC7EE321C14172F2D9B0B2A9D (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mF484F413794D98215D2E5F187E5AE70CB0E01197 (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * __this, int32_t ___key0, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 *, int32_t, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 , const RuntimeMethod*))Dictionary_2_set_Item_mBF1FE08B9E63353FDC7B861F23217F7FBF1B9EB6_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateHandJoints(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateHandJoints_m232530C5E22F8A78E1E4ACD18785250386FAF02E (ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * __this, Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * ___jointPoses0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityControllerDefinition::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityControllerDefinition__ctor_mE6AD8D3F28BD1F60B5934E99B1C288FA0A209DC9 (WindowsMixedRealityControllerDefinition_tDABBC06841C17A28BEA058F9E4F9E015459E80FD * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager__ctor_m2D76961360C555DC9C9A647977055630DE5D1AA1 (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___profile3, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *, const RuntimeMethod*))Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
inline void Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *, bool, const RuntimeMethod*))Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
inline bool Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_gshared_inline)(__this, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRDeviceManager_get_IsActiveLoader_m27AE9E59B61B1CD7127251C95548AE6C71C78D51 (OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_m0009FE0AE05820A130A513ADFC9CA5E119A00258 (BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mC2DACDF139CA610FD19BB15681E7E796D27DE866 (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E , const RuntimeMethod*))Dictionary_2_ContainsKey_m78A3936F86E71AA975058C9A3A497E01B52528BB_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::get_Keys()
inline KeyCollection_t566C065B2521EABF9CF07D2F81BA75B295ABDDD7 * Dictionary_2_get_Keys_m8EA720D9048B289CB2F05B5E9122D2D30B0ED728 (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t566C065B2521EABF9CF07D2F81BA75B295ABDDD7 * (*) (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E *, const RuntimeMethod*))Dictionary_2_get_Keys_mA4D39CE34B8D878C1F28B76FC7FCBD334FD76D31_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::GetEnumerator()
inline Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6  KeyCollection_GetEnumerator_m127ABABD841E78B6B461C88B063C12AC082CB5AB (KeyCollection_t566C065B2521EABF9CF07D2F81BA75B295ABDDD7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6  (*) (KeyCollection_t566C065B2521EABF9CF07D2F81BA75B295ABDDD7 *, const RuntimeMethod*))KeyCollection_GetEnumerator_m23C5D4AFBE744FC1E7863EB68821C115C23FA1DE_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::get_Current()
inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  Enumerator_get_Current_mF409E2E8BC93E91578B8150D2E683B99E19C4153_inline (Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6 * __this, const RuntimeMethod* method)
{
	return ((  InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  (*) (Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6 *, const RuntimeMethod*))Enumerator_get_Current_m6D4612E5C4CC04DA20E93A9B46F46F4E419322FF_gshared_inline)(__this, method);
}
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method);
// System.Boolean System.Enum::HasFlag(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E (RuntimeObject * __this, Enum_t23B90B40F60E677A8025267341651C94AE079CDA * ___flag0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::get_Item(!0)
inline GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * Dictionary_2_get_Item_m7DC25952CD75AF4D9E51FA6736618F8ED7285C02 (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___key0, const RuntimeMethod* method)
{
	return ((  GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * (*) (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E , const RuntimeMethod*))Dictionary_2_get_Item_m92879B727AF55DE471833AA4C69EF4E2F2182A52_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::Add(!0,!1)
inline void Dictionary_2_Add_mC3392A0E9E9EB05973D3080F10A7393E03AF070E (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___key0, GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E , GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 *, const RuntimeMethod*))Dictionary_2_Add_m1306C86C5809CB81EF4B1C56DC8EB0E468FB2FD4_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::MoveNext()
inline bool Enumerator_MoveNext_mB9245F902F320DD3F0552EE19729444EDD76FD85 (Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6 *, const RuntimeMethod*))Enumerator_MoveNext_m1B292EE11954C476B4AC5A8A464FDEE26DC70D76_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::Dispose()
inline void Enumerator_Dispose_mCE4968FB9071D1324CDE7BF43D8715218BBA0D37 (Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6 *, const RuntimeMethod*))Enumerator_Dispose_mBA36B68FC93FE701E28C4866F90BE4A13CEFDD2C_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * XRSDKDeviceManager_GetOrAddController_m7FA759CEEFA4932DBAAADBE321F7A449C7815761 (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::op_Inequality(UnityEngine.XR.InputDevice,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_op_Inequality_mC0E0A52D8A05FF9B5F8C3CE348C7293590189EC1 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___a0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___b1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::Remove(!0)
inline bool Dictionary_2_Remove_m9F5BA5B79A182AFDC2DF26CF50D5C1ABF31D5734 (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E , const RuntimeMethod*))Dictionary_2_Remove_mC4ADE4DEED04A700D5AB254DF933BBFF5247542B_gshared)(__this, ___key0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_RemoveController_mA1DE819FE32890F666B9666069C6DBC2E4DB1B33 (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * XRSDKDeviceManager_GetControllerType_m309CA4C4AE2810E368AF337AA4184DD4A059413F (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetInputSourceType_mECB86645E61238DABA9F19486FA60F9CD876A1E3 (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputDevice::get_manufacturer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputDevice_get_manufacturer_m9DA87EC52EA101D8C3141B0356D8701A6AE59590 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetCurrentControllerType_m1C93AC6F31F7A5DBC5B40BC6CD102131D13C9843 (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputDeviceManager__ctor_m97D08340B47B03586B4D1378C19B4DDEA831F443 (BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSmoother__ctor_m060DAE0A52E61BBF48584987FCE19BC80B349B31 (EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::add_OnSaccade(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSmoother_add_OnSaccade_m52B66A9B6DA24DE9ACC7F5943CD36081BCBC2BC7 (EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::add_OnSaccadeX(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSmoother_add_OnSaccadeX_m867524242EE0CA58956E168DA6273B818DB20BFF (EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::add_OnSaccadeY(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSmoother_add_OnSaccadeY_m88565C53FBE145DBCE7A7B1839AA3B5DFBBE90D7 (EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_get_isValid_mEC01F2DE9E9A9E1F612176B8B955F29864294DF6 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::ReadProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_ReadProfile_m96AE16B7A6CB9E1E8C09DB4B501AFFFEC9B2EB49 (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputDeviceManager_Initialize_m068C628E0CF2D1DA5F3C4E247FE67D0EE87893B7 (BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityEyeTrackingProfile::get_SmoothEyeTracking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityEyeTrackingProfile_get_SmoothEyeTracking_m25736B7BF0FF52B2987C8AA468840DD71ED72A55_inline (MixedRealityEyeTrackingProfile_tFFC54FF088BA636B718A9C98EA2DDD58D9303470 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::set_SmoothEyeTracking(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_set_SmoothEyeTracking_m1980739D1D874E20E91F320B85C4A7D2BE9B39CE_inline (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_m8AED20982C7D099E74435E41F8705FAE70ADBDEC (uint32_t ___desiredCharacteristics0, List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
inline int32_t List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, const RuntimeMethod*))List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Item(System.Int32)
inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  List_1_get_Item_m69B586C86E7A415FDE5732E94E28549EAAE35DD7_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, int32_t, const RuntimeMethod*))List_1_get_Item_m69B586C86E7A415FDE5732E94E28549EAAE35DD7_gshared_inline)(__this, ___index0, method);
}
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_inline (BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02 *, const RuntimeMethod*))BaseDataProvider_1_get_Service_m985BA1C94F0384130AB1AFBCBB9A7866A9BD75B7_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_TransformDirection_mE52A73F39EA7C15B7F0B307652A33B7B948E46BC (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localDirection0, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::get_SmoothEyeTracking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OpenXREyeGazeDataProvider_get_SmoothEyeTracking_m7D3F84914E96F90087A0989A62CDC7232D6B6A2F_inline (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, const RuntimeMethod* method);
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::SmoothGaze(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  EyeGazeSmoother_SmoothGaze_m20BCF917BF785222AED28D1E635BDD27BF350456 (EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___newGaze0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1 (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, const RuntimeMethod*))List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::get_HandTrackingProfile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740 * MixedRealityInputSystemProfile_get_HandTrackingProfile_mBD83606D970C31A86F0CEFEDF22A439F26DA6348_inline (MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::get_EnableHandMeshVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityHandTrackingProfile_get_EnableHandMeshVisualization_mB1C8922664D969C06CF0C470F266449F11A18FD9 (MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshInfo__ctor_mF4BF2BE9557A7E06F8B77039AAF285ADC9864882 (HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.OpenXR.HandMeshTracker::TryGetHandMesh(Microsoft.MixedReality.OpenXR.FrameTime,UnityEngine.Mesh,Microsoft.MixedReality.OpenXR.HandPoseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandMeshTracker_TryGetHandMesh_m47B073A5300E55CC93A59C05DD28EF96C7739566 (HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * __this, int32_t ___frameTime0, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___handMesh1, int32_t ___handPoseType2, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::InitializeUVs(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* OpenXRHandMeshProvider_InitializeUVs_m419BCC916CC8D0B8D14CD5D118F6684E23B8E80D (OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___neutralPoseVertices0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.OpenXR.HandMeshTracker::TryLocateHandMesh(Microsoft.MixedReality.OpenXR.FrameTime,UnityEngine.Pose&,Microsoft.MixedReality.OpenXR.HandPoseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandMeshTracker_TryLocateHandMesh_mF8FED4EFDF402198B60E71BD7E6D07AF73BE16B5 (HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * __this, int32_t ___frameTime0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___pose1, int32_t ___handPoseType2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::GetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetVertices_mCC533BC8D4A9F14BA1A54BABB11B01750C153015 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___vertices0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::GetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetNormals_m6B9DD7FDA70DF058D215915597BCBF6450D6E243 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___normals0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::GetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetTriangles_m2A219EA6034D366619F22C912BF4BB911E2D06FB (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___triangles0, int32_t ___submesh1, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.OpenXR.HandMeshTracker Microsoft.MixedReality.OpenXR.HandMeshTracker::get_Left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * HandMeshTracker_get_Left_m834FB22088CF46F9EF46DAC8731E6DF270106FAF_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::.ctor(Microsoft.MixedReality.OpenXR.HandMeshTracker,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandMeshProvider__ctor_mCE84B2318182A1177CEE0394C87B028FA54E1EC5 (OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * __this, HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * ___handMeshTracker0, uint8_t ___handedness1, const RuntimeMethod* method);
// Microsoft.MixedReality.OpenXR.HandMeshTracker Microsoft.MixedReality.OpenXR.HandMeshTracker::get_Right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * HandMeshTracker_get_Right_m6705D8B2C8AB6513519C4B8D8738FE36DFC33731_inline (const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4 (intptr_t ___markerPtr0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HPReverbG2Controller::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPReverbG2Controller__ctor_mB41FE639B32F6FD48411A48DE34DFDDA8CD9ABD3 (HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPMotionControllerDefinition_t575691F70AFFC019E7F3003F94054872691E1E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 currentPointerPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_currentPointerPosition_21(L_0);
		// private Quaternion currentPointerRotation = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		__this->set_currentPointerRotation_22(L_1);
		// private MixedRealityPose currentPointerPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_2;
		L_2 = MixedRealityPose_get_ZeroIdentity_m95D9F3844DD9A90DAEC2046FE9152D721CCF19D2_inline(/*hidden argument*/NULL);
		__this->set_currentPointerPose_23(L_2);
		// : base(trackingState, controllerHandedness, inputSource, interactions, new HPMotionControllerDefinition(controllerHandedness))
		int32_t L_3 = ___trackingState0;
		uint8_t L_4 = ___controllerHandedness1;
		RuntimeObject* L_5 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_6 = ___interactions3;
		uint8_t L_7 = ___controllerHandedness1;
		HPMotionControllerDefinition_t575691F70AFFC019E7F3003F94054872691E1E14 * L_8 = (HPMotionControllerDefinition_t575691F70AFFC019E7F3003F94054872691E1E14 *)il2cpp_codegen_object_new(HPMotionControllerDefinition_t575691F70AFFC019E7F3003F94054872691E1E14_il2cpp_TypeInfo_var);
		HPMotionControllerDefinition__ctor_m22E65395AFB87602E52E3EBDD5432223D6699155(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		GenericXRSDKController__ctor_m7A614E451D0964103F9223A7E495FB49F2C599E3(__this, L_3, L_4, L_5, L_6, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HPReverbG2Controller::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPReverbG2Controller_UpdatePoseData_m7B16A66113842861D52307BAF9CD5062076C07AE (HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	{
		// using (UpdatePoseDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8_StaticFields*)il2cpp_codegen_static_fields_for(HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8_il2cpp_TypeInfo_var))->get_UpdatePoseDataPerfMarker_24();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline(L_2, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_3) == ((uint32_t)3))))
			{
				goto IL_00b1;
			}
		}

IL_001a:
		{
			// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerPosition, out currentPointerPosition))
			IL2CPP_RUNTIME_CLASS_INIT(CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_4 = ((CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var))->get_PointerPosition_0();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_currentPointerPosition_21();
			bool L_6;
			L_6 = InputDevice_TryGetFeatureValue_m9B40B8FAD5FED79E840DA7064A7A48FD9AA61C1A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_4, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0044;
			}
		}

IL_002e:
		{
			// currentPointerPose.Position = MixedRealityPlayspace.TransformPoint(currentPointerPosition);
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * L_7 = __this->get_address_of_currentPointerPose_23();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_currentPointerPosition_21();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = MixedRealityPlayspace_TransformPoint_m19E4EA2C7A16830A9C76F73E557E44D6817211F3(L_8, /*hidden argument*/NULL);
			MixedRealityPose_set_Position_m773EB94276F208A7BA4555B67A819F3E47BB72B6_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)L_7, L_9, /*hidden argument*/NULL);
		}

IL_0044:
		{
			// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerRotation, out currentPointerRotation))
			IL2CPP_RUNTIME_CLASS_INIT(CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  L_10 = ((CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var))->get_PointerRotation_1();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_11 = __this->get_address_of_currentPointerRotation_22();
			bool L_12;
			L_12 = InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_10, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0073;
			}
		}

IL_0058:
		{
			// currentPointerPose.Rotation = MixedRealityPlayspace.Rotation * currentPointerRotation;
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * L_13 = __this->get_address_of_currentPointerPose_23();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
			L_14 = MixedRealityPlayspace_get_Rotation_m4C3F294754D54E4604AFEEB0E8399BFF5933DF05(/*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = __this->get_currentPointerRotation_22();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
			L_16 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_14, L_15, /*hidden argument*/NULL);
			MixedRealityPose_set_Rotation_m880A6F5D3947A513E13FEDE089FE7C677A58B27D_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)L_13, L_16, /*hidden argument*/NULL);
		}

IL_0073:
		{
			// interactionMapping.PoseData = currentPointerPose;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_17 = ___interactionMapping0;
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_18 = __this->get_currentPointerPose_23();
			NullCheck(L_17);
			MixedRealityInteractionMapping_set_PoseData_m8E3311E7A47A01E6C295AECCF128E00E8BFBE5FB(L_17, L_18, /*hidden argument*/NULL);
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_19 = ___interactionMapping0;
			NullCheck(L_19);
			bool L_20;
			L_20 = MixedRealityInteractionMapping_get_Changed_m22D457FF63C2D11B9EE602F6C777206085B9B2C8(L_19, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_00b9;
			}
		}

IL_0087:
		{
			// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.PoseData);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_21;
			L_21 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_22 = L_21;
			G_B8_0 = L_22;
			if (L_22)
			{
				G_B9_0 = L_22;
				goto IL_0092;
			}
		}

IL_008f:
		{
			IL2CPP_LEAVE(0xC9, FINALLY_00bb);
		}

IL_0092:
		{
			RuntimeObject* L_23;
			L_23 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			uint8_t L_24;
			L_24 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_25 = ___interactionMapping0;
			NullCheck(L_25);
			MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_26;
			L_26 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline(L_25, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_27 = ___interactionMapping0;
			NullCheck(L_27);
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_28;
			L_28 = MixedRealityInteractionMapping_get_PoseData_m1FE5A5F111B5E311D5532B2754B6232EED0344E2_inline(L_27, /*hidden argument*/NULL);
			NullCheck(G_B9_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 , MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B9_0, L_23, L_24, L_26, L_28);
			// break;
			IL2CPP_LEAVE(0xC9, FINALLY_00bb);
		}

IL_00b1:
		{
			// base.UpdatePoseData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_29 = ___interactionMapping0;
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_30 = ___inputDevice1;
			GenericXRSDKController_UpdatePoseData_m93FCF8BE2D1D842B80FFAE13D50A5F437E2F3F40(__this, L_29, L_30, /*hidden argument*/NULL);
		}

IL_00b9:
		{
			// }
			IL2CPP_LEAVE(0xC9, FINALLY_00bb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bb;
	}

FINALLY_00bb:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(187)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(187)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC9, IL_00c9)
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HPReverbG2Controller::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPReverbG2Controller__cctor_m48A17915B69BE635E5E45DB3571C266D13130BE7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5FA4BC17D3659FB38B6BBA49E9EC577A2E3A449);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePoseDataPerfMarker = new ProfilerMarker("[MRTK] HPReverbG2Controller.UpdatePoseData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteralE5FA4BC17D3659FB38B6BBA49E9EC577A2E3A449, /*hidden argument*/NULL);
		((HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8_StaticFields*)il2cpp_codegen_static_fields_for(HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8_il2cpp_TypeInfo_var))->set_UpdatePoseDataPerfMarker_24(L_0);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftArticulatedHand__ctor_m78D3805F951CBD09B28167E8F071F9F645D62743 (MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEBA54D53782CDC8695416345EA43239C678D9804_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandJointLocationU5BU5D_t0C173328D87820623DD413A91272E04D79C80EA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTracker_t3327910B18D234F06B185BFA99047E30046D0957_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313 * G_B2_0 = NULL;
	MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313 * G_B1_0 = NULL;
	OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * G_B3_0 = NULL;
	MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313 * G_B3_1 = NULL;
	OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * G_B5_0 = NULL;
	OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * G_B4_0 = NULL;
	MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313 * G_B8_0 = NULL;
	MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313 * G_B7_0 = NULL;
	HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * G_B9_0 = NULL;
	MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313 * G_B9_1 = NULL;
	{
		// protected readonly Dictionary<TrackedHandJoint, MixedRealityPose> unityJointPoses = new Dictionary<TrackedHandJoint, MixedRealityPose>();
		Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_0 = (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 *)il2cpp_codegen_object_new(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEBA54D53782CDC8695416345EA43239C678D9804(L_0, /*hidden argument*/Dictionary_2__ctor_mEBA54D53782CDC8695416345EA43239C678D9804_RuntimeMethod_var);
		__this->set_unityJointPoses_23(L_0);
		// private Vector3 currentPointerPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_currentPointerPosition_24(L_1);
		// private Quaternion currentPointerRotation = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		__this->set_currentPointerRotation_25(L_2);
		// private MixedRealityPose currentPointerPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_3;
		L_3 = MixedRealityPose_get_ZeroIdentity_m95D9F3844DD9A90DAEC2046FE9152D721CCF19D2_inline(/*hidden argument*/NULL);
		__this->set_currentPointerPose_26(L_3);
		// private readonly HandJointLocation[] locations = new HandJointLocation[HandTracker.JointCount];
		HandJointLocationU5BU5D_t0C173328D87820623DD413A91272E04D79C80EA4* L_4 = (HandJointLocationU5BU5D_t0C173328D87820623DD413A91272E04D79C80EA4*)(HandJointLocationU5BU5D_t0C173328D87820623DD413A91272E04D79C80EA4*)SZArrayNew(HandJointLocationU5BU5D_t0C173328D87820623DD413A91272E04D79C80EA4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->set_locations_29(L_4);
		// : base(trackingState, controllerHandedness, inputSource, interactions, new ArticulatedHandDefinition(inputSource, controllerHandedness))
		int32_t L_5 = ___trackingState0;
		uint8_t L_6 = ___controllerHandedness1;
		RuntimeObject* L_7 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_8 = ___interactions3;
		RuntimeObject* L_9 = ___inputSource2;
		uint8_t L_10 = ___controllerHandedness1;
		ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * L_11 = (ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 *)il2cpp_codegen_object_new(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0_il2cpp_TypeInfo_var);
		ArticulatedHandDefinition__ctor_m88202268E417A42F6970E2B27CDAE8113F3F1496(L_11, L_9, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		GenericXRSDKController__ctor_m7A614E451D0964103F9223A7E495FB49F2C599E3(__this, L_5, L_6, L_7, L_8, L_11, /*hidden argument*/NULL);
		// handDefinition = Definition as ArticulatedHandDefinition;
		RuntimeObject* L_12;
		L_12 = VirtFuncInvoker0< RuntimeObject* >::Invoke(20 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition Microsoft.MixedReality.Toolkit.Input.BaseController::get_Definition() */, __this);
		__this->set_handDefinition_21(((ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 *)IsInstClass((RuntimeObject*)L_12, ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0_il2cpp_TypeInfo_var)));
		// handMeshProvider = controllerHandedness == Handedness.Left ? OpenXRHandMeshProvider.Left : OpenXRHandMeshProvider.Right;
		uint8_t L_13 = ___controllerHandedness1;
		G_B1_0 = __this;
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			G_B2_0 = __this;
			goto IL_0068;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var);
		OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * L_14;
		L_14 = OpenXRHandMeshProvider_get_Right_m2972BB0FC0827E9F3D561B305215686E2E1A2FBF_inline(/*hidden argument*/NULL);
		G_B3_0 = L_14;
		G_B3_1 = G_B1_0;
		goto IL_006d;
	}

IL_0068:
	{
		IL2CPP_RUNTIME_CLASS_INIT(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var);
		OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * L_15;
		L_15 = OpenXRHandMeshProvider_get_Left_m5BD6A2487D5447F05110B73C7634BACD047D673C_inline(/*hidden argument*/NULL);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_0;
	}

IL_006d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_handMeshProvider_22(G_B3_0);
		// handMeshProvider?.SetInputSource(inputSource);
		OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * L_16 = __this->get_handMeshProvider_22();
		OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * L_17 = L_16;
		G_B4_0 = L_17;
		if (L_17)
		{
			G_B5_0 = L_17;
			goto IL_007e;
		}
	}
	{
		goto IL_0084;
	}

IL_007e:
	{
		RuntimeObject* L_18 = ___inputSource2;
		NullCheck(G_B5_0);
		OpenXRHandMeshProvider_SetInputSource_m553D4F04015E2A930BBC39C330EF164D88E485F6_inline(G_B5_0, L_18, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// handTracker = controllerHandedness == Handedness.Left ? HandTracker.Left : HandTracker.Right;
		uint8_t L_19 = ___controllerHandedness1;
		G_B7_0 = __this;
		if ((((int32_t)L_19) == ((int32_t)1)))
		{
			G_B8_0 = __this;
			goto IL_0090;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HandTracker_t3327910B18D234F06B185BFA99047E30046D0957_il2cpp_TypeInfo_var);
		HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * L_20;
		L_20 = HandTracker_get_Right_m65535255C8267CCABFFDD58A6BE59F4DBCCAB159_inline(/*hidden argument*/NULL);
		G_B9_0 = L_20;
		G_B9_1 = G_B7_0;
		goto IL_0095;
	}

IL_0090:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HandTracker_t3327910B18D234F06B185BFA99047E30046D0957_il2cpp_TypeInfo_var);
		HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * L_21;
		L_21 = HandTracker_get_Left_m708C38E9BC40B0FBEB07E9163C3148E8007A1A7F_inline(/*hidden argument*/NULL);
		G_B9_0 = L_21;
		G_B9_1 = G_B8_0;
	}

IL_0095:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_handTracker_28(G_B9_0);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MicrosoftArticulatedHand_TryGetJoint_mF4F07E8BF259FFC1088C0DEFE50F7469AEFA3415 (MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313 * __this, int32_t ___joint0, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m9CC878FE7F12DF8B4C25C62C80A68ECAC784E0C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool TryGetJoint(TrackedHandJoint joint, out MixedRealityPose pose) => unityJointPoses.TryGetValue(joint, out pose);
		Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_0 = __this->get_unityJointPoses_23();
		int32_t L_1 = ___joint0;
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m9CC878FE7F12DF8B4C25C62C80A68ECAC784E0C0(L_0, L_1, (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m9CC878FE7F12DF8B4C25C62C80A68ECAC784E0C0_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MicrosoftArticulatedHand_get_IsInPointingPose_m471294C59F6F5AFAB6C7ACAD6B0A98E800AD611C (MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313 * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsInPointingPose => handDefinition.IsInPointingPose;
		ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * L_0 = __this->get_handDefinition_21();
		NullCheck(L_0);
		bool L_1;
		L_1 = ArticulatedHandDefinition_get_IsInPointingPose_m321BFC0307BB8CB312C4D342CDC5934DB9DB788E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftArticulatedHand_UpdateController_mCB2E32C6D0E1CB07B85562E37533F929536F2CD4 (MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBABDBD5000A085E82E4D1F28B12069391E261AA);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	int32_t G_B14_1 = 0;
	{
		// if (!Enabled) { return; }
		bool L_0;
		L_0 = BaseController_get_Enabled_m745CDDA851D0C022D2705E1E225AD97095F9200E_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!Enabled) { return; }
		return;
	}

IL_0009:
	{
		// if (Interactions == null)
		MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_1;
		L_1 = BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		// Debug.LogError($"No interaction configuration for {GetType().Name}");
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralBBABDBD5000A085E82E4D1F28B12069391E261AA, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_4, /*hidden argument*/NULL);
		// Enabled = false;
		BaseController_set_Enabled_m7215364614CFBF1B603CDC712914188512C7EC86_inline(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// using (UpdateControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_5 = ((MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var))->get_UpdateControllerPerfMarker_30();
		V_1 = L_5;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_6;
		L_6 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 _))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_7 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_devicePosition_19();
			bool L_8;
			L_8 = InputDevice_TryGetFeatureValue_m9B40B8FAD5FED79E840DA7064A7A48FD9AA61C1A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), L_7, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0059;
			}
		}

IL_0050:
		{
			// base.UpdateController(inputDevice);
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_9 = ___inputDevice0;
			GenericXRSDKController_UpdateController_m4863A07EA619069FE1989D8576497DAB99D9F51F(__this, L_9, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0xCA, FINALLY_00bc);
		}

IL_0059:
		{
			// UpdateHandData(inputDevice);
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_10 = ___inputDevice0;
			MicrosoftArticulatedHand_UpdateHandData_m2236A33038FCB1F13C533E7CB9F31118E80323A9(__this, L_10, /*hidden argument*/NULL);
			// for (int i = 0; i < Interactions?.Length; i++)
			V_3 = 0;
			goto IL_0087;
		}

IL_0064:
		{
			// switch (Interactions[i].AxisType)
			MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_11;
			L_11 = BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline(__this, /*hidden argument*/NULL);
			int32_t L_12 = V_3;
			NullCheck(L_11);
			int32_t L_13 = L_12;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
			NullCheck(L_14);
			int32_t L_15;
			L_15 = MixedRealityInteractionMapping_get_AxisType_mDA08F6F89AC029C3E7A9E9735E461A7C4569F308_inline(L_14, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_15) == ((uint32_t)7))))
			{
				goto IL_0083;
			}
		}

IL_0074:
		{
			// UpdatePoseData(Interactions[i], inputDevice);
			MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_16;
			L_16 = BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline(__this, /*hidden argument*/NULL);
			int32_t L_17 = V_3;
			NullCheck(L_16);
			int32_t L_18 = L_17;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_20 = ___inputDevice0;
			VirtActionInvoker2< MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  >::Invoke(30 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice) */, __this, L_19, L_20);
		}

IL_0083:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_21 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		}

IL_0087:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_22 = V_3;
			MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_23;
			L_23 = BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_24 = L_23;
			G_B12_0 = L_24;
			G_B12_1 = L_22;
			if (L_24)
			{
				G_B13_0 = L_24;
				G_B13_1 = L_22;
				goto IL_009e;
			}
		}

IL_0091:
		{
			il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_25 = V_5;
			G_B14_0 = L_25;
			G_B14_1 = G_B12_1;
			goto IL_00a5;
		}

IL_009e:
		{
			NullCheck(G_B13_0);
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_26;
			memset((&L_26), 0, sizeof(L_26));
			Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_26), ((int32_t)((int32_t)(((RuntimeArray*)G_B13_0)->max_length))), /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
			G_B14_0 = L_26;
			G_B14_1 = G_B13_1;
		}

IL_00a5:
		{
			V_4 = G_B14_0;
			int32_t L_27;
			L_27 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
			bool L_28;
			L_28 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
			if (((int32_t)((int32_t)((((int32_t)G_B14_1) < ((int32_t)L_27))? 1 : 0)&(int32_t)L_28)))
			{
				goto IL_0064;
			}
		}

IL_00ba:
		{
			// }
			IL2CPP_LEAVE(0xCA, FINALLY_00bc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bc;
	}

FINALLY_00bc:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(188)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(188)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xCA, IL_00ca)
	}

IL_00ca:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdateSingleAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftArticulatedHand_UpdateSingleAxisData_m1208E8EC12512D72245FCB6C889244D547D53419 (MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		// using (UpdateSingleAxisDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var))->get_UpdateSingleAxisDataPerfMarker_31();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline(L_2, /*hidden argument*/NULL);
			V_3 = L_3;
			int32_t L_4 = V_3;
			if ((((int32_t)L_4) == ((int32_t)((int32_t)13))))
			{
				goto IL_001f;
			}
		}

IL_001a:
		{
			int32_t L_5 = V_3;
			if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)60)))))
			{
				goto IL_0042;
			}
		}

IL_001f:
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.grip, out float gripAmount))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  L_6 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_grip_16();
			bool L_7;
			L_7 = InputDevice_TryGetFeatureValue_m531D0670B4FBDA6CD5B8E899627B70F3DB840E69((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_6, (float*)(&V_2), /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_004c;
			}
		}

IL_002f:
		{
			// interactionMapping.BoolData = Mathf.Approximately(gripAmount, 1.0f);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_8 = ___interactionMapping0;
			float L_9 = V_2;
			bool L_10;
			L_10 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_9, (1.0f), /*hidden argument*/NULL);
			NullCheck(L_8);
			MixedRealityInteractionMapping_set_BoolData_m03B2CF34CC007394B4B0B3FD0240F117234ADA6C(L_8, L_10, /*hidden argument*/NULL);
			// break;
			goto IL_004c;
		}

IL_0042:
		{
			// base.UpdateSingleAxisData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_11 = ___interactionMapping0;
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_12 = ___inputDevice1;
			GenericXRSDKController_UpdateSingleAxisData_m6760DE3E99BB65723586EFBA1D591E10A5E91597(__this, L_11, L_12, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0xB2, FINALLY_00a4);
		}

IL_004c:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_13 = ___interactionMapping0;
			NullCheck(L_13);
			bool L_14;
			L_14 = MixedRealityInteractionMapping_get_Changed_m22D457FF63C2D11B9EE602F6C777206085B9B2C8(L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_00a2;
			}
		}

IL_0054:
		{
			// if (interactionMapping.BoolData)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_15 = ___interactionMapping0;
			NullCheck(L_15);
			bool L_16;
			L_16 = MixedRealityInteractionMapping_get_BoolData_m5D39EBEE43023C9782742ECC3700D75CD8AF9875_inline(L_15, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_0080;
			}
		}

IL_005c:
		{
			// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_17;
			L_17 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_18 = L_17;
			G_B9_0 = L_18;
			if (L_18)
			{
				G_B10_0 = L_18;
				goto IL_0067;
			}
		}

IL_0064:
		{
			IL2CPP_LEAVE(0xB2, FINALLY_00a4);
		}

IL_0067:
		{
			RuntimeObject* L_19;
			L_19 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			uint8_t L_20;
			L_20 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_21 = ___interactionMapping0;
			NullCheck(L_21);
			MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_22;
			L_22 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline(L_21, /*hidden argument*/NULL);
			NullCheck(G_B10_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B10_0, L_19, L_20, L_22);
			// }
			IL2CPP_LEAVE(0xB2, FINALLY_00a4);
		}

IL_0080:
		{
			// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_23;
			L_23 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_24 = L_23;
			G_B12_0 = L_24;
			if (L_24)
			{
				G_B13_0 = L_24;
				goto IL_008b;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0xB2, FINALLY_00a4);
		}

IL_008b:
		{
			RuntimeObject* L_25;
			L_25 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			uint8_t L_26;
			L_26 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_27 = ___interactionMapping0;
			NullCheck(L_27);
			MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_28;
			L_28 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline(L_27, /*hidden argument*/NULL);
			NullCheck(G_B13_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B13_0, L_25, L_26, L_28);
		}

IL_00a2:
		{
			// }
			IL2CPP_LEAVE(0xB2, FINALLY_00a4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a4;
	}

FINALLY_00a4:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(164)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(164)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB2, IL_00b2)
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftArticulatedHand_UpdateButtonData_mDA8A80522C1021D10713ED0ADD683B20C375CEE1 (MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	{
		// using (UpdateButtonDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var))->get_UpdateButtonDataPerfMarker_32();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline(L_2, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)25)))))
			{
				goto IL_0031;
			}
		}

IL_0018:
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.primaryButton, out bool buttonPressed))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_4 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primaryButton_1();
			bool L_5;
			L_5 = InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_4, (bool*)(&V_2), /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_003b;
			}
		}

IL_0028:
		{
			// interactionMapping.BoolData = buttonPressed;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_6 = ___interactionMapping0;
			bool L_7 = V_2;
			NullCheck(L_6);
			MixedRealityInteractionMapping_set_BoolData_m03B2CF34CC007394B4B0B3FD0240F117234ADA6C(L_6, L_7, /*hidden argument*/NULL);
			// break;
			goto IL_003b;
		}

IL_0031:
		{
			// base.UpdateButtonData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_8 = ___interactionMapping0;
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_9 = ___inputDevice1;
			GenericXRSDKController_UpdateButtonData_m718BAC7ADD76632A1AE25DAC2CF4B4A60B4DB994(__this, L_8, L_9, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0xA1, FINALLY_0093);
		}

IL_003b:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_10 = ___interactionMapping0;
			NullCheck(L_10);
			bool L_11;
			L_11 = MixedRealityInteractionMapping_get_Changed_m22D457FF63C2D11B9EE602F6C777206085B9B2C8(L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0091;
			}
		}

IL_0043:
		{
			// if (interactionMapping.BoolData)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_12 = ___interactionMapping0;
			NullCheck(L_12);
			bool L_13;
			L_13 = MixedRealityInteractionMapping_get_BoolData_m5D39EBEE43023C9782742ECC3700D75CD8AF9875_inline(L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_006f;
			}
		}

IL_004b:
		{
			// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_14;
			L_14 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_15 = L_14;
			G_B8_0 = L_15;
			if (L_15)
			{
				G_B9_0 = L_15;
				goto IL_0056;
			}
		}

IL_0053:
		{
			IL2CPP_LEAVE(0xA1, FINALLY_0093);
		}

IL_0056:
		{
			RuntimeObject* L_16;
			L_16 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			uint8_t L_17;
			L_17 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_18 = ___interactionMapping0;
			NullCheck(L_18);
			MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_19;
			L_19 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline(L_18, /*hidden argument*/NULL);
			NullCheck(G_B9_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B9_0, L_16, L_17, L_19);
			// }
			IL2CPP_LEAVE(0xA1, FINALLY_0093);
		}

IL_006f:
		{
			// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_20;
			L_20 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_21 = L_20;
			G_B11_0 = L_21;
			if (L_21)
			{
				G_B12_0 = L_21;
				goto IL_007a;
			}
		}

IL_0077:
		{
			IL2CPP_LEAVE(0xA1, FINALLY_0093);
		}

IL_007a:
		{
			RuntimeObject* L_22;
			L_22 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			uint8_t L_23;
			L_23 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_24 = ___interactionMapping0;
			NullCheck(L_24);
			MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_25;
			L_25 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline(L_24, /*hidden argument*/NULL);
			NullCheck(G_B12_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B12_0, L_22, L_23, L_25);
		}

IL_0091:
		{
			// }
			IL2CPP_LEAVE(0xA1, FINALLY_0093);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0093;
	}

FINALLY_0093:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(147)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA1, IL_00a1)
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftArticulatedHand_UpdatePoseData_m28BBD0A1F1B7ECA8D968A507B5E86FC2090F8AB9 (MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * G_B5_0 = NULL;
	ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * G_B4_0 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		// using (UpdatePoseDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var))->get_UpdatePoseDataPerfMarker_33();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline(L_2, /*hidden argument*/NULL);
			V_2 = L_3;
			int32_t L_4 = V_2;
			if ((((int32_t)L_4) == ((int32_t)3)))
			{
				goto IL_003b;
			}
		}

IL_0019:
		{
			int32_t L_5 = V_2;
			if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)33)))))
			{
				goto IL_00d2;
			}
		}

IL_0021:
		{
			// handDefinition?.UpdateCurrentIndexPose(interactionMapping);
			ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * L_6 = __this->get_handDefinition_21();
			ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * L_7 = L_6;
			G_B4_0 = L_7;
			if (L_7)
			{
				G_B5_0 = L_7;
				goto IL_0030;
			}
		}

IL_002a:
		{
			IL2CPP_LEAVE(0xEA, FINALLY_00dc);
		}

IL_0030:
		{
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_8 = ___interactionMapping0;
			NullCheck(G_B5_0);
			ArticulatedHandDefinition_UpdateCurrentIndexPose_m1E0B044B733AE6DEE1B540B464B3FCD1A74C1AAB(G_B5_0, L_8, /*hidden argument*/NULL);
			// break;
			IL2CPP_LEAVE(0xEA, FINALLY_00dc);
		}

IL_003b:
		{
			// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerPosition, out currentPointerPosition))
			IL2CPP_RUNTIME_CLASS_INIT(CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_9 = ((CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var))->get_PointerPosition_0();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_currentPointerPosition_24();
			bool L_11;
			L_11 = InputDevice_TryGetFeatureValue_m9B40B8FAD5FED79E840DA7064A7A48FD9AA61C1A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_9, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0065;
			}
		}

IL_004f:
		{
			// currentPointerPose.Position = MixedRealityPlayspace.TransformPoint(currentPointerPosition);
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * L_12 = __this->get_address_of_currentPointerPose_26();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_currentPointerPosition_24();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
			L_14 = MixedRealityPlayspace_TransformPoint_m19E4EA2C7A16830A9C76F73E557E44D6817211F3(L_13, /*hidden argument*/NULL);
			MixedRealityPose_set_Position_m773EB94276F208A7BA4555B67A819F3E47BB72B6_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)L_12, L_14, /*hidden argument*/NULL);
		}

IL_0065:
		{
			// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerRotation, out currentPointerRotation))
			IL2CPP_RUNTIME_CLASS_INIT(CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  L_15 = ((CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var))->get_PointerRotation_1();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_16 = __this->get_address_of_currentPointerRotation_25();
			bool L_17;
			L_17 = InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_15, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_0094;
			}
		}

IL_0079:
		{
			// currentPointerPose.Rotation = MixedRealityPlayspace.Rotation * currentPointerRotation;
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * L_18 = __this->get_address_of_currentPointerPose_26();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
			L_19 = MixedRealityPlayspace_get_Rotation_m4C3F294754D54E4604AFEEB0E8399BFF5933DF05(/*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20 = __this->get_currentPointerRotation_25();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21;
			L_21 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_19, L_20, /*hidden argument*/NULL);
			MixedRealityPose_set_Rotation_m880A6F5D3947A513E13FEDE089FE7C677A58B27D_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)L_18, L_21, /*hidden argument*/NULL);
		}

IL_0094:
		{
			// interactionMapping.PoseData = currentPointerPose;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_22 = ___interactionMapping0;
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_23 = __this->get_currentPointerPose_26();
			NullCheck(L_22);
			MixedRealityInteractionMapping_set_PoseData_m8E3311E7A47A01E6C295AECCF128E00E8BFBE5FB(L_22, L_23, /*hidden argument*/NULL);
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_24 = ___interactionMapping0;
			NullCheck(L_24);
			bool L_25;
			L_25 = MixedRealityInteractionMapping_get_Changed_m22D457FF63C2D11B9EE602F6C777206085B9B2C8(L_24, /*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_00da;
			}
		}

IL_00a8:
		{
			// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.PoseData);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_26;
			L_26 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_27 = L_26;
			G_B12_0 = L_27;
			if (L_27)
			{
				G_B13_0 = L_27;
				goto IL_00b3;
			}
		}

IL_00b0:
		{
			IL2CPP_LEAVE(0xEA, FINALLY_00dc);
		}

IL_00b3:
		{
			RuntimeObject* L_28;
			L_28 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			uint8_t L_29;
			L_29 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_30 = ___interactionMapping0;
			NullCheck(L_30);
			MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_31;
			L_31 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline(L_30, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_32 = ___interactionMapping0;
			NullCheck(L_32);
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_33;
			L_33 = MixedRealityInteractionMapping_get_PoseData_m1FE5A5F111B5E311D5532B2754B6232EED0344E2_inline(L_32, /*hidden argument*/NULL);
			NullCheck(G_B13_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 , MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B13_0, L_28, L_29, L_31, L_33);
			// break;
			IL2CPP_LEAVE(0xEA, FINALLY_00dc);
		}

IL_00d2:
		{
			// base.UpdatePoseData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_34 = ___interactionMapping0;
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_35 = ___inputDevice1;
			GenericXRSDKController_UpdatePoseData_m93FCF8BE2D1D842B80FFAE13D50A5F437E2F3F40(__this, L_34, L_35, /*hidden argument*/NULL);
		}

IL_00da:
		{
			// }
			IL2CPP_LEAVE(0xEA, FINALLY_00dc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00dc;
	}

FINALLY_00dc:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(220)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(220)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xEA, IL_00ea)
	}

IL_00ea:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdateHandData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftArticulatedHand_UpdateHandData_m2236A33038FCB1F13C533E7CB9F31118E80323A9 (MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF484F413794D98215D2E5F187E5AE70CB0E01197_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	HandJointU5BU5D_t3D62EFCC2E65FEB2D8C0E2A2E6A688D8395010CA* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	HandJointLocation_t6417344072BEE803CA511D7582144CE369974CC2  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * G_B3_0 = NULL;
	OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * G_B2_0 = NULL;
	ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * G_B11_0 = NULL;
	ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * G_B10_0 = NULL;
	{
		// using (UpdateHandDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var))->get_UpdateHandDataPerfMarker_34();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// handMeshProvider?.UpdateHandMesh();
			OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * L_2 = __this->get_handMeshProvider_22();
			OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * L_3 = L_2;
			G_B2_0 = L_3;
			if (L_3)
			{
				G_B3_0 = L_3;
				goto IL_001a;
			}
		}

IL_0017:
		{
			goto IL_001f;
		}

IL_001a:
		{
			NullCheck(G_B3_0);
			OpenXRHandMeshProvider_UpdateHandMesh_m1BBC53D3D3B8B9F5D7B443752CE968DD6003A664(G_B3_0, /*hidden argument*/NULL);
		}

IL_001f:
		{
			// if (handTracker != null && handTracker.TryLocateHandJoints(FrameTime.OnUpdate, locations))
			HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * L_4 = __this->get_handTracker_28();
			if (!L_4)
			{
				goto IL_00c7;
			}
		}

IL_002a:
		{
			HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * L_5 = __this->get_handTracker_28();
			HandJointLocationU5BU5D_t0C173328D87820623DD413A91272E04D79C80EA4* L_6 = __this->get_locations_29();
			NullCheck(L_5);
			bool L_7;
			L_7 = HandTracker_TryLocateHandJoints_mB8FE6A877DE60EF653018450D6157F8205CB71D4(L_5, 0, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_00c7;
			}
		}

IL_0041:
		{
			// foreach (HandJoint handJoint in HandJoints)
			IL2CPP_RUNTIME_CLASS_INIT(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var);
			HandJointU5BU5D_t3D62EFCC2E65FEB2D8C0E2A2E6A688D8395010CA* L_8 = ((MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var))->get_HandJoints_27();
			V_2 = L_8;
			V_3 = 0;
			goto IL_00aa;
		}

IL_004b:
		{
			// foreach (HandJoint handJoint in HandJoints)
			HandJointU5BU5D_t3D62EFCC2E65FEB2D8C0E2A2E6A688D8395010CA* L_9 = V_2;
			int32_t L_10 = V_3;
			NullCheck(L_9);
			int32_t L_11 = L_10;
			int32_t L_12 = (int32_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			V_4 = L_12;
			// HandJointLocation handJointLocation = locations[(int)handJoint];
			HandJointLocationU5BU5D_t0C173328D87820623DD413A91272E04D79C80EA4* L_13 = __this->get_locations_29();
			int32_t L_14 = V_4;
			NullCheck(L_13);
			int32_t L_15 = L_14;
			HandJointLocation_t6417344072BEE803CA511D7582144CE369974CC2  L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			V_5 = L_16;
			// Vector3 position = MixedRealityPlayspace.TransformPoint(handJointLocation.Pose.position);
			Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_17;
			L_17 = HandJointLocation_get_Pose_mEC69083D5F01D41D2737848B69B570C88771B652_inline((HandJointLocation_t6417344072BEE803CA511D7582144CE369974CC2 *)(&V_5), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = L_17.get_position_0();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
			L_19 = MixedRealityPlayspace_TransformPoint_m19E4EA2C7A16830A9C76F73E557E44D6817211F3(L_18, /*hidden argument*/NULL);
			V_6 = L_19;
			// Quaternion rotation = MixedRealityPlayspace.Rotation * handJointLocation.Pose.rotation;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
			L_20 = MixedRealityPlayspace_get_Rotation_m4C3F294754D54E4604AFEEB0E8399BFF5933DF05(/*hidden argument*/NULL);
			Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_21;
			L_21 = HandJointLocation_get_Pose_mEC69083D5F01D41D2737848B69B570C88771B652_inline((HandJointLocation_t6417344072BEE803CA511D7582144CE369974CC2 *)(&V_5), /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22 = L_21.get_rotation_1();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
			L_23 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_20, L_22, /*hidden argument*/NULL);
			V_7 = L_23;
			// unityJointPoses[ConvertToTrackedHandJoint(handJoint)] = new MixedRealityPose(position, rotation);
			Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_24 = __this->get_unityJointPoses_23();
			int32_t L_25 = V_4;
			int32_t L_26;
			L_26 = MicrosoftArticulatedHand_ConvertToTrackedHandJoint_mAD63B7DB97D52105BB3377D0328B726BFCFA213A(__this, L_25, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_6;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_28 = V_7;
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_29;
			memset((&L_29), 0, sizeof(L_29));
			MixedRealityPose__ctor_m0722BE081AA8822BC7EE321C14172F2D9B0B2A9D((&L_29), L_27, L_28, /*hidden argument*/NULL);
			NullCheck(L_24);
			Dictionary_2_set_Item_mF484F413794D98215D2E5F187E5AE70CB0E01197(L_24, L_26, L_29, /*hidden argument*/Dictionary_2_set_Item_mF484F413794D98215D2E5F187E5AE70CB0E01197_RuntimeMethod_var);
			int32_t L_30 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		}

IL_00aa:
		{
			// foreach (HandJoint handJoint in HandJoints)
			int32_t L_31 = V_3;
			HandJointU5BU5D_t3D62EFCC2E65FEB2D8C0E2A2E6A688D8395010CA* L_32 = V_2;
			NullCheck(L_32);
			if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
			{
				goto IL_004b;
			}
		}

IL_00b0:
		{
			// handDefinition?.UpdateHandJoints(unityJointPoses);
			ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * L_33 = __this->get_handDefinition_21();
			ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * L_34 = L_33;
			G_B10_0 = L_34;
			if (L_34)
			{
				G_B11_0 = L_34;
				goto IL_00bc;
			}
		}

IL_00b9:
		{
			IL2CPP_LEAVE(0xD7, FINALLY_00c9);
		}

IL_00bc:
		{
			Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_35 = __this->get_unityJointPoses_23();
			NullCheck(G_B11_0);
			ArticulatedHandDefinition_UpdateHandJoints_m232530C5E22F8A78E1E4ACD18785250386FAF02E(G_B11_0, L_35, /*hidden argument*/NULL);
		}

IL_00c7:
		{
			// }
			IL2CPP_LEAVE(0xD7, FINALLY_00c9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c9;
	}

FINALLY_00c9:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(201)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(201)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xD7, IL_00d7)
	}

IL_00d7:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::ConvertToTrackedHandJoint(Microsoft.MixedReality.OpenXR.HandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MicrosoftArticulatedHand_ConvertToTrackedHandJoint_mAD63B7DB97D52105BB3377D0328B726BFCFA213A (MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313 * __this, int32_t ___handJoint0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___handJoint0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0070;
			}
			case 1:
			{
				goto IL_0072;
			}
			case 2:
			{
				goto IL_0074;
			}
			case 3:
			{
				goto IL_0076;
			}
			case 4:
			{
				goto IL_0078;
			}
			case 5:
			{
				goto IL_007a;
			}
			case 6:
			{
				goto IL_007c;
			}
			case 7:
			{
				goto IL_007e;
			}
			case 8:
			{
				goto IL_0080;
			}
			case 9:
			{
				goto IL_0083;
			}
			case 10:
			{
				goto IL_0086;
			}
			case 11:
			{
				goto IL_0089;
			}
			case 12:
			{
				goto IL_008c;
			}
			case 13:
			{
				goto IL_008f;
			}
			case 14:
			{
				goto IL_0092;
			}
			case 15:
			{
				goto IL_0095;
			}
			case 16:
			{
				goto IL_0098;
			}
			case 17:
			{
				goto IL_009b;
			}
			case 18:
			{
				goto IL_009e;
			}
			case 19:
			{
				goto IL_00a1;
			}
			case 20:
			{
				goto IL_00a4;
			}
			case 21:
			{
				goto IL_00a7;
			}
			case 22:
			{
				goto IL_00aa;
			}
			case 23:
			{
				goto IL_00ad;
			}
			case 24:
			{
				goto IL_00b0;
			}
			case 25:
			{
				goto IL_00b3;
			}
		}
	}
	{
		goto IL_00b6;
	}

IL_0070:
	{
		// case HandJoint.Palm: return TrackedHandJoint.Palm;
		return (int32_t)(2);
	}

IL_0072:
	{
		// case HandJoint.Wrist: return TrackedHandJoint.Wrist;
		return (int32_t)(1);
	}

IL_0074:
	{
		// case HandJoint.ThumbMetacarpal: return TrackedHandJoint.ThumbMetacarpalJoint;
		return (int32_t)(3);
	}

IL_0076:
	{
		// case HandJoint.ThumbProximal: return TrackedHandJoint.ThumbProximalJoint;
		return (int32_t)(4);
	}

IL_0078:
	{
		// case HandJoint.ThumbDistal: return TrackedHandJoint.ThumbDistalJoint;
		return (int32_t)(5);
	}

IL_007a:
	{
		// case HandJoint.ThumbTip: return TrackedHandJoint.ThumbTip;
		return (int32_t)(6);
	}

IL_007c:
	{
		// case HandJoint.IndexMetacarpal: return TrackedHandJoint.IndexMetacarpal;
		return (int32_t)(7);
	}

IL_007e:
	{
		// case HandJoint.IndexProximal: return TrackedHandJoint.IndexKnuckle;
		return (int32_t)(8);
	}

IL_0080:
	{
		// case HandJoint.IndexIntermediate: return TrackedHandJoint.IndexMiddleJoint;
		return (int32_t)(((int32_t)9));
	}

IL_0083:
	{
		// case HandJoint.IndexDistal: return TrackedHandJoint.IndexDistalJoint;
		return (int32_t)(((int32_t)10));
	}

IL_0086:
	{
		// case HandJoint.IndexTip: return TrackedHandJoint.IndexTip;
		return (int32_t)(((int32_t)11));
	}

IL_0089:
	{
		// case HandJoint.MiddleMetacarpal: return TrackedHandJoint.MiddleMetacarpal;
		return (int32_t)(((int32_t)12));
	}

IL_008c:
	{
		// case HandJoint.MiddleProximal: return TrackedHandJoint.MiddleKnuckle;
		return (int32_t)(((int32_t)13));
	}

IL_008f:
	{
		// case HandJoint.MiddleIntermediate: return TrackedHandJoint.MiddleMiddleJoint;
		return (int32_t)(((int32_t)14));
	}

IL_0092:
	{
		// case HandJoint.MiddleDistal: return TrackedHandJoint.MiddleDistalJoint;
		return (int32_t)(((int32_t)15));
	}

IL_0095:
	{
		// case HandJoint.MiddleTip: return TrackedHandJoint.MiddleTip;
		return (int32_t)(((int32_t)16));
	}

IL_0098:
	{
		// case HandJoint.RingMetacarpal: return TrackedHandJoint.RingMetacarpal;
		return (int32_t)(((int32_t)17));
	}

IL_009b:
	{
		// case HandJoint.RingProximal: return TrackedHandJoint.RingKnuckle;
		return (int32_t)(((int32_t)18));
	}

IL_009e:
	{
		// case HandJoint.RingIntermediate: return TrackedHandJoint.RingMiddleJoint;
		return (int32_t)(((int32_t)19));
	}

IL_00a1:
	{
		// case HandJoint.RingDistal: return TrackedHandJoint.RingDistalJoint;
		return (int32_t)(((int32_t)20));
	}

IL_00a4:
	{
		// case HandJoint.RingTip: return TrackedHandJoint.RingTip;
		return (int32_t)(((int32_t)21));
	}

IL_00a7:
	{
		// case HandJoint.LittleMetacarpal: return TrackedHandJoint.PinkyMetacarpal;
		return (int32_t)(((int32_t)22));
	}

IL_00aa:
	{
		// case HandJoint.LittleProximal: return TrackedHandJoint.PinkyKnuckle;
		return (int32_t)(((int32_t)23));
	}

IL_00ad:
	{
		// case HandJoint.LittleIntermediate: return TrackedHandJoint.PinkyMiddleJoint;
		return (int32_t)(((int32_t)24));
	}

IL_00b0:
	{
		// case HandJoint.LittleDistal: return TrackedHandJoint.PinkyDistalJoint;
		return (int32_t)(((int32_t)25));
	}

IL_00b3:
	{
		// case HandJoint.LittleTip: return TrackedHandJoint.PinkyTip;
		return (int32_t)(((int32_t)26));
	}

IL_00b6:
	{
		// default: return TrackedHandJoint.None;
		return (int32_t)(0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftArticulatedHand__cctor_m9B32E57ED56E94986C10E91A014B60D4BFDD3742 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandJointU5BU5D_t3D62EFCC2E65FEB2D8C0E2A2E6A688D8395010CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandJoint_t92CF9529350840E74720B9B155F0A0655D7C1972_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785C543519EB6E0B5983BDD07361B07451B939E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80D1648E8FE647DFFDBAD4B89EC0DB2877CCB220);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB225114D2C3857BE9E73DA5D5C96CEF5957D1AC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3BA1DAEB772EC12A843CE87109432F8ACE760C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6EED814CF57561BB951430F9A6E99A9476E9744);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly HandJoint[] HandJoints = Enum.GetValues(typeof(HandJoint)) as HandJoint[];
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (HandJoint_t92CF9529350840E74720B9B155F0A0655D7C1972_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_2;
		L_2 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_1, /*hidden argument*/NULL);
		((MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var))->set_HandJoints_27(((HandJointU5BU5D_t3D62EFCC2E65FEB2D8C0E2A2E6A688D8395010CA*)IsInst((RuntimeObject*)L_2, HandJointU5BU5D_t3D62EFCC2E65FEB2D8C0E2A2E6A688D8395010CA_il2cpp_TypeInfo_var)));
		// private static readonly ProfilerMarker UpdateControllerPerfMarker = new ProfilerMarker("[MRTK] MicrosoftArticulatedHand.UpdateController");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_3), _stringLiteralB225114D2C3857BE9E73DA5D5C96CEF5957D1AC1, /*hidden argument*/NULL);
		((MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var))->set_UpdateControllerPerfMarker_30(L_3);
		// private static readonly ProfilerMarker UpdateSingleAxisDataPerfMarker = new ProfilerMarker("[MRTK] MicrosoftArticulatedHand.UpdateSingleAxisData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_4), _stringLiteral80D1648E8FE647DFFDBAD4B89EC0DB2877CCB220, /*hidden argument*/NULL);
		((MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var))->set_UpdateSingleAxisDataPerfMarker_31(L_4);
		// private static readonly ProfilerMarker UpdateButtonDataPerfMarker = new ProfilerMarker("[MRTK] MicrosoftArticulatedHand.UpdateButtonData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_5), _stringLiteral785C543519EB6E0B5983BDD07361B07451B939E6, /*hidden argument*/NULL);
		((MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var))->set_UpdateButtonDataPerfMarker_32(L_5);
		// private static readonly ProfilerMarker UpdatePoseDataPerfMarker = new ProfilerMarker("[MRTK] MicrosoftArticulatedHand.UpdatePoseData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_6), _stringLiteralF6EED814CF57561BB951430F9A6E99A9476E9744, /*hidden argument*/NULL);
		((MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var))->set_UpdatePoseDataPerfMarker_33(L_6);
		// private static readonly ProfilerMarker UpdateHandDataPerfMarker = new ProfilerMarker("[MRTK] MicrosoftArticulatedHand.UpdateHandData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_7;
		memset((&L_7), 0, sizeof(L_7));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_7), _stringLiteralB3BA1DAEB772EC12A843CE87109432F8ACE760C0, /*hidden argument*/NULL);
		((MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_il2cpp_TypeInfo_var))->set_UpdateHandDataPerfMarker_34(L_7);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftMotionController__ctor_m0F22EA4480C3EB8463BB1428DCCB76F769DA3933 (MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityControllerDefinition_tDABBC06841C17A28BEA058F9E4F9E015459E80FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 currentPointerPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_currentPointerPosition_21(L_0);
		// private Quaternion currentPointerRotation = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		__this->set_currentPointerRotation_22(L_1);
		// private MixedRealityPose currentPointerPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_2;
		L_2 = MixedRealityPose_get_ZeroIdentity_m95D9F3844DD9A90DAEC2046FE9152D721CCF19D2_inline(/*hidden argument*/NULL);
		__this->set_currentPointerPose_23(L_2);
		// : base(trackingState, controllerHandedness, inputSource, interactions, new WindowsMixedRealityControllerDefinition(controllerHandedness))
		int32_t L_3 = ___trackingState0;
		uint8_t L_4 = ___controllerHandedness1;
		RuntimeObject* L_5 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_6 = ___interactions3;
		uint8_t L_7 = ___controllerHandedness1;
		WindowsMixedRealityControllerDefinition_tDABBC06841C17A28BEA058F9E4F9E015459E80FD * L_8 = (WindowsMixedRealityControllerDefinition_tDABBC06841C17A28BEA058F9E4F9E015459E80FD *)il2cpp_codegen_object_new(WindowsMixedRealityControllerDefinition_tDABBC06841C17A28BEA058F9E4F9E015459E80FD_il2cpp_TypeInfo_var);
		WindowsMixedRealityControllerDefinition__ctor_mE6AD8D3F28BD1F60B5934E99B1C288FA0A209DC9(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		GenericXRSDKController__ctor_m7A614E451D0964103F9223A7E495FB49F2C599E3(__this, L_3, L_4, L_5, L_6, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftMotionController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftMotionController_UpdatePoseData_m7314AF59BA3672326712FA069352BE6227D0B0AD (MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	{
		// using (UpdatePoseDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072_il2cpp_TypeInfo_var))->get_UpdatePoseDataPerfMarker_24();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline(L_2, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_3) == ((uint32_t)3))))
			{
				goto IL_00b1;
			}
		}

IL_001a:
		{
			// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerPosition, out currentPointerPosition))
			IL2CPP_RUNTIME_CLASS_INIT(CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_4 = ((CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var))->get_PointerPosition_0();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_currentPointerPosition_21();
			bool L_6;
			L_6 = InputDevice_TryGetFeatureValue_m9B40B8FAD5FED79E840DA7064A7A48FD9AA61C1A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_4, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0044;
			}
		}

IL_002e:
		{
			// currentPointerPose.Position = MixedRealityPlayspace.TransformPoint(currentPointerPosition);
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * L_7 = __this->get_address_of_currentPointerPose_23();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_currentPointerPosition_21();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = MixedRealityPlayspace_TransformPoint_m19E4EA2C7A16830A9C76F73E557E44D6817211F3(L_8, /*hidden argument*/NULL);
			MixedRealityPose_set_Position_m773EB94276F208A7BA4555B67A819F3E47BB72B6_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)L_7, L_9, /*hidden argument*/NULL);
		}

IL_0044:
		{
			// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerRotation, out currentPointerRotation))
			IL2CPP_RUNTIME_CLASS_INIT(CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  L_10 = ((CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var))->get_PointerRotation_1();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_11 = __this->get_address_of_currentPointerRotation_22();
			bool L_12;
			L_12 = InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_10, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0073;
			}
		}

IL_0058:
		{
			// currentPointerPose.Rotation = MixedRealityPlayspace.Rotation * currentPointerRotation;
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * L_13 = __this->get_address_of_currentPointerPose_23();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
			L_14 = MixedRealityPlayspace_get_Rotation_m4C3F294754D54E4604AFEEB0E8399BFF5933DF05(/*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = __this->get_currentPointerRotation_22();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
			L_16 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_14, L_15, /*hidden argument*/NULL);
			MixedRealityPose_set_Rotation_m880A6F5D3947A513E13FEDE089FE7C677A58B27D_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)L_13, L_16, /*hidden argument*/NULL);
		}

IL_0073:
		{
			// interactionMapping.PoseData = currentPointerPose;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_17 = ___interactionMapping0;
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_18 = __this->get_currentPointerPose_23();
			NullCheck(L_17);
			MixedRealityInteractionMapping_set_PoseData_m8E3311E7A47A01E6C295AECCF128E00E8BFBE5FB(L_17, L_18, /*hidden argument*/NULL);
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_19 = ___interactionMapping0;
			NullCheck(L_19);
			bool L_20;
			L_20 = MixedRealityInteractionMapping_get_Changed_m22D457FF63C2D11B9EE602F6C777206085B9B2C8(L_19, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_00b9;
			}
		}

IL_0087:
		{
			// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.PoseData);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_21;
			L_21 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_22 = L_21;
			G_B8_0 = L_22;
			if (L_22)
			{
				G_B9_0 = L_22;
				goto IL_0092;
			}
		}

IL_008f:
		{
			IL2CPP_LEAVE(0xC9, FINALLY_00bb);
		}

IL_0092:
		{
			RuntimeObject* L_23;
			L_23 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			uint8_t L_24;
			L_24 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_25 = ___interactionMapping0;
			NullCheck(L_25);
			MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_26;
			L_26 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline(L_25, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_27 = ___interactionMapping0;
			NullCheck(L_27);
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_28;
			L_28 = MixedRealityInteractionMapping_get_PoseData_m1FE5A5F111B5E311D5532B2754B6232EED0344E2_inline(L_27, /*hidden argument*/NULL);
			NullCheck(G_B9_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 , MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B9_0, L_23, L_24, L_26, L_28);
			// break;
			IL2CPP_LEAVE(0xC9, FINALLY_00bb);
		}

IL_00b1:
		{
			// base.UpdatePoseData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_29 = ___interactionMapping0;
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_30 = ___inputDevice1;
			GenericXRSDKController_UpdatePoseData_m93FCF8BE2D1D842B80FFAE13D50A5F437E2F3F40(__this, L_29, L_30, /*hidden argument*/NULL);
		}

IL_00b9:
		{
			// }
			IL2CPP_LEAVE(0xC9, FINALLY_00bb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bb;
	}

FINALLY_00bb:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(187)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(187)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC9, IL_00c9)
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftMotionController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftMotionController__cctor_m068E4B9CA2BCEF32A3EEBCFFF465DC8A62BA72B3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52BA95C20C03ADFBDAF6B5C64272DD4A5C9D1FE0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePoseDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityOpenXRController.UpdatePoseData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral52BA95C20C03ADFBDAF6B5C64272DD4A5C9D1FE0, /*hidden argument*/NULL);
		((MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072_il2cpp_TypeInfo_var))->set_UpdatePoseDataPerfMarker_24(L_0);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRDeviceManager__ctor_m9004CBCCD8513E5583018100EEE503012046234C (OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_0 = ___inputSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
		XRSDKDeviceManager__ctor_m2D76961360C555DC9C9A647977055630DE5D1AA1(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRDeviceManager_get_IsActiveLoader_m27AE9E59B61B1CD7127251C95548AE6C71C78D51 (OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_IsLoaderActive_TisOpenXRLoaderBase_t98E3D636562FBE383DF4829734DD3E6D1585CAED_m934DB800BFC1015113F202BEA09B003FD607ECE9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isActiveLoader.HasValue)
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * L_0 = __this->get_address_of_isActiveLoader_25();
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)L_0, /*hidden argument*/Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// isActiveLoader = IsLoaderActive<OpenXRLoaderBase>();
		bool L_2;
		L_2 = GenericVirtFuncInvoker0< bool >::Invoke(XRSDKDeviceManager_IsLoaderActive_TisOpenXRLoaderBase_t98E3D636562FBE383DF4829734DD3E6D1585CAED_m934DB800BFC1015113F202BEA09B003FD607ECE9_RuntimeMethod_var, __this);
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		__this->set_isActiveLoader_25(L_3);
	}

IL_001e:
	{
		// return isActiveLoader ?? false;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * L_4 = __this->get_address_of_isActiveLoader_25();
		bool L_5;
		L_5 = Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)L_4, /*hidden argument*/Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRDeviceManager_Enable_m488F9DAD0CD34DAE266BB82C1DCD223DEC6FDE65 (OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604 * __this, const RuntimeMethod* method)
{
	{
		// if (!IsActiveLoader)
		bool L_0;
		L_0 = OpenXRDeviceManager_get_IsActiveLoader_m27AE9E59B61B1CD7127251C95548AE6C71C78D51(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// IsEnabled = false;
		VirtActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// return;
		return;
	}

IL_0010:
	{
		// base.Enable();
		BaseService_Enable_m0009FE0AE05820A130A513ADFC9CA5E119A00258(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::GetOrAddController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * OpenXRDeviceManager_GetOrAddController_m5F74FD7890AA949EC8E70EF5444401500DB102F7 (OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC3392A0E9E9EB05973D3080F10A7393E03AF070E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC2DACDF139CA610FD19BB15681E7E796D27DE866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7DC25952CD75AF4D9E51FA6736618F8ED7285C02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m8EA720D9048B289CB2F05B5E9122D2D30B0ED728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCE4968FB9071D1324CDE7BF43D8715218BBA0D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB9245F902F320DD3F0552EE19729444EDD76FD85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF409E2E8BC93E91578B8150D2E683B99E19C4153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m127ABABD841E78B6B461C88B063C12AC082CB5AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6  V_3;
	memset((&V_3), 0, sizeof(V_3));
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		// using (GetOrAddControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604_il2cpp_TypeInfo_var))->get_GetOrAddControllerPerfMarker_26();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (!ActiveControllers.ContainsKey(inputDevice))
			IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
			Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * L_2 = ((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->get_ActiveControllers_17();
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_3 = ___inputDevice0;
			NullCheck(L_2);
			bool L_4;
			L_4 = Dictionary_2_ContainsKey_mC2DACDF139CA610FD19BB15681E7E796D27DE866(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_mC2DACDF139CA610FD19BB15681E7E796D27DE866_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0151;
			}
		}

IL_001e:
		{
			// foreach (InputDevice device in ActiveControllers.Keys)
			IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
			Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * L_5 = ((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->get_ActiveControllers_17();
			NullCheck(L_5);
			KeyCollection_t566C065B2521EABF9CF07D2F81BA75B295ABDDD7 * L_6;
			L_6 = Dictionary_2_get_Keys_m8EA720D9048B289CB2F05B5E9122D2D30B0ED728(L_5, /*hidden argument*/Dictionary_2_get_Keys_m8EA720D9048B289CB2F05B5E9122D2D30B0ED728_RuntimeMethod_var);
			NullCheck(L_6);
			Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6  L_7;
			L_7 = KeyCollection_GetEnumerator_m127ABABD841E78B6B461C88B063C12AC082CB5AB(L_6, /*hidden argument*/KeyCollection_GetEnumerator_m127ABABD841E78B6B461C88B063C12AC082CB5AB_RuntimeMethod_var);
			V_3 = L_7;
		}

IL_002e:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0135;
			}

IL_0033:
			{
				// foreach (InputDevice device in ActiveControllers.Keys)
				InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_8;
				L_8 = Enumerator_get_Current_mF409E2E8BC93E91578B8150D2E683B99E19C4153_inline((Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6 *)(&V_3), /*hidden argument*/Enumerator_get_Current_mF409E2E8BC93E91578B8150D2E683B99E19C4153_RuntimeMethod_var);
				V_4 = L_8;
				// if (((device.characteristics.HasFlag(InputDeviceCharacteristics.Controller) && inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Controller))
				//     || (device.characteristics.HasFlag(InputDeviceCharacteristics.HandTracking) && inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.HandTracking)))
				//     && ((device.characteristics.HasFlag(InputDeviceCharacteristics.Left) && inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Left))
				//     || (device.characteristics.HasFlag(InputDeviceCharacteristics.Right) && inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Right))))
				uint32_t L_9;
				L_9 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_4), /*hidden argument*/NULL);
				uint32_t L_10 = L_9;
				RuntimeObject * L_11 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_10);
				uint32_t L_12 = ((int32_t)64);
				RuntimeObject * L_13 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_12);
				NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_11);
				bool L_14;
				L_14 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_11, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_13, /*hidden argument*/NULL);
				if (!L_14)
				{
					goto IL_0070;
				}
			}

IL_0056:
			{
				uint32_t L_15;
				L_15 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
				uint32_t L_16 = L_15;
				RuntimeObject * L_17 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_16);
				uint32_t L_18 = ((int32_t)64);
				RuntimeObject * L_19 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_18);
				NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_17);
				bool L_20;
				L_20 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_17, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_19, /*hidden argument*/NULL);
				if (L_20)
				{
					goto IL_00a8;
				}
			}

IL_0070:
			{
				uint32_t L_21;
				L_21 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_4), /*hidden argument*/NULL);
				uint32_t L_22 = L_21;
				RuntimeObject * L_23 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_22);
				uint32_t L_24 = 8;
				RuntimeObject * L_25 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_24);
				NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_23);
				bool L_26;
				L_26 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_23, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_25, /*hidden argument*/NULL);
				if (!L_26)
				{
					goto IL_0135;
				}
			}

IL_008c:
			{
				uint32_t L_27;
				L_27 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
				uint32_t L_28 = L_27;
				RuntimeObject * L_29 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_28);
				uint32_t L_30 = 8;
				RuntimeObject * L_31 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_30);
				NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_29);
				bool L_32;
				L_32 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_29, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_31, /*hidden argument*/NULL);
				if (!L_32)
				{
					goto IL_0135;
				}
			}

IL_00a8:
			{
				uint32_t L_33;
				L_33 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_4), /*hidden argument*/NULL);
				uint32_t L_34 = L_33;
				RuntimeObject * L_35 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_34);
				uint32_t L_36 = ((int32_t)256);
				RuntimeObject * L_37 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_36);
				NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_35);
				bool L_38;
				L_38 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_35, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_37, /*hidden argument*/NULL);
				if (!L_38)
				{
					goto IL_00e2;
				}
			}

IL_00c5:
			{
				uint32_t L_39;
				L_39 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
				uint32_t L_40 = L_39;
				RuntimeObject * L_41 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_40);
				uint32_t L_42 = ((int32_t)256);
				RuntimeObject * L_43 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_42);
				NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_41);
				bool L_44;
				L_44 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_41, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_43, /*hidden argument*/NULL);
				if (L_44)
				{
					goto IL_011c;
				}
			}

IL_00e2:
			{
				uint32_t L_45;
				L_45 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_4), /*hidden argument*/NULL);
				uint32_t L_46 = L_45;
				RuntimeObject * L_47 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_46);
				uint32_t L_48 = ((int32_t)512);
				RuntimeObject * L_49 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_48);
				NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_47);
				bool L_50;
				L_50 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_47, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_49, /*hidden argument*/NULL);
				if (!L_50)
				{
					goto IL_0135;
				}
			}

IL_00ff:
			{
				uint32_t L_51;
				L_51 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
				uint32_t L_52 = L_51;
				RuntimeObject * L_53 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_52);
				uint32_t L_54 = ((int32_t)512);
				RuntimeObject * L_55 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_54);
				NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_53);
				bool L_56;
				L_56 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_53, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_55, /*hidden argument*/NULL);
				if (!L_56)
				{
					goto IL_0135;
				}
			}

IL_011c:
			{
				// ActiveControllers.Add(inputDevice, ActiveControllers[device]);
				IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
				Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * L_57 = ((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->get_ActiveControllers_17();
				InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_58 = ___inputDevice0;
				Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * L_59 = ((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->get_ActiveControllers_17();
				InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_60 = V_4;
				NullCheck(L_59);
				GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_61;
				L_61 = Dictionary_2_get_Item_m7DC25952CD75AF4D9E51FA6736618F8ED7285C02(L_59, L_60, /*hidden argument*/Dictionary_2_get_Item_m7DC25952CD75AF4D9E51FA6736618F8ED7285C02_RuntimeMethod_var);
				NullCheck(L_57);
				Dictionary_2_Add_mC3392A0E9E9EB05973D3080F10A7393E03AF070E(L_57, L_58, L_61, /*hidden argument*/Dictionary_2_Add_mC3392A0E9E9EB05973D3080F10A7393E03AF070E_RuntimeMethod_var);
				// break;
				IL2CPP_LEAVE(0x151, FINALLY_0143);
			}

IL_0135:
			{
				// foreach (InputDevice device in ActiveControllers.Keys)
				bool L_62;
				L_62 = Enumerator_MoveNext_mB9245F902F320DD3F0552EE19729444EDD76FD85((Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mB9245F902F320DD3F0552EE19729444EDD76FD85_RuntimeMethod_var);
				if (L_62)
				{
					goto IL_0033;
				}
			}

IL_0141:
			{
				IL2CPP_LEAVE(0x151, FINALLY_0143);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0143;
		}

FINALLY_0143:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mCE4968FB9071D1324CDE7BF43D8715218BBA0D37((Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mCE4968FB9071D1324CDE7BF43D8715218BBA0D37_RuntimeMethod_var);
			IL2CPP_END_FINALLY(323)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(323)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x151, IL_0151)
		}

IL_0151:
		{
			// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.HandTracking)
			//     && inputDevice.TryGetFeatureValue(CommonUsages.isTracked, out bool isTracked)
			//     && !isTracked)
			uint32_t L_63;
			L_63 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
			uint32_t L_64 = L_63;
			RuntimeObject * L_65 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_64);
			uint32_t L_66 = 8;
			RuntimeObject * L_67 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_66);
			NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_65);
			bool L_68;
			L_68 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_65, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_67, /*hidden argument*/NULL);
			if (!L_68)
			{
				goto IL_0182;
			}
		}

IL_016a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_69 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_isTracked_0();
			bool L_70;
			L_70 = InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), L_69, (bool*)(&V_2), /*hidden argument*/NULL);
			if (!L_70)
			{
				goto IL_0182;
			}
		}

IL_017a:
		{
			bool L_71 = V_2;
			if (L_71)
			{
				goto IL_0182;
			}
		}

IL_017d:
		{
			// return null;
			V_5 = (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 *)NULL;
			IL2CPP_LEAVE(0x19B, FINALLY_018d);
		}

IL_0182:
		{
			// return base.GetOrAddController(inputDevice);
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_72 = ___inputDevice0;
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_73;
			L_73 = XRSDKDeviceManager_GetOrAddController_m7FA759CEEFA4932DBAAADBE321F7A449C7815761(__this, L_72, /*hidden argument*/NULL);
			V_5 = L_73;
			IL2CPP_LEAVE(0x19B, FINALLY_018d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_018d;
	}

FINALLY_018d:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(397)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(397)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x19B, IL_019b)
	}

IL_019b:
	{
		// }
		GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_74 = V_5;
		return L_74;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::RemoveController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRDeviceManager_RemoveController_m1E303697F2313A7585BE0A79C6E2FB7AF3BA0F58 (OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m9F5BA5B79A182AFDC2DF26CF50D5C1ABF31D5734_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m8EA720D9048B289CB2F05B5E9122D2D30B0ED728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCE4968FB9071D1324CDE7BF43D8715218BBA0D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB9245F902F320DD3F0552EE19729444EDD76FD85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF409E2E8BC93E91578B8150D2E683B99E19C4153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m127ABABD841E78B6B461C88B063C12AC082CB5AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6  V_2;
	memset((&V_2), 0, sizeof(V_2));
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// using (RemoveControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604_il2cpp_TypeInfo_var))->get_RemoveControllerPerfMarker_27();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// foreach (InputDevice device in ActiveControllers.Keys)
			IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
			Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * L_2 = ((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->get_ActiveControllers_17();
			NullCheck(L_2);
			KeyCollection_t566C065B2521EABF9CF07D2F81BA75B295ABDDD7 * L_3;
			L_3 = Dictionary_2_get_Keys_m8EA720D9048B289CB2F05B5E9122D2D30B0ED728(L_2, /*hidden argument*/Dictionary_2_get_Keys_m8EA720D9048B289CB2F05B5E9122D2D30B0ED728_RuntimeMethod_var);
			NullCheck(L_3);
			Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6  L_4;
			L_4 = KeyCollection_GetEnumerator_m127ABABD841E78B6B461C88B063C12AC082CB5AB(L_3, /*hidden argument*/KeyCollection_GetEnumerator_m127ABABD841E78B6B461C88B063C12AC082CB5AB_RuntimeMethod_var);
			V_2 = L_4;
		}

IL_001e:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0125;
			}

IL_0023:
			{
				// foreach (InputDevice device in ActiveControllers.Keys)
				InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_5;
				L_5 = Enumerator_get_Current_mF409E2E8BC93E91578B8150D2E683B99E19C4153_inline((Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mF409E2E8BC93E91578B8150D2E683B99E19C4153_RuntimeMethod_var);
				V_3 = L_5;
				// if (device != inputDevice
				//     && ((device.characteristics.HasFlag(InputDeviceCharacteristics.Controller) && inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Controller))
				//     || (device.characteristics.HasFlag(InputDeviceCharacteristics.HandTracking) && inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.HandTracking)))
				//     && ((device.characteristics.HasFlag(InputDeviceCharacteristics.Left) && inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Left))
				//     || (device.characteristics.HasFlag(InputDeviceCharacteristics.Right) && inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Right))))
				InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_6 = V_3;
				InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_7 = ___inputDevice0;
				bool L_8;
				L_8 = InputDevice_op_Inequality_mC0E0A52D8A05FF9B5F8C3CE348C7293590189EC1(L_6, L_7, /*hidden argument*/NULL);
				if (!L_8)
				{
					goto IL_0125;
				}
			}

IL_0037:
			{
				uint32_t L_9;
				L_9 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_3), /*hidden argument*/NULL);
				uint32_t L_10 = L_9;
				RuntimeObject * L_11 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_10);
				uint32_t L_12 = ((int32_t)64);
				RuntimeObject * L_13 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_12);
				NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_11);
				bool L_14;
				L_14 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_11, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_13, /*hidden argument*/NULL);
				if (!L_14)
				{
					goto IL_006b;
				}
			}

IL_0051:
			{
				uint32_t L_15;
				L_15 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
				uint32_t L_16 = L_15;
				RuntimeObject * L_17 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_16);
				uint32_t L_18 = ((int32_t)64);
				RuntimeObject * L_19 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_18);
				NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_17);
				bool L_20;
				L_20 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_17, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_19, /*hidden argument*/NULL);
				if (L_20)
				{
					goto IL_00a3;
				}
			}

IL_006b:
			{
				uint32_t L_21;
				L_21 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_3), /*hidden argument*/NULL);
				uint32_t L_22 = L_21;
				RuntimeObject * L_23 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_22);
				uint32_t L_24 = 8;
				RuntimeObject * L_25 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_24);
				NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_23);
				bool L_26;
				L_26 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_23, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_25, /*hidden argument*/NULL);
				if (!L_26)
				{
					goto IL_0125;
				}
			}

IL_0087:
			{
				uint32_t L_27;
				L_27 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
				uint32_t L_28 = L_27;
				RuntimeObject * L_29 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_28);
				uint32_t L_30 = 8;
				RuntimeObject * L_31 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_30);
				NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_29);
				bool L_32;
				L_32 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_29, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_31, /*hidden argument*/NULL);
				if (!L_32)
				{
					goto IL_0125;
				}
			}

IL_00a3:
			{
				uint32_t L_33;
				L_33 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_3), /*hidden argument*/NULL);
				uint32_t L_34 = L_33;
				RuntimeObject * L_35 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_34);
				uint32_t L_36 = ((int32_t)256);
				RuntimeObject * L_37 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_36);
				NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_35);
				bool L_38;
				L_38 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_35, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_37, /*hidden argument*/NULL);
				if (!L_38)
				{
					goto IL_00dd;
				}
			}

IL_00c0:
			{
				uint32_t L_39;
				L_39 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
				uint32_t L_40 = L_39;
				RuntimeObject * L_41 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_40);
				uint32_t L_42 = ((int32_t)256);
				RuntimeObject * L_43 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_42);
				NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_41);
				bool L_44;
				L_44 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_41, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_43, /*hidden argument*/NULL);
				if (L_44)
				{
					goto IL_0117;
				}
			}

IL_00dd:
			{
				uint32_t L_45;
				L_45 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_3), /*hidden argument*/NULL);
				uint32_t L_46 = L_45;
				RuntimeObject * L_47 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_46);
				uint32_t L_48 = ((int32_t)512);
				RuntimeObject * L_49 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_48);
				NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_47);
				bool L_50;
				L_50 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_47, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_49, /*hidden argument*/NULL);
				if (!L_50)
				{
					goto IL_0125;
				}
			}

IL_00fa:
			{
				uint32_t L_51;
				L_51 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
				uint32_t L_52 = L_51;
				RuntimeObject * L_53 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_52);
				uint32_t L_54 = ((int32_t)512);
				RuntimeObject * L_55 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_54);
				NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_53);
				bool L_56;
				L_56 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_53, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_55, /*hidden argument*/NULL);
				if (!L_56)
				{
					goto IL_0125;
				}
			}

IL_0117:
			{
				// ActiveControllers.Remove(inputDevice);
				IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
				Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * L_57 = ((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->get_ActiveControllers_17();
				InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_58 = ___inputDevice0;
				NullCheck(L_57);
				bool L_59;
				L_59 = Dictionary_2_Remove_m9F5BA5B79A182AFDC2DF26CF50D5C1ABF31D5734(L_57, L_58, /*hidden argument*/Dictionary_2_Remove_m9F5BA5B79A182AFDC2DF26CF50D5C1ABF31D5734_RuntimeMethod_var);
				// return;
				IL2CPP_LEAVE(0x158, FINALLY_0133);
			}

IL_0125:
			{
				// foreach (InputDevice device in ActiveControllers.Keys)
				bool L_60;
				L_60 = Enumerator_MoveNext_mB9245F902F320DD3F0552EE19729444EDD76FD85((Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mB9245F902F320DD3F0552EE19729444EDD76FD85_RuntimeMethod_var);
				if (L_60)
				{
					goto IL_0023;
				}
			}

IL_0131:
			{
				IL2CPP_LEAVE(0x141, FINALLY_0133);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0133;
		}

FINALLY_0133:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mCE4968FB9071D1324CDE7BF43D8715218BBA0D37((Enumerator_tF99F29A2C65FA46A2A6FFBE26FD0318914E9C4C6 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mCE4968FB9071D1324CDE7BF43D8715218BBA0D37_RuntimeMethod_var);
			IL2CPP_END_FINALLY(307)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(307)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x158, FINALLY_014a);
			IL2CPP_JUMP_TBL(0x141, IL_0141)
		}

IL_0141:
		{
			// base.RemoveController(inputDevice);
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_61 = ___inputDevice0;
			XRSDKDeviceManager_RemoveController_mA1DE819FE32890F666B9666069C6DBC2E4DB1B33(__this, L_61, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x158, FINALLY_014a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_014a;
	}

FINALLY_014a:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(330)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(330)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x158, IL_0158)
	}

IL_0158:
	{
		// }
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * OpenXRDeviceManager_GetControllerType_m702EF5609B697D6379BB5E7F98861C1259FB3EFA (OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___supportedControllerType0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)32))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___supportedControllerType0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)1024))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_2 = ___supportedControllerType0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)4096))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0038;
	}

IL_0017:
	{
		// return typeof(MicrosoftMotionController);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (MicrosoftMotionController_t8634E22EE697FCF28EE5ECF952EE43694E4C9072_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0022:
	{
		// return typeof(HPReverbG2Controller);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (HPReverbG2Controller_tC519590018AB7D3743B7AA755899D1DF7080EAF8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_002d:
	{
		// return typeof(MicrosoftArticulatedHand);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (MicrosoftArticulatedHand_t74E31A3E8A61A20D52EF1E9461745625786DA313_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0038:
	{
		// return base.GetControllerType(supportedControllerType);
		int32_t L_9 = ___supportedControllerType0;
		Type_t * L_10;
		L_10 = XRSDKDeviceManager_GetControllerType_m309CA4C4AE2810E368AF337AA4184DD4A059413F(__this, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenXRDeviceManager_GetInputSourceType_m72320EE2F81B7E3E0E0789761FDA4E7B871386E5 (OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___supportedControllerType0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)32))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___supportedControllerType0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___supportedControllerType0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)4096)))))
		{
			goto IL_0019;
		}
	}

IL_0015:
	{
		// return InputSourceType.Controller;
		return (int32_t)(2);
	}

IL_0017:
	{
		// return InputSourceType.Hand;
		return (int32_t)(1);
	}

IL_0019:
	{
		// return base.GetInputSourceType(supportedControllerType);
		int32_t L_3 = ___supportedControllerType0;
		int32_t L_4;
		L_4 = XRSDKDeviceManager_GetInputSourceType_mECB86645E61238DABA9F19486FA60F9CD876A1E3(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenXRDeviceManager_GetCurrentControllerType_m361F8D2EAC7602ED1563AF8EC54C84EC6F88CD01 (OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral612C3797426144C3C776DE00617309EF6A458B06);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.HandTracking))
		uint32_t L_0;
		L_0 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_1);
		uint32_t L_3 = 8;
		RuntimeObject * L_4 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_3);
		NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_2);
		bool L_5;
		L_5 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_2, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		// return SupportedControllerType.ArticulatedHand;
		return (int32_t)(((int32_t)1024));
	}

IL_001f:
	{
		// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Controller))
		uint32_t L_6;
		L_6 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_7);
		uint32_t L_9 = ((int32_t)64);
		RuntimeObject * L_10 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_9);
		NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_8);
		bool L_11;
		L_11 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_8, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		// if (inputDevice.manufacturer == "HP")
		String_t* L_12;
		L_12 = InputDevice_get_manufacturer_m9DA87EC52EA101D8C3141B0356D8701A6AE59590((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteral612C3797426144C3C776DE00617309EF6A458B06, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0052;
		}
	}
	{
		// return SupportedControllerType.HPMotionController;
		return (int32_t)(((int32_t)4096));
	}

IL_0052:
	{
		// return SupportedControllerType.WindowsMixedReality;
		return (int32_t)(((int32_t)32));
	}

IL_0055:
	{
		// return base.GetCurrentControllerType(inputDevice);
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_14 = ___inputDevice0;
		int32_t L_15;
		L_15 = XRSDKDeviceManager_GetCurrentControllerType_m1C93AC6F31F7A5DBC5B40BC6CD102131D13C9843(__this, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRDeviceManager__cctor_mB24BC2C3B5EE842C8BFA0F90BACB7B6269440EF8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A15B6B283C98B4F62B301AF4050963B9F35C000);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87645AC8450BCE81DEB59B1D37567DC26C625401);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker GetOrAddControllerPerfMarker = new ProfilerMarker("[MRTK] OpenXRDeviceManager.GetOrAddController");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral87645AC8450BCE81DEB59B1D37567DC26C625401, /*hidden argument*/NULL);
		((OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604_il2cpp_TypeInfo_var))->set_GetOrAddControllerPerfMarker_26(L_0);
		// private static readonly ProfilerMarker RemoveControllerPerfMarker = new ProfilerMarker("[MRTK] OpenXRDeviceManager.RemoveController");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral0A15B6B283C98B4F62B301AF4050963B9F35C000, /*hidden argument*/NULL);
		((OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRDeviceManager_tC8A11DBF3A4FB6A2C7EAC7A3ACB1D6C6657D7604_il2cpp_TypeInfo_var))->set_RemoveControllerPerfMarker_27(L_1);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider__ctor_m096B8D5596505DBB066E38DBF09FD6A86658FA5F (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXREyeGazeDataProvider_GazeSmoother_OnSaccadeX_mB620DC1DD964B1FE30D351240804E0DBA704314F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXREyeGazeDataProvider_GazeSmoother_OnSaccadeY_m21C98C97661DD6B18EC7F57E8097E8F177536DF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXREyeGazeDataProvider_GazeSmoother_OnSaccade_mC6433906297DD8807BDF16939B14C9060823683B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile) : base(inputSystem, name, priority, profile)
		RuntimeObject* L_0 = ___inputSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_il2cpp_TypeInfo_var);
		BaseInputDeviceManager__ctor_m97D08340B47B03586B4D1378C19B4DDEA831F443(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// gazeSmoother = new EyeGazeSmoother();
		EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * L_4 = (EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D *)il2cpp_codegen_object_new(EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D_il2cpp_TypeInfo_var);
		EyeGazeSmoother__ctor_m060DAE0A52E61BBF48584987FCE19BC80B349B31(L_4, /*hidden argument*/NULL);
		__this->set_gazeSmoother_18(L_4);
		// gazeSmoother.OnSaccade += GazeSmoother_OnSaccade;
		EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * L_5 = __this->get_gazeSmoother_18();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, __this, (intptr_t)((intptr_t)OpenXREyeGazeDataProvider_GazeSmoother_OnSaccade_mC6433906297DD8807BDF16939B14C9060823683B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		EyeGazeSmoother_add_OnSaccade_m52B66A9B6DA24DE9ACC7F5943CD36081BCBC2BC7(L_5, L_6, /*hidden argument*/NULL);
		// gazeSmoother.OnSaccadeX += GazeSmoother_OnSaccadeX;
		EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * L_7 = __this->get_gazeSmoother_18();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, __this, (intptr_t)((intptr_t)OpenXREyeGazeDataProvider_GazeSmoother_OnSaccadeX_mB620DC1DD964B1FE30D351240804E0DBA704314F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		EyeGazeSmoother_add_OnSaccadeX_m867524242EE0CA58956E168DA6273B818DB20BFF(L_7, L_8, /*hidden argument*/NULL);
		// gazeSmoother.OnSaccadeY += GazeSmoother_OnSaccadeY;
		EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * L_9 = __this->get_gazeSmoother_18();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, __this, (intptr_t)((intptr_t)OpenXREyeGazeDataProvider_GazeSmoother_OnSaccadeY_m21C98C97661DD6B18EC7F57E8097E8F177536DF1_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		EyeGazeSmoother_add_OnSaccadeY_m88565C53FBE145DBCE7A7B1839AA3B5DFBBE90D7(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::get_SmoothEyeTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXREyeGazeDataProvider_get_SmoothEyeTracking_m7D3F84914E96F90087A0989A62CDC7232D6B6A2F (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, const RuntimeMethod* method)
{
	{
		// public bool SmoothEyeTracking { get; set; } = false;
		bool L_0 = __this->get_U3CSmoothEyeTrackingU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::set_SmoothEyeTracking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_set_SmoothEyeTracking_m1980739D1D874E20E91F320B85C4A7D2BE9B39CE (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SmoothEyeTracking { get; set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CSmoothEyeTrackingU3Ek__BackingField_17(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeSaccadeProvider Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::get_SaccadeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenXREyeGazeDataProvider_get_SaccadeProvider_m409B4E3011DA96E9C797B904A7FD8E0EC980873D (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityEyeSaccadeProvider SaccadeProvider => gazeSmoother;
		EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * L_0 = __this->get_gazeSmoother_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::add_OnSaccade(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_add_OnSaccade_m9CACF5D97377F6F10CDE23687897E668BE2F2793 (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccade_19();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnSaccade_19();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::remove_OnSaccade(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_remove_OnSaccade_m0766E88D76153B816ACE0573E0347CB5500D5A8A (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccade_19();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnSaccade_19();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::GazeSmoother_OnSaccade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_GazeSmoother_OnSaccade_mC6433906297DD8807BDF16939B14C9060823683B (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// private void GazeSmoother_OnSaccade() => OnSaccade?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccade_19();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::add_OnSaccadeX(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_add_OnSaccadeX_mB77CC147EB69F7208F83F79C0FEDD0B856747FCA (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccadeX_20();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnSaccadeX_20();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::remove_OnSaccadeX(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_remove_OnSaccadeX_m09997E151D070FFDC62463E11217FA0929B81640 (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccadeX_20();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnSaccadeX_20();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::GazeSmoother_OnSaccadeX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_GazeSmoother_OnSaccadeX_mB620DC1DD964B1FE30D351240804E0DBA704314F (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// private void GazeSmoother_OnSaccadeX() => OnSaccadeX?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccadeX_20();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::add_OnSaccadeY(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_add_OnSaccadeY_mFA6FD83385D43AAE2B37C214C0AB82CF81FE656D (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccadeY_21();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnSaccadeY_21();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::remove_OnSaccadeY(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_remove_OnSaccadeY_m3FE1F8CD75C7F75BF36C834601D74457C8676BE0 (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccadeY_21();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnSaccadeY_21();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::GazeSmoother_OnSaccadeY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_GazeSmoother_OnSaccadeY_m21C98C97661DD6B18EC7F57E8097E8F177536DF1 (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// private void GazeSmoother_OnSaccadeY() => OnSaccadeY?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccadeY_21();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXREyeGazeDataProvider_CheckCapability_m49697BF099F802208544BCF5A5585E86E9ABD6D5 (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	{
		// public bool CheckCapability(MixedRealityCapability capability) => eyeTrackingDevice.isValid && capability == MixedRealityCapability.EyeTracking;
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * L_0 = __this->get_address_of_eyeTrackingDevice_23();
		bool L_1;
		L_1 = InputDevice_get_isValid_mEC01F2DE9E9A9E1F612176B8B955F29864294DF6((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___capability0;
		return (bool)((((int32_t)L_2) == ((int32_t)3))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_Initialize_m984784F580289FA906AFAD79CA1F8D809AA509E1 (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, const RuntimeMethod* method)
{
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// ReadProfile();
		OpenXREyeGazeDataProvider_ReadProfile_m96AE16B7A6CB9E1E8C09DB4B501AFFFEC9B2EB49(__this, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// base.Initialize();
		BaseInputDeviceManager_Initialize_m068C628E0CF2D1DA5F3C4E247FE67D0EE87893B7(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::ReadProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_ReadProfile_m96AE16B7A6CB9E1E8C09DB4B501AFFFEC9B2EB49 (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityEyeTrackingProfile_tFFC54FF088BA636B718A9C98EA2DDD58D9303470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F1A06D44AA46BA3D099F4AF2B341469C7B5F8DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA99564B21D524436BCBDE413157922CDA544BA1B);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityEyeTrackingProfile_tFFC54FF088BA636B718A9C98EA2DDD58D9303470 * V_0 = NULL;
	{
		// if (ConfigurationProfile == null)
		BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * L_0;
		L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// Debug.LogError($"{Name} requires a configuration profile to run properly.");
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String Microsoft.MixedReality.Toolkit.BaseService::get_Name() */, __this);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_2, _stringLiteralA99564B21D524436BCBDE413157922CDA544BA1B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_3, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0024:
	{
		// MixedRealityEyeTrackingProfile profile = ConfigurationProfile as MixedRealityEyeTrackingProfile;
		BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * L_4;
		L_4 = VirtFuncInvoker0< BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealityEyeTrackingProfile_tFFC54FF088BA636B718A9C98EA2DDD58D9303470 *)IsInstClass((RuntimeObject*)L_4, MixedRealityEyeTrackingProfile_tFFC54FF088BA636B718A9C98EA2DDD58D9303470_il2cpp_TypeInfo_var));
		// if (profile == null)
		MixedRealityEyeTrackingProfile_tFFC54FF088BA636B718A9C98EA2DDD58D9303470 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		// Debug.LogError($"{Name}'s configuration profile must be a MixedRealityEyeTrackingProfile.");
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String Microsoft.MixedReality.Toolkit.BaseService::get_Name() */, __this);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_7, _stringLiteral8F1A06D44AA46BA3D099F4AF2B341469C7B5F8DE, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_8, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_004f:
	{
		// SmoothEyeTracking = profile.SmoothEyeTracking;
		MixedRealityEyeTrackingProfile_tFFC54FF088BA636B718A9C98EA2DDD58D9303470 * L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = MixedRealityEyeTrackingProfile_get_SmoothEyeTracking_m25736B7BF0FF52B2987C8AA468840DD71ED72A55_inline(L_9, /*hidden argument*/NULL);
		OpenXREyeGazeDataProvider_set_SmoothEyeTracking_m1980739D1D874E20E91F320B85C4A7D2BE9B39CE_inline(__this, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_Update_mF97D04F40699DA0A444F40072C92F5E5C1E2AAF0 (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EyeTrackingUsages_t2565B3A66F3F5613150CF0C8E0634EE9C1461EB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEyeGazeProvider_tA854FE94B4C220F8742E193148C51A8C30744627_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m69B586C86E7A415FDE5732E94E28549EAAE35DD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B22_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B24_0 = NULL;
	RuntimeObject* G_B23_0 = NULL;
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_StaticFields*)il2cpp_codegen_static_fields_for(OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_24();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (!eyeTrackingDevice.isValid)
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * L_2 = __this->get_address_of_eyeTrackingDevice_23();
			bool L_3;
			L_3 = InputDevice_get_isValid_mEC01F2DE9E9A9E1F612176B8B955F29864294DF6((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)L_2, /*hidden argument*/NULL);
			if (L_3)
			{
				goto IL_007b;
			}
		}

IL_001b:
		{
			// InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.EyeTracking, InputDeviceList);
			IL2CPP_RUNTIME_CLASS_INIT(OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_il2cpp_TypeInfo_var);
			List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_4 = ((OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_StaticFields*)il2cpp_codegen_static_fields_for(OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_il2cpp_TypeInfo_var))->get_InputDeviceList_22();
			InputDevices_GetDevicesWithCharacteristics_m8AED20982C7D099E74435E41F8705FAE70ADBDEC(((int32_t)16), L_4, /*hidden argument*/NULL);
			// if (InputDeviceList.Count > 0)
			List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_5 = ((OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_StaticFields*)il2cpp_codegen_static_fields_for(OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_il2cpp_TypeInfo_var))->get_InputDeviceList_22();
			NullCheck(L_5);
			int32_t L_6;
			L_6 = List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_inline(L_5, /*hidden argument*/List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_RuntimeMethod_var);
			if ((((int32_t)L_6) <= ((int32_t)0)))
			{
				goto IL_0045;
			}
		}

IL_0034:
		{
			// eyeTrackingDevice = InputDeviceList[0];
			IL2CPP_RUNTIME_CLASS_INIT(OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_il2cpp_TypeInfo_var);
			List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_7 = ((OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_StaticFields*)il2cpp_codegen_static_fields_for(OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_il2cpp_TypeInfo_var))->get_InputDeviceList_22();
			NullCheck(L_7);
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_8;
			L_8 = List_1_get_Item_m69B586C86E7A415FDE5732E94E28549EAAE35DD7_inline(L_7, 0, /*hidden argument*/List_1_get_Item_m69B586C86E7A415FDE5732E94E28549EAAE35DD7_RuntimeMethod_var);
			__this->set_eyeTrackingDevice_23(L_8);
		}

IL_0045:
		{
			// if (!eyeTrackingDevice.isValid)
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * L_9 = __this->get_address_of_eyeTrackingDevice_23();
			bool L_10;
			L_10 = InputDevice_get_isValid_mEC01F2DE9E9A9E1F612176B8B955F29864294DF6((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)L_9, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_007b;
			}
		}

IL_0052:
		{
			// Service?.EyeGazeProvider?.UpdateEyeTrackingStatus(this, false);
			RuntimeObject* L_11;
			L_11 = BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_RuntimeMethod_var);
			RuntimeObject* L_12 = L_11;
			G_B6_0 = L_12;
			if (L_12)
			{
				G_B7_0 = L_12;
				goto IL_0061;
			}
		}

IL_005b:
		{
			IL2CPP_LEAVE(0x14B, FINALLY_013d);
		}

IL_0061:
		{
			NullCheck(G_B7_0);
			RuntimeObject* L_13;
			L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(10 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_EyeGazeProvider() */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B7_0);
			RuntimeObject* L_14 = L_13;
			G_B8_0 = L_14;
			if (L_14)
			{
				G_B9_0 = L_14;
				goto IL_006f;
			}
		}

IL_0069:
		{
			IL2CPP_LEAVE(0x14B, FINALLY_013d);
		}

IL_006f:
		{
			NullCheck(G_B9_0);
			InterfaceActionInvoker2< RuntimeObject*, bool >::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider::UpdateEyeTrackingStatus(Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeDataProvider,System.Boolean) */, IMixedRealityEyeGazeProvider_tA854FE94B4C220F8742E193148C51A8C30744627_il2cpp_TypeInfo_var, G_B9_0, __this, (bool)0);
			// return;
			IL2CPP_LEAVE(0x14B, FINALLY_013d);
		}

IL_007b:
		{
			// Service?.EyeGazeProvider?.UpdateEyeTrackingStatus(this, true);
			RuntimeObject* L_15;
			L_15 = BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_RuntimeMethod_var);
			RuntimeObject* L_16 = L_15;
			G_B11_0 = L_16;
			if (L_16)
			{
				G_B12_0 = L_16;
				goto IL_0087;
			}
		}

IL_0084:
		{
			goto IL_0099;
		}

IL_0087:
		{
			NullCheck(G_B12_0);
			RuntimeObject* L_17;
			L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(10 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_EyeGazeProvider() */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B12_0);
			RuntimeObject* L_18 = L_17;
			G_B13_0 = L_18;
			if (L_18)
			{
				G_B14_0 = L_18;
				goto IL_0092;
			}
		}

IL_008f:
		{
			goto IL_0099;
		}

IL_0092:
		{
			NullCheck(G_B14_0);
			InterfaceActionInvoker2< RuntimeObject*, bool >::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider::UpdateEyeTrackingStatus(Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeDataProvider,System.Boolean) */, IMixedRealityEyeGazeProvider_tA854FE94B4C220F8742E193148C51A8C30744627_il2cpp_TypeInfo_var, G_B14_0, __this, (bool)1);
		}

IL_0099:
		{
			// if (eyeTrackingDevice.TryGetFeatureValue(CommonUsages.isTracked, out bool gazeTracked)
			//     && gazeTracked
			//     && eyeTrackingDevice.TryGetFeatureValue(EyeTrackingUsages.gazePosition, out Vector3 eyeGazePosition)
			//     && eyeTrackingDevice.TryGetFeatureValue(EyeTrackingUsages.gazeRotation, out Quaternion eyeGazeRotation))
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * L_19 = __this->get_address_of_eyeTrackingDevice_23();
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_20 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_isTracked_0();
			bool L_21;
			L_21 = InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)L_19, L_20, (bool*)(&V_2), /*hidden argument*/NULL);
			bool L_22 = V_2;
			if (!((int32_t)((int32_t)L_21&(int32_t)L_22)))
			{
				goto IL_013b;
			}
		}

IL_00b2:
		{
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * L_23 = __this->get_address_of_eyeTrackingDevice_23();
			IL2CPP_RUNTIME_CLASS_INIT(EyeTrackingUsages_t2565B3A66F3F5613150CF0C8E0634EE9C1461EB9_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_24 = ((EyeTrackingUsages_t2565B3A66F3F5613150CF0C8E0634EE9C1461EB9_StaticFields*)il2cpp_codegen_static_fields_for(EyeTrackingUsages_t2565B3A66F3F5613150CF0C8E0634EE9C1461EB9_il2cpp_TypeInfo_var))->get_gazePosition_0();
			bool L_25;
			L_25 = InputDevice_TryGetFeatureValue_m9B40B8FAD5FED79E840DA7064A7A48FD9AA61C1A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)L_23, L_24, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_013b;
			}
		}

IL_00c6:
		{
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * L_26 = __this->get_address_of_eyeTrackingDevice_23();
			IL2CPP_RUNTIME_CLASS_INIT(EyeTrackingUsages_t2565B3A66F3F5613150CF0C8E0634EE9C1461EB9_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  L_27 = ((EyeTrackingUsages_t2565B3A66F3F5613150CF0C8E0634EE9C1461EB9_StaticFields*)il2cpp_codegen_static_fields_for(EyeTrackingUsages_t2565B3A66F3F5613150CF0C8E0634EE9C1461EB9_il2cpp_TypeInfo_var))->get_gazeRotation_1();
			bool L_28;
			L_28 = InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)L_26, L_27, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_4), /*hidden argument*/NULL);
			if (!L_28)
			{
				goto IL_013b;
			}
		}

IL_00da:
		{
			// Vector3 worldPosition = MixedRealityPlayspace.TransformPoint(eyeGazePosition);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
			L_30 = MixedRealityPlayspace_TransformPoint_m19E4EA2C7A16830A9C76F73E557E44D6817211F3(L_29, /*hidden argument*/NULL);
			V_5 = L_30;
			// Vector3 worldRotation = MixedRealityPlayspace.TransformDirection(eyeGazeRotation * Vector3.forward);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31 = V_4;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
			L_32 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
			L_33 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_31, L_32, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
			L_34 = MixedRealityPlayspace_TransformDirection_mE52A73F39EA7C15B7F0B307652A33B7B948E46BC(L_33, /*hidden argument*/NULL);
			V_6 = L_34;
			// Ray newGaze = new Ray(worldPosition, worldRotation);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_5;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_6;
			Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_7), L_35, L_36, /*hidden argument*/NULL);
			// if (SmoothEyeTracking)
			bool L_37;
			L_37 = OpenXREyeGazeDataProvider_get_SmoothEyeTracking_m7D3F84914E96F90087A0989A62CDC7232D6B6A2F_inline(__this, /*hidden argument*/NULL);
			if (!L_37)
			{
				goto IL_0117;
			}
		}

IL_0108:
		{
			// newGaze = gazeSmoother.SmoothGaze(newGaze);
			EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * L_38 = __this->get_gazeSmoother_18();
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_39 = V_7;
			NullCheck(L_38);
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_40;
			L_40 = EyeGazeSmoother_SmoothGaze_m20BCF917BF785222AED28D1E635BDD27BF350456(L_38, L_39, /*hidden argument*/NULL);
			V_7 = L_40;
		}

IL_0117:
		{
			// Service?.EyeGazeProvider?.UpdateEyeGaze(this, newGaze, DateTime.UtcNow);
			RuntimeObject* L_41;
			L_41 = BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_RuntimeMethod_var);
			RuntimeObject* L_42 = L_41;
			G_B21_0 = L_42;
			if (L_42)
			{
				G_B22_0 = L_42;
				goto IL_0123;
			}
		}

IL_0120:
		{
			IL2CPP_LEAVE(0x14B, FINALLY_013d);
		}

IL_0123:
		{
			NullCheck(G_B22_0);
			RuntimeObject* L_43;
			L_43 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(10 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_EyeGazeProvider() */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B22_0);
			RuntimeObject* L_44 = L_43;
			G_B23_0 = L_44;
			if (L_44)
			{
				G_B24_0 = L_44;
				goto IL_012e;
			}
		}

IL_012b:
		{
			IL2CPP_LEAVE(0x14B, FINALLY_013d);
		}

IL_012e:
		{
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_45 = V_7;
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_46;
			L_46 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
			NullCheck(G_B24_0);
			InterfaceActionInvoker3< RuntimeObject*, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  >::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider::UpdateEyeGaze(Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeDataProvider,UnityEngine.Ray,System.DateTime) */, IMixedRealityEyeGazeProvider_tA854FE94B4C220F8742E193148C51A8C30744627_il2cpp_TypeInfo_var, G_B24_0, __this, L_45, L_46);
		}

IL_013b:
		{
			// }
			IL2CPP_LEAVE(0x14B, FINALLY_013d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_013d;
	}

FINALLY_013d:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(317)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(317)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14B, IL_014b)
	}

IL_014b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider__cctor_m09429FDAF2290259E64C82F1F157FEA62D2959D8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6B2CD42E6C5B2E5B6B1197528D0FEE4D0121EAB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<InputDevice> InputDeviceList = new List<InputDevice>();
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_0 = (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *)il2cpp_codegen_object_new(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1(L_0, /*hidden argument*/List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		((OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_StaticFields*)il2cpp_codegen_static_fields_for(OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_il2cpp_TypeInfo_var))->set_InputDeviceList_22(L_0);
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] OpenXREyeGazeDataProvider.Update");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteralB6B2CD42E6C5B2E5B6B1197528D0FEE4D0121EAB, /*hidden argument*/NULL);
		((OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_StaticFields*)il2cpp_codegen_static_fields_for(OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_24(L_1);
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
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::get_Left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * OpenXRHandMeshProvider_get_Left_m5BD6A2487D5447F05110B73C7634BACD047D673C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static OpenXRHandMeshProvider Left { get; } =
		IL2CPP_RUNTIME_CLASS_INIT(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var);
		OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * L_0 = ((OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var))->get_U3CLeftU3Ek__BackingField_0();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::get_Right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * OpenXRHandMeshProvider_get_Right_m2972BB0FC0827E9F3D561B305215686E2E1A2FBF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static OpenXRHandMeshProvider Right { get; } =
		IL2CPP_RUNTIME_CLASS_INIT(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var);
		OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * L_0 = ((OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var))->get_U3CRightU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::.ctor(Microsoft.MixedReality.OpenXR.HandMeshTracker,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandMeshProvider__ctor_mCE84B2318182A1177CEE0394C87B028FA54E1EC5 (OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * __this, HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * ___handMeshTracker0, uint8_t ___handedness1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<Vector3> vertices = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_0, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		__this->set_vertices_6(L_0);
		// private readonly List<Vector3> normals = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_1, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		__this->set_normals_7(L_1);
		// private readonly List<int> triangles = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_2 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_2, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set_triangles_8(L_2);
		// private OpenXRHandMeshProvider(HandMeshTracker handMeshTracker, Utilities.Handedness handedness)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.handMeshTracker = handMeshTracker;
		HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * L_3 = ___handMeshTracker0;
		__this->set_handMeshTracker_2(L_3);
		// this.handedness = handedness;
		uint8_t L_4 = ___handedness1;
		__this->set_handedness_3(L_4);
		// mesh = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_5 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_5, /*hidden argument*/NULL);
		__this->set_mesh_4(L_5);
		// neutralPoseMesh = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_6 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_6, /*hidden argument*/NULL);
		__this->set_neutralPoseMesh_5(L_6);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::SetInputSource(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandMeshProvider_SetInputSource_m553D4F04015E2A930BBC39C330EF164D88E485F6 (OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * __this, RuntimeObject* ___inputSource0, const RuntimeMethod* method)
{
	{
		// public void SetInputSource(IMixedRealityInputSource inputSource) => this.inputSource = inputSource;
		RuntimeObject* L_0 = ___inputSource0;
		__this->set_inputSource_10(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::UpdateHandMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandMeshProvider_UpdateHandMesh_m1BBC53D3D3B8B9F5D7B443752CE968DD6003A664 (OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 * V_2 = NULL;
	MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740 * V_3 = NULL;
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 * G_B4_0 = NULL;
	MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740 * G_B7_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B22_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	{
		// using (UpdateHandMeshPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var))->get_UpdateHandMeshPerfMarker_11();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// MixedRealityInputSystemProfile inputSystemProfile = CoreServices.InputSystem?.InputSystemProfile;
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_2;
			L_2 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_3 = L_2;
			G_B2_0 = L_3;
			if (L_3)
			{
				G_B3_0 = L_3;
				goto IL_001a;
			}
		}

IL_0016:
		{
			G_B4_0 = ((MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 *)(NULL));
			goto IL_001f;
		}

IL_001a:
		{
			NullCheck(G_B3_0);
			MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 * L_4;
			L_4 = InterfaceFuncInvoker0< MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 * >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_InputSystemProfile() */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B3_0);
			G_B4_0 = L_4;
		}

IL_001f:
		{
			V_2 = G_B4_0;
			// MixedRealityHandTrackingProfile handTrackingProfile = inputSystemProfile != null ? inputSystemProfile.HandTrackingProfile : null;
			MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 * L_5 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_6;
			L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_002c;
			}
		}

IL_0029:
		{
			G_B7_0 = ((MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740 *)(NULL));
			goto IL_0032;
		}

IL_002c:
		{
			MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 * L_7 = V_2;
			NullCheck(L_7);
			MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740 * L_8;
			L_8 = MixedRealityInputSystemProfile_get_HandTrackingProfile_mBD83606D970C31A86F0CEFEDF22A439F26DA6348_inline(L_7, /*hidden argument*/NULL);
			G_B7_0 = L_8;
		}

IL_0032:
		{
			V_3 = G_B7_0;
			// if (handTrackingProfile == null || !handTrackingProfile.EnableHandMeshVisualization)
			MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740 * L_9 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_10;
			L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0044;
			}
		}

IL_003c:
		{
			MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740 * L_11 = V_3;
			NullCheck(L_11);
			bool L_12;
			L_12 = MixedRealityHandTrackingProfile_get_EnableHandMeshVisualization_mB1C8922664D969C06CF0C470F266449F11A18FD9(L_11, /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_0079;
			}
		}

IL_0044:
		{
			// if (handMeshUVs != null)
			Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_13 = __this->get_handMeshUVs_9();
			if (!L_13)
			{
				goto IL_0074;
			}
		}

IL_004c:
		{
			// CoreServices.InputSystem?.RaiseHandMeshUpdated(inputSource, handedness, new HandMeshInfo());
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_14;
			L_14 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_15 = L_14;
			G_B11_0 = L_15;
			if (L_15)
			{
				G_B12_0 = L_15;
				goto IL_0057;
			}
		}

IL_0054:
		{
			goto IL_006d;
		}

IL_0057:
		{
			RuntimeObject* L_16 = __this->get_inputSource_10();
			uint8_t L_17 = __this->get_handedness_3();
			HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 * L_18 = (HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 *)il2cpp_codegen_object_new(HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3_il2cpp_TypeInfo_var);
			HandMeshInfo__ctor_mF4BF2BE9557A7E06F8B77039AAF285ADC9864882(L_18, /*hidden argument*/NULL);
			NullCheck(G_B12_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 * >::Invoke(63 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseHandMeshUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.HandMeshInfo) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B12_0, L_16, L_17, L_18);
		}

IL_006d:
		{
			// handMeshUVs = null;
			__this->set_handMeshUVs_9((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)NULL);
		}

IL_0074:
		{
			// return;
			IL2CPP_LEAVE(0x19B, FINALLY_018d);
		}

IL_0079:
		{
			// if (handMeshUVs == null && handMeshTracker.TryGetHandMesh(FrameTime.OnUpdate, neutralPoseMesh, HandPoseType.ReferenceOpenPalm))
			Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_19 = __this->get_handMeshUVs_9();
			if (L_19)
			{
				goto IL_00ad;
			}
		}

IL_0081:
		{
			HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * L_20 = __this->get_handMeshTracker_2();
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_21 = __this->get_neutralPoseMesh_5();
			NullCheck(L_20);
			bool L_22;
			L_22 = HandMeshTracker_TryGetHandMesh_m47B073A5300E55CC93A59C05DD28EF96C7739566(L_20, 0, L_21, 1, /*hidden argument*/NULL);
			if (!L_22)
			{
				goto IL_00ad;
			}
		}

IL_0096:
		{
			// handMeshUVs = InitializeUVs(neutralPoseMesh.vertices);
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_23 = __this->get_neutralPoseMesh_5();
			NullCheck(L_23);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_24;
			L_24 = Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595(L_23, /*hidden argument*/NULL);
			Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_25;
			L_25 = OpenXRHandMeshProvider_InitializeUVs_m419BCC916CC8D0B8D14CD5D118F6684E23B8E80D(__this, L_24, /*hidden argument*/NULL);
			__this->set_handMeshUVs_9(L_25);
		}

IL_00ad:
		{
			// if (handMeshTracker.TryGetHandMesh(FrameTime.OnUpdate, mesh) && handMeshTracker.TryLocateHandMesh(FrameTime.OnUpdate, out Pose pose))
			HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * L_26 = __this->get_handMeshTracker_2();
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_27 = __this->get_mesh_4();
			NullCheck(L_26);
			bool L_28;
			L_28 = HandMeshTracker_TryGetHandMesh_m47B073A5300E55CC93A59C05DD28EF96C7739566(L_26, 0, L_27, 0, /*hidden argument*/NULL);
			if (!L_28)
			{
				goto IL_018b;
			}
		}

IL_00c5:
		{
			HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * L_29 = __this->get_handMeshTracker_2();
			NullCheck(L_29);
			bool L_30;
			L_30 = HandMeshTracker_TryLocateHandMesh_mF8FED4EFDF402198B60E71BD7E6D07AF73BE16B5(L_29, 0, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)(&V_4), 0, /*hidden argument*/NULL);
			if (!L_30)
			{
				goto IL_018b;
			}
		}

IL_00d9:
		{
			// mesh.GetVertices(vertices);
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_31 = __this->get_mesh_4();
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_32 = __this->get_vertices_6();
			NullCheck(L_31);
			Mesh_GetVertices_mCC533BC8D4A9F14BA1A54BABB11B01750C153015(L_31, L_32, /*hidden argument*/NULL);
			// mesh.GetNormals(normals);
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_33 = __this->get_mesh_4();
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_34 = __this->get_normals_7();
			NullCheck(L_33);
			Mesh_GetNormals_m6B9DD7FDA70DF058D215915597BCBF6450D6E243(L_33, L_34, /*hidden argument*/NULL);
			// mesh.GetTriangles(triangles, 0);
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_35 = __this->get_mesh_4();
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_36 = __this->get_triangles_8();
			NullCheck(L_35);
			Mesh_GetTriangles_m2A219EA6034D366619F22C912BF4BB911E2D06FB(L_35, L_36, 0, /*hidden argument*/NULL);
			// HandMeshInfo handMeshInfo = new HandMeshInfo
			// {
			//     vertices = vertices.ToArray(),
			//     normals = normals.ToArray(),
			//     triangles = triangles.ToArray(),
			//     uvs = handMeshUVs,
			//     position = pose.position,
			//     rotation = pose.rotation
			// };
			HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 * L_37 = (HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 *)il2cpp_codegen_object_new(HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3_il2cpp_TypeInfo_var);
			HandMeshInfo__ctor_mF4BF2BE9557A7E06F8B77039AAF285ADC9864882(L_37, /*hidden argument*/NULL);
			HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 * L_38 = L_37;
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_39 = __this->get_vertices_6();
			NullCheck(L_39);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_40;
			L_40 = List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC(L_39, /*hidden argument*/List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
			NullCheck(L_38);
			L_38->set_vertices_0(L_40);
			HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 * L_41 = L_38;
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_42 = __this->get_normals_7();
			NullCheck(L_42);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_43;
			L_43 = List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC(L_42, /*hidden argument*/List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
			NullCheck(L_41);
			L_41->set_normals_2(L_43);
			HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 * L_44 = L_41;
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_45 = __this->get_triangles_8();
			NullCheck(L_45);
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_46;
			L_46 = List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F(L_45, /*hidden argument*/List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
			NullCheck(L_44);
			L_44->set_triangles_1(L_46);
			HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 * L_47 = L_44;
			Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_48 = __this->get_handMeshUVs_9();
			NullCheck(L_47);
			L_47->set_uvs_3(L_48);
			HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 * L_49 = L_47;
			Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_50 = V_4;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = L_50.get_position_0();
			NullCheck(L_49);
			L_49->set_position_4(L_51);
			HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 * L_52 = L_49;
			Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_53 = V_4;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_54 = L_53.get_rotation_1();
			NullCheck(L_52);
			L_52->set_rotation_5(L_54);
			V_5 = L_52;
			// CoreServices.InputSystem?.RaiseHandMeshUpdated(inputSource, handedness, handMeshInfo);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_55;
			L_55 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_56 = L_55;
			G_B21_0 = L_56;
			if (L_56)
			{
				G_B22_0 = L_56;
				goto IL_0178;
			}
		}

IL_0175:
		{
			IL2CPP_LEAVE(0x19B, FINALLY_018d);
		}

IL_0178:
		{
			RuntimeObject* L_57 = __this->get_inputSource_10();
			uint8_t L_58 = __this->get_handedness_3();
			HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 * L_59 = V_5;
			NullCheck(G_B22_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, HandMeshInfo_t56160AC9CBD2A39472F26B4603F68F62764827F3 * >::Invoke(63 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseHandMeshUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.HandMeshInfo) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B22_0, L_57, L_58, L_59);
		}

IL_018b:
		{
			// }
			IL2CPP_LEAVE(0x19B, FINALLY_018d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_018d;
	}

FINALLY_018d:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(397)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(397)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x19B, IL_019b)
	}

IL_019b:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::InitializeUVs(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* OpenXRHandMeshProvider_InitializeUVs_m419BCC916CC8D0B8D14CD5D118F6684E23B8E80D (OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___neutralPoseVertices0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD51862061BEF6981AB4BE866F6A89BA4489E5DDC);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_3 = NULL;
	int32_t V_4 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// if (neutralPoseVertices.Length == 0)
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = ___neutralPoseVertices0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_000e;
		}
	}
	{
		// Debug.LogError("Loaded 0 verts for neutralPoseVertices");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralD51862061BEF6981AB4BE866F6A89BA4489E5DDC, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// float minY = neutralPoseVertices[0].y;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = ___neutralPoseVertices0;
		NullCheck(L_1);
		float L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_3();
		V_0 = L_2;
		// float maxY = minY;
		float L_3 = V_0;
		V_1 = L_3;
		// for (int ix = 1; ix < neutralPoseVertices.Length; ix++)
		V_4 = 1;
		goto IL_0058;
	}

IL_0022:
	{
		// Vector3 p = neutralPoseVertices[ix];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = ___neutralPoseVertices0;
		int32_t L_5 = V_4;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_5 = L_7;
		// if (p.y < minY)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_5;
		float L_9 = L_8.get_y_3();
		float L_10 = V_0;
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0040;
		}
	}
	{
		// minY = p.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_5;
		float L_12 = L_11.get_y_3();
		V_0 = L_12;
		// }
		goto IL_0052;
	}

IL_0040:
	{
		// else if (p.y > maxY)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_5;
		float L_14 = L_13.get_y_3();
		float L_15 = V_1;
		if ((!(((float)L_14) > ((float)L_15))))
		{
			goto IL_0052;
		}
	}
	{
		// maxY = p.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_5;
		float L_17 = L_16.get_y_3();
		V_1 = L_17;
	}

IL_0052:
	{
		// for (int ix = 1; ix < neutralPoseVertices.Length; ix++)
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0058:
	{
		// for (int ix = 1; ix < neutralPoseVertices.Length; ix++)
		int32_t L_19 = V_4;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_20 = ___neutralPoseVertices0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		// float scale = 1.0f / (maxY - minY);
		float L_21 = V_1;
		float L_22 = V_0;
		V_2 = ((float)((float)(1.0f)/(float)((float)il2cpp_codegen_subtract((float)L_21, (float)L_22))));
		// Vector2[] uvs = new Vector2[neutralPoseVertices.Length];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_23 = ___neutralPoseVertices0;
		NullCheck(L_23);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_24 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))));
		V_3 = L_24;
		// for (int ix = 0; ix < neutralPoseVertices.Length; ix++)
		V_6 = 0;
		goto IL_00ae;
	}

IL_0077:
	{
		// Vector3 p = neutralPoseVertices[ix];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_25 = ___neutralPoseVertices0;
		int32_t L_26 = V_6;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_7 = L_28;
		// uvs[ix] = new Vector2(p.x * scale + 0.5f, (p.y - minY) * scale);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_29 = V_3;
		int32_t L_30 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_7;
		float L_32 = L_31.get_x_2();
		float L_33 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_7;
		float L_35 = L_34.get_y_3();
		float L_36 = V_0;
		float L_37 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_38), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_32, (float)L_33)), (float)(0.5f))), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_35, (float)L_36)), (float)L_37)), /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_38);
		// for (int ix = 0; ix < neutralPoseVertices.Length; ix++)
		int32_t L_39 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00ae:
	{
		// for (int ix = 0; ix < neutralPoseVertices.Length; ix++)
		int32_t L_40 = V_6;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_41 = ___neutralPoseVertices0;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))))
		{
			goto IL_0077;
		}
	}
	{
		// return uvs;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_42 = V_3;
		return L_42;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandMeshProvider__cctor_m78B8EA9FD919DD646FBB0A5FB9295ECD7F649F24 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA21F085857C25FA6633EF256DA63F630C4ACF75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new OpenXRHandMeshProvider(HandMeshTracker.Left, Utilities.Handedness.Left);
		IL2CPP_RUNTIME_CLASS_INIT(HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146_il2cpp_TypeInfo_var);
		HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * L_0;
		L_0 = HandMeshTracker_get_Left_m834FB22088CF46F9EF46DAC8731E6DF270106FAF_inline(/*hidden argument*/NULL);
		OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * L_1 = (OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 *)il2cpp_codegen_object_new(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var);
		OpenXRHandMeshProvider__ctor_mCE84B2318182A1177CEE0394C87B028FA54E1EC5(L_1, L_0, 1, /*hidden argument*/NULL);
		((OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var))->set_U3CLeftU3Ek__BackingField_0(L_1);
		// new OpenXRHandMeshProvider(HandMeshTracker.Right, Utilities.Handedness.Right);
		HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * L_2;
		L_2 = HandMeshTracker_get_Right_m6705D8B2C8AB6513519C4B8D8738FE36DFC33731_inline(/*hidden argument*/NULL);
		OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * L_3 = (OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 *)il2cpp_codegen_object_new(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var);
		OpenXRHandMeshProvider__ctor_mCE84B2318182A1177CEE0394C87B028FA54E1EC5(L_3, L_2, 2, /*hidden argument*/NULL);
		((OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var))->set_U3CRightU3Ek__BackingField_1(L_3);
		// private static readonly ProfilerMarker UpdateHandMeshPerfMarker = new ProfilerMarker($"[MRTK] {nameof(OpenXRHandMeshProvider)}.UpdateHandMesh");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_4), _stringLiteralFA21F085857C25FA6633EF256DA63F630C4ACF75, /*hidden argument*/NULL);
		((OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var))->set_UpdateHandMeshPerfMarker_11(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  MixedRealityPose_get_ZeroIdentity_m95D9F3844DD9A90DAEC2046FE9152D721CCF19D2_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityPose ZeroIdentity { get; } = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_0 = ((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var))->get_U3CZeroIdentityU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method)
{
	{
		// public DeviceInputType InputType => inputType;
		int32_t L_0 = __this->get_inputType_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m773EB94276F208A7BA4555B67A819F3E47BB72B6_inline (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_position_1(L_0);
		// public Vector3 Position { get { return position; } set { position = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m880A6F5D3947A513E13FEDE089FE7C677A58B27D_inline (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___value0;
		__this->set_rotation_2(L_0);
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityInputSource InputSource { get; }
		RuntimeObject* L_0 = __this->get_U3CInputSourceU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method)
{
	{
		// public Handedness ControllerHandedness { get; }
		uint8_t L_0 = __this->get_U3CControllerHandednessU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method)
{
	{
		// get { return inputAction; }
		MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_0 = __this->get_inputAction_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  MixedRealityInteractionMapping_get_PoseData_m1FE5A5F111B5E311D5532B2754B6232EED0344E2_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method)
{
	{
		// return poseData;
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_0 = __this->get_poseData_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * OpenXRHandMeshProvider_get_Right_m2972BB0FC0827E9F3D561B305215686E2E1A2FBF_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static OpenXRHandMeshProvider Right { get; } =
		IL2CPP_RUNTIME_CLASS_INIT(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var);
		OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * L_0 = ((OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var))->get_U3CRightU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * OpenXRHandMeshProvider_get_Left_m5BD6A2487D5447F05110B73C7634BACD047D673C_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static OpenXRHandMeshProvider Left { get; } =
		IL2CPP_RUNTIME_CLASS_INIT(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var);
		OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * L_0 = ((OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171_il2cpp_TypeInfo_var))->get_U3CLeftU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRHandMeshProvider_SetInputSource_m553D4F04015E2A930BBC39C330EF164D88E485F6_inline (OpenXRHandMeshProvider_t4CF2B88B2C2895438A4072B62B8CE4AC308D3171 * __this, RuntimeObject* ___inputSource0, const RuntimeMethod* method)
{
	{
		// public void SetInputSource(IMixedRealityInputSource inputSource) => this.inputSource = inputSource;
		RuntimeObject* L_0 = ___inputSource0;
		__this->set_inputSource_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * HandTracker_get_Right_m65535255C8267CCABFFDD58A6BE59F4DBCCAB159_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTracker_t3327910B18D234F06B185BFA99047E30046D0957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static HandTracker Right { get; } = new HandTracker(Handedness.Right);
		IL2CPP_RUNTIME_CLASS_INIT(HandTracker_t3327910B18D234F06B185BFA99047E30046D0957_il2cpp_TypeInfo_var);
		HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * L_0 = ((HandTracker_t3327910B18D234F06B185BFA99047E30046D0957_StaticFields*)il2cpp_codegen_static_fields_for(HandTracker_t3327910B18D234F06B185BFA99047E30046D0957_il2cpp_TypeInfo_var))->get_U3CRightU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * HandTracker_get_Left_m708C38E9BC40B0FBEB07E9163C3148E8007A1A7F_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTracker_t3327910B18D234F06B185BFA99047E30046D0957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static HandTracker Left { get; } = new HandTracker(Handedness.Left);
		IL2CPP_RUNTIME_CLASS_INIT(HandTracker_t3327910B18D234F06B185BFA99047E30046D0957_il2cpp_TypeInfo_var);
		HandTracker_t3327910B18D234F06B185BFA99047E30046D0957 * L_0 = ((HandTracker_t3327910B18D234F06B185BFA99047E30046D0957_StaticFields*)il2cpp_codegen_static_fields_for(HandTracker_t3327910B18D234F06B185BFA99047E30046D0957_il2cpp_TypeInfo_var))->get_U3CLeftU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m745CDDA851D0C022D2705E1E225AD97095F9200E_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; set; }
		bool L_0 = __this->get_U3CEnabledU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityInteractionMapping[] Interactions { get; private set; } = null;
		MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_0 = __this->get_U3CInteractionsU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_Enabled_m7215364614CFBF1B603CDC712914188512C7EC86_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CEnabledU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_AxisType_mDA08F6F89AC029C3E7A9E9735E461A7C4569F308_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method)
{
	{
		// public AxisType AxisType => axisType;
		int32_t L_0 = __this->get_axisType_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m5D39EBEE43023C9782742ECC3700D75CD8AF9875_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method)
{
	{
		// return boolData;
		bool L_0 = __this->get_boolData_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  HandJointLocation_get_Pose_mEC69083D5F01D41D2737848B69B570C88771B652_inline (HandJointLocation_t6417344072BEE803CA511D7582144CE369974CC2 * __this, const RuntimeMethod* method)
{
	{
		// public Pose Pose { get; }
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_U3CPoseU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityEyeTrackingProfile_get_SmoothEyeTracking_m25736B7BF0FF52B2987C8AA468840DD71ED72A55_inline (MixedRealityEyeTrackingProfile_tFFC54FF088BA636B718A9C98EA2DDD58D9303470 * __this, const RuntimeMethod* method)
{
	{
		// public bool SmoothEyeTracking => smoothEyeTracking;
		bool L_0 = __this->get_smoothEyeTracking_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_set_SmoothEyeTracking_m1980739D1D874E20E91F320B85C4A7D2BE9B39CE_inline (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SmoothEyeTracking { get; set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CSmoothEyeTrackingU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OpenXREyeGazeDataProvider_get_SmoothEyeTracking_m7D3F84914E96F90087A0989A62CDC7232D6B6A2F_inline (OpenXREyeGazeDataProvider_t8ADFF3E8712105A830E76D6271AD7A721A25FC85 * __this, const RuntimeMethod* method)
{
	{
		// public bool SmoothEyeTracking { get; set; } = false;
		bool L_0 = __this->get_U3CSmoothEyeTrackingU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740 * MixedRealityInputSystemProfile_get_HandTrackingProfile_mBD83606D970C31A86F0CEFEDF22A439F26DA6348_inline (MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 * __this, const RuntimeMethod* method)
{
	{
		// get { return handTrackingProfile; }
		MixedRealityHandTrackingProfile_tE873690628587659F89C6615834FFFCFBC869740 * L_0 = __this->get_handTrackingProfile_19();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * HandMeshTracker_get_Left_m834FB22088CF46F9EF46DAC8731E6DF270106FAF_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static HandMeshTracker Left { get; } = new HandMeshTracker(OpenXR.Handedness.Left);
		IL2CPP_RUNTIME_CLASS_INIT(HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146_il2cpp_TypeInfo_var);
		HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * L_0 = ((HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146_StaticFields*)il2cpp_codegen_static_fields_for(HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146_il2cpp_TypeInfo_var))->get_U3CLeftU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * HandMeshTracker_get_Right_m6705D8B2C8AB6513519C4B8D8738FE36DFC33731_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static HandMeshTracker Right { get; } = new HandMeshTracker(OpenXR.Handedness.Right);
		IL2CPP_RUNTIME_CLASS_INIT(HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146_il2cpp_TypeInfo_var);
		HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146 * L_0 = ((HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146_StaticFields*)il2cpp_codegen_static_fields_for(HandMeshTracker_tA479DEB39A92E212DE310D3587B281DC9D7B0146_il2cpp_TypeInfo_var))->get_U3CRightU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_gshared_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_gshared_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_0();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  Enumerator_get_Current_m6D4612E5C4CC04DA20E93A9B46F46F4E419322FF_gshared_inline (Enumerator_tCF9AEEA909BF6824FB035022FD283DBA24CFE3D4 * __this, const RuntimeMethod* method)
{
	{
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_0 = (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E )__this->get_currentKey_3();
		return (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_gshared_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  List_1_get_Item_m69B586C86E7A415FDE5732E94E28549EAAE35DD7_gshared_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* L_2 = (InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE*)L_2, (int32_t)L_3);
		return (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m985BA1C94F0384130AB1AFBCBB9A7866A9BD75B7_gshared_inline (BaseDataProvider_1_t5472B645E25171C2E317D45F750D5FF28CC299CF * __this, const RuntimeMethod* method)
{
	{
		// protected T Service { get; set; } = default(T);
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CServiceU3Ek__BackingField_9();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
