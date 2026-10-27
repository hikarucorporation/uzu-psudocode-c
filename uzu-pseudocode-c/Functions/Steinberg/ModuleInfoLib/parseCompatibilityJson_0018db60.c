// Function : parseCompatibilityJson
// Namespace: Steinberg:ModuleInfoLib
// Entry    : 0018db60
// Prototype: undefined8 * parseCompatibilityJson(undefined8 * param_1, long param_2, long param_3, ostream * param_4)
// Body     : 0018db60 - 0018dd04


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ModuleInfoLib::parseCompatibilityJson(std::basic_string_view<char,
   std::char_traits<char> >, std::ostream*) */

undefined8 * __cdecl
Steinberg::ModuleInfoLib::parseCompatibilityJson
          (undefined8 *param_1,long param_2,long param_3,ostream *param_4)

{
  ulong *local_128;
  undefined8 uStack_120;
  ulong local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  ulong *local_f8;
  undefined8 uStack_f0;
  ulong local_e8;
  undefined8 uStack_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = (ulong *)0x0;
  uStack_f0 = 0;
  local_128 = (ulong *)json_parse_ex(param_3,param_2,0x3fa3,
                                     JSON::Document::
                                     parse(std::basic_string_view<char,std::char_traits<char>>)::
                                     {lambda(void*,unsigned_long)#1}::__invoke,0,&local_f8);
  if (local_128 == (ulong *)0x0) {
    local_118 = local_e8;
    uStack_110 = uStack_e0;
    local_128 = local_f8;
    uStack_120 = uStack_f0;
    local_108 = 1;
    if (param_4 != (ostream *)0x0) {
                    /* try { // try from 0018dce4 to 0018dcee has its CatchHandler @ 0018dd05 */
      (anonymous_namespace)::printJsonParseError((int *)&local_128,param_4);
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    local_108 = 0;
    local_f8 = &local_e8;
    uStack_f0 = 0;
    local_e8 = local_e8 & 0xffffffffffffff00;
    local_d8 = local_c8;
    local_d0 = 0;
    local_c8[0] = 0;
    local_b8 = local_a8;
    local_b0 = 0;
    local_a8[0] = 0;
    local_98 = local_88;
    local_90 = 0;
    local_88[0] = 0;
    local_78 = local_68;
    local_70 = 0;
    local_68[0] = 0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
                    /* try { // try from 0018dc6e to 0018dc7a has its CatchHandler @ 0018dd0d */
    (anonymous_namespace)::ModuleInfoJsonParser::parseCompatibility
              ((ModuleInfoJsonParser *)&local_f8,(long *)&local_128);
    *param_1 = uStack_38;
    param_1[1] = local_30;
    param_1[2] = uStack_28;
    uStack_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    ModuleInfo::~ModuleInfo((ModuleInfo *)&local_f8);
    if (local_128 != (ulong *)0x0) {
      free(local_128);
    }
  }
  return param_1;
}


