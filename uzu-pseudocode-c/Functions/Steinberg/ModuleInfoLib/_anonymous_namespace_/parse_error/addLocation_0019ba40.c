// Function : addLocation
// Namespace: Steinberg:ModuleInfoLib:_anonymous_namespace_:parse_error
// Entry    : 0019ba40
// Prototype: undefined addLocation(parse_error * this, ulong * param_1)
// Body     : 0019ba40 - 0019c042


/* Steinberg::ModuleInfoLib::(anonymous namespace)::parse_error::addLocation(JSON::SourceLocation
   const&) */

void __thiscall
Steinberg::ModuleInfoLib::(anonymous_namespace)::parse_error::addLocation
          (parse_error *this,ulong *param_1)

{
  string *this_00;
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  parse_error *ppVar5;
  ulong uVar6;
  char cVar7;
  ulong uVar8;
  char *local_60;
  uint local_58;
  undefined4 uStack_54;
  char local_50 [16];
  parse_error *local_40;
  ulong *local_38;
  
  ppVar5 = *(parse_error **)(this + 8);
  uVar8 = *(ulong *)(this + 0x10);
  local_40 = this + 0x18;
  uVar6 = 0xf;
  if (ppVar5 != local_40) {
    uVar6 = *(ulong *)(this + 0x18);
  }
  this_00 = (string *)(this + 8);
  if (uVar6 < uVar8 + 1) {
    std::__cxx11::string::_M_mutate(this_00,uVar8,0,(undefined1 *)0x0,1);
    ppVar5 = *(parse_error **)this_00;
  }
  ppVar5[uVar8] = (parse_error)0xa;
  *(ulong *)(this + 0x10) = uVar8 + 1;
  *(undefined1 *)(*(long *)(this + 8) + 1 + uVar8) = 0;
  if (*(long *)(this + 0x10) + 0xc000000000000007U < 7) goto LAB_0019c013;
  std::__cxx11::string::_M_append((char *)this_00,0x5db821);
  uVar8 = *param_1;
  cVar7 = '\x01';
  if (9 < uVar8) {
    uVar6 = uVar8;
    cVar4 = '\x04';
    do {
      cVar7 = cVar4;
      if (uVar6 < 100) {
        cVar7 = cVar7 + -2;
        goto LAB_0019bb4e;
      }
      if (uVar6 < 1000) {
        cVar7 = cVar7 + -1;
        goto LAB_0019bb4e;
      }
      if (uVar6 < 10000) goto LAB_0019bb4e;
      bVar1 = 99999 < uVar6;
      uVar6 = uVar6 / 10000;
      cVar4 = cVar7 + '\x04';
    } while (bVar1);
    cVar7 = cVar7 + '\x01';
  }
LAB_0019bb4e:
  local_60 = local_50;
  std::__cxx11::string::_M_construct((ulong)&local_60,cVar7);
  pcVar3 = local_60;
  local_38 = param_1;
  if (uVar8 < 100) {
    if (uVar8 < 10) goto LAB_0019bbf9;
LAB_0019bbd8:
    cVar7 = PTR___digits_00715d40[uVar8 * 2];
    local_60[1] = PTR___digits_00715d40[uVar8 * 2 + 1];
  }
  else {
    uVar6 = uVar8;
    uVar2 = local_58;
    do {
      uVar8 = uVar6 / 100;
      cVar7 = PTR___digits_00715d40[(uVar6 % 100) * 2];
      local_60[uVar2 - 1] = PTR___digits_00715d40[(uVar6 % 100) * 2 + 1];
      local_60[uVar2 - 2] = cVar7;
      bVar1 = 9999 < uVar6;
      uVar6 = uVar8;
      uVar2 = uVar2 - 2;
    } while (bVar1);
    if (9 < uVar8) goto LAB_0019bbd8;
LAB_0019bbf9:
    cVar7 = (char)uVar8 + '0';
  }
  *pcVar3 = cVar7;
  if (0x3fffffffffffffffU - *(long *)(this + 0x10) < CONCAT44(uStack_54,local_58)) {
                    /* try { // try from 0019c01f to 0019c02a has its CatchHandler @ 0019c05f */
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::append");
  }
                    /* try { // try from 0019bc25 to 0019bc2c has its CatchHandler @ 0019c05f */
  std::__cxx11::string::_M_append((char *)this_00,(ulong)local_60);
  if (local_60 != local_50) {
    operator_delete(local_60);
  }
  ppVar5 = *(parse_error **)(this + 8);
  uVar8 = *(ulong *)(this + 0x10);
  uVar6 = 0xf;
  if (ppVar5 != local_40) {
    uVar6 = *(ulong *)(this + 0x18);
  }
  if (uVar6 < uVar8 + 1) {
    std::__cxx11::string::_M_mutate(this_00,uVar8,0,(undefined1 *)0x0,1);
    ppVar5 = *(parse_error **)this_00;
  }
  ppVar5[uVar8] = (parse_error)0xa;
  *(ulong *)(this + 0x10) = uVar8 + 1;
  *(undefined1 *)(*(long *)(this + 8) + 1 + uVar8) = 0;
  if (*(long *)(this + 0x10) + 0xc000000000000005U < 5) goto LAB_0019c013;
  std::__cxx11::string::_M_append((char *)this_00,0x5db829);
  uVar8 = local_38[1];
  cVar7 = '\x01';
  if (9 < uVar8) {
    uVar6 = uVar8;
    cVar4 = '\x04';
    do {
      cVar7 = cVar4;
      if (uVar6 < 100) {
        cVar7 = cVar7 + -2;
        goto LAB_0019bd1e;
      }
      if (uVar6 < 1000) {
        cVar7 = cVar7 + -1;
        goto LAB_0019bd1e;
      }
      if (uVar6 < 10000) goto LAB_0019bd1e;
      bVar1 = 99999 < uVar6;
      uVar6 = uVar6 / 10000;
      cVar4 = cVar7 + '\x04';
    } while (bVar1);
    cVar7 = cVar7 + '\x01';
  }
LAB_0019bd1e:
  local_60 = local_50;
  std::__cxx11::string::_M_construct((ulong)&local_60,cVar7);
  pcVar3 = local_60;
  if (uVar8 < 100) {
    if (uVar8 < 10) goto LAB_0019bdbf;
LAB_0019bda3:
    cVar7 = PTR___digits_00715d40[uVar8 * 2];
    local_60[1] = PTR___digits_00715d40[uVar8 * 2 + 1];
  }
  else {
    uVar6 = uVar8;
    uVar2 = local_58;
    do {
      uVar8 = uVar6 / 100;
      cVar7 = PTR___digits_00715d40[(uVar6 % 100) * 2];
      local_60[uVar2 - 1] = PTR___digits_00715d40[(uVar6 % 100) * 2 + 1];
      local_60[uVar2 - 2] = cVar7;
      bVar1 = 9999 < uVar6;
      uVar6 = uVar8;
      uVar2 = uVar2 - 2;
    } while (bVar1);
    if (9 < uVar8) goto LAB_0019bda3;
LAB_0019bdbf:
    cVar7 = (char)uVar8 + '0';
  }
  *pcVar3 = cVar7;
  if (0x3fffffffffffffffU - *(long *)(this + 0x10) < CONCAT44(uStack_54,local_58)) {
                    /* try { // try from 0019c02b to 0019c036 has its CatchHandler @ 0019c045 */
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::append");
  }
                    /* try { // try from 0019bde1 to 0019bde8 has its CatchHandler @ 0019c045 */
  std::__cxx11::string::_M_append((char *)this_00,(ulong)local_60);
  if (local_60 != local_50) {
    operator_delete(local_60);
  }
  ppVar5 = *(parse_error **)(this + 8);
  uVar8 = *(ulong *)(this + 0x10);
  uVar6 = 0xf;
  if (ppVar5 != local_40) {
    uVar6 = *(ulong *)(this + 0x18);
  }
  if (uVar6 < uVar8 + 1) {
    std::__cxx11::string::_M_mutate(this_00,uVar8,0,(undefined1 *)0x0,1);
    ppVar5 = *(parse_error **)this_00;
  }
  ppVar5[uVar8] = (parse_error)0xa;
  *(ulong *)(this + 0x10) = uVar8 + 1;
  *(undefined1 *)(*(long *)(this + 8) + 1 + uVar8) = 0;
  if ((*(ulong *)(this + 0x10) & 0xfffffffffffffffc) != 0x3ffffffffffffffc) {
    std::__cxx11::string::_M_append((char *)this_00,0x5db82f);
    uVar8 = local_38[2];
    cVar7 = '\x01';
    if (9 < uVar8) {
      uVar6 = uVar8;
      cVar4 = '\x04';
      do {
        cVar7 = cVar4;
        if (uVar6 < 100) {
          cVar7 = cVar7 + -2;
          goto LAB_0019bede;
        }
        if (uVar6 < 1000) {
          cVar7 = cVar7 + -1;
          goto LAB_0019bede;
        }
        if (uVar6 < 10000) goto LAB_0019bede;
        bVar1 = 99999 < uVar6;
        uVar6 = uVar6 / 10000;
        cVar4 = cVar7 + '\x04';
      } while (bVar1);
      cVar7 = cVar7 + '\x01';
    }
LAB_0019bede:
    local_60 = local_50;
    std::__cxx11::string::_M_construct((ulong)&local_60,cVar7);
    pcVar3 = local_60;
    if (99 < uVar8) {
      uVar6 = uVar8;
      uVar2 = local_58;
      do {
        uVar8 = uVar6 / 100;
        cVar7 = PTR___digits_00715d40[(uVar6 % 100) * 2];
        local_60[uVar2 - 1] = PTR___digits_00715d40[(uVar6 % 100) * 2 + 1];
        local_60[uVar2 - 2] = cVar7;
        bVar1 = 9999 < uVar6;
        uVar6 = uVar8;
        uVar2 = uVar2 - 2;
      } while (bVar1);
    }
    if (uVar8 < 10) {
      cVar7 = (char)uVar8 + '0';
    }
    else {
      cVar7 = PTR___digits_00715d40[uVar8 * 2];
      local_60[1] = PTR___digits_00715d40[uVar8 * 2 + 1];
    }
    *pcVar3 = cVar7;
    if (0x3fffffffffffffffU - *(long *)(this + 0x10) < CONCAT44(uStack_54,local_58)) {
                    /* try { // try from 0019c037 to 0019c042 has its CatchHandler @ 0019c043 */
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::append");
    }
                    /* try { // try from 0019bf9e to 0019bfa5 has its CatchHandler @ 0019c043 */
    std::__cxx11::string::_M_append((char *)this_00,(ulong)local_60);
    if (local_60 != local_50) {
      operator_delete(local_60);
    }
    ppVar5 = *(parse_error **)(this + 8);
    uVar8 = *(ulong *)(this + 0x10);
    uVar6 = 0xf;
    if (ppVar5 != local_40) {
      uVar6 = *(ulong *)(this + 0x18);
    }
    if (uVar6 < uVar8 + 1) {
      std::__cxx11::string::_M_mutate(this_00,uVar8,0,(undefined1 *)0x0,1);
      ppVar5 = *(parse_error **)this_00;
    }
    ppVar5[uVar8] = (parse_error)0xa;
    *(ulong *)(this + 0x10) = uVar8 + 1;
    *(undefined1 *)(*(long *)(this + 8) + 1 + uVar8) = 0;
    return;
  }
LAB_0019c013:
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("basic_string::append");
}


