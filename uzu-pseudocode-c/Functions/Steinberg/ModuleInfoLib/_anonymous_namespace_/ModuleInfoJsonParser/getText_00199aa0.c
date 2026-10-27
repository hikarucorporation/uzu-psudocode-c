// Function : getText
// Namespace: Steinberg:ModuleInfoLib:_anonymous_namespace_:ModuleInfoJsonParser
// Entry    : 00199aa0
// Prototype: undefined1[16] getText(long * param_1)
// Body     : 00199aa0 - 00199b17


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ModuleInfoLib::(anonymous namespace)::ModuleInfoJsonParser::getText(JSON::Value
   const&) const */

undefined1  [16] __cdecl
Steinberg::ModuleInfoLib::(anonymous_namespace)::ModuleInfoJsonParser::getText(long *param_1)

{
  undefined8 *puVar1;
  parse_error *this;
  undefined1 auVar2 [16];
  string local_38 [32];
  
  if (((undefined8 *)*param_1)[1] != 0) {
    this = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 00199ad7 to 00199aec has its CatchHandler @ 00199b43 */
    std::__cxx11::string::string<std::allocator<char>>(local_38,(string *)"Expect a String here");
                    /* try { // try from 00199af0 to 00199b17 has its CatchHandler @ 00199b18 */
    parse_error::parse_error(this,(undefined8 *)local_38,param_1);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&parse_error::typeinfo,parse_error::~parse_error);
  }
  puVar1 = (undefined8 *)json_value_as_string((undefined8 *)*param_1);
  auVar2._8_8_ = *puVar1;
  auVar2._0_8_ = puVar1[1];
  return auVar2;
}


