// Function : writePrograms<VST3::(anonymous_namespace)::IO::ByteOrderStream<1u>>
// Namespace: VST3:_anonymous_namespace_
// Entry    : 0019dcd0
// Prototype: Error writePrograms<VST3::(anonymous_namespace)::IO::ByteOrderStream<1u>>((anonymous_namespace) * this, long * param_1, long * param_2)
// Body     : 0019dcd0 - 0019e21d


/* VST3::(anonymous namespace)::IO::Error VST3::(anonymous
   namespace)::writePrograms<VST3::(anonymous namespace)::IO::ByteOrderStream<1u> >(VST3::(anonymous
   namespace)::IO::ByteOrderStream<1u>&, std::vector<VST3::Vst2xProgram,
   std::allocator<VST3::Vst2xProgram> > const&) */

void __thiscall
VST3::(anonymous_namespace)::writePrograms<VST3::(anonymous_namespace)::IO::ByteOrderStream<1u>>
          (_anonymous_namespace_ *this,long *param_1,long *param_2)

{
  long lVar1;
  undefined1 *__src;
  uint *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  char cVar13;
  undefined8 local_80;
  uint local_74;
  ulong *local_70;
  ulong local_68;
  ulong local_60 [2];
  _anonymous_namespace_ *local_50;
  ulong *local_48;
  long local_40;
  long *local_38;
  
  if (param_1 == param_2) {
    return;
  }
  local_50 = this;
  local_38 = param_2;
LAB_0019dcfc:
  local_80._0_4_ = 0x4b6e6343;
  local_70 = (ulong *)((ulong)local_70 & 0xffffffff00000000);
                    /* try { // try from 0019dd13 to 0019dd22 has its CatchHandler @ 0019e2b5 */
  iVar6 = (**(code **)(**(long **)this + 0x20))(*(long **)this,&local_80,4,&local_70);
  if (iVar6 != 0) {
    return;
  }
  local_70 = (ulong *)0x0;
                    /* try { // try from 0019dd3b to 0019dd42 has its CatchHandler @ 0019e2ad */
  iVar6 = (**(code **)(**(long **)this + 0x30))(*(long **)this,&local_70);
  puVar4 = local_70;
  if ((long)local_70 < 0 || iVar6 != 0) {
    return;
  }
  local_80 = (ulong)local_80._4_4_ << 0x20;
  local_70 = (ulong *)((ulong)local_70 & 0xffffffff00000000);
                    /* try { // try from 0019dd7b to 0019dd8a has its CatchHandler @ 0019e2a5 */
  iVar6 = (**(code **)(**(long **)this + 0x20))(*(long **)this,&local_80,4,&local_70);
  lVar10 = local_80;
  if (iVar6 != 0) {
    return;
  }
  local_40 = param_1[3];
  lVar1 = param_1[4];
  uVar9 = 0x50;
  if (local_40 == lVar1) {
    uVar9 = 0x78;
  }
  local_80 = CONCAT71(CONCAT61(0x43,uVar9),0x46);
  uVar3 = local_80;
  local_80._4_4_ = SUB84(lVar10,4);
  local_80._0_4_ = CONCAT13((local_40 == lVar1) * '\x03' + 'h',(int3)uVar3);
  local_70 = (ulong *)((ulong)local_70 & 0xffffffff00000000);
                    /* try { // try from 0019ddda to 0019ddec has its CatchHandler @ 0019e29d */
  iVar6 = (**(code **)(**(long **)this + 0x20))(*(long **)this,&local_80,4,&local_70);
  cVar13 = iVar6 != 0;
  if (!(bool)cVar13) {
    local_80 = CONCAT44(local_80._4_4_,0x1000000);
    local_70 = (ulong *)((ulong)local_70 & 0xffffffff00000000);
                    /* try { // try from 0019de16 to 0019de25 has its CatchHandler @ 0019e275 */
    iVar6 = (**(code **)(**(long **)local_50 + 0x20))(*(long **)local_50,&local_80,4,&local_70);
    cVar13 = true;
    if (iVar6 != 0) goto LAB_0019df23;
    local_80._0_4_ =
         CONCAT13((char)param_1[6],
                  CONCAT21(CONCAT11(*(undefined1 *)((long)param_1 + 0x31),
                                    *(undefined1 *)((long)param_1 + 0x32)),
                           *(undefined1 *)((long)param_1 + 0x33)));
    local_70 = (ulong *)((ulong)local_70 & 0xffffffff00000000);
                    /* try { // try from 0019de67 to 0019de76 has its CatchHandler @ 0019e26d */
    iVar6 = (**(code **)(**(long **)local_50 + 0x20))(*(long **)local_50,&local_80,4,&local_70);
    cVar13 = true;
    if (iVar6 != 0) goto LAB_0019df23;
    uVar7 = *(uint *)((long)param_1 + 0x34);
    local_80 = CONCAT44(local_80._4_4_,
                        uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                        uVar7 << 0x18);
    local_70 = (ulong *)((ulong)local_70 & 0xffffffff00000000);
                    /* try { // try from 0019dea2 to 0019deb1 has its CatchHandler @ 0019e25d */
    iVar6 = (**(code **)(**(long **)local_50 + 0x20))(*(long **)local_50,&local_80,4,&local_70);
    cVar13 = true;
    if (iVar6 != 0) goto LAB_0019df23;
    uVar8 = param_1[1] - *param_1;
    local_80._0_4_ =
         CONCAT13((char)(uVar8 >> 2),
                  CONCAT21(CONCAT11((char)(uVar8 >> 10),(char)(uVar8 >> 0x12)),(char)(uVar8 >> 0x1a)
                          ));
    local_70 = (ulong *)((ulong)local_70 & 0xffffffff00000000);
                    /* try { // try from 0019df00 to 0019df0f has its CatchHandler @ 0019e255 */
    iVar6 = (**(code **)(**(long **)local_50 + 0x20))(*(long **)local_50,&local_80,4,&local_70);
    cVar13 = true;
    if (iVar6 != 0) goto LAB_0019df23;
    local_70 = local_60;
    __src = (undefined1 *)param_1[7];
    uVar8 = param_1[8];
    local_80 = uVar8;
    if (0xf < uVar8) {
      local_70 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_70,(ulong)&local_80);
      local_60[0] = local_80;
    }
    if (uVar8 != 0) {
      if (uVar8 == 1) {
        *(undefined1 *)local_70 = *__src;
      }
      else {
        memcpy(local_70,__src,uVar8);
      }
    }
    local_68 = local_80;
    *(undefined1 *)((long)local_70 + local_80) = 0;
                    /* try { // try from 0019e0b3 to 0019e0c3 has its CatchHandler @ 0019e22e */
    std::__cxx11::string::resize((ulong)&local_70,'\x1c');
    uVar8 = local_68;
    if (local_68 != 0) {
      local_48 = local_70;
      uVar12 = 0;
      do {
        local_74 = CONCAT31(local_74._1_3_,*(undefined1 *)((long)local_48 + uVar12));
        local_80 = local_80 & 0xffffffff00000000;
                    /* try { // try from 0019e0fc to 0019e10b has its CatchHandler @ 0019e265 */
        iVar6 = (**(code **)(**(long **)local_50 + 0x20))(*(long **)local_50,&local_74,1,&local_80);
        if (iVar6 != 0) goto LAB_0019e1ae;
        uVar12 = uVar12 + 1;
      } while (uVar8 != uVar12);
    }
    if (local_40 == lVar1) {
      puVar2 = (uint *)param_1[1];
      cVar13 = '\0';
      for (puVar11 = (uint *)*param_1; puVar11 != puVar2; puVar11 = puVar11 + 1) {
        uVar7 = *puVar11;
        local_74 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        local_80 = local_80 & 0xffffffff00000000;
                    /* try { // try from 0019e18f to 0019e19e has its CatchHandler @ 0019e24d */
        iVar6 = (**(code **)(**(long **)local_50 + 0x20))(*(long **)local_50,&local_74,4,&local_80);
        if (iVar6 != 0) goto LAB_0019e1ae;
      }
    }
    else {
      uVar7 = (int)param_1[4] - (int)param_1[3];
      local_74 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000
      ;
      local_80 = local_80 & 0xffffffff00000000;
                    /* try { // try from 0019e145 to 0019e154 has its CatchHandler @ 0019e226 */
      iVar6 = (**(code **)(**(long **)local_50 + 0x20))(*(long **)local_50,&local_74,4,&local_80);
      if (iVar6 == 0) {
        cVar13 = '\x03';
        if ((ulong)(param_1[4] - param_1[3]) < 0x80000000) {
          local_80 = local_80 & 0xffffffff00000000;
                    /* try { // try from 0019e1fe to 0019e203 has its CatchHandler @ 0019e21e */
          iVar6 = (**(code **)(**(long **)local_50 + 0x20))();
          cVar13 = iVar6 != 0;
        }
      }
      else {
        cVar13 = '\x01';
      }
    }
    goto LAB_0019e1b4;
  }
  goto LAB_0019df23;
LAB_0019e1ae:
  cVar13 = '\x01';
LAB_0019e1b4:
  if (local_70 != local_60) {
    operator_delete(local_70);
  }
LAB_0019df23:
  this = local_50;
  if (cVar13 != '\0') {
    return;
  }
  local_70 = (ulong *)0x0;
                    /* try { // try from 0019df44 to 0019df4b has its CatchHandler @ 0019e295 */
  iVar6 = (**(code **)(**(long **)local_50 + 0x30))(*(long **)local_50,&local_70);
  puVar5 = local_70;
  if ((long)local_70 < 0 || iVar6 != 0) {
    return;
  }
  lVar10 = (long)local_70 - (long)puVar4;
  if (lVar10 + 0x7ffffffcU >> 0x20 != 0) {
    return;
  }
  local_70 = (ulong *)0x0;
                    /* try { // try from 0019df95 to 0019dfa1 has its CatchHandler @ 0019e28d */
  iVar6 = (**(code **)(**(long **)this + 0x28))(*(long **)this,puVar4,0,&local_70);
  if (iVar6 != 0) {
    return;
  }
  if ((long)local_70 < 0) {
    return;
  }
  iVar6 = (int)lVar10 + -4;
  local_80._0_4_ =
       CONCAT13((char)iVar6,
                CONCAT21(CONCAT11((char)((uint)iVar6 >> 8),(char)((uint)iVar6 >> 0x10)),
                         (char)((uint)iVar6 >> 0x18)));
  local_70 = (ulong *)((ulong)local_70 & 0xffffffff00000000);
                    /* try { // try from 0019dfe7 to 0019dff6 has its CatchHandler @ 0019e285 */
  iVar6 = (**(code **)(**(long **)this + 0x20))(*(long **)this,&local_80,4,&local_70);
  if (iVar6 != 0) {
    return;
  }
  local_70 = (ulong *)0x0;
                    /* try { // try from 0019e00f to 0019e01b has its CatchHandler @ 0019e27d */
  iVar6 = (**(code **)(**(long **)this + 0x28))(*(long **)this,puVar5,0,&local_70);
  if (iVar6 != 0) {
    return;
  }
  if ((long)local_70 < 0) {
    return;
  }
  param_1 = param_1 + 0xb;
  if (param_1 == local_38) {
    return;
  }
  goto LAB_0019dcfc;
}


