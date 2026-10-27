// Function : parseClasses
// Namespace: Steinberg:ModuleInfoLib:_anonymous_namespace_:ModuleInfoJsonParser
// Entry    : 00199b60
// Prototype: undefined parseClasses(ModuleInfoJsonParser * this, long * param_1)
// Body     : 00199b60 - 0019b794


/* Steinberg::ModuleInfoLib::(anonymous namespace)::ModuleInfoJsonParser::parseClasses(JSON::Value
   const&) */

void __thiscall
Steinberg::ModuleInfoLib::(anonymous_namespace)::ModuleInfoJsonParser::parseClasses
          (ModuleInfoJsonParser *this,long *param_1)

{
  char *pcVar1;
  char cVar2;
  size_t __n;
  undefined1 *__src;
  undefined8 ***__n_00;
  int *__s1;
  long lVar3;
  ClassInfo *pCVar4;
  undefined1 auVar5 [16];
  ulong **ppuVar6;
  long lVar7;
  ulong *puVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong *__dest;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  parse_error *ppVar18;
  byte bVar19;
  char *pcVar20;
  ulong uVar21;
  char *pcVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar23 [16];
  char ***local_1b8;
  ulong **local_1b0;
  ulong **local_1a8;
  undefined1 local_1a0;
  undefined7 uStack_19f;
  uint local_18c;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined1 local_178;
  undefined8 ***local_170;
  undefined1 *local_168;
  undefined8 *local_150;
  undefined8 *local_140;
  ModuleInfoJsonParser *local_138;
  undefined1 *local_130;
  long local_128;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined1 *local_110;
  long local_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined1 *local_f0;
  long local_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined1 *local_d0;
  long local_c8;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined1 *local_b0;
  long local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined1 *local_90;
  long local_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  ulong *puStack_68;
  ulong *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  ModuleInfoJsonParser *local_38;
  
  local_138 = this;
  if (((undefined8 *)*param_1)[1] != 3) {
    ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019add3 to 0019ade9 has its CatchHandler @ 0019b909 */
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&local_130,(string *)"Expect Classes Array");
                    /* try { // try from 0019aded to 0019ae18 has its CatchHandler @ 0019b8e2 */
    parse_error::parse_error(ppVar18,&local_130,param_1);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
  }
  plVar11 = (long *)json_value_as_array((undefined8 *)*param_1);
  local_150 = (undefined8 *)*plVar11;
  if (local_150 != (undefined8 *)0x0) {
    local_38 = local_138 + 0xa8;
    do {
      if (((undefined8 *)*local_150)[1] != 2) {
        ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019ae2b to 0019ae43 has its CatchHandler @ 0019b8e0 */
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_130,(string *)"Expect Class Object");
        local_1b8 = (char ***)*local_150;
                    /* try { // try from 0019ae53 to 0019ae7d has its CatchHandler @ 0019b8b9 */
        parse_error::parse_error(ppVar18,&local_130,(long *)&local_1b8);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
      }
      puVar12 = (undefined8 *)json_value_as_object((undefined8 *)*local_150);
      local_128 = 0;
      local_120 = 0;
      local_110 = &local_100;
      local_108 = 0;
      local_100 = 0;
      local_f0 = &local_e0;
      local_e8 = 0;
      local_e0 = 0;
      local_d0 = &local_c0;
      local_c8 = 0;
      local_c0 = 0;
      local_b0 = &local_a0;
      local_a8 = 0;
      local_a0 = 0;
      local_90 = &local_80;
      local_88 = 0;
      local_80 = 0;
      local_50 = (undefined8 *)0x0;
      puStack_48 = (undefined8 *)0x0;
      local_60 = (ulong *)0x0;
      uStack_58 = 0;
      local_70 = 0;
      puStack_68 = (ulong *)0x0;
      local_40 = 0x7fffffff;
      puVar12 = (undefined8 *)*puVar12;
      local_130 = &local_120;
      if (puVar12 == (undefined8 *)0x0) {
LAB_0019ad65:
        ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019ad72 to 0019ad85 has its CatchHandler @ 0019b920 */
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_1b8,(string *)"\'CID\' key missing");
        local_170 = (undefined8 ***)*local_150;
                    /* try { // try from 0019ad96 to 0019adbd has its CatchHandler @ 0019b91e */
        parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
      }
      local_18c = 0;
      do {
        __n = ((undefined8 *)*puVar12)[1];
        local_188 = puVar12;
        if (0xb < __n - 3) goto switchD_00199d41_caseD_5;
        plVar11 = *(long **)*puVar12;
        switch(__n) {
        case 3:
          if (*(char *)((long)plVar11 + 2) != 'D' || (short)*plVar11 != 0x4943)
          goto switchD_00199d41_caseD_5;
          if ((local_18c & 1) != 0) {
            ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b100 to 0019b113 has its CatchHandler @ 0019b86e */
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&local_1b8,(string *)"Only one \'CID\' key allowed");
            local_170 = (undefined8 ***)*local_188;
                    /* try { // try from 0019b124 to 0019b14b has its CatchHandler @ 0019b869 */
            parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
          }
          local_170 = (undefined8 ***)puVar12[1];
          if (local_170[1] != (undefined8 **)0x0) {
            ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b0b4 to 0019b0c7 has its CatchHandler @ 0019b878 */
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&local_1b8,(string *)"Expect a String here");
                    /* try { // try from 0019b0cb to 0019b0f2 has its CatchHandler @ 0019b873 */
            parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
          }
                    /* try { // try from 00199d7f to 00199da1 has its CatchHandler @ 0019b92c */
          puVar12 = (undefined8 *)json_value_as_string(local_170);
          std::__cxx11::string::_M_replace
                    ((string *)&local_130,0,local_128,(undefined1 *)*puVar12,puVar12[1]);
          uVar9 = 1;
          break;
        case 4:
          iVar10 = bcmp(plVar11,"Name",__n);
          if (iVar10 != 0) goto switchD_00199d41_caseD_5;
          if ((local_18c & 4) != 0) {
            ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b1aa to 0019b1bd has its CatchHandler @ 0019b85a */
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&local_1b8,(string *)"Only one \'Name\' key allowed");
            local_170 = (undefined8 ***)*local_188;
                    /* try { // try from 0019b1ce to 0019b1f5 has its CatchHandler @ 0019b855 */
            parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
          }
          local_170 = (undefined8 ***)local_188[1];
          if (local_170[1] != (undefined8 **)0x0) {
            ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b15e to 0019b171 has its CatchHandler @ 0019b864 */
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&local_1b8,(string *)"Expect a String here");
                    /* try { // try from 0019b175 to 0019b19c has its CatchHandler @ 0019b85f */
            parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
          }
                    /* try { // try from 0019a397 to 0019a3b9 has its CatchHandler @ 0019b92a */
          puVar12 = (undefined8 *)json_value_as_string(local_170);
          std::__cxx11::string::_M_replace
                    ((string *)&local_f0,0,local_e8,(undefined1 *)*puVar12,puVar12[1]);
          uVar9 = 4;
          break;
        case 6:
          iVar10 = bcmp(plVar11,"Vendor",__n);
          if (iVar10 != 0) goto switchD_00199d41_caseD_5;
          if ((local_18c & 8) != 0) {
            ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b208 to 0019b21b has its CatchHandler @ 0019b850 */
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&local_1b8,(string *)"Only one \'Vendor\' key allowed");
            local_170 = (undefined8 ***)*local_188;
                    /* try { // try from 0019b22c to 0019b253 has its CatchHandler @ 0019b84b */
            parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
          }
          local_1b8 = (char ***)local_188[1];
                    /* try { // try from 0019a1d5 to 0019a1f9 has its CatchHandler @ 0019b926 */
          auVar23 = getText((long *)&local_1b8);
          std::__cxx11::string::_M_replace
                    ((string *)&local_d0,0,local_c8,auVar23._8_8_,auVar23._0_8_);
          uVar9 = 8;
          break;
        case 7:
          iVar10 = bcmp(plVar11,"Version",__n);
          if (iVar10 != 0) goto switchD_00199d41_caseD_5;
          if ((local_18c & 0x10) != 0) {
            ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b266 to 0019b279 has its CatchHandler @ 0019b846 */
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&local_1b8,(string *)"Only one \'Version\' key allowed");
            local_170 = (undefined8 ***)*local_188;
                    /* try { // try from 0019b28a to 0019b2b1 has its CatchHandler @ 0019b841 */
            parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
          }
          local_1b8 = (char ***)local_188[1];
                    /* try { // try from 0019a32d to 0019a351 has its CatchHandler @ 0019b92e */
          auVar23 = getText((long *)&local_1b8);
          std::__cxx11::string::_M_replace
                    ((string *)&local_b0,0,local_a8,auVar23._8_8_,auVar23._0_8_);
          uVar9 = 0x10;
          break;
        case 8:
          iVar10 = bcmp(plVar11,"Category",__n);
          if (iVar10 != 0) goto switchD_00199d41_caseD_5;
          if ((local_18c & 2) != 0) {
            ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b056 to 0019b069 has its CatchHandler @ 0019b882 */
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&local_1b8,(string *)"Only one \'Category\' key allowed");
            local_170 = (undefined8 ***)*local_188;
                    /* try { // try from 0019b07a to 0019b0a1 has its CatchHandler @ 0019b87d */
            parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
          }
          local_170 = (undefined8 ***)local_188[1];
          if (local_170[1] != (undefined8 **)0x0) {
            ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019afab to 0019afbe has its CatchHandler @ 0019b896 */
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&local_1b8,(string *)"Expect a String here");
                    /* try { // try from 0019afc2 to 0019afe9 has its CatchHandler @ 0019b891 */
            parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
          }
                    /* try { // try from 00199f32 to 00199f54 has its CatchHandler @ 0019b928 */
          puVar12 = (undefined8 *)json_value_as_string(local_170);
          std::__cxx11::string::_M_replace
                    ((string *)&local_110,0,local_108,(undefined1 *)*puVar12,puVar12[1]);
          uVar9 = 2;
          break;
        case 9:
          iVar10 = bcmp(plVar11,"Snapshots",__n);
          if (iVar10 == 0) {
            if ((local_18c & 0x100) != 0) {
              ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b2c4 to 0019b2d7 has its CatchHandler @ 0019b83c */
              std::__cxx11::string::string<std::allocator<char>>
                        ((string *)&local_1b8,(string *)"Only one \'Snapshots\' key allowed");
              local_170 = (undefined8 ***)*local_188;
                    /* try { // try from 0019b2e8 to 0019b30f has its CatchHandler @ 0019b837 */
              parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
              __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
            }
            if (((undefined8 *)local_188[1])[1] != 3) {
              ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019aff7 to 0019b00a has its CatchHandler @ 0019b88c */
              std::__cxx11::string::string<std::allocator<char>>
                        ((string *)&local_1b8,(string *)"Expect Array here");
              local_170 = (undefined8 ***)local_188[1];
                    /* try { // try from 0019b01c to 0019b043 has its CatchHandler @ 0019b887 */
              parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
              __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
            }
                    /* try { // try from 00199f98 to 00199f9c has its CatchHandler @ 0019b922 */
            puVar12 = (undefined8 *)json_value_as_array((undefined8 *)local_188[1]);
            puVar12 = (undefined8 *)*puVar12;
joined_r0x00199fa3:
            if (puVar12 != (undefined8 *)0x0) {
              do {
                if (((undefined8 *)*puVar12)[1] != 2) {
                  ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019acaf to 0019acc2 has its CatchHandler @ 0019b93d */
                  std::__cxx11::string::string<std::allocator<char>>
                            ((string *)&local_1b8,(string *)"Expect Object here");
                  local_170 = (undefined8 ***)*puVar12;
                    /* try { // try from 0019acce to 0019acf5 has its CatchHandler @ 0019b93b */
                  parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
                  __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
                }
                    /* try { // try from 00199ff3 to 00199ff7 has its CatchHandler @ 0019b999 */
                puVar13 = (undefined8 *)json_value_as_object((undefined8 *)*puVar12);
                local_1b8 = (char ***)0x3ff0000000000000;
                local_1b0 = (ulong **)&local_1a0;
                local_1a8 = (ulong **)0x0;
                local_1a0 = 0;
                puVar13 = (undefined8 *)*puVar13;
                if (puVar13 == (undefined8 *)0x0) {
LAB_0019abf9:
                  ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019ac06 to 0019ac1b has its CatchHandler @ 0019b98c */
                  std::__cxx11::string::string<std::allocator<char>>
                            ((string *)&local_170,(string *)"Missing Snapshot keys");
                  local_180 = (undefined8 *)*puVar12;
                    /* try { // try from 0019ac27 to 0019ac50 has its CatchHandler @ 0019b96e */
                  parse_error::parse_error(ppVar18,&local_170,(long *)&local_180);
                    /* WARNING: Subroutine does not return */
                  __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
                }
                do {
                  __s1 = *(int **)*puVar13;
                  lVar3 = ((undefined8 *)*puVar13)[1];
                  if (lVar3 == 0xc) {
                    iVar10 = bcmp(__s1,"Scale Factor",0xc);
                    if (iVar10 != 0) goto LAB_0019aaab;
                    local_140 = (undefined8 *)puVar13[1];
                    if (local_140[1] != 1) {
                      ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019abb7 to 0019abcc has its CatchHandler @ 0019b9a5 */
                      std::__cxx11::string::string<std::allocator<char>>
                                ((string *)&local_170,(string *)"Expect a Number here");
                    /* try { // try from 0019abcf to 0019abf8 has its CatchHandler @ 0019b9a3 */
                      parse_error::parse_error(ppVar18,&local_170,(long *)&local_140);
                    /* WARNING: Subroutine does not return */
                      __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
                    }
                    /* try { // try from 0019a0c4 to 0019a0da has its CatchHandler @ 0019b9d9 */
                    local_180 = (undefined8 *)json_value_as_number(local_140);
                    local_178 = 1;
                    uVar15 = JSON::Number::getDouble((Number *)&local_180);
                    if ((char)uVar15 == '\0') {
                      ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019ab14 to 0019ab29 has its CatchHandler @ 0019b9ad */
                      std::__cxx11::string::string<std::allocator<char>>
                                ((string *)&local_170,(string *)"Expect a Double here");
                    /* try { // try from 0019ab2c to 0019ab55 has its CatchHandler @ 0019b9ab */
                      parse_error::parse_error(ppVar18,&local_170,(long *)&local_140);
                    /* WARNING: Subroutine does not return */
                      __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
                    }
                    local_1b8 = (char ***)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
                  }
                  else {
                    if ((lVar3 != 4) || (*__s1 != 0x68746150)) {
LAB_0019aaab:
                      ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019aab8 to 0019aacd has its CatchHandler @ 0019b9cc */
                      std::__cxx11::string::string<std::allocator<char>>
                                ((string *)&local_170,(string *)"Unexpected key");
                      local_180 = (undefined8 *)*puVar13;
                    /* try { // try from 0019aad8 to 0019ab01 has its CatchHandler @ 0019b9af */
                      parse_error::parse_error(ppVar18,&local_170,(long *)&local_180);
                    /* WARNING: Subroutine does not return */
                      __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
                    }
                    local_180 = (undefined8 *)puVar13[1];
                    if (local_180[1] != 0) {
                      ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019ab68 to 0019ab7d has its CatchHandler @ 0019b9a9 */
                      std::__cxx11::string::string<std::allocator<char>>
                                ((string *)&local_170,(string *)"Expect a String here");
                    /* try { // try from 0019ab80 to 0019aba9 has its CatchHandler @ 0019b9a7 */
                      parse_error::parse_error(ppVar18,&local_170,(long *)&local_180);
                    /* WARNING: Subroutine does not return */
                      __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
                    }
                    /* try { // try from 0019a077 to 0019a093 has its CatchHandler @ 0019b9db */
                    puVar14 = (undefined8 *)json_value_as_string(local_180);
                    std::__cxx11::string::_M_replace
                              ((string *)&local_1b0,0,(long)local_1a8,(undefined1 *)*puVar14,
                               puVar14[1]);
                  }
                  puVar14 = local_50;
                  ppuVar6 = local_1a8;
                  puVar13 = (undefined8 *)puVar13[2];
                } while (puVar13 != (undefined8 *)0x0);
                if ((((double)local_1b8 == DAT_005db340) &&
                    (!NAN((double)local_1b8) && !NAN(DAT_005db340))) || (local_1a8 == (ulong **)0x0)
                   ) goto LAB_0019abf9;
                if (local_50 == puStack_48) goto LAB_0019a160;
                *local_50 = local_1b8;
                local_50[1] = local_50 + 3;
                if (local_1b0 == (ulong **)&local_1a0) {
                  memcpy(local_50 + 3,&local_1a0,(long)local_1a8 + 1);
                }
                else {
                  local_50[1] = local_1b0;
                  local_50[3] = CONCAT71(uStack_19f,local_1a0);
                }
                puVar14[2] = ppuVar6;
                local_1a8 = (ulong **)0x0;
                local_50 = local_50 + 5;
                puVar12 = (undefined8 *)puVar12[1];
                local_1b0 = (ulong **)&local_1a0;
                if (puVar12 == (undefined8 *)0x0) break;
              } while( true );
            }
            uVar9 = 0x100;
            break;
          }
        default:
switchD_00199d41_caseD_5:
          ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019ad14 to 0019ad27 has its CatchHandler @ 0019b934 */
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_1b8,(string *)"Unexpected key");
          local_170 = (undefined8 ***)*local_188;
                    /* try { // try from 0019ad38 to 0019ad5f has its CatchHandler @ 0019b932 */
          parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
          __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
        case 10:
          iVar10 = bcmp(plVar11,"SDKVersion",__n);
          if (iVar10 != 0) goto switchD_00199d41_caseD_5;
          if ((local_18c & 0x20) != 0) {
            ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019af4d to 0019af60 has its CatchHandler @ 0019b8a0 */
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&local_1b8,(string *)"Only one \'SDKVersion\' key allowed");
            local_170 = (undefined8 ***)*local_188;
                    /* try { // try from 0019af71 to 0019af98 has its CatchHandler @ 0019b89b */
            parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
          }
          local_1b8 = (char ***)local_188[1];
                    /* try { // try from 0019a3f3 to 0019a417 has its CatchHandler @ 0019b930 */
          auVar23 = getText((long *)&local_1b8);
          std::__cxx11::string::_M_replace
                    ((string *)&local_90,0,local_88,auVar23._8_8_,auVar23._0_8_);
          uVar9 = 0x20;
          break;
        case 0xb:
          iVar10 = bcmp(plVar11,"Class Flags",__n);
          if (iVar10 == 0) {
            if ((local_18c & 0x80) != 0) {
              ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b3d1 to 0019b3e4 has its CatchHandler @ 0019b7fa */
              std::__cxx11::string::string<std::allocator<char>>
                        ((string *)&local_1b8,(string *)"Only one \'Class Flags\' key allowed");
              local_170 = (undefined8 ***)*local_188;
                    /* try { // try from 0019b3f5 to 0019b41c has its CatchHandler @ 0019b7f5 */
              parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
              __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
            }
            local_180 = (undefined8 *)local_188[1];
            if (local_180[1] != 1) {
              ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b42f to 0019b442 has its CatchHandler @ 0019b7f0 */
              std::__cxx11::string::string<std::allocator<char>>
                        ((string *)&local_1b8,(string *)"Expect a Number here");
                    /* try { // try from 0019b446 to 0019b46d has its CatchHandler @ 0019b7ee */
              parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_180);
                    /* WARNING: Subroutine does not return */
              __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
            }
                    /* try { // try from 0019a446 to 0019a44a has its CatchHandler @ 0019b832 */
            puVar12 = (undefined8 *)json_value_as_number(local_180);
            uVar21 = puVar12[1];
            if (uVar21 == 0) {
LAB_0019aa19:
              ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
              local_1b8 = (char ***)&local_1a8;
              local_170 = (undefined8 ***)0x16;
                    /* try { // try from 0019aa38 to 0019aa46 has its CatchHandler @ 0019ba02 */
              local_1b8 = (char ***)
                          std::__cxx11::string::_M_create((ulong *)&local_1b8,(ulong)&local_170);
              uVar15 = s_Expect_an_Integer_here_005dbc6c._8_8_;
              local_1a8 = (ulong **)local_170;
              *local_1b8 = (char **)s_Expect_an_Integer_here_005dbc6c._0_8_;
              local_1b8[1] = (char **)uVar15;
              builtin_strncpy((char *)((long)local_1b8 + 0xe),"ger here",8);
              local_1b0 = (ulong **)local_170;
              *(char *)((long)local_1b8 + (long)local_170) = '\0';
                    /* try { // try from 0019aa7e to 0019aaa5 has its CatchHandler @ 0019b9f4 */
              parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_180);
                    /* WARNING: Subroutine does not return */
              __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
            }
            pcVar22 = (char *)*puVar12;
            pcVar1 = pcVar22 + uVar21;
            cVar2 = *pcVar22;
            pcVar22 = pcVar22 + (cVar2 == '-');
            if (pcVar22 == pcVar1) goto LAB_0019aa19;
            iVar10 = 0x3c;
            uVar17 = 0;
            pcVar20 = pcVar22;
            do {
              bVar19 = *pcVar20 - 0x30;
              if (9 < bVar19) goto LAB_0019a534;
              if (iVar10 < 0) {
                auVar23._8_8_ = 0;
                auVar23._0_8_ = uVar17;
                uVar16 = SUB168(auVar23 * ZEXT816(10),0);
                if ((SUB168(auVar23 * ZEXT816(10),8) != 0) ||
                   (uVar17 = uVar16 + bVar19, CARRY8(uVar16,(ulong)bVar19))) goto LAB_0019aa19;
              }
              else {
                uVar17 = (ulong)bVar19 + uVar17 * 10;
              }
              pcVar20 = pcVar20 + 1;
              uVar21 = uVar21 - 1;
              iVar10 = iVar10 + -4;
            } while ((cVar2 == '-') != uVar21);
            pcVar20 = pcVar1;
LAB_0019a534:
            uVar21 = 0x8000000000000000;
            if (cVar2 != '-') {
              uVar21 = 0x7fffffffffffffff;
            }
            if ((pcVar20 == pcVar22) || (uVar21 < uVar17)) goto LAB_0019aa19;
            uVar21 = -uVar17;
            if (cVar2 != '-') {
              uVar21 = uVar17;
            }
            if (uVar21 >> 0x20 != 0) {
              ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b756 to 0019b769 has its CatchHandler @ 0019b797 */
              std::__cxx11::string::string<std::allocator<char>>
                        ((string *)&local_1b8,(string *)"Value is out of range here");
                    /* try { // try from 0019b76d to 0019b794 has its CatchHandler @ 0019b795 */
              parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_180);
                    /* WARNING: Subroutine does not return */
              __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
            }
            local_40 = CONCAT44((int)uVar21,(undefined4)local_40);
            uVar9 = 0x80;
          }
          else {
            if (*(long *)((long)plVar11 + 3) != 0x7974696c616e6964 || *plVar11 != 0x6c616e6964726143
               ) goto switchD_00199d41_caseD_5;
            if ((local_18c & 0x200) != 0) {
              ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b322 to 0019b335 has its CatchHandler @ 0019b82d */
              std::__cxx11::string::string<std::allocator<char>>
                        ((string *)&local_1b8,(string *)"Only one \'Cardinality\' key allowed");
              local_170 = (undefined8 ***)*local_188;
                    /* try { // try from 0019b346 to 0019b36d has its CatchHandler @ 0019b828 */
              parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
              __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
            }
            local_180 = (undefined8 *)local_188[1];
            if (local_180[1] != 1) {
              ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b380 to 0019b393 has its CatchHandler @ 0019b823 */
              std::__cxx11::string::string<std::allocator<char>>
                        ((string *)&local_1b8,(string *)"Expect a Number here");
                    /* try { // try from 0019b397 to 0019b3be has its CatchHandler @ 0019b7ff */
              parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_180);
                    /* WARNING: Subroutine does not return */
              __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
            }
                    /* try { // try from 0019a26c to 0019a270 has its CatchHandler @ 0019b91c */
            puVar12 = (undefined8 *)json_value_as_number(local_180);
            uVar21 = puVar12[1];
            if (uVar21 == 0) {
LAB_0019a987:
              ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
              local_1b8 = (char ***)&local_1a8;
              local_170 = (undefined8 ***)0x16;
                    /* try { // try from 0019a9a6 to 0019a9b4 has its CatchHandler @ 0019ba1b */
              local_1b8 = (char ***)
                          std::__cxx11::string::_M_create((ulong *)&local_1b8,(ulong)&local_170);
              uVar15 = s_Expect_an_Integer_here_005dbc6c._8_8_;
              local_1a8 = (ulong **)local_170;
              *local_1b8 = (char **)s_Expect_an_Integer_here_005dbc6c._0_8_;
              local_1b8[1] = (char **)uVar15;
              builtin_strncpy((char *)((long)local_1b8 + 0xe),"ger here",8);
              local_1b0 = (ulong **)local_170;
              *(char *)((long)local_1b8 + (long)local_170) = '\0';
                    /* try { // try from 0019a9ec to 0019aa13 has its CatchHandler @ 0019ba04 */
              parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_180);
                    /* WARNING: Subroutine does not return */
              __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
            }
            pcVar22 = (char *)*puVar12;
            pcVar1 = pcVar22 + uVar21;
            cVar2 = *pcVar22;
            pcVar22 = pcVar22 + (cVar2 == '-');
            if (pcVar22 == pcVar1) goto LAB_0019a987;
            iVar10 = 0x3c;
            uVar17 = 0;
            pcVar20 = pcVar22;
            do {
              bVar19 = *pcVar20 - 0x30;
              if (9 < bVar19) goto LAB_0019a4de;
              if (iVar10 < 0) {
                auVar5._8_8_ = 0;
                auVar5._0_8_ = uVar17;
                uVar16 = SUB168(auVar5 * ZEXT816(10),0);
                if ((SUB168(auVar5 * ZEXT816(10),8) != 0) ||
                   (uVar17 = uVar16 + bVar19, CARRY8(uVar16,(ulong)bVar19))) goto LAB_0019a987;
              }
              else {
                uVar17 = (ulong)bVar19 + uVar17 * 10;
              }
              pcVar20 = pcVar20 + 1;
              uVar21 = uVar21 - 1;
              iVar10 = iVar10 + -4;
            } while ((cVar2 == '-') != uVar21);
            pcVar20 = pcVar1;
LAB_0019a4de:
            uVar21 = 0x8000000000000000;
            if (cVar2 != '-') {
              uVar21 = 0x7fffffffffffffff;
            }
            if ((pcVar20 == pcVar22) || (uVar21 < uVar17)) goto LAB_0019a987;
            uVar21 = -uVar17;
            if (cVar2 != '-') {
              uVar21 = uVar17;
            }
            if ((long)(int)uVar21 != uVar21) {
              ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b70a to 0019b71d has its CatchHandler @ 0019b79e */
              std::__cxx11::string::string<std::allocator<char>>
                        ((string *)&local_1b8,(string *)"Value is out of range here");
                    /* try { // try from 0019b721 to 0019b748 has its CatchHandler @ 0019b79c */
              parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_180);
                    /* WARNING: Subroutine does not return */
              __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
            }
            local_40 = CONCAT44(local_40._4_4_,(int)uVar21);
            uVar9 = 0x200;
          }
          break;
        case 0xe:
          iVar10 = bcmp(plVar11,"Sub Categories",__n);
          if (iVar10 != 0) goto switchD_00199d41_caseD_5;
          if ((local_18c & 0x40) != 0) {
            ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019ae90 to 0019aea3 has its CatchHandler @ 0019b8b4 */
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&local_1b8,(string *)"Only one \'Sub Categories\' key allowed");
            local_170 = (undefined8 ***)*local_188;
                    /* try { // try from 0019aeb4 to 0019aedb has its CatchHandler @ 0019b8af */
            parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
          }
          if (((undefined8 *)local_188[1])[1] != 3) {
            ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019aeee to 0019af01 has its CatchHandler @ 0019b8aa */
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&local_1b8,(string *)"Expect Array here");
            local_170 = (undefined8 ***)local_188[1];
                    /* try { // try from 0019af13 to 0019af3a has its CatchHandler @ 0019b8a5 */
            parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
          }
                    /* try { // try from 00199de2 to 00199de6 has its CatchHandler @ 0019b924 */
          puVar12 = (undefined8 *)json_value_as_array((undefined8 *)local_188[1]);
          for (puVar12 = (undefined8 *)*puVar12; puVar12 != (undefined8 *)0x0;
              puVar12 = (undefined8 *)puVar12[1]) {
            while( true ) {
              local_180 = (undefined8 *)*puVar12;
              if (local_180[1] != 0) {
                ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019ac63 to 0019ac76 has its CatchHandler @ 0019b95f */
                std::__cxx11::string::string<std::allocator<char>>
                          ((string *)&local_1b8,(string *)"Expect a String here");
                    /* try { // try from 0019ac7a to 0019aca1 has its CatchHandler @ 0019b93f */
                parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_180);
                    /* WARNING: Subroutine does not return */
                __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
              }
                    /* try { // try from 00199e46 to 00199e4a has its CatchHandler @ 0019b99b */
              puVar13 = (undefined8 *)json_value_as_string(local_180);
              puVar8 = puStack_68;
              __src = (undefined1 *)*puVar13;
              __n_00 = (undefined8 ***)puVar13[1];
              local_170 = __n_00;
              local_168 = __src;
              if (puStack_68 == local_60) break;
              __dest = puStack_68 + 2;
              *puStack_68 = (ulong)__dest;
              if ((__src == (undefined1 *)0x0) && (__n_00 != (undefined8 ***)0x0)) {
                    /* try { // try from 0019acfb to 0019ad06 has its CatchHandler @ 0019b96a */
                std::__throw_logic_error("basic_string: construction from null is not valid");
                goto switchD_00199d41_caseD_5;
              }
              local_1b8 = (char ***)__n_00;
              if ((undefined8 ***)0xf < __n_00) {
                    /* try { // try from 00199e8d to 00199ee4 has its CatchHandler @ 0019b96c */
                __dest = (ulong *)std::__cxx11::string::_M_create(puStack_68,(ulong)&local_1b8);
                *puVar8 = (ulong)__dest;
                puVar8[2] = (ulong)local_1b8;
              }
              if (__n_00 != (undefined8 ***)0x0) {
                if (__n_00 == (undefined8 ***)0x1) {
                  *(undefined1 *)__dest = *__src;
                }
                else {
                  memcpy(__dest,__src,(size_t)__n_00);
                }
              }
              puVar8[1] = (ulong)local_1b8;
              *(undefined1 *)((long)local_1b8 + *puVar8) = 0;
              puStack_68 = puStack_68 + 4;
              puVar12 = (undefined8 *)puVar12[1];
              if (puVar12 == (undefined8 *)0x0) goto LAB_00199ce9;
            }
            std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
            _M_realloc_insert<std::basic_string_view<char,std::char_traits<char>>&>
                      ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)
                       &local_70,puStack_68,(ulong *)&local_170);
          }
LAB_00199ce9:
          uVar9 = 0x40;
        }
        lVar3 = local_128;
        local_18c = local_18c | uVar9;
        puVar12 = (undefined8 *)local_188[2];
      } while (puVar12 != (undefined8 *)0x0);
      if ((local_18c & 1) == 0) goto LAB_0019ad65;
      if ((local_18c & 2) == 0) {
        ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b480 to 0019b493 has its CatchHandler @ 0019b7e9 */
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_1b8,(string *)"\'Category\' key missing");
        local_170 = (undefined8 ***)*local_150;
                    /* try { // try from 0019b4a4 to 0019b4cb has its CatchHandler @ 0019b7e4 */
        parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
      }
      if ((local_18c & 4) == 0) {
        ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b4de to 0019b4f1 has its CatchHandler @ 0019b7df */
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_1b8,(string *)"\'Name\' key missing");
        local_170 = (undefined8 ***)*local_150;
                    /* try { // try from 0019b502 to 0019b529 has its CatchHandler @ 0019b7da */
        parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
      }
      if ((local_18c & 8) == 0) {
        ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b53c to 0019b54f has its CatchHandler @ 0019b7d5 */
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_1b8,(string *)"\'Vendor\' key missing");
        local_170 = (undefined8 ***)*local_150;
                    /* try { // try from 0019b560 to 0019b587 has its CatchHandler @ 0019b7d0 */
        parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
      }
      if ((local_18c & 0x10) == 0) {
        ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b59a to 0019b5ad has its CatchHandler @ 0019b7cb */
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_1b8,(string *)"\'Version\' key missing");
        local_170 = (undefined8 ***)*local_150;
                    /* try { // try from 0019b5be to 0019b5e5 has its CatchHandler @ 0019b7c6 */
        parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
      }
      if ((local_18c & 0x20) == 0) {
        ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b5f8 to 0019b60b has its CatchHandler @ 0019b7c1 */
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_1b8,(string *)"\'SDK Version\' key missing");
        local_170 = (undefined8 ***)*local_150;
                    /* try { // try from 0019b61c to 0019b643 has its CatchHandler @ 0019b7bc */
        parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
      }
      if ((local_18c & 0x80) == 0) {
        ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b656 to 0019b669 has its CatchHandler @ 0019b7b7 */
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_1b8,(string *)"\'Class Flags\' key missing");
        local_170 = (undefined8 ***)*local_150;
                    /* try { // try from 0019b67a to 0019b6a1 has its CatchHandler @ 0019b7b2 */
        parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
      }
      if ((local_18c & 0x200) == 0) {
        ppVar18 = (parse_error *)__cxa_allocate_exception(0x40);
                    /* try { // try from 0019b6b1 to 0019b6c4 has its CatchHandler @ 0019b7ad */
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_1b8,(string *)"\'Cardinality\' key missing");
        local_170 = (undefined8 ***)*local_150;
                    /* try { // try from 0019b6d5 to 0019b6fc has its CatchHandler @ 0019b7a8 */
        parse_error::parse_error(ppVar18,&local_1b8,(long *)&local_170);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(ppVar18,&parse_error::typeinfo,parse_error::~parse_error);
      }
      pCVar4 = *(ClassInfo **)(local_138 + 0xb0);
      if (pCVar4 == *(ClassInfo **)(local_138 + 0xb8)) {
                    /* try { // try from 0019a620 to 0019a63d has its CatchHandler @ 0019b7a3 */
        std::
        vector<Steinberg::ModuleInfo::ClassInfo,std::allocator<Steinberg::ModuleInfo::ClassInfo>>::
        _M_realloc_insert<Steinberg::ModuleInfo::ClassInfo>
                  ((vector<Steinberg::ModuleInfo::ClassInfo,std::allocator<Steinberg::ModuleInfo::ClassInfo>>
                    *)local_38,pCVar4,(long *)&local_130);
      }
      else {
        *(ClassInfo **)pCVar4 = pCVar4 + 0x10;
        if (local_130 == &local_120) {
          memcpy(pCVar4 + 0x10,&local_120,local_128 + 1);
        }
        else {
          *(undefined1 **)pCVar4 = local_130;
          *(ulong *)(pCVar4 + 0x10) = CONCAT71(uStack_11f,local_120);
        }
        lVar7 = local_108;
        *(long *)(pCVar4 + 8) = lVar3;
        local_128 = 0;
        local_120 = 0;
        *(ClassInfo **)(pCVar4 + 0x20) = pCVar4 + 0x30;
        local_130 = &local_120;
        if (local_110 == &local_100) {
          memcpy(pCVar4 + 0x30,&local_100,local_108 + 1);
        }
        else {
          *(undefined1 **)(pCVar4 + 0x20) = local_110;
          *(ulong *)(pCVar4 + 0x30) = CONCAT71(uStack_ff,local_100);
        }
        lVar3 = local_e8;
        *(long *)(pCVar4 + 0x28) = lVar7;
        local_108 = 0;
        local_100 = 0;
        *(ClassInfo **)(pCVar4 + 0x40) = pCVar4 + 0x50;
        local_110 = &local_100;
        if (local_f0 == &local_e0) {
          memcpy(pCVar4 + 0x50,&local_e0,local_e8 + 1);
        }
        else {
          *(undefined1 **)(pCVar4 + 0x40) = local_f0;
          *(ulong *)(pCVar4 + 0x50) = CONCAT71(uStack_df,local_e0);
        }
        lVar7 = local_c8;
        *(long *)(pCVar4 + 0x48) = lVar3;
        local_e8 = 0;
        local_e0 = 0;
        *(ClassInfo **)(pCVar4 + 0x60) = pCVar4 + 0x70;
        local_f0 = &local_e0;
        if (local_d0 == &local_c0) {
          memcpy(pCVar4 + 0x70,&local_c0,local_c8 + 1);
        }
        else {
          *(undefined1 **)(pCVar4 + 0x60) = local_d0;
          *(ulong *)(pCVar4 + 0x70) = CONCAT71(uStack_bf,local_c0);
        }
        lVar3 = local_a8;
        *(long *)(pCVar4 + 0x68) = lVar7;
        local_c8 = 0;
        local_c0 = 0;
        *(ClassInfo **)(pCVar4 + 0x80) = pCVar4 + 0x90;
        local_d0 = &local_c0;
        if (local_b0 == &local_a0) {
          memcpy(pCVar4 + 0x90,&local_a0,local_a8 + 1);
        }
        else {
          *(undefined1 **)(pCVar4 + 0x80) = local_b0;
          *(ulong *)(pCVar4 + 0x90) = CONCAT71(uStack_9f,local_a0);
        }
        lVar7 = local_88;
        *(long *)(pCVar4 + 0x88) = lVar3;
        local_a8 = 0;
        local_a0 = 0;
        *(ClassInfo **)(pCVar4 + 0xa0) = pCVar4 + 0xb0;
        local_b0 = &local_a0;
        if (local_90 == &local_80) {
          memcpy(pCVar4 + 0xb0,&local_80,local_88 + 1);
        }
        else {
          *(undefined1 **)(pCVar4 + 0xa0) = local_90;
          *(ulong *)(pCVar4 + 0xb0) = CONCAT71(uStack_7f,local_80);
        }
        *(long *)(pCVar4 + 0xa8) = lVar7;
        local_88 = 0;
        local_80 = 0;
        *(undefined8 *)(pCVar4 + 0xc0) = local_70;
        *(ulong **)(pCVar4 + 200) = puStack_68;
        *(ulong **)(pCVar4 + 0xd0) = local_60;
        local_70 = 0;
        puStack_68 = (ulong *)0x0;
        local_60 = (ulong *)0x0;
        *(undefined8 *)(pCVar4 + 0xd8) = uStack_58;
        *(undefined8 **)(pCVar4 + 0xe0) = local_50;
        *(undefined8 **)(pCVar4 + 0xe8) = puStack_48;
        uStack_58 = 0;
        local_50 = (undefined8 *)0x0;
        puStack_48 = (undefined8 *)0x0;
        *(undefined8 *)(pCVar4 + 0xf0) = local_40;
        *(long *)(local_138 + 0xb0) = *(long *)(local_138 + 0xb0) + 0xf8;
        local_90 = &local_80;
      }
      ModuleInfo::ClassInfo::~ClassInfo((ClassInfo *)&local_130);
      local_150 = (undefined8 *)local_150[1];
    } while (local_150 != (undefined8 *)0x0);
  }
  return;
LAB_0019a160:
                    /* try { // try from 0019a160 to 0019a172 has its CatchHandler @ 0019b936 */
  std::vector<Steinberg::ModuleInfo::Snapshot,std::allocator<Steinberg::ModuleInfo::Snapshot>>::
  _M_realloc_insert<Steinberg::ModuleInfo::Snapshot>
            ((vector<Steinberg::ModuleInfo::Snapshot,std::allocator<Steinberg::ModuleInfo::Snapshot>>
              *)&uStack_58,local_50,&local_1b8);
  if (local_1b0 != (ulong **)&local_1a0) {
    operator_delete(local_1b0);
  }
  puVar12 = (undefined8 *)puVar12[1];
  goto joined_r0x00199fa3;
}


