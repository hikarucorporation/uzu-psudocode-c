// Function : parseJson
// Namespace: Steinberg:ModuleInfoLib
// Entry    : 0018c650
// Prototype: undefined8 * parseJson(undefined8 * param_1, long param_2, long param_3, ostream * param_4)
// Body     : 0018c650 - 0018d7e6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ModuleInfoLib::parseJson(std::basic_string_view<char, std::char_traits<char> >,
   std::ostream*) */

undefined8 * __cdecl
Steinberg::ModuleInfoLib::parseJson(undefined8 *param_1,long param_2,long param_3,ostream *param_4)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  parse_error *ppVar19;
  logic_error *plVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 *local_160;
  long local_158 [4];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 *local_118;
  long local_110;
  undefined1 local_108;
  undefined7 uStack_107;
  undefined1 *local_f8;
  long local_f0;
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined1 *local_d8;
  long local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined1 *local_b8;
  long local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  uint local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  
  local_128 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_58 = json_parse_ex(param_3,param_2,0x3fa3,
                           JSON::Document::
                           parse(std::basic_string_view<char,std::char_traits<char>>)::
                           {lambda(void*,unsigned_long)#1}::__invoke,0,(undefined8 *)local_138);
  if (local_58 == (long *)0x0) {
    local_48 = local_128._0_8_;
    uStack_40 = local_128._8_8_;
    local_58 = (long *)local_138._0_8_;
    uStack_50 = local_138._8_8_;
    local_38 = 1;
    if (param_4 != (ostream *)0x0) {
                    /* try { // try from 0018cd32 to 0018cd41 has its CatchHandler @ 0018d7e7 */
      (anonymous_namespace)::printJsonParseError((int *)&local_58,param_4);
    }
    *(undefined1 *)(param_1 + 0x1b) = 0;
    return param_1;
  }
  local_38 = 0;
  local_138._8_8_ = 0;
  local_138._0_8_ = local_128;
  auVar4[0xf] = 0;
  auVar4._0_15_ = local_128._1_15_;
  local_128 = auVar4 << 8;
  local_118 = &local_108;
  local_110 = 0;
  local_108 = 0;
  local_f8 = &local_e8;
  local_f0 = 0;
  local_e8 = 0;
  local_d8 = &local_c8;
  local_d0 = 0;
  local_c8 = 0;
  local_b8 = &local_a8;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = (undefined1  [16])0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (local_58[1] != 2) {
    ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018d6fb to 0018d710 has its CatchHandler @ 0018d82b */
    std::__cxx11::string::string<std::allocator<char>>((string *)local_158,(string *)"Unexpected");
                    /* try { // try from 0018d714 to 0018d741 has its CatchHandler @ 0018d7fe */
    (anonymous_namespace)::parse_error::parse_error(ppVar19,local_158,(long *)&local_58);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                (anonymous_namespace)::parse_error::~parse_error);
  }
                    /* try { // try from 0018c785 to 0018c791 has its CatchHandler @ 0018d8db */
  puVar16 = (undefined8 *)json_value_as_object(local_58);
  puVar16 = (undefined8 *)*puVar16;
  if (puVar16 != (undefined8 *)0x0) {
    bVar12 = false;
    bVar13 = false;
    bVar5 = false;
    bVar7 = false;
    bVar11 = false;
    do {
      lVar1 = ((undefined8 *)*puVar16)[1];
      if (9 < lVar1 - 4U) {
switchD_0018c7f8_caseD_5:
        ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018d091 to 0018d0a4 has its CatchHandler @ 0018d8d9 */
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)local_158,(string *)"Unexpected JSON Token");
        local_160 = (undefined8 *)*puVar16;
                    /* try { // try from 0018d0af to 0018d0d8 has its CatchHandler @ 0018d8b6 */
        (anonymous_namespace)::parse_error::parse_error(ppVar19,local_158,(long *)&local_160);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                    (anonymous_namespace)::parse_error::~parse_error);
      }
      plVar2 = *(long **)*puVar16;
      switch(lVar1) {
      case 4:
        if ((int)*plVar2 != 0x656d614e) goto switchD_0018c7f8_caseD_5;
        if (bVar11) {
          ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018d477 to 0018d48a has its CatchHandler @ 0018d861 */
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)local_158,(string *)"Only one \'Name\' key allowed");
          local_160 = (undefined8 *)*puVar16;
                    /* try { // try from 0018d495 to 0018d4be has its CatchHandler @ 0018d85f */
          (anonymous_namespace)::parse_error::parse_error(ppVar19,local_158,(long *)&local_160);
                    /* WARNING: Subroutine does not return */
          __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                      (anonymous_namespace)::parse_error::~parse_error);
        }
        local_160 = (undefined8 *)puVar16[1];
        if (local_160[1] != 0) {
          ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018d4d1 to 0018d4e4 has its CatchHandler @ 0018d85a */
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)local_158,(string *)"Expect a String here");
                    /* try { // try from 0018d4e7 to 0018d510 has its CatchHandler @ 0018d858 */
          (anonymous_namespace)::parse_error::parse_error(ppVar19,local_158,(long *)&local_160);
                    /* WARNING: Subroutine does not return */
          __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                      (anonymous_namespace)::parse_error::~parse_error);
        }
                    /* try { // try from 0018c824 to 0018c88f has its CatchHandler @ 0018d8e3 */
        puVar17 = (undefined8 *)json_value_as_string(local_160);
        std::__cxx11::string::_M_replace
                  ((string *)local_138,0,local_138._8_8_,(undefined1 *)*puVar17,puVar17[1]);
        bVar11 = true;
        break;
      default:
        goto switchD_0018c7f8_caseD_5;
      case 7:
        if (*(int *)((long)plVar2 + 3) == 0x6e6f6973 && (int)*plVar2 == 0x73726556) {
          if (bVar12) {
            ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018d61d to 0018d630 has its CatchHandler @ 0018d846 */
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)local_158,(string *)"Only one \'Version\' key allowed");
            local_160 = (undefined8 *)*puVar16;
                    /* try { // try from 0018d63b to 0018d664 has its CatchHandler @ 0018d844 */
            (anonymous_namespace)::parse_error::parse_error(ppVar19,local_158,(long *)&local_160);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                        (anonymous_namespace)::parse_error::~parse_error);
          }
          local_160 = (undefined8 *)puVar16[1];
          if (local_160[1] != 0) {
            ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018d677 to 0018d68a has its CatchHandler @ 0018d83f */
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)local_158,(string *)"Expect a String here");
                    /* try { // try from 0018d68d to 0018d6b6 has its CatchHandler @ 0018d83d */
            (anonymous_namespace)::parse_error::parse_error(ppVar19,local_158,(long *)&local_160);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                        (anonymous_namespace)::parse_error::~parse_error);
          }
          puVar17 = (undefined8 *)json_value_as_string(local_160);
          std::__cxx11::string::_M_replace
                    ((string *)&local_118,0,local_110,(undefined1 *)*puVar17,puVar17[1]);
          bVar12 = true;
        }
        else {
          if (*(int *)((long)plVar2 + 3) != 0x73657373 || (int)*plVar2 != 0x73616c43)
          goto switchD_0018c7f8_caseD_5;
          if (bVar13) {
            ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018d5c3 to 0018d5d6 has its CatchHandler @ 0018d84d */
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)local_158,(string *)"Only one \'Classes\' key allowed");
            local_160 = (undefined8 *)*puVar16;
                    /* try { // try from 0018d5e1 to 0018d60a has its CatchHandler @ 0018d84b */
            (anonymous_namespace)::parse_error::parse_error(ppVar19,local_158,(long *)&local_160);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                        (anonymous_namespace)::parse_error::~parse_error);
          }
          local_158[0] = puVar16[1];
          (anonymous_namespace)::ModuleInfoJsonParser::parseClasses
                    ((ModuleInfoJsonParser *)local_138,local_158);
          bVar13 = true;
        }
        break;
      case 0xc:
        if ((int)plVar2[1] != 0x6f666e49 || *plVar2 != 0x2079726f74636146)
        goto switchD_0018c7f8_caseD_5;
        if (bVar7) {
          ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018d41d to 0018d430 has its CatchHandler @ 0018d868 */
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)local_158,(string *)"Only one \'Factory Info\' key allowed");
          local_160 = (undefined8 *)*puVar16;
                    /* try { // try from 0018d43b to 0018d464 has its CatchHandler @ 0018d866 */
          (anonymous_namespace)::parse_error::parse_error(ppVar19,local_158,(long *)&local_160);
                    /* WARNING: Subroutine does not return */
          __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                      (anonymous_namespace)::parse_error::~parse_error);
        }
        if (((undefined8 *)puVar16[1])[1] != 2) {
LAB_0018d0de:
          plVar20 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0018d0eb to 0018d0f9 has its CatchHandler @ 0018d8a6 */
          std::logic_error::logic_error(plVar20,"Missing \'Vendor\' in Factory Info");
                    /* try { // try from 0018d0fa to 0018d114 has its CatchHandler @ 0018d8db */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(plVar20,PTR_typeinfo_00715f68,PTR__logic_error_00715e90);
        }
        puVar17 = (undefined8 *)json_value_as_object((undefined8 *)puVar16[1]);
        puVar17 = (undefined8 *)*puVar17;
        if (puVar17 == (undefined8 *)0x0) goto LAB_0018d0de;
        bVar7 = false;
        bVar8 = false;
        bVar10 = false;
        bVar9 = false;
        do {
          piVar3 = *(int **)*puVar17;
          lVar1 = ((undefined8 *)*puVar17)[1];
          if (lVar1 == 3) {
            if (*(char *)((long)piVar3 + 2) == 'L' && (short)*piVar3 == 0x5255) {
              if (bVar8) {
                ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018d122 to 0018d135 has its CatchHandler @ 0018d8a4 */
                std::__cxx11::string::string<std::allocator<char>>
                          ((string *)local_158,(string *)"Only one \'URL\' key allowed");
                local_160 = (undefined8 *)*puVar17;
                    /* try { // try from 0018d140 to 0018d169 has its CatchHandler @ 0018d8a2 */
                (anonymous_namespace)::parse_error::parse_error
                          (ppVar19,local_158,(long *)&local_160);
                    /* WARNING: Subroutine does not return */
                __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                            (anonymous_namespace)::parse_error::~parse_error);
              }
              local_160 = (undefined8 *)puVar17[1];
              if (local_160[1] != 0) {
                ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018d1d6 to 0018d1e9 has its CatchHandler @ 0018d899 */
                std::__cxx11::string::string<std::allocator<char>>
                          ((string *)local_158,(string *)"Expect a String here");
                    /* try { // try from 0018d1ec to 0018d215 has its CatchHandler @ 0018d897 */
                (anonymous_namespace)::parse_error::parse_error
                          (ppVar19,local_158,(long *)&local_160);
                    /* WARNING: Subroutine does not return */
                __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                            (anonymous_namespace)::parse_error::~parse_error);
              }
              puVar18 = (undefined8 *)json_value_as_string(local_160);
              std::__cxx11::string::_M_replace
                        ((string *)&local_d8,0,local_d0,(undefined1 *)*puVar18,puVar18[1]);
              bVar8 = true;
            }
          }
          else if (lVar1 == 5) {
            if ((char)piVar3[1] == 's' && *piVar3 == 0x67616c46) {
              if (bVar10) {
                ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018d270 to 0018d283 has its CatchHandler @ 0018d88b */
                std::__cxx11::string::string<std::allocator<char>>
                          ((string *)local_158,(string *)"Only one \'Flags\' key allowed");
                local_160 = (undefined8 *)*puVar17;
                    /* try { // try from 0018d28e to 0018d2b7 has its CatchHandler @ 0018d889 */
                (anonymous_namespace)::parse_error::parse_error
                          (ppVar19,local_158,(long *)&local_160);
                    /* WARNING: Subroutine does not return */
                __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                            (anonymous_namespace)::parse_error::~parse_error);
              }
              if (((undefined8 *)puVar17[1])[1] != 2) {
                ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018d2ca to 0018d2dd has its CatchHandler @ 0018d884 */
                std::__cxx11::string::string<std::allocator<char>>
                          ((string *)local_158,(string *)"Expect \'Flags\' to be a JSON Object");
                local_160 = (undefined8 *)*puVar17;
                    /* try { // try from 0018d2e8 to 0018d311 has its CatchHandler @ 0018d882 */
                (anonymous_namespace)::parse_error::parse_error
                          (ppVar19,local_158,(long *)&local_160);
                    /* WARNING: Subroutine does not return */
                __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                            (anonymous_namespace)::parse_error::~parse_error);
              }
              puVar18 = (undefined8 *)json_value_as_object((undefined8 *)puVar17[1]);
              for (puVar18 = (undefined8 *)*puVar18; puVar18 != (undefined8 *)0x0;
                  puVar18 = (undefined8 *)puVar18[2]) {
                if ((*(ulong *)(puVar18[1] + 8) & 0xfffffffffffffffe) != 4) {
                  ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018d031 to 0018d044 has its CatchHandler @ 0018d8f9 */
                  std::__cxx11::string::string<std::allocator<char>>
                            ((string *)local_158,(string *)"Flag must be a boolean");
                  local_160 = (undefined8 *)puVar18[1];
                    /* try { // try from 0018d050 to 0018d07e has its CatchHandler @ 0018d8f7 */
                  (anonymous_namespace)::parse_error::parse_error
                            (ppVar19,local_158,(long *)&local_160);
                    /* WARNING: Subroutine does not return */
                  __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                              (anonymous_namespace)::parse_error::~parse_error);
                }
                piVar3 = *(int **)*puVar18;
                lVar1 = ((undefined8 *)*puVar18)[1];
                if (lVar1 == 7) {
                  if (*(int *)((long)piVar3 + 3) != 0x65646f63 || *piVar3 != 0x63696e55)
                  goto LAB_0018cfc4;
                  uVar21 = 0x10;
                }
                else if (lVar1 == 0x19) {
                  auVar23[0] = -((char)*piVar3 == DAT_005d9a20);
                  auVar23[1] = -(*(char *)((long)piVar3 + 1) == UNK_005d9a21);
                  auVar23[2] = -(*(char *)((long)piVar3 + 2) == UNK_005d9a22);
                  auVar23[3] = -(*(char *)((long)piVar3 + 3) == UNK_005d9a23);
                  auVar23[4] = -((char)piVar3[1] == UNK_005d9a24);
                  auVar23[5] = -(*(char *)((long)piVar3 + 5) == UNK_005d9a25);
                  auVar23[6] = -(*(char *)((long)piVar3 + 6) == UNK_005d9a26);
                  auVar23[7] = -(*(char *)((long)piVar3 + 7) == UNK_005d9a27);
                  auVar23[8] = -((char)piVar3[2] == UNK_005d9a28);
                  auVar23[9] = -(*(char *)((long)piVar3 + 9) == UNK_005d9a29);
                  auVar23[10] = -(*(char *)((long)piVar3 + 10) == UNK_005d9a2a);
                  auVar23[0xb] = -(*(char *)((long)piVar3 + 0xb) == UNK_005d9a2b);
                  auVar23[0xc] = -((char)piVar3[3] == UNK_005d9a2c);
                  auVar23[0xd] = -(*(char *)((long)piVar3 + 0xd) == UNK_005d9a2d);
                  auVar23[0xe] = -(*(char *)((long)piVar3 + 0xe) == UNK_005d9a2e);
                  auVar23[0xf] = -(*(char *)((long)piVar3 + 0xf) == UNK_005d9a2f);
                  auVar25[0] = -(*(char *)((long)piVar3 + 9) == DAT_005d9a10);
                  auVar25[1] = -(*(char *)((long)piVar3 + 10) == UNK_005d9a11);
                  auVar25[2] = -(*(char *)((long)piVar3 + 0xb) == UNK_005d9a12);
                  auVar25[3] = -((char)piVar3[3] == UNK_005d9a13);
                  auVar25[4] = -(*(char *)((long)piVar3 + 0xd) == UNK_005d9a14);
                  auVar25[5] = -(*(char *)((long)piVar3 + 0xe) == UNK_005d9a15);
                  auVar25[6] = -(*(char *)((long)piVar3 + 0xf) == UNK_005d9a16);
                  auVar25[7] = -((char)piVar3[4] == UNK_005d9a17);
                  auVar25[8] = -(*(char *)((long)piVar3 + 0x11) == UNK_005d9a18);
                  auVar25[9] = -(*(char *)((long)piVar3 + 0x12) == UNK_005d9a19);
                  auVar25[10] = -(*(char *)((long)piVar3 + 0x13) == UNK_005d9a1a);
                  auVar25[0xb] = -((char)piVar3[5] == UNK_005d9a1b);
                  auVar25[0xc] = -(*(char *)((long)piVar3 + 0x15) == UNK_005d9a1c);
                  auVar25[0xd] = -(*(char *)((long)piVar3 + 0x16) == UNK_005d9a1d);
                  auVar25[0xe] = -(*(char *)((long)piVar3 + 0x17) == UNK_005d9a1e);
                  auVar25[0xf] = -((char)piVar3[6] == UNK_005d9a1f);
                  auVar25 = auVar25 & auVar23;
                  if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) != 0xffff)
                  goto LAB_0018cfc4;
                  uVar21 = 8;
                }
                else {
                  if ((lVar1 != 0x13) ||
                     (auVar22[0] = -((char)*piVar3 == DAT_005d9a40),
                     auVar22[1] = -(*(char *)((long)piVar3 + 1) == UNK_005d9a41),
                     auVar22[2] = -(*(char *)((long)piVar3 + 2) == UNK_005d9a42),
                     auVar22[3] = -(*(char *)((long)piVar3 + 3) == UNK_005d9a43),
                     auVar22[4] = -((char)piVar3[1] == UNK_005d9a44),
                     auVar22[5] = -(*(char *)((long)piVar3 + 5) == UNK_005d9a45),
                     auVar22[6] = -(*(char *)((long)piVar3 + 6) == UNK_005d9a46),
                     auVar22[7] = -(*(char *)((long)piVar3 + 7) == UNK_005d9a47),
                     auVar22[8] = -((char)piVar3[2] == UNK_005d9a48),
                     auVar22[9] = -(*(char *)((long)piVar3 + 9) == UNK_005d9a49),
                     auVar22[10] = -(*(char *)((long)piVar3 + 10) == UNK_005d9a4a),
                     auVar22[0xb] = -(*(char *)((long)piVar3 + 0xb) == UNK_005d9a4b),
                     auVar22[0xc] = -((char)piVar3[3] == UNK_005d9a4c),
                     auVar22[0xd] = -(*(char *)((long)piVar3 + 0xd) == UNK_005d9a4d),
                     auVar22[0xe] = -(*(char *)((long)piVar3 + 0xe) == UNK_005d9a4e),
                     auVar22[0xf] = -(*(char *)((long)piVar3 + 0xf) == UNK_005d9a4f),
                     auVar24[0] = -(*(char *)((long)piVar3 + 3) == DAT_005d9a30),
                     auVar24[1] = -((char)piVar3[1] == UNK_005d9a31),
                     auVar24[2] = -(*(char *)((long)piVar3 + 5) == UNK_005d9a32),
                     auVar24[3] = -(*(char *)((long)piVar3 + 6) == UNK_005d9a33),
                     auVar24[4] = -(*(char *)((long)piVar3 + 7) == UNK_005d9a34),
                     auVar24[5] = -((char)piVar3[2] == UNK_005d9a35),
                     auVar24[6] = -(*(char *)((long)piVar3 + 9) == UNK_005d9a36),
                     auVar24[7] = -(*(char *)((long)piVar3 + 10) == UNK_005d9a37),
                     auVar24[8] = -(*(char *)((long)piVar3 + 0xb) == UNK_005d9a38),
                     auVar24[9] = -((char)piVar3[3] == UNK_005d9a39),
                     auVar24[10] = -(*(char *)((long)piVar3 + 0xd) == UNK_005d9a3a),
                     auVar24[0xb] = -(*(char *)((long)piVar3 + 0xe) == UNK_005d9a3b),
                     auVar24[0xc] = -(*(char *)((long)piVar3 + 0xf) == UNK_005d9a3c),
                     auVar24[0xd] = -((char)piVar3[4] == UNK_005d9a3d),
                     auVar24[0xe] = -(*(char *)((long)piVar3 + 0x11) == UNK_005d9a3e),
                     auVar24[0xf] = -(*(char *)((long)piVar3 + 0x12) == UNK_005d9a3f),
                     auVar24 = auVar24 & auVar22,
                     (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) != 0xffff)) {
LAB_0018cfc4:
                    ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018cfd1 to 0018cfe4 has its CatchHandler @ 0018d920 */
                    std::__cxx11::string::string<std::allocator<char>>
                              ((string *)local_158,(string *)"Unknown flag");
                    local_160 = (undefined8 *)*puVar18;
                    /* try { // try from 0018cff0 to 0018d01e has its CatchHandler @ 0018d8fb */
                    (anonymous_namespace)::parse_error::parse_error
                              (ppVar19,local_158,(long *)&local_160);
                    /* WARNING: Subroutine does not return */
                    __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                                (anonymous_namespace)::parse_error::~parse_error);
                  }
                  uVar21 = 1;
                }
                if (*(ulong *)(puVar18[1] + 8) == 4) {
                  local_98 = local_98 | uVar21;
                }
              }
              bVar10 = true;
            }
          }
          else if (lVar1 == 6) {
            if ((short)piVar3[1] == 0x726f && *piVar3 == 0x646e6556) {
              if (bVar7) {
                ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018d17c to 0018d18f has its CatchHandler @ 0018d8a0 */
                std::__cxx11::string::string<std::allocator<char>>
                          ((string *)local_158,(string *)"Only one \'Vendor\' key allowed");
                local_160 = (undefined8 *)*puVar17;
                    /* try { // try from 0018d19a to 0018d1c3 has its CatchHandler @ 0018d89e */
                (anonymous_namespace)::parse_error::parse_error
                          (ppVar19,local_158,(long *)&local_160);
                    /* WARNING: Subroutine does not return */
                __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                            (anonymous_namespace)::parse_error::~parse_error);
              }
              local_160 = (undefined8 *)puVar17[1];
              if (local_160[1] != 0) {
                ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018d223 to 0018d236 has its CatchHandler @ 0018d892 */
                std::__cxx11::string::string<std::allocator<char>>
                          ((string *)local_158,(string *)"Expect a String here");
                    /* try { // try from 0018d239 to 0018d262 has its CatchHandler @ 0018d890 */
                (anonymous_namespace)::parse_error::parse_error
                          (ppVar19,local_158,(long *)&local_160);
                    /* WARNING: Subroutine does not return */
                __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                            (anonymous_namespace)::parse_error::~parse_error);
              }
              puVar18 = (undefined8 *)json_value_as_string(local_160);
              std::__cxx11::string::_M_replace
                        ((string *)&local_f8,0,local_f0,(undefined1 *)*puVar18,puVar18[1]);
              bVar7 = true;
            }
            else if ((short)piVar3[1] == 0x6c69 && *piVar3 == 0x614d2d45) {
              if (bVar9) {
                ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018d321 to 0018d334 has its CatchHandler @ 0018d87d */
                std::__cxx11::string::string<std::allocator<char>>
                          ((string *)local_158,(string *)"Only one \'E-Mail\' key allowed");
                local_160 = (undefined8 *)*puVar17;
                    /* try { // try from 0018d33f to 0018d368 has its CatchHandler @ 0018d87b */
                (anonymous_namespace)::parse_error::parse_error
                          (ppVar19,local_158,(long *)&local_160);
                    /* WARNING: Subroutine does not return */
                __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                            (anonymous_namespace)::parse_error::~parse_error);
              }
              local_160 = (undefined8 *)puVar17[1];
              if (local_160[1] != 0) {
                ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018d376 to 0018d389 has its CatchHandler @ 0018d876 */
                std::__cxx11::string::string<std::allocator<char>>
                          ((string *)local_158,(string *)"Expect a String here");
                    /* try { // try from 0018d38c to 0018d3b5 has its CatchHandler @ 0018d874 */
                (anonymous_namespace)::parse_error::parse_error
                          (ppVar19,local_158,(long *)&local_160);
                    /* WARNING: Subroutine does not return */
                __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                            (anonymous_namespace)::parse_error::~parse_error);
              }
                    /* try { // try from 0018c930 to 0018cb62 has its CatchHandler @ 0018d8e5 */
              puVar18 = (undefined8 *)json_value_as_string(local_160);
              std::__cxx11::string::_M_replace
                        ((string *)&local_b8,0,local_b0,(undefined1 *)*puVar18,puVar18[1]);
              bVar9 = true;
            }
          }
          puVar17 = (undefined8 *)puVar17[2];
        } while (puVar17 != (undefined8 *)0x0);
        if (!bVar7) goto LAB_0018d0de;
        if (!bVar8) {
          plVar20 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0018d51e to 0018d52c has its CatchHandler @ 0018d856 */
          std::logic_error::logic_error(plVar20,"Missing \'URL\' in Factory Info");
                    /* try { // try from 0018d52d to 0018d547 has its CatchHandler @ 0018d8db */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(plVar20,PTR_typeinfo_00715f68,PTR__logic_error_00715e90);
        }
        if (!bVar9) {
          plVar20 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0018d58c to 0018d59a has its CatchHandler @ 0018d852 */
          std::logic_error::logic_error(plVar20,"Missing \'EMail\' in Factory Info");
                    /* try { // try from 0018d59b to 0018d5b5 has its CatchHandler @ 0018d8db */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(plVar20,PTR_typeinfo_00715f68,PTR__logic_error_00715e90);
        }
        if (!bVar10) {
          plVar20 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0018d555 to 0018d563 has its CatchHandler @ 0018d854 */
          std::logic_error::logic_error(plVar20,"Missing \'Flags\' in Factory Info");
                    /* try { // try from 0018d564 to 0018d57e has its CatchHandler @ 0018d8db */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(plVar20,PTR_typeinfo_00715f68,PTR__logic_error_00715e90);
        }
        bVar7 = true;
        break;
      case 0xd:
        if (*(long *)((long)plVar2 + 5) != 0x7974696c69626974 || *plVar2 != 0x62697461706d6f43)
        goto switchD_0018c7f8_caseD_5;
        if (bVar5) {
          ppVar19 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0018d3c3 to 0018d3d6 has its CatchHandler @ 0018d86f */
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)local_158,(string *)"Only one \'Compatibility\' key allowed");
          local_160 = (undefined8 *)*puVar16;
                    /* try { // try from 0018d3e1 to 0018d40a has its CatchHandler @ 0018d86d */
          (anonymous_namespace)::parse_error::parse_error(ppVar19,local_158,(long *)&local_160);
                    /* WARNING: Subroutine does not return */
          __cxa_throw(ppVar19,&(anonymous_namespace)::parse_error::typeinfo,
                      (anonymous_namespace)::parse_error::~parse_error);
        }
        local_158[0] = puVar16[1];
                    /* try { // try from 0018cbad to 0018cc97 has its CatchHandler @ 0018d8e3 */
        (anonymous_namespace)::ModuleInfoJsonParser::parseCompatibility
                  ((ModuleInfoJsonParser *)local_138,local_158);
        bVar5 = true;
      }
      puVar16 = (undefined8 *)puVar16[2];
    } while (puVar16 != (undefined8 *)0x0);
    if (bVar11) {
      if (!bVar12) {
        plVar20 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0018d74f to 0018d75d has its CatchHandler @ 0018d7f9 */
        std::logic_error::logic_error(plVar20,"\'Version\' key missing");
                    /* try { // try from 0018d75e to 0018d778 has its CatchHandler @ 0018d8db */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(plVar20,PTR_typeinfo_00715f68,PTR__logic_error_00715e90);
      }
      if (!bVar7) {
        plVar20 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0018d786 to 0018d794 has its CatchHandler @ 0018d7f4 */
        std::logic_error::logic_error(plVar20,"\'Factory Info\' key missing");
                    /* try { // try from 0018d795 to 0018d7af has its CatchHandler @ 0018d8db */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(plVar20,PTR_typeinfo_00715f68,PTR__logic_error_00715e90);
      }
      if (!bVar13) {
        plVar20 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0018d7bd to 0018d7cb has its CatchHandler @ 0018d7ef */
        std::logic_error::logic_error(plVar20,"\'Classes\' key missing");
                    /* try { // try from 0018d7cc to 0018d7e6 has its CatchHandler @ 0018d8db */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(plVar20,PTR_typeinfo_00715f68,PTR__logic_error_00715e90);
      }
      *param_1 = param_1 + 2;
      uVar14 = local_138._8_8_;
      if ((undefined1 *)local_138._0_8_ == local_128) {
        memcpy(param_1 + 2,local_128,local_138._8_8_ + 1);
      }
      else {
        *param_1 = local_138._0_8_;
        param_1[2] = local_128._0_8_;
      }
      lVar1 = local_110;
      param_1[1] = uVar14;
      local_138._8_8_ = 0;
      local_138._0_8_ = local_128;
      auVar6[0xf] = 0;
      auVar6._0_15_ = local_128._1_15_;
      local_128 = auVar6 << 8;
      param_1[4] = param_1 + 6;
      if (local_118 == &local_108) {
        memcpy(param_1 + 6,&local_108,local_110 + 1);
      }
      else {
        param_1[4] = local_118;
        param_1[6] = CONCAT71(uStack_107,local_108);
      }
      lVar15 = local_f0;
      param_1[5] = lVar1;
      local_110 = 0;
      local_108 = 0;
      param_1[8] = param_1 + 10;
      local_118 = &local_108;
      if (local_f8 == &local_e8) {
        memcpy(param_1 + 10,&local_e8,local_f0 + 1);
      }
      else {
        param_1[8] = local_f8;
        param_1[10] = CONCAT71(uStack_e7,local_e8);
      }
      lVar1 = local_d0;
      param_1[9] = lVar15;
      local_f0 = 0;
      local_e8 = 0;
      param_1[0xc] = param_1 + 0xe;
      local_f8 = &local_e8;
      if (local_d8 == &local_c8) {
        memcpy(param_1 + 0xe,&local_c8,local_d0 + 1);
      }
      else {
        param_1[0xc] = local_d8;
        param_1[0xe] = CONCAT71(uStack_c7,local_c8);
      }
      lVar15 = local_b0;
      param_1[0xd] = lVar1;
      local_d0 = 0;
      local_c8 = 0;
      param_1[0x10] = param_1 + 0x12;
      local_d8 = &local_c8;
      if (local_b8 == &local_a8) {
        memcpy(param_1 + 0x12,&local_a8,local_b0 + 1);
      }
      else {
        param_1[0x10] = local_b8;
        param_1[0x12] = CONCAT71(uStack_a7,local_a8);
      }
      param_1[0x11] = lVar15;
      local_b0 = 0;
      local_a8 = 0;
      *(uint *)(param_1 + 0x14) = local_98;
      param_1[0x15] = local_90._0_8_;
      param_1[0x16] = local_90._8_8_;
      param_1[0x17] = local_80;
      local_90 = (undefined1  [16])0x0;
      local_80 = 0;
      param_1[0x18] = uStack_78;
      param_1[0x19] = local_70;
      param_1[0x1a] = uStack_68;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      *(undefined1 *)(param_1 + 0x1b) = 1;
      local_b8 = &local_a8;
      ModuleInfo::~ModuleInfo((ModuleInfo *)local_138);
      if (local_58 == (long *)0x0) {
        return param_1;
      }
      free(local_58);
      return param_1;
    }
  }
  plVar20 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0018d6c4 to 0018d6d2 has its CatchHandler @ 0018d83b */
  std::logic_error::logic_error(plVar20,"\'Name\' key missing");
                    /* try { // try from 0018d6d3 to 0018d6ed has its CatchHandler @ 0018d8db */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar20,PTR_typeinfo_00715f68,PTR__logic_error_00715e90);
}


