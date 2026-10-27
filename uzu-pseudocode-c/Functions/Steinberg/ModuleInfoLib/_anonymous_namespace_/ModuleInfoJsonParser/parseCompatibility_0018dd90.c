// Function : parseCompatibility
// Namespace: Steinberg:ModuleInfoLib:_anonymous_namespace_:ModuleInfoJsonParser
// Entry    : 0018dd90
// Prototype: undefined parseCompatibility(ModuleInfoJsonParser * this, long * param_1)
// Body     : 0018dd90 - 0018e3d4


/* Steinberg::ModuleInfoLib::(anonymous
   namespace)::ModuleInfoJsonParser::parseCompatibility(JSON::Value const&) */

void __thiscall
Steinberg::ModuleInfoLib::(anonymous_namespace)::ModuleInfoJsonParser::parseCompatibility
          (ModuleInfoJsonParser *this,long *param_1)

{
  short *psVar1;
  undefined1 *__src;
  long lVar2;
  ulong *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  parse_error *ppVar9;
  ulong *puVar10;
  undefined1 *local_b8;
  long local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  ulong *local_98;
  ulong *puStack_90;
  ulong *local_88;
  undefined8 *local_80 [4];
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  ModuleInfoJsonParser *local_40;
  ModuleInfoJsonParser *local_38;
  
  local_40 = this;
  if (((undefined8 *)*param_1)[1] != 3) {
    ppVar9 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018e393 to 0018e3a8 has its CatchHandler @ 0018e3e9 */
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&local_b8,(string *)"Expect Array here");
                    /* try { // try from 0018e3ac to 0018e3d4 has its CatchHandler @ 0018e3d5 */
    parse_error::parse_error(ppVar9,&local_b8,param_1);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(ppVar9,&parse_error::typeinfo,parse_error::~parse_error);
  }
  plVar4 = (long *)json_value_as_array((undefined8 *)*param_1);
  local_60 = (undefined8 *)*plVar4;
  if (local_60 != (undefined8 *)0x0) {
    local_38 = local_40 + 0xc0;
    do {
      if (((undefined8 *)*local_60)[1] != 2) {
        ppVar9 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018e2cd to 0018e2e2 has its CatchHandler @ 0018e416 */
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_b8,(string *)"Expect Object here");
        local_80[0] = (undefined8 *)*local_60;
                    /* try { // try from 0018e2f3 to 0018e31d has its CatchHandler @ 0018e3fa */
        parse_error::parse_error(ppVar9,&local_b8,(long *)local_80);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(ppVar9,&parse_error::typeinfo,parse_error::~parse_error);
      }
      puVar5 = (undefined8 *)json_value_as_object((undefined8 *)*local_60);
      local_b0 = 0;
      local_a8 = 0;
      local_98 = (ulong *)0x0;
      puStack_90 = (ulong *)0x0;
      local_88 = (ulong *)0x0;
      puVar5 = (undefined8 *)*puVar5;
      local_b8 = &local_a8;
      if (puVar5 == (undefined8 *)0x0) {
LAB_0018e25d:
        ppVar9 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018e26a to 0018e27f has its CatchHandler @ 0018e453 */
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)local_80,(string *)"Expect New CID here");
        local_50 = (undefined8 *)*local_60;
                    /* try { // try from 0018e290 to 0018e2ba has its CatchHandler @ 0018e429 */
        parse_error::parse_error(ppVar9,local_80,(long *)&local_50);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(ppVar9,&parse_error::typeinfo,parse_error::~parse_error);
      }
      do {
        if (((undefined8 *)*puVar5)[1] == 3) {
          psVar1 = *(short **)*puVar5;
          if ((char)psVar1[1] == 'w' && *psVar1 == 0x654e) {
            local_50 = (undefined8 *)puVar5[1];
            if (local_50[1] != 0) {
LAB_0018e1ae:
              ppVar9 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018e1bb to 0018e1d0 has its CatchHandler @ 0018e4ae */
              std::__cxx11::string::string<std::allocator<char>>
                        ((string *)local_80,(string *)"Expect a String here");
                    /* try { // try from 0018e1d4 to 0018e1fe has its CatchHandler @ 0018e490 */
              parse_error::parse_error(ppVar9,local_80,(long *)&local_50);
                    /* WARNING: Subroutine does not return */
              __cxa_throw(ppVar9,&parse_error::typeinfo,parse_error::~parse_error);
            }
                    /* try { // try from 0018dfc9 to 0018dfe5 has its CatchHandler @ 0018e4bd */
            puVar6 = (undefined8 *)json_value_as_string(local_50);
            std::__cxx11::string::_M_replace
                      ((string *)&local_b8,0,local_b0,(undefined1 *)*puVar6,puVar6[1]);
          }
          else if ((char)psVar1[1] == 'd' && *psVar1 == 0x6c4f) {
            if (((undefined8 *)puVar5[1])[1] != 3) {
              ppVar9 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018e20c to 0018e221 has its CatchHandler @ 0018e47e */
              std::__cxx11::string::string<std::allocator<char>>
                        ((string *)local_80,(string *)"Expect Array here");
              local_50 = (undefined8 *)puVar5[1];
                    /* try { // try from 0018e22e to 0018e257 has its CatchHandler @ 0018e458 */
              parse_error::parse_error(ppVar9,local_80,(long *)&local_50);
                    /* WARNING: Subroutine does not return */
              __cxa_throw(ppVar9,&parse_error::typeinfo,parse_error::~parse_error);
            }
                    /* try { // try from 0018dea8 to 0018deac has its CatchHandler @ 0018e4bb */
            puVar6 = (undefined8 *)json_value_as_array((undefined8 *)puVar5[1]);
            for (puVar6 = (undefined8 *)*puVar6; puVar6 != (undefined8 *)0x0;
                puVar6 = (undefined8 *)puVar6[1]) {
              while( true ) {
                local_58 = (undefined8 *)*puVar6;
                if (local_58[1] != 0) {
                  ppVar9 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018e15e to 0018e173 has its CatchHandler @ 0018e4e2 */
                  std::__cxx11::string::string<std::allocator<char>>
                            ((string *)local_80,(string *)"Expect a String here");
                    /* try { // try from 0018e177 to 0018e1a1 has its CatchHandler @ 0018e4bf */
                  parse_error::parse_error(ppVar9,local_80,(long *)&local_58);
                    /* WARNING: Subroutine does not return */
                  __cxa_throw(ppVar9,&parse_error::typeinfo,parse_error::~parse_error);
                }
                    /* try { // try from 0018df06 to 0018dfa1 has its CatchHandler @ 0018e4f6 */
                puVar7 = (undefined8 *)json_value_as_string(local_58);
                puVar10 = puStack_90;
                __src = (undefined1 *)*puVar7;
                puVar7 = (undefined8 *)puVar7[1];
                local_50 = puVar7;
                local_48 = __src;
                if (puStack_90 == local_88) break;
                puVar8 = puStack_90 + 2;
                *puStack_90 = (ulong)puVar8;
                if ((__src == (undefined1 *)0x0) && (puVar7 != (undefined8 *)0x0)) {
                    /* try { // try from 0018e1a2 to 0018e1ad has its CatchHandler @ 0018e4f4 */
                  std::__throw_logic_error("basic_string: construction from null is not valid");
                  goto LAB_0018e1ae;
                }
                local_80[0] = puVar7;
                if ((undefined8 *)0xf < puVar7) {
                  puVar8 = (ulong *)std::__cxx11::string::_M_create(puStack_90,(ulong)local_80);
                  *puVar10 = (ulong)puVar8;
                  puVar10[2] = (ulong)local_80[0];
                }
                if (puVar7 != (undefined8 *)0x0) {
                  if (puVar7 == (undefined8 *)0x1) {
                    *(undefined1 *)puVar8 = *__src;
                  }
                  else {
                    memcpy(puVar8,__src,(size_t)puVar7);
                  }
                }
                puVar10[1] = (ulong)local_80[0];
                *(undefined1 *)(*puVar10 + (long)local_80[0]) = 0;
                puStack_90 = puStack_90 + 4;
                puVar6 = (undefined8 *)puVar6[1];
                if (puVar6 == (undefined8 *)0x0) goto LAB_0018de50;
              }
              std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
              _M_realloc_insert<std::basic_string_view<char,std::char_traits<char>>>
                        ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)
                         &local_98,puStack_90,(ulong *)&local_50);
            }
          }
        }
LAB_0018de50:
        lVar2 = local_b0;
        puVar5 = (undefined8 *)puVar5[2];
      } while (puVar5 != (undefined8 *)0x0);
      if (local_b0 == 0) goto LAB_0018e25d;
      if (local_98 == puStack_90) {
        ppVar9 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018e330 to 0018e345 has its CatchHandler @ 0018e3f5 */
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)local_80,(string *)"Expect Old CID here");
        local_50 = (undefined8 *)*local_60;
                    /* try { // try from 0018e356 to 0018e380 has its CatchHandler @ 0018e3f3 */
        parse_error::parse_error(ppVar9,local_80,(long *)&local_50);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(ppVar9,&parse_error::typeinfo,parse_error::~parse_error);
      }
      puVar5 = *(undefined8 **)(local_40 + 200);
      if (puVar5 == *(undefined8 **)(local_40 + 0xd0)) {
                    /* try { // try from 0018e050 to 0018e064 has its CatchHandler @ 0018e3eb */
        std::
        vector<Steinberg::ModuleInfo::Compatibility,std::allocator<Steinberg::ModuleInfo::Compatibility>>
        ::_M_realloc_insert<Steinberg::ModuleInfo::Compatibility>
                  ((vector<Steinberg::ModuleInfo::Compatibility,std::allocator<Steinberg::ModuleInfo::Compatibility>>
                    *)local_38,puVar5,(long *)&local_b8);
        puVar3 = puStack_90;
        puVar8 = puStack_90;
        puVar5 = local_60;
        for (puVar10 = local_98; local_60 = puVar5, puVar10 != puVar3; puVar10 = puVar10 + 4) {
          if ((ulong *)*puVar10 != puVar10 + 2) {
            operator_delete((ulong *)*puVar10);
          }
          puVar8 = local_98;
          puVar5 = local_60;
        }
        if (puVar8 != (ulong *)0x0) {
          operator_delete(puVar8);
        }
      }
      else {
        *puVar5 = puVar5 + 2;
        if (local_b8 == &local_a8) {
          memcpy(puVar5 + 2,&local_a8,local_b0 + 1);
        }
        else {
          *puVar5 = local_b8;
          puVar5[2] = CONCAT71(uStack_a7,local_a8);
        }
        puVar5[1] = lVar2;
        local_b0 = 0;
        local_a8 = 0;
        puVar5[4] = local_98;
        puVar5[5] = puStack_90;
        puVar5[6] = local_88;
        local_98 = (ulong *)0x0;
        puStack_90 = (ulong *)0x0;
        local_88 = (ulong *)0x0;
        *(long *)(local_40 + 200) = *(long *)(local_40 + 200) + 0x38;
        puVar5 = local_60;
        local_b8 = &local_a8;
      }
      if (local_b8 != &local_a8) {
        operator_delete(local_b8);
      }
      local_60 = (undefined8 *)puVar5[1];
    } while (local_60 != (undefined8 *)0x0);
  }
  return;
}


