// Function : decodeImage
// Namespace: juce:GIFImageFormat
// Entry    : 00355430
// Prototype: long * decodeImage(long * param_1, undefined8 param_2, long * param_3)
// Body     : 00355430 - 003558c0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::GIFImageFormat::decodeImage(juce::InputStream&) */

long * __cdecl juce::GIFImageFormat::decodeImage(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  GIFLoader *this;
  undefined8 *puVar5;
  void *pvVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  size_t __size;
  NamedValueSet *this_00;
  int *piVar11;
  char local_159;
  Identifier local_158;
  undefined7 uStack_157;
  uint local_14c;
  byte local_148 [4];
  ushort local_144;
  ushort local_142;
  uint local_140;
  undefined8 local_138;
  undefined1 local_130 [256];
  
  this = operator_new(0x10550);
  *(undefined8 *)this = 0;
  *(long **)(this + 8) = param_3;
  *(undefined2 *)(this + 0x514) = 0;
  this[0x516] = (GIFLoader)0x0;
  *(undefined8 *)(this + 0x518) = 0;
  *(undefined8 *)(this + 0x520) = 0;
  *(undefined8 *)(this + 0x528) = 0;
  *(undefined8 *)(this + 0x530) = 0;
  *(undefined8 *)(this + 0x534) = 0;
  *(undefined8 *)(this + 0x53c) = 0;
  local_138 = (undefined1 *)((ulong)local_138._7_1_ << 0x38);
                    /* try { // try from 0035549b to 003554f8 has its CatchHandler @ 00355931 */
  iVar3 = (**(code **)(*param_3 + 0x20))(param_3,&local_138,6);
  if (iVar3 == 6) {
                    /* try { // try from 0035551f to 0035552e has its CatchHandler @ 00355910 */
    if (((((local_138._4_2_ == 0x6137 && (int)local_138 == 0x38464947) ||
          (local_138._4_2_ == 0x6139 && (int)local_138 == 0x38464947)) &&
         (iVar3 = (**(code **)(*param_3 + 0x20))(param_3,&local_138,4), iVar3 == 4)) &&
        (((short)local_138 != 0 && (local_138._2_2_ != 0)))) &&
       (iVar3 = (**(code **)(*param_3 + 0x20))(param_3,local_148,3), iVar3 == 3)) {
      if ((char)local_148[0] < '\0') {
        bVar7 = local_148[0] & 7;
        lVar9 = 0;
        do {
                    /* try { // try from 00355564 to 00355571 has its CatchHandler @ 00355914 */
          (**(code **)(*param_3 + 0x20))(param_3,&local_138,3);
          this[lVar9 * 4 + 0x114] = local_138._2_1_;
          this[lVar9 * 4 + 0x115] = local_138._1_1_;
          this[lVar9 * 4 + 0x116] = local_138._0_1_;
          this[lVar9 * 4 + 0x117] = (GIFLoader)0xff;
          lVar9 = lVar9 + 1;
        } while (2L << bVar7 != lVar9);
      }
      local_14c = 0xffffffff;
LAB_003555d0:
      do {
                    /* try { // try from 003555d4 to 003555e1 has its CatchHandler @ 00355916 */
        iVar3 = (**(code **)(*param_3 + 0x20))(param_3,local_148,1);
        if ((iVar3 != 1) || (local_148[0] == 0x3b)) goto LAB_003557a5;
        if (local_148[0] == 0x2c) {
                    /* try { // try from 003556d0 to 00355710 has its CatchHandler @ 0035590e */
          iVar3 = (**(code **)(*param_3 + 0x20))(param_3,local_148,9);
          if (iVar3 == 9) {
            if ((local_140 & 0x80) != 0) {
              GIFLoader::readPalette(this,2 << ((byte)local_140 & 7));
            }
                    /* try { // try from 00355711 to 0035571a has its CatchHandler @ 0035590a */
            puVar5 = operator_new(0x60);
            uVar4 = local_14c;
            iVar3 = (-1 < (int)local_14c) + 3;
            uVar8 = 1;
            if (local_144 != 0) {
              uVar8 = (uint)local_144;
            }
            uVar8 = uVar8 * iVar3 + 3 & 0xfffffffc;
            uVar10 = 1;
            if (local_142 != 0) {
              uVar10 = (ulong)local_142;
            }
            __size = uVar10 * uVar8;
            *(undefined4 *)(puVar5 + 1) = 0;
            *(uint *)((long)puVar5 + 0xc) = (-1 < (int)local_14c) + 1;
            *(uint *)(puVar5 + 2) = (uint)local_144;
            *(uint *)((long)puVar5 + 0x14) = (uint)local_142;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[6] = 0;
            puVar5[7] = 0;
            puVar5[8] = 0;
            *(undefined4 *)(puVar5 + 9) = 0;
            *puVar5 = &PTR__SoftwarePixelData_00711df0;
            *(int *)(puVar5 + 0xb) = iVar3;
            *(uint *)((long)puVar5 + 0x5c) = uVar8;
            if ((int)local_14c < 0) {
              if (__size == 0) goto LAB_003557d5;
              pvVar6 = malloc(__size);
            }
            else if (__size == 0) {
LAB_003557d5:
              pvVar6 = (void *)0x0;
            }
            else {
              pvVar6 = calloc(__size,1);
            }
            puVar5[10] = pvVar6;
            LOCK();
            *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
            UNLOCK();
            plVar2 = *(long **)this;
            *(undefined8 **)this = puVar5;
            if (plVar2 != (long *)0x0) {
              LOCK();
              plVar1 = plVar2 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)(*plVar2 + 8))();
              }
            }
            lVar9 = *(long *)this;
                    /* try { // try from 003557fe to 0035580e has its CatchHandler @ 00355908 */
            Identifier::Identifier(&local_158,(byte *)"originalImageHadAlpha");
            this_00 = (NamedValueSet *)(lVar9 + 0x18);
            if (lVar9 == 0) {
              this_00 = (NamedValueSet *)0x0;
            }
            local_130[0] = -1 < (int)uVar4;
            local_138 = &var::Instance::attributesBool;
                    /* try { // try from 00355833 to 00355841 has its CatchHandler @ 003558c9 */
            NamedValueSet::set(this_00,(long *)&local_158,&local_138);
                    /* try { // try from 00355847 to 0035584c has its CatchHandler @ 003558c1 */
            (**(code **)(local_138 + 0x58))(local_130);
            piVar11 = (int *)(CONCAT71(uStack_157,local_158) + -0x10);
            if (piVar11 != &emptyString) {
              LOCK();
              iVar3 = *piVar11;
              *piVar11 = *piVar11 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                operator_delete__(piVar11);
              }
            }
                    /* try { // try from 0035587e to 00355888 has its CatchHandler @ 0035590e */
            GIFLoader::readImage(this,local_140 >> 6 & 1,uVar4);
            lVar9 = *(long *)this;
            *param_1 = lVar9;
            if (lVar9 != 0) {
              LOCK();
              *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
              UNLOCK();
              plVar2 = *(long **)this;
              if (plVar2 != (long *)0x0) {
                LOCK();
                plVar1 = plVar2 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)(*plVar2 + 8))();
                }
              }
            }
            goto LAB_003557ac;
          }
          goto LAB_003557a5;
        }
      } while (local_148[0] != 0x21);
                    /* try { // try from 00355607 to 0035565b has its CatchHandler @ 0035590c */
      iVar3 = (**(code **)(*param_3 + 0x20))(param_3,&local_159,1);
      if (iVar3 != 1) goto LAB_003557a5;
      if (local_159 == -7) {
        iVar3 = (**(code **)(*param_3 + 0x20))(param_3,&local_158,1);
        if (iVar3 != 1) goto LAB_003555d0;
        this[0x514] = (GIFLoader)(local_158 == (Identifier)0x0);
        if (local_158 != (Identifier)0x0) {
          uVar4 = (**(code **)(*param_3 + 0x20))(param_3,&local_138);
          if (uVar4 != (byte)local_158) goto LAB_003555d0;
          if (((ulong)local_138 & 1) != 0) {
            local_14c = (uint)local_138._3_1_;
          }
        }
      }
      do {
                    /* try { // try from 0035567d to 003556b5 has its CatchHandler @ 00355912 */
        iVar3 = (**(code **)(*param_3 + 0x20))(param_3,&local_158,1);
        if (iVar3 != 1) goto LAB_003557a5;
        this[0x514] = (GIFLoader)(local_158 == (Identifier)0x0);
        if (local_158 == (Identifier)0x0) break;
        uVar4 = (**(code **)(*param_3 + 0x20))(param_3,&local_138);
        if (uVar4 != (byte)local_158) goto LAB_003557a5;
      } while (local_158 != (Identifier)0x0);
      goto LAB_003555d0;
    }
  }
LAB_003557a5:
  *param_1 = 0;
LAB_003557ac:
  operator_delete(this);
  return param_1;
}


