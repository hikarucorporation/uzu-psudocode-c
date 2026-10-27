// Function : updateParticles
// Namespace: AudioPluginAudioProcessorEditor
// Entry    : 00169a50
// Prototype: undefined updateParticles(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, AudioPluginAudioProcessorEditor * this)
// Body     : 00169a50 - 00169e0c


/* AudioPluginAudioProcessorEditor::updateParticles() */

void __thiscall
AudioPluginAudioProcessorEditor::updateParticles
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          AudioPluginAudioProcessorEditor *this)

{
  undefined8 uVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  void *local_a8;
  long lStack_a0;
  undefined8 local_98;
  void *local_88;
  long lStack_80;
  undefined8 local_78;
  void *local_68;
  long lStack_60;
  undefined8 local_58;
  ulong local_50;
  undefined1 local_48 [16];
  
  local_68 = (void *)0x0;
  lStack_60 = 0;
  local_58 = 0;
  local_88 = (void *)0x0;
  lStack_80 = 0;
  local_78 = 0;
  local_a8 = (void *)0x0;
  lStack_a0 = 0;
  local_98 = 0;
                    /* try { // try from 00169a98 to 00169ac4 has its CatchHandler @ 00169e0f */
  uVar1 = AudioPluginAudioProcessor::readPdArrays
                    (0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(AudioPluginAudioProcessor **)(this + 0x198),"x","y",
                     (vector<float,std::allocator<float>> *)&local_68,
                     (vector<float,std::allocator<float>> *)&local_88,"z",
                     (vector<float,std::allocator<float>> *)&local_a8);
  if ((char)uVar1 != '\0') {
    uVar2 = lStack_60 - (long)local_68 >> 2;
    uVar6 = lStack_80 - (long)local_88 >> 2;
    uVar10 = lStack_a0 - (long)local_a8 >> 2;
    if (uVar6 <= uVar10) {
      uVar10 = uVar6;
    }
    if (uVar2 <= uVar10) {
      uVar10 = uVar2;
    }
    if (0 < (int)uVar10) {
      auVar18 = juce::Component::getLocalBounds((Component *)(this + 0x1a70));
      if ((0 < auVar18._8_4_) && (0 < auVar18._12_4_)) {
        pfVar7 = *(float **)(this + 0x1a58);
        if (*(float **)(this + 0x1a60) != pfVar7) {
          *(float **)(this + 0x1a60) = pfVar7;
        }
        if ((long)(uVar10 << 0x20) < 0) {
                    /* try { // try from 00169e01 to 00169e0c has its CatchHandler @ 00169e0d */
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::reserve");
        }
        uVar2 = (ulong)(int)uVar10;
        pfVar12 = *(float **)(this + 0x1a68);
        if ((ulong)(((long)pfVar12 - (long)pfVar7 >> 2) * -0x5555555555555555) < uVar2) {
                    /* try { // try from 00169b96 to 00169b9a has its CatchHandler @ 00169e0d */
          pfVar3 = operator_new(uVar2 * 0xc);
          if (pfVar7 != (float *)0x0) {
            operator_delete(pfVar7);
          }
          *(float **)(this + 0x1a58) = pfVar3;
          *(float **)(this + 0x1a60) = pfVar3;
          pfVar12 = pfVar3 + uVar2 * 3;
          *(float **)(this + 0x1a68) = pfVar12;
          pfVar7 = pfVar3;
        }
        fVar14 = (float)auVar18._8_4_ + DAT_005d9054;
        fVar16 = (float)auVar18._12_4_ + DAT_005d9054;
        uVar10 = uVar10 & 0xffffffff;
        lVar11 = 0;
        local_50 = uVar10;
        do {
          fVar13 = *(float *)((long)local_a8 + lVar11 * 4);
          fVar17 = DAT_005d9038;
          if (fVar13 <= DAT_005d9038) {
            fVar17 = fVar13;
          }
          fVar17 = (float)(~-(uint)(fVar13 < DAT_005d9058) & (uint)fVar17);
          fVar13 = *(float *)((long)local_68 + lVar11 * 4) * fVar14;
          fVar15 = (DAT_005d9038 - *(float *)((long)local_88 + lVar11 * 4)) * fVar16;
          if (pfVar7 == pfVar12) {
            local_48 = ZEXT416((uint)fVar17);
            pfVar3 = *(float **)(this + 0x1a58);
            lVar4 = (long)pfVar12 - (long)pfVar3;
            if (lVar4 == 0x7ffffffffffffff8) {
                    /* try { // try from 00169df5 to 00169e00 has its CatchHandler @ 00169e13 */
                    /* WARNING: Subroutine does not return */
              std::__throw_length_error("vector::_M_realloc_insert");
            }
            lVar8 = lVar4 >> 2;
            uVar2 = lVar8 * -0x5555555555555555;
            uVar10 = uVar2;
            if (lVar4 == 0) {
              uVar10 = 1;
            }
            uVar6 = uVar10 + uVar2;
            if (0xaaaaaaaaaaaaaaa < uVar6) {
              uVar6 = 0xaaaaaaaaaaaaaaa;
            }
            if (CARRY8(uVar10,uVar2)) {
              uVar6 = 0xaaaaaaaaaaaaaaa;
            }
                    /* try { // try from 00169d10 to 00169d14 has its CatchHandler @ 00169e11 */
            puVar5 = operator_new(uVar6 * 0xc);
            *(float *)((long)puVar5 + lVar8 * 4) = fVar13;
            *(float *)((long)puVar5 + lVar8 * 4 + 4) = fVar15;
            *(undefined4 *)((long)puVar5 + lVar8 * 4 + 8) = local_48._0_4_;
            puVar9 = puVar5;
            if (pfVar3 != pfVar12) {
              pfVar7 = pfVar3;
              do {
                *(float *)(puVar9 + 1) = pfVar7[2];
                *puVar9 = *(undefined8 *)pfVar7;
                pfVar7 = pfVar7 + 3;
                puVar9 = (undefined8 *)((long)puVar9 + 0xc);
              } while (pfVar7 != pfVar12);
            }
            pfVar7 = (float *)((long)puVar9 + 0xc);
            if (pfVar3 != (float *)0x0) {
              operator_delete(pfVar3);
            }
            *(undefined8 **)(this + 0x1a58) = puVar5;
            *(float **)(this + 0x1a60) = pfVar7;
            *(ulong *)(this + 0x1a68) = (long)puVar5 + uVar6 * 0xc;
            uVar10 = local_50;
            if (lVar11 + 1U == local_50) break;
          }
          else {
            *pfVar7 = fVar13;
            pfVar7[1] = fVar15;
            pfVar7[2] = fVar17;
            pfVar7 = (float *)(*(long *)(this + 0x1a60) + 0xc);
            *(float **)(this + 0x1a60) = pfVar7;
            if (lVar11 + 1U == uVar10) break;
          }
          lVar11 = lVar11 + 1;
          pfVar12 = *(float **)(this + 0x1a68);
        } while( true );
      }
    }
  }
  if (local_a8 != (void *)0x0) {
    operator_delete(local_a8);
  }
  if (local_88 != (void *)0x0) {
    operator_delete(local_88);
  }
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
  }
  return;
}


