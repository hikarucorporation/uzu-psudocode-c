// Function : updateFromProcessor
// Namespace: juce:ClientBufferMapper
// Entry    : 001ace10
// Prototype: undefined updateFromProcessor(ClientBufferMapper * this, long param_1)
// Body     : 001ace10 - 001ad4f5


/* juce::ClientBufferMapper::updateFromProcessor(juce::AudioProcessor const&) */

void __thiscall juce::ClientBufferMapper::updateFromProcessor(ClientBufferMapper *this,long param_1)

{
  AudioChannelSet *pAVar1;
  undefined8 *puVar2;
  uint uVar3;
  AudioChannelSet *pAVar4;
  int iVar5;
  long *plVar6;
  void *pvVar7;
  ulong uVar8;
  void *__dest;
  long lVar9;
  ulong uVar10;
  BigInteger *this_00;
  ulong uVar11;
  size_t sVar12;
  int *piVar13;
  long lVar14;
  ClientBufferMapper **ppCVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  ClientBufferMapper *this_01;
  void *local_118;
  AudioChannelSet *local_f0;
  int local_e4;
  long *local_e0;
  long *local_d8;
  ClientBufferMapper **local_d0;
  ulong local_c8;
  int local_bc;
  void *local_b8;
  int local_ac;
  void *local_90;
  int *piStack_88;
  int *local_80;
  undefined1 local_78;
  undefined1 local_70;
  ClientBufferMapper *local_68;
  ulong local_60;
  AudioChannelSet *local_58;
  ClientBufferMapper *local_50;
  undefined1 local_48;
  ClientBufferMapper *local_40;
  undefined1 local_38 [8];
  
  ppCVar15 = &local_50;
  local_50 = this + 0x290;
  local_48 = 1;
  local_40 = this + 0x2a8;
  local_38[0] = 0;
  local_e0 = (long *)(param_1 + 0xc0);
  local_d8 = (long *)(param_1 + 0xd0);
  do {
    this_01 = *ppCVar15;
    plVar6 = local_e0;
    if (*(char *)(ppCVar15 + 1) == '\0') {
      plVar6 = local_d8;
    }
    uVar3 = *(uint *)((long)plVar6 + 0xc);
    uVar16 = (ulong)uVar3;
    local_d0 = ppCVar15;
    if (*(long *)this_01 == *(long *)(this_01 + 8)) {
      if (0 < (int)uVar3) {
        uVar11 = 0;
        if (uVar16 == 0) goto LAB_001ad430;
LAB_001ad240:
        lVar9 = *(long *)(*plVar6 + uVar11 * 8);
        this_00 = *(BigInteger **)(this_01 + 8);
        if (this_00 == *(BigInteger **)(this_01 + 0x10)) goto LAB_001ad440;
        do {
          pAVar1 = (AudioChannelSet *)(lVar9 + 0x60);
          local_bc = AudioChannelSet::size((AudioChannelSet *)(lVar9 + 0x10));
          BigInteger::BigInteger(this_00,(long *)pAVar1);
                    /* try { // try from 001ad283 to 001ad28f has its CatchHandler @ 001ad4f6 */
          local_f0 = pAVar1;
          ChannelMapping::makeChannelIndices(juce::AudioChannelSet_const&)::{lambda()#1}::operator()
                    ((_lambda___1_ *)&local_b8,&local_f0);
          pvVar7 = local_b8;
          *(undefined8 *)(this_00 + 0x28) = 0;
          *(undefined8 *)(this_00 + 0x30) = 0;
          *(undefined8 *)(this_00 + 0x38) = 0;
          if ((long)local_ac != 0) {
            lVar9 = (long)local_ac << 2;
            lVar14 = 0;
            local_118 = (void *)0x0;
            piVar17 = (int *)0x0;
            piVar13 = (int *)0x0;
            local_68 = this_01;
            local_60 = uVar11;
            do {
              while (iVar5 = AudioChannelSet::getChannelIndexForType
                                       (pAVar1,*(uint *)((long)pvVar7 + lVar14)), piVar13 == piVar17
                    ) {
                sVar12 = (long)piVar17 - (long)local_118;
                if (sVar12 == 0x7ffffffffffffffc) {
                    /* try { // try from 001ad4ea to 001ad4f5 has its CatchHandler @ 001ad505 */
                    /* WARNING: Subroutine does not return */
                  std::__throw_length_error("vector::_M_realloc_insert");
                }
                uVar11 = (long)sVar12 >> 2;
                uVar16 = 1;
                if (sVar12 != 0) {
                  uVar16 = uVar11;
                }
                local_c8 = 0x1fffffffffffffff;
                if (uVar16 + uVar11 < 0x2000000000000000) {
                  local_c8 = uVar16 + uVar11;
                }
                if (CARRY8(uVar16,uVar11)) {
                  local_c8 = 0x1fffffffffffffff;
                }
                if (local_c8 == 0) {
                  __dest = (void *)0x0;
                  *(int *)(uVar11 * 4) = iVar5;
                }
                else {
                    /* try { // try from 001ad385 to 001ad389 has its CatchHandler @ 001ad503 */
                  __dest = operator_new(local_c8 * 4);
                  *(int *)((long)__dest + uVar11 * 4) = iVar5;
                }
                if (0 < (long)sVar12) {
                  memmove(__dest,local_118,sVar12);
                }
                piVar13 = (int *)((long)__dest + uVar11 * 4 + 4);
                if (local_118 != (void *)0x0) {
                  operator_delete(local_118);
                }
                *(void **)(this_00 + 0x28) = __dest;
                *(int **)(this_00 + 0x30) = piVar13;
                piVar17 = (int *)(local_c8 * 4 + (long)__dest);
                *(int **)(this_00 + 0x38) = piVar17;
                lVar14 = lVar14 + 4;
                local_118 = __dest;
                if (lVar9 == lVar14) goto LAB_001ad450;
              }
              *piVar13 = iVar5;
              piVar13 = piVar13 + 1;
              *(int **)(this_00 + 0x30) = piVar13;
              lVar14 = lVar14 + 4;
            } while (lVar9 != lVar14);
LAB_001ad450:
            uVar11 = local_60;
            ppCVar15 = local_d0;
            this_01 = local_68;
          }
          local_ac = 0;
          free(local_b8);
          this_00[0x40] = (BigInteger)(local_bc != 0);
          this_00[0x48] = (BigInteger)0x0;
          *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 0x50;
          while( true ) {
            uVar11 = uVar11 + 1;
            plVar6 = local_e0;
            if (*(char *)(ppCVar15 + 1) == '\0') {
              plVar6 = local_d8;
            }
            if ((long)(int)*(uint *)((long)plVar6 + 0xc) <= (long)uVar11) goto LAB_001ace80;
            this_01 = *ppCVar15;
            if (uVar11 < *(uint *)((long)plVar6 + 0xc)) goto LAB_001ad240;
LAB_001ad430:
            lVar9 = 0;
            this_00 = *(BigInteger **)(this_01 + 8);
            if (this_00 != *(BigInteger **)(this_01 + 0x10)) break;
LAB_001ad440:
            std::vector<juce::DynamicChannelMapping,std::allocator<juce::DynamicChannelMapping>>::
            _M_realloc_insert<juce::AudioProcessor::Bus_const&>
                      ((vector<juce::DynamicChannelMapping,std::allocator<juce::DynamicChannelMapping>>
                        *)this_01,this_00,lVar9);
          }
        } while( true );
      }
    }
    else if (uVar3 != 0) {
      uVar11 = 0;
      do {
        ppCVar15 = local_d0;
        if ((uint)uVar11 < (uint)uVar16) {
          lVar9 = *(long *)(*plVar6 + (long)(int)(uint)uVar11 * 8);
        }
        else {
          lVar9 = 0;
        }
        pAVar1 = (AudioChannelSet *)(lVar9 + 0x60);
        iVar5 = AudioChannelSet::size((AudioChannelSet *)(lVar9 + 0x10));
        BigInteger::BigInteger((BigInteger *)&local_b8,(long *)pAVar1);
                    /* try { // try from 001acf5a to 001acf6b has its CatchHandler @ 001ad4fe */
        local_58 = pAVar1;
        ChannelMapping::makeChannelIndices(juce::AudioChannelSet_const&)::{lambda()#1}::operator()
                  ((_lambda___1_ *)&local_f0,&local_58);
        pAVar4 = local_f0;
        local_90 = (void *)0x0;
        piStack_88 = (int *)0x0;
        local_80 = (int *)0x0;
        if ((long)local_e4 != 0) {
          local_c8 = CONCAT44(local_c8._4_4_,iVar5);
          lVar9 = (long)local_e4 << 2;
          lVar14 = 0;
          local_118 = (void *)0x0;
          piVar13 = (int *)0x0;
          do {
            while( true ) {
              piVar17 = piStack_88;
              iVar5 = AudioChannelSet::getChannelIndexForType(pAVar1,*(uint *)(pAVar4 + lVar14));
              if (piVar17 != piVar13) break;
              sVar12 = (long)piVar13 - (long)local_118;
              if (sVar12 == 0x7ffffffffffffffc) {
                    /* try { // try from 001ad4de to 001ad4e9 has its CatchHandler @ 001ad53d */
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("vector::_M_realloc_insert");
              }
              uVar16 = (long)sVar12 >> 2;
              if (sVar12 == 0) {
                uVar10 = 1;
                uVar8 = 1;
LAB_001ad103:
                if (CARRY8(uVar8,uVar16)) {
                  uVar10 = 0x1fffffffffffffff;
                }
                if (uVar10 != 0) goto LAB_001ad053;
                pvVar7 = (void *)0x0;
                *(int *)(uVar16 * 4) = iVar5;
              }
              else {
                uVar10 = uVar16 * 2;
                uVar8 = uVar16;
                if (uVar10 < 0x2000000000000000) goto LAB_001ad103;
                uVar10 = 0x1fffffffffffffff;
LAB_001ad053:
                    /* try { // try from 001ad05e to 001ad062 has its CatchHandler @ 001ad52f */
                pvVar7 = operator_new(uVar10 * 4);
                *(int *)((long)pvVar7 + uVar16 * 4) = iVar5;
              }
              if (0 < (long)sVar12) {
                memmove(pvVar7,local_118,sVar12);
              }
              piVar17 = (int *)((long)pvVar7 + uVar16 * 4 + 4);
              if (local_118 != (void *)0x0) {
                operator_delete(local_118);
              }
              piVar13 = (int *)(uVar10 * 4 + (long)pvVar7);
              lVar14 = lVar14 + 4;
              local_118 = pvVar7;
              local_90 = pvVar7;
              piStack_88 = piVar17;
              local_80 = piVar13;
              if (lVar9 == lVar14) goto LAB_001ad130;
            }
            *piVar17 = iVar5;
            piStack_88 = piVar17 + 1;
            lVar14 = lVar14 + 4;
          } while (lVar9 != lVar14);
LAB_001ad130:
          ppCVar15 = local_d0;
          iVar5 = (int)local_c8;
        }
        local_e4 = 0;
        free(local_f0);
        local_78 = iVar5 != 0;
        lVar9 = *(long *)*ppCVar15;
        lVar14 = uVar11 * 0x50;
        puVar18 = (undefined1 *)(lVar9 + lVar14 + 0x48);
        local_70 = *(undefined1 *)(lVar9 + 0x48 + lVar14);
        BigInteger::operator=((BigInteger *)(lVar9 + lVar14),(undefined8 *)&local_b8);
        pvVar7 = *(void **)(lVar9 + 0x28 + lVar14);
        puVar2 = (undefined8 *)(lVar9 + 0x28 + lVar14);
        *puVar2 = local_90;
        puVar2[1] = piStack_88;
        *(int **)(lVar9 + 0x38 + lVar14) = local_80;
        local_90 = (void *)0x0;
        piStack_88 = (int *)0x0;
        local_80 = (int *)0x0;
        if (pvVar7 == (void *)0x0) {
          *(undefined1 *)(lVar9 + 0x40 + lVar14) = local_78;
          *puVar18 = local_70;
        }
        else {
          operator_delete(pvVar7);
          *(undefined1 *)(lVar9 + 0x40 + lVar14) = local_78;
          *puVar18 = local_70;
          if (local_90 != (void *)0x0) {
            operator_delete(local_90);
          }
        }
        BigInteger::~BigInteger((BigInteger *)&local_b8);
        uVar11 = uVar11 + 1;
        plVar6 = local_e0;
        if (*(char *)(local_d0 + 1) == '\0') {
          plVar6 = local_d8;
        }
        uVar16 = (ulong)*(int *)((long)plVar6 + 0xc);
        ppCVar15 = local_d0;
      } while (uVar11 < uVar16);
    }
LAB_001ace80:
    ppCVar15 = ppCVar15 + 2;
    if (ppCVar15 == (ClientBufferMapper **)(local_38 + 8)) {
      return;
    }
  } while( true );
}


