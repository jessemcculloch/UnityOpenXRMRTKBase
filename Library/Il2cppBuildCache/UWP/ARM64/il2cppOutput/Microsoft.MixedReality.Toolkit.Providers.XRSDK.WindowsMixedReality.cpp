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

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_t5472B645E25171C2E317D45F750D5FF28CC299CF;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_tAFEDE3C9AA32099A79643638296C906CB91D1ED1;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<UnityEngine.GameObject>>
struct Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint>
struct IEqualityComparer_1_tF9B48F7120BFB759EE9353FBE3691618B52BFE91;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct KeyCollection_t95E65C50A8C48FB1D823F12AABED5C739471D39D;
// System.Collections.Generic.List`1<UnityEngine.XR.Bone>
struct List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D;
// System.Collections.Generic.List`1<UnityEngine.Ray>
struct List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.GameObject>
struct TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56;
// System.Threading.Tasks.Task`1<UnityEngine.GameObject>
struct Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct ValueCollection_t402005AD43CDEE0693B9204BFA8489BA470A2141;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>[]
struct EntryU5BU5D_tABAADCF1CFD8ABE04EA395A1D01AD03D12675182;
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.XR.HandFinger[]
struct HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F;
// Windows.Perception.People.HandMeshVertex[]
struct HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationSetting[]
struct MixedRealityControllerVisualizationSettingU5BU5D_t2471E65C87BAE30ECEBC9D5D2E85055B9CCC82B1;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
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
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t96F629C1EDACEBBB6376D6C904A05C9BB28FD45D;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_t54A05E1A0CDD649EB4830579C1BF3279CC6365F8;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource
struct BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA;
// System.Exception
struct Exception_t;
// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother
struct EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8;
// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController
struct HPMotionController_t8D7991733B4C20BE31145CF81CB6663DB3F4C501;
// Microsoft.MixedReality.Toolkit.Input.HPMotionControllerDefinition
struct HPMotionControllerDefinition_t575691F70AFFC019E7F3003F94054872691E1E14;
// Windows.Perception.People.HandMeshObserver
struct HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273;
// Windows.Perception.People.HeadPose
struct HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_t0CD7B5373C707B35D5B7715287F251E88B89BAE2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_t9E9FEB797F41C255D06A458C4F739A3E28C70CB5;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeSaccadeProvider
struct IMixedRealityEyeSaccadeProvider_tC885929281B6E822339D0E2FDFD116380438B12F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride
struct IMixedRealityGazeProviderHeadOverride_t8D9ECC46DE5064F18B7D51AD741C53170793B629;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tD261D929DA8A0944B1219F9D547B6A242AFF7FA2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition
struct IMixedRealityInputSourceDefinition_tAF272541B2D0287D5BD0165BA893E8145252ADA0;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t81B35976BCAABB86634D8CAB6C5EBECE36D65D3A;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_t68657610B7F294BEF4251D5F142B1501C6BE05F0;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer
struct IMixedRealityTeleportPointer_t512E8888A79D939AFE8F3809D15266C0B104B9E5;
// Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
struct ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider
struct IWindowsMixedRealityUtilitiesProvider_t129BE97292F8C04F0A0549EBE1160D30A58A0998;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Windows.Perception.PerceptionTimestamp
struct PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2;
// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride
struct ProjectionOverride_t3C7D7219E40A3C91DDE6D766DDB009910F7BF098;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.MixedReality.Toolkit.Input.SimpleHandDefinition
struct SimpleHandDefinition_t20142A50977A1B1B0C68AFD8C1FF9610C9D23D75;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A;
// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB;
// Windows.UI.Input.Spatial.SpatialInteractionManager
struct SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5;
// Windows.UI.Input.Spatial.SpatialInteractionSource
struct SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F;
// Windows.UI.Input.Spatial.SpatialPointerPose
struct SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t8D2323983B85594F1037C020D3497109700B78DF;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct WindowsMixedRealityCameraSettings_t8BEE60110DEE5BCC81583E1B4B765610BE4C4F86;
// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityControllerDefinition
struct WindowsMixedRealityControllerDefinition_tDABBC06841C17A28BEA058F9E4F9E015459E80FD;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider
struct WindowsMixedRealityControllerModelProvider_t7862D6C0DA4910D92EE88AE2F3FCA551C27AE743;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider
struct WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider
struct WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater
struct WindowsMixedRealityReprojectionUpdater_t59BD39839E41F15F881BBF74F3C1CF1ABDE67F64;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand
struct WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand
struct WindowsMixedRealityXRSDKGGVHand_t7069B22E6B4F63214A39BB47D630841EE12642CF;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController
struct WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider
struct XRSDKWindowsMixedRealityUtilitiesProvider_t69ACD05B43664EA0D6D8B710C8DF26CF14106F5C;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseWindowsMixedRealityCameraSettings_t54A05E1A0CDD649EB4830579C1BF3279CC6365F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HPMotionControllerDefinition_t575691F70AFFC019E7F3003F94054872691E1E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HPMotionController_t8D7991733B4C20BE31145CF81CB6663DB3F4C501_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityControllerPoseSynchronizer_tC40C407D6594D67EB5857EA30755A63B693D7110_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGazeProviderHeadOverride_t8D9ECC46DE5064F18B7D51AD741C53170793B629_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSource_tD261D929DA8A0944B1219F9D547B6A242AFF7FA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleHandDefinition_t20142A50977A1B1B0C68AFD8C1FF9610C9D23D75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeType_t11AC6FAC40E92E70FF009521E8269903592AAD31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityControllerDefinition_tDABBC06841C17A28BEA058F9E4F9E015459E80FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityControllerModelProvider_t7862D6C0DA4910D92EE88AE2F3FCA551C27AE743_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKWindowsMixedRealityUtilitiesProvider_t69ACD05B43664EA0D6D8B710C8DF26CF14106F5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral128270CB9B422C506B33DF7B8F1F3DC8C29B370E;
IL2CPP_EXTERN_C String_t* _stringLiteral1E7289C914AD935B08BB625EBF3E6C9BF64F8E8D;
IL2CPP_EXTERN_C String_t* _stringLiteral2D17FEBF4804F05DE32748DA39E72ABF808EAB75;
IL2CPP_EXTERN_C String_t* _stringLiteral5A5BE3D9EC03D84AA06ACF74FA1941F878D4B478;
IL2CPP_EXTERN_C String_t* _stringLiteral658CC51B94262E08B674473305FF2AC31574F4F9;
IL2CPP_EXTERN_C String_t* _stringLiteral6A57AA97AFEF7EB7F78B04FD34217B8FF3C332F6;
IL2CPP_EXTERN_C String_t* _stringLiteral7BF210AC4CF6C5202CCE0CB170B4C8BCAEFE439B;
IL2CPP_EXTERN_C String_t* _stringLiteral7ED102C828F9B62603420EE297F5CBDD87B77EB7;
IL2CPP_EXTERN_C String_t* _stringLiteral81F8D5A2B14C55B9620FD335C1C81C032F2D97AE;
IL2CPP_EXTERN_C String_t* _stringLiteral8F991A577B59807EF90D8A8D94880C28E92D7D4E;
IL2CPP_EXTERN_C String_t* _stringLiteralAB8B8DAEE4B0D6B2E8E770180C9963B64E7F6163;
IL2CPP_EXTERN_C String_t* _stringLiteralBC2D67D9A3E041B2BCE8FE58FE1742A4A3D569B1;
IL2CPP_EXTERN_C String_t* _stringLiteralD97DB8E8CA849A2783B8DA9F426364AEBA3DC48C;
IL2CPP_EXTERN_C String_t* _stringLiteralFEEB5CFA66009DDB14CAA8CCDD6282C75B0AF125;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84_mB066508E4CA9F618CA7F07D3CEF5EA1E5D88716F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84_mBF33A79426FCB70587BF0C6F6EA11BD4122DD119_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9CC878FE7F12DF8B4C25C62C80A68ECAC784E0C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEBA54D53782CDC8695416345EA43239C678D9804_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF484F413794D98215D2E5F187E5AE70CB0E01197_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeX_m5CBDF3998194F00D84357BCFC5CBA6D01103328F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeY_mDBE8A810F5EC01D6D52307250C6A7388EE86FBB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccade_m12345AFE3D6F25EEA7913BABDF24C6760207F0A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* HPMotionController_t8D7991733B4C20BE31145CF81CB6663DB3F4C501_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKGGVHand_t7069B22E6B4F63214A39BB47D630841EE12642CF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IHeadPose_t160C8BC4B0FEC9737493F4B89485C47A49459F30;
struct IPerceptionTimestamp_tB7CFF1E415D1247560EE56A6CB790872EF02BBD3;
struct ISpatialCoordinateSystem_t0B599CF4D7B3B14DA13D87C3A231F9981F3A491A;
struct ISpatialPointerPose_t3977905DE3C4E3EDEF1DAFF3D640067463318239;

struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6;
struct HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F;
struct MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9E2963F3E703CBA2CB81E5BA80D53312B0538F03 
{
public:

public:
};

// Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
struct NOVTABLE ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialPointerPoseStatics_TryGetAtTimestamp_m8807730474721435338F5275EDA4D05D4A02A927(ISpatialCoordinateSystem_t0B599CF4D7B3B14DA13D87C3A231F9981F3A491A* ___coordinateSystem0, IPerceptionTimestamp_tB7CFF1E415D1247560EE56A6CB790872EF02BBD3* ___timestamp1, ISpatialPointerPose_t3977905DE3C4E3EDEF1DAFF3D640067463318239** comReturnValue) = 0;
};

// System.Object


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


// System.Collections.Generic.List`1<UnityEngine.XR.Bone>
struct List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____items_1)); }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* get__items_1() const { return ____items_1; }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_StaticFields, ____emptyArray_5)); }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* value)
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


// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t8D2323983B85594F1037C020D3497109700B78DF  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Utilities.SystemType::reference
	String_t* ___reference_0;
	// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_reference_0() { return static_cast<int32_t>(offsetof(SystemType_t8D2323983B85594F1037C020D3497109700B78DF, ___reference_0)); }
	inline String_t* get_reference_0() const { return ___reference_0; }
	inline String_t** get_address_of_reference_0() { return &___reference_0; }
	inline void set_reference_0(String_t* value)
	{
		___reference_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(SystemType_t8D2323983B85594F1037C020D3497109700B78DF, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_1), (void*)value);
	}
};

struct SystemType_t8D2323983B85594F1037C020D3497109700B78DF_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.SystemType::ReferenceMappings
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___ReferenceMappings_2;

public:
	inline static int32_t get_offset_of_ReferenceMappings_2() { return static_cast<int32_t>(offsetof(SystemType_t8D2323983B85594F1037C020D3497109700B78DF_StaticFields, ___ReferenceMappings_2)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_ReferenceMappings_2() const { return ___ReferenceMappings_2; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_ReferenceMappings_2() { return &___ReferenceMappings_2; }
	inline void set_ReferenceMappings_2(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___ReferenceMappings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReferenceMappings_2), (void*)value);
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

// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider
struct WindowsMixedRealityControllerModelProvider_t7862D6C0DA4910D92EE88AE2F3FCA551C27AE743  : public RuntimeObject
{
public:
	// Windows.UI.Input.Spatial.SpatialInteractionSource Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider::spatialInteractionSource
	SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * ___spatialInteractionSource_0;

public:
	inline static int32_t get_offset_of_spatialInteractionSource_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityControllerModelProvider_t7862D6C0DA4910D92EE88AE2F3FCA551C27AE743, ___spatialInteractionSource_0)); }
	inline SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * get_spatialInteractionSource_0() const { return ___spatialInteractionSource_0; }
	inline SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F ** get_address_of_spatialInteractionSource_0() { return &___spatialInteractionSource_0; }
	inline void set_spatialInteractionSource_0(SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * value)
	{
		___spatialInteractionSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialInteractionSource_0), (void*)value);
	}
};

struct WindowsMixedRealityControllerModelProvider_t7862D6C0DA4910D92EE88AE2F3FCA551C27AE743_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider::ControllerModelDictionary
	Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * ___ControllerModelDictionary_1;

public:
	inline static int32_t get_offset_of_ControllerModelDictionary_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityControllerModelProvider_t7862D6C0DA4910D92EE88AE2F3FCA551C27AE743_StaticFields, ___ControllerModelDictionary_1)); }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * get_ControllerModelDictionary_1() const { return ___ControllerModelDictionary_1; }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C ** get_address_of_ControllerModelDictionary_1() { return &___ControllerModelDictionary_1; }
	inline void set_ControllerModelDictionary_1(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * value)
	{
		___ControllerModelDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ControllerModelDictionary_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider
struct XRSDKWindowsMixedRealityUtilitiesProvider_t69ACD05B43664EA0D6D8B710C8DF26CF14106F5C  : public RuntimeObject
{
public:

public:
};


// System.__Il2CppComObject


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


// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>
struct TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B, ___m_task_0)); }
	inline Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// UnityEngine.XR.Bone
struct Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 
{
public:
	// System.UInt64 UnityEngine.XR.Bone::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Bone::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
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

// UnityEngine.XR.Hand
struct Hand_tB64007EC8D01384426C93432737BA9C5F636A690 
{
public:
	// System.UInt64 UnityEngine.XR.Hand::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Hand::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Hand_tB64007EC8D01384426C93432737BA9C5F636A690, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Hand_tB64007EC8D01384426C93432737BA9C5F636A690, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
};


// Windows.Perception.People.HeadPose
struct HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D  : public Il2CppComObject
{
public:

public:
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


// Windows.Perception.PerceptionTimestamp
struct PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC  : public Il2CppComObject
{
public:

public:
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


// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialPointerPose
struct SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC  : public Il2CppComObject
{
public:

public:
};

struct SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
	ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004* ____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Input.Spatial.SpatialPointerPose"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004* get_____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004()
	{
		ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004* returnValue = ____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004;
			}
		}
		return returnValue;
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


// System.Numerics.Vector3
struct Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
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


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct AutoStartBehavior_t774E2DA11DF89EA6BE956910CA76ADFE18AC11C6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_t774E2DA11DF89EA6BE956910CA76ADFE18AC11C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.DateTimeOffset
struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
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

// UnityEngine.XR.HandFinger
struct HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35 
{
public:
	// System.Int32 UnityEngine.XR.HandFinger::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35, ___value___2)); }
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


// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_SubsystemDescriptor_1)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_1() const { return ___m_SubsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_1() { return &___m_SubsystemDescriptor_1; }
	inline void set_m_SubsystemDescriptor_1(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
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


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions
struct SpatialAwarenessMeshDisplayOptions_t8586EBE13BB457C0F2F5E47E650AFCC6CCB41294 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshDisplayOptions_t8586EBE13BB457C0F2F5E47E650AFCC6CCB41294, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail
struct SpatialAwarenessMeshLevelOfDetail_tB84BB38244E0A0CF3415AE27E7895159A3331C3B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshLevelOfDetail_tB84BB38244E0A0CF3415AE27E7895159A3331C3B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceKind
struct SpatialInteractionSourceKind_t812D8C730AA19BAA0BDA6CA4DA60B61AF7E88CF7 
{
public:
	// System.Int32 Windows.UI.Input.Spatial.SpatialInteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialInteractionSourceKind_t812D8C730AA19BAA0BDA6CA4DA60B61AF7E88CF7, ___value___2)); }
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


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
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


// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct VolumeType_t11AC6FAC40E92E70FF009521E8269903592AAD31 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_t11AC6FAC40E92E70FF009521E8269903592AAD31, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities
struct WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620  : public RuntimeObject
{
public:

public:
};

struct WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::<UtilitiesProvider>k__BackingField
	RuntimeObject* ___U3CUtilitiesProviderU3Ek__BackingField_0;
	// Windows.UI.Input.Spatial.SpatialInteractionManager Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::spatialInteractionManager
	SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * ___spatialInteractionManager_1;
	// System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::currentSpatialCoordinateSystemPtr
	intptr_t ___currentSpatialCoordinateSystemPtr_2;
	// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::spatialCoordinateSystem
	SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * ___spatialCoordinateSystem_3;

public:
	inline static int32_t get_offset_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_StaticFields, ___U3CUtilitiesProviderU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CUtilitiesProviderU3Ek__BackingField_0() const { return ___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return &___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline void set_U3CUtilitiesProviderU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CUtilitiesProviderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUtilitiesProviderU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_spatialInteractionManager_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_StaticFields, ___spatialInteractionManager_1)); }
	inline SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * get_spatialInteractionManager_1() const { return ___spatialInteractionManager_1; }
	inline SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 ** get_address_of_spatialInteractionManager_1() { return &___spatialInteractionManager_1; }
	inline void set_spatialInteractionManager_1(SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * value)
	{
		___spatialInteractionManager_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialInteractionManager_1), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpatialCoordinateSystemPtr_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_StaticFields, ___currentSpatialCoordinateSystemPtr_2)); }
	inline intptr_t get_currentSpatialCoordinateSystemPtr_2() const { return ___currentSpatialCoordinateSystemPtr_2; }
	inline intptr_t* get_address_of_currentSpatialCoordinateSystemPtr_2() { return &___currentSpatialCoordinateSystemPtr_2; }
	inline void set_currentSpatialCoordinateSystemPtr_2(intptr_t value)
	{
		___currentSpatialCoordinateSystemPtr_2 = value;
	}

	inline static int32_t get_offset_of_spatialCoordinateSystem_3() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_StaticFields, ___spatialCoordinateSystem_3)); }
	inline SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * get_spatialCoordinateSystem_3() const { return ___spatialCoordinateSystem_3; }
	inline SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB ** get_address_of_spatialCoordinateSystem_3() { return &___spatialCoordinateSystem_3; }
	inline void set_spatialCoordinateSystem_3(SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * value)
	{
		___spatialCoordinateSystem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialCoordinateSystem_3), (void*)value);
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


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct BaseDataProvider_1_t37F9CE251ACA469688A85820EEF7F212F9EDA4D2  : public BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_8;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t37F9CE251ACA469688A85820EEF7F212F9EDA4D2, ___U3CRegistrarU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_8() const { return ___U3CRegistrarU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_8() { return &___U3CRegistrarU3Ek__BackingField_8; }
	inline void set_U3CRegistrarU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t37F9CE251ACA469688A85820EEF7F212F9EDA4D2, ___U3CServiceU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_9() const { return ___U3CServiceU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_9() { return &___U3CServiceU3Ek__BackingField_9; }
	inline void set_U3CServiceU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_9), (void*)value);
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


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct BaseDataProvider_1_tDF955AC925B5832287EAAE19CF88A3C9FA9BFFA4  : public BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_8;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tDF955AC925B5832287EAAE19CF88A3C9FA9BFFA4, ___U3CRegistrarU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_8() const { return ___U3CRegistrarU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_8() { return &___U3CRegistrarU3Ek__BackingField_8; }
	inline void set_U3CRegistrarU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tDF955AC925B5832287EAAE19CF88A3C9FA9BFFA4, ___U3CServiceU3Ek__BackingField_9)); }
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


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
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


// System.Threading.Tasks.Task`1<UnityEngine.GameObject>
struct Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C, ___m_result_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_result_22() const { return ___m_result_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
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


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider
struct WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handedness
	uint8_t ___handedness_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::inputSource
	RuntimeObject* ___inputSource_3;
	// Windows.Perception.People.HandMeshObserver Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshObserver
	HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * ___handMeshObserver_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::hasRequestedHandMeshObserver
	bool ___hasRequestedHandMeshObserver_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshModelId
	int32_t ___handMeshModelId_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::neutralPoseVersion
	int32_t ___neutralPoseVersion_7;
	// System.UInt16[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshTriangleIndices
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___handMeshTriangleIndices_8;
	// Windows.Perception.People.HandMeshVertex[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::vertexAndNormals
	HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* ___vertexAndNormals_9;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshVerticesUnity
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___handMeshVerticesUnity_10;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshNormalsUnity
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___handMeshNormalsUnity_11;
	// System.Int32[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshTriangleIndicesUnity
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___handMeshTriangleIndicesUnity_12;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshUVsUnity
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___handMeshUVsUnity_13;

public:
	inline static int32_t get_offset_of_handedness_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9, ___handedness_2)); }
	inline uint8_t get_handedness_2() const { return ___handedness_2; }
	inline uint8_t* get_address_of_handedness_2() { return &___handedness_2; }
	inline void set_handedness_2(uint8_t value)
	{
		___handedness_2 = value;
	}

	inline static int32_t get_offset_of_inputSource_3() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9, ___inputSource_3)); }
	inline RuntimeObject* get_inputSource_3() const { return ___inputSource_3; }
	inline RuntimeObject** get_address_of_inputSource_3() { return &___inputSource_3; }
	inline void set_inputSource_3(RuntimeObject* value)
	{
		___inputSource_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_3), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshObserver_4() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9, ___handMeshObserver_4)); }
	inline HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * get_handMeshObserver_4() const { return ___handMeshObserver_4; }
	inline HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 ** get_address_of_handMeshObserver_4() { return &___handMeshObserver_4; }
	inline void set_handMeshObserver_4(HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * value)
	{
		___handMeshObserver_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshObserver_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasRequestedHandMeshObserver_5() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9, ___hasRequestedHandMeshObserver_5)); }
	inline bool get_hasRequestedHandMeshObserver_5() const { return ___hasRequestedHandMeshObserver_5; }
	inline bool* get_address_of_hasRequestedHandMeshObserver_5() { return &___hasRequestedHandMeshObserver_5; }
	inline void set_hasRequestedHandMeshObserver_5(bool value)
	{
		___hasRequestedHandMeshObserver_5 = value;
	}

	inline static int32_t get_offset_of_handMeshModelId_6() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9, ___handMeshModelId_6)); }
	inline int32_t get_handMeshModelId_6() const { return ___handMeshModelId_6; }
	inline int32_t* get_address_of_handMeshModelId_6() { return &___handMeshModelId_6; }
	inline void set_handMeshModelId_6(int32_t value)
	{
		___handMeshModelId_6 = value;
	}

	inline static int32_t get_offset_of_neutralPoseVersion_7() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9, ___neutralPoseVersion_7)); }
	inline int32_t get_neutralPoseVersion_7() const { return ___neutralPoseVersion_7; }
	inline int32_t* get_address_of_neutralPoseVersion_7() { return &___neutralPoseVersion_7; }
	inline void set_neutralPoseVersion_7(int32_t value)
	{
		___neutralPoseVersion_7 = value;
	}

	inline static int32_t get_offset_of_handMeshTriangleIndices_8() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9, ___handMeshTriangleIndices_8)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_handMeshTriangleIndices_8() const { return ___handMeshTriangleIndices_8; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_handMeshTriangleIndices_8() { return &___handMeshTriangleIndices_8; }
	inline void set_handMeshTriangleIndices_8(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___handMeshTriangleIndices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndices_8), (void*)value);
	}

	inline static int32_t get_offset_of_vertexAndNormals_9() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9, ___vertexAndNormals_9)); }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* get_vertexAndNormals_9() const { return ___vertexAndNormals_9; }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1** get_address_of_vertexAndNormals_9() { return &___vertexAndNormals_9; }
	inline void set_vertexAndNormals_9(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* value)
	{
		___vertexAndNormals_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertexAndNormals_9), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshVerticesUnity_10() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9, ___handMeshVerticesUnity_10)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_handMeshVerticesUnity_10() const { return ___handMeshVerticesUnity_10; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_handMeshVerticesUnity_10() { return &___handMeshVerticesUnity_10; }
	inline void set_handMeshVerticesUnity_10(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___handMeshVerticesUnity_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshVerticesUnity_10), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshNormalsUnity_11() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9, ___handMeshNormalsUnity_11)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_handMeshNormalsUnity_11() const { return ___handMeshNormalsUnity_11; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_handMeshNormalsUnity_11() { return &___handMeshNormalsUnity_11; }
	inline void set_handMeshNormalsUnity_11(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___handMeshNormalsUnity_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshNormalsUnity_11), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshTriangleIndicesUnity_12() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9, ___handMeshTriangleIndicesUnity_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_handMeshTriangleIndicesUnity_12() const { return ___handMeshTriangleIndicesUnity_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_handMeshTriangleIndicesUnity_12() { return &___handMeshTriangleIndicesUnity_12; }
	inline void set_handMeshTriangleIndicesUnity_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___handMeshTriangleIndicesUnity_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndicesUnity_12), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshUVsUnity_13() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9, ___handMeshUVsUnity_13)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_handMeshUVsUnity_13() const { return ___handMeshUVsUnity_13; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_handMeshUVsUnity_13() { return &___handMeshUVsUnity_13; }
	inline void set_handMeshUVsUnity_13(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___handMeshUVsUnity_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshUVsUnity_13), (void*)value);
	}
};

struct WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::<Left>k__BackingField
	WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * ___U3CLeftU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::<Right>k__BackingField
	WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * ___U3CRightU3Ek__BackingField_1;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::UpdateHandMeshPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHandMeshPerfMarker_14;

public:
	inline static int32_t get_offset_of_U3CLeftU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9_StaticFields, ___U3CLeftU3Ek__BackingField_0)); }
	inline WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * get_U3CLeftU3Ek__BackingField_0() const { return ___U3CLeftU3Ek__BackingField_0; }
	inline WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 ** get_address_of_U3CLeftU3Ek__BackingField_0() { return &___U3CLeftU3Ek__BackingField_0; }
	inline void set_U3CLeftU3Ek__BackingField_0(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * value)
	{
		___U3CLeftU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLeftU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9_StaticFields, ___U3CRightU3Ek__BackingField_1)); }
	inline WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * get_U3CRightU3Ek__BackingField_1() const { return ___U3CRightU3Ek__BackingField_1; }
	inline WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 ** get_address_of_U3CRightU3Ek__BackingField_1() { return &___U3CRightU3Ek__BackingField_1; }
	inline void set_U3CRightU3Ek__BackingField_1(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * value)
	{
		___U3CRightU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRightU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateHandMeshPerfMarker_14() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9_StaticFields, ___UpdateHandMeshPerfMarker_14)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHandMeshPerfMarker_14() const { return ___UpdateHandMeshPerfMarker_14; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHandMeshPerfMarker_14() { return &___UpdateHandMeshPerfMarker_14; }
	inline void set_UpdateHandMeshPerfMarker_14(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHandMeshPerfMarker_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8
struct U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::<>4__this
	WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::<>u__1
	TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84, ___U3CU3E4__this_2)); }
	inline WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
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


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_tD5B8D10E1A4A41D245C466650DA01B93AD35964D  : public BaseDataProvider_1_t37F9CE251ACA469688A85820EEF7F212F9EDA4D2
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_tD5B8D10E1A4A41D245C466650DA01B93AD35964D, ___U3CIsOpaqueU3Ek__BackingField_10)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_10() const { return ___U3CIsOpaqueU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_10() { return &___U3CIsOpaqueU3Ek__BackingField_10; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_10(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_10 = value;
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


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0  : public BaseDataProvider_1_tDF955AC925B5832287EAAE19CF88A3C9FA9BFFA4
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_11;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_12;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<StartupBehavior>k__BackingField
	int32_t ___U3CStartupBehaviorU3Ek__BackingField_13;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<DefaultPhysicsLayer>k__BackingField
	int32_t ___U3CDefaultPhysicsLayerU3Ek__BackingField_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsStationaryObserver>k__BackingField
	bool ___U3CIsStationaryObserverU3Ek__BackingField_16;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverRotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CObserverRotationU3Ek__BackingField_17;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverOrigin>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObserverOriginU3Ek__BackingField_18;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverVolumeType>k__BackingField
	int32_t ___U3CObserverVolumeTypeU3Ek__BackingField_19;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObservationExtents>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObservationExtentsU3Ek__BackingField_20;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<UpdateInterval>k__BackingField
	float ___U3CUpdateIntervalU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CSourceIdU3Ek__BackingField_11)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_11() const { return ___U3CSourceIdU3Ek__BackingField_11; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_11() { return &___U3CSourceIdU3Ek__BackingField_11; }
	inline void set_U3CSourceIdU3Ek__BackingField_11(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CSourceNameU3Ek__BackingField_12)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_12() const { return ___U3CSourceNameU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_12() { return &___U3CSourceNameU3Ek__BackingField_12; }
	inline void set_U3CSourceNameU3Ek__BackingField_12(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartupBehaviorU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CStartupBehaviorU3Ek__BackingField_13)); }
	inline int32_t get_U3CStartupBehaviorU3Ek__BackingField_13() const { return ___U3CStartupBehaviorU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CStartupBehaviorU3Ek__BackingField_13() { return &___U3CStartupBehaviorU3Ek__BackingField_13; }
	inline void set_U3CStartupBehaviorU3Ek__BackingField_13(int32_t value)
	{
		___U3CStartupBehaviorU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultPhysicsLayerU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CDefaultPhysicsLayerU3Ek__BackingField_14)); }
	inline int32_t get_U3CDefaultPhysicsLayerU3Ek__BackingField_14() const { return ___U3CDefaultPhysicsLayerU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CDefaultPhysicsLayerU3Ek__BackingField_14() { return &___U3CDefaultPhysicsLayerU3Ek__BackingField_14; }
	inline void set_U3CDefaultPhysicsLayerU3Ek__BackingField_14(int32_t value)
	{
		___U3CDefaultPhysicsLayerU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CIsRunningU3Ek__BackingField_15)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_15() const { return ___U3CIsRunningU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_15() { return &___U3CIsRunningU3Ek__BackingField_15; }
	inline void set_U3CIsRunningU3Ek__BackingField_15(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CIsStationaryObserverU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CIsStationaryObserverU3Ek__BackingField_16)); }
	inline bool get_U3CIsStationaryObserverU3Ek__BackingField_16() const { return ___U3CIsStationaryObserverU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CIsStationaryObserverU3Ek__BackingField_16() { return &___U3CIsStationaryObserverU3Ek__BackingField_16; }
	inline void set_U3CIsStationaryObserverU3Ek__BackingField_16(bool value)
	{
		___U3CIsStationaryObserverU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CObserverRotationU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CObserverRotationU3Ek__BackingField_17)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CObserverRotationU3Ek__BackingField_17() const { return ___U3CObserverRotationU3Ek__BackingField_17; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CObserverRotationU3Ek__BackingField_17() { return &___U3CObserverRotationU3Ek__BackingField_17; }
	inline void set_U3CObserverRotationU3Ek__BackingField_17(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CObserverRotationU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CObserverOriginU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CObserverOriginU3Ek__BackingField_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObserverOriginU3Ek__BackingField_18() const { return ___U3CObserverOriginU3Ek__BackingField_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObserverOriginU3Ek__BackingField_18() { return &___U3CObserverOriginU3Ek__BackingField_18; }
	inline void set_U3CObserverOriginU3Ek__BackingField_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObserverOriginU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CObserverVolumeTypeU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CObserverVolumeTypeU3Ek__BackingField_19)); }
	inline int32_t get_U3CObserverVolumeTypeU3Ek__BackingField_19() const { return ___U3CObserverVolumeTypeU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CObserverVolumeTypeU3Ek__BackingField_19() { return &___U3CObserverVolumeTypeU3Ek__BackingField_19; }
	inline void set_U3CObserverVolumeTypeU3Ek__BackingField_19(int32_t value)
	{
		___U3CObserverVolumeTypeU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CObservationExtentsU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CObservationExtentsU3Ek__BackingField_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObservationExtentsU3Ek__BackingField_20() const { return ___U3CObservationExtentsU3Ek__BackingField_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObservationExtentsU3Ek__BackingField_20() { return &___U3CObservationExtentsU3Ek__BackingField_20; }
	inline void set_U3CObservationExtentsU3Ek__BackingField_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObservationExtentsU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateIntervalU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CUpdateIntervalU3Ek__BackingField_21)); }
	inline float get_U3CUpdateIntervalU3Ek__BackingField_21() const { return ___U3CUpdateIntervalU3Ek__BackingField_21; }
	inline float* get_address_of_U3CUpdateIntervalU3Ek__BackingField_21() { return &___U3CUpdateIntervalU3Ek__BackingField_21; }
	inline void set_U3CUpdateIntervalU3Ek__BackingField_21(float value)
	{
		___U3CUpdateIntervalU3Ek__BackingField_21 = value;
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


// Microsoft.MixedReality.Toolkit.Input.SimpleHandDefinition
struct SimpleHandDefinition_t20142A50977A1B1B0C68AFD8C1FF9610C9D23D75  : public BaseInputSourceDefinition_t56EFAF9EA1A9D2C3C153727076A6A0E3CC373505
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityControllerDefinition
struct WindowsMixedRealityControllerDefinition_tDABBC06841C17A28BEA058F9E4F9E015459E80FD  : public BaseInputSourceDefinition_t56EFAF9EA1A9D2C3C153727076A6A0E3CC373505
{
public:

public:
};


// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93  : public IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93, ___displayFocusChanged_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63  : public IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t96F629C1EDACEBBB6376D6C904A05C9BB28FD45D  : public BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34  : public BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshEventData
	MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F * ___meshEventData_22;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::observedObjectParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___observedObjectParent_23;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::displayOption
	int32_t ___displayOption_33;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::levelOfDetail
	int32_t ___levelOfDetail_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshes
	Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * ___meshes_35;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshPhysicsLayer
	int32_t ___meshPhysicsLayer_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<RecalculateNormals>k__BackingField
	bool ___U3CRecalculateNormalsU3Ek__BackingField_37;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<TrianglesPerCubicMeter>k__BackingField
	int32_t ___U3CTrianglesPerCubicMeterU3Ek__BackingField_38;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::occlusionMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___occlusionMaterial_39;
	// UnityEngine.PhysicMaterial Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::physicsMaterial
	PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * ___physicsMaterial_40;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::visibleMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___visibleMaterial_41;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::runtimeSpatialMeshPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___runtimeSpatialMeshPrefab_42;

public:
	inline static int32_t get_offset_of_meshEventData_22() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___meshEventData_22)); }
	inline MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F * get_meshEventData_22() const { return ___meshEventData_22; }
	inline MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F ** get_address_of_meshEventData_22() { return &___meshEventData_22; }
	inline void set_meshEventData_22(MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F * value)
	{
		___meshEventData_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_22), (void*)value);
	}

	inline static int32_t get_offset_of_observedObjectParent_23() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___observedObjectParent_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_observedObjectParent_23() const { return ___observedObjectParent_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_observedObjectParent_23() { return &___observedObjectParent_23; }
	inline void set_observedObjectParent_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___observedObjectParent_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observedObjectParent_23), (void*)value);
	}

	inline static int32_t get_offset_of_displayOption_33() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___displayOption_33)); }
	inline int32_t get_displayOption_33() const { return ___displayOption_33; }
	inline int32_t* get_address_of_displayOption_33() { return &___displayOption_33; }
	inline void set_displayOption_33(int32_t value)
	{
		___displayOption_33 = value;
	}

	inline static int32_t get_offset_of_levelOfDetail_34() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___levelOfDetail_34)); }
	inline int32_t get_levelOfDetail_34() const { return ___levelOfDetail_34; }
	inline int32_t* get_address_of_levelOfDetail_34() { return &___levelOfDetail_34; }
	inline void set_levelOfDetail_34(int32_t value)
	{
		___levelOfDetail_34 = value;
	}

	inline static int32_t get_offset_of_meshes_35() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___meshes_35)); }
	inline Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * get_meshes_35() const { return ___meshes_35; }
	inline Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC ** get_address_of_meshes_35() { return &___meshes_35; }
	inline void set_meshes_35(Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * value)
	{
		___meshes_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_35), (void*)value);
	}

	inline static int32_t get_offset_of_meshPhysicsLayer_36() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___meshPhysicsLayer_36)); }
	inline int32_t get_meshPhysicsLayer_36() const { return ___meshPhysicsLayer_36; }
	inline int32_t* get_address_of_meshPhysicsLayer_36() { return &___meshPhysicsLayer_36; }
	inline void set_meshPhysicsLayer_36(int32_t value)
	{
		___meshPhysicsLayer_36 = value;
	}

	inline static int32_t get_offset_of_U3CRecalculateNormalsU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___U3CRecalculateNormalsU3Ek__BackingField_37)); }
	inline bool get_U3CRecalculateNormalsU3Ek__BackingField_37() const { return ___U3CRecalculateNormalsU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CRecalculateNormalsU3Ek__BackingField_37() { return &___U3CRecalculateNormalsU3Ek__BackingField_37; }
	inline void set_U3CRecalculateNormalsU3Ek__BackingField_37(bool value)
	{
		___U3CRecalculateNormalsU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___U3CTrianglesPerCubicMeterU3Ek__BackingField_38)); }
	inline int32_t get_U3CTrianglesPerCubicMeterU3Ek__BackingField_38() const { return ___U3CTrianglesPerCubicMeterU3Ek__BackingField_38; }
	inline int32_t* get_address_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_38() { return &___U3CTrianglesPerCubicMeterU3Ek__BackingField_38; }
	inline void set_U3CTrianglesPerCubicMeterU3Ek__BackingField_38(int32_t value)
	{
		___U3CTrianglesPerCubicMeterU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_occlusionMaterial_39() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___occlusionMaterial_39)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_occlusionMaterial_39() const { return ___occlusionMaterial_39; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_occlusionMaterial_39() { return &___occlusionMaterial_39; }
	inline void set_occlusionMaterial_39(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___occlusionMaterial_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMaterial_39), (void*)value);
	}

	inline static int32_t get_offset_of_physicsMaterial_40() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___physicsMaterial_40)); }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * get_physicsMaterial_40() const { return ___physicsMaterial_40; }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 ** get_address_of_physicsMaterial_40() { return &___physicsMaterial_40; }
	inline void set_physicsMaterial_40(PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * value)
	{
		___physicsMaterial_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___physicsMaterial_40), (void*)value);
	}

	inline static int32_t get_offset_of_visibleMaterial_41() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___visibleMaterial_41)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_visibleMaterial_41() const { return ___visibleMaterial_41; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_visibleMaterial_41() { return &___visibleMaterial_41; }
	inline void set_visibleMaterial_41(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___visibleMaterial_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibleMaterial_41), (void*)value);
	}

	inline static int32_t get_offset_of_runtimeSpatialMeshPrefab_42() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___runtimeSpatialMeshPrefab_42)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_runtimeSpatialMeshPrefab_42() const { return ___runtimeSpatialMeshPrefab_42; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_runtimeSpatialMeshPrefab_42() { return &___runtimeSpatialMeshPrefab_42; }
	inline void set_runtimeSpatialMeshPrefab_42(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___runtimeSpatialMeshPrefab_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runtimeSpatialMeshPrefab_42), (void*)value);
	}
};

struct BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshDisplayOptionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshDisplayOptionPerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshPhysicsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshPhysicsPerfMarker_25;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedPhysicsLayerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedPhysicsLayerPerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAddedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshAddedPerfMarker_27;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAdded
	EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * ___OnMeshAdded_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshUpdatedPerfMarker_29;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdated
	EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * ___OnMeshUpdated_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemovedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshRemovedPerfMarker_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemoved
	EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * ___OnMeshRemoved_32;

public:
	inline static int32_t get_offset_of_ApplyUpdatedMeshDisplayOptionPerfMarker_24() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___ApplyUpdatedMeshDisplayOptionPerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshDisplayOptionPerfMarker_24() const { return ___ApplyUpdatedMeshDisplayOptionPerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshDisplayOptionPerfMarker_24() { return &___ApplyUpdatedMeshDisplayOptionPerfMarker_24; }
	inline void set_ApplyUpdatedMeshDisplayOptionPerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshDisplayOptionPerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedMeshPhysicsPerfMarker_25() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___ApplyUpdatedMeshPhysicsPerfMarker_25)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshPhysicsPerfMarker_25() const { return ___ApplyUpdatedMeshPhysicsPerfMarker_25; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshPhysicsPerfMarker_25() { return &___ApplyUpdatedMeshPhysicsPerfMarker_25; }
	inline void set_ApplyUpdatedMeshPhysicsPerfMarker_25(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshPhysicsPerfMarker_25 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedPhysicsLayerPerfMarker_26() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___ApplyUpdatedPhysicsLayerPerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedPhysicsLayerPerfMarker_26() const { return ___ApplyUpdatedPhysicsLayerPerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedPhysicsLayerPerfMarker_26() { return &___ApplyUpdatedPhysicsLayerPerfMarker_26; }
	inline void set_ApplyUpdatedPhysicsLayerPerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedPhysicsLayerPerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_OnMeshAddedPerfMarker_27() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___OnMeshAddedPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshAddedPerfMarker_27() const { return ___OnMeshAddedPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshAddedPerfMarker_27() { return &___OnMeshAddedPerfMarker_27; }
	inline void set_OnMeshAddedPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshAddedPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_OnMeshAdded_28() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___OnMeshAdded_28)); }
	inline EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * get_OnMeshAdded_28() const { return ___OnMeshAdded_28; }
	inline EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 ** get_address_of_OnMeshAdded_28() { return &___OnMeshAdded_28; }
	inline void set_OnMeshAdded_28(EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * value)
	{
		___OnMeshAdded_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAdded_28), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshUpdatedPerfMarker_29() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___OnMeshUpdatedPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshUpdatedPerfMarker_29() const { return ___OnMeshUpdatedPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshUpdatedPerfMarker_29() { return &___OnMeshUpdatedPerfMarker_29; }
	inline void set_OnMeshUpdatedPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshUpdatedPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_OnMeshUpdated_30() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___OnMeshUpdated_30)); }
	inline EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * get_OnMeshUpdated_30() const { return ___OnMeshUpdated_30; }
	inline EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 ** get_address_of_OnMeshUpdated_30() { return &___OnMeshUpdated_30; }
	inline void set_OnMeshUpdated_30(EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * value)
	{
		___OnMeshUpdated_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshUpdated_30), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshRemovedPerfMarker_31() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___OnMeshRemovedPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshRemovedPerfMarker_31() const { return ___OnMeshRemovedPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshRemovedPerfMarker_31() { return &___OnMeshRemovedPerfMarker_31; }
	inline void set_OnMeshRemovedPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshRemovedPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_OnMeshRemoved_32() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___OnMeshRemoved_32)); }
	inline EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * get_OnMeshRemoved_32() const { return ___OnMeshRemoved_32; }
	inline EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 ** get_address_of_OnMeshRemoved_32() { return &___OnMeshRemoved_32; }
	inline void set_OnMeshRemoved_32(EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * value)
	{
		___OnMeshRemoved_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshRemoved_32), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_t54A05E1A0CDD649EB4830579C1BF3279CC6365F8  : public BaseCameraSettingsProvider_tD5B8D10E1A4A41D245C466650DA01B93AD35964D
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::reprojectionUpdater
	WindowsMixedRealityReprojectionUpdater_t59BD39839E41F15F881BBF74F3C1CF1ABDE67F64 * ___reprojectionUpdater_12;
	// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::projectionOverride
	ProjectionOverride_t3C7D7219E40A3C91DDE6D766DDB009910F7BF098 * ___projectionOverride_13;

public:
	inline static int32_t get_offset_of_reprojectionUpdater_12() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t54A05E1A0CDD649EB4830579C1BF3279CC6365F8, ___reprojectionUpdater_12)); }
	inline WindowsMixedRealityReprojectionUpdater_t59BD39839E41F15F881BBF74F3C1CF1ABDE67F64 * get_reprojectionUpdater_12() const { return ___reprojectionUpdater_12; }
	inline WindowsMixedRealityReprojectionUpdater_t59BD39839E41F15F881BBF74F3C1CF1ABDE67F64 ** get_address_of_reprojectionUpdater_12() { return &___reprojectionUpdater_12; }
	inline void set_reprojectionUpdater_12(WindowsMixedRealityReprojectionUpdater_t59BD39839E41F15F881BBF74F3C1CF1ABDE67F64 * value)
	{
		___reprojectionUpdater_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reprojectionUpdater_12), (void*)value);
	}

	inline static int32_t get_offset_of_projectionOverride_13() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t54A05E1A0CDD649EB4830579C1BF3279CC6365F8, ___projectionOverride_13)); }
	inline ProjectionOverride_t3C7D7219E40A3C91DDE6D766DDB009910F7BF098 * get_projectionOverride_13() const { return ___projectionOverride_13; }
	inline ProjectionOverride_t3C7D7219E40A3C91DDE6D766DDB009910F7BF098 ** get_address_of_projectionOverride_13() { return &___projectionOverride_13; }
	inline void set_projectionOverride_13(ProjectionOverride_t3C7D7219E40A3C91DDE6D766DDB009910F7BF098 * value)
	{
		___projectionOverride_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectionOverride_13), (void*)value);
	}
};

struct BaseWindowsMixedRealityCameraSettings_t54A05E1A0CDD649EB4830579C1BF3279CC6365F8_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::isTryGetViewConfigurationSupported
	bool ___isTryGetViewConfigurationSupported_11;

public:
	inline static int32_t get_offset_of_isTryGetViewConfigurationSupported_11() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t54A05E1A0CDD649EB4830579C1BF3279CC6365F8_StaticFields, ___isTryGetViewConfigurationSupported_11)); }
	inline bool get_isTryGetViewConfigurationSupported_11() const { return ___isTryGetViewConfigurationSupported_11; }
	inline bool* get_address_of_isTryGetViewConfigurationSupported_11() { return &___isTryGetViewConfigurationSupported_11; }
	inline void set_isTryGetViewConfigurationSupported_11(bool value)
	{
		___isTryGetViewConfigurationSupported_11 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource
struct BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926  : public GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::currentPointerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentPointerPosition_21;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::currentPointerRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___currentPointerRotation_22;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::currentPointerPose
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___currentPointerPose_23;

public:
	inline static int32_t get_offset_of_currentPointerPosition_21() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926, ___currentPointerPosition_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentPointerPosition_21() const { return ___currentPointerPosition_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentPointerPosition_21() { return &___currentPointerPosition_21; }
	inline void set_currentPointerPosition_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentPointerPosition_21 = value;
	}

	inline static int32_t get_offset_of_currentPointerRotation_22() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926, ___currentPointerRotation_22)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_currentPointerRotation_22() const { return ___currentPointerRotation_22; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_currentPointerRotation_22() { return &___currentPointerRotation_22; }
	inline void set_currentPointerRotation_22(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___currentPointerRotation_22 = value;
	}

	inline static int32_t get_offset_of_currentPointerPose_23() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926, ___currentPointerPose_23)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_currentPointerPose_23() const { return ___currentPointerPose_23; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_currentPointerPose_23() { return &___currentPointerPose_23; }
	inline void set_currentPointerPose_23(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___currentPointerPose_23 = value;
	}
};

struct BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::UpdatePoseDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePoseDataPerfMarker_24;

public:
	inline static int32_t get_offset_of_UpdatePoseDataPerfMarker_24() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926_StaticFields, ___UpdatePoseDataPerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePoseDataPerfMarker_24() const { return ___UpdatePoseDataPerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePoseDataPerfMarker_24() { return &___UpdatePoseDataPerfMarker_24; }
	inline void set_UpdatePoseDataPerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePoseDataPerfMarker_24 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1  : public BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::renderMotionControllers
	bool ___renderMotionControllers_5;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::defaultControllerVisualizationType
	SystemType_t8D2323983B85594F1037C020D3497109700B78DF * ___defaultControllerVisualizationType_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::usePlatformModels
	bool ___usePlatformModels_7;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::platformModelMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___platformModelMaterial_8;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::globalLeftControllerModel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___globalLeftControllerModel_9;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::globalRightControllerModel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___globalRightControllerModel_10;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::globalLeftHandVisualizer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___globalLeftHandVisualizer_11;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::globalRightHandVisualizer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___globalRightHandVisualizer_12;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationSetting[] Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::controllerVisualizationSettings
	MixedRealityControllerVisualizationSettingU5BU5D_t2471E65C87BAE30ECEBC9D5D2E85055B9CCC82B1* ___controllerVisualizationSettings_13;

public:
	inline static int32_t get_offset_of_renderMotionControllers_5() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1, ___renderMotionControllers_5)); }
	inline bool get_renderMotionControllers_5() const { return ___renderMotionControllers_5; }
	inline bool* get_address_of_renderMotionControllers_5() { return &___renderMotionControllers_5; }
	inline void set_renderMotionControllers_5(bool value)
	{
		___renderMotionControllers_5 = value;
	}

	inline static int32_t get_offset_of_defaultControllerVisualizationType_6() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1, ___defaultControllerVisualizationType_6)); }
	inline SystemType_t8D2323983B85594F1037C020D3497109700B78DF * get_defaultControllerVisualizationType_6() const { return ___defaultControllerVisualizationType_6; }
	inline SystemType_t8D2323983B85594F1037C020D3497109700B78DF ** get_address_of_defaultControllerVisualizationType_6() { return &___defaultControllerVisualizationType_6; }
	inline void set_defaultControllerVisualizationType_6(SystemType_t8D2323983B85594F1037C020D3497109700B78DF * value)
	{
		___defaultControllerVisualizationType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultControllerVisualizationType_6), (void*)value);
	}

	inline static int32_t get_offset_of_usePlatformModels_7() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1, ___usePlatformModels_7)); }
	inline bool get_usePlatformModels_7() const { return ___usePlatformModels_7; }
	inline bool* get_address_of_usePlatformModels_7() { return &___usePlatformModels_7; }
	inline void set_usePlatformModels_7(bool value)
	{
		___usePlatformModels_7 = value;
	}

	inline static int32_t get_offset_of_platformModelMaterial_8() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1, ___platformModelMaterial_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_platformModelMaterial_8() const { return ___platformModelMaterial_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_platformModelMaterial_8() { return &___platformModelMaterial_8; }
	inline void set_platformModelMaterial_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___platformModelMaterial_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platformModelMaterial_8), (void*)value);
	}

	inline static int32_t get_offset_of_globalLeftControllerModel_9() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1, ___globalLeftControllerModel_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_globalLeftControllerModel_9() const { return ___globalLeftControllerModel_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_globalLeftControllerModel_9() { return &___globalLeftControllerModel_9; }
	inline void set_globalLeftControllerModel_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___globalLeftControllerModel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalLeftControllerModel_9), (void*)value);
	}

	inline static int32_t get_offset_of_globalRightControllerModel_10() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1, ___globalRightControllerModel_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_globalRightControllerModel_10() const { return ___globalRightControllerModel_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_globalRightControllerModel_10() { return &___globalRightControllerModel_10; }
	inline void set_globalRightControllerModel_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___globalRightControllerModel_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalRightControllerModel_10), (void*)value);
	}

	inline static int32_t get_offset_of_globalLeftHandVisualizer_11() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1, ___globalLeftHandVisualizer_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_globalLeftHandVisualizer_11() const { return ___globalLeftHandVisualizer_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_globalLeftHandVisualizer_11() { return &___globalLeftHandVisualizer_11; }
	inline void set_globalLeftHandVisualizer_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___globalLeftHandVisualizer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalLeftHandVisualizer_11), (void*)value);
	}

	inline static int32_t get_offset_of_globalRightHandVisualizer_12() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1, ___globalRightHandVisualizer_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_globalRightHandVisualizer_12() const { return ___globalRightHandVisualizer_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_globalRightHandVisualizer_12() { return &___globalRightHandVisualizer_12; }
	inline void set_globalRightHandVisualizer_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___globalRightHandVisualizer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalRightHandVisualizer_12), (void*)value);
	}

	inline static int32_t get_offset_of_controllerVisualizationSettings_13() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1, ___controllerVisualizationSettings_13)); }
	inline MixedRealityControllerVisualizationSettingU5BU5D_t2471E65C87BAE30ECEBC9D5D2E85055B9CCC82B1* get_controllerVisualizationSettings_13() const { return ___controllerVisualizationSettings_13; }
	inline MixedRealityControllerVisualizationSettingU5BU5D_t2471E65C87BAE30ECEBC9D5D2E85055B9CCC82B1** get_address_of_controllerVisualizationSettings_13() { return &___controllerVisualizationSettings_13; }
	inline void set_controllerVisualizationSettings_13(MixedRealityControllerVisualizationSettingU5BU5D_t2471E65C87BAE30ECEBC9D5D2E85055B9CCC82B1* value)
	{
		___controllerVisualizationSettings_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerVisualizationSettings_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider
struct WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341  : public BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::<SmoothEyeTracking>k__BackingField
	bool ___U3CSmoothEyeTrackingU3Ek__BackingField_17;
	// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::gazeSmoother
	EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * ___gazeSmoother_18;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::OnSaccade
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccade_19;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::OnSaccadeX
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeX_20;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::OnSaccadeY
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeY_21;

public:
	inline static int32_t get_offset_of_U3CSmoothEyeTrackingU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341, ___U3CSmoothEyeTrackingU3Ek__BackingField_17)); }
	inline bool get_U3CSmoothEyeTrackingU3Ek__BackingField_17() const { return ___U3CSmoothEyeTrackingU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CSmoothEyeTrackingU3Ek__BackingField_17() { return &___U3CSmoothEyeTrackingU3Ek__BackingField_17; }
	inline void set_U3CSmoothEyeTrackingU3Ek__BackingField_17(bool value)
	{
		___U3CSmoothEyeTrackingU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_gazeSmoother_18() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341, ___gazeSmoother_18)); }
	inline EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * get_gazeSmoother_18() const { return ___gazeSmoother_18; }
	inline EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D ** get_address_of_gazeSmoother_18() { return &___gazeSmoother_18; }
	inline void set_gazeSmoother_18(EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * value)
	{
		___gazeSmoother_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeSmoother_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccade_19() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341, ___OnSaccade_19)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccade_19() const { return ___OnSaccade_19; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccade_19() { return &___OnSaccade_19; }
	inline void set_OnSaccade_19(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccade_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccade_19), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeX_20() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341, ___OnSaccadeX_20)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeX_20() const { return ___OnSaccadeX_20; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeX_20() { return &___OnSaccadeX_20; }
	inline void set_OnSaccadeX_20(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeX_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeX_20), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeY_21() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341, ___OnSaccadeY_21)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeY_21() const { return ___OnSaccadeY_21; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeY_21() { return &___OnSaccadeY_21; }
	inline void set_OnSaccadeY_21(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeY_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeY_21), (void*)value);
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


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC  : public BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34
{
public:
	// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshSubsystem
	XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * ___meshSubsystem_43;
	// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshWorkQueue
	Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * ___meshWorkQueue_45;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshInfos
	List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * ___meshInfos_46;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::outstandingMeshObject
	SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * ___outstandingMeshObject_47;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::spareMeshObject
	SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * ___spareMeshObject_48;
	// System.Single Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::lastUpdated
	float ___lastUpdated_49;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverOrigin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObserverOrigin_58;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObservationExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObservationExtents_59;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverVolumeType
	int32_t ___oldObserverVolumeType_60;

public:
	inline static int32_t get_offset_of_meshSubsystem_43() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___meshSubsystem_43)); }
	inline XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * get_meshSubsystem_43() const { return ___meshSubsystem_43; }
	inline XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 ** get_address_of_meshSubsystem_43() { return &___meshSubsystem_43; }
	inline void set_meshSubsystem_43(XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * value)
	{
		___meshSubsystem_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshSubsystem_43), (void*)value);
	}

	inline static int32_t get_offset_of_meshWorkQueue_45() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___meshWorkQueue_45)); }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * get_meshWorkQueue_45() const { return ___meshWorkQueue_45; }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B ** get_address_of_meshWorkQueue_45() { return &___meshWorkQueue_45; }
	inline void set_meshWorkQueue_45(Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * value)
	{
		___meshWorkQueue_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshWorkQueue_45), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfos_46() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___meshInfos_46)); }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * get_meshInfos_46() const { return ___meshInfos_46; }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D ** get_address_of_meshInfos_46() { return &___meshInfos_46; }
	inline void set_meshInfos_46(List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * value)
	{
		___meshInfos_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfos_46), (void*)value);
	}

	inline static int32_t get_offset_of_outstandingMeshObject_47() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___outstandingMeshObject_47)); }
	inline SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * get_outstandingMeshObject_47() const { return ___outstandingMeshObject_47; }
	inline SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A ** get_address_of_outstandingMeshObject_47() { return &___outstandingMeshObject_47; }
	inline void set_outstandingMeshObject_47(SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * value)
	{
		___outstandingMeshObject_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outstandingMeshObject_47), (void*)value);
	}

	inline static int32_t get_offset_of_spareMeshObject_48() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___spareMeshObject_48)); }
	inline SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * get_spareMeshObject_48() const { return ___spareMeshObject_48; }
	inline SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A ** get_address_of_spareMeshObject_48() { return &___spareMeshObject_48; }
	inline void set_spareMeshObject_48(SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * value)
	{
		___spareMeshObject_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spareMeshObject_48), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdated_49() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___lastUpdated_49)); }
	inline float get_lastUpdated_49() const { return ___lastUpdated_49; }
	inline float* get_address_of_lastUpdated_49() { return &___lastUpdated_49; }
	inline void set_lastUpdated_49(float value)
	{
		___lastUpdated_49 = value;
	}

	inline static int32_t get_offset_of_oldObserverOrigin_58() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___oldObserverOrigin_58)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObserverOrigin_58() const { return ___oldObserverOrigin_58; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObserverOrigin_58() { return &___oldObserverOrigin_58; }
	inline void set_oldObserverOrigin_58(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObserverOrigin_58 = value;
	}

	inline static int32_t get_offset_of_oldObservationExtents_59() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___oldObservationExtents_59)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObservationExtents_59() const { return ___oldObservationExtents_59; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObservationExtents_59() { return &___oldObservationExtents_59; }
	inline void set_oldObservationExtents_59(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObservationExtents_59 = value;
	}

	inline static int32_t get_offset_of_oldObserverVolumeType_60() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___oldObserverVolumeType_60)); }
	inline int32_t get_oldObserverVolumeType_60() const { return ___oldObserverVolumeType_60; }
	inline int32_t* get_address_of_oldObserverVolumeType_60() { return &___oldObserverVolumeType_60; }
	inline void set_oldObserverVolumeType_60(int32_t value)
	{
		___oldObserverVolumeType_60 = value;
	}
};

struct GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_44;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ResumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumePerfMarker_50;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::SuspendPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendPerfMarker_51;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservationsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ClearObservationsPerfMarker_52;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateObserverPerfMarker_53;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMeshPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestMeshPerfMarker_54;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveMeshObjectPerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ReclaimMeshObjectPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ConfigureObserverVolumePerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateMeshesPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationActionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___MeshGenerationActionPerfMarker_62;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_44() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___UpdatePerfMarker_44)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_44() const { return ___UpdatePerfMarker_44; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_44() { return &___UpdatePerfMarker_44; }
	inline void set_UpdatePerfMarker_44(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_44 = value;
	}

	inline static int32_t get_offset_of_ResumePerfMarker_50() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___ResumePerfMarker_50)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumePerfMarker_50() const { return ___ResumePerfMarker_50; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumePerfMarker_50() { return &___ResumePerfMarker_50; }
	inline void set_ResumePerfMarker_50(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumePerfMarker_50 = value;
	}

	inline static int32_t get_offset_of_SuspendPerfMarker_51() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___SuspendPerfMarker_51)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendPerfMarker_51() const { return ___SuspendPerfMarker_51; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendPerfMarker_51() { return &___SuspendPerfMarker_51; }
	inline void set_SuspendPerfMarker_51(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendPerfMarker_51 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_52() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___ClearObservationsPerfMarker_52)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ClearObservationsPerfMarker_52() const { return ___ClearObservationsPerfMarker_52; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ClearObservationsPerfMarker_52() { return &___ClearObservationsPerfMarker_52; }
	inline void set_ClearObservationsPerfMarker_52(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ClearObservationsPerfMarker_52 = value;
	}

	inline static int32_t get_offset_of_UpdateObserverPerfMarker_53() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___UpdateObserverPerfMarker_53)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateObserverPerfMarker_53() const { return ___UpdateObserverPerfMarker_53; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateObserverPerfMarker_53() { return &___UpdateObserverPerfMarker_53; }
	inline void set_UpdateObserverPerfMarker_53(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateObserverPerfMarker_53 = value;
	}

	inline static int32_t get_offset_of_RequestMeshPerfMarker_54() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___RequestMeshPerfMarker_54)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestMeshPerfMarker_54() const { return ___RequestMeshPerfMarker_54; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestMeshPerfMarker_54() { return &___RequestMeshPerfMarker_54; }
	inline void set_RequestMeshPerfMarker_54(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestMeshPerfMarker_54 = value;
	}

	inline static int32_t get_offset_of_RemoveMeshObjectPerfMarker_55() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___RemoveMeshObjectPerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveMeshObjectPerfMarker_55() const { return ___RemoveMeshObjectPerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveMeshObjectPerfMarker_55() { return &___RemoveMeshObjectPerfMarker_55; }
	inline void set_RemoveMeshObjectPerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveMeshObjectPerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_ReclaimMeshObjectPerfMarker_56() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___ReclaimMeshObjectPerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ReclaimMeshObjectPerfMarker_56() const { return ___ReclaimMeshObjectPerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ReclaimMeshObjectPerfMarker_56() { return &___ReclaimMeshObjectPerfMarker_56; }
	inline void set_ReclaimMeshObjectPerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ReclaimMeshObjectPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_57() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___ConfigureObserverVolumePerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ConfigureObserverVolumePerfMarker_57() const { return ___ConfigureObserverVolumePerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ConfigureObserverVolumePerfMarker_57() { return &___ConfigureObserverVolumePerfMarker_57; }
	inline void set_ConfigureObserverVolumePerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ConfigureObserverVolumePerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_UpdateMeshesPerfMarker_61() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___UpdateMeshesPerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateMeshesPerfMarker_61() const { return ___UpdateMeshesPerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateMeshesPerfMarker_61() { return &___UpdateMeshesPerfMarker_61; }
	inline void set_UpdateMeshesPerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateMeshesPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_MeshGenerationActionPerfMarker_62() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___MeshGenerationActionPerfMarker_62)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_MeshGenerationActionPerfMarker_62() const { return ___MeshGenerationActionPerfMarker_62; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_MeshGenerationActionPerfMarker_62() { return &___MeshGenerationActionPerfMarker_62; }
	inline void set_MeshGenerationActionPerfMarker_62(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___MeshGenerationActionPerfMarker_62 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct WindowsMixedRealityCameraSettings_t8BEE60110DEE5BCC81583E1B4B765610BE4C4F86  : public BaseWindowsMixedRealityCameraSettings_t54A05E1A0CDD649EB4830579C1BF3279CC6365F8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C  : public XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719
{
public:
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::isActiveLoader
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isActiveLoader_25;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::mixedRealityGazeProviderHeadOverride
	RuntimeObject* ___mixedRealityGazeProviderHeadOverride_26;

public:
	inline static int32_t get_offset_of_isActiveLoader_25() { return static_cast<int32_t>(offsetof(WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C, ___isActiveLoader_25)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isActiveLoader_25() const { return ___isActiveLoader_25; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isActiveLoader_25() { return &___isActiveLoader_25; }
	inline void set_isActiveLoader_25(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isActiveLoader_25 = value;
	}

	inline static int32_t get_offset_of_mixedRealityGazeProviderHeadOverride_26() { return static_cast<int32_t>(offsetof(WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C, ___mixedRealityGazeProviderHeadOverride_26)); }
	inline RuntimeObject* get_mixedRealityGazeProviderHeadOverride_26() const { return ___mixedRealityGazeProviderHeadOverride_26; }
	inline RuntimeObject** get_address_of_mixedRealityGazeProviderHeadOverride_26() { return &___mixedRealityGazeProviderHeadOverride_26; }
	inline void set_mixedRealityGazeProviderHeadOverride_26(RuntimeObject* value)
	{
		___mixedRealityGazeProviderHeadOverride_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixedRealityGazeProviderHeadOverride_26), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand
struct WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A  : public BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926
{
public:
	// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handDefinition
	ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * ___handDefinition_25;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handMeshProvider
	WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * ___handMeshProvider_26;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::unityJointPoses
	Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * ___unityJointPoses_27;
	// System.Collections.Generic.List`1<UnityEngine.XR.Bone> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::fingerBones
	List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * ___fingerBones_29;

public:
	inline static int32_t get_offset_of_handDefinition_25() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A, ___handDefinition_25)); }
	inline ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * get_handDefinition_25() const { return ___handDefinition_25; }
	inline ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 ** get_address_of_handDefinition_25() { return &___handDefinition_25; }
	inline void set_handDefinition_25(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * value)
	{
		___handDefinition_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handDefinition_25), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshProvider_26() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A, ___handMeshProvider_26)); }
	inline WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * get_handMeshProvider_26() const { return ___handMeshProvider_26; }
	inline WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 ** get_address_of_handMeshProvider_26() { return &___handMeshProvider_26; }
	inline void set_handMeshProvider_26(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * value)
	{
		___handMeshProvider_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshProvider_26), (void*)value);
	}

	inline static int32_t get_offset_of_unityJointPoses_27() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A, ___unityJointPoses_27)); }
	inline Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * get_unityJointPoses_27() const { return ___unityJointPoses_27; }
	inline Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 ** get_address_of_unityJointPoses_27() { return &___unityJointPoses_27; }
	inline void set_unityJointPoses_27(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * value)
	{
		___unityJointPoses_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityJointPoses_27), (void*)value);
	}

	inline static int32_t get_offset_of_fingerBones_29() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A, ___fingerBones_29)); }
	inline List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * get_fingerBones_29() const { return ___fingerBones_29; }
	inline List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 ** get_address_of_fingerBones_29() { return &___fingerBones_29; }
	inline void set_fingerBones_29(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * value)
	{
		___fingerBones_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerBones_29), (void*)value);
	}
};

struct WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_StaticFields
{
public:
	// UnityEngine.XR.HandFinger[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handFingers
	HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* ___handFingers_28;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::rightPalmOffset
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightPalmOffset_30;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::leftPalmOffset
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftPalmOffset_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateControllerPerfMarker_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHandDataPerfMarker_33;

public:
	inline static int32_t get_offset_of_handFingers_28() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_StaticFields, ___handFingers_28)); }
	inline HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* get_handFingers_28() const { return ___handFingers_28; }
	inline HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F** get_address_of_handFingers_28() { return &___handFingers_28; }
	inline void set_handFingers_28(HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* value)
	{
		___handFingers_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handFingers_28), (void*)value);
	}

	inline static int32_t get_offset_of_rightPalmOffset_30() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_StaticFields, ___rightPalmOffset_30)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rightPalmOffset_30() const { return ___rightPalmOffset_30; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rightPalmOffset_30() { return &___rightPalmOffset_30; }
	inline void set_rightPalmOffset_30(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rightPalmOffset_30 = value;
	}

	inline static int32_t get_offset_of_leftPalmOffset_31() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_StaticFields, ___leftPalmOffset_31)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_leftPalmOffset_31() const { return ___leftPalmOffset_31; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_leftPalmOffset_31() { return &___leftPalmOffset_31; }
	inline void set_leftPalmOffset_31(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___leftPalmOffset_31 = value;
	}

	inline static int32_t get_offset_of_UpdateControllerPerfMarker_32() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_StaticFields, ___UpdateControllerPerfMarker_32)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateControllerPerfMarker_32() const { return ___UpdateControllerPerfMarker_32; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateControllerPerfMarker_32() { return &___UpdateControllerPerfMarker_32; }
	inline void set_UpdateControllerPerfMarker_32(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateControllerPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_UpdateHandDataPerfMarker_33() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_StaticFields, ___UpdateHandDataPerfMarker_33)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHandDataPerfMarker_33() const { return ___UpdateHandDataPerfMarker_33; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHandDataPerfMarker_33() { return &___UpdateHandDataPerfMarker_33; }
	inline void set_UpdateHandDataPerfMarker_33(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHandDataPerfMarker_33 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand
struct WindowsMixedRealityXRSDKGGVHand_t7069B22E6B4F63214A39BB47D630841EE12642CF  : public BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController
struct WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9  : public BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::controllerModelProvider
	WindowsMixedRealityControllerModelProvider_t7862D6C0DA4910D92EE88AE2F3FCA551C27AE743 * ___controllerModelProvider_27;

public:
	inline static int32_t get_offset_of_controllerModelProvider_27() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9, ___controllerModelProvider_27)); }
	inline WindowsMixedRealityControllerModelProvider_t7862D6C0DA4910D92EE88AE2F3FCA551C27AE743 * get_controllerModelProvider_27() const { return ___controllerModelProvider_27; }
	inline WindowsMixedRealityControllerModelProvider_t7862D6C0DA4910D92EE88AE2F3FCA551C27AE743 ** get_address_of_controllerModelProvider_27() { return &___controllerModelProvider_27; }
	inline void set_controllerModelProvider_27(WindowsMixedRealityControllerModelProvider_t7862D6C0DA4910D92EE88AE2F3FCA551C27AE743 * value)
	{
		___controllerModelProvider_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerModelProvider_27), (void*)value);
	}
};

struct WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateButtonDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateButtonDataPerfMarker_25;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateDualAxisDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateDualAxisDataPerfMarker_26;

public:
	inline static int32_t get_offset_of_UpdateButtonDataPerfMarker_25() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_StaticFields, ___UpdateButtonDataPerfMarker_25)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateButtonDataPerfMarker_25() const { return ___UpdateButtonDataPerfMarker_25; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateButtonDataPerfMarker_25() { return &___UpdateButtonDataPerfMarker_25; }
	inline void set_UpdateButtonDataPerfMarker_25(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateButtonDataPerfMarker_25 = value;
	}

	inline static int32_t get_offset_of_UpdateDualAxisDataPerfMarker_26() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_StaticFields, ___UpdateDualAxisDataPerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateDualAxisDataPerfMarker_26() const { return ___UpdateDualAxisDataPerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateDualAxisDataPerfMarker_26() { return &___UpdateDualAxisDataPerfMarker_26; }
	inline void set_UpdateDualAxisDataPerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateDualAxisDataPerfMarker_26 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController
struct HPMotionController_t8D7991733B4C20BE31145CF81CB6663DB3F4C501  : public WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9
{
public:

public:
};

struct HPMotionController_t8D7991733B4C20BE31145CF81CB6663DB3F4C501_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController::UpdateControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateControllerPerfMarker_28;

public:
	inline static int32_t get_offset_of_UpdateControllerPerfMarker_28() { return static_cast<int32_t>(offsetof(HPMotionController_t8D7991733B4C20BE31145CF81CB6663DB3F4C501_StaticFields, ___UpdateControllerPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateControllerPerfMarker_28() const { return ___UpdateControllerPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateControllerPerfMarker_28() { return &___UpdateControllerPerfMarker_28; }
	inline void set_UpdateControllerPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateControllerPerfMarker_28 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1  : public GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::oldObserverOrigin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObserverOrigin_64;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::oldObservationExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObservationExtents_65;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::oldObserverVolumeType
	int32_t ___oldObserverVolumeType_66;

public:
	inline static int32_t get_offset_of_oldObserverOrigin_64() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1, ___oldObserverOrigin_64)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObserverOrigin_64() const { return ___oldObserverOrigin_64; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObserverOrigin_64() { return &___oldObserverOrigin_64; }
	inline void set_oldObserverOrigin_64(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObserverOrigin_64 = value;
	}

	inline static int32_t get_offset_of_oldObservationExtents_65() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1, ___oldObservationExtents_65)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObservationExtents_65() const { return ___oldObservationExtents_65; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObservationExtents_65() { return &___oldObservationExtents_65; }
	inline void set_oldObservationExtents_65(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObservationExtents_65 = value;
	}

	inline static int32_t get_offset_of_oldObserverVolumeType_66() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1, ___oldObserverVolumeType_66)); }
	inline int32_t get_oldObserverVolumeType_66() const { return ___oldObserverVolumeType_66; }
	inline int32_t* get_address_of_oldObserverVolumeType_66() { return &___oldObserverVolumeType_66; }
	inline void set_oldObserverVolumeType_66(int32_t value)
	{
		___oldObserverVolumeType_66 = value;
	}
};

struct WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ConfigureObserverVolumePerfMarker_63;

public:
	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_63() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1_StaticFields, ___ConfigureObserverVolumePerfMarker_63)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ConfigureObserverVolumePerfMarker_63() const { return ___ConfigureObserverVolumePerfMarker_63; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ConfigureObserverVolumePerfMarker_63() { return &___ConfigureObserverVolumePerfMarker_63; }
	inline void set_ConfigureObserverVolumePerfMarker_63(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ConfigureObserverVolumePerfMarker_63 = value;
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
// UnityEngine.XR.HandFinger[]
struct HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F  : public RuntimeArray
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
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  m_Items[1];

public:
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  value)
	{
		m_Items[index] = value;
	}
};


// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_gshared_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::get_Service()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m985BA1C94F0384130AB1AFBCBB9A7866A9BD75B7_gshared_inline (BaseDataProvider_1_t5472B645E25171C2E317D45F750D5FF28CC299CF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m53DA92C371D548DD44E17EAA1EB21BE0CE8B4ED4_gshared (Dictionary_2_tAFEDE3C9AA32099A79643638296C906CB91D1ED1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Bone>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_gshared (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m8B6D2B3B16F427C0629E5656A3402F1568B990B4_gshared (Dictionary_2_tAFEDE3C9AA32099A79643638296C906CB91D1ED1 * __this, int32_t ___key0, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * ___value1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mBF1FE08B9E63353FDC7B861F23217F7FBF1B9EB6_gshared (Dictionary_2_tAFEDE3C9AA32099A79643638296C906CB91D1ED1 * __this, int32_t ___key0, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84_mBF33A79426FCB70587BF0C6F6EA11BD4122DD119_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84 * ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84_mB54B7F490BB0F43E94EC9C990CE0BC6B98B49226_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  MixedRealityPose_get_ZeroIdentity_m95D9F3844DD9A90DAEC2046FE9152D721CCF19D2_inline (const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.HPMotionControllerDefinition::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPMotionControllerDefinition__ctor_m22E65395AFB87602E52E3EBDD5432223D6699155 (HPMotionControllerDefinition_t575691F70AFFC019E7F3003F94054872691E1E14 * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__ctor_m45F405B8F62FFE8EA376F60B20EBEEEAAB3AB0A2 (WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___definition2, RuntimeObject* ___inputSource3, MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___interactions4, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_Enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m745CDDA851D0C022D2705E1E225AD97095F9200E_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateController_m4863A07EA619069FE1989D8576497DAB99D9F51F (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings__ctor_m8E20716194517A4EA0FFBA8C4EA263B2A8075F2E (BaseWindowsMixedRealityCameraSettings_t54A05E1A0CDD649EB4830579C1BF3279CC6365F8 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t96F629C1EDACEBBB6376D6C904A05C9BB28FD45D * ___profile3, const RuntimeMethod* method);
// UnityEngine.XR.XRDisplaySubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_DisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * XRSubsystemHelpers_get_DisplaySubsystem_mFF0DC34869AFB5EC6EE6342EE6A45CD397D0BDF8 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::get_displayOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_get_displayOpaque_m2EC8ECB705E0F250C8D27E06BF4C57D5F77FC02F (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager__ctor_m2D76961360C555DC9C9A647977055630DE5D1AA1 (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___profile3, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
inline bool Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_gshared_inline)(__this, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityDeviceManager_get_IsActiveLoader_m08FB90D272F688693F8217F6DC459B1C2922FB2D (WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_m0009FE0AE05820A130A513ADFC9CA5E119A00258 (BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_UtilitiesProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3A82CD7A8449F3178D0648CBB2E807C7A63404B_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKWindowsMixedRealityUtilitiesProvider__ctor_m2D11F0C211E7713049074BEA1A18D5C7BF634A1E (XRSDKWindowsMixedRealityUtilitiesProvider_t69ACD05B43664EA0D6D8B710C8DF26CF14106F5C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::set_UtilitiesProvider(Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities_set_UtilitiesProvider_m381532B72B3F177F082DC5C9727013A7B8AF1A3F_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_inline (BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02 *, const RuntimeMethod*))BaseDataProvider_1_get_Service_m985BA1C94F0384130AB1AFBCBB9A7866A9BD75B7_gshared_inline)(__this, method);
}
// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_SpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m49BBCD204EDA88228E051F0D51E4B3918BE667D9 (const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  DateTimeOffset_get_Now_m61B7689A79EE921AFDBCE65FA65A942A3DA0DC6E (const RuntimeMethod* method);
// Windows.Perception.PerceptionTimestamp Windows.Perception.PerceptionTimestampHelper::FromHistoricalTargetTime(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC * PerceptionTimestampHelper_FromHistoricalTargetTime_mD05C516F9E736D0DB9A5F7AEAE0E9CC446CA84F3 (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___targetTime0, const RuntimeMethod* method);
// Windows.UI.Input.Spatial.SpatialPointerPose Windows.UI.Input.Spatial.SpatialPointerPose::TryGetAtTimestamp(Windows.Perception.Spatial.SpatialCoordinateSystem,Windows.Perception.PerceptionTimestamp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * SpatialPointerPose_TryGetAtTimestamp_m0038031AA8B49B7F5B7716B9D771E71137C8812B (SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * ___coordinateSystem0, PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC * ___timestamp1, const RuntimeMethod* method);
// Windows.Perception.People.HeadPose Windows.UI.Input.Spatial.SpatialPointerPose::get_Head()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * SpatialPointerPose_get_Head_mC788CD23770CD682FC645D987F6C91B9768AC60A (SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * __this, const RuntimeMethod* method);
// System.Numerics.Vector3 Windows.Perception.People.HeadPose::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  HeadPose_get_Position_m06A502BCF1C798A30D4AE9AF5CC1F173E166117E (HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SystemNumericsExtensions::ToUnityVector3(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SystemNumericsExtensions_ToUnityVector3_mF2DFEE3A7E50484B07A92FE29AA3D72362948832 (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  ___vector0, const RuntimeMethod* method);
// System.Numerics.Vector3 Windows.Perception.People.HeadPose::get_ForwardDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  HeadPose_get_ForwardDirection_mA44E69DA5FB2AD26B29A168CF8715CC70B798A0E (HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_Update_m01102B71C2A04A1FAA31C76F4F23276DB20A930A (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Utilities.WindowsApiChecker::IsMethodAvailable(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsApiChecker_IsMethodAvailable_m8B14037A5F4FCF2F442CF985A43B61FD3D2CB820 (String_t* ___namespaceName0, String_t* ___className1, String_t* ___methodName2, const RuntimeMethod* method);
// System.Boolean Windows.UI.Input.Spatial.SpatialInteractionManager::IsSourceKindSupported(Windows.UI.Input.Spatial.SpatialInteractionSourceKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialInteractionManager_IsSourceKindSupported_m5ADA1FAB14D51E057C9097C2B24D01C0E3A88EB8 (int32_t ___kind0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * XRSDKDeviceManager_GetControllerType_m309CA4C4AE2810E368AF337AA4184DD4A059413F (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetInputSourceType_mECB86645E61238DABA9F19486FA60F9CD876A1E3 (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method);
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method);
// System.Boolean System.Enum::HasFlag(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E (RuntimeObject * __this, Enum_t23B90B40F60E677A8025267341651C94AE079CDA * ___flag0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m18C3DB44FFE8E7ACFF29F2F83E54A2F057AFF1C5 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___usage0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___value1, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver__ctor_m7E45C6FFDD70F257A6E0CEAE211FFFAF43707838 (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___profile3, const RuntimeMethod* method);
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_MeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * XRSubsystemHelpers_get_MeshSubsystem_mB3774523D71311D7EF6A872ED278BF340CADDBD1 (const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverOrigin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObserverOrigin_m9282BED93FC4AF70C2863489DEFED55C2B83FDED_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObservationExtents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObservationExtents_m67BC5BCC6087055769FBC61DB6B799FF9E3C5FFF_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverVolumeType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_m62911E2D01AEFF3B937001C1427CC9E888953565_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRMeshSubsystem::SetBoundingVolume(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystem_SetBoundingVolume_mEEEFB719CE72346BF549DC5245C218F7A5699D92 (XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___extents1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
inline void Dictionary_2__ctor_mEBA54D53782CDC8695416345EA43239C678D9804 (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 *, const RuntimeMethod*))Dictionary_2__ctor_m53DA92C371D548DD44E17EAA1EB21BE0CE8B4ED4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Bone>::.ctor()
inline void List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *, const RuntimeMethod*))List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition__ctor_m88202268E417A42F6970E2B27CDAE8113F3F1496 (ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * __this, RuntimeObject* ___source0, uint8_t ___handedness1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[],Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__ctor_m2CDE85CD3E67CA6A3043A38D4D7252480570E4E2 (BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926 * __this, int32_t ___trackingState0, uint8_t ___sourceHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___interactions3, RuntimeObject* ___definition4, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::get_Right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * WindowsMixedRealityHandMeshProvider_get_Right_mAC848208D65400E71D5CE269433D22DACF182399_inline (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::get_Left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * WindowsMixedRealityHandMeshProvider_get_Left_m9E2B8543634A457D94FE9724B4DB2B2FB43FB61D_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::SetInputSource(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandMeshProvider_SetInputSource_m1D6F142463932589921C97F315B4B57D7CC27B34 (WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * __this, RuntimeObject* ___inputSource0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m9CC878FE7F12DF8B4C25C62C80A68ECAC784E0C0 (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * __this, int32_t ___key0, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 *, int32_t, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m8B6D2B3B16F427C0629E5656A3402F1568B990B4_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArticulatedHandDefinition_get_IsInPointingPose_m321BFC0307BB8CB312C4D342CDC5934DB9DB788E (ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_m14F8E84B440B0C6B76C05FD3D65205E6C3C99169 (WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_Interactions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentIndexPose(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateCurrentIndexPose_m1E0B044B733AE6DEE1B540B464B3FCD1A74C1AAB (ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentTeleportPose(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateCurrentTeleportPose_mE59589D129BE0EB240D3E6FF11BDD59FD4E3E833 (ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, const RuntimeMethod* method);
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
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>,UnityEngine.XR.Hand&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mC71ECD9D8F61BB5D594DD9DFB33D1ED86698EC0D (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  ___usage0, Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Hand::TryGetFingerBones(UnityEngine.XR.HandFinger,System.Collections.Generic.List`1<UnityEngine.XR.Bone>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_TryGetFingerBones_mFA237811578942428A5EEA801791B1A3CE8C651A (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * __this, int32_t ___finger0, List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * ___bonesOut1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::ConvertToTrackedHandJoint(UnityEngine.XR.HandFinger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityXRSDKArticulatedHand_ConvertToTrackedHandJoint_mB716789EE67E8A2D42CAC9DDCB859156319B3664 (WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A * __this, int32_t ___finger0, int32_t ___index1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Item(System.Int32)
inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  (*) (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *, int32_t, const RuntimeMethod*))List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.XR.Bone::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_TryGetPosition_m261057D3419C036E0CEE6F42398398601977DD0A (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Bone::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_TryGetRotation_mEB7B9EED27F1BD731F9ECB467CFC3B3A475CBF69 (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPose__ctor_m0722BE081AA8822BC7EE321C14172F2D9B0B2A9D (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mF484F413794D98215D2E5F187E5AE70CB0E01197 (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * __this, int32_t ___key0, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 *, int32_t, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 , const RuntimeMethod*))Dictionary_2_set_Item_mBF1FE08B9E63353FDC7B861F23217F7FBF1B9EB6_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Count()
inline int32_t List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *, const RuntimeMethod*))List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_gshared_inline)(__this, method);
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Rotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPose_get_Rotation_mB4E8D3A137342387D99494B4A52255B2D9029EF9_inline (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateHandJoints(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateHandJoints_m232530C5E22F8A78E1E4ACD18785250386FAF02E (ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * __this, Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * ___jointPoses0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimpleHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleHandDefinition__ctor_m5443732B9437541C1C05AFB911DA8B0619BE7A4D (SimpleHandDefinition_t20142A50977A1B1B0C68AFD8C1FF9610C9D23D75 * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityControllerDefinition::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityControllerDefinition__ctor_mE6AD8D3F28BD1F60B5934E99B1C288FA0A209DC9 (WindowsMixedRealityControllerDefinition_tDABBC06841C17A28BEA058F9E4F9E015459E80FD * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateButtonData_m718BAC7ADD76632A1AE25DAC2CF4B4A60B4DB994 (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___usage0, bool* ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_BoolData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_BoolData_m03B2CF34CC007394B4B0B3FD0240F117234ADA6C (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m5D39EBEE43023C9782742ECC3700D75CD8AF9875_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateDualAxisData_m1111D3819BAC4A38A19DEE9B7152CE5F380D1877 (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_Vector2Data(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_Vector2Data_m8CA7FB7512D98FF6DAE149E436533E060A4FA5C2 (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Vector2Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MixedRealityInteractionMapping_get_Vector2Data_mF9CAEAE7685F531EF44CC7011606F7C21EA0B6D6_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile Microsoft.MixedReality.Toolkit.Input.BaseController::GetControllerVisualizationProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1 * BaseController_GetControllerVisualizationProfile_m1993022D11E1D1020C3BACE9EB4BD30B45EEFE1C (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::GetUsePlatformModelsOverride(System.Type,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityControllerVisualizationProfile_GetUsePlatformModelsOverride_mF3C0943E3136E2E22710FCB620901B20C7EC6514 (MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1 * __this, Type_t * ___controllerType0, uint8_t ___hand1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::TryRenderControllerModel(System.Type,Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseController_TryRenderControllerModel_mC03274675FC5E04BD7B8EFC960402F307C7B4D58 (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, Type_t * ___controllerType0, int32_t ___inputSourceType1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::TryRenderControllerModelWithModelProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController_TryRenderControllerModelWithModelProvider_mA8D620931772C791DF050EFAD12597823FB0966D (WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84_mBF33A79426FCB70587BF0C6F6EA11BD4122DD119 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84_mBF33A79426FCB70587BF0C6F6EA11BD4122DD119_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityControllerModelProvider__ctor_mBDB7DEC1439374344F987C5F8C50A30702E7A106 (WindowsMixedRealityControllerModelProvider_t7862D6C0DA4910D92EE88AE2F3FCA551C27AE743 * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider::TryGenerateControllerModelFromPlatformSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * WindowsMixedRealityControllerModelProvider_TryGenerateControllerModelFromPlatformSDK_m0BF2A3D9A5DE5B20BAF91C9CB819DC8848BEC50B (WindowsMixedRealityControllerModelProvider_t7862D6C0DA4910D92EE88AE2F3FCA551C27AE743 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<UnityEngine.GameObject>::GetAwaiter()
inline TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631 (Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  (*) (Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>,Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84_mB066508E4CA9F618CA7F07D3CEF5EA1E5D88716F (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * ___awaiter0, U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *, U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84_mB54B7F490BB0F43E94EC9C990CE0BC6B98B49226_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>::GetResult()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2 (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::GetControllerVisualizationTypeOverride(System.Type,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SystemType_t8D2323983B85594F1037C020D3497109700B78DF * MixedRealityControllerVisualizationProfile_GetControllerVisualizationTypeOverride_mFBDA9051302D7F9B5E4C6F5A8EA3B2EC3597A883 (MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1 * __this, Type_t * ___controllerType0, uint8_t ___hand1, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_mC447B3C20EA164CE4877D3F893AF3C4BA592AA9F_inline (SystemType_t8D2323983B85594F1037C020D3497109700B78DF * __this, const RuntimeMethod* method);
// UnityEngine.Component Microsoft.MixedReality.Toolkit.ComponentExtensions::EnsureComponent(UnityEngine.GameObject,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ComponentExtensions_EnsureComponent_mD16AB32B7FA5600C0D7C38428F9AA4D796BD1DEE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, Type_t * ___component1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::TryAddControllerModelToSceneHierarchy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseController_TryAddControllerModelToSceneHierarchy_m3D9AE996E995710DABEC0DC54221043C454ADD78 (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___controllerObject0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::<>n__0(System.Type,Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKMotionController_U3CU3En__0_mE1AFCAA2FA3982A27F6F24C582547965A8D4C71C (WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * __this, Type_t * ___controllerType0, int32_t ___inputSourceType1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryRenderControllerModelWithModelProviderU3Ed__8_MoveNext_mA8A3DAB9FD8AA84A8A4215A21353BBBF2F2B54EC (U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryRenderControllerModelWithModelProviderU3Ed__8_SetStateMachine_mCF749A47B202BE5FBEF4CA3D49E0464C79DCA26B (U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[],Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__ctor_m2CDE85CD3E67CA6A3043A38D4D7252480570E4E2 (BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926 * __this, int32_t ___trackingState0, uint8_t ___sourceHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___interactions3, RuntimeObject* ___definition4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
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
		// : base(trackingState, sourceHandedness, inputSource, interactions, definition)
		int32_t L_3 = ___trackingState0;
		uint8_t L_4 = ___sourceHandedness1;
		RuntimeObject* L_5 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_6 = ___interactions3;
		RuntimeObject* L_7 = ___definition4;
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		GenericXRSDKController__ctor_m7A614E451D0964103F9223A7E495FB49F2C599E3(__this, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource_UpdatePoseData_m94DA9B646FB7C792339F5697A069F7AB357052DA (BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var);
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
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926_il2cpp_TypeInfo_var))->get_UpdatePoseDataPerfMarker_24();
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__cctor_m2F3E1F42263FCFA48E7933F13B2333C991ED9F08 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A5BE3D9EC03D84AA06ACF74FA1941F878D4B478);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePoseDataPerfMarker = new ProfilerMarker("[MRTK] BaseWindowsMixedRealityXRSDKSource.UpdatePoseData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral5A5BE3D9EC03D84AA06ACF74FA1941F878D4B478, /*hidden argument*/NULL);
		((BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926_il2cpp_TypeInfo_var))->set_UpdatePoseDataPerfMarker_24(L_0);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPMotionController__ctor_m024E0773A7B1A427ADB9A3F809B9CC322F2BCF3A (HPMotionController_t8D7991733B4C20BE31145CF81CB6663DB3F4C501 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPMotionControllerDefinition_t575691F70AFFC019E7F3003F94054872691E1E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(trackingState, controllerHandedness, new HPMotionControllerDefinition(controllerHandedness), inputSource, interactions)
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		uint8_t L_2 = ___controllerHandedness1;
		HPMotionControllerDefinition_t575691F70AFFC019E7F3003F94054872691E1E14 * L_3 = (HPMotionControllerDefinition_t575691F70AFFC019E7F3003F94054872691E1E14 *)il2cpp_codegen_object_new(HPMotionControllerDefinition_t575691F70AFFC019E7F3003F94054872691E1E14_il2cpp_TypeInfo_var);
		HPMotionControllerDefinition__ctor_m22E65395AFB87602E52E3EBDD5432223D6699155(L_3, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_5 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_il2cpp_TypeInfo_var);
		WindowsMixedRealityXRSDKMotionController__ctor_m45F405B8F62FFE8EA376F60B20EBEEEAAB3AB0A2(__this, L_0, L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPMotionController_UpdateController_mE9536D9458189DFE0DB45F027BFB21A4BE439082 (HPMotionController_t8D7991733B4C20BE31145CF81CB6663DB3F4C501 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPMotionController_t8D7991733B4C20BE31145CF81CB6663DB3F4C501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// using (UpdateControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(HPMotionController_t8D7991733B4C20BE31145CF81CB6663DB3F4C501_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((HPMotionController_t8D7991733B4C20BE31145CF81CB6663DB3F4C501_StaticFields*)il2cpp_codegen_static_fields_for(HPMotionController_t8D7991733B4C20BE31145CF81CB6663DB3F4C501_il2cpp_TypeInfo_var))->get_UpdateControllerPerfMarker_28();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (!Enabled) { return; }
			bool L_2;
			L_2 = BaseController_get_Enabled_m745CDDA851D0C022D2705E1E225AD97095F9200E_inline(__this, /*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_0018;
			}
		}

IL_0016:
		{
			// if (!Enabled) { return; }
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		}

IL_0018:
		{
			// base.UpdateController(inputDevice);
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_3 = ___inputDevice0;
			GenericXRSDKController_UpdateController_m4863A07EA619069FE1989D8576497DAB99D9F51F(__this, L_3, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPMotionController__cctor_m334388DBFB81F9F01D33FCB94FFC84B18442E0A8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPMotionController_t8D7991733B4C20BE31145CF81CB6663DB3F4C501_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D17FEBF4804F05DE32748DA39E72ABF808EAB75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateControllerPerfMarker = new ProfilerMarker("[MRTK] HPController.UpdateController");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral2D17FEBF4804F05DE32748DA39E72ABF808EAB75, /*hidden argument*/NULL);
		((HPMotionController_t8D7991733B4C20BE31145CF81CB6663DB3F4C501_StaticFields*)il2cpp_codegen_static_fields_for(HPMotionController_t8D7991733B4C20BE31145CF81CB6663DB3F4C501_il2cpp_TypeInfo_var))->set_UpdateControllerPerfMarker_28(L_0);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityCameraSettings__ctor_m622EB65962C748B47B9C2C5E263A305AFA2C0A2E (WindowsMixedRealityCameraSettings_t8BEE60110DEE5BCC81583E1B4B765610BE4C4F86 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t96F629C1EDACEBBB6376D6C904A05C9BB28FD45D * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityCameraSettings_t54A05E1A0CDD649EB4830579C1BF3279CC6365F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseCameraSettingsProfile profile = null) : base(cameraSystem, name, priority, profile)
		RuntimeObject* L_0 = ___cameraSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseCameraSettingsProfile_t96F629C1EDACEBBB6376D6C904A05C9BB28FD45D * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityCameraSettings_t54A05E1A0CDD649EB4830579C1BF3279CC6365F8_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityCameraSettings__ctor_m8E20716194517A4EA0FFBA8C4EA263B2A8075F2E(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettings_get_IsOpaque_m5EE9AC67407764B900190C73F649272D9B4B413D (WindowsMixedRealityCameraSettings_t8BEE60110DEE5BCC81583E1B4B765610BE4C4F86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * G_B2_0 = NULL;
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * G_B1_0 = NULL;
	{
		// public override bool IsOpaque => XRSubsystemHelpers.DisplaySubsystem?.displayOpaque ?? true;
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_0;
		L_0 = XRSubsystemHelpers_get_DisplaySubsystem_mFF0DC34869AFB5EC6EE6342EE6A45CD397D0BDF8(/*hidden argument*/NULL);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = XRDisplaySubsystem_get_displayOpaque_m2EC8ECB705E0F250C8D27E06BF4C57D5F77FC02F(G_B2_0, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager__ctor_m5876B94B05AFA544446C698218183C31C16C27B6 (WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___profile3, const RuntimeMethod* method)
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
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityDeviceManager_get_IsActiveLoader_m08FB90D272F688693F8217F6DC459B1C2922FB2D (WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return isActiveLoader ?? false;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * L_0 = __this->get_address_of_isActiveLoader_25();
		bool L_1;
		L_1 = Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)L_0, /*hidden argument*/Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_Enable_m1C772D590DAF026098E840ECA846D24803388213 (WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGazeProviderHeadOverride_t8D9ECC46DE5064F18B7D51AD741C53170793B629_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKWindowsMixedRealityUtilitiesProvider_t69ACD05B43664EA0D6D8B710C8DF26CF14106F5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B6_0 = NULL;
	WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C * G_B6_1 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C * G_B5_1 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C * G_B7_1 = NULL;
	{
		// if (!IsActiveLoader)
		bool L_0;
		L_0 = WindowsMixedRealityDeviceManager_get_IsActiveLoader_m08FB90D272F688693F8217F6DC459B1C2922FB2D(__this, /*hidden argument*/NULL);
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
		// if (WindowsMixedRealityUtilities.UtilitiesProvider == null)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3A82CD7A8449F3178D0648CBB2E807C7A63404B_inline(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		// WindowsMixedRealityUtilities.UtilitiesProvider = new XRSDKWindowsMixedRealityUtilitiesProvider();
		XRSDKWindowsMixedRealityUtilitiesProvider_t69ACD05B43664EA0D6D8B710C8DF26CF14106F5C * L_2 = (XRSDKWindowsMixedRealityUtilitiesProvider_t69ACD05B43664EA0D6D8B710C8DF26CF14106F5C *)il2cpp_codegen_object_new(XRSDKWindowsMixedRealityUtilitiesProvider_t69ACD05B43664EA0D6D8B710C8DF26CF14106F5C_il2cpp_TypeInfo_var);
		XRSDKWindowsMixedRealityUtilitiesProvider__ctor_m2D11F0C211E7713049074BEA1A18D5C7BF634A1E(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_il2cpp_TypeInfo_var);
		WindowsMixedRealityUtilities_set_UtilitiesProvider_m381532B72B3F177F082DC5C9727013A7B8AF1A3F_inline(L_2, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// mixedRealityGazeProviderHeadOverride = Service?.GazeProvider as IMixedRealityGazeProviderHeadOverride;
		RuntimeObject* L_3;
		L_3 = BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_RuntimeMethod_var);
		RuntimeObject* L_4 = L_3;
		G_B5_0 = L_4;
		G_B5_1 = __this;
		if (L_4)
		{
			G_B6_0 = L_4;
			G_B6_1 = __this;
			goto IL_0035;
		}
	}
	{
		G_B7_0 = ((RuntimeObject*)(NULL));
		G_B7_1 = G_B5_1;
		goto IL_003a;
	}

IL_0035:
	{
		NullCheck(G_B6_0);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_GazeProvider() */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B6_0);
		G_B7_0 = L_5;
		G_B7_1 = G_B6_1;
	}

IL_003a:
	{
		NullCheck(G_B7_1);
		G_B7_1->set_mixedRealityGazeProviderHeadOverride_26(((RuntimeObject*)IsInst((RuntimeObject*)G_B7_0, IMixedRealityGazeProviderHeadOverride_t8D9ECC46DE5064F18B7D51AD741C53170793B629_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_Update_m26542F13B67B358EAE636F4B03A29ECFB22B7281 (WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGazeProviderHeadOverride_t8D9ECC46DE5064F18B7D51AD741C53170793B629_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * V_0 = NULL;
	HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * V_1 = NULL;
	{
		// if (!IsEnabled)
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean Microsoft.MixedReality.Toolkit.BaseService::get_IsEnabled() */, __this);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (mixedRealityGazeProviderHeadOverride != null && mixedRealityGazeProviderHeadOverride.UseHeadGazeOverride && WindowsMixedRealityUtilities.SpatialCoordinateSystem != null)
		RuntimeObject* L_1 = __this->get_mixedRealityGazeProviderHeadOverride_26();
		if (!L_1)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_mixedRealityGazeProviderHeadOverride_26();
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride::get_UseHeadGazeOverride() */, IMixedRealityGazeProviderHeadOverride_t8D9ECC46DE5064F18B7D51AD741C53170793B629_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_4;
		L_4 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m49BBCD204EDA88228E051F0D51E4B3918BE667D9(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0068;
		}
	}
	{
		// SpatialPointerPose pointerPose = SpatialPointerPose.TryGetAtTimestamp(WindowsMixedRealityUtilities.SpatialCoordinateSystem, PerceptionTimestampHelper.FromHistoricalTargetTime(DateTimeOffset.Now));
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_5;
		L_5 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m49BBCD204EDA88228E051F0D51E4B3918BE667D9(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_6;
		L_6 = DateTimeOffset_get_Now_m61B7689A79EE921AFDBCE65FA65A942A3DA0DC6E(/*hidden argument*/NULL);
		PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC * L_7;
		L_7 = PerceptionTimestampHelper_FromHistoricalTargetTime_mD05C516F9E736D0DB9A5F7AEAE0E9CC446CA84F3(L_6, /*hidden argument*/NULL);
		SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * L_8;
		L_8 = SpatialPointerPose_TryGetAtTimestamp_m0038031AA8B49B7F5B7716B9D771E71137C8812B(L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// if (pointerPose != null)
		SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * L_9 = V_0;
		if (!L_9)
		{
			goto IL_0068;
		}
	}
	{
		// HeadPose head = pointerPose.Head;
		SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * L_10 = V_0;
		NullCheck(L_10);
		HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * L_11;
		L_11 = SpatialPointerPose_get_Head_mC788CD23770CD682FC645D987F6C91B9768AC60A(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// if (head != null)
		HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * L_12 = V_1;
		if (!L_12)
		{
			goto IL_0068;
		}
	}
	{
		// mixedRealityGazeProviderHeadOverride.OverrideHeadGaze(head.Position.ToUnityVector3(), head.ForwardDirection.ToUnityVector3());
		RuntimeObject* L_13 = __this->get_mixedRealityGazeProviderHeadOverride_26();
		HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * L_14 = V_1;
		NullCheck(L_14);
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_15;
		L_15 = HeadPose_get_Position_m06A502BCF1C798A30D4AE9AF5CC1F173E166117E(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = SystemNumericsExtensions_ToUnityVector3_mF2DFEE3A7E50484B07A92FE29AA3D72362948832(L_15, /*hidden argument*/NULL);
		HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * L_17 = V_1;
		NullCheck(L_17);
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_18;
		L_18 = HeadPose_get_ForwardDirection_mA44E69DA5FB2AD26B29A168CF8715CC70B798A0E(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = SystemNumericsExtensions_ToUnityVector3_mF2DFEE3A7E50484B07A92FE29AA3D72362948832(L_18, /*hidden argument*/NULL);
		NullCheck(L_13);
		InterfaceActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride::OverrideHeadGaze(UnityEngine.Vector3,UnityEngine.Vector3) */, IMixedRealityGazeProviderHeadOverride_t8D9ECC46DE5064F18B7D51AD741C53170793B629_il2cpp_TypeInfo_var, L_13, L_16, L_19);
	}

IL_0068:
	{
		// base.Update();
		XRSDKDeviceManager_Update_m01102B71C2A04A1FAA31C76F4F23276DB20A930A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityDeviceManager_CheckCapability_mC0C5FFC8C8FB9BFB7B35C96841C401C06BCA0691 (WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral128270CB9B422C506B33DF7B8F1F3DC8C29B370E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81F8D5A2B14C55B9620FD335C1C81C032F2D97AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F991A577B59807EF90D8A8D94880C28E92D7D4E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WindowsApiChecker.IsMethodAvailable(
		//     "Windows.UI.Input.Spatial",
		//     "SpatialInteractionManager",
		//     "IsSourceKindSupported"))
		bool L_0;
		L_0 = WindowsApiChecker_IsMethodAvailable_m8B14037A5F4FCF2F442CF985A43B61FD3D2CB820(_stringLiteral81F8D5A2B14C55B9620FD335C1C81C032F2D97AE, _stringLiteral8F991A577B59807EF90D8A8D94880C28E92D7D4E, _stringLiteral128270CB9B422C506B33DF7B8F1F3DC8C29B370E, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_1 = ___capability0;
		if ((!(((uint32_t)L_1) > ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___capability0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_004b;
	}

IL_0020:
	{
		// return SpatialInteractionManager.IsSourceKindSupported(SpatialInteractionSourceKind.Hand);
		bool L_3;
		L_3 = SpatialInteractionManager_IsSourceKindSupported_m5ADA1FAB14D51E057C9097C2B24D01C0E3A88EB8(1, /*hidden argument*/NULL);
		return L_3;
	}

IL_0027:
	{
		// return SpatialInteractionManager.IsSourceKindSupported(SpatialInteractionSourceKind.Controller);
		bool L_4;
		L_4 = SpatialInteractionManager_IsSourceKindSupported_m5ADA1FAB14D51E057C9097C2B24D01C0E3A88EB8(3, /*hidden argument*/NULL);
		return L_4;
	}

IL_002e:
	{
		// if (XRSubsystemHelpers.DisplaySubsystem != null && !XRSubsystemHelpers.DisplaySubsystem.displayOpaque)
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_5;
		L_5 = XRSubsystemHelpers_get_DisplaySubsystem_mFF0DC34869AFB5EC6EE6342EE6A45CD397D0BDF8(/*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_6;
		L_6 = XRSubsystemHelpers_get_DisplaySubsystem_mFF0DC34869AFB5EC6EE6342EE6A45CD397D0BDF8(/*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = XRDisplaySubsystem_get_displayOpaque_m2EC8ECB705E0F250C8D27E06BF4C57D5F77FC02F(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0046;
		}
	}
	{
		// return capability == MixedRealityCapability.GGVHand;
		int32_t L_8 = ___capability0;
		return (bool)((((int32_t)L_8) == ((int32_t)1))? 1 : 0);
	}

IL_0046:
	{
		// return capability == MixedRealityCapability.MotionController;
		int32_t L_9 = ___capability0;
		return (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
	}

IL_004b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * WindowsMixedRealityDeviceManager_GetControllerType_m6B37C0EA9830271D4A8D961BC43428288B8EDEEF (WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPMotionController_t8D7991733B4C20BE31145CF81CB6663DB3F4C501_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKGGVHand_t7069B22E6B4F63214A39BB47D630841EE12642CF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___supportedControllerType0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___supportedControllerType0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)32))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_2 = ___supportedControllerType0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)1024))))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0055;
	}

IL_0017:
	{
		int32_t L_3 = ___supportedControllerType0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)2048))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_4 = ___supportedControllerType0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)4096))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_0055;
	}

IL_0029:
	{
		// return typeof(WindowsMixedRealityXRSDKMotionController);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0034:
	{
		// return typeof(HPMotionController);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (HPMotionController_t8D7991733B4C20BE31145CF81CB6663DB3F4C501_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_003f:
	{
		// return typeof(WindowsMixedRealityXRSDKArticulatedHand);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10;
		L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_004a:
	{
		// return typeof(WindowsMixedRealityXRSDKGGVHand);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKGGVHand_t7069B22E6B4F63214A39BB47D630841EE12642CF_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0055:
	{
		// return base.GetControllerType(supportedControllerType);
		int32_t L_13 = ___supportedControllerType0;
		Type_t * L_14;
		L_14 = XRSDKDeviceManager_GetControllerType_m309CA4C4AE2810E368AF337AA4184DD4A059413F(__this, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityDeviceManager_GetInputSourceType_m9ABEFA40692E49D0B912B5E7B3789AB0BAADDD81 (WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___supportedControllerType0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___supportedControllerType0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)32))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = ___supportedControllerType0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0029;
		}
	}
	{
		goto IL_002b;
	}

IL_0017:
	{
		int32_t L_3 = ___supportedControllerType0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)2048))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_4 = ___supportedControllerType0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)4096)))))
		{
			goto IL_002b;
		}
	}

IL_0027:
	{
		// return InputSourceType.Controller;
		return (int32_t)(2);
	}

IL_0029:
	{
		// return InputSourceType.Hand;
		return (int32_t)(1);
	}

IL_002b:
	{
		// return base.GetInputSourceType(supportedControllerType);
		int32_t L_5 = ___supportedControllerType0;
		int32_t L_6;
		L_6 = XRSDKDeviceManager_GetInputSourceType_mECB86645E61238DABA9F19486FA60F9CD876A1E3(__this, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityDeviceManager_GetCurrentControllerType_m852806D682AC31A663C31B0731439FD4AA3ED322 (WindowsMixedRealityDeviceManager_t63368249BF655A75C3BDCF5D870F99AD597FB76C * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
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
			goto IL_005f;
		}
	}
	{
		// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Left) ||
		//     inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Right))
		uint32_t L_6;
		L_6 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_7);
		uint32_t L_9 = ((int32_t)256);
		RuntimeObject * L_10 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_9);
		NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_8);
		bool L_11;
		L_11 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_8, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_12;
		L_12 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_13);
		uint32_t L_15 = ((int32_t)512);
		RuntimeObject * L_16 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_15);
		NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_14);
		bool L_17;
		L_17 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_14, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0059;
		}
	}

IL_0053:
	{
		// return SupportedControllerType.ArticulatedHand;
		return (int32_t)(((int32_t)1024));
	}

IL_0059:
	{
		// return SupportedControllerType.GGVHand;
		return (int32_t)(((int32_t)2048));
	}

IL_005f:
	{
		// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Controller))
		uint32_t L_18;
		L_18 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_19);
		uint32_t L_21 = ((int32_t)64);
		RuntimeObject * L_22 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_21);
		NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_20);
		bool L_23;
		L_23 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_20, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0092;
		}
	}
	{
		// if (!inputDevice.TryGetFeatureValue(CommonUsages.primary2DAxis, out _))
		IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_24 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primary2DAxis_17();
		bool L_25;
		L_25 = InputDevice_TryGetFeatureValue_m18C3DB44FFE8E7ACFF29F2F83E54A2F057AFF1C5((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), L_24, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_008f;
		}
	}
	{
		// return SupportedControllerType.HPMotionController;
		return (int32_t)(((int32_t)4096));
	}

IL_008f:
	{
		// return SupportedControllerType.WindowsMixedReality;
		return (int32_t)(((int32_t)32));
	}

IL_0092:
	{
		// return base.GetCurrentControllerType(inputDevice);
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_26 = ___inputDevice0;
		int32_t L_27;
		L_27 = XRSDKDeviceManager_GetCurrentControllerType_m1C93AC6F31F7A5DBC5B40BC6CD102131D13C9843(__this, L_26, /*hidden argument*/NULL);
		return L_27;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider__ctor_m64907EEB4071EF7EE73826D0D4AB5EED3F726AC6 (WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeX_m5CBDF3998194F00D84357BCFC5CBA6D01103328F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeY_mDBE8A810F5EC01D6D52307250C6A7388EE86FBB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccade_m12345AFE3D6F25EEA7913BABDF24C6760207F0A1_RuntimeMethod_var);
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
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, __this, (intptr_t)((intptr_t)WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccade_m12345AFE3D6F25EEA7913BABDF24C6760207F0A1_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		EyeGazeSmoother_add_OnSaccade_m52B66A9B6DA24DE9ACC7F5943CD36081BCBC2BC7(L_5, L_6, /*hidden argument*/NULL);
		// gazeSmoother.OnSaccadeX += GazeSmoother_OnSaccadeX;
		EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * L_7 = __this->get_gazeSmoother_18();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, __this, (intptr_t)((intptr_t)WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeX_m5CBDF3998194F00D84357BCFC5CBA6D01103328F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		EyeGazeSmoother_add_OnSaccadeX_m867524242EE0CA58956E168DA6273B818DB20BFF(L_7, L_8, /*hidden argument*/NULL);
		// gazeSmoother.OnSaccadeY += GazeSmoother_OnSaccadeY;
		EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * L_9 = __this->get_gazeSmoother_18();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, __this, (intptr_t)((intptr_t)WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeY_mDBE8A810F5EC01D6D52307250C6A7388EE86FBB1_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		EyeGazeSmoother_add_OnSaccadeY_m88565C53FBE145DBCE7A7B1839AA3B5DFBBE90D7(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::get_SmoothEyeTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityEyeGazeDataProvider_get_SmoothEyeTracking_m2D938381BDB33540B191631FE37A6DD51EF10F3B (WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341 * __this, const RuntimeMethod* method)
{
	{
		// public bool SmoothEyeTracking { get; set; } = false;
		bool L_0 = __this->get_U3CSmoothEyeTrackingU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::set_SmoothEyeTracking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_set_SmoothEyeTracking_m6B787D4D3DFDC87A809243E1D248D431EC266951 (WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SmoothEyeTracking { get; set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CSmoothEyeTrackingU3Ek__BackingField_17(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeSaccadeProvider Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::get_SaccadeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityEyeGazeDataProvider_get_SaccadeProvider_mB27849F7C641BBA2ED0FF8C779015FCD2AA9442B (WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityEyeSaccadeProvider SaccadeProvider => gazeSmoother;
		EyeGazeSmoother_t19754B8F37943F740CC1864F6D5A22353B1CA08D * L_0 = __this->get_gazeSmoother_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::add_OnSaccade(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_add_OnSaccade_m6BB679B6EB2BCEF7DF9CC3FC244C583C5734FE08 (WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::remove_OnSaccade(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_remove_OnSaccade_m0383B6F0421C01CD31C61A24498DBCCAE651F3F6 (WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::GazeSmoother_OnSaccade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccade_m12345AFE3D6F25EEA7913BABDF24C6760207F0A1 (WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::add_OnSaccadeX(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_add_OnSaccadeX_m1CF594F90EC7C66F1B932948A7297A3A95958774 (WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::remove_OnSaccadeX(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_remove_OnSaccadeX_mF6DBB6670F6212103CD474D522575AF2BB8214C9 (WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::GazeSmoother_OnSaccadeX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeX_m5CBDF3998194F00D84357BCFC5CBA6D01103328F (WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::add_OnSaccadeY(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_add_OnSaccadeY_m3CE69AD993EEDC74DBE01791DEF39E8733ABF672 (WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::remove_OnSaccadeY(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_remove_OnSaccadeY_m3F7DD25E74F76F590B38960A483507CBFAFF167D (WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::GazeSmoother_OnSaccadeY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeY_mDBE8A810F5EC01D6D52307250C6A7388EE86FBB1 (WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341 * __this, const RuntimeMethod* method)
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
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityEyeGazeDataProvider_CheckCapability_mCE6DB0D937E0B15B7B8E5D4CBCDF5578BA014AEB (WindowsMixedRealityEyeGazeDataProvider_t043BB70F825B3DAA3A38AAE0C360D28FE983A341 * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	{
		// false;
		return (bool)0;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver__ctor_m64BA26875EBFE1A8BBA1AFA1D26E6028C2854ADB (WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1 * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 oldObserverOrigin = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_oldObserverOrigin_64(L_0);
		// private Vector3 oldObservationExtents = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_oldObservationExtents_65(L_1);
		// BaseMixedRealityProfile profile = null) : base(spatialAwarenessSystem, name, priority, profile)
		RuntimeObject* L_2 = ___spatialAwarenessSystem0;
		String_t* L_3 = ___name1;
		uint32_t L_4 = ___priority2;
		BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * L_5 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		GenericXRSDKSpatialMeshObserver__ctor_m7E45C6FFDD70F257A6E0CEAE211FFFAF43707838(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::ConfigureObserverVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver_ConfigureObserverVolume_m8BE28AAB2D95B166104988EFA0216F9C7172BF1F (WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeType_t11AC6FAC40E92E70FF009521E8269903592AAD31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD97DB8E8CA849A2783B8DA9F426364AEBA3DC48C);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (XRSubsystemHelpers.MeshSubsystem == null
		//     || (oldObserverOrigin == ObserverOrigin
		//     && oldObservationExtents == ObservationExtents
		//     && oldObserverVolumeType == ObserverVolumeType))
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_0;
		L_0 = XRSubsystemHelpers_get_MeshSubsystem_mB3774523D71311D7EF6A872ED278BF340CADDBD1(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_oldObserverOrigin_64();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = BaseSpatialObserver_get_ObserverOrigin_m9282BED93FC4AF70C2863489DEFED55C2B83FDED_inline(__this, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_oldObservationExtents_65();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = BaseSpatialObserver_get_ObservationExtents_m67BC5BCC6087055769FBC61DB6B799FF9E3C5FFF_inline(__this, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_7 = __this->get_oldObserverVolumeType_66();
		int32_t L_8;
		L_8 = BaseSpatialObserver_get_ObserverVolumeType_m62911E2D01AEFF3B937001C1427CC9E888953565_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_003c;
		}
	}

IL_003b:
	{
		// return;
		return;
	}

IL_003c:
	{
		// using (ConfigureObserverVolumePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_9 = ((WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1_il2cpp_TypeInfo_var))->get_ConfigureObserverVolumePerfMarker_63();
		V_1 = L_9;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_10;
		L_10 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_004a:
	try
	{ // begin try (depth: 1)
		{
			// switch (ObserverVolumeType)
			int32_t L_11;
			L_11 = BaseSpatialObserver_get_ObserverVolumeType_m62911E2D01AEFF3B937001C1427CC9E888953565_inline(__this, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_11) == ((uint32_t)1))))
			{
				goto IL_006c;
			}
		}

IL_0053:
		{
			// XRSubsystemHelpers.MeshSubsystem.SetBoundingVolume(ObserverOrigin, ObservationExtents);
			IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
			XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_12;
			L_12 = XRSubsystemHelpers_get_MeshSubsystem_mB3774523D71311D7EF6A872ED278BF340CADDBD1(/*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
			L_13 = BaseSpatialObserver_get_ObserverOrigin_m9282BED93FC4AF70C2863489DEFED55C2B83FDED_inline(__this, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
			L_14 = BaseSpatialObserver_get_ObservationExtents_m67BC5BCC6087055769FBC61DB6B799FF9E3C5FFF_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_12);
			bool L_15;
			L_15 = XRMeshSubsystem_SetBoundingVolume_mEEEFB719CE72346BF549DC5245C218F7A5699D92(L_12, L_13, L_14, /*hidden argument*/NULL);
			// break;
			goto IL_0086;
		}

IL_006c:
		{
			// Debug.LogError($"Unsupported ObserverVolumeType value {ObserverVolumeType}");
			int32_t L_16;
			L_16 = BaseSpatialObserver_get_ObserverVolumeType_m62911E2D01AEFF3B937001C1427CC9E888953565_inline(__this, /*hidden argument*/NULL);
			int32_t L_17 = L_16;
			RuntimeObject * L_18 = Box(VolumeType_t11AC6FAC40E92E70FF009521E8269903592AAD31_il2cpp_TypeInfo_var, &L_17);
			String_t* L_19;
			L_19 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralD97DB8E8CA849A2783B8DA9F426364AEBA3DC48C, L_18, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_19, /*hidden argument*/NULL);
		}

IL_0086:
		{
			// oldObserverOrigin = ObserverOrigin;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
			L_20 = BaseSpatialObserver_get_ObserverOrigin_m9282BED93FC4AF70C2863489DEFED55C2B83FDED_inline(__this, /*hidden argument*/NULL);
			__this->set_oldObserverOrigin_64(L_20);
			// oldObservationExtents = ObservationExtents;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
			L_21 = BaseSpatialObserver_get_ObservationExtents_m67BC5BCC6087055769FBC61DB6B799FF9E3C5FFF_inline(__this, /*hidden argument*/NULL);
			__this->set_oldObservationExtents_65(L_21);
			// oldObserverVolumeType = ObserverVolumeType;
			int32_t L_22;
			L_22 = BaseSpatialObserver_get_ObserverVolumeType_m62911E2D01AEFF3B937001C1427CC9E888953565_inline(__this, /*hidden argument*/NULL);
			__this->set_oldObserverVolumeType_66(L_22);
			// }
			IL2CPP_LEAVE(0xBA, FINALLY_00ac);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ac;
	}

FINALLY_00ac:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(172)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(172)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBA, IL_00ba)
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver__cctor_m8F2BBF8BC227DB3B56DDA49278C4A6A69E1D2E5C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E7289C914AD935B08BB625EBF3E6C9BF64F8E8D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker ConfigureObserverVolumePerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealitySpatialMeshObserver.ConfigureObserverVolume");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral1E7289C914AD935B08BB625EBF3E6C9BF64F8E8D, /*hidden argument*/NULL);
		((WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealitySpatialMeshObserver_t904050F6391F52975624E7F66209B515C0DBB4D1_il2cpp_TypeInfo_var))->set_ConfigureObserverVolumePerfMarker_63(L_0);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand__ctor_m535B8212ABAC547C6761B6B1B07CD5CA58B91450 (WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEBA54D53782CDC8695416345EA43239C678D9804_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A * G_B2_0 = NULL;
	WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A * G_B1_0 = NULL;
	WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * G_B3_0 = NULL;
	WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A * G_B3_1 = NULL;
	{
		// private readonly Dictionary<TrackedHandJoint, MixedRealityPose> unityJointPoses = new Dictionary<TrackedHandJoint, MixedRealityPose>();
		Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_0 = (Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 *)il2cpp_codegen_object_new(Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEBA54D53782CDC8695416345EA43239C678D9804(L_0, /*hidden argument*/Dictionary_2__ctor_mEBA54D53782CDC8695416345EA43239C678D9804_RuntimeMethod_var);
		__this->set_unityJointPoses_27(L_0);
		// private readonly List<Bone> fingerBones = new List<Bone>();
		List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_1 = (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *)il2cpp_codegen_object_new(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_il2cpp_TypeInfo_var);
		List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E(L_1, /*hidden argument*/List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_RuntimeMethod_var);
		__this->set_fingerBones_29(L_1);
		// : base(trackingState, controllerHandedness, inputSource, interactions, new ArticulatedHandDefinition(inputSource, controllerHandedness))
		int32_t L_2 = ___trackingState0;
		uint8_t L_3 = ___controllerHandedness1;
		RuntimeObject* L_4 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_5 = ___interactions3;
		RuntimeObject* L_6 = ___inputSource2;
		uint8_t L_7 = ___controllerHandedness1;
		ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * L_8 = (ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 *)il2cpp_codegen_object_new(ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0_il2cpp_TypeInfo_var);
		ArticulatedHandDefinition__ctor_m88202268E417A42F6970E2B27CDAE8113F3F1496(L_8, L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityXRSDKSource__ctor_m2CDE85CD3E67CA6A3043A38D4D7252480570E4E2(__this, L_2, L_3, L_4, L_5, L_8, /*hidden argument*/NULL);
		// handDefinition = Definition as ArticulatedHandDefinition;
		RuntimeObject* L_9;
		L_9 = VirtFuncInvoker0< RuntimeObject* >::Invoke(20 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition Microsoft.MixedReality.Toolkit.Input.BaseController::get_Definition() */, __this);
		__this->set_handDefinition_25(((ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 *)IsInstClass((RuntimeObject*)L_9, ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0_il2cpp_TypeInfo_var)));
		// handMeshProvider = (controllerHandedness == Handedness.Left) ? WindowsMixedRealityHandMeshProvider.Left : WindowsMixedRealityHandMeshProvider.Right;
		uint8_t L_10 = ___controllerHandedness1;
		G_B1_0 = __this;
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			G_B2_0 = __this;
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * L_11;
		L_11 = WindowsMixedRealityHandMeshProvider_get_Right_mAC848208D65400E71D5CE269433D22DACF182399_inline(/*hidden argument*/NULL);
		G_B3_0 = L_11;
		G_B3_1 = G_B1_0;
		goto IL_004a;
	}

IL_0045:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * L_12;
		L_12 = WindowsMixedRealityHandMeshProvider_get_Left_m9E2B8543634A457D94FE9724B4DB2B2FB43FB61D_inline(/*hidden argument*/NULL);
		G_B3_0 = L_12;
		G_B3_1 = G_B2_0;
	}

IL_004a:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_handMeshProvider_26(G_B3_0);
		// handMeshProvider.SetInputSource(inputSource);
		WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * L_13 = __this->get_handMeshProvider_26();
		RuntimeObject* L_14 = ___inputSource2;
		NullCheck(L_13);
		WindowsMixedRealityHandMeshProvider_SetInputSource_m1D6F142463932589921C97F315B4B57D7CC27B34(L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKArticulatedHand_TryGetJoint_m3BEF77F1FDD2C5175A157F4F0AD7A55BCD6EBBCC (WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A * __this, int32_t ___joint0, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m9CC878FE7F12DF8B4C25C62C80A68ECAC784E0C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool TryGetJoint(TrackedHandJoint joint, out MixedRealityPose pose) => unityJointPoses.TryGetValue(joint, out pose);
		Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_0 = __this->get_unityJointPoses_27();
		int32_t L_1 = ___joint0;
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m9CC878FE7F12DF8B4C25C62C80A68ECAC784E0C0(L_0, L_1, (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m9CC878FE7F12DF8B4C25C62C80A68ECAC784E0C0_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKArticulatedHand_get_IsInPointingPose_mCD23A0C81665135DD28A42B56B38DBE24666C15F (WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsInPointingPose => handDefinition.IsInPointingPose;
		ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * L_0 = __this->get_handDefinition_25();
		NullCheck(L_0);
		bool L_1;
		L_1 = ArticulatedHandDefinition_get_IsInPointingPose_m321BFC0307BB8CB312C4D342CDC5934DB9DB788E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateController_m25897520DE7719BBB15C99C2CFBDCABB30375A4C (WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * G_B8_0 = NULL;
	ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * G_B7_0 = NULL;
	ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * G_B11_0 = NULL;
	ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * G_B10_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	int32_t G_B16_1 = 0;
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
		// using (UpdateControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1 = ((WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var))->get_UpdateControllerPerfMarker_32();
		V_1 = L_1;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2;
		L_2 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			// base.UpdateController(inputDevice);
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_3 = ___inputDevice0;
			GenericXRSDKController_UpdateController_m4863A07EA619069FE1989D8576497DAB99D9F51F(__this, L_3, /*hidden argument*/NULL);
			// UpdateHandData(inputDevice);
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_4 = ___inputDevice0;
			WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_m14F8E84B440B0C6B76C05FD3D65205E6C3C99169(__this, L_4, /*hidden argument*/NULL);
			// for (int i = 0; i < Interactions?.Length; i++)
			V_2 = 0;
			goto IL_0079;
		}

IL_0029:
		{
			// switch (Interactions[i].InputType)
			MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_5;
			L_5 = BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline(__this, /*hidden argument*/NULL);
			int32_t L_6 = V_2;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			NullCheck(L_8);
			int32_t L_9;
			L_9 = MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline(L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			int32_t L_10 = V_3;
			if ((((int32_t)L_10) == ((int32_t)((int32_t)17))))
			{
				goto IL_005c;
			}
		}

IL_003c:
		{
			int32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)33)))))
			{
				goto IL_0075;
			}
		}

IL_0041:
		{
			// handDefinition?.UpdateCurrentIndexPose(Interactions[i]);
			ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * L_12 = __this->get_handDefinition_25();
			ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * L_13 = L_12;
			G_B7_0 = L_13;
			if (L_13)
			{
				G_B8_0 = L_13;
				goto IL_004d;
			}
		}

IL_004a:
		{
			goto IL_0075;
		}

IL_004d:
		{
			MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_14;
			L_14 = BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline(__this, /*hidden argument*/NULL);
			int32_t L_15 = V_2;
			NullCheck(L_14);
			int32_t L_16 = L_15;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
			NullCheck(G_B8_0);
			ArticulatedHandDefinition_UpdateCurrentIndexPose_m1E0B044B733AE6DEE1B540B464B3FCD1A74C1AAB(G_B8_0, L_17, /*hidden argument*/NULL);
			// break;
			goto IL_0075;
		}

IL_005c:
		{
			// handDefinition?.UpdateCurrentTeleportPose(Interactions[i]);
			ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * L_18 = __this->get_handDefinition_25();
			ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * L_19 = L_18;
			G_B10_0 = L_19;
			if (L_19)
			{
				G_B11_0 = L_19;
				goto IL_0068;
			}
		}

IL_0065:
		{
			goto IL_0075;
		}

IL_0068:
		{
			MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_20;
			L_20 = BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline(__this, /*hidden argument*/NULL);
			int32_t L_21 = V_2;
			NullCheck(L_20);
			int32_t L_22 = L_21;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
			NullCheck(G_B11_0);
			ArticulatedHandDefinition_UpdateCurrentTeleportPose_mE59589D129BE0EB240D3E6FF11BDD59FD4E3E833(G_B11_0, L_23, /*hidden argument*/NULL);
		}

IL_0075:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_24 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		}

IL_0079:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_25 = V_2;
			MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_26;
			L_26 = BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_27 = L_26;
			G_B14_0 = L_27;
			G_B14_1 = L_25;
			if (L_27)
			{
				G_B15_0 = L_27;
				G_B15_1 = L_25;
				goto IL_0090;
			}
		}

IL_0083:
		{
			il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_28 = V_5;
			G_B16_0 = L_28;
			G_B16_1 = G_B14_1;
			goto IL_0097;
		}

IL_0090:
		{
			NullCheck(G_B15_0);
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_29;
			memset((&L_29), 0, sizeof(L_29));
			Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_29), ((int32_t)((int32_t)(((RuntimeArray*)G_B15_0)->max_length))), /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
			G_B16_0 = L_29;
			G_B16_1 = G_B15_1;
		}

IL_0097:
		{
			V_4 = G_B16_0;
			int32_t L_30;
			L_30 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
			bool L_31;
			L_31 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
			if (((int32_t)((int32_t)((((int32_t)G_B16_1) < ((int32_t)L_30))? 1 : 0)&(int32_t)L_31)))
			{
				goto IL_0029;
			}
		}

IL_00af:
		{
			// }
			IL2CPP_LEAVE(0xBF, FINALLY_00b1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b1;
	}

FINALLY_00b1:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(177)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(177)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_m14F8E84B440B0C6B76C05FD3D65205E6C3C99169 (WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF484F413794D98215D2E5F187E5AE70CB0E01197_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Hand_tB64007EC8D01384426C93432737BA9C5F636A690  V_2;
	memset((&V_2), 0, sizeof(V_2));
	HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * G_B11_1 = NULL;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * G_B10_1 = NULL;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B12_1;
	memset((&G_B12_1), 0, sizeof(G_B12_1));
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * G_B12_2 = NULL;
	ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * G_B17_0 = NULL;
	ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * G_B16_0 = NULL;
	{
		// using (UpdateHandDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var))->get_UpdateHandDataPerfMarker_33();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.handData, out hand))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  L_2 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_handData_49();
			bool L_3;
			L_3 = InputDevice_TryGetFeatureValue_mC71ECD9D8F61BB5D594DD9DFB33D1ED86698EC0D((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), L_2, (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)(&V_2), /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0139;
			}
		}

IL_0021:
		{
			// foreach (HandFinger finger in handFingers)
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var);
			HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* L_4 = ((WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var))->get_handFingers_28();
			V_3 = L_4;
			V_4 = 0;
			goto IL_0118;
		}

IL_002f:
		{
			// foreach (HandFinger finger in handFingers)
			HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* L_5 = V_3;
			int32_t L_6 = V_4;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			int32_t L_8 = (int32_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			V_5 = L_8;
			// if (hand.TryGetFingerBones(finger, fingerBones))
			int32_t L_9 = V_5;
			List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_10 = __this->get_fingerBones_29();
			bool L_11;
			L_11 = Hand_TryGetFingerBones_mFA237811578942428A5EEA801791B1A3CE8C651A((Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)(&V_2), L_9, L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0112;
			}
		}

IL_0049:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			V_7 = 0;
			goto IL_00c3;
		}

IL_004e:
		{
			// TrackedHandJoint trackedHandJoint = ConvertToTrackedHandJoint(finger, i);
			int32_t L_12 = V_5;
			int32_t L_13 = V_7;
			int32_t L_14;
			L_14 = WindowsMixedRealityXRSDKArticulatedHand_ConvertToTrackedHandJoint_mB716789EE67E8A2D42CAC9DDCB859156319B3664(__this, L_12, L_13, /*hidden argument*/NULL);
			V_8 = L_14;
			// Bone bone = fingerBones[i];
			List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_15 = __this->get_fingerBones_29();
			int32_t L_16 = V_7;
			NullCheck(L_15);
			Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  L_17;
			L_17 = List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_RuntimeMethod_var);
			V_9 = L_17;
			// Vector3 position = Vector3.zero;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
			L_18 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
			V_10 = L_18;
			// Quaternion rotation = Quaternion.identity;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
			L_19 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
			V_11 = L_19;
			// bool positionAvailable = bone.TryGetPosition(out position);
			bool L_20;
			L_20 = Bone_TryGetPosition_m261057D3419C036E0CEE6F42398398601977DD0A((Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)(&V_9), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_10), /*hidden argument*/NULL);
			// bool rotationAvailable = bone.TryGetRotation(out rotation);
			bool L_21;
			L_21 = Bone_TryGetRotation_mEB7B9EED27F1BD731F9ECB467CFC3B3A475CBF69((Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)(&V_9), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_11), /*hidden argument*/NULL);
			V_12 = L_21;
			// if (positionAvailable || rotationAvailable)
			bool L_22 = V_12;
			if (!((int32_t)((int32_t)L_20|(int32_t)L_22)))
			{
				goto IL_00bd;
			}
		}

IL_0090:
		{
			// position = MixedRealityPlayspace.TransformPoint(position);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_10;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			L_24 = MixedRealityPlayspace_TransformPoint_m19E4EA2C7A16830A9C76F73E557E44D6817211F3(L_23, /*hidden argument*/NULL);
			V_10 = L_24;
			// rotation = MixedRealityPlayspace.Rotation * rotation;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
			L_25 = MixedRealityPlayspace_get_Rotation_m4C3F294754D54E4604AFEEB0E8399BFF5933DF05(/*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26 = V_11;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
			L_27 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_25, L_26, /*hidden argument*/NULL);
			V_11 = L_27;
			// unityJointPoses[trackedHandJoint] = new MixedRealityPose(position, rotation);
			Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_28 = __this->get_unityJointPoses_27();
			int32_t L_29 = V_8;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_10;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31 = V_11;
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_32;
			memset((&L_32), 0, sizeof(L_32));
			MixedRealityPose__ctor_m0722BE081AA8822BC7EE321C14172F2D9B0B2A9D((&L_32), L_30, L_31, /*hidden argument*/NULL);
			NullCheck(L_28);
			Dictionary_2_set_Item_mF484F413794D98215D2E5F187E5AE70CB0E01197(L_28, L_29, L_32, /*hidden argument*/Dictionary_2_set_Item_mF484F413794D98215D2E5F187E5AE70CB0E01197_RuntimeMethod_var);
		}

IL_00bd:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			int32_t L_33 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		}

IL_00c3:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			int32_t L_34 = V_7;
			List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_35 = __this->get_fingerBones_29();
			NullCheck(L_35);
			int32_t L_36;
			L_36 = List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_inline(L_35, /*hidden argument*/List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_RuntimeMethod_var);
			if ((((int32_t)L_34) < ((int32_t)L_36)))
			{
				goto IL_004e;
			}
		}

IL_00d5:
		{
			// MixedRealityPose palmPose = CurrentControllerPose;
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_37 = ((GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 *)__this)->get_CurrentControllerPose_12();
			V_6 = L_37;
			// palmPose.Rotation *= (ControllerHandedness == Handedness.Left ? leftPalmOffset : rightPalmOffset);
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * L_38 = (&V_6);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39;
			L_39 = MixedRealityPose_get_Rotation_mB4E8D3A137342387D99494B4A52255B2D9029EF9_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)L_38, /*hidden argument*/NULL);
			uint8_t L_40;
			L_40 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(__this, /*hidden argument*/NULL);
			G_B10_0 = L_39;
			G_B10_1 = L_38;
			if ((((int32_t)L_40) == ((int32_t)1)))
			{
				G_B11_0 = L_39;
				G_B11_1 = L_38;
				goto IL_00f5;
			}
		}

IL_00ee:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_41 = ((WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var))->get_rightPalmOffset_30();
			G_B12_0 = L_41;
			G_B12_1 = G_B10_0;
			G_B12_2 = G_B10_1;
			goto IL_00fa;
		}

IL_00f5:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_42 = ((WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var))->get_leftPalmOffset_31();
			G_B12_0 = L_42;
			G_B12_1 = G_B11_0;
			G_B12_2 = G_B11_1;
		}

IL_00fa:
		{
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_43;
			L_43 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(G_B12_1, G_B12_0, /*hidden argument*/NULL);
			MixedRealityPose_set_Rotation_m880A6F5D3947A513E13FEDE089FE7C677A58B27D_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)G_B12_2, L_43, /*hidden argument*/NULL);
			// unityJointPoses[TrackedHandJoint.Palm] = palmPose;
			Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_44 = __this->get_unityJointPoses_27();
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_45 = V_6;
			NullCheck(L_44);
			Dictionary_2_set_Item_mF484F413794D98215D2E5F187E5AE70CB0E01197(L_44, 2, L_45, /*hidden argument*/Dictionary_2_set_Item_mF484F413794D98215D2E5F187E5AE70CB0E01197_RuntimeMethod_var);
		}

IL_0112:
		{
			int32_t L_46 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		}

IL_0118:
		{
			// foreach (HandFinger finger in handFingers)
			int32_t L_47 = V_4;
			HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* L_48 = V_3;
			NullCheck(L_48);
			if ((((int32_t)L_47) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))))))
			{
				goto IL_002f;
			}
		}

IL_0122:
		{
			// handDefinition?.UpdateHandJoints(unityJointPoses);
			ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * L_49 = __this->get_handDefinition_25();
			ArticulatedHandDefinition_t4B736CE90577E68B89B1B8DA23F4D083123C42D0 * L_50 = L_49;
			G_B16_0 = L_50;
			if (L_50)
			{
				G_B17_0 = L_50;
				goto IL_012e;
			}
		}

IL_012b:
		{
			IL2CPP_LEAVE(0x149, FINALLY_013b);
		}

IL_012e:
		{
			Dictionary_2_tABC45B7C67E921F533EBEF222CFE2B891AA1E098 * L_51 = __this->get_unityJointPoses_27();
			NullCheck(G_B17_0);
			ArticulatedHandDefinition_UpdateHandJoints_m232530C5E22F8A78E1E4ACD18785250386FAF02E(G_B17_0, L_51, /*hidden argument*/NULL);
		}

IL_0139:
		{
			// }
			IL2CPP_LEAVE(0x149, FINALLY_013b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_013b;
	}

FINALLY_013b:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(315)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(315)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x149, IL_0149)
	}

IL_0149:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::ConvertToTrackedHandJoint(UnityEngine.XR.HandFinger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityXRSDKArticulatedHand_ConvertToTrackedHandJoint_mB716789EE67E8A2D42CAC9DDCB859156319B3664 (WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A * __this, int32_t ___finger0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___finger0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_002b;
			}
			case 3:
			{
				goto IL_0030;
			}
			case 4:
			{
				goto IL_0035;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_001c:
	{
		// case HandFinger.Thumb: return (index == 0) ? TrackedHandJoint.Wrist : TrackedHandJoint.ThumbMetacarpalJoint + index - 1;
		int32_t L_1 = ___index1;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_2)), (int32_t)1)));
	}

IL_0025:
	{
		return (int32_t)(1);
	}

IL_0027:
	{
		// case HandFinger.Index: return TrackedHandJoint.IndexMetacarpal + index;
		int32_t L_3 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add((int32_t)7, (int32_t)L_3)));
	}

IL_002b:
	{
		// case HandFinger.Middle: return TrackedHandJoint.MiddleMetacarpal + index;
		int32_t L_4 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)12), (int32_t)L_4)));
	}

IL_0030:
	{
		// case HandFinger.Ring: return TrackedHandJoint.RingMetacarpal + index;
		int32_t L_5 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)17), (int32_t)L_5)));
	}

IL_0035:
	{
		// case HandFinger.Pinky: return TrackedHandJoint.PinkyMetacarpal + index;
		int32_t L_6 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)22), (int32_t)L_6)));
	}

IL_003a:
	{
		// default: return TrackedHandJoint.None;
		return (int32_t)(0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand__cctor_mC4CB359D41A051ED5D8E3106300F30AE9BED598F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A57AA97AFEF7EB7F78B04FD34217B8FF3C332F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BF210AC4CF6C5202CCE0CB170B4C8BCAEFE439B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly HandFinger[] handFingers = Enum.GetValues(typeof(HandFinger)) as HandFinger[];
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_2;
		L_2 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_1, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var))->set_handFingers_28(((HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F*)IsInst((RuntimeObject*)L_2, HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F_il2cpp_TypeInfo_var)));
		// private static readonly Quaternion rightPalmOffset = new Quaternion(Mathf.Sqrt(0.125f), Mathf.Sqrt(0.125f), -Mathf.Sqrt(1.5f) / 2.0f, Mathf.Sqrt(1.5f) / 2.0f);
		float L_3;
		L_3 = sqrtf((0.125f));
		float L_4;
		L_4 = sqrtf((0.125f));
		float L_5;
		L_5 = sqrtf((1.5f));
		float L_6;
		L_6 = sqrtf((1.5f));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_7), L_3, L_4, ((float)((float)((-L_5))/(float)(2.0f))), ((float)((float)L_6/(float)(2.0f))), /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var))->set_rightPalmOffset_30(L_7);
		// private static readonly Quaternion leftPalmOffset = new Quaternion(Mathf.Sqrt(0.125f), -Mathf.Sqrt(0.125f), Mathf.Sqrt(1.5f) / 2.0f, Mathf.Sqrt(1.5f) / 2.0f);
		float L_8;
		L_8 = sqrtf((0.125f));
		float L_9;
		L_9 = sqrtf((0.125f));
		float L_10;
		L_10 = sqrtf((1.5f));
		float L_11;
		L_11 = sqrtf((1.5f));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_12), L_8, ((-L_9)), ((float)((float)L_10/(float)(2.0f))), ((float)((float)L_11/(float)(2.0f))), /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var))->set_leftPalmOffset_31(L_12);
		// private static readonly ProfilerMarker UpdateControllerPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKArticulatedHand.UpdateController");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_13;
		memset((&L_13), 0, sizeof(L_13));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_13), _stringLiteral7BF210AC4CF6C5202CCE0CB170B4C8BCAEFE439B, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var))->set_UpdateControllerPerfMarker_32(L_13);
		// private static readonly ProfilerMarker UpdateHandDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKArticulatedHand.UpdateHandData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_14;
		memset((&L_14), 0, sizeof(L_14));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_14), _stringLiteral6A57AA97AFEF7EB7F78B04FD34217B8FF3C332F6, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_tAD2739E91E944874D84462C191B11376C47F281A_il2cpp_TypeInfo_var))->set_UpdateHandDataPerfMarker_33(L_14);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKGGVHand__ctor_mADB00F0F7D384DE2B2CA2CD3DC4728C8A9ACF3A8 (WindowsMixedRealityXRSDKGGVHand_t7069B22E6B4F63214A39BB47D630841EE12642CF * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleHandDefinition_t20142A50977A1B1B0C68AFD8C1FF9610C9D23D75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(trackingState, controllerHandedness, inputSource, interactions, new SimpleHandDefinition(controllerHandedness))
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		RuntimeObject* L_2 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_3 = ___interactions3;
		uint8_t L_4 = ___controllerHandedness1;
		SimpleHandDefinition_t20142A50977A1B1B0C68AFD8C1FF9610C9D23D75 * L_5 = (SimpleHandDefinition_t20142A50977A1B1B0C68AFD8C1FF9610C9D23D75 *)il2cpp_codegen_object_new(SimpleHandDefinition_t20142A50977A1B1B0C68AFD8C1FF9610C9D23D75_il2cpp_TypeInfo_var);
		SimpleHandDefinition__ctor_m5443732B9437541C1C05AFB911DA8B0619BE7A4D(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityXRSDKSource__ctor_m2CDE85CD3E67CA6A3043A38D4D7252480570E4E2(__this, L_0, L_1, L_2, L_3, L_5, /*hidden argument*/NULL);
		// { }
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__ctor_mCD6BF704E1E27857BE7DFDB1DBFBA26F9733E8E0 (WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityControllerDefinition_tDABBC06841C17A28BEA058F9E4F9E015459E80FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(trackingState, controllerHandedness, new WindowsMixedRealityControllerDefinition(controllerHandedness), inputSource, interactions)
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		uint8_t L_2 = ___controllerHandedness1;
		WindowsMixedRealityControllerDefinition_tDABBC06841C17A28BEA058F9E4F9E015459E80FD * L_3 = (WindowsMixedRealityControllerDefinition_tDABBC06841C17A28BEA058F9E4F9E015459E80FD *)il2cpp_codegen_object_new(WindowsMixedRealityControllerDefinition_tDABBC06841C17A28BEA058F9E4F9E015459E80FD_il2cpp_TypeInfo_var);
		WindowsMixedRealityControllerDefinition__ctor_mE6AD8D3F28BD1F60B5934E99B1C288FA0A209DC9(L_3, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_5 = ___interactions3;
		WindowsMixedRealityXRSDKMotionController__ctor_m45F405B8F62FFE8EA376F60B20EBEEEAAB3AB0A2(__this, L_0, L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__ctor_m45F405B8F62FFE8EA376F60B20EBEEEAAB3AB0A2 (WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___definition2, RuntimeObject* ___inputSource3, MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___interactions4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(trackingState, controllerHandedness, inputSource, interactions, definition)
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		RuntimeObject* L_2 = ___inputSource3;
		MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_3 = ___interactions4;
		RuntimeObject* L_4 = ___definition2;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_t757879BB80C20216E4C773E21FA77988440D4926_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityXRSDKSource__ctor_m2CDE85CD3E67CA6A3043A38D4D7252480570E4E2(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController_UpdateButtonData_m181E4C16E168A45ADB244A97558753F4EA741E59 (WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	RuntimeObject* G_B17_0 = NULL;
	{
		// using (UpdateButtonDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_il2cpp_TypeInfo_var))->get_UpdateButtonDataPerfMarker_25();
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
			V_4 = L_3;
			int32_t L_4 = V_4;
			if ((((int32_t)L_4) == ((int32_t)((int32_t)18))))
			{
				goto IL_003a;
			}
		}

IL_001c:
		{
			int32_t L_5 = V_4;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)22))))
			{
				goto IL_002a;
			}
		}

IL_0022:
		{
			int32_t L_6 = V_4;
			if ((((int32_t)L_6) == ((int32_t)((int32_t)24))))
			{
				goto IL_0032;
			}
		}

IL_0028:
		{
			goto IL_0042;
		}

IL_002a:
		{
			// buttonUsage = CommonUsages.primary2DAxisTouch;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_7 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primary2DAxisTouch_9();
			V_2 = L_7;
			// break;
			goto IL_004c;
		}

IL_0032:
		{
			// buttonUsage = CommonUsages.primary2DAxisClick;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_8 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primary2DAxisClick_8();
			V_2 = L_8;
			// break;
			goto IL_004c;
		}

IL_003a:
		{
			// buttonUsage = CommonUsages.secondary2DAxisClick;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_9 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_secondary2DAxisClick_10();
			V_2 = L_9;
			// break;
			goto IL_004c;
		}

IL_0042:
		{
			// base.UpdateButtonData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_10 = ___interactionMapping0;
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_11 = ___inputDevice1;
			GenericXRSDKController_UpdateButtonData_m718BAC7ADD76632A1AE25DAC2CF4B4A60B4DB994(__this, L_10, L_11, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_004c:
		{
			// if (inputDevice.TryGetFeatureValue(buttonUsage, out bool buttonPressed))
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_12 = V_2;
			bool L_13;
			L_13 = InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_12, (bool*)(&V_3), /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_005f;
			}
		}

IL_0058:
		{
			// interactionMapping.BoolData = buttonPressed;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_14 = ___interactionMapping0;
			bool L_15 = V_3;
			NullCheck(L_14);
			MixedRealityInteractionMapping_set_BoolData_m03B2CF34CC007394B4B0B3FD0240F117234ADA6C(L_14, L_15, /*hidden argument*/NULL);
		}

IL_005f:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_16 = ___interactionMapping0;
			NullCheck(L_16);
			bool L_17;
			L_17 = MixedRealityInteractionMapping_get_Changed_m22D457FF63C2D11B9EE602F6C777206085B9B2C8(L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_00b5;
			}
		}

IL_0067:
		{
			// if (interactionMapping.BoolData)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_18 = ___interactionMapping0;
			NullCheck(L_18);
			bool L_19;
			L_19 = MixedRealityInteractionMapping_get_BoolData_m5D39EBEE43023C9782742ECC3700D75CD8AF9875_inline(L_18, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_0093;
			}
		}

IL_006f:
		{
			// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_20;
			L_20 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_21 = L_20;
			G_B14_0 = L_21;
			if (L_21)
			{
				G_B15_0 = L_21;
				goto IL_007a;
			}
		}

IL_0077:
		{
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
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
			NullCheck(G_B15_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B15_0, L_22, L_23, L_25);
			// }
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_0093:
		{
			// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_26;
			L_26 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_27 = L_26;
			G_B17_0 = L_27;
			if (L_27)
			{
				G_B18_0 = L_27;
				goto IL_009e;
			}
		}

IL_009b:
		{
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_009e:
		{
			RuntimeObject* L_28;
			L_28 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			uint8_t L_29;
			L_29 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_30 = ___interactionMapping0;
			NullCheck(L_30);
			MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_31;
			L_31 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline(L_30, /*hidden argument*/NULL);
			NullCheck(G_B18_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B18_0, L_28, L_29, L_31);
		}

IL_00b5:
		{
			// }
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b7;
	}

FINALLY_00b7:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(183)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(183)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC5, IL_00c5)
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController_UpdateDualAxisData_mE2AC063534B7A982FA18C67E0B81FBCF5E954FA0 (WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	{
		// using (UpdateDualAxisDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_il2cpp_TypeInfo_var))->get_UpdateDualAxisDataPerfMarker_26();
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
			V_4 = L_3;
			int32_t L_4 = V_4;
			if ((((int32_t)L_4) == ((int32_t)((int32_t)17))))
			{
				goto IL_0024;
			}
		}

IL_001c:
		{
			int32_t L_5 = V_4;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)21))))
			{
				goto IL_002c;
			}
		}

IL_0022:
		{
			goto IL_0034;
		}

IL_0024:
		{
			// axisUsage = CommonUsages.secondary2DAxis;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_6 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_secondary2DAxis_18();
			V_2 = L_6;
			// break;
			goto IL_003e;
		}

IL_002c:
		{
			// axisUsage = CommonUsages.primary2DAxis;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_7 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primary2DAxis_17();
			V_2 = L_7;
			// break;
			goto IL_003e;
		}

IL_0034:
		{
			// base.UpdateDualAxisData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_8 = ___interactionMapping0;
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_9 = ___inputDevice1;
			GenericXRSDKController_UpdateDualAxisData_m1111D3819BAC4A38A19DEE9B7152CE5F380D1877(__this, L_8, L_9, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x91, FINALLY_0083);
		}

IL_003e:
		{
			// if (inputDevice.TryGetFeatureValue(axisUsage, out Vector2 axisData))
			InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_10 = V_2;
			bool L_11;
			L_11 = InputDevice_TryGetFeatureValue_m18C3DB44FFE8E7ACFF29F2F83E54A2F057AFF1C5((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_10, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0051;
			}
		}

IL_004a:
		{
			// interactionMapping.Vector2Data = axisData;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_12 = ___interactionMapping0;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_3;
			NullCheck(L_12);
			MixedRealityInteractionMapping_set_Vector2Data_m8CA7FB7512D98FF6DAE149E436533E060A4FA5C2(L_12, L_13, /*hidden argument*/NULL);
		}

IL_0051:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_14 = ___interactionMapping0;
			NullCheck(L_14);
			bool L_15;
			L_15 = MixedRealityInteractionMapping_get_Changed_m22D457FF63C2D11B9EE602F6C777206085B9B2C8(L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_0081;
			}
		}

IL_0059:
		{
			// CoreServices.InputSystem?.RaisePositionInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.Vector2Data);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_16;
			L_16 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_17 = L_16;
			G_B11_0 = L_17;
			if (L_17)
			{
				G_B12_0 = L_17;
				goto IL_0064;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x91, FINALLY_0083);
		}

IL_0064:
		{
			RuntimeObject* L_18;
			L_18 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			uint8_t L_19;
			L_19 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_20 = ___interactionMapping0;
			NullCheck(L_20);
			MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_21;
			L_21 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline(L_20, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_22 = ___interactionMapping0;
			NullCheck(L_22);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
			L_23 = MixedRealityInteractionMapping_get_Vector2Data_mF9CAEAE7685F531EF44CC7011606F7C21EA0B6D6_inline(L_22, /*hidden argument*/NULL);
			NullCheck(G_B12_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(41 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePositionInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector2) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B12_0, L_18, L_19, L_21, L_23);
		}

IL_0081:
		{
			// }
			IL2CPP_LEAVE(0x91, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(131)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x91, IL_0091)
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::TryRenderControllerModel(System.Type,Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKMotionController_TryRenderControllerModel_m7EF135332131D01CF2C5A8F21CA154AEDD4C4C61 (WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * __this, Type_t * ___controllerType0, int32_t ___inputSourceType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetControllerVisualizationProfile() == null ||
		//     !GetControllerVisualizationProfile().GetUsePlatformModelsOverride(GetType(), ControllerHandedness))
		MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1 * L_0;
		L_0 = BaseController_GetControllerVisualizationProfile_m1993022D11E1D1020C3BACE9EB4BD30B45EEFE1C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1 * L_2;
		L_2 = BaseController_GetControllerVisualizationProfile_m1993022D11E1D1020C3BACE9EB4BD30B45EEFE1C(/*hidden argument*/NULL);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		uint8_t L_4;
		L_4 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = MixedRealityControllerVisualizationProfile_GetUsePlatformModelsOverride_mF3C0943E3136E2E22710FCB620901B20C7EC6514(L_2, L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}

IL_0025:
	{
		// return base.TryRenderControllerModel(controllerType, inputSourceType);
		Type_t * L_6 = ___controllerType0;
		int32_t L_7 = ___inputSourceType1;
		bool L_8;
		L_8 = BaseController_TryRenderControllerModel_mC03274675FC5E04BD7B8EFC960402F307C7B4D58(__this, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002e:
	{
		// TryRenderControllerModelWithModelProvider();
		WindowsMixedRealityXRSDKMotionController_TryRenderControllerModelWithModelProvider_mA8D620931772C791DF050EFAD12597823FB0966D(__this, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::TryRenderControllerModelWithModelProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController_TryRenderControllerModelWithModelProvider_mA8D620931772C791DF050EFAD12597823FB0966D (WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84_mBF33A79426FCB70587BF0C6F6EA11BD4122DD119_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84_mBF33A79426FCB70587BF0C6F6EA11BD4122DD119((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84_mBF33A79426FCB70587BF0C6F6EA11BD4122DD119_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__cctor_m243C82F18487A28B98AB38602E824570BB4C298D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658CC51B94262E08B674473305FF2AC31574F4F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB8B8DAEE4B0D6B2E8E770180C9963B64E7F6163);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateButtonDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKMotionController.UpdateButtonData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteralAB8B8DAEE4B0D6B2E8E770180C9963B64E7F6163, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_il2cpp_TypeInfo_var))->set_UpdateButtonDataPerfMarker_25(L_0);
		// private static readonly ProfilerMarker UpdateDualAxisDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKMotionController.UpdateDualAxisData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral658CC51B94262E08B674473305FF2AC31574F4F9, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9_il2cpp_TypeInfo_var))->set_UpdateDualAxisDataPerfMarker_26(L_1);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::<>n__0(System.Type,Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKMotionController_U3CU3En__0_mE1AFCAA2FA3982A27F6F24C582547965A8D4C71C (WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * __this, Type_t * ___controllerType0, int32_t ___inputSourceType1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___controllerType0;
		int32_t L_1 = ___inputSourceType1;
		bool L_2;
		L_2 = BaseController_TryRenderControllerModel_mC03274675FC5E04BD7B8EFC960402F307C7B4D58(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.IntPtr Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider.get_ISpatialCoordinateSystemPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_ISpatialCoordinateSystemPtr_m2BBEBF0F70CD08ADF55F089367EE0EECC5915871 (XRSDKWindowsMixedRealityUtilitiesProvider_t69ACD05B43664EA0D6D8B710C8DF26CF14106F5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// System.IntPtr Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider.get_IHolographicFramePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_IHolographicFramePtr_m6ED4B5265EECA6F1B720391C47F3A9D530BE66F7 (XRSDKWindowsMixedRealityUtilitiesProvider_t69ACD05B43664EA0D6D8B710C8DF26CF14106F5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKWindowsMixedRealityUtilitiesProvider__ctor_m2D11F0C211E7713049074BEA1A18D5C7BF634A1E (XRSDKWindowsMixedRealityUtilitiesProvider_t69ACD05B43664EA0D6D8B710C8DF26CF14106F5C * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryRenderControllerModelWithModelProviderU3Ed__8_MoveNext_mA8A3DAB9FD8AA84A8A4215A21353BBBF2F2B54EC (U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84_mB066508E4CA9F618CA7F07D3CEF5EA1E5D88716F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityControllerPoseSynchronizer_tC40C407D6594D67EB5857EA30755A63B693D7110_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSource_tD261D929DA8A0944B1219F9D547B6A242AFF7FA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityControllerModelProvider_t7862D6C0DA4910D92EE88AE2F3FCA551C27AE743_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ED102C828F9B62603420EE297F5CBDD87B77EB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC2D67D9A3E041B2BCE8FE58FE1742A4A3D569B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEEB5CFA66009DDB14CAA8CCDD6282C75B0AF125);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1 * V_4 = NULL;
	SystemType_t8D2323983B85594F1037C020D3497109700B78DF * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0067;
			}
		}

IL_0011:
		{
			// if (controllerModelProvider == null)
			WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * L_3 = V_1;
			NullCheck(L_3);
			WindowsMixedRealityControllerModelProvider_t7862D6C0DA4910D92EE88AE2F3FCA551C27AE743 * L_4 = L_3->get_controllerModelProvider_27();
			if (L_4)
			{
				goto IL_002a;
			}
		}

IL_0019:
		{
			// controllerModelProvider = new WindowsMixedRealityControllerModelProvider(ControllerHandedness);
			WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * L_5 = V_1;
			WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * L_6 = V_1;
			NullCheck(L_6);
			uint8_t L_7;
			L_7 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(L_6, /*hidden argument*/NULL);
			WindowsMixedRealityControllerModelProvider_t7862D6C0DA4910D92EE88AE2F3FCA551C27AE743 * L_8 = (WindowsMixedRealityControllerModelProvider_t7862D6C0DA4910D92EE88AE2F3FCA551C27AE743 *)il2cpp_codegen_object_new(WindowsMixedRealityControllerModelProvider_t7862D6C0DA4910D92EE88AE2F3FCA551C27AE743_il2cpp_TypeInfo_var);
			WindowsMixedRealityControllerModelProvider__ctor_mBDB7DEC1439374344F987C5F8C50A30702E7A106(L_8, L_7, /*hidden argument*/NULL);
			NullCheck(L_5);
			L_5->set_controllerModelProvider_27(L_8);
		}

IL_002a:
		{
			// GameObject controllerModel = await controllerModelProvider.TryGenerateControllerModelFromPlatformSDK();
			WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * L_9 = V_1;
			NullCheck(L_9);
			WindowsMixedRealityControllerModelProvider_t7862D6C0DA4910D92EE88AE2F3FCA551C27AE743 * L_10 = L_9->get_controllerModelProvider_27();
			NullCheck(L_10);
			Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * L_11;
			L_11 = WindowsMixedRealityControllerModelProvider_TryGenerateControllerModelFromPlatformSDK_m0BF2A3D9A5DE5B20BAF91C9CB819DC8848BEC50B(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  L_12;
			L_12 = Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631(L_11, /*hidden argument*/Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631_RuntimeMethod_var);
			V_3 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E((TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0083;
			}
		}

IL_0044:
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
			TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  L_15 = V_3;
			__this->set_U3CU3Eu__1_3(L_15);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84_mB066508E4CA9F618CA7F07D3CEF5EA1E5D88716F((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *)(&V_3), (U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84_mB066508E4CA9F618CA7F07D3CEF5EA1E5D88716F_RuntimeMethod_var);
			goto IL_015f;
		}

IL_0067:
		{
			TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  L_17 = __this->get_U3CU3Eu__1_3();
			V_3 = L_17;
			TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * L_18 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B ));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
		}

IL_0083:
		{
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
			L_20 = TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2((TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2_RuntimeMethod_var);
			V_2 = L_20;
			// if (controllerModel != null)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_22;
			L_22 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_21, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_22)
			{
				goto IL_0131;
			}
		}

IL_0097:
		{
			// if (this != null)
			WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * L_23 = V_1;
			if (!L_23)
			{
				goto IL_012a;
			}
		}

IL_009d:
		{
			// var visualizationProfile = GetControllerVisualizationProfile();
			MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1 * L_24;
			L_24 = BaseController_GetControllerVisualizationProfile_m1993022D11E1D1020C3BACE9EB4BD30B45EEFE1C(/*hidden argument*/NULL);
			V_4 = L_24;
			// if (visualizationProfile != null)
			MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1 * L_25 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_26;
			L_26 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_25, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_26)
			{
				goto IL_00fe;
			}
		}

IL_00ae:
		{
			// var visualizationType = visualizationProfile.GetControllerVisualizationTypeOverride(GetType(), ControllerHandedness);
			MixedRealityControllerVisualizationProfile_t5C7348B8155FE28922BEE7C95F88BFFDDBFE50B1 * L_27 = V_4;
			WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * L_28 = V_1;
			NullCheck(L_28);
			Type_t * L_29;
			L_29 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_28, /*hidden argument*/NULL);
			WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * L_30 = V_1;
			NullCheck(L_30);
			uint8_t L_31;
			L_31 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(L_30, /*hidden argument*/NULL);
			NullCheck(L_27);
			SystemType_t8D2323983B85594F1037C020D3497109700B78DF * L_32;
			L_32 = MixedRealityControllerVisualizationProfile_GetControllerVisualizationTypeOverride_mFBDA9051302D7F9B5E4C6F5A8EA3B2EC3597A883(L_27, L_29, L_31, /*hidden argument*/NULL);
			V_5 = L_32;
			// if (visualizationType != null)
			SystemType_t8D2323983B85594F1037C020D3497109700B78DF * L_33 = V_5;
			if (!L_33)
			{
				goto IL_00f2;
			}
		}

IL_00c7:
		{
			// if (controllerModel.EnsureComponent(visualizationType.Type) is IMixedRealityControllerPoseSynchronizer visualizer)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = V_2;
			SystemType_t8D2323983B85594F1037C020D3497109700B78DF * L_35 = V_5;
			NullCheck(L_35);
			Type_t * L_36;
			L_36 = SystemType_get_Type_mC447B3C20EA164CE4877D3F893AF3C4BA592AA9F_inline(L_35, /*hidden argument*/NULL);
			Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_37;
			L_37 = ComponentExtensions_EnsureComponent_mD16AB32B7FA5600C0D7C38428F9AA4D796BD1DEE(L_34, L_36, /*hidden argument*/NULL);
			V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IMixedRealityControllerPoseSynchronizer_tC40C407D6594D67EB5857EA30755A63B693D7110_il2cpp_TypeInfo_var));
			RuntimeObject* L_38 = V_6;
			if (!L_38)
			{
				goto IL_00e7;
			}
		}

IL_00df:
		{
			// visualizer.DestroyOnSourceLost = false;
			RuntimeObject* L_39 = V_6;
			NullCheck(L_39);
			InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerPoseSynchronizer::set_DestroyOnSourceLost(System.Boolean) */, IMixedRealityControllerPoseSynchronizer_tC40C407D6594D67EB5857EA30755A63B693D7110_il2cpp_TypeInfo_var, L_39, (bool)0);
		}

IL_00e7:
		{
			// if (TryAddControllerModelToSceneHierarchy(controllerModel))
			WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * L_40 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = V_2;
			NullCheck(L_40);
			bool L_42;
			L_42 = BaseController_TryAddControllerModelToSceneHierarchy_m3D9AE996E995710DABEC0DC54221043C454ADD78(L_40, L_41, /*hidden argument*/NULL);
			if (!L_42)
			{
				goto IL_0108;
			}
		}

IL_00f0:
		{
			// return;
			goto IL_014c;
		}

IL_00f2:
		{
			// Debug.LogError("Controller visualization type not defined for controller visualization profile");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral7ED102C828F9B62603420EE297F5CBDD87B77EB7, /*hidden argument*/NULL);
			// }
			goto IL_0108;
		}

IL_00fe:
		{
			// Debug.LogError("Failed to obtain a controller visualization profile");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralFEEB5CFA66009DDB14CAA8CCDD6282C75B0AF125, /*hidden argument*/NULL);
		}

IL_0108:
		{
			// Debug.LogWarning("Failed to create controller model from driver; defaulting to BaseController behavior.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralBC2D67D9A3E041B2BCE8FE58FE1742A4A3D569B1, /*hidden argument*/NULL);
			// base.TryRenderControllerModel(GetType(), InputSource.SourceType);
			WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * L_43 = V_1;
			WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * L_44 = V_1;
			NullCheck(L_44);
			Type_t * L_45;
			L_45 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_44, /*hidden argument*/NULL);
			WindowsMixedRealityXRSDKMotionController_t9D17B28CC27D03AF56CA378114048369B1E460C9 * L_46 = V_1;
			NullCheck(L_46);
			RuntimeObject* L_47;
			L_47 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(L_46, /*hidden argument*/NULL);
			NullCheck(L_47);
			int32_t L_48;
			L_48 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_SourceType() */, IMixedRealityInputSource_tD261D929DA8A0944B1219F9D547B6A242AFF7FA2_il2cpp_TypeInfo_var, L_47);
			NullCheck(L_43);
			bool L_49;
			L_49 = WindowsMixedRealityXRSDKMotionController_U3CU3En__0_mE1AFCAA2FA3982A27F6F24C582547965A8D4C71C(L_43, L_45, L_48, /*hidden argument*/NULL);
		}

IL_012a:
		{
			// controllerModel.SetActive(false);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = V_2;
			NullCheck(L_50);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_50, (bool)0, /*hidden argument*/NULL);
		}

IL_0131:
		{
			goto IL_014c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0133;
		}
		throw e;
	}

CATCH_0133:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_51 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_52 = V_7;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_51, L_52, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_015f;
	} // end catch (depth: 1)

IL_014c:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_53 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_53, /*hidden argument*/NULL);
	}

IL_015f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTryRenderControllerModelWithModelProviderU3Ed__8_MoveNext_mA8A3DAB9FD8AA84A8A4215A21353BBBF2F2B54EC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84 * _thisAdjusted = reinterpret_cast<U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84 *>(__this + _offset);
	U3CTryRenderControllerModelWithModelProviderU3Ed__8_MoveNext_mA8A3DAB9FD8AA84A8A4215A21353BBBF2F2B54EC(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryRenderControllerModelWithModelProviderU3Ed__8_SetStateMachine_mCF749A47B202BE5FBEF4CA3D49E0464C79DCA26B (U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTryRenderControllerModelWithModelProviderU3Ed__8_SetStateMachine_mCF749A47B202BE5FBEF4CA3D49E0464C79DCA26B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84 * _thisAdjusted = reinterpret_cast<U3CTryRenderControllerModelWithModelProviderU3Ed__8_t22CD46828B3279B7788E6ABC6EB7BC57F7321F84 *>(__this + _offset);
	U3CTryRenderControllerModelWithModelProviderU3Ed__8_SetStateMachine_mCF749A47B202BE5FBEF4CA3D49E0464C79DCA26B(_thisAdjusted, ___stateMachine0, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m745CDDA851D0C022D2705E1E225AD97095F9200E_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; set; }
		bool L_0 = __this->get_U3CEnabledU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_mE3A82CD7A8449F3178D0648CBB2E807C7A63404B_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_il2cpp_TypeInfo_var))->get_U3CUtilitiesProviderU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities_set_UtilitiesProvider_m381532B72B3F177F082DC5C9727013A7B8AF1A3F_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_il2cpp_TypeInfo_var);
		((WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t39F46DFA2019E8E4252459CB3C589EF318FF4620_il2cpp_TypeInfo_var))->set_U3CUtilitiesProviderU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObserverOrigin_m9282BED93FC4AF70C2863489DEFED55C2B83FDED_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObserverOrigin { get; set; } = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CObserverOriginU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObservationExtents_m67BC5BCC6087055769FBC61DB6B799FF9E3C5FFF_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObservationExtents { get; set; } = Vector3.one * 3f; // 3 meter sides / radius
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CObservationExtentsU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_m62911E2D01AEFF3B937001C1427CC9E888953565_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method)
{
	{
		// public VolumeType ObserverVolumeType { get; set; } = VolumeType.AxisAlignedCube;
		int32_t L_0 = __this->get_U3CObserverVolumeTypeU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * WindowsMixedRealityHandMeshProvider_get_Right_mAC848208D65400E71D5CE269433D22DACF182399_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WindowsMixedRealityHandMeshProvider Right { get; } = new WindowsMixedRealityHandMeshProvider(Handedness.Right);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * L_0 = ((WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9_il2cpp_TypeInfo_var))->get_U3CRightU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * WindowsMixedRealityHandMeshProvider_get_Left_m9E2B8543634A457D94FE9724B4DB2B2FB43FB61D_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WindowsMixedRealityHandMeshProvider Left { get; } = new WindowsMixedRealityHandMeshProvider(Handedness.Left);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9 * L_0 = ((WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandMeshProvider_tFEC997C6EE0BA1F93ECDF93C568E0FA06C51F2A9_il2cpp_TypeInfo_var))->get_U3CLeftU3Ek__BackingField_0();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPose_get_Rotation_mB4E8D3A137342387D99494B4A52255B2D9029EF9_inline (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_rotation_2();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MixedRealityInteractionMapping_get_Vector2Data_mF9CAEAE7685F531EF44CC7011606F7C21EA0B6D6_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method)
{
	{
		// return vector2Data;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_vector2Data_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_mC447B3C20EA164CE4877D3F893AF3C4BA592AA9F_inline (SystemType_t8D2323983B85594F1037C020D3497109700B78DF * __this, const RuntimeMethod* method)
{
	{
		// get => type;
		Type_t * L_0 = __this->get_type_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_gshared_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_0();
		return (bool)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* L_2 = (BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6*)L_2, (int32_t)L_3);
		return (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
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
