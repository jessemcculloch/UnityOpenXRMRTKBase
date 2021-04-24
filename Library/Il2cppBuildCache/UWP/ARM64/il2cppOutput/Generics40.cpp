#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Generic.Comparer`1<System.Boolean>
struct Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149;
// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount>
struct ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667;
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Boolean>
struct Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>
struct Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Boolean>
struct Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007;
// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Boolean>
struct Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C;
// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07;
// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B;
// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Boolean>
struct Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344;
// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217;
// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<UnityEngine.Ray,System.Boolean>
struct Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC;
// System.Func`2<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem,System.Boolean>
struct Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Boolean>
struct Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054;
// System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>
struct ICollection_1_tFCA43548AA3F09499E92A7A1C23FE2DA29F7BD7E;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>
struct IEnumerable_1_tD4F03798C0FDA02EA0115DA11C6899D3DFD49C1C;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.InternedString>
struct IEnumerable_1_t61B08BD30E054A5AE5A80E3B17C076BF21B0615E;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.NameAndParameters>
struct IEnumerable_1_t6CD6B52FC477A9D82C5F3E18FD661D7EC04B0243;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.NamedValue>
struct IEnumerable_1_t1ACE8E7C607BD39B482048B25FB890B2A76E8E8A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Ray>
struct IEnumerable_1_tFC203F1B50EB899B704643D95596D6346007FF80;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>
struct IEnumerable_1_t277854C86F968682A3F507F6BD01BBE84763F770;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct IEnumerable_1_tE21267FD2F3CDFC9FEF0FDEC0E1E455FCE6A3E66;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>
struct IEnumerator_1_tBE0D4C473F358C9190DD34B8610F622E8F8551C6;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct IEnumerator_1_tFE6297375FF339F2A21BE3B2B1E139A5A440D734;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.NameAndParameters>
struct IEnumerator_1_tAEE57365BB2EA8575ACA89AA385FA9B0127FE581;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.NamedValue>
struct IEnumerator_1_tCCB6162CAF7CD0B37D2A14E8482AA5AE8E97A415;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Ray>
struct IEnumerator_1_t0DF712A4DA4107E91C4774B6D7922EACDE8CD823;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>
struct IEnumerator_1_tA1E12EC2EF8E508B4779B5A26394EE4030B08D8C;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct IEnumerator_1_t2E0F89530414C7A5DDD571902CE492E9AC86E890;
// System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>
struct IEnumerator_1_t66038E4F042856D723619462700BDD282649EFEB;
// System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Ray>
struct Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F;
// System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>
struct Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>
struct List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.InternedString>
struct List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NameAndParameters>
struct List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NamedValue>
struct List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Ray>
struct List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>
struct List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>
struct ValueCollection_t7D92672F7282AD68A0C029BCDA6AF66001E9EB42;
// System.WeakReference`1<System.Object>
struct WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.Ray>
struct WhereArrayIterator_1_t449AE37537E08A0DF5D1F9E009B5F76F3123EFF8;
// System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>
struct WhereArrayIterator_1_t2848537218BB492682B2AAEBF73B38E457A32344;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Ray>
struct WhereEnumerableIterator_1_t9DC872DA0E20FD9215938840EFD2F047C60C10A4;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>
struct WhereEnumerableIterator_1_tA04C2761DAB712635C719F323B48DE20FBCAC459;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Linq.Enumerable/WhereListIterator`1<UnityEngine.Ray>
struct WhereListIterator_1_t59BDE8EC71D10887E7CA957F025BBC225317DEF5;
// System.Linq.Enumerable/WhereListIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>
struct WhereListIterator_1_t9DAE4704EF88FF8B6178F408E1323BD0706B0C61;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectArrayIterator_2_t5539D946779EF937558CF6219C65CD812D45FA85;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>
struct WhereSelectArrayIterator_2_t4386262809F5AE6FFA381A5D978E9F4617B525C7;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectArrayIterator_2_t7DDC3990B4B37D26178F8BCA32E8CD98FE8CCF50;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct WhereSelectArrayIterator_2_tAC5C6F4CF39DEE23C0B336216F0F9A2C4620F62D;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectArrayIterator_2_t7E67589EEF585BA0A567F7A446D7009E3268623D;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct WhereSelectArrayIterator_2_tB53CF3C9EFACAD07723008673A1D5F5BAD3FA221;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectArrayIterator_2_tFCC8C7207830D412428356B9263E571C665ED817;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct WhereSelectArrayIterator_2_tD2E9D48219C66BF4AB3A4643A7CD24773F8ADB66;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectArrayIterator_2_t45695FAD12AECDCF67704BAAE379C8FDE970CB15;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectArrayIterator_2_t59039EC82706A391E9A41B54EDEFFB4941BC3A04;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct WhereSelectArrayIterator_2_t0216067823B0CE45C633D6CFBA936C6244247667;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectEnumerableIterator_2_tE261A66F9B271521B190612F18B97587DF41B28E;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>
struct WhereSelectEnumerableIterator_2_tA0CF85C70AEC3811FE21CBBE2003D784D884A29C;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectEnumerableIterator_2_tF8AD9D99A7745F93717E83397CF3C6D74754260F;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct WhereSelectEnumerableIterator_2_t666EBC097CF6FF1EDAACDA447F16002549E8C7DF;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectEnumerableIterator_2_tE6266DEEB8A66F18BC1B01812D286D823CA64FB5;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct WhereSelectEnumerableIterator_2_tF7F8172829C9766CD73CF688986B2D36C94C6BD4;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectEnumerableIterator_2_tE4C9445258E1E4892D4A54064D04A17716B2CCA5;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct WhereSelectEnumerableIterator_2_t800B9FFDEAD10DF48A561ACEBF74130DE27EC8C3;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectEnumerableIterator_2_tD29CCA55EC8E7C6740D5B27A62DB297B97D1DA3B;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectEnumerableIterator_2_t5A2A98A870176D507687BD52CB1F9AC687F62C64;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct WhereSelectEnumerableIterator_2_t76880FCA80618F4E28161D038FC1AD5F089F1919;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tD1BA4FC724363474EC7C0A74DEC0D43F7D14819D;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>
struct WhereSelectListIterator_2_tADE7203722367A98D04CEC0987FF549BC22E9AE6;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t92C51D1FE38925DAC325C4384E335B81A879F9FA;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct WhereSelectListIterator_2_t4DBF7D016A01FED927964A925069CF01F8D63DC6;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t395C59C9BA3C34D4C41F9C06F0C77E6CC2F7F022;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct WhereSelectListIterator_2_tDBB022641D0459A3B157C96D7470764685F4C514;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t75144211B1AAEF36930DB1E9A1BCAE83770FCB18;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct WhereSelectListIterator_2_tE38108C185625ADCB97C3EF2869FA9474CBCF02A;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t0C3A8DEA48C0B284960D9EDBE4687960E8294322;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t287BA3EF11B60F8D6D5341C59199D704B2CD60EC;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct WhereSelectListIterator_2_tE51A4A0DD40EA32031DEA256235101226D7983A4;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>[]
struct KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648;
// UnityEngine.InputSystem.Utilities.NameAndParameters[]
struct NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49;
// UnityEngine.InputSystem.Utilities.NamedValue[]
struct NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Ray[]
struct RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[]
struct ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB;
// UnityEngine.InputSystem.Utilities.JsonParser/JsonValue[]
struct JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry[]
struct EventCacheEntryU5BU5D_t80F73E6323A553217D0AE152EA5541D2E4986CE4;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount
struct TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection__ctor_m3C17E53A6ABC53E38E7CC8292697CA1A10675F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m4E9B9FFF7913F4856E75A97F1A7754F1ABD0F425_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m6DEDA5DBF39F632E019EF24EA6F6F645E3B935AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2_System_IComparable_CompareTo_m0704B19C007F31880C0866C144A16A9DB58622C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2_System_IComparable_CompareTo_m5D3625FD43C4FB881C7AD4FE2D8903C4F01A40A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_GetObjectData_m7C63330FAC22CBE86AA1BDE2F34DFDA8B1E41272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1__ctor_mC76935DFFEF0678A77A4811865B9F4D350D72741_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271;
struct InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648;
struct NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49;
struct NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB;
struct JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F;
struct EventCacheEntryU5BU5D_t80F73E6323A553217D0AE152EA5541D2E4986CE4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Comparer`1<System.Boolean>
struct Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>
struct List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.InternedString>
struct List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF, ____items_1)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get__items_1() const { return ____items_1; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF_StaticFields, ____emptyArray_5)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NameAndParameters>
struct List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1, ____items_1)); }
	inline NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* get__items_1() const { return ____items_1; }
	inline NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1_StaticFields, ____emptyArray_5)); }
	inline NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NamedValue>
struct List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8, ____items_1)); }
	inline NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* get__items_1() const { return ____items_1; }
	inline NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8_StaticFields, ____emptyArray_5)); }
	inline NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Ray>
struct List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B, ____items_1)); }
	inline RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8* get__items_1() const { return ____items_1; }
	inline RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B_StaticFields, ____emptyArray_5)); }
	inline RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>
struct List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61, ____items_1)); }
	inline ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* get__items_1() const { return ____items_1; }
	inline ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61_StaticFields, ____emptyArray_5)); }
	inline ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013, ____items_1)); }
	inline JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* get__items_1() const { return ____items_1; }
	inline JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013_StaticFields, ____emptyArray_5)); }
	inline JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>
struct ValueCollection_t7D92672F7282AD68A0C029BCDA6AF66001E9EB42  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t7D92672F7282AD68A0C029BCDA6AF66001E9EB42, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t7D92672F7282AD68A0C029BCDA6AF66001E9EB42, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
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


// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_6)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
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


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.InternedString>
struct ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E, ___m_Array_0)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_m_Array_0() const { return ___m_Array_0; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NameAndParameters>
struct ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED, ___m_Array_0)); }
	inline NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* get_m_Array_0() const { return ___m_Array_0; }
	inline NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NamedValue>
struct ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE, ___m_Array_0)); }
	inline NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* get_m_Array_0() const { return ___m_Array_0; }
	inline NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// System.ValueTuple`2<System.Object,System.Boolean>
struct ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	bool ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12, ___Item2_1)); }
	inline bool get_Item2_1() const { return ___Item2_1; }
	inline bool* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(bool value)
	{
		___Item2_1 = value;
	}
};


// System.ValueTuple`2<System.Object,System.Object>
struct ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>
struct WhereSelectArrayIterator_2_t4386262809F5AE6FFA381A5D978E9F4617B525C7  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t4386262809F5AE6FFA381A5D978E9F4617B525C7, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t4386262809F5AE6FFA381A5D978E9F4617B525C7, ___predicate_4)); }
	inline Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t4386262809F5AE6FFA381A5D978E9F4617B525C7, ___selector_5)); }
	inline Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t4386262809F5AE6FFA381A5D978E9F4617B525C7, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct WhereSelectArrayIterator_2_tAC5C6F4CF39DEE23C0B336216F0F9A2C4620F62D  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tAC5C6F4CF39DEE23C0B336216F0F9A2C4620F62D, ___source_3)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_source_3() const { return ___source_3; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tAC5C6F4CF39DEE23C0B336216F0F9A2C4620F62D, ___predicate_4)); }
	inline Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tAC5C6F4CF39DEE23C0B336216F0F9A2C4620F62D, ___selector_5)); }
	inline Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tAC5C6F4CF39DEE23C0B336216F0F9A2C4620F62D, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct WhereSelectArrayIterator_2_tB53CF3C9EFACAD07723008673A1D5F5BAD3FA221  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB53CF3C9EFACAD07723008673A1D5F5BAD3FA221, ___source_3)); }
	inline NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* get_source_3() const { return ___source_3; }
	inline NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB53CF3C9EFACAD07723008673A1D5F5BAD3FA221, ___predicate_4)); }
	inline Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB53CF3C9EFACAD07723008673A1D5F5BAD3FA221, ___selector_5)); }
	inline Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * get_selector_5() const { return ___selector_5; }
	inline Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB53CF3C9EFACAD07723008673A1D5F5BAD3FA221, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct WhereSelectArrayIterator_2_tD2E9D48219C66BF4AB3A4643A7CD24773F8ADB66  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tD2E9D48219C66BF4AB3A4643A7CD24773F8ADB66, ___source_3)); }
	inline NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* get_source_3() const { return ___source_3; }
	inline NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tD2E9D48219C66BF4AB3A4643A7CD24773F8ADB66, ___predicate_4)); }
	inline Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tD2E9D48219C66BF4AB3A4643A7CD24773F8ADB66, ___selector_5)); }
	inline Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * get_selector_5() const { return ___selector_5; }
	inline Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tD2E9D48219C66BF4AB3A4643A7CD24773F8ADB66, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct WhereSelectArrayIterator_2_t0216067823B0CE45C633D6CFBA936C6244247667  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t0216067823B0CE45C633D6CFBA936C6244247667, ___source_3)); }
	inline JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* get_source_3() const { return ___source_3; }
	inline JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t0216067823B0CE45C633D6CFBA936C6244247667, ___predicate_4)); }
	inline Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t0216067823B0CE45C633D6CFBA936C6244247667, ___selector_5)); }
	inline Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t0216067823B0CE45C633D6CFBA936C6244247667, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>
struct WhereSelectEnumerableIterator_2_tA0CF85C70AEC3811FE21CBBE2003D784D884A29C  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA0CF85C70AEC3811FE21CBBE2003D784D884A29C, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA0CF85C70AEC3811FE21CBBE2003D784D884A29C, ___predicate_4)); }
	inline Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA0CF85C70AEC3811FE21CBBE2003D784D884A29C, ___selector_5)); }
	inline Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA0CF85C70AEC3811FE21CBBE2003D784D884A29C, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct WhereSelectEnumerableIterator_2_t666EBC097CF6FF1EDAACDA447F16002549E8C7DF  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t666EBC097CF6FF1EDAACDA447F16002549E8C7DF, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t666EBC097CF6FF1EDAACDA447F16002549E8C7DF, ___predicate_4)); }
	inline Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t666EBC097CF6FF1EDAACDA447F16002549E8C7DF, ___selector_5)); }
	inline Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t666EBC097CF6FF1EDAACDA447F16002549E8C7DF, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct WhereSelectEnumerableIterator_2_tF7F8172829C9766CD73CF688986B2D36C94C6BD4  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF7F8172829C9766CD73CF688986B2D36C94C6BD4, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF7F8172829C9766CD73CF688986B2D36C94C6BD4, ___predicate_4)); }
	inline Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF7F8172829C9766CD73CF688986B2D36C94C6BD4, ___selector_5)); }
	inline Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * get_selector_5() const { return ___selector_5; }
	inline Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF7F8172829C9766CD73CF688986B2D36C94C6BD4, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct WhereSelectEnumerableIterator_2_t800B9FFDEAD10DF48A561ACEBF74130DE27EC8C3  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t800B9FFDEAD10DF48A561ACEBF74130DE27EC8C3, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t800B9FFDEAD10DF48A561ACEBF74130DE27EC8C3, ___predicate_4)); }
	inline Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t800B9FFDEAD10DF48A561ACEBF74130DE27EC8C3, ___selector_5)); }
	inline Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * get_selector_5() const { return ___selector_5; }
	inline Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t800B9FFDEAD10DF48A561ACEBF74130DE27EC8C3, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct WhereSelectEnumerableIterator_2_t76880FCA80618F4E28161D038FC1AD5F089F1919  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t76880FCA80618F4E28161D038FC1AD5F089F1919, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t76880FCA80618F4E28161D038FC1AD5F089F1919, ___predicate_4)); }
	inline Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t76880FCA80618F4E28161D038FC1AD5F089F1919, ___selector_5)); }
	inline Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t76880FCA80618F4E28161D038FC1AD5F089F1919, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
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

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};


// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
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


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.InputSystem.Utilities.Substring
struct Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.Substring::m_String
	String_t* ___m_String_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Index
	int32_t ___m_Index_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_String_0() { return static_cast<int32_t>(offsetof(Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB, ___m_String_0)); }
	inline String_t* get_m_String_0() const { return ___m_String_0; }
	inline String_t** get_address_of_m_String_0() { return &___m_String_0; }
	inline void set_m_String_0(String_t* value)
	{
		___m_String_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB_marshaled_pinvoke
{
	char* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB_marshaled_com
{
	Il2CppChar* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
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


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry
struct EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86 
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount> System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry::registrationTable
	ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * ___registrationTable_0;
	// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry::tokenListCount
	TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * ___tokenListCount_1;

public:
	inline static int32_t get_offset_of_registrationTable_0() { return static_cast<int32_t>(offsetof(EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86, ___registrationTable_0)); }
	inline ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * get_registrationTable_0() const { return ___registrationTable_0; }
	inline ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 ** get_address_of_registrationTable_0() { return &___registrationTable_0; }
	inline void set_registrationTable_0(ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * value)
	{
		___registrationTable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registrationTable_0), (void*)value);
	}

	inline static int32_t get_offset_of_tokenListCount_1() { return static_cast<int32_t>(offsetof(EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86, ___tokenListCount_1)); }
	inline TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * get_tokenListCount_1() const { return ___tokenListCount_1; }
	inline TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC ** get_address_of_tokenListCount_1() { return &___tokenListCount_1; }
	inline void set_tokenListCount_1(TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * value)
	{
		___tokenListCount_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenListCount_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry
struct EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86_marshaled_pinvoke
{
	ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * ___registrationTable_0;
	TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * ___tokenListCount_1;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry
struct EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86_marshaled_com
{
	ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * ___registrationTable_0;
	TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * ___tokenListCount_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.InternedString>
struct Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11, ___list_0)); }
	inline List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF * get_list_0() const { return ___list_0; }
	inline List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11, ___current_3)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_current_3() const { return ___current_3; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187, ___current_2)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_current_2() const { return ___current_2; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
};


// System.WeakReference`1<System.Object>
struct WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76, ___handle_0)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_handle_0() const { return ___handle_0; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_trackResurrection_1() { return static_cast<int32_t>(offsetof(WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76, ___trackResurrection_1)); }
	inline bool get_trackResurrection_1() const { return ___trackResurrection_1; }
	inline bool* get_address_of_trackResurrection_1() { return &___trackResurrection_1; }
	inline void set_trackResurrection_1(bool value)
	{
		___trackResurrection_1 = value;
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
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

// System.ExceptionArgument
struct ExceptionArgument_t750CCD4C657BCB2C185560CC68330BC0313B8737 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t750CCD4C657BCB2C185560CC68330BC0313B8737, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.ExceptionResource
struct ExceptionResource_tD29FDAA391137C7766FB63B5F13FA0F12AF6C3FA 
{
public:
	// System.Int32 System.ExceptionResource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionResource_tD29FDAA391137C7766FB63B5F13FA0F12AF6C3FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.GCHandleType
struct GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.NameAndParameters
struct NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.NameAndParameters::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NamedValue> UnityEngine.InputSystem.Utilities.NameAndParameters::<parameters>k__BackingField
	ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  ___U3CparametersU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CparametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4, ___U3CparametersU3Ek__BackingField_1)); }
	inline ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  get_U3CparametersU3Ek__BackingField_1() const { return ___U3CparametersU3Ek__BackingField_1; }
	inline ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE * get_address_of_U3CparametersU3Ek__BackingField_1() { return &___U3CparametersU3Ek__BackingField_1; }
	inline void set_U3CparametersU3Ek__BackingField_1(ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  value)
	{
		___U3CparametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.NameAndParameters
struct NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
	ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  ___U3CparametersU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.NameAndParameters
struct NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
	ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  ___U3CparametersU3Ek__BackingField_1;
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


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE 
{
public:
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.Utilities.JsonParser/JsonString::text
	Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB  ___text_0;
	// System.Boolean UnityEngine.InputSystem.Utilities.JsonParser/JsonString::hasEscapes
	bool ___hasEscapes_1;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE, ___text_0)); }
	inline Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB  get_text_0() const { return ___text_0; }
	inline Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB * get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB  value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___text_0))->___m_String_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_hasEscapes_1() { return static_cast<int32_t>(offsetof(JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE, ___hasEscapes_1)); }
	inline bool get_hasEscapes_1() const { return ___hasEscapes_1; }
	inline bool* get_address_of_hasEscapes_1() { return &___hasEscapes_1; }
	inline void set_hasEscapes_1(bool value)
	{
		___hasEscapes_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE_marshaled_pinvoke
{
	Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB_marshaled_pinvoke ___text_0;
	int32_t ___hasEscapes_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE_marshaled_com
{
	Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB_marshaled_com ___text_0;
	int32_t ___hasEscapes_1;
};

// UnityEngine.InputSystem.Utilities.JsonParser/JsonValueType
struct JsonValueType_tF204C8AED80AF83025D4286F2AE7C2E74201C1A9 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.JsonParser/JsonValueType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonValueType_tF204C8AED80AF83025D4286F2AE7C2E74201C1A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem/Flags
struct Flags_tA6E2326F59CEB54963A3B54003607A85415FD47A 
{
public:
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tA6E2326F59CEB54963A3B54003607A85415FD47A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>
struct Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760, ___list_0)); }
	inline List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 * get_list_0() const { return ___list_0; }
	inline List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760, ___current_3)); }
	inline NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  get_current_3() const { return ___current_3; }
	inline NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Ray>
struct Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657, ___list_0)); }
	inline List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * get_list_0() const { return ___list_0; }
	inline List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657, ___current_3)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_current_3() const { return ___current_3; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___current_3 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<UnityEngine.Ray>
struct Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F, ___current_2)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_current_2() const { return ___current_2; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C, ___predicate_4)); }
	inline Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectArrayIterator_2_t5539D946779EF937558CF6219C65CD812D45FA85  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t5539D946779EF937558CF6219C65CD812D45FA85, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t5539D946779EF937558CF6219C65CD812D45FA85, ___predicate_4)); }
	inline Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t5539D946779EF937558CF6219C65CD812D45FA85, ___selector_5)); }
	inline Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t5539D946779EF937558CF6219C65CD812D45FA85, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectArrayIterator_2_t7DDC3990B4B37D26178F8BCA32E8CD98FE8CCF50  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t7DDC3990B4B37D26178F8BCA32E8CD98FE8CCF50, ___source_3)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_source_3() const { return ___source_3; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t7DDC3990B4B37D26178F8BCA32E8CD98FE8CCF50, ___predicate_4)); }
	inline Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t7DDC3990B4B37D26178F8BCA32E8CD98FE8CCF50, ___selector_5)); }
	inline Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t7DDC3990B4B37D26178F8BCA32E8CD98FE8CCF50, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectArrayIterator_2_t7E67589EEF585BA0A567F7A446D7009E3268623D  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t7E67589EEF585BA0A567F7A446D7009E3268623D, ___source_3)); }
	inline NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* get_source_3() const { return ___source_3; }
	inline NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t7E67589EEF585BA0A567F7A446D7009E3268623D, ___predicate_4)); }
	inline Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t7E67589EEF585BA0A567F7A446D7009E3268623D, ___selector_5)); }
	inline Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t7E67589EEF585BA0A567F7A446D7009E3268623D, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectArrayIterator_2_tFCC8C7207830D412428356B9263E571C665ED817  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCC8C7207830D412428356B9263E571C665ED817, ___source_3)); }
	inline NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* get_source_3() const { return ___source_3; }
	inline NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCC8C7207830D412428356B9263E571C665ED817, ___predicate_4)); }
	inline Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCC8C7207830D412428356B9263E571C665ED817, ___selector_5)); }
	inline Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCC8C7207830D412428356B9263E571C665ED817, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectArrayIterator_2_t45695FAD12AECDCF67704BAAE379C8FDE970CB15  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t45695FAD12AECDCF67704BAAE379C8FDE970CB15, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t45695FAD12AECDCF67704BAAE379C8FDE970CB15, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t45695FAD12AECDCF67704BAAE379C8FDE970CB15, ___selector_5)); }
	inline Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t45695FAD12AECDCF67704BAAE379C8FDE970CB15, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectArrayIterator_2_t59039EC82706A391E9A41B54EDEFFB4941BC3A04  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t59039EC82706A391E9A41B54EDEFFB4941BC3A04, ___source_3)); }
	inline JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* get_source_3() const { return ___source_3; }
	inline JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t59039EC82706A391E9A41B54EDEFFB4941BC3A04, ___predicate_4)); }
	inline Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t59039EC82706A391E9A41B54EDEFFB4941BC3A04, ___selector_5)); }
	inline Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t59039EC82706A391E9A41B54EDEFFB4941BC3A04, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectEnumerableIterator_2_tE261A66F9B271521B190612F18B97587DF41B28E  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE261A66F9B271521B190612F18B97587DF41B28E, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE261A66F9B271521B190612F18B97587DF41B28E, ___predicate_4)); }
	inline Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE261A66F9B271521B190612F18B97587DF41B28E, ___selector_5)); }
	inline Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE261A66F9B271521B190612F18B97587DF41B28E, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectEnumerableIterator_2_tF8AD9D99A7745F93717E83397CF3C6D74754260F  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF8AD9D99A7745F93717E83397CF3C6D74754260F, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF8AD9D99A7745F93717E83397CF3C6D74754260F, ___predicate_4)); }
	inline Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF8AD9D99A7745F93717E83397CF3C6D74754260F, ___selector_5)); }
	inline Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF8AD9D99A7745F93717E83397CF3C6D74754260F, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectEnumerableIterator_2_tE6266DEEB8A66F18BC1B01812D286D823CA64FB5  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE6266DEEB8A66F18BC1B01812D286D823CA64FB5, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE6266DEEB8A66F18BC1B01812D286D823CA64FB5, ___predicate_4)); }
	inline Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE6266DEEB8A66F18BC1B01812D286D823CA64FB5, ___selector_5)); }
	inline Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE6266DEEB8A66F18BC1B01812D286D823CA64FB5, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectEnumerableIterator_2_tE4C9445258E1E4892D4A54064D04A17716B2CCA5  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE4C9445258E1E4892D4A54064D04A17716B2CCA5, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE4C9445258E1E4892D4A54064D04A17716B2CCA5, ___predicate_4)); }
	inline Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE4C9445258E1E4892D4A54064D04A17716B2CCA5, ___selector_5)); }
	inline Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE4C9445258E1E4892D4A54064D04A17716B2CCA5, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectEnumerableIterator_2_tD29CCA55EC8E7C6740D5B27A62DB297B97D1DA3B  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tD29CCA55EC8E7C6740D5B27A62DB297B97D1DA3B, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tD29CCA55EC8E7C6740D5B27A62DB297B97D1DA3B, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tD29CCA55EC8E7C6740D5B27A62DB297B97D1DA3B, ___selector_5)); }
	inline Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tD29CCA55EC8E7C6740D5B27A62DB297B97D1DA3B, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectEnumerableIterator_2_t5A2A98A870176D507687BD52CB1F9AC687F62C64  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t5A2A98A870176D507687BD52CB1F9AC687F62C64, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t5A2A98A870176D507687BD52CB1F9AC687F62C64, ___predicate_4)); }
	inline Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t5A2A98A870176D507687BD52CB1F9AC687F62C64, ___selector_5)); }
	inline Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t5A2A98A870176D507687BD52CB1F9AC687F62C64, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t92C51D1FE38925DAC325C4384E335B81A879F9FA  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t92C51D1FE38925DAC325C4384E335B81A879F9FA, ___source_3)); }
	inline List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF * get_source_3() const { return ___source_3; }
	inline List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t92C51D1FE38925DAC325C4384E335B81A879F9FA, ___predicate_4)); }
	inline Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t92C51D1FE38925DAC325C4384E335B81A879F9FA, ___selector_5)); }
	inline Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t92C51D1FE38925DAC325C4384E335B81A879F9FA, ___enumerator_6)); }
	inline Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct WhereSelectListIterator_2_t4DBF7D016A01FED927964A925069CF01F8D63DC6  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4DBF7D016A01FED927964A925069CF01F8D63DC6, ___source_3)); }
	inline List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF * get_source_3() const { return ___source_3; }
	inline List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4DBF7D016A01FED927964A925069CF01F8D63DC6, ___predicate_4)); }
	inline Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4DBF7D016A01FED927964A925069CF01F8D63DC6, ___selector_5)); }
	inline Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4DBF7D016A01FED927964A925069CF01F8D63DC6, ___enumerator_6)); }
	inline Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t0C3A8DEA48C0B284960D9EDBE4687960E8294322  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t0C3A8DEA48C0B284960D9EDBE4687960E8294322, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t0C3A8DEA48C0B284960D9EDBE4687960E8294322, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t0C3A8DEA48C0B284960D9EDBE4687960E8294322, ___selector_5)); }
	inline Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t0C3A8DEA48C0B284960D9EDBE4687960E8294322, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
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

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
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


// UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 
{
public:
	// UnityEngine.InputSystem.Utilities.JsonParser/JsonValueType UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::type
	int32_t ___type_0;
	// System.Boolean UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::boolValue
	bool ___boolValue_1;
	// System.Double UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::realValue
	double ___realValue_2;
	// System.Int64 UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::integerValue
	int64_t ___integerValue_3;
	// UnityEngine.InputSystem.Utilities.JsonParser/JsonString UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::stringValue
	JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE  ___stringValue_4;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue> UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::arrayValue
	List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * ___arrayValue_5;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue> UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::objectValue
	Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667 * ___objectValue_6;
	// System.Object UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::anyValue
	RuntimeObject * ___anyValue_7;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_boolValue_1() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___boolValue_1)); }
	inline bool get_boolValue_1() const { return ___boolValue_1; }
	inline bool* get_address_of_boolValue_1() { return &___boolValue_1; }
	inline void set_boolValue_1(bool value)
	{
		___boolValue_1 = value;
	}

	inline static int32_t get_offset_of_realValue_2() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___realValue_2)); }
	inline double get_realValue_2() const { return ___realValue_2; }
	inline double* get_address_of_realValue_2() { return &___realValue_2; }
	inline void set_realValue_2(double value)
	{
		___realValue_2 = value;
	}

	inline static int32_t get_offset_of_integerValue_3() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___integerValue_3)); }
	inline int64_t get_integerValue_3() const { return ___integerValue_3; }
	inline int64_t* get_address_of_integerValue_3() { return &___integerValue_3; }
	inline void set_integerValue_3(int64_t value)
	{
		___integerValue_3 = value;
	}

	inline static int32_t get_offset_of_stringValue_4() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___stringValue_4)); }
	inline JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE  get_stringValue_4() const { return ___stringValue_4; }
	inline JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE * get_address_of_stringValue_4() { return &___stringValue_4; }
	inline void set_stringValue_4(JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE  value)
	{
		___stringValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_arrayValue_5() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___arrayValue_5)); }
	inline List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * get_arrayValue_5() const { return ___arrayValue_5; }
	inline List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 ** get_address_of_arrayValue_5() { return &___arrayValue_5; }
	inline void set_arrayValue_5(List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * value)
	{
		___arrayValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arrayValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_objectValue_6() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___objectValue_6)); }
	inline Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667 * get_objectValue_6() const { return ___objectValue_6; }
	inline Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667 ** get_address_of_objectValue_6() { return &___objectValue_6; }
	inline void set_objectValue_6(Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667 * value)
	{
		___objectValue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectValue_6), (void*)value);
	}

	inline static int32_t get_offset_of_anyValue_7() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___anyValue_7)); }
	inline RuntimeObject * get_anyValue_7() const { return ___anyValue_7; }
	inline RuntimeObject ** get_address_of_anyValue_7() { return &___anyValue_7; }
	inline void set_anyValue_7(RuntimeObject * value)
	{
		___anyValue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anyValue_7), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6_marshaled_pinvoke
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE_marshaled_pinvoke ___stringValue_4;
	List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * ___arrayValue_5;
	Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667 * ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6_marshaled_com
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE_marshaled_com ___stringValue_4;
	List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * ___arrayValue_5;
	Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667 * ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36, ___list_0)); }
	inline List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * get_list_0() const { return ___list_0; }
	inline List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36, ___current_3)); }
	inline JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  get_current_3() const { return ___current_3; }
	inline JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___anyValue_7), (void*)NULL);
		#endif
	}
};


// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Boolean>
struct Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Boolean>
struct Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Ray,System.Boolean>
struct Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Boolean>
struct Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054  : public MulticastDelegate_t
{
public:

public:
};


// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6, ___value_1)); }
	inline JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  get_value_1() const { return ___value_1; }
	inline JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___value_1))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___anyValue_7), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.Ray>
struct WhereArrayIterator_1_t449AE37537E08A0DF5D1F9E009B5F76F3123EFF8  : public Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t449AE37537E08A0DF5D1F9E009B5F76F3123EFF8, ___source_3)); }
	inline RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8* get_source_3() const { return ___source_3; }
	inline RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t449AE37537E08A0DF5D1F9E009B5F76F3123EFF8, ___predicate_4)); }
	inline Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t449AE37537E08A0DF5D1F9E009B5F76F3123EFF8, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Ray>
struct WhereEnumerableIterator_1_t9DC872DA0E20FD9215938840EFD2F047C60C10A4  : public Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9DC872DA0E20FD9215938840EFD2F047C60C10A4, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9DC872DA0E20FD9215938840EFD2F047C60C10A4, ___predicate_4)); }
	inline Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9DC872DA0E20FD9215938840EFD2F047C60C10A4, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereListIterator`1<UnityEngine.Ray>
struct WhereListIterator_1_t59BDE8EC71D10887E7CA957F025BBC225317DEF5  : public Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t59BDE8EC71D10887E7CA957F025BBC225317DEF5, ___source_3)); }
	inline List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * get_source_3() const { return ___source_3; }
	inline List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t59BDE8EC71D10887E7CA957F025BBC225317DEF5, ___predicate_4)); }
	inline Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t59BDE8EC71D10887E7CA957F025BBC225317DEF5, ___enumerator_5)); }
	inline Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t395C59C9BA3C34D4C41F9C06F0C77E6CC2F7F022  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t395C59C9BA3C34D4C41F9C06F0C77E6CC2F7F022, ___source_3)); }
	inline List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 * get_source_3() const { return ___source_3; }
	inline List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t395C59C9BA3C34D4C41F9C06F0C77E6CC2F7F022, ___predicate_4)); }
	inline Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t395C59C9BA3C34D4C41F9C06F0C77E6CC2F7F022, ___selector_5)); }
	inline Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t395C59C9BA3C34D4C41F9C06F0C77E6CC2F7F022, ___enumerator_6)); }
	inline Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___enumerator_6))->___current_3))->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct WhereSelectListIterator_2_tDBB022641D0459A3B157C96D7470764685F4C514  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDBB022641D0459A3B157C96D7470764685F4C514, ___source_3)); }
	inline List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 * get_source_3() const { return ___source_3; }
	inline List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDBB022641D0459A3B157C96D7470764685F4C514, ___predicate_4)); }
	inline Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDBB022641D0459A3B157C96D7470764685F4C514, ___selector_5)); }
	inline Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * get_selector_5() const { return ___selector_5; }
	inline Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDBB022641D0459A3B157C96D7470764685F4C514, ___enumerator_6)); }
	inline Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___enumerator_6))->___current_3))->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
	}
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


// UnityEngine.InputSystem.Utilities.NamedValue
struct NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.NamedValue::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_1;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Utilities.NamedValue::<value>k__BackingField
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___U3CvalueU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489, ___U3CnameU3Ek__BackingField_1)); }
	inline String_t* get_U3CnameU3Ek__BackingField_1() const { return ___U3CnameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_1() { return &___U3CnameU3Ek__BackingField_1; }
	inline void set_U3CnameU3Ek__BackingField_1(String_t* value)
	{
		___U3CnameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489, ___U3CvalueU3Ek__BackingField_2)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_U3CvalueU3Ek__BackingField_2() const { return ___U3CvalueU3Ek__BackingField_2; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_U3CvalueU3Ek__BackingField_2() { return &___U3CvalueU3Ek__BackingField_2; }
	inline void set_U3CvalueU3Ek__BackingField_2(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___U3CvalueU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.NamedValue
struct NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_1;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke ___U3CvalueU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.NamedValue
struct NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_1;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com ___U3CvalueU3Ek__BackingField_2;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem
struct ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA 
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<name>k__BackingField
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___U3CnameU3Ek__BackingField_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<layout>k__BackingField
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___U3ClayoutU3Ek__BackingField_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<variants>k__BackingField
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___U3CvariantsU3Ek__BackingField_2;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<useStateFrom>k__BackingField
	String_t* ___U3CuseStateFromU3Ek__BackingField_3;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_4;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<shortDisplayName>k__BackingField
	String_t* ___U3CshortDisplayNameU3Ek__BackingField_5;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<usages>k__BackingField
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___U3CusagesU3Ek__BackingField_6;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<aliases>k__BackingField
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___U3CaliasesU3Ek__BackingField_7;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NamedValue> UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<parameters>k__BackingField
	ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  ___U3CparametersU3Ek__BackingField_8;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NameAndParameters> UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<processors>k__BackingField
	ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED  ___U3CprocessorsU3Ek__BackingField_9;
	// System.UInt32 UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<offset>k__BackingField
	uint32_t ___U3CoffsetU3Ek__BackingField_10;
	// System.UInt32 UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<bit>k__BackingField
	uint32_t ___U3CbitU3Ek__BackingField_11;
	// System.UInt32 UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<format>k__BackingField
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___U3CformatU3Ek__BackingField_13;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem/Flags UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<flags>k__BackingField
	int32_t ___U3CflagsU3Ek__BackingField_14;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<arraySize>k__BackingField
	int32_t ___U3CarraySizeU3Ek__BackingField_15;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<defaultState>k__BackingField
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___U3CdefaultStateU3Ek__BackingField_16;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<minValue>k__BackingField
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___U3CminValueU3Ek__BackingField_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<maxValue>k__BackingField
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___U3CmaxValueU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CnameU3Ek__BackingField_0)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CnameU3Ek__BackingField_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CnameU3Ek__BackingField_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3ClayoutU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3ClayoutU3Ek__BackingField_1)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_U3ClayoutU3Ek__BackingField_1() const { return ___U3ClayoutU3Ek__BackingField_1; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_U3ClayoutU3Ek__BackingField_1() { return &___U3ClayoutU3Ek__BackingField_1; }
	inline void set_U3ClayoutU3Ek__BackingField_1(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___U3ClayoutU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3ClayoutU3Ek__BackingField_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3ClayoutU3Ek__BackingField_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CvariantsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CvariantsU3Ek__BackingField_2)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_U3CvariantsU3Ek__BackingField_2() const { return ___U3CvariantsU3Ek__BackingField_2; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_U3CvariantsU3Ek__BackingField_2() { return &___U3CvariantsU3Ek__BackingField_2; }
	inline void set_U3CvariantsU3Ek__BackingField_2(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___U3CvariantsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CvariantsU3Ek__BackingField_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CvariantsU3Ek__BackingField_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CuseStateFromU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CuseStateFromU3Ek__BackingField_3)); }
	inline String_t* get_U3CuseStateFromU3Ek__BackingField_3() const { return ___U3CuseStateFromU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CuseStateFromU3Ek__BackingField_3() { return &___U3CuseStateFromU3Ek__BackingField_3; }
	inline void set_U3CuseStateFromU3Ek__BackingField_3(String_t* value)
	{
		___U3CuseStateFromU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CuseStateFromU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisplayNameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CdisplayNameU3Ek__BackingField_4)); }
	inline String_t* get_U3CdisplayNameU3Ek__BackingField_4() const { return ___U3CdisplayNameU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CdisplayNameU3Ek__BackingField_4() { return &___U3CdisplayNameU3Ek__BackingField_4; }
	inline void set_U3CdisplayNameU3Ek__BackingField_4(String_t* value)
	{
		___U3CdisplayNameU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisplayNameU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CshortDisplayNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CshortDisplayNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CshortDisplayNameU3Ek__BackingField_5() const { return ___U3CshortDisplayNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CshortDisplayNameU3Ek__BackingField_5() { return &___U3CshortDisplayNameU3Ek__BackingField_5; }
	inline void set_U3CshortDisplayNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CshortDisplayNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CshortDisplayNameU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CusagesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CusagesU3Ek__BackingField_6)); }
	inline ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  get_U3CusagesU3Ek__BackingField_6() const { return ___U3CusagesU3Ek__BackingField_6; }
	inline ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E * get_address_of_U3CusagesU3Ek__BackingField_6() { return &___U3CusagesU3Ek__BackingField_6; }
	inline void set_U3CusagesU3Ek__BackingField_6(ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  value)
	{
		___U3CusagesU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CusagesU3Ek__BackingField_6))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CaliasesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CaliasesU3Ek__BackingField_7)); }
	inline ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  get_U3CaliasesU3Ek__BackingField_7() const { return ___U3CaliasesU3Ek__BackingField_7; }
	inline ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E * get_address_of_U3CaliasesU3Ek__BackingField_7() { return &___U3CaliasesU3Ek__BackingField_7; }
	inline void set_U3CaliasesU3Ek__BackingField_7(ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  value)
	{
		___U3CaliasesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CaliasesU3Ek__BackingField_7))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CparametersU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CparametersU3Ek__BackingField_8)); }
	inline ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  get_U3CparametersU3Ek__BackingField_8() const { return ___U3CparametersU3Ek__BackingField_8; }
	inline ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE * get_address_of_U3CparametersU3Ek__BackingField_8() { return &___U3CparametersU3Ek__BackingField_8; }
	inline void set_U3CparametersU3Ek__BackingField_8(ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  value)
	{
		___U3CparametersU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CparametersU3Ek__BackingField_8))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CprocessorsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CprocessorsU3Ek__BackingField_9)); }
	inline ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED  get_U3CprocessorsU3Ek__BackingField_9() const { return ___U3CprocessorsU3Ek__BackingField_9; }
	inline ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED * get_address_of_U3CprocessorsU3Ek__BackingField_9() { return &___U3CprocessorsU3Ek__BackingField_9; }
	inline void set_U3CprocessorsU3Ek__BackingField_9(ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED  value)
	{
		___U3CprocessorsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CprocessorsU3Ek__BackingField_9))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CoffsetU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CoffsetU3Ek__BackingField_10)); }
	inline uint32_t get_U3CoffsetU3Ek__BackingField_10() const { return ___U3CoffsetU3Ek__BackingField_10; }
	inline uint32_t* get_address_of_U3CoffsetU3Ek__BackingField_10() { return &___U3CoffsetU3Ek__BackingField_10; }
	inline void set_U3CoffsetU3Ek__BackingField_10(uint32_t value)
	{
		___U3CoffsetU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CbitU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CbitU3Ek__BackingField_11)); }
	inline uint32_t get_U3CbitU3Ek__BackingField_11() const { return ___U3CbitU3Ek__BackingField_11; }
	inline uint32_t* get_address_of_U3CbitU3Ek__BackingField_11() { return &___U3CbitU3Ek__BackingField_11; }
	inline void set_U3CbitU3Ek__BackingField_11(uint32_t value)
	{
		___U3CbitU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CsizeInBitsU3Ek__BackingField_12)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_12() const { return ___U3CsizeInBitsU3Ek__BackingField_12; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_12() { return &___U3CsizeInBitsU3Ek__BackingField_12; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_12(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CformatU3Ek__BackingField_13)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_U3CformatU3Ek__BackingField_13() const { return ___U3CformatU3Ek__BackingField_13; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_U3CformatU3Ek__BackingField_13() { return &___U3CformatU3Ek__BackingField_13; }
	inline void set_U3CformatU3Ek__BackingField_13(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___U3CformatU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CflagsU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CflagsU3Ek__BackingField_14)); }
	inline int32_t get_U3CflagsU3Ek__BackingField_14() const { return ___U3CflagsU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CflagsU3Ek__BackingField_14() { return &___U3CflagsU3Ek__BackingField_14; }
	inline void set_U3CflagsU3Ek__BackingField_14(int32_t value)
	{
		___U3CflagsU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CarraySizeU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CarraySizeU3Ek__BackingField_15)); }
	inline int32_t get_U3CarraySizeU3Ek__BackingField_15() const { return ___U3CarraySizeU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CarraySizeU3Ek__BackingField_15() { return &___U3CarraySizeU3Ek__BackingField_15; }
	inline void set_U3CarraySizeU3Ek__BackingField_15(int32_t value)
	{
		___U3CarraySizeU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CdefaultStateU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CdefaultStateU3Ek__BackingField_16)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_U3CdefaultStateU3Ek__BackingField_16() const { return ___U3CdefaultStateU3Ek__BackingField_16; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_U3CdefaultStateU3Ek__BackingField_16() { return &___U3CdefaultStateU3Ek__BackingField_16; }
	inline void set_U3CdefaultStateU3Ek__BackingField_16(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___U3CdefaultStateU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CminValueU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CminValueU3Ek__BackingField_17)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_U3CminValueU3Ek__BackingField_17() const { return ___U3CminValueU3Ek__BackingField_17; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_U3CminValueU3Ek__BackingField_17() { return &___U3CminValueU3Ek__BackingField_17; }
	inline void set_U3CminValueU3Ek__BackingField_17(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___U3CminValueU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CmaxValueU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CmaxValueU3Ek__BackingField_18)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_U3CmaxValueU3Ek__BackingField_18() const { return ___U3CmaxValueU3Ek__BackingField_18; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_U3CmaxValueU3Ek__BackingField_18() { return &___U3CmaxValueU3Ek__BackingField_18; }
	inline void set_U3CmaxValueU3Ek__BackingField_18(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___U3CmaxValueU3Ek__BackingField_18 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem
struct ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA_marshaled_pinvoke
{
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke ___U3CnameU3Ek__BackingField_0;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke ___U3ClayoutU3Ek__BackingField_1;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke ___U3CvariantsU3Ek__BackingField_2;
	char* ___U3CuseStateFromU3Ek__BackingField_3;
	char* ___U3CdisplayNameU3Ek__BackingField_4;
	char* ___U3CshortDisplayNameU3Ek__BackingField_5;
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___U3CusagesU3Ek__BackingField_6;
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___U3CaliasesU3Ek__BackingField_7;
	ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  ___U3CparametersU3Ek__BackingField_8;
	ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED  ___U3CprocessorsU3Ek__BackingField_9;
	uint32_t ___U3CoffsetU3Ek__BackingField_10;
	uint32_t ___U3CbitU3Ek__BackingField_11;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_12;
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___U3CformatU3Ek__BackingField_13;
	int32_t ___U3CflagsU3Ek__BackingField_14;
	int32_t ___U3CarraySizeU3Ek__BackingField_15;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke ___U3CdefaultStateU3Ek__BackingField_16;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke ___U3CminValueU3Ek__BackingField_17;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke ___U3CmaxValueU3Ek__BackingField_18;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem
struct ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA_marshaled_com
{
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com ___U3CnameU3Ek__BackingField_0;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com ___U3ClayoutU3Ek__BackingField_1;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com ___U3CvariantsU3Ek__BackingField_2;
	Il2CppChar* ___U3CuseStateFromU3Ek__BackingField_3;
	Il2CppChar* ___U3CdisplayNameU3Ek__BackingField_4;
	Il2CppChar* ___U3CshortDisplayNameU3Ek__BackingField_5;
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___U3CusagesU3Ek__BackingField_6;
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___U3CaliasesU3Ek__BackingField_7;
	ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  ___U3CparametersU3Ek__BackingField_8;
	ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED  ___U3CprocessorsU3Ek__BackingField_9;
	uint32_t ___U3CoffsetU3Ek__BackingField_10;
	uint32_t ___U3CbitU3Ek__BackingField_11;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_12;
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___U3CformatU3Ek__BackingField_13;
	int32_t ___U3CflagsU3Ek__BackingField_14;
	int32_t ___U3CarraySizeU3Ek__BackingField_15;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com ___U3CdefaultStateU3Ek__BackingField_16;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com ___U3CminValueU3Ek__BackingField_17;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com ___U3CmaxValueU3Ek__BackingField_18;
};

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>
struct Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109, ___list_0)); }
	inline List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F * get_list_0() const { return ___list_0; }
	inline List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109, ___current_3)); }
	inline KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___current_3))->___value_1))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___value_1))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___value_1))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___value_1))->___anyValue_7), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>
struct Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297, ___list_0)); }
	inline List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 * get_list_0() const { return ___list_0; }
	inline List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297, ___current_3)); }
	inline NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  get_current_3() const { return ___current_3; }
	inline NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___U3CnameU3Ek__BackingField_1), (void*)NULL);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>
struct Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162, ___list_0)); }
	inline List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 * get_list_0() const { return ___list_0; }
	inline List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162, ___current_3)); }
	inline ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  get_current_3() const { return ___current_3; }
	inline ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___U3CnameU3Ek__BackingField_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___U3CnameU3Ek__BackingField_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___U3ClayoutU3Ek__BackingField_1))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___U3ClayoutU3Ek__BackingField_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___U3CvariantsU3Ek__BackingField_2))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___U3CvariantsU3Ek__BackingField_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___U3CuseStateFromU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___U3CdisplayNameU3Ek__BackingField_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___U3CshortDisplayNameU3Ek__BackingField_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___U3CusagesU3Ek__BackingField_6))->___m_Array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___U3CaliasesU3Ek__BackingField_7))->___m_Array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___U3CparametersU3Ek__BackingField_8))->___m_Array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___U3CprocessorsU3Ek__BackingField_9))->___m_Array_0), (void*)NULL);
		#endif
	}
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Boolean>
struct Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>
struct Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Boolean>
struct Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem,System.Boolean>
struct Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B  : public MulticastDelegate_t
{
public:

public:
};


// System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>
struct Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E, ___current_2)); }
	inline ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  get_current_2() const { return ___current_2; }
	inline ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_2))->___U3CnameU3Ek__BackingField_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_2))->___U3CnameU3Ek__BackingField_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_2))->___U3ClayoutU3Ek__BackingField_1))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_2))->___U3ClayoutU3Ek__BackingField_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_2))->___U3CvariantsU3Ek__BackingField_2))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_2))->___U3CvariantsU3Ek__BackingField_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___U3CuseStateFromU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___U3CdisplayNameU3Ek__BackingField_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___U3CshortDisplayNameU3Ek__BackingField_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_2))->___U3CusagesU3Ek__BackingField_6))->___m_Array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_2))->___U3CaliasesU3Ek__BackingField_7))->___m_Array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_2))->___U3CparametersU3Ek__BackingField_8))->___m_Array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_2))->___U3CprocessorsU3Ek__BackingField_9))->___m_Array_0), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t287BA3EF11B60F8D6D5341C59199D704B2CD60EC  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t287BA3EF11B60F8D6D5341C59199D704B2CD60EC, ___source_3)); }
	inline List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * get_source_3() const { return ___source_3; }
	inline List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t287BA3EF11B60F8D6D5341C59199D704B2CD60EC, ___predicate_4)); }
	inline Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t287BA3EF11B60F8D6D5341C59199D704B2CD60EC, ___selector_5)); }
	inline Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t287BA3EF11B60F8D6D5341C59199D704B2CD60EC, ___enumerator_6)); }
	inline Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___enumerator_6))->___current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___anyValue_7), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct WhereSelectListIterator_2_tE51A4A0DD40EA32031DEA256235101226D7983A4  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE51A4A0DD40EA32031DEA256235101226D7983A4, ___source_3)); }
	inline List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * get_source_3() const { return ___source_3; }
	inline List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE51A4A0DD40EA32031DEA256235101226D7983A4, ___predicate_4)); }
	inline Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE51A4A0DD40EA32031DEA256235101226D7983A4, ___selector_5)); }
	inline Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE51A4A0DD40EA32031DEA256235101226D7983A4, ___enumerator_6)); }
	inline Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___enumerator_6))->___current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___anyValue_7), (void*)NULL);
		#endif
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>
struct WhereArrayIterator_1_t2848537218BB492682B2AAEBF73B38E457A32344  : public Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t2848537218BB492682B2AAEBF73B38E457A32344, ___source_3)); }
	inline ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* get_source_3() const { return ___source_3; }
	inline ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t2848537218BB492682B2AAEBF73B38E457A32344, ___predicate_4)); }
	inline Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t2848537218BB492682B2AAEBF73B38E457A32344, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>
struct WhereEnumerableIterator_1_tA04C2761DAB712635C719F323B48DE20FBCAC459  : public Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tA04C2761DAB712635C719F323B48DE20FBCAC459, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tA04C2761DAB712635C719F323B48DE20FBCAC459, ___predicate_4)); }
	inline Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tA04C2761DAB712635C719F323B48DE20FBCAC459, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereListIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>
struct WhereListIterator_1_t9DAE4704EF88FF8B6178F408E1323BD0706B0C61  : public Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t9DAE4704EF88FF8B6178F408E1323BD0706B0C61, ___source_3)); }
	inline List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 * get_source_3() const { return ___source_3; }
	inline List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t9DAE4704EF88FF8B6178F408E1323BD0706B0C61, ___predicate_4)); }
	inline Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t9DAE4704EF88FF8B6178F408E1323BD0706B0C61, ___enumerator_5)); }
	inline Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___enumerator_5))->___current_3))->___U3CnameU3Ek__BackingField_0))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___enumerator_5))->___current_3))->___U3CnameU3Ek__BackingField_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___enumerator_5))->___current_3))->___U3ClayoutU3Ek__BackingField_1))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___enumerator_5))->___current_3))->___U3ClayoutU3Ek__BackingField_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___enumerator_5))->___current_3))->___U3CvariantsU3Ek__BackingField_2))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___enumerator_5))->___current_3))->___U3CvariantsU3Ek__BackingField_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___U3CuseStateFromU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___U3CdisplayNameU3Ek__BackingField_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___U3CshortDisplayNameU3Ek__BackingField_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___enumerator_5))->___current_3))->___U3CusagesU3Ek__BackingField_6))->___m_Array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___enumerator_5))->___current_3))->___U3CaliasesU3Ek__BackingField_7))->___m_Array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___enumerator_5))->___current_3))->___U3CparametersU3Ek__BackingField_8))->___m_Array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___enumerator_5))->___current_3))->___U3CprocessorsU3Ek__BackingField_9))->___m_Array_0), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tD1BA4FC724363474EC7C0A74DEC0D43F7D14819D  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tD1BA4FC724363474EC7C0A74DEC0D43F7D14819D, ___source_3)); }
	inline List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F * get_source_3() const { return ___source_3; }
	inline List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tD1BA4FC724363474EC7C0A74DEC0D43F7D14819D, ___predicate_4)); }
	inline Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tD1BA4FC724363474EC7C0A74DEC0D43F7D14819D, ___selector_5)); }
	inline Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tD1BA4FC724363474EC7C0A74DEC0D43F7D14819D, ___enumerator_6)); }
	inline Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((&(((&___enumerator_6))->___current_3))->___value_1))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___enumerator_6))->___current_3))->___value_1))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___enumerator_6))->___current_3))->___value_1))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___enumerator_6))->___current_3))->___value_1))->___anyValue_7), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>
struct WhereSelectListIterator_2_tADE7203722367A98D04CEC0987FF549BC22E9AE6  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tADE7203722367A98D04CEC0987FF549BC22E9AE6, ___source_3)); }
	inline List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F * get_source_3() const { return ___source_3; }
	inline List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tADE7203722367A98D04CEC0987FF549BC22E9AE6, ___predicate_4)); }
	inline Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tADE7203722367A98D04CEC0987FF549BC22E9AE6, ___selector_5)); }
	inline Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tADE7203722367A98D04CEC0987FF549BC22E9AE6, ___enumerator_6)); }
	inline Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((&(((&___enumerator_6))->___current_3))->___value_1))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___enumerator_6))->___current_3))->___value_1))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___enumerator_6))->___current_3))->___value_1))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___enumerator_6))->___current_3))->___value_1))->___anyValue_7), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t75144211B1AAEF36930DB1E9A1BCAE83770FCB18  : public Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t75144211B1AAEF36930DB1E9A1BCAE83770FCB18, ___source_3)); }
	inline List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 * get_source_3() const { return ___source_3; }
	inline List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t75144211B1AAEF36930DB1E9A1BCAE83770FCB18, ___predicate_4)); }
	inline Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t75144211B1AAEF36930DB1E9A1BCAE83770FCB18, ___selector_5)); }
	inline Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t75144211B1AAEF36930DB1E9A1BCAE83770FCB18, ___enumerator_6)); }
	inline Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___U3CnameU3Ek__BackingField_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct WhereSelectListIterator_2_tE38108C185625ADCB97C3EF2869FA9474CBCF02A  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE38108C185625ADCB97C3EF2869FA9474CBCF02A, ___source_3)); }
	inline List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 * get_source_3() const { return ___source_3; }
	inline List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE38108C185625ADCB97C3EF2869FA9474CBCF02A, ___predicate_4)); }
	inline Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE38108C185625ADCB97C3EF2869FA9474CBCF02A, ___selector_5)); }
	inline Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * get_selector_5() const { return ___selector_5; }
	inline Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE38108C185625ADCB97C3EF2869FA9474CBCF02A, ___enumerator_6)); }
	inline Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___U3CnameU3Ek__BackingField_1), (void*)NULL);
		#endif
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry[]
struct EventCacheEntryU5BU5D_t80F73E6323A553217D0AE152EA5541D2E4986CE4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86  m_Items[1];

public:
	inline EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___registrationTable_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tokenListCount_1), (void*)NULL);
		#endif
	}
	inline EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___registrationTable_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tokenListCount_1), (void*)NULL);
		#endif
	}
};
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
// UnityEngine.Ray[]
struct RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  m_Items[1];

public:
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[]
struct ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  m_Items[1];

public:
	inline ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CnameU3Ek__BackingField_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CnameU3Ek__BackingField_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3ClayoutU3Ek__BackingField_1))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3ClayoutU3Ek__BackingField_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CvariantsU3Ek__BackingField_2))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CvariantsU3Ek__BackingField_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CuseStateFromU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CdisplayNameU3Ek__BackingField_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CshortDisplayNameU3Ek__BackingField_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CusagesU3Ek__BackingField_6))->___m_Array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CaliasesU3Ek__BackingField_7))->___m_Array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CparametersU3Ek__BackingField_8))->___m_Array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CprocessorsU3Ek__BackingField_9))->___m_Array_0), (void*)NULL);
		#endif
	}
	inline ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CnameU3Ek__BackingField_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CnameU3Ek__BackingField_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3ClayoutU3Ek__BackingField_1))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3ClayoutU3Ek__BackingField_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CvariantsU3Ek__BackingField_2))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CvariantsU3Ek__BackingField_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CuseStateFromU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CdisplayNameU3Ek__BackingField_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CshortDisplayNameU3Ek__BackingField_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CusagesU3Ek__BackingField_6))->___m_Array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CaliasesU3Ek__BackingField_7))->___m_Array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CparametersU3Ek__BackingField_8))->___m_Array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CprocessorsU3Ek__BackingField_9))->___m_Array_0), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>[]
struct KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  m_Items[1];

public:
	inline KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value_1))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___anyValue_7), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value_1))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___anyValue_7), (void*)NULL);
		#endif
	}
};
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  m_Items[1];

public:
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
};
// UnityEngine.InputSystem.Utilities.NameAndParameters[]
struct NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  m_Items[1];

public:
	inline NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
	}
	inline NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
	}
};
// UnityEngine.InputSystem.Utilities.NamedValue[]
struct NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  m_Items[1];

public:
	inline NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CnameU3Ek__BackingField_1), (void*)NULL);
	}
	inline NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CnameU3Ek__BackingField_1), (void*)NULL);
	}
};
// UnityEngine.InputSystem.Utilities.JsonParser/JsonValue[]
struct JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  m_Items[1];

public:
	inline JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___anyValue_7), (void*)NULL);
		#endif
	}
	inline JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___anyValue_7), (void*)NULL);
		#endif
	}
};


// System.Void System.ValueTuple`2<System.Object,System.Boolean>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m8799150AED3E5BAB5F5B5A9ABD61CB021D597B2E_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___item10, bool ___item21, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Object,System.Boolean>::Equals(System.ValueTuple`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mDCAE0CFCD9B41F9581F177384890CE77B0FD0A0C_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  ___other0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Object,System.Boolean>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mE4BCEB7807BDE9F1AF41BD3B363CBB9B789EDCF1_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Object,System.Boolean>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m6794ABF462564ABD4D55C662553E43FEBA71E64E_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::CompareTo(System.ValueTuple`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_mBFBE9B48A345A7DCE7C4961B0CEA601E8C9B0E4D_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_m0704B19C007F31880C0866C144A16A9DB58622C5_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m4E9B9FFF7913F4856E75A97F1A7754F1ABD0F425_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mCC2F3E980E6FEC45B9A468946FDEDF44F5A816C5_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_mAB31381969CCF20C8FD1EFA4C3512B153BB99CCD_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mEB5440FC6147FF36E33BD24A3949D1F4F0389AAD_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple`2<System.Object,System.Boolean>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m8A3D17EBDEBC136FF2D5AC286F30EDFB1E991561_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Object,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m7200D87E35146B328553F6054EF895C48674919C_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::Equals(System.ValueTuple`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m3D1CF9BC52D9D30BBAC81B7D1D92D1717B52C3D4_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___other0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mA3C53714A625AFACE3FB4DD96BC84FE564B7D605_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m7CCEDF9C2425B7F21E4A75174526F31EE7F06F29_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::CompareTo(System.ValueTuple`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_m894473A95A5BE04AA574654C52387468E5B2BD8E_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_m5D3625FD43C4FB881C7AD4FE2D8903C4F01A40A1_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m6DEDA5DBF39F632E019EF24EA6F6F645E3B935AB_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m2B7B9218773AF6E5AF8AE2EF061403949671DF16_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_mC64A9F022779C7922D764A3A663CADA488A85A27_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m9249874063337840FE1DDBC90F27BB763DF7A465_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple`2<System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_mCF2014EA5D03C52E7A3D77986363E929B059D8BA_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Ray>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Enumerator_get_Current_m9520F939F129F4E566B70E5DC91B22E9BEF5550B_gshared_inline (Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Ray>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0BC3A69DE7C51840530C35316DBECE5DE2E39A79_gshared (Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  Enumerator_get_Current_m5B8DA151C23C9E8A3BC4841B3C5DADD7683C1E76_gshared_inline (Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m122786E299D5552F5CA945BCF827350FC4133F4C_gshared (Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  Enumerator_get_Current_m24D5769F71109D5A58E9CE2ADBA2899166664470_gshared_inline (Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD663716FAC9D47B113EEBF5CF7E97BC14B2D718C_gshared (Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.InternedString>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  Enumerator_get_Current_m986D0D109661BAD2B7202C22E48E69D6FE47864C_gshared_inline (Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC056ABE04AAC10E6D4360F36BC71DAE877580AC1_gshared (Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  Enumerator_get_Current_m9B5BEE342DF9CBA1DEECD9A57D0804E37864A3CE_gshared_inline (Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m96DEC00B81C69021E089863370BE96C9153B858E_gshared (Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  Enumerator_get_Current_m5A657600EB725FA49CD48AA20BF660A67F85E58A_gshared_inline (Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE99B5153A3F6C418C52FAEEA34CF98F79E24867D_gshared (Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  Enumerator_get_Current_mCAFCD35F9DCF52EA5756F74ADD7DAD2328ECC013_gshared_inline (Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB20322278FDC6D06D3B898481DF35848BF48B957_gshared (Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5 (int32_t ___argument0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowNotSupportedException(System.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E (int32_t ___resource0, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Object,System.Boolean>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_m8799150AED3E5BAB5F5B5A9ABD61CB021D597B2E (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___item10, bool ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, RuntimeObject *, bool, const RuntimeMethod*))ValueTuple_2__ctor_m8799150AED3E5BAB5F5B5A9ABD61CB021D597B2E_gshared)(__this, ___item10, ___item21, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Boolean>::Equals(System.ValueTuple`2<T1,T2>)
inline bool ValueTuple_2_Equals_mDCAE0CFCD9B41F9581F177384890CE77B0FD0A0C (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 , const RuntimeMethod*))ValueTuple_2_Equals_mDCAE0CFCD9B41F9581F177384890CE77B0FD0A0C_gshared)(__this, ___other0, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Boolean>::Equals(System.Object)
inline bool ValueTuple_2_Equals_mE4BCEB7807BDE9F1AF41BD3B363CBB9B789EDCF1 (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_2_Equals_mE4BCEB7807BDE9F1AF41BD3B363CBB9B789EDCF1_gshared)(__this, ___obj0, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Boolean>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
inline bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m6794ABF462564ABD4D55C662553E43FEBA71E64E (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m6794ABF462564ABD4D55C662553E43FEBA71E64E_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::CompareTo(System.ValueTuple`2<T1,T2>)
inline int32_t ValueTuple_2_CompareTo_mBFBE9B48A345A7DCE7C4961B0CEA601E8C9B0E4D (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 , const RuntimeMethod*))ValueTuple_2_CompareTo_mBFBE9B48A345A7DCE7C4961B0CEA601E8C9B0E4D_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::System.IComparable.CompareTo(System.Object)
inline int32_t ValueTuple_2_System_IComparable_CompareTo_m0704B19C007F31880C0866C144A16A9DB58622C5 (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_2_System_IComparable_CompareTo_m0704B19C007F31880C0866C144A16A9DB58622C5_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
inline int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m4E9B9FFF7913F4856E75A97F1A7754F1ABD0F425 (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m4E9B9FFF7913F4856E75A97F1A7754F1ABD0F425_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411 (bool* __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m8DFF92580E749E5A974898EB0828D424C2A251BB (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::GetHashCode()
inline int32_t ValueTuple_2_GetHashCode_mCC2F3E980E6FEC45B9A468946FDEDF44F5A816C5 (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, const RuntimeMethod*))ValueTuple_2_GetHashCode_mCC2F3E980E6FEC45B9A468946FDEDF44F5A816C5_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::GetHashCodeCore(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_2_GetHashCodeCore_mAB31381969CCF20C8FD1EFA4C3512B153BB99CCD (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_GetHashCodeCore_mAB31381969CCF20C8FD1EFA4C3512B153BB99CCD_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mEB5440FC6147FF36E33BD24A3949D1F4F0389AAD (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mEB5440FC6147FF36E33BD24A3949D1F4F0389AAD_gshared)(__this, ___comparer0, method);
}
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.ValueTuple`2<System.Object,System.Boolean>::ToString()
inline String_t* ValueTuple_2_ToString_m8A3D17EBDEBC136FF2D5AC286F30EDFB1E991561 (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *, const RuntimeMethod*))ValueTuple_2_ToString_m8A3D17EBDEBC136FF2D5AC286F30EDFB1E991561_gshared)(__this, method);
}
// System.Void System.ValueTuple`2<System.Object,System.Object>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_m7200D87E35146B328553F6054EF895C48674919C (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))ValueTuple_2__ctor_m7200D87E35146B328553F6054EF895C48674919C_gshared)(__this, ___item10, ___item21, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::Equals(System.ValueTuple`2<T1,T2>)
inline bool ValueTuple_2_Equals_m3D1CF9BC52D9D30BBAC81B7D1D92D1717B52C3D4 (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))ValueTuple_2_Equals_m3D1CF9BC52D9D30BBAC81B7D1D92D1717B52C3D4_gshared)(__this, ___other0, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::Equals(System.Object)
inline bool ValueTuple_2_Equals_mA3C53714A625AFACE3FB4DD96BC84FE564B7D605 (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_2_Equals_mA3C53714A625AFACE3FB4DD96BC84FE564B7D605_gshared)(__this, ___obj0, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
inline bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m7CCEDF9C2425B7F21E4A75174526F31EE7F06F29 (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m7CCEDF9C2425B7F21E4A75174526F31EE7F06F29_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::CompareTo(System.ValueTuple`2<T1,T2>)
inline int32_t ValueTuple_2_CompareTo_m894473A95A5BE04AA574654C52387468E5B2BD8E (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))ValueTuple_2_CompareTo_m894473A95A5BE04AA574654C52387468E5B2BD8E_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
inline int32_t ValueTuple_2_System_IComparable_CompareTo_m5D3625FD43C4FB881C7AD4FE2D8903C4F01A40A1 (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_2_System_IComparable_CompareTo_m5D3625FD43C4FB881C7AD4FE2D8903C4F01A40A1_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
inline int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m6DEDA5DBF39F632E019EF24EA6F6F645E3B935AB (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m6DEDA5DBF39F632E019EF24EA6F6F645E3B935AB_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::GetHashCode()
inline int32_t ValueTuple_2_GetHashCode_m2B7B9218773AF6E5AF8AE2EF061403949671DF16 (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, const RuntimeMethod*))ValueTuple_2_GetHashCode_m2B7B9218773AF6E5AF8AE2EF061403949671DF16_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_2_GetHashCodeCore_mC64A9F022779C7922D764A3A663CADA488A85A27 (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_GetHashCodeCore_mC64A9F022779C7922D764A3A663CADA488A85A27_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m9249874063337840FE1DDBC90F27BB763DF7A465 (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m9249874063337840FE1DDBC90F27BB763DF7A465_gshared)(__this, ___comparer0, method);
}
// System.String System.ValueTuple`2<System.Object,System.Object>::ToString()
inline String_t* ValueTuple_2_ToString_mCF2014EA5D03C52E7A3D77986363E929B059D8BA (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *, const RuntimeMethod*))ValueTuple_2_ToString_mCF2014EA5D03C52E7A3D77986363E929B059D8BA_gshared)(__this, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m705ADACFB52D6385DDB6B2525C1979ECBE6D5849 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Ray>::get_Current()
inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Enumerator_get_Current_m9520F939F129F4E566B70E5DC91B22E9BEF5550B_inline (Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657 * __this, const RuntimeMethod* method)
{
	return ((  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  (*) (Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657 *, const RuntimeMethod*))Enumerator_get_Current_m9520F939F129F4E566B70E5DC91B22E9BEF5550B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Ray>::MoveNext()
inline bool Enumerator_MoveNext_m0BC3A69DE7C51840530C35316DBECE5DE2E39A79 (Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657 *, const RuntimeMethod*))Enumerator_MoveNext_m0BC3A69DE7C51840530C35316DBECE5DE2E39A79_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::get_Current()
inline ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  Enumerator_get_Current_m5B8DA151C23C9E8A3BC4841B3C5DADD7683C1E76_inline (Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162 * __this, const RuntimeMethod* method)
{
	return ((  ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  (*) (Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162 *, const RuntimeMethod*))Enumerator_get_Current_m5B8DA151C23C9E8A3BC4841B3C5DADD7683C1E76_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::MoveNext()
inline bool Enumerator_MoveNext_m122786E299D5552F5CA945BCF827350FC4133F4C (Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162 *, const RuntimeMethod*))Enumerator_MoveNext_m122786E299D5552F5CA945BCF827350FC4133F4C_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>::get_Current()
inline KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  Enumerator_get_Current_m24D5769F71109D5A58E9CE2ADBA2899166664470_inline (Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  (*) (Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 *, const RuntimeMethod*))Enumerator_get_Current_m24D5769F71109D5A58E9CE2ADBA2899166664470_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>::MoveNext()
inline bool Enumerator_MoveNext_mD663716FAC9D47B113EEBF5CF7E97BC14B2D718C (Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 *, const RuntimeMethod*))Enumerator_MoveNext_mD663716FAC9D47B113EEBF5CF7E97BC14B2D718C_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.InternedString>::get_Current()
inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  Enumerator_get_Current_m986D0D109661BAD2B7202C22E48E69D6FE47864C_inline (Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 * __this, const RuntimeMethod* method)
{
	return ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 *, const RuntimeMethod*))Enumerator_get_Current_m986D0D109661BAD2B7202C22E48E69D6FE47864C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
inline bool Enumerator_MoveNext_mC056ABE04AAC10E6D4360F36BC71DAE877580AC1 (Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 *, const RuntimeMethod*))Enumerator_MoveNext_mC056ABE04AAC10E6D4360F36BC71DAE877580AC1_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>::get_Current()
inline NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  Enumerator_get_Current_m9B5BEE342DF9CBA1DEECD9A57D0804E37864A3CE_inline (Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 * __this, const RuntimeMethod* method)
{
	return ((  NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  (*) (Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 *, const RuntimeMethod*))Enumerator_get_Current_m9B5BEE342DF9CBA1DEECD9A57D0804E37864A3CE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>::MoveNext()
inline bool Enumerator_MoveNext_m96DEC00B81C69021E089863370BE96C9153B858E (Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 *, const RuntimeMethod*))Enumerator_MoveNext_m96DEC00B81C69021E089863370BE96C9153B858E_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>::get_Current()
inline NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  Enumerator_get_Current_m5A657600EB725FA49CD48AA20BF660A67F85E58A_inline (Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 * __this, const RuntimeMethod* method)
{
	return ((  NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  (*) (Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 *, const RuntimeMethod*))Enumerator_get_Current_m5A657600EB725FA49CD48AA20BF660A67F85E58A_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>::MoveNext()
inline bool Enumerator_MoveNext_mE99B5153A3F6C418C52FAEEA34CF98F79E24867D (Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 *, const RuntimeMethod*))Enumerator_MoveNext_mE99B5153A3F6C418C52FAEEA34CF98F79E24867D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::get_Current()
inline JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  Enumerator_get_Current_mCAFCD35F9DCF52EA5756F74ADD7DAD2328ECC013_inline (Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 * __this, const RuntimeMethod* method)
{
	return ((  JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  (*) (Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 *, const RuntimeMethod*))Enumerator_get_Current_mCAFCD35F9DCF52EA5756F74ADD7DAD2328ECC013_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::MoveNext()
inline bool Enumerator_MoveNext_mB20322278FDC6D06D3B898481DF35848BF48B957 (Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 *, const RuntimeMethod*))Enumerator_MoveNext_mB20322278FDC6D06D3B898481DF35848BF48B957_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::.ctor(System.Collections.Generic.ICollection`1<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m14BD9A3D536BD961BE8EAC6CF1DF0735789AA443_gshared (ValueCollection_t7D92672F7282AD68A0C029BCDA6AF66001E9EB42 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___collection0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)6, /*hidden argument*/NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___collection0;
		__this->set_m_collection_0(L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_mD34A78546492A96A16BC34940194C83EDC47CA8D_gshared (ValueCollection_t7D92672F7282AD68A0C029BCDA6AF66001E9EB42 * __this, EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86  ___item0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::System.Collections.Generic.ICollection<TValue>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m124376F525DF4120C7FF962194911487E8A4215E_gshared (ValueCollection_t7D92672F7282AD68A0C029BCDA6AF66001E9EB42 * __this, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m0EDE9668761CC68F86045A38810A9F4A8A46DBF8_gshared (ValueCollection_t7D92672F7282AD68A0C029BCDA6AF66001E9EB42 * __this, EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86  ___item0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_collection_0();
		EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86  L_1 = ___item0;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::Contains(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, (EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86 )L_1);
		return (bool)L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m4702C6315587A56A88B7EC0A294F375FA774357C_gshared (ValueCollection_t7D92672F7282AD68A0C029BCDA6AF66001E9EB42 * __this, EventCacheEntryU5BU5D_t80F73E6323A553217D0AE152EA5541D2E4986CE4* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_collection_0();
		EventCacheEntryU5BU5D_t80F73E6323A553217D0AE152EA5541D2E4986CE4* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< EventCacheEntryU5BU5D_t80F73E6323A553217D0AE152EA5541D2E4986CE4*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, (EventCacheEntryU5BU5D_t80F73E6323A553217D0AE152EA5541D2E4986CE4*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m24528D695E6D83B17AD4056811A7CDAAF9C54864_gshared (ValueCollection_t7D92672F7282AD68A0C029BCDA6AF66001E9EB42 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_collection_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0);
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m72E43F51DBCDDA952E60816451D963DD8DF34ACF_gshared (ValueCollection_t7D92672F7282AD68A0C029BCDA6AF66001E9EB42 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mF11A0EFE771FF4CE6187175FA6FDAF12AF63D538_gshared (ValueCollection_t7D92672F7282AD68A0C029BCDA6AF66001E9EB42 * __this, EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86  ___item0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_GetEnumerator_mE6BF5A84D155D70E4CF1A037747052FBFBAC7C55_gshared (ValueCollection_t7D92672F7282AD68A0C029BCDA6AF66001E9EB42 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_collection_0();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_mFC23F2A68421D33C259983A322EC7A6785F84559_gshared (ValueCollection_t7D92672F7282AD68A0C029BCDA6AF66001E9EB42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_collection_0();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_mE76A7483A38A7EEDCF032CFFB02D9A0F5AFED29D_gshared (ValueCollection_t7D92672F7282AD68A0C029BCDA6AF66001E9EB42 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_collection_0();
		RuntimeArray * L_1 = ___array0;
		int32_t L_2 = ___index1;
		((  void (*) (RuntimeObject*, RuntimeArray *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_0, (RuntimeArray *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m7B9549F054A245459351C2C7D47A6D881E040B28_gshared (ValueCollection_t7D92672F7282AD68A0C029BCDA6AF66001E9EB42 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ValueCollection_System_Collections_ICollection_get_SyncRoot_m30F9336064550BC913B13A70FA0AB75EDB2BF9A4_gshared (ValueCollection_t7D92672F7282AD68A0C029BCDA6AF66001E9EB42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_syncRoot_1();
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_m_collection_0();
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject * L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		__this->set_m_syncRoot_1(L_4);
		goto IL_0037;
	}

IL_0025:
	{
		RuntimeObject ** L_5 = (RuntimeObject **)__this->get_address_of_m_syncRoot_1();
		RuntimeObject * L_6 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_6, /*hidden argument*/NULL);
		RuntimeObject * L_7;
		L_7 = InterlockedCompareExchangeImpl<RuntimeObject *>((RuntimeObject **)(RuntimeObject **)L_5, (RuntimeObject *)L_6, (RuntimeObject *)NULL);
	}

IL_0037:
	{
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_syncRoot_1();
		return (RuntimeObject *)L_8;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m3C17E53A6ABC53E38E7CC8292697CA1A10675F49_gshared (ValueCollection_t7D92672F7282AD68A0C029BCDA6AF66001E9EB42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection__ctor_m3C17E53A6ABC53E38E7CC8292697CA1A10675F49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ValueCollection__ctor_m3C17E53A6ABC53E38E7CC8292697CA1A10675F49_RuntimeMethod_var);
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
// System.Void System.ValueTuple`2<System.Object,System.Boolean>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m8799150AED3E5BAB5F5B5A9ABD61CB021D597B2E_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___item10, bool ___item21, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		__this->set_Item1_0(L_0);
		bool L_1 = ___item21;
		__this->set_Item2_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_2__ctor_m8799150AED3E5BAB5F5B5A9ABD61CB021D597B2E_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___item10, bool ___item21, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	ValueTuple_2__ctor_m8799150AED3E5BAB5F5B5A9ABD61CB021D597B2E(_thisAdjusted, ___item10, ___item21, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Boolean>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mE4BCEB7807BDE9F1AF41BD3B363CBB9B789EDCF1_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ValueTuple_2_Equals_mDCAE0CFCD9B41F9581F177384890CE77B0FD0A0C((ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)__this, (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 )((*(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)((ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (bool)L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_mE4BCEB7807BDE9F1AF41BD3B363CBB9B789EDCF1_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_mE4BCEB7807BDE9F1AF41BD3B363CBB9B789EDCF1(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`2<System.Object,System.Boolean>::Equals(System.ValueTuple`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mDCAE0CFCD9B41F9581F177384890CE77B0FD0A0C_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  ___other0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_0;
		L_0 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * L_5;
		L_5 = ((  EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		bool L_6 = (bool)__this->get_Item2_1();
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_7 = ___other0;
		bool L_8 = (bool)L_7.get_Item2_1();
		NullCheck((EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 *)L_5);
		bool L_9;
		L_9 = VirtFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, (EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 *)L_5, (bool)L_6, (bool)L_8);
		return (bool)L_9;
	}

IL_002f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_mDCAE0CFCD9B41F9581F177384890CE77B0FD0A0C_AdjustorThunk (RuntimeObject * __this, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_mDCAE0CFCD9B41F9581F177384890CE77B0FD0A0C(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`2<System.Object,System.Boolean>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m6794ABF462564ABD4D55C662553E43FEBA71E64E_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 )((*(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)((ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5.get_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		bool L_9 = (bool)__this->get_Item2_1();
		bool L_10 = L_9;
		RuntimeObject * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 9), &L_10);
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_12 = V_0;
		bool L_13 = (bool)L_12.get_Item2_1();
		bool L_14 = L_13;
		RuntimeObject * L_15 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 9), &L_14);
		NullCheck((RuntimeObject*)L_8);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_11, (RuntimeObject *)L_15);
		return (bool)L_16;
	}

IL_004f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m6794ABF462564ABD4D55C662553E43FEBA71E64E_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m6794ABF462564ABD4D55C662553E43FEBA71E64E(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_m0704B19C007F31880C0866C144A16A9DB58622C5_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_2 = (*(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)__this);
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_3 = (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_2_System_IComparable_CompareTo_m0704B19C007F31880C0866C144A16A9DB58622C5_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		int32_t L_10;
		L_10 = ValueTuple_2_CompareTo_mBFBE9B48A345A7DCE7C4961B0CEA601E8C9B0E4D((ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)__this, (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 )((*(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)((ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_IComparable_CompareTo_m0704B19C007F31880C0866C144A16A9DB58622C5_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_IComparable_CompareTo_m0704B19C007F31880C0866C144A16A9DB58622C5(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::CompareTo(System.ValueTuple`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_mBFBE9B48A345A7DCE7C4961B0CEA601E8C9B0E4D_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_0;
		L_0 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return (int32_t)L_6;
	}

IL_001c:
	{
		Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * L_7;
		L_7 = ((  Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		bool L_8 = (bool)__this->get_Item2_1();
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_9 = ___other0;
		bool L_10 = (bool)L_9.get_Item2_1();
		NullCheck((Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 *)L_7);
		int32_t L_11;
		L_11 = VirtFuncInvoker2< int32_t, bool, bool >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Boolean>::Compare(T,T) */, (Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 *)L_7, (bool)L_8, (bool)L_10);
		return (int32_t)L_11;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_CompareTo_mBFBE9B48A345A7DCE7C4961B0CEA601E8C9B0E4D_AdjustorThunk (RuntimeObject * __this, ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_CompareTo_mBFBE9B48A345A7DCE7C4961B0CEA601E8C9B0E4D(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m4E9B9FFF7913F4856E75A97F1A7754F1ABD0F425_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_2 = (*(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)__this);
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_3 = (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m4E9B9FFF7913F4856E75A97F1A7754F1ABD0F425_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		V_0 = (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 )((*(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)((ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_10 = ___comparer1;
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_12 = V_0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item1_0();
		NullCheck((RuntimeObject*)L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		V_1 = (int32_t)L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return (int32_t)L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___comparer1;
		bool L_18 = (bool)__this->get_Item2_1();
		bool L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 9), &L_19);
		ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12  L_21 = V_0;
		bool L_22 = (bool)L_21.get_Item2_1();
		bool L_23 = L_22;
		RuntimeObject * L_24 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 9), &L_23);
		NullCheck((RuntimeObject*)L_17);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_17, (RuntimeObject *)L_20, (RuntimeObject *)L_24);
		return (int32_t)L_25;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m4E9B9FFF7913F4856E75A97F1A7754F1ABD0F425_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m4E9B9FFF7913F4856E75A97F1A7754F1ABD0F425(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mCC2F3E980E6FEC45B9A468946FDEDF44F5A816C5_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject ** G_B3_0 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	bool* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	bool* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	bool* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		RuntimeObject ** L_0 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
	}
	{
		RuntimeObject * L_2 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = V_0;
		G_B2_0 = (&V_0);
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		bool* L_5 = (bool*)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		G_B7_0 = L_5;
		G_B7_1 = G_B4_0;
		goto IL_005f;
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
	}
	{
		bool L_7 = (*(bool*)G_B5_0);
		V_1 = (bool)L_7;
		G_B7_0 = (&V_1);
		G_B7_1 = G_B5_1;
		goto IL_005f;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		int32_t L_9;
		L_9 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)G_B7_0, /*hidden argument*/NULL);
		G_B8_0 = L_9;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		int32_t L_10;
		L_10 = ValueTuple_CombineHashCodes_m8DFF92580E749E5A974898EB0828D424C2A251BB((int32_t)G_B8_1, (int32_t)G_B8_0, /*hidden argument*/NULL);
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_GetHashCode_mCC2F3E980E6FEC45B9A468946FDEDF44F5A816C5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_GetHashCode_mCC2F3E980E6FEC45B9A468946FDEDF44F5A816C5(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mEB5440FC6147FF36E33BD24A3949D1F4F0389AAD_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_2_GetHashCodeCore_mAB31381969CCF20C8FD1EFA4C3512B153BB99CCD((ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)(ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mEB5440FC6147FF36E33BD24A3949D1F4F0389AAD_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mEB5440FC6147FF36E33BD24A3949D1F4F0389AAD(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Boolean>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_mAB31381969CCF20C8FD1EFA4C3512B153BB99CCD_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		bool L_4 = (bool)__this->get_Item2_1();
		bool L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 9), &L_5);
		NullCheck((RuntimeObject*)L_3);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_6);
		int32_t L_8;
		L_8 = ValueTuple_CombineHashCodes_m8DFF92580E749E5A974898EB0828D424C2A251BB((int32_t)L_2, (int32_t)L_7, /*hidden argument*/NULL);
		return (int32_t)L_8;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_GetHashCodeCore_mAB31381969CCF20C8FD1EFA4C3512B153BB99CCD_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_GetHashCodeCore_mAB31381969CCF20C8FD1EFA4C3512B153BB99CCD(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.String System.ValueTuple`2<System.Object,System.Boolean>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m8A3D17EBDEBC136FF2D5AC286F30EDFB1E991561_gshared (ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject ** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	bool* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	bool* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	bool* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_1;
		RuntimeObject ** L_3 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_4 = V_0;
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003a;
		}
	}
	{
		RuntimeObject * L_5 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_5;
		RuntimeObject * L_6 = V_0;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003a;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0045;
	}

IL_003a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_8;
		bool* L_10 = (bool*)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		G_B7_0 = L_10;
		G_B7_1 = 3;
		G_B7_2 = L_9;
		G_B7_3 = L_9;
		goto IL_007a;
		G_B5_0 = L_10;
		G_B5_1 = 3;
		G_B5_2 = L_9;
		G_B5_3 = L_9;
	}
	{
		bool L_12 = (*(bool*)G_B5_0);
		V_1 = (bool)L_12;
		G_B7_0 = (&V_1);
		G_B7_1 = G_B5_1;
		G_B7_2 = G_B5_2;
		G_B7_3 = G_B5_3;
		goto IL_007a;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0085;
	}

IL_007a:
	{
		String_t* L_14;
		L_14 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(bool*)G_B7_0, /*hidden argument*/NULL);
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_16;
		L_16 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_15, /*hidden argument*/NULL);
		return (String_t*)L_16;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_2_ToString_m8A3D17EBDEBC136FF2D5AC286F30EDFB1E991561_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t79AB170062B95AB2D9CA3EC791830C8AD6608E12 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_2_ToString_m8A3D17EBDEBC136FF2D5AC286F30EDFB1E991561(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ValueTuple`2<System.Object,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m7200D87E35146B328553F6054EF895C48674919C_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		__this->set_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_Item2_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_2__ctor_m7200D87E35146B328553F6054EF895C48674919C_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	ValueTuple_2__ctor_m7200D87E35146B328553F6054EF895C48674919C(_thisAdjusted, ___item10, ___item21, method);
}
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mA3C53714A625AFACE3FB4DD96BC84FE564B7D605_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ValueTuple_2_Equals_m3D1CF9BC52D9D30BBAC81B7D1D92D1717B52C3D4((ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)__this, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )((*(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)((ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (bool)L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_mA3C53714A625AFACE3FB4DD96BC84FE564B7D605_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_mA3C53714A625AFACE3FB4DD96BC84FE564B7D605(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::Equals(System.ValueTuple`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m3D1CF9BC52D9D30BBAC81B7D1D92D1717B52C3D4_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___other0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_0;
		L_0 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_5;
		L_5 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_7 = ___other0;
		RuntimeObject * L_8 = (RuntimeObject *)L_7.get_Item2_1();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5);
		bool L_9;
		L_9 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_8);
		return (bool)L_9;
	}

IL_002f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_m3D1CF9BC52D9D30BBAC81B7D1D92D1717B52C3D4_AdjustorThunk (RuntimeObject * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_m3D1CF9BC52D9D30BBAC81B7D1D92D1717B52C3D4(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m7CCEDF9C2425B7F21E4A75174526F31EE7F06F29_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )((*(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)((ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5.get_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_10 = V_0;
		RuntimeObject * L_11 = (RuntimeObject *)L_10.get_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		return (bool)L_12;
	}

IL_004f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m7CCEDF9C2425B7F21E4A75174526F31EE7F06F29_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m7CCEDF9C2425B7F21E4A75174526F31EE7F06F29(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_m5D3625FD43C4FB881C7AD4FE2D8903C4F01A40A1_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_2 = (*(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)__this);
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_3 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_2_System_IComparable_CompareTo_m5D3625FD43C4FB881C7AD4FE2D8903C4F01A40A1_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		int32_t L_10;
		L_10 = ValueTuple_2_CompareTo_m894473A95A5BE04AA574654C52387468E5B2BD8E((ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)__this, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )((*(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)((ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_IComparable_CompareTo_m5D3625FD43C4FB881C7AD4FE2D8903C4F01A40A1_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_IComparable_CompareTo_m5D3625FD43C4FB881C7AD4FE2D8903C4F01A40A1(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::CompareTo(System.ValueTuple`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_m894473A95A5BE04AA574654C52387468E5B2BD8E_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_0;
		L_0 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return (int32_t)L_6;
	}

IL_001c:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_7;
		L_7 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_9 = ___other0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9.get_Item2_1();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7);
		int32_t L_11;
		L_11 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		return (int32_t)L_11;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_CompareTo_m894473A95A5BE04AA574654C52387468E5B2BD8E_AdjustorThunk (RuntimeObject * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_CompareTo_m894473A95A5BE04AA574654C52387468E5B2BD8E(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m6DEDA5DBF39F632E019EF24EA6F6F645E3B935AB_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_2 = (*(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)__this);
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_3 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m6DEDA5DBF39F632E019EF24EA6F6F645E3B935AB_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		V_0 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )((*(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)((ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_10 = ___comparer1;
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_12 = V_0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item1_0();
		NullCheck((RuntimeObject*)L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		V_1 = (int32_t)L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return (int32_t)L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___comparer1;
		RuntimeObject * L_18 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_19 = V_0;
		RuntimeObject * L_20 = (RuntimeObject *)L_19.get_Item2_1();
		NullCheck((RuntimeObject*)L_17);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_20);
		return (int32_t)L_21;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m6DEDA5DBF39F632E019EF24EA6F6F645E3B935AB_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_m6DEDA5DBF39F632E019EF24EA6F6F645E3B935AB(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m2B7B9218773AF6E5AF8AE2EF061403949671DF16_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		RuntimeObject ** L_0 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
	}
	{
		RuntimeObject * L_2 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = V_0;
		G_B2_0 = (&V_0);
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		RuntimeObject ** L_5 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_6 = V_1;
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
		if (L_6)
		{
			G_B7_0 = L_5;
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
	}
	{
		RuntimeObject * L_7 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_7;
		RuntimeObject * L_8 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		if (L_8)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_9;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		int32_t L_10;
		L_10 = ValueTuple_CombineHashCodes_m8DFF92580E749E5A974898EB0828D424C2A251BB((int32_t)G_B8_1, (int32_t)G_B8_0, /*hidden argument*/NULL);
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_GetHashCode_m2B7B9218773AF6E5AF8AE2EF061403949671DF16_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_GetHashCode_m2B7B9218773AF6E5AF8AE2EF061403949671DF16(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m9249874063337840FE1DDBC90F27BB763DF7A465_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_2_GetHashCodeCore_mC64A9F022779C7922D764A3A663CADA488A85A27((ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m9249874063337840FE1DDBC90F27BB763DF7A465_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_m9249874063337840FE1DDBC90F27BB763DF7A465(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`2<System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_mC64A9F022779C7922D764A3A663CADA488A85A27_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		int32_t L_6;
		L_6 = ValueTuple_CombineHashCodes_m8DFF92580E749E5A974898EB0828D424C2A251BB((int32_t)L_2, (int32_t)L_5, /*hidden argument*/NULL);
		return (int32_t)L_6;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_GetHashCodeCore_mC64A9F022779C7922D764A3A663CADA488A85A27_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_GetHashCodeCore_mC64A9F022779C7922D764A3A663CADA488A85A27(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.String System.ValueTuple`2<System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_mCF2014EA5D03C52E7A3D77986363E929B059D8BA_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_1;
		RuntimeObject ** L_3 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_4 = V_0;
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003a;
		}
	}
	{
		RuntimeObject * L_5 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_5;
		RuntimeObject * L_6 = V_0;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003a;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0045;
	}

IL_003a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_8;
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_1;
		G_B5_0 = L_10;
		G_B5_1 = 3;
		G_B5_2 = L_9;
		G_B5_3 = L_9;
		if (L_11)
		{
			G_B7_0 = L_10;
			G_B7_1 = 3;
			G_B7_2 = L_9;
			G_B7_3 = L_9;
			goto IL_007a;
		}
	}
	{
		RuntimeObject * L_12 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_12;
		RuntimeObject * L_13 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		if (L_13)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007a;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0085;
	}

IL_007a:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_16;
		L_16 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_15, /*hidden argument*/NULL);
		return (String_t*)L_16;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_2_ToString_mCF2014EA5D03C52E7A3D77986363E929B059D8BA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * _thisAdjusted = reinterpret_cast<ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_2_ToString_mCF2014EA5D03C52E7A3D77986363E929B059D8BA(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.WeakReference`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m26CA3930ADE164EA48E474988EE6B82D26E5F9E9_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___target0;
		NullCheck((WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 *)__this);
		((  void (*) (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 *)__this, (RuntimeObject *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_mF2828744686B43E540BF1C0908FA8C14694F666F_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		bool L_0 = ___trackResurrection1;
		__this->set_trackResurrection_1(L_0);
		bool L_1 = ___trackResurrection1;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (int32_t)G_B3_0;
		RuntimeObject * L_2 = ___target0;
		int32_t L_3 = V_0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_4;
		L_4 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		__this->set_handle_0(L_4);
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_mC76935DFFEF0678A77A4811865B9F4D350D72741_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WeakReference_1__ctor_mC76935DFFEF0678A77A4811865B9F4D350D72741_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_2);
		bool L_3;
		L_3 = SerializationInfo_GetBoolean_m705ADACFB52D6385DDB6B2525C1979ECBE6D5849((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_2, (String_t*)_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, /*hidden argument*/NULL);
		__this->set_trackResurrection_1(L_3);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_5, /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_4);
		RuntimeObject * L_7;
		L_7 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_4, (String_t*)_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, (Type_t *)L_6, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)L_7;
		bool L_8 = (bool)__this->get_trackResurrection_1();
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 1;
	}

IL_0047:
	{
		V_1 = (int32_t)G_B5_0;
		RuntimeObject * L_9 = V_0;
		int32_t L_10 = V_1;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_11;
		L_11 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		__this->set_handle_0(L_11);
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_GetObjectData_m7C63330FAC22CBE86AA1BDE2F34DFDA8B1E41272_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WeakReference_1_GetObjectData_m7C63330FAC22CBE86AA1BDE2F34DFDA8B1E41272_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		bool L_3 = (bool)__this->get_trackResurrection_1();
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_2);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_2, (String_t*)_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, (bool)L_3, /*hidden argument*/NULL);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_4 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		bool L_5;
		L_5 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_7 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		RuntimeObject * L_8;
		L_8 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_7, /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_6);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_6, (String_t*)_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, (RuntimeObject *)L_8, /*hidden argument*/NULL);
		return;
	}

IL_0043:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_9 = ___info0;
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_9);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_9, (String_t*)_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.WeakReference`1<System.Object>::TryGetTarget(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_mA9F884507AABEFCC394D06FEEB7AD14ECEB5CD6B_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject ** ___target0, const RuntimeMethod* method)
{
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_0 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		bool L_1;
		L_1 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject ** L_2 = ___target0;
		il2cpp_codegen_initobj(L_2, sizeof(RuntimeObject *));
		return (bool)0;
	}

IL_0016:
	{
		RuntimeObject ** L_3 = ___target0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_4 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		RuntimeObject * L_5;
		L_5 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_4, /*hidden argument*/NULL);
		*(RuntimeObject **)L_3 = ((RuntimeObject *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)((RuntimeObject *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		RuntimeObject ** L_6 = ___target0;
		RuntimeObject * L_7 = (*(RuntimeObject **)L_6);
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void System.WeakReference`1<System.Object>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_Finalize_mFFF6306032DA8256E4F7D125EF76342E83CD6F68_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_0 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		NullCheck((RuntimeObject *)__this);
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m5358A7C3085BC8A103D9793A6D2FCB7E36A2D2CE_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereArrayIterator_1_Clone_m2CF9FC5638704567A64DC86DD674EB4E6F380F79_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_2 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m37A95072CA5380DE7F2D6B57990507C92F045BB3_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_7 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m294488B1E62E494973DD4880121A17A0C8A08118_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_4 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.Ray>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mA3699DD38B5D7CA8E167214D4FCA805EB15A0B17_gshared (WhereArrayIterator_1_t449AE37537E08A0DF5D1F9E009B5F76F3123EFF8 * __this, RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8* ___source0, Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this);
		((  void (*) (Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.Ray>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F * WhereArrayIterator_1_Clone_m137C54F92BE6D0461E984CE5634FA64F6F6FB0CC_gshared (WhereArrayIterator_1_t449AE37537E08A0DF5D1F9E009B5F76F3123EFF8 * __this, const RuntimeMethod* method)
{
	{
		RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8* L_0 = (RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8*)__this->get_source_3();
		Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * L_1 = (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)__this->get_predicate_4();
		WhereArrayIterator_1_t449AE37537E08A0DF5D1F9E009B5F76F3123EFF8 * L_2 = (WhereArrayIterator_1_t449AE37537E08A0DF5D1F9E009B5F76F3123EFF8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t449AE37537E08A0DF5D1F9E009B5F76F3123EFF8 *, RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8*, Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8*)L_0, (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.Ray>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_mB27E2C645B24F4CBB3F42B2C93BFAEC7FA3369D0_gshared (WhereArrayIterator_1_t449AE37537E08A0DF5D1F9E009B5F76F3123EFF8 * __this, const RuntimeMethod* method)
{
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8* L_1 = (RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * L_6 = (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)__this->get_predicate_4();
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_7 = V_0;
		NullCheck((Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)L_6, (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_9 = V_0;
		((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8* L_11 = (RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Ray>::Dispose() */, (Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.Ray>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mC1D6D8518A21ED9D8B5C592DF948003B8C93B5BD_gshared (WhereArrayIterator_1_t449AE37537E08A0DF5D1F9E009B5F76F3123EFF8 * __this, Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * ___predicate0, const RuntimeMethod* method)
{
	{
		RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8* L_0 = (RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8*)__this->get_source_3();
		Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * L_1 = (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)__this->get_predicate_4();
		Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * L_2 = ___predicate0;
		Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * L_3;
		L_3 = ((  Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * (*) (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *, Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)L_1, (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t449AE37537E08A0DF5D1F9E009B5F76F3123EFF8 * L_4 = (WhereArrayIterator_1_t449AE37537E08A0DF5D1F9E009B5F76F3123EFF8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t449AE37537E08A0DF5D1F9E009B5F76F3123EFF8 *, RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8*, Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RayU5BU5D_tC03BD44087BE910F83A479B1E35BC7C9528432B8*)L_0, (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m7E1B7C9E762B007AAA45CC890A99F73E99ECB4CB_gshared (WhereArrayIterator_1_t2848537218BB492682B2AAEBF73B38E457A32344 * __this, ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* ___source0, Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this);
		((  void (*) (Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E * WhereArrayIterator_1_Clone_m3211AF26DC3C3CD4ED24445E27EFFD422739AF8B_gshared (WhereArrayIterator_1_t2848537218BB492682B2AAEBF73B38E457A32344 * __this, const RuntimeMethod* method)
{
	{
		ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* L_0 = (ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB*)__this->get_source_3();
		Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * L_1 = (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)__this->get_predicate_4();
		WhereArrayIterator_1_t2848537218BB492682B2AAEBF73B38E457A32344 * L_2 = (WhereArrayIterator_1_t2848537218BB492682B2AAEBF73B38E457A32344 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t2848537218BB492682B2AAEBF73B38E457A32344 *, ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB*, Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB*)L_0, (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_mDC8A6D47771361CA5BC9CF86FD9433B89664DF76_gshared (WhereArrayIterator_1_t2848537218BB492682B2AAEBF73B38E457A32344 * __this, const RuntimeMethod* method)
{
	ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* L_1 = (ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA )L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * L_6 = (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)__this->get_predicate_4();
		ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  L_7 = V_0;
		NullCheck((Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *, ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)L_6, (ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  L_9 = V_0;
		((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* L_11 = (ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::Dispose() */, (Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mE644318126D47E5DA18E897BF15C767C4CCA9535_gshared (WhereArrayIterator_1_t2848537218BB492682B2AAEBF73B38E457A32344 * __this, Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * ___predicate0, const RuntimeMethod* method)
{
	{
		ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* L_0 = (ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB*)__this->get_source_3();
		Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * L_1 = (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)__this->get_predicate_4();
		Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * L_2 = ___predicate0;
		Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * L_3;
		L_3 = ((  Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * (*) (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *, Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)L_1, (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t2848537218BB492682B2AAEBF73B38E457A32344 * L_4 = (WhereArrayIterator_1_t2848537218BB492682B2AAEBF73B38E457A32344 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t2848537218BB492682B2AAEBF73B38E457A32344 *, ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB*, Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB*)L_0, (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mA5EA2EDF4E3226FEDF4B24D7842FFB76F254507C_gshared (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * __this, RuntimeObject* ___source0, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereEnumerableIterator_1_Clone_m34E75366611F5EB33F3D853DDC5FAEBEABD7F1B0_gshared (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_1 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_2 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m551F0E6DB8F081BCFFFED225B4DA4707552DB98C_gshared (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_mAB8457B37458284471297E8B836913718320C738_gshared (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.InternedString>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_6;
		L_6 = InterfaceFuncInvoker0< InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.InternedString>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_6;
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_7 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_8 = V_1;
		NullCheck((Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_7, (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_10 = V_1;
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mFA05199E5888A44B50F76D82AD7C8FF5A6D99FAE_gshared (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_1 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_2 = ___predicate0;
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_3;
		L_3 = ((  Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * (*) (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_1, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_4 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE8BFA73027409E16668838C4664CE7C48F3254DF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereEnumerableIterator_1_Clone_mD8AFDE4531ADC466665EEE89C052BFF645C1BDD6_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_2 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m4E1339513102BB6B49AD33EDB569D3FFD24ED023_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m6D8A420AEB325BF252721010781EF31CF64D73FF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m4016C553BF1DF1102C2A7B769244B2DC2EA3E716_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_4 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Ray>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mB79BD1CFF149DDB056521EAAF0CE266768676DAD_gshared (WhereEnumerableIterator_1_t9DC872DA0E20FD9215938840EFD2F047C60C10A4 * __this, RuntimeObject* ___source0, Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this);
		((  void (*) (Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Ray>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F * WhereEnumerableIterator_1_Clone_m6F8400C6E094632507E15F76DB9A7A4E2661148C_gshared (WhereEnumerableIterator_1_t9DC872DA0E20FD9215938840EFD2F047C60C10A4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * L_1 = (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t9DC872DA0E20FD9215938840EFD2F047C60C10A4 * L_2 = (WhereEnumerableIterator_1_t9DC872DA0E20FD9215938840EFD2F047C60C10A4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t9DC872DA0E20FD9215938840EFD2F047C60C10A4 *, RuntimeObject*, Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Ray>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m66B93F9E4CEE0DCB5EC288C456B1991D9A8612BF_gshared (WhereEnumerableIterator_1_t9DC872DA0E20FD9215938840EFD2F047C60C10A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this);
		((  void (*) (Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Ray>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_mBC192667514DCB145F75937DAFB80DF5E033EF32_gshared (WhereEnumerableIterator_1_t9DC872DA0E20FD9215938840EFD2F047C60C10A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Ray>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_6;
		L_6 = InterfaceFuncInvoker0< Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Ray>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 )L_6;
		Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * L_7 = (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)__this->get_predicate_4();
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_8 = V_1;
		NullCheck((Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)L_7, (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_10 = V_1;
		((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Ray>::Dispose() */, (Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Ray>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m4AA627702B1EA5A6363F7C0271AA72BB230E681C_gshared (WhereEnumerableIterator_1_t9DC872DA0E20FD9215938840EFD2F047C60C10A4 * __this, Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * L_1 = (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)__this->get_predicate_4();
		Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * L_2 = ___predicate0;
		Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * L_3;
		L_3 = ((  Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * (*) (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *, Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)L_1, (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t9DC872DA0E20FD9215938840EFD2F047C60C10A4 * L_4 = (WhereEnumerableIterator_1_t9DC872DA0E20FD9215938840EFD2F047C60C10A4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t9DC872DA0E20FD9215938840EFD2F047C60C10A4 *, RuntimeObject*, Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mBCC667D6A36566555092E7E5284191CA2D517029_gshared (WhereEnumerableIterator_1_tA04C2761DAB712635C719F323B48DE20FBCAC459 * __this, RuntimeObject* ___source0, Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this);
		((  void (*) (Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E * WhereEnumerableIterator_1_Clone_m25B51E38CF1D5240F22296272E66B03CFCA0F542_gshared (WhereEnumerableIterator_1_tA04C2761DAB712635C719F323B48DE20FBCAC459 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * L_1 = (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)__this->get_predicate_4();
		WhereEnumerableIterator_1_tA04C2761DAB712635C719F323B48DE20FBCAC459 * L_2 = (WhereEnumerableIterator_1_tA04C2761DAB712635C719F323B48DE20FBCAC459 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tA04C2761DAB712635C719F323B48DE20FBCAC459 *, RuntimeObject*, Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mC671CF817563CB5F2C4DE522EE6813EE2202770F_gshared (WhereEnumerableIterator_1_tA04C2761DAB712635C719F323B48DE20FBCAC459 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this);
		((  void (*) (Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m140C5A7278FEB13ED039B8A03957D77DC961B65D_gshared (WhereEnumerableIterator_1_tA04C2761DAB712635C719F323B48DE20FBCAC459 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  L_6;
		L_6 = InterfaceFuncInvoker0< ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA )L_6;
		Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * L_7 = (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)__this->get_predicate_4();
		ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  L_8 = V_1;
		NullCheck((Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *, ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)L_7, (ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  L_10 = V_1;
		((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::Dispose() */, (Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m9C814C31F14BE743A603B0DB26658BDC731F8225_gshared (WhereEnumerableIterator_1_tA04C2761DAB712635C719F323B48DE20FBCAC459 * __this, Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * L_1 = (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)__this->get_predicate_4();
		Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * L_2 = ___predicate0;
		Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * L_3;
		L_3 = ((  Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * (*) (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *, Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)L_1, (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_tA04C2761DAB712635C719F323B48DE20FBCAC459 * L_4 = (WhereEnumerableIterator_1_tA04C2761DAB712635C719F323B48DE20FBCAC459 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tA04C2761DAB712635C719F323B48DE20FBCAC459 *, RuntimeObject*, Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m3EB9274A8CE9B71A41BA4B8E9E22D9735713DFA3_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereListIterator_1_Clone_mF7E182440FC39477FC20CA48E0FAB270FED512F4_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_2 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m11D0FD0206FC9B236608A1150FB26790BA09B2E5_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_11 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m1AD3C3728A42EA6188BB39667495E67F8A078501_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_4 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<UnityEngine.Ray>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mD9BFB77ECAAB11A30F366CD1292DB0C69CC1E112_gshared (WhereListIterator_1_t59BDE8EC71D10887E7CA957F025BBC225317DEF5 * __this, List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * ___source0, Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this);
		((  void (*) (Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<UnityEngine.Ray>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F * WhereListIterator_1_Clone_m1A214EEB40B074F83E2F856E97BC29246190252F_gshared (WhereListIterator_1_t59BDE8EC71D10887E7CA957F025BBC225317DEF5 * __this, const RuntimeMethod* method)
{
	{
		List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * L_0 = (List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B *)__this->get_source_3();
		Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * L_1 = (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)__this->get_predicate_4();
		WhereListIterator_1_t59BDE8EC71D10887E7CA957F025BBC225317DEF5 * L_2 = (WhereListIterator_1_t59BDE8EC71D10887E7CA957F025BBC225317DEF5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t59BDE8EC71D10887E7CA957F025BBC225317DEF5 *, List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B *, Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B *)L_0, (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<UnityEngine.Ray>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m778FD997261AAAD955E9AE5CE59C52C5982D20E3_gshared (WhereListIterator_1_t59BDE8EC71D10887E7CA957F025BBC225317DEF5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * L_3 = (List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B *)__this->get_source_3();
		NullCheck((List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B *)L_3);
		Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657  L_4;
		L_4 = ((  Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657  (*) (List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657 * L_5 = (Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657 *)__this->get_address_of_enumerator_5();
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_6;
		L_6 = Enumerator_get_Current_m9520F939F129F4E566B70E5DC91B22E9BEF5550B_inline((Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657 *)(Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 )L_6;
		Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * L_7 = (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)__this->get_predicate_4();
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_8 = V_1;
		NullCheck((Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)L_7, (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_10 = V_1;
		((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657 * L_11 = (Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m0BC3A69DE7C51840530C35316DBECE5DE2E39A79((Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657 *)(Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Ray>::Dispose() */, (Iterator_1_t4749C64072721BCF3A2200DB52C4CD281CD62F2F *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<UnityEngine.Ray>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m563DEB5FCD9F08C11428FBBBDC3B55B65437F6B3_gshared (WhereListIterator_1_t59BDE8EC71D10887E7CA957F025BBC225317DEF5 * __this, Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * L_0 = (List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B *)__this->get_source_3();
		Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * L_1 = (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)__this->get_predicate_4();
		Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * L_2 = ___predicate0;
		Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * L_3;
		L_3 = ((  Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC * (*) (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *, Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)L_1, (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t59BDE8EC71D10887E7CA957F025BBC225317DEF5 * L_4 = (WhereListIterator_1_t59BDE8EC71D10887E7CA957F025BBC225317DEF5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t59BDE8EC71D10887E7CA957F025BBC225317DEF5 *, List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B *, Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B *)L_0, (Func_2_t5B1D2029A13E6CA909EEFC25E8A0F4529B313AFC *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m9DEF7CB865E24816AB2FCDD39D8F2A1FFCD5CD45_gshared (WhereListIterator_1_t9DAE4704EF88FF8B6178F408E1323BD0706B0C61 * __this, List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 * ___source0, Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this);
		((  void (*) (Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E * WhereListIterator_1_Clone_m16F30E50AA05950F5ED34130BE5672F52B00CC6A_gshared (WhereListIterator_1_t9DAE4704EF88FF8B6178F408E1323BD0706B0C61 * __this, const RuntimeMethod* method)
{
	{
		List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 * L_0 = (List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 *)__this->get_source_3();
		Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * L_1 = (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)__this->get_predicate_4();
		WhereListIterator_1_t9DAE4704EF88FF8B6178F408E1323BD0706B0C61 * L_2 = (WhereListIterator_1_t9DAE4704EF88FF8B6178F408E1323BD0706B0C61 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t9DAE4704EF88FF8B6178F408E1323BD0706B0C61 *, List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 *, Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 *)L_0, (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m5825B3C5D59C392735214CC5ED5E0D4CACCE9254_gshared (WhereListIterator_1_t9DAE4704EF88FF8B6178F408E1323BD0706B0C61 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 * L_3 = (List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 *)__this->get_source_3();
		NullCheck((List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 *)L_3);
		Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162  L_4;
		L_4 = ((  Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162  (*) (List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162 * L_5 = (Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162 *)__this->get_address_of_enumerator_5();
		ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  L_6;
		L_6 = Enumerator_get_Current_m5B8DA151C23C9E8A3BC4841B3C5DADD7683C1E76_inline((Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162 *)(Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA )L_6;
		Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * L_7 = (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)__this->get_predicate_4();
		ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  L_8 = V_1;
		NullCheck((Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *, ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)L_7, (ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  L_10 = V_1;
		((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162 * L_11 = (Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m122786E299D5552F5CA945BCF827350FC4133F4C((Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162 *)(Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::Dispose() */, (Iterator_1_tB1F9F0C23747295466F9CA4933BED7C37099470E *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mDC009AD3D8A46D1DE52B64ACFF126BF5FAACEA9B_gshared (WhereListIterator_1_t9DAE4704EF88FF8B6178F408E1323BD0706B0C61 * __this, Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 * L_0 = (List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 *)__this->get_source_3();
		Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * L_1 = (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)__this->get_predicate_4();
		Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * L_2 = ___predicate0;
		Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * L_3;
		L_3 = ((  Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B * (*) (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *, Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)L_1, (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t9DAE4704EF88FF8B6178F408E1323BD0706B0C61 * L_4 = (WhereListIterator_1_t9DAE4704EF88FF8B6178F408E1323BD0706B0C61 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t9DAE4704EF88FF8B6178F408E1323BD0706B0C61 *, List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 *, Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t2AC842C353A6A3283D8F6AA8C0DBA97D2A90CF61 *)L_0, (Func_2_t99FFEAB107FBF45311053499F9F1F25C3423297B *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mD3B2F1D1804BFC3C5E9300E015C6DF3BE2A3E605_gshared (WhereSelectArrayIterator_2_t5539D946779EF937558CF6219C65CD812D45FA85 * __this, KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* ___source0, Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * ___predicate1, Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereSelectArrayIterator_2_Clone_mC0A055366C20E7D647E2C9378CE70E77FE782E10_gshared (WhereSelectArrayIterator_2_t5539D946779EF937558CF6219C65CD812D45FA85 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* L_0 = (KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271*)__this->get_source_3();
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_1 = (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)__this->get_predicate_4();
		Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * L_2 = (Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t5539D946779EF937558CF6219C65CD812D45FA85 * L_3 = (WhereSelectArrayIterator_2_t5539D946779EF937558CF6219C65CD812D45FA85 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t5539D946779EF937558CF6219C65CD812D45FA85 *, KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271*, Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *, Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271*)L_0, (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)L_1, (Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mB44260A87844AE258F057DA659E96DF603A6239A_gshared (WhereSelectArrayIterator_2_t5539D946779EF937558CF6219C65CD812D45FA85 * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* L_1 = (KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_4 = (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_6 = (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_7 = (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)__this->get_predicate_4();
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_8 = V_0;
		NullCheck((Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *, KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)L_7, (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * L_10 = (Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *)__this->get_selector_5();
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_11 = V_0;
		NullCheck((Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *)L_10);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_12;
		L_12 = ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *, KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *)L_10, (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* L_14 = (KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m7DC1B558737110BABAB5D48EB5D3203E480A44F3_gshared (WhereSelectArrayIterator_2_t5539D946779EF937558CF6219C65CD812D45FA85 * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_1 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mD8FFDC26A613208EC84959D599EC2F5D9F5F30AA_gshared (WhereSelectArrayIterator_2_t4386262809F5AE6FFA381A5D978E9F4617B525C7 * __this, KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* ___source0, Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * ___predicate1, Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_mD8D4F232A97DED3EC815DC67C00266ACB410099C_gshared (WhereSelectArrayIterator_2_t4386262809F5AE6FFA381A5D978E9F4617B525C7 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* L_0 = (KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271*)__this->get_source_3();
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_1 = (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)__this->get_predicate_4();
		Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * L_2 = (Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t4386262809F5AE6FFA381A5D978E9F4617B525C7 * L_3 = (WhereSelectArrayIterator_2_t4386262809F5AE6FFA381A5D978E9F4617B525C7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t4386262809F5AE6FFA381A5D978E9F4617B525C7 *, KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271*, Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *, Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271*)L_0, (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)L_1, (Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mA0D8A91D4DC16036FDC488CDDA5177A929F09C3D_gshared (WhereSelectArrayIterator_2_t4386262809F5AE6FFA381A5D978E9F4617B525C7 * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* L_1 = (KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_4 = (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_6 = (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_7 = (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)__this->get_predicate_4();
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_8 = V_0;
		NullCheck((Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *, KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)L_7, (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * L_10 = (Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *)__this->get_selector_5();
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_11 = V_0;
		NullCheck((Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *, KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *)L_10, (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271* L_14 = (KeyValuePair_2U5BU5D_t8B6E5EE3D4084902C21FA72A9A1B81BD59484271*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m381EF0DCEFB6AAFAAD9AFD5DABA1BC1315A46EB4_gshared (WhereSelectArrayIterator_2_t4386262809F5AE6FFA381A5D978E9F4617B525C7 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m968DE7A56DB3F34414E979A918696418ECE83B09_gshared (WhereSelectArrayIterator_2_t7DDC3990B4B37D26178F8BCA32E8CD98FE8CCF50 * __this, InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___source0, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate1, Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereSelectArrayIterator_2_Clone_mA4630B2920BDDB307AAF2F5EB848FD555761FAD3_gshared (WhereSelectArrayIterator_2_t7DDC3990B4B37D26178F8BCA32E8CD98FE8CCF50 * __this, const RuntimeMethod* method)
{
	{
		InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* L_0 = (InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648*)__this->get_source_3();
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_1 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * L_2 = (Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t7DDC3990B4B37D26178F8BCA32E8CD98FE8CCF50 * L_3 = (WhereSelectArrayIterator_2_t7DDC3990B4B37D26178F8BCA32E8CD98FE8CCF50 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t7DDC3990B4B37D26178F8BCA32E8CD98FE8CCF50 *, InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648*)L_0, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_1, (Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mD9C294BA6D57A3DCA13F61D1878B010DD3A48718_gshared (WhereSelectArrayIterator_2_t7DDC3990B4B37D26178F8BCA32E8CD98FE8CCF50 * __this, const RuntimeMethod* method)
{
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* L_1 = (InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_6 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_7 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_8 = V_0;
		NullCheck((Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_7, (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * L_10 = (Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *)__this->get_selector_5();
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_11 = V_0;
		NullCheck((Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *)L_10);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_12;
		L_12 = ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *)L_10, (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* L_14 = (InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m950F370CEFBAD4F4A84DDE31774119F85BF5026B_gshared (WhereSelectArrayIterator_2_t7DDC3990B4B37D26178F8BCA32E8CD98FE8CCF50 * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_1 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mEE993328AC5B268B3134DE2C3B39109197FF55A8_gshared (WhereSelectArrayIterator_2_tAC5C6F4CF39DEE23C0B336216F0F9A2C4620F62D * __this, InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___source0, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate1, Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m783B89F7CB9F3EC31716A400E3D185EEC264C6D1_gshared (WhereSelectArrayIterator_2_tAC5C6F4CF39DEE23C0B336216F0F9A2C4620F62D * __this, const RuntimeMethod* method)
{
	{
		InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* L_0 = (InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648*)__this->get_source_3();
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_1 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * L_2 = (Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tAC5C6F4CF39DEE23C0B336216F0F9A2C4620F62D * L_3 = (WhereSelectArrayIterator_2_tAC5C6F4CF39DEE23C0B336216F0F9A2C4620F62D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tAC5C6F4CF39DEE23C0B336216F0F9A2C4620F62D *, InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648*)L_0, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_1, (Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m0F5BABFE6E864FEAF06620DC1C954D7FFC149EC8_gshared (WhereSelectArrayIterator_2_tAC5C6F4CF39DEE23C0B336216F0F9A2C4620F62D * __this, const RuntimeMethod* method)
{
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* L_1 = (InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_6 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_7 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_8 = V_0;
		NullCheck((Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_7, (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * L_10 = (Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *)__this->get_selector_5();
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_11 = V_0;
		NullCheck((Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *)L_10, (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* L_14 = (InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mE028DD7417C2427C78F157D7D743E14373F7A6AD_gshared (WhereSelectArrayIterator_2_tAC5C6F4CF39DEE23C0B336216F0F9A2C4620F62D * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mC3D3008526A6ED0DFCB5DF5D1E2FCB9DD12B7859_gshared (WhereSelectArrayIterator_2_t7E67589EEF585BA0A567F7A446D7009E3268623D * __this, NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* ___source0, Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * ___predicate1, Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereSelectArrayIterator_2_Clone_mFA5F799E50156D9911F3BC5C2F8A6AF236A1E316_gshared (WhereSelectArrayIterator_2_t7E67589EEF585BA0A567F7A446D7009E3268623D * __this, const RuntimeMethod* method)
{
	{
		NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* L_0 = (NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49*)__this->get_source_3();
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_1 = (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)__this->get_predicate_4();
		Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * L_2 = (Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t7E67589EEF585BA0A567F7A446D7009E3268623D * L_3 = (WhereSelectArrayIterator_2_t7E67589EEF585BA0A567F7A446D7009E3268623D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t7E67589EEF585BA0A567F7A446D7009E3268623D *, NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49*, Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *, Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49*)L_0, (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)L_1, (Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m2ED1B4E3E66DB6D68CA49509C004EBEE911D7E9D_gshared (WhereSelectArrayIterator_2_t7E67589EEF585BA0A567F7A446D7009E3268623D * __this, const RuntimeMethod* method)
{
	NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* L_1 = (NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_6 = (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_7 = (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)__this->get_predicate_4();
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_8 = V_0;
		NullCheck((Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *, NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)L_7, (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * L_10 = (Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *)__this->get_selector_5();
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_11 = V_0;
		NullCheck((Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *)L_10);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_12;
		L_12 = ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *, NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *)L_10, (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* L_14 = (NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m1D15729BA769847E8EB056C26A92D2F006FF8B5B_gshared (WhereSelectArrayIterator_2_t7E67589EEF585BA0A567F7A446D7009E3268623D * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_1 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mE14EF92BC48D2F9C982A879F1960AC5AE9D2A295_gshared (WhereSelectArrayIterator_2_tB53CF3C9EFACAD07723008673A1D5F5BAD3FA221 * __this, NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* ___source0, Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * ___predicate1, Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_mA4EB7A39E413F5DE2CA0EA599459361E31157EF9_gshared (WhereSelectArrayIterator_2_tB53CF3C9EFACAD07723008673A1D5F5BAD3FA221 * __this, const RuntimeMethod* method)
{
	{
		NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* L_0 = (NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49*)__this->get_source_3();
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_1 = (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)__this->get_predicate_4();
		Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * L_2 = (Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tB53CF3C9EFACAD07723008673A1D5F5BAD3FA221 * L_3 = (WhereSelectArrayIterator_2_tB53CF3C9EFACAD07723008673A1D5F5BAD3FA221 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tB53CF3C9EFACAD07723008673A1D5F5BAD3FA221 *, NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49*, Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *, Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49*)L_0, (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)L_1, (Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mDD6DFCE0E792C64697526FC1CF05C724117C6934_gshared (WhereSelectArrayIterator_2_tB53CF3C9EFACAD07723008673A1D5F5BAD3FA221 * __this, const RuntimeMethod* method)
{
	NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* L_1 = (NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_6 = (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_7 = (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)__this->get_predicate_4();
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_8 = V_0;
		NullCheck((Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *, NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)L_7, (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * L_10 = (Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *)__this->get_selector_5();
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_11 = V_0;
		NullCheck((Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *, NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *)L_10, (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* L_14 = (NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m35FBC753A5332B2AED81AD84D12A7CD1EBA7580E_gshared (WhereSelectArrayIterator_2_tB53CF3C9EFACAD07723008673A1D5F5BAD3FA221 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m7D90DE1416E90A9960A38999A0BA71A8A93C51F3_gshared (WhereSelectArrayIterator_2_tFCC8C7207830D412428356B9263E571C665ED817 * __this, NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* ___source0, Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * ___predicate1, Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereSelectArrayIterator_2_Clone_m5839C6CA853D5241394B73D7BB20645F384440D0_gshared (WhereSelectArrayIterator_2_tFCC8C7207830D412428356B9263E571C665ED817 * __this, const RuntimeMethod* method)
{
	{
		NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* L_0 = (NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15*)__this->get_source_3();
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_1 = (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)__this->get_predicate_4();
		Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * L_2 = (Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tFCC8C7207830D412428356B9263E571C665ED817 * L_3 = (WhereSelectArrayIterator_2_tFCC8C7207830D412428356B9263E571C665ED817 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tFCC8C7207830D412428356B9263E571C665ED817 *, NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15*, Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *, Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15*)L_0, (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)L_1, (Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m92AC925D8E096FE4F8B886CCA0FE6BB4764300EB_gshared (WhereSelectArrayIterator_2_tFCC8C7207830D412428356B9263E571C665ED817 * __this, const RuntimeMethod* method)
{
	NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* L_1 = (NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_6 = (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_7 = (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)__this->get_predicate_4();
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_8 = V_0;
		NullCheck((Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *, NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)L_7, (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * L_10 = (Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *)__this->get_selector_5();
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_11 = V_0;
		NullCheck((Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *)L_10);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_12;
		L_12 = ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *, NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *)L_10, (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* L_14 = (NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m72CDEC2023E0189AACEFCA8276654BE264A09CAD_gshared (WhereSelectArrayIterator_2_tFCC8C7207830D412428356B9263E571C665ED817 * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_1 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m3FBA975A98E625DDB945482D5E6DE38DFC37FADD_gshared (WhereSelectArrayIterator_2_tD2E9D48219C66BF4AB3A4643A7CD24773F8ADB66 * __this, NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* ___source0, Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * ___predicate1, Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_mF7C873DB6D0A9439EDDB344D9A7955DB74D59BCE_gshared (WhereSelectArrayIterator_2_tD2E9D48219C66BF4AB3A4643A7CD24773F8ADB66 * __this, const RuntimeMethod* method)
{
	{
		NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* L_0 = (NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15*)__this->get_source_3();
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_1 = (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)__this->get_predicate_4();
		Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * L_2 = (Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tD2E9D48219C66BF4AB3A4643A7CD24773F8ADB66 * L_3 = (WhereSelectArrayIterator_2_tD2E9D48219C66BF4AB3A4643A7CD24773F8ADB66 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tD2E9D48219C66BF4AB3A4643A7CD24773F8ADB66 *, NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15*, Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *, Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15*)L_0, (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)L_1, (Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mC9B27626C16A84E42F49D98EB8B0084B619AE09D_gshared (WhereSelectArrayIterator_2_tD2E9D48219C66BF4AB3A4643A7CD24773F8ADB66 * __this, const RuntimeMethod* method)
{
	NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* L_1 = (NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_6 = (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_7 = (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)__this->get_predicate_4();
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_8 = V_0;
		NullCheck((Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *, NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)L_7, (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * L_10 = (Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *)__this->get_selector_5();
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_11 = V_0;
		NullCheck((Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *, NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *)L_10, (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* L_14 = (NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mE446AE34213FB87791014781A65F232C7D193066_gshared (WhereSelectArrayIterator_2_tD2E9D48219C66BF4AB3A4643A7CD24773F8ADB66 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m94945CF78914B5E0887E9A43953026CFFFBD5338_gshared (WhereSelectArrayIterator_2_t45695FAD12AECDCF67704BAAE379C8FDE970CB15 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereSelectArrayIterator_2_Clone_m1C37DBF27D2682E63F31B0617DBF34A0A53F4116_gshared (WhereSelectArrayIterator_2_t45695FAD12AECDCF67704BAAE379C8FDE970CB15 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * L_2 = (Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t45695FAD12AECDCF67704BAAE379C8FDE970CB15 * L_3 = (WhereSelectArrayIterator_2_t45695FAD12AECDCF67704BAAE379C8FDE970CB15 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t45695FAD12AECDCF67704BAAE379C8FDE970CB15 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m07B03DC5928E39814D162BCC13C64E1910AD7EFC_gshared (WhereSelectArrayIterator_2_t45695FAD12AECDCF67704BAAE379C8FDE970CB15 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * L_10 = (Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *)L_10);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_12;
		L_12 = ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m0419F35B66B54FB7C3C7580CD9C309160AF0F7CF_gshared (WhereSelectArrayIterator_2_t45695FAD12AECDCF67704BAAE379C8FDE970CB15 * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_1 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mCB64A76E8C03C791C57D44E38D025D1C6EC7B880_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m4ACA936AD86CEAB027D82949C74DEDD882A800D3_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * L_3 = (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mCF08A119CF0CC000264B5B6BA5EC4B40CC9640CC_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_10 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m21B504E9811B348A8694F7C71E07ABCCDE69807B_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m2DDE12C78B7C47E50338CB25849E4FA171EBD6CF_gshared (WhereSelectArrayIterator_2_t59039EC82706A391E9A41B54EDEFFB4941BC3A04 * __this, JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* ___source0, Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * ___predicate1, Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereSelectArrayIterator_2_Clone_m49F6852D8F65900281A6915A7E9A4267856F38D7_gshared (WhereSelectArrayIterator_2_t59039EC82706A391E9A41B54EDEFFB4941BC3A04 * __this, const RuntimeMethod* method)
{
	{
		JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* L_0 = (JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F*)__this->get_source_3();
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_1 = (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)__this->get_predicate_4();
		Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * L_2 = (Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t59039EC82706A391E9A41B54EDEFFB4941BC3A04 * L_3 = (WhereSelectArrayIterator_2_t59039EC82706A391E9A41B54EDEFFB4941BC3A04 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t59039EC82706A391E9A41B54EDEFFB4941BC3A04 *, JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F*, Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *, Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F*)L_0, (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)L_1, (Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m51F978B0ABD6E85E68A981F46332D908970BED45_gshared (WhereSelectArrayIterator_2_t59039EC82706A391E9A41B54EDEFFB4941BC3A04 * __this, const RuntimeMethod* method)
{
	JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* L_1 = (JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_6 = (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_7 = (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)__this->get_predicate_4();
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_8 = V_0;
		NullCheck((Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *, JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)L_7, (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * L_10 = (Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *)__this->get_selector_5();
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_11 = V_0;
		NullCheck((Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *)L_10);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_12;
		L_12 = ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *, JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *)L_10, (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* L_14 = (JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m513C84B1992CC761589A95428D40FE7084337AFB_gshared (WhereSelectArrayIterator_2_t59039EC82706A391E9A41B54EDEFFB4941BC3A04 * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_1 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m7845979189A8722E58C0708E75A0671DE0CA3127_gshared (WhereSelectArrayIterator_2_t0216067823B0CE45C633D6CFBA936C6244247667 * __this, JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* ___source0, Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * ___predicate1, Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m9A1BC306F698287C1E93B7DC40E2E5442C2C6F52_gshared (WhereSelectArrayIterator_2_t0216067823B0CE45C633D6CFBA936C6244247667 * __this, const RuntimeMethod* method)
{
	{
		JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* L_0 = (JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F*)__this->get_source_3();
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_1 = (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)__this->get_predicate_4();
		Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * L_2 = (Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t0216067823B0CE45C633D6CFBA936C6244247667 * L_3 = (WhereSelectArrayIterator_2_t0216067823B0CE45C633D6CFBA936C6244247667 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t0216067823B0CE45C633D6CFBA936C6244247667 *, JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F*, Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *, Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F*)L_0, (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)L_1, (Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mEA6D451B88A0B12E0C15E74670A427F5619706A6_gshared (WhereSelectArrayIterator_2_t0216067823B0CE45C633D6CFBA936C6244247667 * __this, const RuntimeMethod* method)
{
	JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* L_1 = (JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_6 = (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_7 = (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)__this->get_predicate_4();
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_8 = V_0;
		NullCheck((Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *, JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)L_7, (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * L_10 = (Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *)__this->get_selector_5();
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_11 = V_0;
		NullCheck((Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *, JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *)L_10, (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F* L_14 = (JsonValueU5BU5D_tFBBCA6271A4E5AA4988407EE0CCD4473FE6A4D3F*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m2D58E9DE847EC621C55C2D4E52A8BE72A802F915_gshared (WhereSelectArrayIterator_2_t0216067823B0CE45C633D6CFBA936C6244247667 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mD6A434EFD35D7578FB7844BB711320AFB533D7D6_gshared (WhereSelectEnumerableIterator_2_tE261A66F9B271521B190612F18B97587DF41B28E * __this, RuntimeObject* ___source0, Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * ___predicate1, Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereSelectEnumerableIterator_2_Clone_mB96AC505729C00569C441C0F6EDDB42C1DDB17C4_gshared (WhereSelectEnumerableIterator_2_tE261A66F9B271521B190612F18B97587DF41B28E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_1 = (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)__this->get_predicate_4();
		Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * L_2 = (Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tE261A66F9B271521B190612F18B97587DF41B28E * L_3 = (WhereSelectEnumerableIterator_2_tE261A66F9B271521B190612F18B97587DF41B28E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tE261A66F9B271521B190612F18B97587DF41B28E *, RuntimeObject*, Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *, Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)L_1, (Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m0A8BA6028676E467D9D887DEE2BB8DE437742A6D_gshared (WhereSelectEnumerableIterator_2_tE261A66F9B271521B190612F18B97587DF41B28E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m62D0D516E2AAFD64BFAFCB0009E9A8A63B95D3FA_gshared (WhereSelectEnumerableIterator_2_tE261A66F9B271521B190612F18B97587DF41B28E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_6;
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_7 = (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_8 = (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)__this->get_predicate_4();
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_9 = V_1;
		NullCheck((Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *, KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)L_8, (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * L_11 = (Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *)__this->get_selector_5();
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_12 = V_1;
		NullCheck((Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *)L_11);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_13;
		L_13 = ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *, KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *)L_11, (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m435C5845B6C7DAC1E319DEFCBB5604DA7D8E80C3_gshared (WhereSelectEnumerableIterator_2_tE261A66F9B271521B190612F18B97587DF41B28E * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_1 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m07040BA1DFA37BBB4BE6117F156AE7A7649AED46_gshared (WhereSelectEnumerableIterator_2_tA0CF85C70AEC3811FE21CBBE2003D784D884A29C * __this, RuntimeObject* ___source0, Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * ___predicate1, Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_m14C50BFD246B5F4AE4769DB56BD872A08B99F9E0_gshared (WhereSelectEnumerableIterator_2_tA0CF85C70AEC3811FE21CBBE2003D784D884A29C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_1 = (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)__this->get_predicate_4();
		Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * L_2 = (Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tA0CF85C70AEC3811FE21CBBE2003D784D884A29C * L_3 = (WhereSelectEnumerableIterator_2_tA0CF85C70AEC3811FE21CBBE2003D784D884A29C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tA0CF85C70AEC3811FE21CBBE2003D784D884A29C *, RuntimeObject*, Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *, Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)L_1, (Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mEB26364DBB9C1418F7FDDF2E5368B629A3D4890D_gshared (WhereSelectEnumerableIterator_2_tA0CF85C70AEC3811FE21CBBE2003D784D884A29C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m905FEE4D9B706AB27C4D24329307EBF987E54AF5_gshared (WhereSelectEnumerableIterator_2_tA0CF85C70AEC3811FE21CBBE2003D784D884A29C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_6;
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_7 = (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_8 = (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)__this->get_predicate_4();
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_9 = V_1;
		NullCheck((Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *, KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)L_8, (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * L_11 = (Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *)__this->get_selector_5();
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_12 = V_1;
		NullCheck((Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *, KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *)L_11, (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mEC0840A6F48A6CE25EB403B60B4725CB0B040C8F_gshared (WhereSelectEnumerableIterator_2_tA0CF85C70AEC3811FE21CBBE2003D784D884A29C * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m38F6B5EE537946B26AA9C99FA2A97750F676FE37_gshared (WhereSelectEnumerableIterator_2_tF8AD9D99A7745F93717E83397CF3C6D74754260F * __this, RuntimeObject* ___source0, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate1, Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereSelectEnumerableIterator_2_Clone_m0713747393771DF6321FB7D259C53F9156EDDD0D_gshared (WhereSelectEnumerableIterator_2_tF8AD9D99A7745F93717E83397CF3C6D74754260F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_1 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * L_2 = (Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tF8AD9D99A7745F93717E83397CF3C6D74754260F * L_3 = (WhereSelectEnumerableIterator_2_tF8AD9D99A7745F93717E83397CF3C6D74754260F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tF8AD9D99A7745F93717E83397CF3C6D74754260F *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_1, (Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mC1FD0AB9A7994D8333EA0B133F42F99F609B4D93_gshared (WhereSelectEnumerableIterator_2_tF8AD9D99A7745F93717E83397CF3C6D74754260F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m0AB330D560D5B7205ABDBDE4207ABF68314336E7_gshared (WhereSelectEnumerableIterator_2_tF8AD9D99A7745F93717E83397CF3C6D74754260F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.InternedString>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_6;
		L_6 = InterfaceFuncInvoker0< InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.InternedString>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_6;
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_7 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_8 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_9 = V_1;
		NullCheck((Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_8, (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * L_11 = (Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *)__this->get_selector_5();
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_12 = V_1;
		NullCheck((Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *)L_11);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_13;
		L_13 = ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *)L_11, (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m164F06BFF78CEE533EA48502209D1E7964BBB87C_gshared (WhereSelectEnumerableIterator_2_tF8AD9D99A7745F93717E83397CF3C6D74754260F * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_1 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m15A5AB794782019118603911139B109005E54AB1_gshared (WhereSelectEnumerableIterator_2_t666EBC097CF6FF1EDAACDA447F16002549E8C7DF * __this, RuntimeObject* ___source0, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate1, Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mFC0EDB86BF3DB12101A366DB8CC049A0113221BA_gshared (WhereSelectEnumerableIterator_2_t666EBC097CF6FF1EDAACDA447F16002549E8C7DF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_1 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * L_2 = (Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t666EBC097CF6FF1EDAACDA447F16002549E8C7DF * L_3 = (WhereSelectEnumerableIterator_2_t666EBC097CF6FF1EDAACDA447F16002549E8C7DF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t666EBC097CF6FF1EDAACDA447F16002549E8C7DF *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_1, (Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m87400A91A51C1AEC65A5E614912EB3918C69AAC7_gshared (WhereSelectEnumerableIterator_2_t666EBC097CF6FF1EDAACDA447F16002549E8C7DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mF51DA5E6E4EEFC2787947742FBCA6684D15437D4_gshared (WhereSelectEnumerableIterator_2_t666EBC097CF6FF1EDAACDA447F16002549E8C7DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.InternedString>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_6;
		L_6 = InterfaceFuncInvoker0< InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.InternedString>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_6;
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_7 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_8 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_9 = V_1;
		NullCheck((Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_8, (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * L_11 = (Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *)__this->get_selector_5();
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_12 = V_1;
		NullCheck((Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *)L_11, (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mB4910E8DCDA2D19BF482EFD36F67208BF08B2BD0_gshared (WhereSelectEnumerableIterator_2_t666EBC097CF6FF1EDAACDA447F16002549E8C7DF * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mFE770C4C25DDE5CEB938A0F27162C348F808F3A9_gshared (WhereSelectEnumerableIterator_2_tE6266DEEB8A66F18BC1B01812D286D823CA64FB5 * __this, RuntimeObject* ___source0, Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * ___predicate1, Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereSelectEnumerableIterator_2_Clone_mF5512E8959279FBF7A132DF3986E612B87550542_gshared (WhereSelectEnumerableIterator_2_tE6266DEEB8A66F18BC1B01812D286D823CA64FB5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_1 = (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)__this->get_predicate_4();
		Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * L_2 = (Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tE6266DEEB8A66F18BC1B01812D286D823CA64FB5 * L_3 = (WhereSelectEnumerableIterator_2_tE6266DEEB8A66F18BC1B01812D286D823CA64FB5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tE6266DEEB8A66F18BC1B01812D286D823CA64FB5 *, RuntimeObject*, Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *, Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)L_1, (Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mA3B6CD62D8ED85F0DB9FE337E5B3BB2F2D736806_gshared (WhereSelectEnumerableIterator_2_tE6266DEEB8A66F18BC1B01812D286D823CA64FB5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mF8B7EBB1D45DD23A841CED7CCA6EE6E0FE6B8525_gshared (WhereSelectEnumerableIterator_2_tE6266DEEB8A66F18BC1B01812D286D823CA64FB5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.NameAndParameters>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_6;
		L_6 = InterfaceFuncInvoker0< NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.NameAndParameters>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_6;
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_7 = (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_8 = (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)__this->get_predicate_4();
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_9 = V_1;
		NullCheck((Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *, NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)L_8, (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * L_11 = (Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *)__this->get_selector_5();
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_12 = V_1;
		NullCheck((Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *)L_11);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_13;
		L_13 = ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *, NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *)L_11, (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m6CECA8FA5AA3542CDC4C9BF5896418C458DE7F1A_gshared (WhereSelectEnumerableIterator_2_tE6266DEEB8A66F18BC1B01812D286D823CA64FB5 * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_1 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m3736091959A831D42066B051BBC66D4E948D65F2_gshared (WhereSelectEnumerableIterator_2_tF7F8172829C9766CD73CF688986B2D36C94C6BD4 * __this, RuntimeObject* ___source0, Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * ___predicate1, Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_m739E2F91586193741769185A1F916B3DF091EA96_gshared (WhereSelectEnumerableIterator_2_tF7F8172829C9766CD73CF688986B2D36C94C6BD4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_1 = (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)__this->get_predicate_4();
		Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * L_2 = (Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tF7F8172829C9766CD73CF688986B2D36C94C6BD4 * L_3 = (WhereSelectEnumerableIterator_2_tF7F8172829C9766CD73CF688986B2D36C94C6BD4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tF7F8172829C9766CD73CF688986B2D36C94C6BD4 *, RuntimeObject*, Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *, Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)L_1, (Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m851E83F443E0893B477A4977DD6044A019DFA446_gshared (WhereSelectEnumerableIterator_2_tF7F8172829C9766CD73CF688986B2D36C94C6BD4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mE7F07AC1EBB3458742869BEECFDB49825503F6FD_gshared (WhereSelectEnumerableIterator_2_tF7F8172829C9766CD73CF688986B2D36C94C6BD4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.NameAndParameters>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_6;
		L_6 = InterfaceFuncInvoker0< NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.NameAndParameters>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_6;
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_7 = (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_8 = (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)__this->get_predicate_4();
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_9 = V_1;
		NullCheck((Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *, NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)L_8, (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * L_11 = (Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *)__this->get_selector_5();
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_12 = V_1;
		NullCheck((Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *, NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *)L_11, (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mB6CF733C04C0DBA6296545D15C712F68F272132E_gshared (WhereSelectEnumerableIterator_2_tF7F8172829C9766CD73CF688986B2D36C94C6BD4 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mC7822EAC4A6F559B2B8F55B1A5D25068922BB6C8_gshared (WhereSelectEnumerableIterator_2_tE4C9445258E1E4892D4A54064D04A17716B2CCA5 * __this, RuntimeObject* ___source0, Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * ___predicate1, Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereSelectEnumerableIterator_2_Clone_m7EAB2C1341D4464F85CA27180647DF70F57DC88B_gshared (WhereSelectEnumerableIterator_2_tE4C9445258E1E4892D4A54064D04A17716B2CCA5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_1 = (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)__this->get_predicate_4();
		Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * L_2 = (Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tE4C9445258E1E4892D4A54064D04A17716B2CCA5 * L_3 = (WhereSelectEnumerableIterator_2_tE4C9445258E1E4892D4A54064D04A17716B2CCA5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tE4C9445258E1E4892D4A54064D04A17716B2CCA5 *, RuntimeObject*, Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *, Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)L_1, (Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m360ADF5D19705A29BC8C779AE92B8A5DFE7D6D63_gshared (WhereSelectEnumerableIterator_2_tE4C9445258E1E4892D4A54064D04A17716B2CCA5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m72187DDBFC03DBE2D977136879492FABB165168F_gshared (WhereSelectEnumerableIterator_2_tE4C9445258E1E4892D4A54064D04A17716B2CCA5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.NamedValue>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_6;
		L_6 = InterfaceFuncInvoker0< NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.NamedValue>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_6;
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_7 = (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_8 = (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)__this->get_predicate_4();
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_9 = V_1;
		NullCheck((Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *, NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)L_8, (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * L_11 = (Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *)__this->get_selector_5();
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_12 = V_1;
		NullCheck((Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *)L_11);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_13;
		L_13 = ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *, NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *)L_11, (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m66C5C597751163620988841A2923ED1246DB6628_gshared (WhereSelectEnumerableIterator_2_tE4C9445258E1E4892D4A54064D04A17716B2CCA5 * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_1 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m202E1AB1F50821AD4A667CB36ECCD528942E5002_gshared (WhereSelectEnumerableIterator_2_t800B9FFDEAD10DF48A561ACEBF74130DE27EC8C3 * __this, RuntimeObject* ___source0, Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * ___predicate1, Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_m1D716707F2FF0DFFB5E99FCC35FF8DBFC9F099B3_gshared (WhereSelectEnumerableIterator_2_t800B9FFDEAD10DF48A561ACEBF74130DE27EC8C3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_1 = (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)__this->get_predicate_4();
		Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * L_2 = (Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t800B9FFDEAD10DF48A561ACEBF74130DE27EC8C3 * L_3 = (WhereSelectEnumerableIterator_2_t800B9FFDEAD10DF48A561ACEBF74130DE27EC8C3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t800B9FFDEAD10DF48A561ACEBF74130DE27EC8C3 *, RuntimeObject*, Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *, Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)L_1, (Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m607F8FD4E98C6BF3000C8D1E600A8BF1C28CE0D4_gshared (WhereSelectEnumerableIterator_2_t800B9FFDEAD10DF48A561ACEBF74130DE27EC8C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mC254AF7AE2D43B3949FEC0602F818A6651EA4076_gshared (WhereSelectEnumerableIterator_2_t800B9FFDEAD10DF48A561ACEBF74130DE27EC8C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.NamedValue>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_6;
		L_6 = InterfaceFuncInvoker0< NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.NamedValue>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_6;
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_7 = (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_8 = (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)__this->get_predicate_4();
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_9 = V_1;
		NullCheck((Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *, NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)L_8, (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * L_11 = (Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *)__this->get_selector_5();
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_12 = V_1;
		NullCheck((Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *, NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *)L_11, (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mD72EFD468D8C5F51727CDF551CFB574BFC77A99C_gshared (WhereSelectEnumerableIterator_2_t800B9FFDEAD10DF48A561ACEBF74130DE27EC8C3 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m37271D4AFAE464C342669277991F462990F1FDCE_gshared (WhereSelectEnumerableIterator_2_tD29CCA55EC8E7C6740D5B27A62DB297B97D1DA3B * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereSelectEnumerableIterator_2_Clone_mE1197CBFC565D08DBAB56C58992E6150050AE9B8_gshared (WhereSelectEnumerableIterator_2_tD29CCA55EC8E7C6740D5B27A62DB297B97D1DA3B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * L_2 = (Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tD29CCA55EC8E7C6740D5B27A62DB297B97D1DA3B * L_3 = (WhereSelectEnumerableIterator_2_tD29CCA55EC8E7C6740D5B27A62DB297B97D1DA3B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tD29CCA55EC8E7C6740D5B27A62DB297B97D1DA3B *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m73AC3CD9BE526C5762415757E11766770B4D3E0B_gshared (WhereSelectEnumerableIterator_2_tD29CCA55EC8E7C6740D5B27A62DB297B97D1DA3B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m604D127027CC23783CA80761B5DC9DC900C8DA7C_gshared (WhereSelectEnumerableIterator_2_tD29CCA55EC8E7C6740D5B27A62DB297B97D1DA3B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * L_11 = (Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *)L_11);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_13;
		L_13 = ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mDD282C1F14050F7CF6DCF0DF1AC812AA5F936FAB_gshared (WhereSelectEnumerableIterator_2_tD29CCA55EC8E7C6740D5B27A62DB297B97D1DA3B * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_1 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m6DFD3E949A8FA5121F520D501B78C17E84EBDFAC_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mD5F17A02281E6D1529D117CFF2E0F8C347D1B13F_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * L_3 = (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mAA70577DEF67CEC98FE677984AE2175B7D4E4D00_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m95AEE737A22EFFFE6557F448BF5AFCC6241D0BD7_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m72A38A8170E8B837F5C090642BE08E3845A8EB37_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m6868C02D57AD524ECFE30B0EFD35A756C05004F2_gshared (WhereSelectEnumerableIterator_2_t5A2A98A870176D507687BD52CB1F9AC687F62C64 * __this, RuntimeObject* ___source0, Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * ___predicate1, Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereSelectEnumerableIterator_2_Clone_mE61328224C9DF4E4751FFC32FC137C911ED40B84_gshared (WhereSelectEnumerableIterator_2_t5A2A98A870176D507687BD52CB1F9AC687F62C64 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_1 = (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)__this->get_predicate_4();
		Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * L_2 = (Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t5A2A98A870176D507687BD52CB1F9AC687F62C64 * L_3 = (WhereSelectEnumerableIterator_2_t5A2A98A870176D507687BD52CB1F9AC687F62C64 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t5A2A98A870176D507687BD52CB1F9AC687F62C64 *, RuntimeObject*, Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *, Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)L_1, (Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mBA1A533DCDFE9C8285BED18AF6600A00D7BA9A55_gshared (WhereSelectEnumerableIterator_2_t5A2A98A870176D507687BD52CB1F9AC687F62C64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m74026D41AE7F8A417296E09B40864A862A4E1E64_gshared (WhereSelectEnumerableIterator_2_t5A2A98A870176D507687BD52CB1F9AC687F62C64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_6;
		L_6 = InterfaceFuncInvoker0< JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_6;
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_7 = (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_8 = (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)__this->get_predicate_4();
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_9 = V_1;
		NullCheck((Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *, JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)L_8, (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * L_11 = (Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *)__this->get_selector_5();
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_12 = V_1;
		NullCheck((Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *)L_11);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_13;
		L_13 = ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *, JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *)L_11, (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m3A5FBA0CCDFCF6B850D1B3F755E7102BF86BE98F_gshared (WhereSelectEnumerableIterator_2_t5A2A98A870176D507687BD52CB1F9AC687F62C64 * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_1 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mA4411ECA3AF9261C3836B33E956C93585A9A1D18_gshared (WhereSelectEnumerableIterator_2_t76880FCA80618F4E28161D038FC1AD5F089F1919 * __this, RuntimeObject* ___source0, Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * ___predicate1, Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mAA2BAEBAFE2384EA75D3F1034D85ED245E461017_gshared (WhereSelectEnumerableIterator_2_t76880FCA80618F4E28161D038FC1AD5F089F1919 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_1 = (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)__this->get_predicate_4();
		Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * L_2 = (Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t76880FCA80618F4E28161D038FC1AD5F089F1919 * L_3 = (WhereSelectEnumerableIterator_2_t76880FCA80618F4E28161D038FC1AD5F089F1919 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t76880FCA80618F4E28161D038FC1AD5F089F1919 *, RuntimeObject*, Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *, Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)L_1, (Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mDEA51273929E4806B8D24B55A8B9BC6E15D29054_gshared (WhereSelectEnumerableIterator_2_t76880FCA80618F4E28161D038FC1AD5F089F1919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m5666543D5A50BB4AF39F9002918D3FA1A1A61ECD_gshared (WhereSelectEnumerableIterator_2_t76880FCA80618F4E28161D038FC1AD5F089F1919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_6;
		L_6 = InterfaceFuncInvoker0< JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_6;
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_7 = (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_8 = (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)__this->get_predicate_4();
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_9 = V_1;
		NullCheck((Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *, JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)L_8, (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * L_11 = (Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *)__this->get_selector_5();
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_12 = V_1;
		NullCheck((Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *, JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *)L_11, (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m6B11949A7F0F8061F8A1B41159A1228B74D9D44C_gshared (WhereSelectEnumerableIterator_2_t76880FCA80618F4E28161D038FC1AD5F089F1919 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mB6371AD566B40F9AFEF70E01ACB3CE7EF2ECFE8F_gshared (WhereSelectListIterator_2_tD1BA4FC724363474EC7C0A74DEC0D43F7D14819D * __this, List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F * ___source0, Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * ___predicate1, Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereSelectListIterator_2_Clone_m2B3A3D916C2001CBDE9D70FC720AF06E4A294CA8_gshared (WhereSelectListIterator_2_tD1BA4FC724363474EC7C0A74DEC0D43F7D14819D * __this, const RuntimeMethod* method)
{
	{
		List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F * L_0 = (List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F *)__this->get_source_3();
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_1 = (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)__this->get_predicate_4();
		Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * L_2 = (Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *)__this->get_selector_5();
		WhereSelectListIterator_2_tD1BA4FC724363474EC7C0A74DEC0D43F7D14819D * L_3 = (WhereSelectListIterator_2_tD1BA4FC724363474EC7C0A74DEC0D43F7D14819D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tD1BA4FC724363474EC7C0A74DEC0D43F7D14819D *, List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F *, Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *, Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F *)L_0, (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)L_1, (Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE1842D85E122FCE20447642D4566E6769B876156_gshared (WhereSelectListIterator_2_tD1BA4FC724363474EC7C0A74DEC0D43F7D14819D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F * L_3 = (List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F *)__this->get_source_3();
		NullCheck((List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F *)L_3);
		Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109  L_4;
		L_4 = ((  Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109  (*) (List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 * L_5 = (Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_6;
		L_6 = Enumerator_get_Current_m24D5769F71109D5A58E9CE2ADBA2899166664470_inline((Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 *)(Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_6;
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_7 = (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_8 = (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)__this->get_predicate_4();
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_9 = V_1;
		NullCheck((Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *, KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)L_8, (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C * L_11 = (Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *)__this->get_selector_5();
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_12 = V_1;
		NullCheck((Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *)L_11);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_13;
		L_13 = ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *, KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t1A47156B9ABE46DDBA77CF9C67EB0BB43A04384C *)L_11, (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 * L_14 = (Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mD663716FAC9D47B113EEBF5CF7E97BC14B2D718C((Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 *)(Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m5BA78F349D69BCF99ED688556221A044636B8FA7_gshared (WhereSelectListIterator_2_tD1BA4FC724363474EC7C0A74DEC0D43F7D14819D * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_1 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mFC1DA763D9BBC9400DE38A55AF8D9453BA520CF5_gshared (WhereSelectListIterator_2_tADE7203722367A98D04CEC0987FF549BC22E9AE6 * __this, List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F * ___source0, Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * ___predicate1, Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_mAFC67C9A8670ABFD337D7DE3F895475F7D550428_gshared (WhereSelectListIterator_2_tADE7203722367A98D04CEC0987FF549BC22E9AE6 * __this, const RuntimeMethod* method)
{
	{
		List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F * L_0 = (List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F *)__this->get_source_3();
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_1 = (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)__this->get_predicate_4();
		Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * L_2 = (Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *)__this->get_selector_5();
		WhereSelectListIterator_2_tADE7203722367A98D04CEC0987FF549BC22E9AE6 * L_3 = (WhereSelectListIterator_2_tADE7203722367A98D04CEC0987FF549BC22E9AE6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tADE7203722367A98D04CEC0987FF549BC22E9AE6 *, List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F *, Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *, Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F *)L_0, (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)L_1, (Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m851B588D355A2291DACE800460EEC13280D8EEFD_gshared (WhereSelectListIterator_2_tADE7203722367A98D04CEC0987FF549BC22E9AE6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F * L_3 = (List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F *)__this->get_source_3();
		NullCheck((List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F *)L_3);
		Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109  L_4;
		L_4 = ((  Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109  (*) (List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tDED41EE27681C7E01654CA39A5352221DED2F48F *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 * L_5 = (Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_6;
		L_6 = Enumerator_get_Current_m24D5769F71109D5A58E9CE2ADBA2899166664470_inline((Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 *)(Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_6;
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_7 = (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF * L_8 = (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)__this->get_predicate_4();
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_9 = V_1;
		NullCheck((Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *, KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tECC854BCB1762B85353D9A4D3F5A8F373BC8B5FF *)L_8, (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 * L_11 = (Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *)__this->get_selector_5();
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_12 = V_1;
		NullCheck((Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *, KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t16433ADA61A5BC2C890A048A3B7913B49BBD7D35 *)L_11, (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 * L_14 = (Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mD663716FAC9D47B113EEBF5CF7E97BC14B2D718C((Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 *)(Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA91782E1E0D89FF895EBCF4F67A1B35E967CE4F8_gshared (WhereSelectListIterator_2_tADE7203722367A98D04CEC0987FF549BC22E9AE6 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m18EA0A15100D0338CFA87E64700FB13602019FFC_gshared (WhereSelectListIterator_2_t92C51D1FE38925DAC325C4384E335B81A879F9FA * __this, List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF * ___source0, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate1, Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereSelectListIterator_2_Clone_m12936A0BF445DCF9788FD3081244CE44648A3536_gshared (WhereSelectListIterator_2_t92C51D1FE38925DAC325C4384E335B81A879F9FA * __this, const RuntimeMethod* method)
{
	{
		List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF * L_0 = (List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF *)__this->get_source_3();
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_1 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * L_2 = (Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *)__this->get_selector_5();
		WhereSelectListIterator_2_t92C51D1FE38925DAC325C4384E335B81A879F9FA * L_3 = (WhereSelectListIterator_2_t92C51D1FE38925DAC325C4384E335B81A879F9FA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t92C51D1FE38925DAC325C4384E335B81A879F9FA *, List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF *, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF *)L_0, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_1, (Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m182737A26D8DEFBE409838D6CC04808791EDAB8A_gshared (WhereSelectListIterator_2_t92C51D1FE38925DAC325C4384E335B81A879F9FA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF * L_3 = (List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF *)__this->get_source_3();
		NullCheck((List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF *)L_3);
		Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11  L_4;
		L_4 = ((  Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11  (*) (List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 * L_5 = (Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 *)__this->get_address_of_enumerator_6();
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_6;
		L_6 = Enumerator_get_Current_m986D0D109661BAD2B7202C22E48E69D6FE47864C_inline((Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 *)(Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_6;
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_7 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_8 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_9 = V_1;
		NullCheck((Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_8, (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 * L_11 = (Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *)__this->get_selector_5();
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_12 = V_1;
		NullCheck((Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *)L_11);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_13;
		L_13 = ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tE580C290F5B0D2ADD8C72E89BA34B77170F13D25 *)L_11, (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 * L_14 = (Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mC056ABE04AAC10E6D4360F36BC71DAE877580AC1((Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 *)(Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mBECE5EF78AED98DF0F627AD82772A61242ACB97C_gshared (WhereSelectListIterator_2_t92C51D1FE38925DAC325C4384E335B81A879F9FA * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_1 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m4BF1C3E9C220E5A29F49195E9424445EC2505ACE_gshared (WhereSelectListIterator_2_t4DBF7D016A01FED927964A925069CF01F8D63DC6 * __this, List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF * ___source0, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate1, Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_mAA655839CC839696A743A13ABD6F29F28B983644_gshared (WhereSelectListIterator_2_t4DBF7D016A01FED927964A925069CF01F8D63DC6 * __this, const RuntimeMethod* method)
{
	{
		List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF * L_0 = (List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF *)__this->get_source_3();
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_1 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * L_2 = (Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *)__this->get_selector_5();
		WhereSelectListIterator_2_t4DBF7D016A01FED927964A925069CF01F8D63DC6 * L_3 = (WhereSelectListIterator_2_t4DBF7D016A01FED927964A925069CF01F8D63DC6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t4DBF7D016A01FED927964A925069CF01F8D63DC6 *, List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF *, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF *)L_0, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_1, (Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m38B70B6D1AFF738F6F1F053017E35DB036A8E68D_gshared (WhereSelectListIterator_2_t4DBF7D016A01FED927964A925069CF01F8D63DC6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF * L_3 = (List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF *)__this->get_source_3();
		NullCheck((List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF *)L_3);
		Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11  L_4;
		L_4 = ((  Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11  (*) (List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tBCC9803FE3EFE5F4CFB3D665884F2FC1EEBB48EF *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 * L_5 = (Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 *)__this->get_address_of_enumerator_6();
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_6;
		L_6 = Enumerator_get_Current_m986D0D109661BAD2B7202C22E48E69D6FE47864C_inline((Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 *)(Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_6;
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_7 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_8 = (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)__this->get_predicate_4();
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_9 = V_1;
		NullCheck((Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_8, (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 * L_11 = (Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *)__this->get_selector_5();
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_12 = V_1;
		NullCheck((Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tF85EF755218899BA965AEB17F438664A6CC7C007 *)L_11, (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 * L_14 = (Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mC056ABE04AAC10E6D4360F36BC71DAE877580AC1((Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 *)(Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE99091BFA47C81D51AE5D7297B5C8F3D347B5E06_gshared (WhereSelectListIterator_2_t4DBF7D016A01FED927964A925069CF01F8D63DC6 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m816EA218D5585C0CE1DF2D8F393C49C676CA2E01_gshared (WhereSelectListIterator_2_t395C59C9BA3C34D4C41F9C06F0C77E6CC2F7F022 * __this, List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 * ___source0, Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * ___predicate1, Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereSelectListIterator_2_Clone_m08B09C6479A8ACEBE6D340C3222B8F55653A104E_gshared (WhereSelectListIterator_2_t395C59C9BA3C34D4C41F9C06F0C77E6CC2F7F022 * __this, const RuntimeMethod* method)
{
	{
		List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 * L_0 = (List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 *)__this->get_source_3();
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_1 = (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)__this->get_predicate_4();
		Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * L_2 = (Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *)__this->get_selector_5();
		WhereSelectListIterator_2_t395C59C9BA3C34D4C41F9C06F0C77E6CC2F7F022 * L_3 = (WhereSelectListIterator_2_t395C59C9BA3C34D4C41F9C06F0C77E6CC2F7F022 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t395C59C9BA3C34D4C41F9C06F0C77E6CC2F7F022 *, List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 *, Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *, Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 *)L_0, (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)L_1, (Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m95F9232C12DA4573360FBD09FA48B9648360C83C_gshared (WhereSelectListIterator_2_t395C59C9BA3C34D4C41F9C06F0C77E6CC2F7F022 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 * L_3 = (List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 *)__this->get_source_3();
		NullCheck((List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 *)L_3);
		Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760  L_4;
		L_4 = ((  Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760  (*) (List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 * L_5 = (Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 *)__this->get_address_of_enumerator_6();
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_6;
		L_6 = Enumerator_get_Current_m9B5BEE342DF9CBA1DEECD9A57D0804E37864A3CE_inline((Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 *)(Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_6;
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_7 = (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_8 = (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)__this->get_predicate_4();
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_9 = V_1;
		NullCheck((Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *, NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)L_8, (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 * L_11 = (Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *)__this->get_selector_5();
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_12 = V_1;
		NullCheck((Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *)L_11);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_13;
		L_13 = ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *, NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t18515DF8E1B9C512554D9C817FC2CF43B8714B07 *)L_11, (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 * L_14 = (Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m96DEC00B81C69021E089863370BE96C9153B858E((Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 *)(Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mCEF1A2314DBFF739B9D329372A6153024D4617E6_gshared (WhereSelectListIterator_2_t395C59C9BA3C34D4C41F9C06F0C77E6CC2F7F022 * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_1 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5D40F73AE7DB9AFAD1A64D1357983E28CED7147E_gshared (WhereSelectListIterator_2_tDBB022641D0459A3B157C96D7470764685F4C514 * __this, List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 * ___source0, Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * ___predicate1, Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m736E7DB022D8ADD930BCB4784C51FF2E6BA2264B_gshared (WhereSelectListIterator_2_tDBB022641D0459A3B157C96D7470764685F4C514 * __this, const RuntimeMethod* method)
{
	{
		List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 * L_0 = (List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 *)__this->get_source_3();
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_1 = (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)__this->get_predicate_4();
		Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * L_2 = (Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *)__this->get_selector_5();
		WhereSelectListIterator_2_tDBB022641D0459A3B157C96D7470764685F4C514 * L_3 = (WhereSelectListIterator_2_tDBB022641D0459A3B157C96D7470764685F4C514 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tDBB022641D0459A3B157C96D7470764685F4C514 *, List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 *, Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *, Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 *)L_0, (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)L_1, (Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m60E958F8D5A291888B79D9BA4D05ED445B67D411_gshared (WhereSelectListIterator_2_tDBB022641D0459A3B157C96D7470764685F4C514 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 * L_3 = (List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 *)__this->get_source_3();
		NullCheck((List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 *)L_3);
		Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760  L_4;
		L_4 = ((  Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760  (*) (List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tA5271CFF4C2EEEDEC0AE06FC0EBAB9579053A0E1 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 * L_5 = (Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 *)__this->get_address_of_enumerator_6();
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_6;
		L_6 = Enumerator_get_Current_m9B5BEE342DF9CBA1DEECD9A57D0804E37864A3CE_inline((Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 *)(Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_6;
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_7 = (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C * L_8 = (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)__this->get_predicate_4();
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_9 = V_1;
		NullCheck((Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *, NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD2515F28EE745986F03A2C6B2A6D17216778F19C *)L_8, (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B * L_11 = (Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *)__this->get_selector_5();
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_12 = V_1;
		NullCheck((Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *, NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t442911A57D4C940F37F7ABC39B6FE29AF638578B *)L_11, (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 * L_14 = (Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m96DEC00B81C69021E089863370BE96C9153B858E((Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 *)(Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m3A64CF7523CBFC033285D898767A4905DA178016_gshared (WhereSelectListIterator_2_tDBB022641D0459A3B157C96D7470764685F4C514 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mED285A19679DCE6C3E36D16392B5E45DCE8D8E92_gshared (WhereSelectListIterator_2_t75144211B1AAEF36930DB1E9A1BCAE83770FCB18 * __this, List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 * ___source0, Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * ___predicate1, Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereSelectListIterator_2_Clone_m7516CFC9AA188C3A27FAD4B4C0D5F3E7AFA3F42A_gshared (WhereSelectListIterator_2_t75144211B1AAEF36930DB1E9A1BCAE83770FCB18 * __this, const RuntimeMethod* method)
{
	{
		List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 * L_0 = (List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 *)__this->get_source_3();
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_1 = (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)__this->get_predicate_4();
		Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * L_2 = (Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *)__this->get_selector_5();
		WhereSelectListIterator_2_t75144211B1AAEF36930DB1E9A1BCAE83770FCB18 * L_3 = (WhereSelectListIterator_2_t75144211B1AAEF36930DB1E9A1BCAE83770FCB18 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t75144211B1AAEF36930DB1E9A1BCAE83770FCB18 *, List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 *, Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *, Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 *)L_0, (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)L_1, (Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m3F9F4DEE3C188BB7FC1BDBE85A5445D16847AD1D_gshared (WhereSelectListIterator_2_t75144211B1AAEF36930DB1E9A1BCAE83770FCB18 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 * L_3 = (List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 *)__this->get_source_3();
		NullCheck((List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 *)L_3);
		Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297  L_4;
		L_4 = ((  Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297  (*) (List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 * L_5 = (Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 *)__this->get_address_of_enumerator_6();
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_6;
		L_6 = Enumerator_get_Current_m5A657600EB725FA49CD48AA20BF660A67F85E58A_inline((Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 *)(Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_6;
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_7 = (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_8 = (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)__this->get_predicate_4();
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_9 = V_1;
		NullCheck((Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *, NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)L_8, (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 * L_11 = (Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *)__this->get_selector_5();
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_12 = V_1;
		NullCheck((Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *)L_11);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_13;
		L_13 = ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *, NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t4AF245A826BB2E74AD62C1DA58F03B35F897D217 *)L_11, (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 * L_14 = (Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mE99B5153A3F6C418C52FAEEA34CF98F79E24867D((Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 *)(Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m74FA84ED72B97DAEF9CE18DF251F411CA148DE6F_gshared (WhereSelectListIterator_2_t75144211B1AAEF36930DB1E9A1BCAE83770FCB18 * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_1 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE61A115C5745DC0F761CC8011CAC8B70E156F6EB_gshared (WhereSelectListIterator_2_tE38108C185625ADCB97C3EF2869FA9474CBCF02A * __this, List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 * ___source0, Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * ___predicate1, Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m9A9243A8634B6BD3AD5E0D774A0B4313772F37BF_gshared (WhereSelectListIterator_2_tE38108C185625ADCB97C3EF2869FA9474CBCF02A * __this, const RuntimeMethod* method)
{
	{
		List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 * L_0 = (List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 *)__this->get_source_3();
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_1 = (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)__this->get_predicate_4();
		Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * L_2 = (Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *)__this->get_selector_5();
		WhereSelectListIterator_2_tE38108C185625ADCB97C3EF2869FA9474CBCF02A * L_3 = (WhereSelectListIterator_2_tE38108C185625ADCB97C3EF2869FA9474CBCF02A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tE38108C185625ADCB97C3EF2869FA9474CBCF02A *, List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 *, Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *, Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 *)L_0, (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)L_1, (Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mA4E36C146606B94D6A411A17F4C5C17882EAD4A7_gshared (WhereSelectListIterator_2_tE38108C185625ADCB97C3EF2869FA9474CBCF02A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 * L_3 = (List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 *)__this->get_source_3();
		NullCheck((List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 *)L_3);
		Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297  L_4;
		L_4 = ((  Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297  (*) (List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t12D38EC9E753EE3B986D36479D7983E0A28E26D8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 * L_5 = (Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 *)__this->get_address_of_enumerator_6();
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_6;
		L_6 = Enumerator_get_Current_m5A657600EB725FA49CD48AA20BF660A67F85E58A_inline((Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 *)(Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_6;
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_7 = (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 * L_8 = (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)__this->get_predicate_4();
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_9 = V_1;
		NullCheck((Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *, NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t41890D6C99D45C23D456D7DD6B0AE8F93F7BE344 *)L_8, (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D * L_11 = (Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *)__this->get_selector_5();
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_12 = V_1;
		NullCheck((Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *, NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t5EF692D3EE854535A9469FAC9AFAF90818353E3D *)L_11, (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 * L_14 = (Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mE99B5153A3F6C418C52FAEEA34CF98F79E24867D((Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 *)(Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mDB51361EE39306AB5DE565E48A948574627B57F5_gshared (WhereSelectListIterator_2_tE38108C185625ADCB97C3EF2869FA9474CBCF02A * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9DD38A3CB09F1B0646642C1E9E91F01C0A83A880_gshared (WhereSelectListIterator_2_t0C3A8DEA48C0B284960D9EDBE4687960E8294322 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereSelectListIterator_2_Clone_m54E211D31D0AA58D89E29288678A522A983CF852_gshared (WhereSelectListIterator_2_t0C3A8DEA48C0B284960D9EDBE4687960E8294322 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * L_2 = (Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *)__this->get_selector_5();
		WhereSelectListIterator_2_t0C3A8DEA48C0B284960D9EDBE4687960E8294322 * L_3 = (WhereSelectListIterator_2_t0C3A8DEA48C0B284960D9EDBE4687960E8294322 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t0C3A8DEA48C0B284960D9EDBE4687960E8294322 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mDD6A22CEEACFB1AAE434CA027158F793E9C420FB_gshared (WhereSelectListIterator_2_t0C3A8DEA48C0B284960D9EDBE4687960E8294322 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 * L_11 = (Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *)L_11);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_13;
		L_13 = ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t7FC6913A8C22CDEAB8808A873E8F4BCA876D1B01 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m8CF34C4B47734466AE2745ACF8C4C30CCB68C745_gshared (WhereSelectListIterator_2_t0C3A8DEA48C0B284960D9EDBE4687960E8294322 * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_1 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mCF313A191371C8CCC2E79D89A3BF21714EFDB20E_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m667BCD94E83BB3A02AF2D66E07B089FA86971342_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * L_3 = (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mEE0E8B173345B059100E0736D106FFAE0C2D29CA_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAC87184664F73DD7F3EC4AB4CE2BDE71BE76249D_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mAD8870FD9C97425963B43397B26F2C53489B558D_gshared (WhereSelectListIterator_2_t287BA3EF11B60F8D6D5341C59199D704B2CD60EC * __this, List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * ___source0, Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * ___predicate1, Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		((  void (*) (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 * WhereSelectListIterator_2_Clone_mF5D414A2D9721D311821028263628399F3186905_gshared (WhereSelectListIterator_2_t287BA3EF11B60F8D6D5341C59199D704B2CD60EC * __this, const RuntimeMethod* method)
{
	{
		List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * L_0 = (List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 *)__this->get_source_3();
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_1 = (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)__this->get_predicate_4();
		Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * L_2 = (Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *)__this->get_selector_5();
		WhereSelectListIterator_2_t287BA3EF11B60F8D6D5341C59199D704B2CD60EC * L_3 = (WhereSelectListIterator_2_t287BA3EF11B60F8D6D5341C59199D704B2CD60EC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t287BA3EF11B60F8D6D5341C59199D704B2CD60EC *, List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 *, Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *, Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 *)L_0, (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)L_1, (Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mACDEE990B9F8ECA6FF4D739548674C24A88FC578_gshared (WhereSelectListIterator_2_t287BA3EF11B60F8D6D5341C59199D704B2CD60EC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * L_3 = (List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 *)__this->get_source_3();
		NullCheck((List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 *)L_3);
		Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36  L_4;
		L_4 = ((  Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36  (*) (List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 * L_5 = (Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 *)__this->get_address_of_enumerator_6();
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_6;
		L_6 = Enumerator_get_Current_mCAFCD35F9DCF52EA5756F74ADD7DAD2328ECC013_inline((Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 *)(Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_6;
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_7 = (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_8 = (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)__this->get_predicate_4();
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_9 = V_1;
		NullCheck((Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *, JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)L_8, (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 * L_11 = (Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *)__this->get_selector_5();
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_12 = V_1;
		NullCheck((Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *)L_11);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_13;
		L_13 = ((  InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  (*) (Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *, JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tED635204E1465E7698FED9D3C83982A81A82EBA3 *)L_11, (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 * L_14 = (Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mB20322278FDC6D06D3B898481DF35848BF48B957((Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 *)(Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tBCE5D0975BA23B1DD21D5C2DEE3C6FB0821A4187 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m22EEE1702D24EA01E65F8A59F89F14148038D15B_gshared (WhereSelectListIterator_2_t287BA3EF11B60F8D6D5341C59199D704B2CD60EC * __this, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C * L_1 = (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t796372231A85A82C72D84710A5DD2C90C6E7971C *, RuntimeObject*, Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t56DC1D4423F2A816EF9685B613F18FD71E9ED25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mED453669E43937CCFF71B0D91191C6B3D1C39504_gshared (WhereSelectListIterator_2_tE51A4A0DD40EA32031DEA256235101226D7983A4 * __this, List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * ___source0, Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * ___predicate1, Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m3A23F8DCCC7A06EDBB7D02229625F5E0ADC73071_gshared (WhereSelectListIterator_2_tE51A4A0DD40EA32031DEA256235101226D7983A4 * __this, const RuntimeMethod* method)
{
	{
		List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * L_0 = (List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 *)__this->get_source_3();
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_1 = (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)__this->get_predicate_4();
		Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * L_2 = (Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *)__this->get_selector_5();
		WhereSelectListIterator_2_tE51A4A0DD40EA32031DEA256235101226D7983A4 * L_3 = (WhereSelectListIterator_2_tE51A4A0DD40EA32031DEA256235101226D7983A4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tE51A4A0DD40EA32031DEA256235101226D7983A4 *, List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 *, Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *, Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 *)L_0, (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)L_1, (Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE9F755E3B53699A30D22B8AFC4545067D3C826DD_gshared (WhereSelectListIterator_2_tE51A4A0DD40EA32031DEA256235101226D7983A4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * L_3 = (List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 *)__this->get_source_3();
		NullCheck((List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 *)L_3);
		Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36  L_4;
		L_4 = ((  Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36  (*) (List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 * L_5 = (Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 *)__this->get_address_of_enumerator_6();
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_6;
		L_6 = Enumerator_get_Current_mCAFCD35F9DCF52EA5756F74ADD7DAD2328ECC013_inline((Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 *)(Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_6;
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_7 = (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 * L_8 = (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)__this->get_predicate_4();
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_9 = V_1;
		NullCheck((Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *, JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD08AAF837E660989651C9FAE7C7E0AAC449B6283 *)L_8, (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 * L_11 = (Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *)__this->get_selector_5();
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_12 = V_1;
		NullCheck((Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *, JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t9516F09C399D3815682C6D1AC1F1F33A5B8C4054 *)L_11, (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 * L_14 = (Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mB20322278FDC6D06D3B898481DF35848BF48B957((Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 *)(Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m5CE45044E31AADF392C34DC3407B64F51D17BE11_gshared (WhereSelectListIterator_2_tE51A4A0DD40EA32031DEA256235101226D7983A4 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Enumerator_get_Current_m9520F939F129F4E566B70E5DC91B22E9BEF5550B_gshared_inline (Enumerator_t559B6D6D3113FF8834FF99E540A765371AFFE657 * __this, const RuntimeMethod* method)
{
	{
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_0 = (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 )__this->get_current_3();
		return (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  Enumerator_get_Current_m5B8DA151C23C9E8A3BC4841B3C5DADD7683C1E76_gshared_inline (Enumerator_t741ED42EC5AE06F5802D017F21523493E45FD162 * __this, const RuntimeMethod* method)
{
	{
		ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  L_0 = (ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA )__this->get_current_3();
		return (ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  Enumerator_get_Current_m24D5769F71109D5A58E9CE2ADBA2899166664470_gshared_inline (Enumerator_tF4F93B099A79815CFC65DB8FE8748FB8F5AB0109 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  L_0 = (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )__this->get_current_3();
		return (KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  Enumerator_get_Current_m986D0D109661BAD2B7202C22E48E69D6FE47864C_gshared_inline (Enumerator_tCA783CBB464D1CC2C2E6F192DB746C9F0477FC11 * __this, const RuntimeMethod* method)
{
	{
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_0 = (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )__this->get_current_3();
		return (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  Enumerator_get_Current_m9B5BEE342DF9CBA1DEECD9A57D0804E37864A3CE_gshared_inline (Enumerator_tBBF3EE36FE062418B2C28A153D6AE39E897C5760 * __this, const RuntimeMethod* method)
{
	{
		NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  L_0 = (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )__this->get_current_3();
		return (NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  Enumerator_get_Current_m5A657600EB725FA49CD48AA20BF660A67F85E58A_gshared_inline (Enumerator_t54CE6166AF22A69F25FB46A8A1AFA2E56393A297 * __this, const RuntimeMethod* method)
{
	{
		NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_0 = (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )__this->get_current_3();
		return (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  Enumerator_get_Current_mCAFCD35F9DCF52EA5756F74ADD7DAD2328ECC013_gshared_inline (Enumerator_t3F80DCCB69E1F909DB2D8AD9DF6C9ACB2622ED36 * __this, const RuntimeMethod* method)
{
	{
		JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  L_0 = (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )__this->get_current_3();
		return (JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 )L_0;
	}
}
