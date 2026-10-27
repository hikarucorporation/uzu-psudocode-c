// Function : create<AAT::Chain<AAT::ExtendedTypes>>
// Namespace: AAT:hb_aat_layout_chain_accelerator_t
// Entry    : 003e75a0
// Prototype: hb_aat_layout_chain_accelerator_t * create<AAT::Chain<AAT::ExtendedTypes>>(Chain * param_1, uint param_2)
// Body     : 003e75a0 - 003e7688


/* WARNING: Instruction at (ram,0x003fcffc) overlaps instruction at (ram,0x003fcff6)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0041f4c9) */
/* WARNING: Removing unreachable block (ram,0x003f4c0e) */
/* WARNING: Removing unreachable block (ram,0x003f4bbe) */
/* WARNING: Removing unreachable block (ram,0x003ea1ce) */
/* WARNING: Removing unreachable block (ram,0x003e9e13) */
/* WARNING: Removing unreachable block (ram,0x003f5311) */
/* WARNING: Removing unreachable block (ram,0x003f5328) */
/* WARNING: Removing unreachable block (ram,0x003f4bbc) */
/* WARNING: Removing unreachable block (ram,0x003ea4b1) */
/* WARNING: Removing unreachable block (ram,0x003f5044) */
/* WARNING: Switch with 1 destination removed at 0x003f3170 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AAT::hb_aat_layout_chain_accelerator_t*
   AAT::hb_aat_layout_chain_accelerator_t::create<AAT::Chain<AAT::ExtendedTypes>
   >(AAT::Chain<AAT::ExtendedTypes> const&, unsigned int) */

pthread_mutex_t *
AAT::hb_aat_layout_chain_accelerator_t::create<AAT::Chain<AAT::ExtendedTypes>>
          (long param_1,uint param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
          long param_6)

{
  int *piVar1;
  undefined1 (*pauVar2) [16];
  hb_ot_apply_context_t *phVar3;
  hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
  hVar5;
  hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
  hVar4;
  float fVar6;
  hb_buffer_t hVar7;
  hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
  hVar8;
  short sVar9;
  hb_font_t *this;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 *puVar23;
  uint *puVar24;
  undefined8 *puVar25;
  byte bVar281;
  undefined1 uVar26;
  char cVar27;
  ushort uVar28;
  undefined4 uVar30;
  int iVar31;
  undefined8 in_RAX;
  hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
  *phVar32;
  ulong uVar33;
  long lVar34;
  undefined7 uVar282;
  Lookup<OT::HBGlyphID16> *pLVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined7 uVar62;
  undefined8 uVar45;
  ushort uVar29;
  Lookup<OT::IntType<unsigned_short,2u>> *pLVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined4 *puVar50;
  ushort *puVar51;
  ulong *__ptr;
  __pthread_internal_list *p_Var52;
  int *piVar53;
  accelerator_t *paVar54;
  accelerator_t<OT::Layout::GSUB> *paVar55;
  __pthread_internal_list *p_Var56;
  void *pvVar57;
  char *pcVar58;
  char *pcVar59;
  char *pcVar60;
  size_t sVar61;
  uint uVar63;
  uint uVar64;
  ulong uVar65;
  undefined8 uVar66;
  undefined1 (*pauVar67) [16];
  code *pcVar68;
  uint *puVar69;
  short *psVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  ulong uVar76;
  byte *pbVar77;
  byte bVar78;
  ushort uVar79;
  undefined4 uVar80;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
  *phVar81;
  pthread_mutex_t *ppVar82;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 uVar83;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 *puVar84;
  undefined8 uVar85;
  code *pcVar86;
  __pthread_internal_list *p_Var87;
  undefined8 uVar88;
  undefined8 extraout_RDX_09;
  byte bVar101;
  ushort uVar89;
  uint uVar90;
  uint uVar91;
  undefined8 unaff_RBX;
  undefined8 uVar92;
  undefined2 *puVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  undefined8 uVar98;
  undefined *puVar99;
  uint *puVar100;
  undefined8 *puVar102;
  undefined8 *puVar103;
  undefined8 *puVar104;
  undefined8 *puVar105;
  undefined8 *puVar106;
  hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
  *phVar107;
  undefined8 *puVar108;
  uint unaff_EBP;
  undefined4 uVar109;
  uint uVar110;
  undefined8 uVar111;
  undefined1 *puVar112;
  undefined8 uVar113;
  pthread_mutex_t *ppVar114;
  long lVar115;
  long lVar116;
  pthread_mutex_t *ppVar117;
  undefined8 uVar118;
  long lVar119;
  undefined2 uVar120;
  int iVar121;
  uint uVar122;
  void *pvVar123;
  undefined8 uVar124;
  long *plVar125;
  pthread_mutex_t *ppVar126;
  long *plVar127;
  ushort uVar128;
  undefined8 uVar129;
  Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
  *pLVar130;
  undefined8 *puVar131;
  GDEF *this_00;
  ushort *puVar132;
  __pthread_internal_list *p_Var133;
  ulong uVar134;
  ulong uVar135;
  byte *pbVar136;
  undefined4 *puVar137;
  short *psVar138;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar139;
  hb_buffer_t *phVar140;
  int iVar141;
  ulong in_R10;
  long *plVar142;
  uint *in_R11;
  long lVar143;
  int unaff_R12D;
  undefined8 unaff_R13;
  uint *puVar144;
  hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
  *phVar145;
  ulong uVar146;
  hb_buffer_t *this_01;
  char unaff_R14B;
  uint *puVar147;
  ushort *puVar148;
  undefined8 uVar149;
  undefined8 uVar150;
  TrackData *pTVar151;
  ulong uVar152;
  bool bVar153;
  bool bVar154;
  bool bVar155;
  unkbyte10 in_ST0;
  undefined8 in_MM3;
  float fVar156;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_24;
  undefined8 extraout_XMM0_Qa_37;
  undefined8 extraout_XMM0_Qa_38;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_39;
  undefined8 extraout_XMM0_Qa_40;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined1 extraout_XMM0_04 [16];
  undefined1 extraout_XMM0_05 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 extraout_XMM0_06 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 extraout_XMM0_07 [16];
  undefined1 extraout_XMM0_08 [16];
  undefined1 extraout_XMM0_09 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 extraout_XMM0_10 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 extraout_XMM0_11 [16];
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined1 extraout_XMM0_12 [16];
  undefined1 extraout_XMM0_13 [16];
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined1 extraout_XMM0_14 [16];
  undefined8 extraout_XMM0_Qb_10;
  undefined1 extraout_XMM0_15 [16];
  undefined1 extraout_XMM0_16 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 extraout_XMM0_17 [16];
  undefined1 extraout_XMM0_18 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 extraout_XMM0_19 [16];
  undefined1 extraout_XMM0_20 [16];
  undefined1 extraout_XMM0_21 [16];
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_12;
  undefined1 extraout_XMM0_22 [16];
  undefined1 extraout_XMM0_23 [16];
  undefined8 extraout_XMM0_Qb_13;
  undefined8 extraout_XMM0_Qb_14;
  undefined8 extraout_XMM0_Qb_15;
  undefined1 extraout_XMM0_24 [16];
  undefined1 extraout_XMM0_25 [16];
  undefined8 extraout_XMM0_Qb_16;
  undefined1 auVar166 [16];
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qa_16;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 extraout_XMM0_Qa_19;
  undefined8 extraout_XMM0_Qa_20;
  undefined8 extraout_XMM0_Qa_21;
  undefined8 extraout_XMM0_Qa_22;
  undefined8 extraout_XMM0_Qa_23;
  undefined1 extraout_XMM0_26 [16];
  undefined1 extraout_XMM0_27 [16];
  undefined8 extraout_XMM0_Qb_17;
  undefined1 extraout_XMM0_28 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined8 extraout_XMM0_Qb_18;
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined8 extraout_XMM0_Qa_25;
  undefined8 extraout_XMM0_Qa_26;
  undefined8 extraout_XMM0_Qa_27;
  undefined8 extraout_XMM0_Qa_28;
  undefined8 extraout_XMM0_Qa_29;
  undefined8 extraout_XMM0_Qa_30;
  undefined8 extraout_XMM0_Qa_31;
  long extraout_XMM0_Qa_32;
  undefined8 extraout_XMM0_Qa_33;
  undefined8 extraout_XMM0_Qa_34;
  undefined8 extraout_XMM0_Qa_35;
  undefined8 extraout_XMM0_Qa_36;
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined8 extraout_XMM0_Qb_19;
  undefined1 extraout_XMM0_29 [16];
  undefined1 extraout_XMM0_30 [16];
  undefined8 extraout_XMM0_Qb_20;
  undefined8 extraout_XMM0_Qb_21;
  undefined8 extraout_XMM0_Qb_22;
  undefined1 extraout_XMM0_31 [16];
  undefined8 extraout_XMM0_Qb_23;
  undefined1 extraout_XMM0_32 [16];
  undefined1 extraout_var [12];
  undefined1 auVar175 [16];
  undefined1 extraout_XMM0_33 [16];
  undefined1 extraout_XMM0_34 [16];
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  ulong extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qa_05;
  undefined8 extraout_XMM1_Qa_06;
  undefined8 extraout_XMM1_Qa_11;
  undefined8 extraout_XMM1_Qa_12;
  undefined8 extraout_XMM1_Qa_13;
  undefined8 extraout_XMM1_Qa_14;
  undefined8 extraout_XMM1_Qa_15;
  undefined8 extraout_XMM1_Qa_16;
  undefined8 extraout_XMM1_Qa_17;
  undefined8 extraout_XMM1_Qa_18;
  undefined8 extraout_XMM1_Qa_19;
  undefined8 extraout_XMM1_Qa_20;
  undefined8 extraout_XMM1_Qa_21;
  undefined8 extraout_XMM1_Qa_22;
  undefined8 extraout_XMM1_Qa_23;
  undefined8 extraout_XMM1_Qa_24;
  undefined8 extraout_XMM1_Qa_25;
  undefined8 extraout_XMM1_Qa_26;
  undefined8 extraout_XMM1_Qa_27;
  undefined8 extraout_XMM1_Qa_28;
  undefined8 extraout_XMM1_Qa_29;
  undefined8 extraout_XMM1_Qa_30;
  undefined8 extraout_XMM1_Qa_31;
  undefined8 extraout_XMM1_Qa_32;
  ulong extraout_XMM1_Qa_33;
  undefined8 extraout_XMM1_Qa_34;
  undefined8 extraout_XMM1_Qa_35;
  undefined8 extraout_XMM1_Qa_36;
  undefined8 extraout_XMM1_Qa_37;
  undefined8 extraout_XMM1_Qa_38;
  undefined8 extraout_XMM1_Qa_40;
  undefined8 extraout_XMM1_Qa_39;
  undefined8 extraout_XMM1_Qa_41;
  undefined8 extraout_XMM1_Qa_42;
  uint uVar192;
  undefined1 in_XMM1 [16];
  undefined8 extraout_XMM1_Qa_07;
  undefined8 extraout_XMM1_Qa_08;
  undefined8 extraout_XMM1_Qa_09;
  undefined8 extraout_XMM1_Qa_10;
  uint uVar193;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined8 extraout_XMM1_Qb_02;
  undefined8 extraout_XMM1_Qb_03;
  undefined8 extraout_XMM1_Qb_04;
  undefined8 extraout_XMM1_Qb_05;
  undefined8 extraout_XMM1_Qb_06;
  undefined8 extraout_XMM1_Qb_07;
  undefined8 extraout_XMM1_Qb_08;
  undefined8 extraout_XMM1_Qb_09;
  undefined8 extraout_XMM1_Qb_10;
  undefined8 extraout_XMM1_Qb_11;
  undefined8 extraout_XMM1_Qb_12;
  undefined8 extraout_XMM1_Qb_13;
  undefined8 extraout_XMM1_Qb_14;
  undefined8 extraout_XMM1_Qb_15;
  undefined8 extraout_XMM1_Qb_16;
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined8 extraout_XMM1_Qb_17;
  undefined8 extraout_XMM1_Qb_18;
  undefined8 extraout_XMM1_Qb_19;
  undefined8 extraout_XMM1_Qb_20;
  undefined8 extraout_XMM1_Qb_21;
  undefined8 extraout_XMM1_Qb_22;
  undefined8 extraout_XMM1_Qb_23;
  undefined8 extraout_XMM1_Qb_24;
  undefined8 extraout_XMM1_Qb_25;
  undefined8 extraout_XMM1_Qb_26;
  undefined8 extraout_XMM1_Qb_27;
  undefined8 extraout_XMM1_Qb_28;
  undefined8 extraout_XMM1_Qb_29;
  undefined8 extraout_XMM1_Qb_30;
  undefined8 extraout_XMM1_Qb_31;
  undefined8 extraout_XMM1_Qb_32;
  undefined8 extraout_XMM1_Qb_33;
  undefined8 extraout_XMM1_Qb_34;
  undefined8 extraout_XMM1_Qb_35;
  undefined8 extraout_XMM1_Qb_36;
  undefined8 extraout_XMM1_Qb_37;
  undefined8 extraout_XMM1_Qb_38;
  undefined8 extraout_XMM1_Qb_39;
  undefined1 auVar184 [16];
  undefined8 extraout_XMM1_Qb_40;
  undefined8 extraout_XMM1_Qb_41;
  undefined8 extraout_XMM1_Qb_42;
  undefined8 extraout_XMM1_Qb_43;
  undefined8 extraout_XMM1_Qb_44;
  undefined8 extraout_XMM1_Qb_45;
  undefined1 auVar185 [16];
  undefined8 extraout_XMM1_Qb_46;
  undefined1 auVar186 [16];
  undefined8 extraout_XMM1_Qb_47;
  undefined8 extraout_XMM1_Qb_48;
  undefined8 extraout_XMM1_Qb_49;
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined8 extraout_XMM1_Qb_50;
  undefined8 extraout_XMM1_Qb_51;
  undefined8 extraout_XMM1_Qb_52;
  undefined8 extraout_XMM1_Qb_53;
  undefined8 extraout_XMM1_Qb_54;
  undefined8 extraout_XMM1_Qb_55;
  undefined8 extraout_XMM1_Qb_56;
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined8 extraout_XMM1_Qb_57;
  undefined8 extraout_XMM1_Qb_58;
  undefined8 extraout_XMM1_Qb_59;
  undefined8 extraout_XMM1_Qb_60;
  undefined8 extraout_XMM1_Qb_61;
  undefined1 auVar194 [12];
  undefined1 auVar195 [14];
  undefined1 in_XMM2 [16];
  undefined1 auVar198 [16];
  undefined1 auVar201 [16];
  undefined1 auVar200 [16];
  undefined1 auVar199 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar196 [14];
  undefined1 auVar208 [16];
  undefined1 auVar207 [16];
  undefined1 auVar206 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar197 [14];
  undefined1 auVar214 [16];
  undefined1 auVar213 [16];
  undefined1 auVar212 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar220 [16];
  undefined1 auVar219 [16];
  undefined1 auVar218 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  uint uVar227;
  undefined1 auVar228 [12];
  undefined1 auVar229 [14];
  uint uVar266;
  undefined1 in_XMM3 [16];
  uint uVar267;
  uint uVar268;
  undefined1 auVar232 [16];
  undefined1 auVar235 [16];
  undefined1 auVar234 [16];
  undefined1 auVar233 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar242 [16];
  undefined1 auVar241 [16];
  undefined1 auVar240 [16];
  undefined1 auVar243 [16];
  undefined1 auVar230 [14];
  undefined1 auVar246 [16];
  undefined1 auVar245 [16];
  undefined1 auVar244 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar231 [14];
  undefined1 auVar253 [16];
  undefined1 auVar252 [16];
  undefined1 auVar251 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar269 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 in_XMM6 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 in_XMM7 [16];
  undefined1 in_XMM8 [16];
  int in_XMM9_Da;
  int in_XMM9_Db;
  int in_XMM9_Dc;
  int in_XMM9_Dd;
  int in_XMM10_Da;
  int in_XMM10_Db;
  int in_XMM10_Dc;
  int in_XMM10_Dd;
  undefined1 in_XMM11 [16];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  GDEF *unaff_retaddr;
  undefined8 in_stack_00000020;
  uint in_stack_00000038;
  undefined8 uStack0000000000000058;
  undefined8 in_stack_00000060;
  uint uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined1 in_stack_00000070 [16];
  undefined1 uStack0000000000000080;
  undefined1 auStack0000000000000084 [16];
  undefined1 uStack0000000000000094;
  undefined1 uStack0000000000000095;
  undefined1 auStack_1f4f [7911];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar119._4_4_ = 0;
  lVar119._0_4_ = param_2;
  uVar88._0_4_ = *(uint *)(param_1 + 0xc);
  uVar90 = (uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 | ((uint)uVar88 & 0xff00) << 8 |
           (uint)uVar88 << 0x18;
  lVar116._4_4_ = 0;
  lVar116._0_4_ = uVar90 * 0x18;
  uVar129 = ((pthread_mutex_t *)0x1)->__size;
  uStack_40 = (pthread_mutex_t *)0x3e75cc;
  uStack_38 = in_RAX;
  phVar32 = calloc(1,lVar116);
  phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              *)&uStack_38;
  puVar84 = &uStack_38;
  puVar106 = &uStack_38;
  puVar104 = &uStack_38;
  puVar100 = (uint *)&uStack_38;
  puVar69 = (uint *)&uStack_38;
  puVar131 = &uStack_38;
  if ((pthread_mutex_t *)phVar32 == (pthread_mutex_t *)0x0) {
    phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
               *)0x0;
  }
  else if ((uint)uVar88 != 0) {
    uVar88._0_4_ = *(uint *)(param_1 + 8);
    uVar111 = ((pthread_mutex_t *)0x1)->__size;
    if (1 < uVar90) {
      uVar111._4_4_ = 0;
      uVar111._0_4_ = uVar90;
    }
    uVar92 = param_1 + (ulong)(((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                                ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) * 0xc) + 0x10;
    puVar144 = (uint *)&DAT_005e0158;
    uVar88 = extraout_RDX;
    puVar147 = (uint *)&((pthread_mutex_t *)0x0)->__data;
    auVar279 = extraout_XMM0;
    do {
      auVar196 = in_XMM4._0_14_;
      uVar90 = *(uint *)(uVar92 + 4) >> 0x18;
      uVar42 = puVar147;
      if (5 < (byte)(*(uint *)(uVar92 + 4) >> 0x18)) goto LAB_003e7634;
      uVar33 = (ulong)*(int *)(&DAT_005e0158 + (ulong)uVar90 * 4);
      bVar155 = SCARRY8(uVar33,0x5e0158);
      lVar34 = (long)&DAT_005e0158 + uVar33;
      bVar154 = lVar34 < 0;
      bVar153 = (pthread_mutex_t *)lVar34 == (pthread_mutex_t *)0x0;
      bVar281 = (byte)lVar34;
      cVar27 = SUB81(lVar34,1);
      uVar64 = (uint)lVar34;
      uVar44._2_6_ = (undefined6)((ulong)lVar34 >> 0x10);
      register0x00000001 = (undefined7)((ulong)lVar34 >> 8);
      uVar97._1_7_ = (undefined7)((ulong)uVar92 >> 8);
      bVar78 = (byte)param_4;
      uVar122 = (uint)param_4;
      uVar91 = (uint)lVar116;
      iVar31 = (int)param_5;
      bVar101 = SUB81(uVar92,1);
      uVar49 = lVar34;
      puVar105 = &uStack_38;
      puVar108 = &uStack_38;
      puVar102 = &uStack_38;
      puVar23 = &uStack_38;
      puVar103 = &uStack_38;
      puVar24 = (uint *)&uStack_38;
      puVar25 = &uStack_38;
      uVar113 = uVar111;
      uVar118 = lVar116;
      switch(uVar90) {
      case 0:
      case 1:
      case 2:
      case 5:
        uVar42._0_4_ = (int)puVar147 + 1;
        uVar42._4_4_ = 0;
        lVar116 = (long)phVar32 + (long)puVar147 * 0x18;
        uVar88._0_4_ = *(uint *)(uVar92 + 0x10);
        uVar129 = (long)(uVar92 + (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                                          ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18)) +
                  0xc;
        uStack_40 = (pthread_mutex_t *)0x3e7634;
        Lookup<OT::IntType<unsigned_short,2u>>::
        collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                  ((Lookup<OT::IntType<unsigned_short,2u>> *)uVar129,
                   (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)lVar116,param_2);
        uVar88 = extraout_RDX_00;
        auVar279 = extraout_XMM0_00;
        break;
      case 3:
        break;
      case 4:
        uVar42._0_4_ = (int)puVar147 + 1;
        uVar42._4_4_ = 0;
        auVar279._8_4_ = 0xffffffff;
        auVar279._0_8_ = 0xffffffffffffffff;
        auVar279._12_4_ = 0xffffffff;
        *(undefined1 (*) [16])((long)phVar32 + (long)puVar147 * 0x18) = auVar279;
        *(undefined8 *)
         ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
           *)((long)phVar32 + 0x10) + (long)puVar147 * 0x18) = 0xffffffffffffffff;
        break;
      case 6:
        if (bVar281 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x003e76c0 */
                    /* WARNING: Treating indirect jump as call */
          ppVar117 = (pthread_mutex_t *)
                     (*(code *)(&DAT_005e0170 + *(int *)(&DAT_005e0170 + lVar34 * 4)))();
          return ppVar117;
        }
        return (pthread_mutex_t *)lVar34;
      case 7:
        if (-1 < (char)(bRamffffffff833e787b & bVar101)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          *)(uVar92 + 0x70))[param_4 * 4] =
             (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              )((char)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(uVar92 + 0x70))[param_4 * 4] + bVar78);
        uVar129 = unaff_RBX & 0xffffffff;
        lVar116 = *(long *)(uVar129 + 0x18);
        unaff_retaddr = *(GDEF **)(uVar129 + 0x70);
        unaff_R14B = *(short *)unaff_retaddr != 0x100;
        puVar147._1_7_ = 0;
        puVar147._0_1_ = *(short *)(unaff_retaddr + 4) == 0;
        uVar111._4_4_ = 0;
        uVar111._0_4_ = *(uint *)(unaff_R13 + 0x1c);
        unaff_EBP = *(uint *)(lVar116 + 0x18);
        if (unaff_EBP != 0xffffffff) goto LAB_003e78b9;
        piVar53 = *(int **)(lVar116 + 0x78);
        if (piVar53 != (int *)0x0) goto LAB_003ea611;
        goto LAB_003ea9d3;
      case 8:
        *(undefined4 *)(lVar119 + 0x5c) = 0;
        if (*(char *)(lVar119 + 0x58) == '\0') {
          return (pthread_mutex_t *)lVar34;
        }
        uVar88._0_4_ = 0;
        uVar30._0_1_ = '\0';
        uVar30._1_1_ = '\0';
        uVar30._2_1_ = '\0';
        uVar30._3_1_ = '\0';
        uStack_38._0_1_ = '\0';
        uStack_38._1_1_ = '\0';
        uStack_38._2_1_ = '\0';
        uStack_38._3_1_ = '\0';
        uStack_38._4_1_ = '\0';
        uStack_38._5_1_ = '\0';
        uStack_38._6_1_ = '\0';
        uStack_38._7_1_ = '\0';
        uVar90 = 0;
        goto LAB_003e7b40;
      case 9:
        puVar100 = *(uint **)(&UNK_005e0160 + uVar33);
        *(undefined4 *)(lVar119 + 0x5c) = 0;
        if (*(char *)(lVar119 + 0x58) != '\0') {
          uVar88._0_4_ = (uint)phVar32;
          uVar152 = (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                            ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18);
          ppVar117 = (pthread_mutex_t *)(lVar119 + 0x70);
          ppVar114 = (pthread_mutex_t *)(lVar119 + 0x78);
          uVar90 = 0;
          uStack_38 = uStack_38 & 0xffffffff00000000;
          phVar32._0_4_ = 0;
          uVar88._0_4_ = *(uint *)(lVar119 + 0x60);
          uVar33 = 0;
          uVar64 = 0;
          if (puVar100 == (uint *)0x0) goto LAB_003e99b0;
LAB_003e9880:
          phVar32._0_4_ = uVar64;
          if (uVar90 < (uint)uVar88) {
            uVar64 = *(uint *)(ppVar117->__align + 8 + uVar33 * 0x14);
            puVar69 = puVar100 + 3;
            puVar147 = puVar100;
            do {
              puVar147 = puVar147 + -3;
              puVar100 = puVar69 + -2;
              puVar69 = puVar69 + -3;
            } while (uVar64 < *puVar100);
            do {
              puVar100 = puVar147 + 3;
              puVar69 = puVar147 + 5;
              uVar92 = unaff_RBX;
              puVar147 = puVar100;
            } while (*puVar69 < uVar64);
          }
          if ((*puVar100 & *(uint *)(uVar92 + 0xe0)) != 0) goto LAB_003e99b3;
          if (uVar90 != (uint)uVar88) {
            if (*(char *)(lVar119 + 0x5a) == '\0') {
              phVar32._0_4_ = 0;
              goto LAB_003ea3e2;
            }
            pvVar57 = *(void **)&((pthread_mutex_t *)(lVar119 + 0x78))->__data;
            pvVar123 = *(void **)(lVar119 + 0x70);
            if ((pvVar57 == pvVar123) && (phVar32._0_4_ = 0, *(uint *)(lVar119 + 100) == uVar90)) {
              uVar88._0_4_ = uVar90;
              goto LAB_003ea3d9;
            }
            uVar88._0_4_ = *(uint *)(lVar119 + 100) + 1;
            if (((uint)uVar88 == 0) || ((uint)uVar88 < *(uint *)(lVar119 + 0x68))) {
              phVar32._0_4_ = 0;
              if (pvVar57 != pvVar123) goto LAB_003ea3af;
            }
            else {
              uStack_40 = (pthread_mutex_t *)0x3e995e;
              uVar129 = hb_buffer_t::enlarge((hb_buffer_t *)lVar119,(uint)uVar88);
              if ((char)uVar129 == '\0') {
                phVar32._0_4_ = 0;
                cVar27 = *(char *)(lVar119 + 0x58);
                puVar144 = (uint *)unaff_R13;
                uVar92 = unaff_RBX;
                goto joined_r0x003e999c;
              }
              pvVar57 = *(void **)&ppVar114->__data;
              pvVar123 = *(void **)&ppVar117->__data;
              phVar32._0_4_ = 0;
              uVar92 = unaff_RBX;
              puVar144 = (uint *)unaff_R13;
              if (pvVar57 != pvVar123) goto LAB_003ea3af;
            }
            phVar32._0_4_ = 0;
            uVar88._0_4_ = *(uint *)(lVar119 + 100);
            if (*(int *)(lVar119 + 0x5c) + 1U < (uint)uVar88 + 1) {
              pvVar57 = *(void **)(lVar119 + 0x80);
              *(void **)&((pthread_mutex_t *)(lVar119 + 0x78))->__data = pvVar57;
              phVar32._0_4_ = 0;
              goto LAB_003ea37d;
            }
            pvVar57 = pvVar123;
LAB_003ea3af:
            uVar88._0_4_ = *(uint *)(lVar119 + 0x5c);
            uVar90 = *(uint *)(lVar119 + 100);
            *(undefined4 *)((long)pvVar57 + (ulong)uVar90 * 0x14 + 0x10) =
                 *(undefined4 *)((long)pvVar123 + (ulong)(uint)uVar88 * 0x14 + 0x10);
            *(undefined1 (*) [16])((long)pvVar57 + (ulong)uVar90 * 0x14) =
                 *(undefined1 (*) [16])((long)pvVar123 + (ulong)(uint)uVar88 * 0x14);
            uVar90 = *(uint *)(lVar119 + 0x5c);
            uVar88._0_4_ = *(uint *)(lVar119 + 100);
LAB_003ea3d9:
            *(uint *)(lVar119 + 100) = (uint)uVar88 + 1;
LAB_003ea3e2:
            *(uint *)(lVar119 + 0x5c) = uVar90 + 1;
            cVar27 = *(char *)(lVar119 + 0x58);
joined_r0x003e999c:
            if (cVar27 != '\0') {
              do {
                uVar90 = *(uint *)(lVar119 + 0x5c);
                uVar88._0_4_ = *(uint *)(lVar119 + 0x60);
                uVar33 = (ulong)uVar90;
                uVar64 = (uint)phVar32;
                if (puVar100 != (uint *)0x0) goto LAB_003e9880;
LAB_003e99b0:
                puVar100 = (uint *)0x0;
LAB_003e99b3:
                if (uVar90 < (uint)uVar88) {
                  uVar90 = *(uint *)(ppVar117->__align + uVar33 * 0x14);
                  if ((ulong)uVar90 == 0xffff) {
                    uVar88._0_4_ = 2;
                  }
                  else {
                    uVar88._0_4_ = 1;
                    if ((((*(ulong *)(uVar92 + 0x98) >> ((ulong)(uVar90 >> 4) & 0x3f) & 1) != 0) &&
                        (((ulong)((pthread_mutex_t *)(uVar92 + 0xa0))->__align >>
                          ((ulong)uVar90 & 0x3f) & 1) != 0)) &&
                       ((*(ulong *)(uVar92 + 0xa8) >> ((ulong)(uVar90 >> 9) & 0x3f) & 1) != 0)) {
                      uVar64 = *(uint *)((long)puVar144 + 0x10);
                      uStack_40 = (pthread_mutex_t *)0x3e9a2a;
                      pLVar46 = Lookup<OT::IntType<unsigned_short,2u>>::get_value
                                          ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                           ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                             *)((ulong)(uVar64 >> 0x18 | (uVar64 & 0xff0000) >> 8 |
                                                        (uVar64 & 0xff00) << 8 | uVar64 << 0x18) +
                                               (long)puVar144) + 0xc),uVar90,in_stack_00000020._4_4_
                                          );
                      if (pLVar46 != (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
                        uVar88._0_4_ = (uint)(ushort)(*(ushort *)pLVar46 << 8 |
                                                     *(ushort *)pLVar46 >> 8);
                      }
                    }
                  }
                }
                else {
                  uVar88._0_4_ = 0;
                }
                uVar90 = (uint)uVar88;
                if (0xdc74e0fe < (uint)uVar88) {
                  uVar90 = 1;
                }
                uVar64 = *(uint *)((long)puVar144 + 0x14);
                uVar122 = *(uint *)((long)puVar144 + 0x18);
                phVar81 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                           *)((ulong)(uVar64 >> 0x18 | (uVar64 & 0xff0000) >> 8 |
                                      (uVar64 & 0xff00) << 8 | uVar64 << 0x18) + (long)puVar144);
                phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                            *)((ulong)(uVar122 >> 0x18 | (uVar122 & 0xff0000) >> 8 |
                                       (uVar122 & 0xff00) << 8 | uVar122 << 0x18) + (long)puVar144);
                uVar33 = (ulong)(ushort)(*(ushort *)
                                          (phVar81 +
                                          (ulong)(uVar90 + (uint)phVar32 * -0x238b1f01) * 2 + 0xc)
                                         << 8 | *(ushort *)
                                                 (phVar81 +
                                                 (ulong)(uVar90 + (uint)phVar32 * -0x238b1f01) * 2 +
                                                 0xc) >> 8);
                uVar29 = *(ushort *)(phVar107 + uVar33 * 8 + 0xc);
                uVar79 = *(ushort *)(phVar107 + uVar33 * 8 + 0xe);
                if (((uVar79 & 0xff03) == 0) ||
                   ((*(short *)(phVar107 + uVar33 * 8 + 0x10) == -1 &&
                    (*(short *)(phVar107 + uVar33 * 8 + 0x12) == -1)))) {
                  if (((uint)phVar32 != 0) && (((uVar79 & 0x40) == 0 || (uVar29 != 0)))) {
                    if (0xdc74e0fe < (uint)uVar88) {
                      uVar88._0_4_ = 1;
                    }
                    uVar146 = (ulong)(ushort)(*(ushort *)(phVar81 + (ulong)(uint)uVar88 * 2 + 0xc)
                                              << 8 | *(ushort *)
                                                      (phVar81 + (ulong)(uint)uVar88 * 2 + 0xc) >> 8
                                             );
                    if (((((*(ushort *)(phVar107 + uVar146 * 8 + 0xe) & 0xff03) != 0) &&
                         ((*(short *)(phVar107 + uVar146 * 8 + 0x10) != -1 ||
                          (*(short *)(phVar107 + uVar146 * 8 + 0x12) != -1)))) ||
                        (uVar29 != *(ushort *)(phVar107 + uVar146 * 8 + 0xc))) ||
                       (((*(ushort *)(phVar107 + uVar146 * 8 + 0xe) ^ uVar79) & 0x40) != 0))
                    goto LAB_003e9b70;
                  }
                  uVar146 = (ulong)(ushort)(*(ushort *)
                                             (phVar81 +
                                             (ulong)((uint)phVar32 * -0x238b1f01) * 2 + 0xc) << 8 |
                                           *(ushort *)
                                            (phVar81 +
                                            (ulong)((uint)phVar32 * -0x238b1f01) * 2 + 0xc) >> 8);
                  if (((*(ushort *)(phVar107 + uVar146 * 8 + 0xe) & 0xff03) != 0) &&
                     ((*(short *)(phVar107 + uVar146 * 8 + 0x10) != -1 ||
                      (*(short *)(phVar107 + uVar146 * 8 + 0x12) != -1)))) goto LAB_003e9b70;
                }
                else {
LAB_003e9b70:
                  uVar88._0_4_ = *(uint *)(lVar119 + 0x5c);
                  uVar90 = (uint)uVar88;
                  if (*(char *)(lVar119 + 0x5a) != '\0') {
                    uVar90 = *(uint *)(lVar119 + 100);
                  }
                  if ((uVar90 != 0) && ((uint)uVar88 < *(uint *)(lVar119 + 0x60))) {
                    uStack_40 = (pthread_mutex_t *)0x3e9ba9;
                    hb_buffer_t::_set_glyph_flags
                              ((hb_buffer_t *)lVar119,3,uVar90 - 1,(uint)uVar88 + 1,'\x01');
                    uVar79 = *(ushort *)(phVar107 + uVar33 * 8 + 0xe);
                  }
                }
                uVar128 = uVar79 << 8;
                uVar28 = uVar128 | uVar79 >> 8;
                uVar30 = *(uint *)(lVar119 + 100);
                uVar79 = *(ushort *)(phVar107 + uVar33 * 8 + 0x12);
                if (uVar79 == 0xffff) {
LAB_003e9f8e:
                  if ((uVar128 & 0x8000) == 0) {
                    uVar30 = (undefined4)uStack_38;
                  }
                  uVar79 = *(ushort *)(phVar107 + uVar33 * 8 + 0x10);
                  if (uVar79 != 0xffff) {
                    uVar88._0_4_ = uVar28 >> 5 & 0x1f;
                    iVar31 = (((pthread_mutex_t *)(lVar119 + 200))->__data).__lock - (uint)uVar88;
                    (((pthread_mutex_t *)(lVar119 + 200))->__data).__lock = iVar31;
                    if (iVar31 < 1) goto LAB_003ea43e;
                    uStack_38._0_4_ = uVar30;
                    uVar146 = (ulong)(ushort)(uVar79 << 8 | uVar79 >> 8);
                    puVar99 = &UNK_005e0164 + uVar146 * 2 + uVar152;
                    if ((((ulong)*(uint *)(unaff_RBX + 0x40) <
                          (ulong)((long)puVar99 - *(long *)(unaff_RBX + 0x30))) ||
                        ((uint)(*(int *)(unaff_RBX + 0x38) - (int)puVar99) < (uint)uVar88 * 2)) ||
                       (iVar31 = *(int *)(unaff_RBX + 0x44) + (uint)uVar88 * -2,
                       *(int *)(unaff_RBX + 0x44) = iVar31, iVar31 < 1)) {
                      uVar88._0_4_ = 0;
                    }
                    iVar31 = *(int *)(lVar119 + 100);
                    iVar121 = iVar31;
                    if (((uVar128 & 0x800) == 0) &&
                       (uVar90 = *(uint *)(lVar119 + 0x5c), uVar90 < *(uint *)(lVar119 + 0x60))) {
                      pvVar57 = *(void **)(lVar119 + 0x70);
                      uStack0000000000000068 =
                           *(uint *)((long)pvVar57 + (ulong)uVar90 * 0x14 + 0x10);
                      puVar131 = (undefined8 *)((long)pvVar57 + (ulong)uVar90 * 0x14);
                      uVar129 = *puVar131;
                      in_stack_00000060 = puVar131[1];
                      uStack0000000000000058._0_4_ = (uint)uVar129;
                      uStack0000000000000058._4_4_ = (undefined4)((ulong)uVar129 >> 0x20);
                      uVar90 = iVar31 + 1;
                      if ((uVar90 == 0) || (uVar90 < *(uint *)(lVar119 + 0x68))) {
                        pvVar123 = *(void **)&ppVar114->__data;
                        if (*(void **)&ppVar114->__data == pvVar57) {
LAB_003ea07c:
                          uVar90 = *(uint *)(lVar119 + 100);
                          if (*(uint *)(lVar119 + 0x5c) < uVar90 + 1) {
                            pvVar123 = *(void **)(lVar119 + 0x80);
                            *(void **)&((pthread_mutex_t *)(lVar119 + 0x78))->__data = pvVar123;
                            if ((ulong)uVar90 != 0) {
                              uStack_40 = 0x3ea0b3;
                              memcpy(pvVar123,pvVar57,(ulong)uVar90 * 0x14);
                              pvVar123 = *(void **)&ppVar114->__data;
                            }
                          }
                          else {
                            pvVar123 = pvVar57;
                          }
                        }
LAB_003ea0d0:
                        uVar90 = *(uint *)(lVar119 + 100);
                        *(uint *)((long)pvVar123 + (ulong)uVar90 * 0x14 + 0x10) =
                             uStack0000000000000068;
                        puVar131 = (undefined8 *)((long)pvVar123 + (ulong)uVar90 * 0x14);
                        *puVar131 = CONCAT44(uStack0000000000000058._4_4_,
                                             (uint)uStack0000000000000058);
                        puVar131[1] = in_stack_00000060;
                        iVar121 = *(int *)(lVar119 + 100) + 1;
                        *(int *)(lVar119 + 100) = iVar121;
                        goto LAB_003ea0fc;
                      }
                      uStack_40 = (pthread_mutex_t *)0x3ea523;
                      uVar129 = hb_buffer_t::enlarge((hb_buffer_t *)lVar119,uVar90);
                      if ((char)uVar129 != '\0') {
                        pvVar57 = *(void **)&ppVar117->__data;
                        pvVar123 = *(void **)&ppVar114->__data;
                        if (pvVar123 == pvVar57) goto LAB_003ea07c;
                        goto LAB_003ea0d0;
                      }
                    }
                    else {
LAB_003ea0fc:
                      uVar90 = iVar121 + (uint)uVar88;
                      if ((uVar90 != 0) && (*(uint *)(lVar119 + 0x68) <= uVar90)) {
                        uStack_40 = (pthread_mutex_t *)0x3ea488;
                        uVar129 = hb_buffer_t::enlarge((hb_buffer_t *)lVar119,uVar90);
                        if ((char)uVar129 == '\0') goto LAB_003ea2ad;
                      }
                      if (((void *)ppVar114->__align == (void *)ppVar117->__align) &&
                         (uVar90 = *(uint *)(lVar119 + 100),
                         *(uint *)(lVar119 + 0x5c) < uVar90 + (uint)uVar88)) {
                        ((pthread_mutex_t *)(lVar119 + 0x78))->__align =
                             (long)*(void **)(lVar119 + 0x80);
                        if ((ulong)uVar90 != 0) {
                          uStack_40 = 0x3ea155;
                          memcpy(*(void **)(lVar119 + 0x80),(void *)ppVar117->__align,
                                 (ulong)uVar90 * 0x14);
                        }
                      }
                      uVar90 = *(uint *)(lVar119 + 0x5c);
                      phVar32._0_4_ = *(uint *)(lVar119 + 0x60);
                      ppVar82 = ppVar117;
                      uVar64 = uVar90;
                      if ((uint)phVar32 <= uVar90) {
                        uVar64 = *(int *)(lVar119 + 100) - 1;
                        if (*(int *)(lVar119 + 100) == 0) {
                          uVar64 = 0;
                        }
                        ppVar82 = ppVar114;
                      }
                      if ((uint)uVar88 != 0) {
                        puVar131 = (undefined8 *)((ulong)uVar64 * 0x14 + *(long *)&ppVar82->__data);
                        puVar69 = (uint *)((ulong)*(uint *)(lVar119 + 100) * 0x14 +
                                          *(long *)&((pthread_mutex_t *)(lVar119 + 0x78))->__data);
                        if ((uint)uVar88 == 1) {
                          uVar146 = 0;
LAB_003ea240:
                          puVar69[4] = *(uint *)(puVar131 + 2);
                          uVar129 = puVar131[1];
                          *(undefined8 *)puVar69 = *puVar131;
                          *(undefined8 *)(puVar69 + 2) = uVar129;
                          *puVar69 = (uint)(ushort)(*(ushort *)(puVar99 + uVar146 * 2) << 8 |
                                                   *(ushort *)(puVar99 + uVar146 * 2) >> 8);
                        }
                        else {
                          lVar116 = uVar146 * 2 + uVar152;
                          uVar146 = 0;
                          do {
                            puVar69[4] = *(uint *)(puVar131 + 2);
                            uVar129 = puVar131[1];
                            *(undefined8 *)puVar69 = *puVar131;
                            *(undefined8 *)(puVar69 + 2) = uVar129;
                            uVar79 = *(ushort *)(&UNK_005e0166 + uVar146 * 2 + lVar116 + -2);
                            *puVar69 = (uint)(ushort)(uVar79 << 8 | uVar79 >> 8);
                            puVar69[9] = *(uint *)(puVar131 + 2);
                            uVar129 = puVar131[1];
                            *(undefined8 *)(puVar69 + 5) = *puVar131;
                            *(undefined8 *)(puVar69 + 7) = uVar129;
                            uVar79 = *(ushort *)(&UNK_005e0166 + uVar146 * 2 + lVar116);
                            puVar69[5] = (uint)(ushort)(uVar79 << 8 | uVar79 >> 8);
                            puVar69 = puVar69 + 10;
                            uVar146 = uVar146 + 2;
                          } while (((uint)uVar88 & 0xfffffffe) != uVar146);
                          if (((uint)uVar88 & 1) != 0) goto LAB_003ea240;
                        }
                        uVar90 = *(uint *)(lVar119 + 0x5c);
                        phVar32._0_4_ = *(uint *)(lVar119 + 0x60);
                      }
                      *(int *)(lVar119 + 100) = *(int *)(lVar119 + 100) + (uint)uVar88;
                      *(uint *)(lVar119 + 0x5c) = uVar90;
                      if (((uVar128 & 0x800) == 0) && (uVar90 < (uint)phVar32)) {
                        *(uint *)(lVar119 + 0x5c) = uVar90 + 1;
                      }
                      if ((uVar128 & 0x4000) != 0) {
                        uVar88._0_4_ = 0;
                      }
                      uStack_40 = &LAB_003ea29e;
                      hb_buffer_t::move_to((hb_buffer_t *)lVar119,iVar31 + (uint)uVar88);
                    }
LAB_003ea2ad:
                    puVar144 = (uint *)unaff_R13;
                    uVar30 = (undefined4)uStack_38;
                  }
                }
                else {
                  uVar88._0_4_ = uVar28 & 0x1f;
                  iVar31 = (((pthread_mutex_t *)(lVar119 + 200))->__data).__lock - (uint)uVar88;
                  (((pthread_mutex_t *)(lVar119 + 200))->__data).__lock = iVar31;
                  if (iVar31 < 1) {
                    uVar30 = (undefined4)uStack_38;
LAB_003ea43e:
                    puVar144 = (uint *)unaff_R13;
                  }
                  else {
                    uVar146 = (ulong)(ushort)(uVar79 << 8 | uVar79 >> 8);
                    puVar99 = &UNK_005e0164 + uVar146 * 2 + uVar152;
                    if ((((ulong)*(uint *)(unaff_RBX + 0x40) <
                          (ulong)((long)puVar99 - *(long *)(unaff_RBX + 0x30))) ||
                        ((uint)(*(int *)(unaff_RBX + 0x38) - (int)puVar99) < (uint)uVar88 * 2)) ||
                       (iVar31 = *(int *)(unaff_RBX + 0x44) + (uint)uVar88 * -2,
                       *(int *)(unaff_RBX + 0x44) = iVar31, iVar31 < 1)) {
                      uVar88._0_4_ = 0;
                    }
                    iVar31 = *(int *)(lVar119 + 100);
                    uStack_40 = (pthread_mutex_t *)0x3e9c5c;
                    uVar129 = hb_buffer_t::move_to((hb_buffer_t *)lVar119,(undefined4)uStack_38);
                    if ((char)uVar129 == '\0') {
LAB_003ea4ef:
                    }
                    else {
                      if (((uVar128 & 0x400) == 0) &&
                         (uVar90 = *(uint *)(lVar119 + 0x5c), uVar90 < *(uint *)(lVar119 + 0x60))) {
                        pvVar57 = *(void **)(lVar119 + 0x70);
                        uStack0000000000000068 =
                             *(uint *)((long)pvVar57 + (ulong)uVar90 * 0x14 + 0x10);
                        puVar131 = (undefined8 *)((long)pvVar57 + (ulong)uVar90 * 0x14);
                        uVar129 = *puVar131;
                        in_stack_00000060 = puVar131[1];
                        uStack0000000000000058._0_4_ = (uint)uVar129;
                        uStack0000000000000058._4_4_ = (undefined4)((ulong)uVar129 >> 0x20);
                        uVar90 = *(int *)(lVar119 + 100) + 1;
                        if ((uVar90 == 0) || (uVar90 < *(uint *)(lVar119 + 0x68))) {
                          pvVar123 = *(void **)&ppVar114->__data;
                          if (*(void **)&ppVar114->__data == pvVar57) {
LAB_003e9ccb:
                            uVar90 = *(uint *)(lVar119 + 100);
                            if (*(uint *)(lVar119 + 0x5c) < uVar90 + 1) {
                              pvVar123 = *(void **)(lVar119 + 0x80);
                              *(void **)&((pthread_mutex_t *)(lVar119 + 0x78))->__data = pvVar123;
                              if ((ulong)uVar90 != 0) {
                                uStack_40 = 0x3e9cf5;
                                memcpy(pvVar123,pvVar57,(ulong)uVar90 * 0x14);
                                pvVar123 = *(void **)&ppVar114->__data;
                              }
                            }
                            else {
                              pvVar123 = pvVar57;
                            }
                          }
                        }
                        else {
                          uStack_40 = (pthread_mutex_t *)0x3ea4c5;
                          uVar129 = hb_buffer_t::enlarge((hb_buffer_t *)lVar119,uVar90);
                          if ((char)uVar129 == '\0') goto LAB_003ea4ef;
                          pvVar57 = *(void **)&ppVar117->__data;
                          pvVar123 = *(void **)&ppVar114->__data;
                          if (pvVar123 == pvVar57) goto LAB_003e9ccb;
                        }
                        uVar90 = *(uint *)(lVar119 + 100);
                        *(uint *)((long)pvVar123 + (ulong)uVar90 * 0x14 + 0x10) =
                             uStack0000000000000068;
                        puVar131 = (undefined8 *)((long)pvVar123 + (ulong)uVar90 * 0x14);
                        *puVar131 = CONCAT44(uStack0000000000000058._4_4_,
                                             (uint)uStack0000000000000058);
                        puVar131[1] = in_stack_00000060;
                        iVar121 = *(int *)(lVar119 + 100) + 1;
                        *(int *)(lVar119 + 100) = iVar121;
                        uVar90 = iVar121 + (uint)uVar88;
                        if (uVar90 != 0) goto LAB_003e9d61;
LAB_003e9d6b:
                        if (((void *)ppVar114->__align == (void *)ppVar117->__align) &&
                           (uVar90 = *(uint *)(lVar119 + 100),
                           *(uint *)(lVar119 + 0x5c) < uVar90 + (uint)uVar88)) {
                          ((pthread_mutex_t *)(lVar119 + 0x78))->__align =
                               (long)*(void **)(lVar119 + 0x80);
                          if ((ulong)uVar90 != 0) {
                            uStack_40 = 0x3e9da8;
                            memcpy(*(void **)(lVar119 + 0x80),(void *)ppVar117->__align,
                                   (ulong)uVar90 * 0x14);
                          }
                        }
                        uVar90 = *(uint *)(lVar119 + 0x5c);
                        phVar32._0_4_ = *(uint *)(lVar119 + 0x60);
                        ppVar82 = ppVar117;
                        uVar64 = uVar90;
                        if ((uint)phVar32 <= uVar90) {
                          uVar64 = *(int *)(lVar119 + 100) - 1;
                          if (*(int *)(lVar119 + 100) == 0) {
                            uVar64 = 0;
                          }
                          ppVar82 = ppVar114;
                        }
                        if ((uint)uVar88 != 0) {
                          puVar131 = (undefined8 *)
                                     ((ulong)uVar64 * 0x14 + *(long *)&ppVar82->__data);
                          puVar69 = (uint *)((ulong)*(uint *)(lVar119 + 100) * 0x14 +
                                            *(long *)&((pthread_mutex_t *)(lVar119 + 0x78))->__data)
                          ;
                          if ((uint)uVar88 == 1) {
                            uVar76 = 0;
LAB_003e9e80:
                            puVar69[4] = *(uint *)(puVar131 + 2);
                            uVar129 = puVar131[1];
                            *(undefined8 *)puVar69 = *puVar131;
                            *(undefined8 *)(puVar69 + 2) = uVar129;
                            *puVar69 = (uint)(ushort)(*(ushort *)(puVar99 + uVar76 * 2) << 8 |
                                                     *(ushort *)(puVar99 + uVar76 * 2) >> 8);
                          }
                          else {
                            lVar116 = uVar146 * 2 + uVar152;
                            uVar76 = 0;
                            do {
                              puVar69[4] = *(uint *)(puVar131 + 2);
                              uVar129 = puVar131[1];
                              *(undefined8 *)puVar69 = *puVar131;
                              *(undefined8 *)(puVar69 + 2) = uVar129;
                              uVar79 = *(ushort *)(&UNK_005e0166 + uVar76 * 2 + lVar116 + -2);
                              *puVar69 = (uint)(ushort)(uVar79 << 8 | uVar79 >> 8);
                              puVar69[9] = *(uint *)(puVar131 + 2);
                              uVar129 = puVar131[1];
                              *(undefined8 *)(puVar69 + 5) = *puVar131;
                              *(undefined8 *)(puVar69 + 7) = uVar129;
                              uVar79 = *(ushort *)(&UNK_005e0166 + uVar76 * 2 + lVar116);
                              puVar69[5] = (uint)(ushort)(uVar79 << 8 | uVar79 >> 8);
                              puVar69 = puVar69 + 10;
                              uVar76 = uVar76 + 2;
                            } while (((uint)uVar88 & 0xfffffffe) != uVar76);
                            if (((uint)uVar88 & 1) != 0) goto LAB_003e9e80;
                          }
                          uVar90 = *(uint *)(lVar119 + 0x5c);
                          *(int *)(lVar119 + 100) = *(int *)(lVar119 + 100) + (uint)uVar88;
                          uVar76 = *(ulong *)(unaff_RBX + 0x80);
                          uVar135 = *(ulong *)(unaff_RBX + 0x88);
                          uVar134 = *(ulong *)(unaff_RBX + 0x90);
                          uVar65 = 0;
                          do {
                            uVar79 = *(ushort *)
                                      (&UNK_005e0166 + uVar65 * 2 + uVar146 * 2 + uVar152 + -2);
                            uVar89 = uVar79 << 8 | uVar79 >> 8;
                            uVar76 = uVar76 | 1L << ((ulong)(uVar89 >> 4) & 0x3f);
                            uVar135 = uVar135 | 1L << ((ulong)uVar89 & 0x3f);
                            uVar134 = uVar134 | 1L << ((ulong)((uVar79 & 0xff) >> 1) & 0x3f);
                            uVar65 = uVar65 + 1;
                          } while ((uint)uVar88 != uVar65);
                          *(ulong *)(unaff_RBX + 0x80) = uVar76;
                          *(ulong *)(unaff_RBX + 0x88) = uVar135;
                          *(ulong *)(unaff_RBX + 0x90) = uVar134;
                          phVar32._0_4_ = *(uint *)(lVar119 + 0x60);
                        }
                        if (((uVar128 & 0x400) == 0) && (uVar90 < (uint)phVar32)) {
                          *(uint *)(lVar119 + 0x5c) = uVar90 + 1;
                        }
                        uStack_40 = (pthread_mutex_t *)0x3e9f4c;
                        uVar129 = hb_buffer_t::move_to((hb_buffer_t *)lVar119,iVar31 + (uint)uVar88)
                        ;
                        if ((char)uVar129 != '\0') {
                          uVar88._0_4_ = *(int *)(lVar119 + 0x5c) + 1;
                          if (*(uint *)(lVar119 + 0x60) < (uint)uVar88) {
                            uVar88._0_4_ = *(uint *)(lVar119 + 0x60);
                          }
                          uStack_40 = (pthread_mutex_t *)0x3e9f7a;
                          hb_buffer_t::_set_glyph_flags
                                    ((hb_buffer_t *)lVar119,3,(undefined4)uStack_38,(uint)uVar88,
                                     '\x01');
                          puVar144 = (uint *)unaff_R13;
                          goto LAB_003e9f8e;
                        }
                      }
                      else {
                        uVar90 = *(int *)(lVar119 + 100) + (uint)uVar88;
                        if (uVar90 == 0) goto LAB_003e9d6b;
LAB_003e9d61:
                        if (uVar90 < *(uint *)(lVar119 + 0x68)) goto LAB_003e9d6b;
                        uStack_40 = (pthread_mutex_t *)0x3ea450;
                        uVar129 = hb_buffer_t::enlarge((hb_buffer_t *)lVar119,uVar90);
                        if ((char)uVar129 != '\0') goto LAB_003e9d6b;
                      }
                    }
                    puVar144 = (uint *)unaff_R13;
                    uVar30 = (undefined4)uStack_38;
                  }
                }
                uVar90 = *(uint *)(lVar119 + 0x5c);
                if ((uVar90 == *(uint *)(lVar119 + 0x60)) || (*(char *)(lVar119 + 0x58) == '\0'))
                break;
                uVar29 = uVar29 << 8 | uVar29 >> 8;
                phVar32._0_4_ = (uint)uVar29;
                if ((((byte)phVar107[uVar33 * 8 + 0xe] & 0x40) == 0) ||
                   (iVar31 = (((pthread_mutex_t *)(lVar119 + 200))->__data).__lock,
                   (((pthread_mutex_t *)(lVar119 + 200))->__data).__lock = iVar31 + -1, iVar31 < 1))
                goto LAB_003ea310;
                uStack_38._0_4_ = uVar30;
                uVar92 = unaff_RBX;
                if (*(char *)(lVar119 + 0x58) == '\0') break;
              } while( true );
            }
          }
        }
        ppVar117 = (pthread_mutex_t *)hb_buffer_t::sync((hb_buffer_t *)lVar119);
        return ppVar117;
      case 10:
        bVar153 = in_stack_00000020._4_4_ == uVar64;
        goto code_r0x003e78e8;
      case 0xb:
        if (0xffffffffffa1fea7 < uVar33) {
          puVar100 = (uint *)0x0;
        }
        else {
          puVar100 = *(uint **)(param_4 + 8);
        }
        if ((pthread_mutex_t *)puVar147 == (pthread_mutex_t *)0x0) {
          return (pthread_mutex_t *)lVar34;
        }
        lVar116 = *(long *)((long)&UINT_005e01c8 + uVar33);
        ppVar117 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
        goto LAB_003e7a1d;
      case 0xc:
        param_4._0_2_ = *(ushort *)uVar129 << 8 | *(ushort *)uVar129 >> 8;
        param_4._2_6_ = 0;
        lVar34 = 0;
        bVar153 = (ushort)param_4 < 8;
        bVar154 = (ushort)param_4 == 8;
        uStack_40 = uVar92;
        goto code_r0x003eae1e;
      case 0xd:
      case 0xf:
      case 0x11:
      case 0x13:
        do {
          iVar121 = (int)uVar88;
          if (uVar91 < (ushort)(*(ushort *)
                                 ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                   *)(uVar129 + 0xe) + param_4 * uVar88) << 8 |
                               *(ushort *)
                                ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                  *)(uVar129 + 0xe) + param_4 * uVar88) >> 8)) {
            in_R10 = (ulong)(iVar121 - 1U);
            if ((int)(iVar121 - 1U) < (int)in_R11) {
              return (pthread_mutex_t *)lVar34;
            }
          }
          else {
            if (uVar91 <= (ushort)(*(ushort *)
                                    ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                      *)(uVar129 + 0xc) + param_4 * uVar88) << 8 |
                                  *(ushort *)
                                   ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                     *)(uVar129 + 0xc) + param_4 * uVar88) >> 8)) {
              uVar90 = iVar121 * iVar31;
              uVar88._0_4_ = (uint)(ushort)(*(ushort *)
                                             ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                               *)(uVar129 + 0xe) + uVar90) << 8 |
                                           *(ushort *)
                                            ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                              *)(uVar129 + 0xe) + uVar90) >> 8);
              if ((uVar91 < (uint)uVar88) ||
                 ((ushort)(*(ushort *)
                            ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                              *)(uVar129 + 0xc) + uVar90) << 8 |
                          *(ushort *)
                           ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                             *)(uVar129 + 0xc) + uVar90) >> 8) < uVar91)) {
                return (pthread_mutex_t *)0x0;
              }
              return (pthread_mutex_t *)
                     ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                       *)((ulong)(ushort)(*(ushort *)
                                           ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                             *)(uVar129 + 0x10) + uVar90) << 8 |
                                         *(ushort *)
                                          ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                            *)(uVar129 + 0x10) + uVar90) >> 8) + uVar129) +
                     (ulong)(uVar91 - (uint)uVar88) * 2);
            }
            in_R11 = (uint *)(ulong)(iVar121 + 1U);
            if ((int)in_R10 < (int)(iVar121 + 1U)) {
              return (pthread_mutex_t *)lVar34;
            }
          }
          uVar88._0_4_ = (uint)((int)in_R10 + (int)in_R11) >> 1;
          uVar88._4_4_ = 0;
          param_4 = param_6;
        } while( true );
      case 0xe:
        bVar153 = uVar122 < 8;
        bVar154 = uVar122 == 8;
code_r0x003eae1e:
        if (!(bVar153 || bVar154)) {
          return (pthread_mutex_t *)lVar34;
        }
                    /* WARNING: Could not recover jumptable at 0x003eae35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppVar117 = (pthread_mutex_t *)
                   (*(code *)((long)&Lookup<OT::IntType<unsigned_short,2u>>::get_value::
                                     switchD_003eae35::switchdataD_005e0188 +
                             (long)(int)(&Lookup<OT::IntType<unsigned_short,2u>>::get_value::
                                          switchD_003eae35::switchdataD_005e0188)[param_4 & 0xffff])
                   )();
        return ppVar117;
      case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x12:
        *(byte *)uVar129 =
             (byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)uVar129 >> 7 |
             (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)uVar129 << 1;
        ppVar117 = (pthread_mutex_t *)
                   CONCAT62(uVar44._2_6_,
                            CONCAT11(cVar27 + (char)*(
                                                  hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                                  *)(lVar116 + -0x3f),bVar281));
        return ppVar117;
      case 0x14:
        goto code_r0x003eafcc;
      case 0x15:
        ppVar117 = (pthread_mutex_t *)
                   CONCAT62(uVar44._2_6_,
                            CONCAT11(cVar27 + (char)*(
                                                  hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                                  *)(lVar116 + -0x3f),bVar281));
        return ppVar117;
      case 0x16:
      case 0x18:
      case 0x1a:
      case 0x1c:
      case 0x1e:
        uVar44._1_1_ = cVar27 + (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                        *)(lVar116 + -0x7d);
        return (pthread_mutex_t *)uVar44;
      case 0x17:
        uVar33 = 0xffffffffffffffff;
        if ((uint)uVar88 < 0x3f) {
          uVar33 = lVar34 | (ulong)(uVar91 - 1);
        }
        *(ulong *)((long)puVar147 + 8) = uVar33;
        if ((pthread_mutex_t *)*(long *)((long)puVar147 + 0x10) ==
            (pthread_mutex_t *)0xffffffffffffffff) {
          return (pthread_mutex_t *)0xffffffffffffffff;
        }
        uVar111 = *(long *)((long)puVar147 + 0x10) |
                  (2L << ((byte)((ulong)uVar88 >> 9) & 0x3f)) - 1U;
        uVar129 = (pthread_mutex_t *)0xffffffffffffffff;
        if ((uint)uVar88 < 0x7e00) {
          uVar129 = uVar111;
        }
        *(undefined8 *)((long)puVar147 + 0x10) = uVar129;
        return (pthread_mutex_t *)uVar111;
      case 0x19:
        uVar42 = uVar129 & 0xffffffff;
        while( true ) {
          uVar90 = (uint)uVar111;
          if (uVar90 < (uint)uVar88) {
            uVar42 = (ulong)((ushort)(*(ushort *)(uVar92 + 2) << 8 | *(ushort *)(uVar92 + 2) >> 8) *
                            uVar90) + (long)phVar32;
          }
          uVar29 = *(ushort *)(uVar42 + 2);
          if (uVar29 != 0xffff) {
            uStack_40 = 0x3eb31c;
            uVar42 = hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     ::add_range((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                  *)puVar147,(uint)(ushort)(uVar29 << 8 | uVar29 >> 8),
                                 (uint)(ushort)(*(ushort *)uVar42 << 8 | *(ushort *)uVar42 >> 8));
            uVar129 = (pthread_mutex_t *)0xffffffff;
          }
          if (uVar90 == 0x5e0158) break;
          uVar29 = *(ushort *)(uVar92 + 4);
          uVar111._0_4_ = uVar90 + 1;
          uVar111._4_4_ = 0;
          uVar79 = uVar29 << 8 | uVar29 >> 8;
          iVar31 = 0;
          if (uVar29 != 0) {
            uVar88._0_4_ = (uint)(ushort)(*(ushort *)(uVar92 + 2) << 8 |
                                         *(ushort *)(uVar92 + 2) >> 8) *
                           ((uint)uVar79 + (int)uVar129);
            iVar31 = 0;
            if (*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                            *)(uVar92 + 0xc) + (uint)uVar88) == -1) {
              iVar31 = -(uint)(*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                           *)((long)phVar32 + 2) + (uint)uVar88) == -1);
            }
          }
          uVar88._0_4_ = iVar31 + (uint)uVar79;
          uVar88._4_4_ = 0;
          uVar42 = lVar119;
        }
        return (pthread_mutex_t *)uVar42;
      case 0x1b:
        uVar42 = uVar129 & 0xffffffff;
        while( true ) {
          uVar90 = (uint)uVar111;
          if (uVar90 < (uint)uVar88) {
            uVar42 = (ulong)((ushort)(*(ushort *)(uVar92 + 2) << 8 | *(ushort *)(uVar92 + 2) >> 8) *
                            uVar90) + (long)phVar32;
          }
          uVar29 = *(ushort *)(uVar42 + 2);
          if (uVar29 != 0xffff) {
            uStack_40 = 0x3eb41c;
            uVar42 = hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     ::add_range((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                  *)puVar147,(uint)(ushort)(uVar29 << 8 | uVar29 >> 8),
                                 (uint)(ushort)(*(ushort *)uVar42 << 8 | *(ushort *)uVar42 >> 8));
            uVar129 = (pthread_mutex_t *)0xffffffff;
          }
          if (uVar90 == 0x5e0158) break;
          uVar29 = *(ushort *)(uVar92 + 4);
          uVar111._0_4_ = uVar90 + 1;
          uVar111._4_4_ = 0;
          uVar79 = uVar29 << 8 | uVar29 >> 8;
          iVar31 = 0;
          if (uVar29 != 0) {
            uVar88._0_4_ = (uint)(ushort)(*(ushort *)(uVar92 + 2) << 8 |
                                         *(ushort *)(uVar92 + 2) >> 8) *
                           ((uint)uVar79 + (int)uVar129);
            iVar31 = 0;
            if (*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                            *)(uVar92 + 0xc) + (uint)uVar88) == -1) {
              iVar31 = -(uint)(*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                           *)((long)phVar32 + 2) + (uint)uVar88) == -1);
            }
          }
          uVar88._0_4_ = iVar31 + (uint)uVar79;
          uVar88._4_4_ = 0;
          uVar42 = lVar119;
        }
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
        return (pthread_mutex_t *)uVar42;
      case 0x1d:
        return (pthread_mutex_t *)lVar34;
      case 0x1f:
        goto code_r0x003eb4ed;
      case 0x20:
        uVar92 = &((pthread_mutex_t *)0x0)->__data;
        puVar144 = (uint *)0x0;
        puVar100 = (uint *)&uStack_38;
        goto LAB_003ed9c0;
      case 0x21:
        goto code_r0x003eda8b;
      case 0x22:
        goto code_r0x003eda55;
      case 0x23:
      case 0x25:
        uVar88._0_4_ = *(uint *)(uVar129 + 0x10);
        puVar100 = (uint *)&uStack_38;
        goto code_r0x003edb23;
      case 0x24:
        puVar100 = (uint *)uStack_38;
        goto code_r0x003edac3;
      case 0x26:
        *(byte *)lVar34 =
             (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)lVar34 + bVar281;
        bVar153 = (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                          *)lVar34 < '\0';
        puVar100 = (uint *)&uStack_38;
        goto code_r0x003edbca;
      case 0x27:
        in_ST0 = CONCAT28((short)((unkuint10)in_ST0 >> 0x40),0xffffffffffffffff);
        goto LAB_003ee63a;
      case 0x28:
        *(char *)(uVar33 + 0x10125dc) = *(char *)(uVar33 + 0x10125dc) + bVar78;
        *(byte *)lVar34 =
             (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)lVar34 + bVar281;
        bVar153 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)lVar34 ==
                  (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   )0x0;
        puVar69 = (uint *)&uStack_38;
        goto code_r0x003eeb06;
      case 0x29:
        pcVar58 = (char *)(lVar34 & 0xffffffffffffffa4);
        *pcVar58 = *pcVar58 + (char)pcVar58;
        *pcVar58 = *pcVar58 + (char)pcVar58;
        bVar153 = *pcVar58 == '\0';
        puVar69 = (uint *)&uStack_38;
        goto code_r0x003ee8a9;
      case 0x2a:
      case 0x2c:
        *(uint *)(param_4 + 8) = uVar64;
        goto LAB_003f0e28;
      case 0x2b:
        uVar33 = (ulong)*(uint *)(uVar129 + 0x80);
        puVar69 = (uint *)&uStack_38;
        goto code_r0x003eec46;
      case 0x2d:
        uVar33 = (ulong)*(uint *)(uVar129 + 0x80);
        puVar69 = (uint *)&uStack_38;
        goto code_r0x003eed39;
      case 0x2e:
        phVar32._0_4_ = SUB164(in_XMM3 | in_XMM4,4);
        uVar88._0_4_ = SUB164(in_XMM3 | in_XMM4,0);
        uVar90 = -(uint)((int)((uint)uVar88 ^ auVar279._0_4_) <
                        (int)(auVar279._0_4_ ^ (uint)phVar32));
        param_5._0_4_ = ~uVar90 & (uint)phVar32 | (uint)uVar88 & uVar90;
        param_5._4_4_ = 0;
        lVar34 = lVar34 - param_6;
        phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   *)(lVar116 + param_6 * 0x14) + 8;
        do {
          uVar88._0_4_ = *(uint *)phVar32;
          if ((uint)uVar88 < (uint)param_5) {
            param_5._4_4_ = 0;
            param_5._0_1_ = (char)(uint)uVar88;
            param_5._1_1_ = (char)((uint)uVar88 >> 8);
            param_5._2_1_ = (char)((uint)uVar88 >> 0x10);
            param_5._3_1_ = (char)((uint)uVar88 >> 0x18);
          }
          phVar32 = phVar32 + 0x14;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        uVar88 = (ulong)in_R11 & 0xffffffff;
        param_4 = uVar92 & 0xffffffff;
        param_6 = 3;
        goto code_r0x003f258f;
      case 0x2f:
      case 0x31:
      case 0x33:
      case 0x35:
        goto code_r0x003f277b;
      case 0x30:
        *(int *)(lVar116 + 0xf) = *(int *)(lVar116 + 0xf) << 6;
        return (pthread_mutex_t *)lVar34;
      case 0x32:
        if ((short)param_4 == 0) {
          uVar29 = *(ushort *)(uVar129 + 2) << 8 | *(ushort *)(uVar129 + 2) >> 8;
          param_6 = (long)&((pthread_mutex_t *)0x0)->__data;
          in_R11 = (uint *)((ulong)param_5 & 0xffffffff);
          if (iVar31 < 1) goto LAB_003f283f;
        }
        else {
          uVar29 = *(ushort *)(uVar129 + 2) << 8 | *(ushort *)(uVar129 + 2) >> 8;
          uVar88._0_4_ = (iVar31 + -1) * (uint)uVar29;
          iVar121 = 0;
          if (*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                          *)(uVar129 + 0xc) + (uint)uVar88) == -1) {
            iVar121 = -(uint)(*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                          *)(uVar129 + 0xe) + (uint)uVar88) == -1);
          }
          param_6 = (long)&((pthread_mutex_t *)0x0)->__data;
          uVar88._0_4_ = iVar121 + iVar31;
          in_R11 = (uint *)(ulong)(uint)uVar88;
          if ((uint)uVar88 == 0 || SCARRY4(iVar121,iVar31) != (int)(uint)uVar88 < 0)
          goto LAB_003f283f;
        }
        in_R10 = (ulong)uVar29;
        param_6 = (long)&((pthread_mutex_t *)0x0)->__data;
        param_5._2_6_ = 0;
        param_5._0_2_ = uVar29;
        uVar129 = uVar129 + 0xc;
        goto code_r0x003f2639;
      case 0x34:
code_r0x003f2639:
        in_R11 = (uint *)(ulong)((int)in_R11 - 1);
        uVar88 = (pthread_mutex_t *)0x0;
        goto LAB_003f265f;
      case 0x36:
        uVar45._0_1_ = 0xff;
        bVar153 = false;
        uVar49 = uVar45;
        goto code_r0x003f26d6;
      case 0x37:
        if (bVar153) {
          return (pthread_mutex_t *)0x0;
        }
        lVar34 = *(long *)(uVar92 + 0x90);
      case 0x39:
        uStack_40 = 0x3f2afb;
        iVar31 = (**(code **)(lVar34 + 0x48))(uVar92);
        uStack_38._0_1_ = '\0';
        uStack_38._1_1_ = '\0';
        uStack_38._2_1_ = '\0';
        uStack_38._3_1_ = '\0';
        uStack_38._4_1_ = '\0';
        uStack_38._5_1_ = '\0';
        uStack_38._6_1_ = '\0';
        uStack_38._7_1_ = '\0';
        puVar131 = *(undefined8 **)(*(long *)(uVar92 + 0x90) + 0x10);
        if (puVar131 == (undefined8 *)0x0) {
          uVar129 = 0;
        }
        else {
          uVar129 = *puVar131;
        }
        uVar113._0_4_ = -(iVar31 / 2);
        uVar113._4_4_ = 0;
        uStack_40 = 0x3f2b45;
        iVar31 = (**(code **)(*(long *)(uVar92 + 0x90) + 0x20))
                           (uVar92,*(undefined8 *)(uVar92 + 0x98),&uStack_38,uVar129);
        if (iVar31 == 0) goto LAB_003f2b4e;
        lVar34 = uStack_38 & 0xffffffff;
        goto LAB_003f2b62;
      case 0x38:
      case 0x3a:
      case 0x3c:
      case 0x3e:
        goto code_r0x003f2d37;
      case 0x3b:
        goto code_r0x003f2ba2;
      case 0x3d:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x3f:
        goto code_r0x003f2c90;
      case 0x40:
        *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          *)(param_4 + 0x7d96e8ea) =
             (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              )((char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(param_4 + 0x7d96e8ea) + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x41:
      case 0x43:
      case 0x45:
      case 0x47:
      case 0x49:
        *(byte *)lVar34 =
             (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)lVar34 + bVar281;
        puVar147._0_4_ = ((int)in_R10 + (uint)uVar88) - 1;
        puVar147._4_4_ = 0;
        phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   *)0x0;
        lVar119 = (long)&_hb_NullPool;
        uVar113 = auStack_60._8_8_;
        goto LAB_003f379d;
      case 0x42:
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      case 0x44:
        *(byte *)lVar34 =
             (byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)lVar34 & bVar281;
        uVar111 = auStack_60._8_8_;
        goto LAB_003f3331;
      case 0x46:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x48:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x4a:
        uVar90 = *(uint *)(param_4 + 0x60);
        uVar64 = *(uint *)(uVar129 + 0x10);
        uStack_68 = 0x3f3053;
        auStack_60._0_8_ = uVar92;
        auStack_60._8_8_ = phVar32;
        auStack_50 = (undefined1  [8])puVar147;
        auStack_48 = (undefined1  [8])lVar119;
        uStack_40 = uVar111;
        pLVar46 = Lookup<OT::IntType<unsigned_short,2u>>::get_value
                            ((Lookup<OT::IntType<unsigned_short,2u>> *)
                             ((ulong)(uVar64 >> 0x18 | (uVar64 & 0xff0000) >> 8 |
                                      (uVar64 & 0xff00) << 8 | uVar64 << 0x18) + uVar129),uVar91,
                             uVar90);
        if (pLVar46 == (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
          uVar33 = 0;
        }
        else {
          uVar33 = (ulong)(ushort)(*(ushort *)pLVar46 << 8 | *(ushort *)pLVar46 >> 8);
        }
        phVar32._0_4_ = *(uint *)(uVar129 + 0x14);
        uStack_68 = 0x3f307a;
        pLVar46 = Lookup<OT::IntType<unsigned_short,2u>>::get_value
                            ((Lookup<OT::IntType<unsigned_short,2u>> *)
                             ((ulong)((uint)phVar32 >> 0x18 | ((uint)phVar32 & 0xff0000) >> 8 |
                                      ((uint)phVar32 & 0xff00) << 8 | (uint)phVar32 << 0x18) +
                             uVar129),(uint)uVar88,uVar90);
        lVar34 = 0;
        if (pLVar46 == (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
          uVar152 = 0;
        }
        else {
          uVar152 = (ulong)(ushort)(*(ushort *)pLVar46 << 8 | *(ushort *)pLVar46 >> 8);
        }
        uVar88._0_4_ = *(uint *)(uVar129 + 0x18);
        uVar88 = (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                         ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) + uVar129;
        phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   *)(uVar88 + (uVar152 + uVar33) * 2) + (2 - *(long *)(param_4 + 0x30));
        bVar153 = phVar32 < (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                             *)(ulong)*(uint *)(param_4 + 0x40);
        bVar154 = phVar32 ==
                  (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   *)(ulong)*(uint *)(param_4 + 0x40);
        uVar42 = uVar152 + uVar33;
        uVar92 = uVar129;
        puVar147 = (uint *)param_4;
        goto code_r0x003f30b0;
      case 0x4b:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x4c:
      case 0x4e:
      case 0x50:
      case 0x52:
      case 0x54:
        uVar90 = (uint)(*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                    *)(uVar92 + 0xc) + ((uint)uVar88 & 0xffff) * uVar91) == -1);
        uVar88._0_4_ = -uVar90;
        uVar88._4_4_ = 0;
        if (uVar122 == uVar90) {
          return (pthread_mutex_t *)lVar34;
        }
        goto LAB_003f3cdb;
      case 0x4d:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x4f:
        if ((pthread_mutex_t *)lVar34 == (pthread_mutex_t *)0xffffffffffffffff) {
          return (pthread_mutex_t *)0xffffffffffffffff;
        }
        uVar111 = lVar34 | (2L << ((byte)((ulong)uVar88 >> 9) & 0x3f)) - 1U;
        uVar129 = (pthread_mutex_t *)0xffffffffffffffff;
        if ((uint)uVar88 < 0x7e00) {
          uVar129 = uVar111;
        }
        *(undefined8 *)((long)puVar147 + 0x10) = uVar129;
        return (pthread_mutex_t *)uVar111;
      case 0x51:
        goto code_r0x003f3b6a;
      case 0x53:
        uStack_40 = *(undefined8 *)
                     ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                       *)(lVar116 + 0x66) + uVar92);
        puVar69 = (uint *)&uStack_40;
        uVar29 = (ushort)(uVar122 << 8) | (ushort)SUB81(param_4,3);
        goto code_r0x003f3c63;
      case 0x55:
        uVar42 = lVar116 & 0xffffffff;
        puVar69 = (uint *)&uStack_38;
        goto code_r0x003f3c77;
      case 0x56:
        *(byte *)lVar34 =
             (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)lVar34 + bVar281;
        *(byte *)lVar34 =
             (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)lVar34 + bVar281;
        goto LAB_003f3ec0;
      case 0x57:
        ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          *)(uVar111 + 0x6e))[param_4 * 4] =
             (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              )((char)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(uVar111 + 0x6e))[param_4 * 4] + bVar78);
        puVar100 = (uint *)&uStack_38;
        goto LAB_003f3f0e;
      case 0x58:
        puVar100 = (uint *)&uStack_38;
        if (bVar153 || (long)uVar33 < -0x5e0158) goto code_r0x003f4568;
        uVar97._0_1_ = (byte)uVar92 + SUB81(uVar88,1) + (0xffffffffffa1fea7 < uVar33);
        goto LAB_003f4500;
      case 0x59:
      case 0x5b:
        goto code_r0x003f3d78;
      case 0x5a:
        goto code_r0x003f45a3;
      case 0x5c:
        out(*(undefined4 *)lVar116,(short)uVar88);
        uVar113 = &uStack_40;
        uStack_40 = uVar111;
        puVar100 = (uint *)auStack_1f4f;
        *(byte *)lVar34 =
             (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)lVar34 + bVar281;
        *(byte *)lVar34 =
             (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)lVar34 + bVar281;
        goto LAB_003f4b90;
      case 0x5d:
        uVar29 = (ushort)(uVar64 << 8) | (ushort)SUB81(lVar34,3);
        puVar100 = (uint *)&uStack_38;
        lVar116 = (long)phVar32;
        goto code_r0x003f4e79;
      case 0x5e:
      case 0x60:
      case 0x62:
      case 100:
      case 0x66:
        *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          *)(param_4 + -0x3d3e993e) =
             (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              )((char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(param_4 + -0x3d3e993e) + bVar78);
        *(byte *)uVar129 =
             (byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)uVar129 | bVar78;
        goto LAB_003f5120;
      case 0x5f:
        goto code_r0x003f4eb1;
      case 0x61:
        goto code_r0x003f4ed5;
      case 99:
        *(byte *)uVar129 =
             (byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)uVar129 >> (bVar78 & 7) |
             (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)uVar129 << 8 - (bVar78 & 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x65:
        *(byte *)lVar34 =
             (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)lVar34 + bVar281;
        *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          *)(lVar116 + -0x7b) =
             (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              )((char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(lVar116 + -0x7b) + cVar27);
        ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          *)(lVar116 + 0x42))[uVar111] =
             (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              )0x0;
        goto code_r0x003f5133;
      case 0x67:
        goto code_r0x003f5176;
      case 0x68:
        uVar92._2_6_ = (undefined6)((ulong)uVar92 >> 0x10);
        uVar92._1_1_ = bVar101 * '\x02';
        puVar100 = (uint *)&uStack_40;
        uStack_40 = lVar34;
        *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          *)(uVar111 + 0x474a75c0) =
             (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              )((byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(uVar111 + 0x474a75c0) ^ bVar281);
        *(uint *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   *)(uVar129 + 4) + lVar116) =
             *(uint *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(uVar129 + 4) + lVar116) | (uint)uVar111;
        goto LAB_003f7edd;
      default:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x6f:
        *(byte *)uVar129 =
             (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)uVar129 + bVar78;
        puVar100 = (uint *)&uStack_38;
        goto code_r0x003f7e92;
      case 0x70:
        pcVar58 = (char *)(lVar34 & 0xffffffffffffff84);
        *pcVar58 = *pcVar58 + (char)pcVar58;
        *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          *)(uVar92 + -0x77c0120) =
             (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              )((char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(uVar92 + -0x77c0120) + (char)pcVar58);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x73:
        uVar33 = lVar34 & 0xffffffffffffff08;
        puVar100 = (uint *)&uStack_38;
        goto LAB_003f7f87;
      case 0x81:
        *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          *)(uVar111 + -0x357af040) =
             (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              )((byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(uVar111 + -0x357af040) ^ bVar281);
        *(uint *)lVar34 = *(int *)lVar34 + uVar64;
        goto code_r0x003f7fa7;
      case 0x82:
        *(byte *)lVar34 =
             (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)lVar34 + bVar281;
        puVar100 = (uint *)&uStack_38;
        goto code_r0x003f7f47;
      case 0x86:
        goto code_r0x003f7f64;
      case 0xa2:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xa4:
        *(byte *)lVar34 =
             (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)lVar34 + bVar281;
        puVar100 = (uint *)&uStack_38;
code_r0x003f7fc3:
        *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          *)(uVar129 + 0x3a) =
             (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              )((char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(uVar129 + 0x3a) + SUB81(uVar92,1));
        goto code_r0x003f7fc6;
      case 0xa6:
        *(uint *)lVar34 = *(int *)lVar34 + uVar64;
        *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          *)(param_4 + -0x75) =
             (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              )((char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(param_4 + -0x75) + bVar281);
        uVar49._0_1_ = bVar281 + 0x1f;
        uVar49._1_7_ = register0x00000001;
        puVar100 = (uint *)&uStack_38;
        goto code_r0x003f7fb9;
      case 0xc2:
        goto LAB_003f7f27;
      case 0xc4:
        phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   *)(uVar92 + 0x18247c);
        *phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    )((char)*phVar32 +
                     bVar281 + (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                       *)lVar34);
        bVar153 = *phVar32 ==
                  (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   )0x0;
        goto code_r0x003f7f5e;
      case 0xc5:
        *(byte *)lVar34 =
             (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)lVar34 + bVar281;
        *(long *)param_4 = (long)in_ST0;
        puVar100 = (uint *)&uStack_38;
        goto LAB_003f7d30;
      case 0xc6:
        *(byte *)lVar34 =
             (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)lVar34 + bVar281;
        phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)(uVar92 + 0x6e891069);
        hVar8 = *phVar107;
        *phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     )((char)*phVar107 + bVar78);
        hVar4 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)uVar129;
        hVar5 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)uVar129;
        *(byte *)uVar129 = (char)hVar5 + bVar78 + CARRY1((byte)hVar8,bVar78);
        *(byte *)param_4 =
             (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)param_4 + bVar281 +
             (CARRY1((byte)hVar4,bVar78) || CARRY1((char)hVar5 + bVar78,CARRY1((byte)hVar8,bVar78)))
        ;
        puVar100 = (uint *)&uStack_38;
        goto LAB_003f7d30;
      case 199:
      case 200:
      case 0xc9:
      case 0xca:
      case 0xcb:
      case 0xcc:
      case 0xcd:
      case 0xce:
      case 0xcf:
      case 0xd0:
      case 0xd1:
      case 0xd2:
      case 0xd3:
      case 0xd4:
      case 0xd5:
      case 0xd6:
        goto code_r0x003f7c94;
      case 0xd7:
        param_4._0_4_ = *(int *)(param_4 + -0x75) * 0x80248c;
        param_4._4_4_ = 0;
        *(byte *)lVar34 =
             (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)lVar34 + bVar281;
        puVar100 = (uint *)&uStack_38;
        goto code_r0x003f7d9e;
      case 0xd8:
        piVar53 = (int *)((long)&UINT_005e00e4 + uVar33 + 1);
        *piVar53 = *piVar53 + -1;
        lVar34 = CONCAT71(register0x00000001,bVar281 + 0x80);
        puVar100 = (uint *)&uStack_38;
        goto code_r0x003f7da9;
      case 0xd9:
      case 0xdb:
        *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          *)(param_4 + -0x75) =
             (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              )((char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(param_4 + -0x75) + bVar78);
        pcVar58 = (char *)(ulong)(uint)(int)CONCAT11(0x24,bVar281);
        *pcVar58 = *pcVar58 + bVar281;
        pbVar136 = (byte *)(pcVar58 + -0x75);
        bVar101 = *pbVar136;
        *pbVar136 = *pbVar136 + bVar78;
        pcVar58[-0x75] = pcVar58[-0x75] + bVar78 + CARRY1(bVar101,bVar78);
        pcVar58[-0x7b] = pcVar58[-0x7b] ^ bVar78;
        uVar118 = *(undefined8 *)uVar111;
        phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)(uVar111 + 8);
        goto code_r0x003fcffd;
      case 0xda:
      case 0xdd:
      case 0xde:
      case 0xdf:
      case 0xe0:
      case 0xe1:
      case 0xe2:
      case 0xe3:
      case 0xe4:
      case 0xe5:
      case 0xe6:
      case 0xe7:
      case 0xe8:
      case 0xe9:
      case 0xea:
      case 0xeb:
      case 0xec:
      case 0xed:
      case 0xee:
      case 0xef:
      case 0xf0:
      case 0xf1:
      case 0xf2:
      case 0xf3:
      case 0xf4:
      case 0xf5:
      case 0xf6:
      case 0xf7:
      case 0xf8:
      case 0xf9:
      case 0xfa:
      case 0xfb:
      case 0xfc:
      case 0xfd:
      case 0xfe:
      case 0xff:
        pcVar58 = (char *)(ulong)(uint)uStack0000000000000058;
        uVar118 = uVar111;
        goto code_r0x003fcffd;
      case 0xdc:
        goto code_r0x003fd07d;
      }
LAB_003e7634:
      uVar90 = *(uint *)uVar92;
      uVar92 = uVar92 + (ulong)(uVar90 >> 0x18 | (uVar90 & 0xff0000) >> 8 | (uVar90 & 0xff00) << 8 |
                               uVar90 << 0x18);
      uVar111._0_4_ = (uint)uVar111 - 1;
      uVar111._4_4_ = 0;
      puVar147 = (uint *)uVar42;
    } while ((uint)uVar111 != 0);
  }
  return (pthread_mutex_t *)phVar32;
LAB_003ed9c0:
  lVar143 = (long)in_ST0;
  auVar194 = in_XMM2._0_12_;
  auVar228 = in_XMM3._0_12_;
  *(undefined8 *)((long)puVar100 + 0x68) = uVar92;
  *(long *)((long)puVar100 + 0xa8) = lVar34;
  *(uint *)((long)puVar100 + 0x1c) = (uint)uVar113;
  *(undefined8 *)((long)puVar100 + 0xb8) = uVar129;
  *(undefined8 *)((long)puVar100 + 0x10) = param_4;
  *(int *)((long)puVar100 + 0xc) = (int)lVar116;
  in_XMM1 = ZEXT816(0);
  *(undefined1 (*) [16])((long)puVar100 + 0x90) = in_XMM1;
  *(undefined8 *)((long)puVar100 + 0xa0) = 0;
  auVar279 = ZEXT816(0);
  uVar118 = 0;
  *(undefined1 (*) [16])((long)puVar100 + 0x70) = in_XMM1;
  *(undefined8 *)((long)puVar100 + 0x80) = 0;
  uVar90 = *(uint *)(lVar119 + 4) >> 0x18;
  if (6 < (byte)(*(uint *)(lVar119 + 4) >> 0x18)) goto LAB_003edba0;
  param_4 = &DAT_005e01d8;
  uVar33 = (ulong)*(int *)(&DAT_005e01d8 + (ulong)uVar90 * 4);
  bVar153 = 0xffffffffffa1fe27 < uVar33;
  lVar34 = (long)&DAT_005e01d8 + uVar33;
  bVar154 = (pthread_mutex_t *)lVar34 == (pthread_mutex_t *)0x0;
  bVar78 = (byte)lVar34;
  uVar62 = (undefined7)((ulong)lVar34 >> 8);
  uVar64 = (uint)lVar34;
  uVar96._0_1_ = (byte)uVar92;
  uVar96._2_6_ = (undefined6)((ulong)uVar92 >> 0x10);
  uVar49 = lVar34;
  uVar42 = param_4;
  puVar69 = puVar100;
  uVar111 = uVar113;
  switch(uVar90) {
  case 0:
    uVar90 = *(uint *)(lVar119 + 0xc);
    if (uVar90 != 0) {
      param_5 = (uint *)((long)(lVar119 +
                               (ulong)(uVar90 >> 0x18 | (uVar90 & 0xff0000) >> 8 |
                                       (uVar90 & 0xff00) << 8 | uVar90 << 0x18) * 6) + 0x1c);
      uVar129 = lVar119 + 0x1c;
      param_6 = 0;
      in_R10 = 0;
      in_R11 = (uint *)0x0;
      uVar92 = (pthread_mutex_t *)0x0;
      puVar102 = (undefined8 *)puVar100;
code_r0x003eda55:
      uVar111 = (pthread_mutex_t *)0x0;
      uVar88 = (pthread_mutex_t *)0x0;
      do {
        uVar29 = *(ushort *)uVar129;
        uVar79 = uVar29 << 8 | uVar29 >> 8;
        uVar88 = uVar88 | 1L << ((ulong)(uVar79 >> 4) & 0x3f);
        uVar111 = uVar111 | 1L << ((ulong)uVar79 & 0x3f);
        uVar92 = uVar92 | 1L << ((ulong)((uVar29 & 0xff) >> 1) & 0x3f);
        param_4._0_2_ = *(ushort *)(uVar129 + 2) << 8 | *(ushort *)(uVar129 + 2) >> 8;
        lVar34._2_6_ = 0;
        lVar34._0_2_ = (ushort)param_4;
        param_4._2_6_ = 0;
        puVar23 = puVar102;
code_r0x003eda8b:
        puVar102 = puVar23;
        in_R11 = (uint *)((ulong)in_R11 | 1L << ((ulong)param_4 >> 4 & 0x3f));
        in_R10 = in_R10 | 1L << (lVar34 & 0x3fU);
        param_6 = param_6 | 1L << ((ulong)lVar34 >> 9 & 0x3f);
        uVar129 = uVar129 + 6;
      } while ((uint *)uVar129 != param_5);
      *(undefined8 *)((long)puVar102 + 0x90) = uVar88;
      *(undefined8 *)((long)puVar102 + 0x98) = uVar111;
      *(undefined8 *)((long)puVar102 + 0xa0) = uVar92;
      *(uint **)((long)puVar102 + 0x70) = in_R11;
      puVar100 = (uint *)puVar102;
code_r0x003edac3:
      *(ulong *)((long)puVar100 + 0x78) = in_R10;
      *(long *)((long)puVar100 + 0x80) = param_6;
    }
    break;
  case 1:
    *(undefined1 (*) [16])((long)puVar100 + 0xc0) = auVar279;
    *(undefined8 *)((long)puVar100 + 0xd0) = 0;
    uVar88._0_4_ = *(uint *)(lVar119 + 0x10);
code_r0x003edb23:
    *(undefined8 *)((long)puVar100 + -8) = 0x3edb3e;
    Lookup<OT::IntType<unsigned_short,2u>>::
    collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
              ((Lookup<OT::IntType<unsigned_short,2u>> *)
               ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)(lVar119 +
                   (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                           ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18)) + 0xc),
               (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                *)((long)puVar100 + 0xc0),*(int *)((long)puVar100 + 8));
    uVar88 = extraout_RDX_02;
    goto LAB_003edb73;
  case 2:
    uVar88._0_4_ = *(uint *)(lVar119 + 0x10);
    *(undefined8 *)((long)puVar100 + -8) = 0x3edaef;
    Lookup<OT::IntType<unsigned_short,2u>>::
    collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
              ((Lookup<OT::IntType<unsigned_short,2u>> *)
               ((ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                        ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) + lVar119),
               (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                *)((long)puVar100 + 0x90),*(int *)((long)puVar100 + 8));
    uVar88._0_4_ = *(uint *)(lVar119 + 0x14);
    *(undefined8 *)((long)puVar100 + -8) = 0x3edb06;
    Lookup<OT::IntType<unsigned_short,2u>>::
    collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
              ((Lookup<OT::IntType<unsigned_short,2u>> *)
               ((ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                        ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) + lVar119),
               (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                *)((long)puVar100 + 0x70),*(int *)((long)puVar100 + 8));
    uVar88 = extraout_RDX_01;
    break;
  case 3:
  case 5:
    break;
  case 4:
    *(undefined1 (*) [16])((long)puVar100 + 0xc0) = auVar279;
    *(undefined8 *)((long)puVar100 + 0xd0) = 0;
    uVar88._0_4_ = *(uint *)(lVar119 + 0x10);
    *(undefined1 **)((long)puVar100 + -8) = &LAB_003edb73;
    Lookup<OT::IntType<unsigned_short,2u>>::
    collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
              ((Lookup<OT::IntType<unsigned_short,2u>> *)
               ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)(lVar119 +
                   (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                           ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18)) + 0xc),
               (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                *)((long)puVar100 + 0xc0),*(int *)((long)puVar100 + 8));
    uVar88 = extraout_RDX_03;
LAB_003edb73:
    *(undefined8 *)((long)puVar100 + 0x90) = *(undefined8 *)((long)puVar100 + 0xc0);
    *(undefined8 *)((long)puVar100 + 0x98) = *(undefined8 *)((long)puVar100 + 200);
    *(undefined8 *)((long)puVar100 + 0xa0) = *(undefined8 *)((long)puVar100 + 0xd0);
    *(undefined8 *)((long)puVar100 + 0x70) = *(undefined8 *)((long)puVar100 + 0xc0);
    *(undefined8 *)((long)puVar100 + 0x78) = *(undefined8 *)((long)puVar100 + 200);
    *(undefined8 *)((long)puVar100 + 0x80) = *(undefined8 *)((long)puVar100 + 0xd0);
    break;
  case 6:
    if (((byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)(lVar119 + 0xf) & 1) == 0) {
      uVar88._0_4_ = *(uint *)(lVar119 + 0x14);
      *(undefined8 *)((long)puVar100 + -8) = 0x3edc67;
      Lookup<OT::IntType<unsigned_short,2u>>::
      collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                ((Lookup<OT::IntType<unsigned_short,2u>> *)
                 ((ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                          ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) + lVar119),
                 (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)((long)puVar100 + 0x90),*(int *)((long)puVar100 + 8));
      uVar88._0_4_ = *(uint *)(lVar119 + 0x18);
      *(undefined8 *)((long)puVar100 + -8) = 0x3edc7e;
      Lookup<OT::IntType<unsigned_short,2u>>::
      collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                ((Lookup<OT::IntType<unsigned_short,2u>> *)
                 ((ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                          ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) + lVar119),
                 (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)((long)puVar100 + 0x70),*(int *)((long)puVar100 + 8));
      uVar88 = extraout_RDX_04;
    }
    else {
      uVar88._0_4_ = *(uint *)(lVar119 + 0x14);
      *(undefined8 *)((long)puVar100 + -8) = 0x3edc9d;
      Lookup<OT::IntType<unsigned_int,4u>>::
      collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                ((Lookup<OT::IntType<unsigned_int,4u>> *)
                 ((ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                          ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) + lVar119),
                 (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)((long)puVar100 + 0x90),*(int *)((long)puVar100 + 8));
      uVar88._0_4_ = *(uint *)(lVar119 + 0x18);
      *(undefined8 *)((long)puVar100 + -8) = 0x3edcb4;
      Lookup<OT::IntType<unsigned_int,4u>>::
      collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                ((Lookup<OT::IntType<unsigned_int,4u>> *)
                 ((ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                          ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) + lVar119),
                 (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)((long)puVar100 + 0x70),*(int *)((long)puVar100 + 8));
      uVar88 = extraout_RDX_05;
    }
    break;
  case 7:
    *(undefined8 *)((long)puVar100 + -8) = 0x3ee6c8;
    func_0x3c57cf89();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
    goto code_r0x003eeb7e;
  case 9:
    goto code_r0x003ee923;
  case 10:
  case 0xc:
    *(byte *)lVar34 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)lVar34 + bVar78;
    goto LAB_003f0e9e;
  case 0xb:
    goto code_r0x003eecc0;
  case 0xd:
    goto code_r0x003eedb3;
  case 0xe:
    goto code_r0x003f258f;
  case 0xf:
  case 0x11:
  case 0x13:
  case 0x15:
    goto LAB_003f27fb;
  case 0x10:
    *(uint *)lVar34 = *(uint *)lVar34 >> 0x11 | *(int *)lVar34 << 0xf;
    *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
      *)(lVar116 + -0x7d) =
         (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          )0x0;
    *(byte *)uVar129 =
         (byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar129 | 0xd8;
    LOCK();
    *(int *)(uVar129 + 2) = (int)uVar129;
    UNLOCK();
    *(byte *)lVar34 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)lVar34 + bVar78;
    param_5 = &Lookup<OT::IntType<unsigned_int,4u>>::get_value::switchD_003f25c5::
               switchdataD_005e0210;
    uVar33 = 0xffffffffffe1cab6;
code_r0x003f25c2:
                    /* WARNING: Could not recover jumptable at 0x003f25c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppVar117 = (pthread_mutex_t *)(*(code *)(uVar33 + (long)param_5))();
    return ppVar117;
  case 0x12:
    goto LAB_003f265f;
  case 0x14:
    pcVar58 = (char *)((long)&UINT_005e01d4 + uVar33 + 3);
    *pcVar58 = *pcVar58 + SUB81(uVar92,1);
    uVar88._0_2_ = *(ushort *)(uVar129 + 2) << 8 | *(ushort *)(uVar129 + 2) >> 8;
    uVar88._2_6_ = 0;
    param_6._2_6_ = 0;
    param_6._0_2_ = (ushort)uVar88;
    uVar49._0_4_ = (uVar64 + (int)param_5) * (uint)(ushort)uVar88;
    uVar49._4_4_ = 0;
    in_R10 = 0;
code_r0x003f26d0:
    bVar153 = *(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                          *)(uVar129 + 0xc) + uVar49) == -1;
code_r0x003f26d6:
    iVar31 = (int)param_5;
    if (bVar153) {
      iVar121 = -(uint)(*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                    *)(uVar129 + 0xe) + uVar49) == -1);
      iVar141 = iVar121 + iVar31;
      if (iVar141 == 0 || SCARRY4(iVar121,iVar31) != iVar141 < 0) {
        return (pthread_mutex_t *)0x0;
      }
    }
    else {
      iVar141 = (int)in_R10 + iVar31;
      if (iVar141 == 0 || SCARRY4((int)in_R10,iVar31) != iVar141 < 0) {
        return (pthread_mutex_t *)0x0;
      }
    }
    lVar34 = 0;
    param_5 = (uint *)(uVar88 & 0xffff);
    in_R10 = (ulong)(iVar141 - 1);
    in_R11 = (uint *)0x0;
LAB_003f27fb:
    while( true ) {
      while( true ) {
        uVar88._0_4_ = (uint)((int)in_R10 + (int)in_R11) >> 1;
        uVar90 = (uint)lVar116;
        if ((ushort)(*(ushort *)
                      ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(uVar129 + 0xe) + param_6 * (ulong)(uint)uVar88) << 8 |
                    *(ushort *)
                     ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                       *)(uVar129 + 0xe) + param_6 * (ulong)(uint)uVar88) >> 8) <= uVar90) break;
        in_R10 = (ulong)((uint)uVar88 - 1);
        if ((int)((uint)uVar88 - 1) < (int)in_R11) {
          return (pthread_mutex_t *)lVar34;
        }
      }
      if (uVar90 <= (ushort)(*(ushort *)
                              ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                *)(uVar129 + 0xc) + param_6 * (ulong)(uint)uVar88) << 8 |
                            *(ushort *)
                             ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                               *)(uVar129 + 0xc) + param_6 * (ulong)(uint)uVar88) >> 8)) break;
      in_R11 = (uint *)(ulong)((uint)uVar88 + 1);
      if ((int)in_R10 < (int)((uint)uVar88 + 1)) {
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
        return (pthread_mutex_t *)lVar34;
      }
    }
    uVar88._0_4_ = (uint)uVar88 * (int)param_5;
    phVar32._0_4_ =
         (uint)(ushort)(*(ushort *)
                         ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                           *)(uVar129 + 0xe) + (uint)uVar88) << 8 |
                       *(ushort *)
                        ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                          *)(uVar129 + 0xe) + (uint)uVar88) >> 8);
    if ((uVar90 < (uint)phVar32) ||
       ((ushort)(*(ushort *)
                  ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)(uVar129 + 0xc) + (uint)uVar88) << 8 |
                *(ushort *)
                 ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   *)(uVar129 + 0xc) + (uint)uVar88) >> 8) < uVar90)) {
      return (pthread_mutex_t *)0x0;
    }
    return (pthread_mutex_t *)
           ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
             *)((ulong)(ushort)(*(ushort *)
                                 ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                   *)(uVar129 + 0x10) + (uint)uVar88) << 8 |
                               *(ushort *)
                                ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                  *)(uVar129 + 0x10) + (uint)uVar88) >> 8) + uVar129) +
           (ulong)(uVar90 - (uint)phVar32) * 4);
  case 0x16:
    plVar125 = (long *)((long)puVar100 + -8);
    *(undefined8 *)((long)puVar100 + -8) = uVar113;
    cVar27 = '\x0e';
    do {
      uVar113 = uVar113 + -8;
      plVar125 = plVar125 + -1;
      *plVar125 = *(long *)uVar113;
      cVar27 = cVar27 + -1;
    } while ('\0' < cVar27);
    *(undefined1 **)((long)puVar100 + -0x80) = (undefined1 *)((long)puVar100 + -8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x17:
    *(undefined8 *)((long)puVar100 + -8) = uVar129;
LAB_003f2b4e:
    lVar34._0_4_ = (uint)((double)*(int *)(uVar92 + 0x2c) * 0.8);
    lVar34._4_4_ = 0;
LAB_003f2b62:
    *(int *)lVar119 = *(int *)lVar119 + (int)uVar113;
    *puVar147 = *puVar147 - (int)lVar34;
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
    return (pthread_mutex_t *)lVar34;
  case 0x18:
  case 0x1a:
  case 0x1c:
  case 0x1e:
    goto LAB_003f2db7;
  case 0x19:
    goto LAB_003f2b62;
  case 0x1b:
    goto LAB_003f2c30;
  case 0x1d:
                    /* WARNING (jumptable): Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
    _DAT_005e01d8 = 0xc1b0a9ff;
    return (pthread_mutex_t *)lVar34;
  case 0x1f:
    pcVar58 = (char *)(lVar34 & 0xffffffffffffff54);
    *pcVar58 = *pcVar58 + (bVar78 & 0x54);
    uVar129 = uVar129 + 0xc;
    param_5 = (uint *)(uVar88 & 0xffff);
    lVar34._0_4_ = (int)pcVar58 - 1;
    lVar34._4_4_ = 0;
    uVar88 = (pthread_mutex_t *)0x0;
    goto LAB_003f2d3d;
  case 0x20:
    goto code_r0x003f30f2;
  case 0x21:
  case 0x23:
  case 0x25:
  case 0x27:
  case 0x29:
    goto code_r0x003f3804;
  case 0x22:
    LOCK();
    *(undefined4 *)(uVar92 + -1) = 0x5e01d8;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x26:
    *(char *)uVar129 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar129 + -0x28;
    puVar112 = (undefined1 *)((long)puVar100 + -8);
    *(undefined8 *)((long)puVar100 + -8) = uVar113;
    puVar69 = (uint *)((long)puVar100 + -0x4c2);
    *(byte *)lVar34 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)lVar34 + bVar78;
    goto code_r0x003f364d;
  case 0x28:
    *(byte *)lVar34 =
         (byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)lVar34 >> 7 |
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)lVar34 << 1;
    goto code_r0x003f380a;
  case 0x2a:
    goto code_r0x003f30b0;
  case 0x2b:
    goto code_r0x003f3958;
  case 0x2c:
  case 0x2e:
  case 0x30:
  case 0x32:
  case 0x34:
    uVar92._1_1_ = 0;
    uVar92._0_1_ = (byte)uVar96;
    uVar92._2_6_ = uVar96._2_6_;
    goto LAB_003f3d3d;
  case 0x2d:
                    /* WARNING: Could not emulate address calculation at 0x003f39fc */
                    /* WARNING: Treating indirect jump as call */
    ppVar117 = (pthread_mutex_t *)
               (*(code *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::
                                 collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                                 ::switchD_003f3a03::switchdataD_005e0284 +
                         (long)(int)(&Lookup<OT::IntType<unsigned_int,4u>>::
                                      collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                                      ::switchD_003f3a03::switchdataD_005e0284)[lVar34]))();
    return ppVar117;
  case 0x2f:
    *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
      *)(uVar113 + 0x17807c3) =
         (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          )((char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)(uVar113 + 0x17807c3) + -0x28);
    uVar49 = lVar34 | 0x44;
    puVar144._0_4_ = (int)puVar144 - 1;
    puVar144._4_4_ = 0;
    uVar111 = (pthread_mutex_t *)0x0;
    lVar119 = (long)&_hb_NullPool;
    goto LAB_003f3b00;
  case 0x31:
    puVar69 = (uint *)((long)puVar100 + -8);
    *(undefined8 *)((long)puVar100 + -8) = 0xffe0d933ffe0d854;
    uVar49._0_4_ = in((short)uVar88);
    uVar49._4_4_ = 0;
    lVar119 = (long)&_hb_NullPool;
    goto LAB_003f3c00;
  case 0x33:
LAB_003f3cdb:
    lVar116 = uVar92 + 0xc;
    uVar129._0_4_ = ((int)uVar88 + (int)param_4) - 1;
    uVar129._4_4_ = 0;
    uVar88 = (pthread_mutex_t *)0x0;
    param_6 = (long)&_hb_NullPool;
    uVar96 = uVar92;
    goto LAB_003f3cf0;
  case 0x35:
    *(byte *)uVar129 =
         (byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar129 | 0xd8;
    uVar96._1_1_ = 0xc9;
    goto LAB_003f3cf0;
  case 0x36:
    *(byte *)lVar34 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)lVar34 + bVar78;
    *(byte *)lVar34 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)lVar34 + bVar78;
    goto code_r0x003f3f23;
  case 0x37:
    goto code_r0x003f3f89;
  case 0x38:
    goto code_r0x003f4587;
  case 0x39:
  case 0x3b:
    goto code_r0x003f3df8;
  case 0x3a:
    *(char *)param_5 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)param_5 + (char)param_5;
    *(byte *)lVar34 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)lVar34 + bVar78;
    goto LAB_003f4620;
  case 0x3c:
    if (!SCARRY8(uVar33,0x5e01d8)) {
      pshufw(in_MM3,in_MM3,0xe6);
      goto LAB_003f4b90;
    }
    *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
      *)(lVar116 + 0xf) =
         (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          )((byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)(lVar116 + 0xf) | SUB81(lVar34,1));
    in_XMM4 = auVar279;
    goto code_r0x003f4c01;
  case 0x3d:
    uRam00000000011a0588 = 0x6574e939;
    goto LAB_003f4efd;
  case 0x3e:
  case 0x40:
  case 0x42:
  case 0x44:
  case 0x46:
    goto code_r0x003f519f;
  case 0x3f:
    goto code_r0x003f4f2b;
  case 0x41:
    *(uint *)((long)puVar100 + 0x1c) = uVar64;
    goto code_r0x003f4f4c;
  case 0x43:
    goto code_r0x003f5133;
  case 0x45:
    *(int *)(&UNK_005e0161 + uVar33) = *(int *)(&UNK_005e0161 + uVar33) + -1;
    return (pthread_mutex_t *)lVar34;
  case 0x47:
    return (pthread_mutex_t *)lVar34;
  case 0x48:
    pcVar58 = (char *)CONCAT71(uVar62,bVar78 & (byte)*(
                                                  hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                                  *)uVar88);
    *pcVar58 = *pcVar58 +
               (bVar78 & (byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                 *)uVar88);
    goto code_r0x003f7f59;
  default:
    if ((long)uVar33 < -0x5e01d8) {
      cVar27 = bVar78 + 0x85;
      pcVar58 = (char *)CONCAT71(uVar62,cVar27);
      *pcVar58 = *pcVar58 + cVar27;
      *pcVar58 = *pcVar58 + cVar27;
      goto code_r0x003f7e92;
    }
    *(byte *)lVar34 =
         ((char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)lVar34 - bVar78) - bVar153;
    bVar153 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                *)lVar34 ==
              (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
               )0x0;
    goto code_r0x003f7e8c;
  case 0x4f:
    *(byte *)lVar34 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)lVar34 + bVar78;
    (&UNK_005e0163)[uVar33] = (&UNK_005e0163)[uVar33] + -0x28;
    uVar64 = uVar64 & 0xffffff08;
    goto code_r0x003f7eff;
  case 0x50:
    uVar49._4_4_ = 0;
    uVar49._0_4_ = *(uint *)(uVar129 + uVar92);
    goto code_r0x003f7fb9;
  case 0x53:
    *(int *)lVar34 = *(int *)lVar34 + 1;
    *(byte *)lVar34 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)lVar34 + bVar78;
    goto code_r0x003f8008;
  case 0x61:
    param_4._4_4_ = 0;
    param_4._0_4_ = *(uint *)(lVar116 + 0x1780760);
code_r0x003f801b:
                    /* WARNING: Could not recover jumptable at 0x003f8027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppVar117 = (pthread_mutex_t *)
               (*(code *)((long)*(int *)((long)puVar147 + param_4 * 4) + (long)puVar147))();
    return ppVar117;
  case 0x62:
    goto code_r0x003f7fcb;
  case 0x66:
    param_4 = &DAT_005e01d8;
    goto code_r0x003f7fe5;
  case 0x82:
    *(byte *)lVar34 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)lVar34 + bVar78;
    *(char *)uVar129 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar129 + -0x28;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x84:
    LOCK();
    *(int *)((ulong)(*(int *)uVar129 + 0x5e01d8 + (uint)bVar153) - 1) = (int)puVar100;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x86:
    if ((uint)uVar113 == uVar64) goto _hb_ot_shape_switchD_003f8054_caseD_2015;
    goto LAB_003f807d;
  case 0xa2:
    goto code_r0x003f7fa7;
  case 0xa4:
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
    halt_baddata();
  case 0xa5:
    goto code_r0x003f7de1;
  case 0xa6:
    *(byte *)lVar34 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)lVar34 + bVar78;
    phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                *)(uVar92 + 0x78891079);
    hVar8 = *phVar107;
    *phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 )((char)*phVar107 + -0x28);
    hVar4 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              *)uVar129;
    hVar5 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              *)uVar129;
    *(byte *)uVar129 = ((char)hVar5 - 0x28U) + (0x27 < (byte)hVar8);
                    /* WARNING (jumptable): Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e01d9) is written */
    _DAT_005e01d8 =
         CONCAT31(_UNK_005e01d9,
                  bVar78 + 0x54 +
                  (0x27 < (byte)hVar4 || CARRY1((char)hVar5 - 0x28U,0x27 < (byte)hVar8)));
    goto LAB_003f7db0;
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
    goto code_r0x003f7d14;
  case 0xb7:
    goto code_r0x003f7e15;
  case 0xb8:
    goto code_r0x003f7e1c;
  case 0xb9:
  case 0xbb:
    out((short)uVar88,uVar64);
    puVar108 = (undefined8 *)puVar100;
code_r0x003fd07d:
    *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
      *)param_4 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   )0x0;
    puVar100 = (uint *)puVar108;
    goto LAB_003fd080;
  case 0xba:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xc0:
  case 0xc1:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
  case 0xf1:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7:
  case 0xf8:
  case 0xf9:
  case 0xfa:
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0xfe:
  case 0xff:
    out(0xfe,bVar78);
    goto LAB_003fd072;
  case 0xbc:
    goto code_r0x003fd0fd;
  }
LAB_003edba0:
  iVar31 = (int)puVar144;
  param_4 = *(long *)((long)puVar100 + 0x10);
  phVar32._0_4_ = (int)param_4 + 1;
  phVar32._4_4_ = 0;
  uVar90 = *(uint *)((long)puVar100 + 0xc);
  lVar116._4_4_ = 0;
  lVar116._0_4_ = uVar90;
  if ((int)param_4 < (int)uVar90) {
    lVar34 = *(ulong *)((long)puVar100 + 0xa8) & 0xffffffff;
    uVar92 = puVar147;
LAB_003edbdc:
    lVar143 = (param_4 & 0xffffffff) * 0x30;
    *(undefined8 *)((long)(uVar92 + 0x28) + lVar143) = *(undefined8 *)((long)puVar100 + 0x80);
    uVar129 = *(undefined8 *)((long)puVar100 + 0x78);
    *(undefined8 *)
     ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
       *)(uVar92 + 0x18) + lVar143) = *(undefined8 *)((long)puVar100 + 0x70);
    *(undefined8 *)
     ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
       *)(uVar92 + 0x18) + lVar143 + 8) = uVar129;
    uVar129 = *(undefined8 *)((long)puVar100 + 0x98);
    *(undefined8 *)(uVar92 + lVar143) = *(undefined8 *)((long)puVar100 + 0x90);
    *(undefined8 *)
     ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
       *)(uVar92 + lVar143) + 8) = uVar129;
    *(undefined8 *)
     ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
       *)(uVar92 + 0x10) + lVar143) = *(undefined8 *)((long)puVar100 + 0xa0);
    param_4 = (ulong)phVar32 & 0xffffffff;
    uVar113 = (ulong)phVar32 & 0xffffffff;
    uVar83 = uVar88;
    uVar129 = uVar92;
    puVar147 = (uint *)uVar92;
  }
  else {
    bVar153 = (int)uVar90 < 0;
    lVar34 = *(long *)((long)puVar100 + 0xa8);
code_r0x003edbca:
    iVar31 = (int)puVar144;
    uVar83 = uVar88;
    uVar90 = (uint)lVar34;
    if (!bVar153) {
      if ((uint)lVar116 < (uint)phVar32) {
        uVar83 = lVar116 & 0xffffffff;
        pvVar57 = *(void **)((long)puVar100 + 0xb8);
        do {
          uVar83._0_4_ = (uint)uVar83 + ((uint)uVar83 >> 1) + 8;
          uVar83._4_4_ = 0;
        } while ((uint)uVar83 < (uint)phVar32);
        if (0x5555555 < (uint)uVar83) {
LAB_003edd41:
          lVar116._0_4_ = ~(uint)lVar116;
          lVar116._4_4_ = 0;
          uVar90 = (uint)lVar116;
          goto LAB_003edd45;
        }
        lVar34 = uVar83;
        lVar116 = uVar83;
        if ((uint)uVar83 == 0) {
          *(undefined8 *)((long)puVar100 + -8) = 0x3edd14;
          free(pvVar57);
          uVar92 = ((pthread_mutex_t *)0x0)->__size;
          param_4 = *(long *)((long)puVar100 + 0x10);
          uVar88 = extraout_RDX_07;
        }
        else {
          *(undefined8 *)((long)puVar100 + -8) = 0x3edcf2;
          uVar92 = realloc(pvVar57,(ulong)(uint)uVar83 * 0x30);
          uVar88 = extraout_RDX_06;
          if ((pthread_mutex_t *)uVar92 == (pthread_mutex_t *)0x0) {
            *(void **)((long)puVar100 + 0x68) = pvVar57;
            lVar116._4_4_ = 0;
            lVar116._0_4_ = *(uint *)((long)puVar100 + 0xc);
            param_4 = *(long *)((long)puVar100 + 0x10);
            bVar153 = *(uint *)((long)puVar100 + 0xc) < (uint)uVar83;
            uVar83 = extraout_RDX_06;
            if (bVar153) goto LAB_003edd41;
            lVar34 = *(ulong *)((long)puVar100 + 0xa8) & 0xffffffff;
            uVar92 = puVar147;
          }
          else {
            param_4 = *(long *)((long)puVar100 + 0x10);
          }
        }
      }
      else {
        lVar34 = lVar34 & 0xffffffff;
        uVar92 = puVar147;
      }
      goto LAB_003edbdc;
    }
LAB_003edd45:
    uVar113._4_4_ = 0;
    uVar113._0_4_ = *(uint *)((long)puVar100 + 0x1c);
    uVar92 = *(long *)((long)puVar100 + 0x68);
    DAT_0071cda0 = 0;
    _DAT_0071cda8 = 0;
    DAT_0071cd90 = 0;
    _DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    _DAT_0071cd88 = 0;
    lVar34._4_4_ = 0;
    lVar34._0_4_ = uVar90;
    phVar32._4_4_ = 0;
    phVar32._0_4_ = *(uint *)((long)puVar100 + 0x1c);
    uVar129 = *(long *)((long)puVar100 + 0xb8);
  }
  uVar88._0_4_ = *(uint *)lVar119;
  lVar119 = lVar119 + (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                              ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18);
  puVar144._0_4_ = iVar31 + 1;
  puVar144._4_4_ = 0;
  uVar88 = uVar83;
  param_5 = (uint *)lVar34;
  if ((uint)puVar144 == *(uint *)((long)puVar100 + 0xb4)) {
    lVar116 = *(long *)((long)puVar100 + 0x60);
    iVar31 = *(int *)(lVar116 + 8);
    *(int *)(lVar116 + 8) = (int)lVar34;
    *(int *)(lVar116 + 0xc) = (int)phVar32;
    pvVar57 = *(void **)(lVar116 + 0x10);
    *(uint **)(lVar116 + 0x10) = puVar147;
    if (iVar31 != 0) {
      *(undefined8 *)((long)puVar100 + -8) = 0x3eddaa;
      free(pvVar57);
    }
    *(undefined8 *)((long)puVar100 + -8) = 0x3eddb4;
    ppVar117 = (pthread_mutex_t *)
               hb_sanitize_context_t::~hb_sanitize_context_t
                         ((hb_sanitize_context_t *)((long)puVar100 + 0x20));
    return ppVar117;
  }
  goto LAB_003ed9c0;
LAB_003f2d3d:
  uVar90 = (int)lVar34 + (uint)uVar88 >> 1;
  uVar29 = (ushort)((__pthread_mutex_s *)(uVar129 + in_R10 * uVar90))->__lock;
  phVar32._0_4_ = (uint)(ushort)(uVar29 << 8 | uVar29 >> 8);
  if ((uint)lVar116 < (uint)phVar32) {
    uVar90 = uVar90 - 1;
    lVar34._4_4_ = 0;
    lVar34._0_4_ = uVar90;
    bVar155 = SBORROW4((uint)uVar88,uVar90);
    bVar154 = (int)((uint)uVar88 - uVar90) < 0;
    bVar153 = (uint)uVar88 == uVar90;
code_r0x003f2d37:
    if (!bVar153 && bVar155 == bVar154) goto LAB_003f2e36;
    goto LAB_003f2d3d;
  }
  if ((uint)phVar32 == (uint)lVar116) {
    param_6 = uVar129 + (ulong)(uVar90 * (int)param_5);
    goto LAB_003f2e36;
  }
  uVar88._4_4_ = 0;
  uVar88._0_4_ = uVar90 + 1;
  if ((int)lVar34 < (int)(uVar90 + 1)) {
LAB_003f2e36:
    ppVar117 = (pthread_mutex_t *)(param_6 + 2);
    if ((pthread_mutex_t *)param_6 == (pthread_mutex_t *)0x0) {
      ppVar117 = (pthread_mutex_t *)0x0;
    }
    return ppVar117;
  }
  goto LAB_003f2d3d;
code_r0x003eeb7e:
  *(undefined8 *)((long)puVar69 + 0x38) = *(undefined8 *)(uVar111 + 0x70);
  *(undefined8 *)((long)puVar69 + 0x50) = *(undefined8 *)(uVar111 + 0x80);
  uVar92 = (pthread_mutex_t *)0x0;
  do {
    iVar31 = (int)uVar92;
    uVar66 = *(long *)((long)puVar69 + 0x38);
    if ((*(uint *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)(uVar66 + 4) + uVar92 * 0x14) & *(uint *)((long)puVar69 + 8)) == 0) {
      uVar92._0_4_ = iVar31 + 1;
      uVar92._4_4_ = 0;
    }
    else {
      *(int *)((long)puVar69 + 0x88) = iVar31;
      lVar116 = *(long *)((long)puVar69 + 0x90);
      uVar66 = *(long *)(lVar116 + 0xa0);
      iVar121 = *(int *)(uVar66 + 0x60);
      *(int *)((long)puVar69 + 0xc0) = iVar121;
      iVar141 = *(int *)(uVar66 + 0x5c);
      *(long *)((long)puVar69 + 0x40) = uVar92 * 5;
      if (iVar141 == iVar31) {
        uVar26 = *(undefined1 *)(*(long *)(uVar66 + 0x70) + 0xf + uVar92 * 0x14);
      }
      else {
        uVar26 = 0;
      }
      if (*(char *)((long)puVar69 + 0xa3) == '\0') {
        uVar26 = 0;
      }
      *(undefined1 *)((long)puVar69 + 0xa4) = uVar26;
      iVar121 = iVar121 + -1;
      if (iVar31 < iVar121) {
        *(int *)((long)puVar69 + 0x30) = iVar31;
        uVar94 = uVar92;
        do {
          uVar88._0_4_ = (int)uVar92 + 1;
          uVar33 = (ulong)(uint)uVar88;
          *(uint *)((long)puVar69 + 0x88) = (uint)uVar88;
          lVar119 = *(long *)(uVar66 + 0x70);
          uVar88._0_4_ = *(uint *)((long)puVar69 + 0x98);
          uVar29 = *(ushort *)(lVar119 + 0xc + uVar33 * 0x14);
          uVar66._2_6_ = 0;
          uVar66._0_2_ = uVar29;
          if (((uint)uVar88 & uVar29 & 0xe) != 0) goto LAB_003f088e;
          puVar100 = (uint *)(lVar119 + uVar33 * 0x14);
          if ((uVar29 & 8) == 0) {
LAB_003f07a9:
            lVar116 = lVar119 + uVar33 * 0x14;
            uVar29 = *(ushort *)(lVar119 + 0x10 + uVar33 * 0x14);
            uVar79 = 0;
            bVar153 = false;
            if (((((uVar29 & 0x20) != 0) &&
                 (bVar153 = false, (*(byte *)(lVar116 + 0xc) & 0x10) == 0)) &&
                ((*(char *)((long)puVar69 + 0xa0) != '\0' ||
                 (bVar153 = false, (uVar29 & 0x21f) != 0x201)))) &&
               ((*(char *)((long)puVar69 + 0xa1) != '\0' ||
                (bVar153 = false, (uVar29 & 0x11f) != 0x101)))) {
              bVar153 = (uVar29 & 0x40) == 0 || *(char *)((long)puVar69 + 0xa2) != '\0';
            }
            uVar66 = *(long *)((long)puVar69 + 0xb8);
            if ((pthread_mutex_t *)uVar66 != (pthread_mutex_t *)0x0) {
              uVar79 = *(ushort *)uVar66 << 8 | *(ushort *)uVar66 >> 8;
            }
            if (((*(uint *)(lVar119 + 4 + uVar33 * 0x14) & *(uint *)((long)puVar69 + 0x9c)) != 0) &&
               ((*(char *)((long)puVar69 + 0xa4) == '\0' ||
                (*(char *)((long)puVar69 + 0xa4) == *(char *)(lVar116 + 0xf))))) {
              if (*(code **)((long)puVar69 + 0xa8) == (code *)0x0) {
                if (bVar153) goto LAB_003f088e;
              }
              else {
                *(undefined8 *)((long)puVar69 + -8) = 0x3f087d;
                cVar27 = (**(code **)((long)puVar69 + 0xa8))
                                   (puVar100,uVar79,*(undefined8 *)((long)puVar69 + 0xb0));
                in_XMM1._8_8_ = extraout_XMM1_Qb_08;
                in_XMM1._0_8_ = extraout_XMM1_Qa_05;
                auVar279._8_8_ = extraout_XMM0_Qb_06;
                auVar279._0_8_ = extraout_XMM0_Qa_03;
                uVar94._4_4_ = 0;
                uVar94._0_4_ = *(uint *)((long)puVar69 + 0x30);
                if (cVar27 == '\0') goto LAB_003f0885;
                uVar66 = *(long *)((long)puVar69 + 0xb8);
              }
              if ((pthread_mutex_t *)uVar66 != (pthread_mutex_t *)0x0) {
                *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  **)((long)puVar69 + 0xb8) =
                     (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)(uVar66 + 2);
              }
              uVar88._0_4_ = *(uint *)(*(long *)((long)puVar69 + 0x38) +
                                      *(long *)((long)puVar69 + 0x40) * 4);
              lVar119 = *(long *)((long)puVar69 + 0x10);
              uVar66._4_4_ = 0;
              uVar66._0_4_ = (uint)uVar88 >> 4;
              uVar111 = *(long *)((long)puVar69 + 0x20);
              if ((((*(ulong *)(lVar119 + 0xb0) >> (uVar66 & 0x3f) & 1) != 0) &&
                  ((*(ulong *)(lVar119 + 0xb8) >> ((ulong)(uint)uVar88 & 0x3f) & 1) != 0)) &&
                 (uVar66._4_4_ = 0, uVar66._0_4_ = (uint)uVar88 >> 9,
                 (*(ulong *)(lVar119 + 0xc0) >> (uVar66 & 0x3f) & 1) != 0)) {
                uVar90 = *(uint *)((long)puVar69 + 0x88);
                uVar33 = (ulong)uVar90;
                phVar32._0_4_ = *(uint *)(*(long *)((long)puVar69 + 0x38) + uVar33 * 0x14);
                uVar66._4_4_ = 0;
                uVar66._0_4_ = (uint)phVar32 >> 4;
                if (((((ulong)((pthread_mutex_t *)(lVar119 + 200))->__align >> (uVar66 & 0x3f) & 1)
                      != 0) &&
                    ((*(ulong *)(lVar119 + 0xd0) >> ((ulong)(uint)phVar32 & 0x3f) & 1) != 0)) &&
                   (uVar66._0_4_ = (uint)phVar32 >> 9, uVar66._4_4_ = 0,
                   (*(ulong *)(lVar119 + 0xd8) >> (uVar66 & 0x3f) & 1) != 0)) {
                  *(undefined8 *)((long)puVar69 + -8) = 0x3f09b9;
                  uVar66 = lVar119;
                  uVar88._0_4_ = KerxSubTableFormat2<AAT::KerxSubTableHeader>::get_kerning
                                           (*(KerxSubTableFormat2<AAT::KerxSubTableHeader> **)
                                             ((long)puVar69 + 0x58),(uint)uVar88,(uint)phVar32,
                                            lVar119);
                  auVar279 = extraout_XMM0_13;
                  if ((uint)uVar88 != 0) {
                    if (*(int *)((long)puVar69 + 0x60) == 4) {
                      iVar31 = (int)((ulong)((long)(short)(uint)uVar88 *
                                             *(long *)(*(long *)((long)puVar69 + 0x48) + 0x58) +
                                            0x8000) >> 0x10);
                      if (((ulong)puVar144 & 0x40000000) != 0) {
                        uVar66 = *(long *)((long)puVar69 + 0x50);
                        *(int *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                  *)(uVar66 + 0xc) + uVar33 * 0x14) = iVar31;
                        goto LAB_003f0a68;
                      }
                      uVar66._0_4_ = iVar31 >> 1;
                      uVar66._4_4_ = 0;
                      lVar116 = *(long *)((long)puVar69 + 0x50);
                      *(int *)(lVar116 + *(long *)((long)puVar69 + 0x40) * 4) =
                           *(int *)(lVar116 + *(long *)((long)puVar69 + 0x40) * 4) + (uint)uVar66;
                      piVar53 = (int *)(lVar116 + uVar33 * 0x14);
                      *piVar53 = *piVar53 + (iVar31 - (uint)uVar66);
                      piVar53 = (int *)(lVar116 + 8 + uVar33 * 0x14);
                      *piVar53 = *piVar53 + (iVar31 - (uint)uVar66);
                    }
                    else {
                      iVar31 = (int)((ulong)((long)(short)(uint)uVar88 *
                                             *(long *)(*(long *)((long)puVar69 + 0x48) + 0x60) +
                                            0x8000) >> 0x10);
                      if (((ulong)puVar144 & 0x40000000) == 0) {
                        uVar66._0_4_ = iVar31 >> 1;
                        uVar66._4_4_ = 0;
                        lVar116 = *(long *)((long)puVar69 + 0x50);
                        piVar53 = (int *)(lVar116 + 4 + *(long *)((long)puVar69 + 0x40) * 4);
                        *piVar53 = *piVar53 + (uint)uVar66;
                        piVar53 = (int *)(lVar116 + 4 + uVar33 * 0x14);
                        *piVar53 = *piVar53 + (iVar31 - (uint)uVar66);
                        piVar53 = (int *)(lVar116 + 0xc + uVar33 * 0x14);
                        *piVar53 = *piVar53 + (iVar31 - (uint)uVar66);
                      }
                      else {
                        uVar66 = *(long *)((long)puVar69 + 0x50);
                        *(int *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                  *)(uVar66 + 8) + uVar33 * 0x14) = iVar31;
LAB_003f0a68:
                        *(byte *)(*(long *)((long)puVar69 + 0x20) + 0xc0) =
                             *(byte *)(*(long *)((long)puVar69 + 0x20) + 0xc0) | 8;
                      }
                    }
                    uVar111 = *(long *)((long)puVar69 + 0x20);
                    *(undefined8 *)((long)puVar69 + -8) = 0x3f0a8c;
                    auVar279 = hb_buffer_t::unsafe_to_break
                                         ((hb_buffer_t *)uVar111,*(uint *)((long)puVar69 + 0x30),
                                          uVar90 + 1);
                    in_XMM1._0_8_ = auVar279._8_8_;
                    in_XMM1._8_8_ = extraout_XMM1_Qb_09;
                    auVar279._8_8_ = extraout_XMM0_Qb_07;
                    lVar119 = *(long *)((long)puVar69 + 0x10);
                  }
                }
              }
              uVar92._4_4_ = 0;
              uVar92._0_4_ = *(uint *)((long)puVar69 + 0x88);
              goto LAB_003f06e1;
            }
LAB_003f0885:
            iVar31 = (int)uVar94;
            if (!bVar153) break;
          }
          else if (((uint)uVar88 & 0x10) == 0) {
            if ((((uint)uVar88 & 0xff00) == 0) ||
               (uVar66._0_4_ = uVar29 & 0xff00, uVar66._4_4_ = 0,
               ((uint)uVar88 & 0xff00) == (uint)uVar66)) goto LAB_003f07a9;
          }
          else {
            uVar90 = *puVar100;
            paVar54 = *(accelerator_t **)(lVar116 + 0xf8);
            *(undefined8 *)((long)puVar69 + -8) = 0x3f08ee;
            uVar129 = OT::GDEF::accelerator_t::mark_set_covers(paVar54,(uint)uVar88 >> 0x10,uVar90);
            uVar94._4_4_ = 0;
            uVar94._0_4_ = *(uint *)((long)puVar69 + 0x30);
            auVar279 = extraout_XMM0_12;
            if ((char)uVar129 != '\0') goto LAB_003f07a9;
          }
LAB_003f088e:
          iVar31 = (int)uVar94;
          uVar92._4_4_ = 0;
          uVar92._0_4_ = *(uint *)((long)puVar69 + 0x88);
          if (iVar121 <= (int)*(uint *)((long)puVar69 + 0x88)) break;
          lVar116 = *(long *)((long)puVar69 + 0x90);
          uVar66 = *(long *)(lVar116 + 0xa0);
        } while( true );
      }
      uVar92._0_4_ = iVar31 + 1;
      uVar92._4_4_ = 0;
      lVar119 = *(long *)((long)puVar69 + 0x10);
      uVar111 = *(long *)((long)puVar69 + 0x20);
    }
LAB_003f06e1:
  } while ((uint)uVar92 < *(uint *)((long)puVar69 + 0x2c));
LAB_003f0e70:
  *(undefined8 *)((long)puVar69 + -8) = 0x3f0e86;
  hb_buffer_t::message
            (auVar279._0_8_,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
             in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)uVar111,
             *(undefined8 *)((long)puVar69 + 0x48),"end kern",uVar66,param_5,param_6,
             *(undefined1 *)puVar69);
LAB_003f0e9e:
  *(undefined8 *)((long)puVar69 + -8) = 0x3f0eab;
  free(*(void **)((long)puVar69 + 0x188));
  *(undefined8 *)((long)puVar69 + -8) = 0x3f0eb8;
  auVar279 = hb_sanitize_context_t::~hb_sanitize_context_t
                       ((hb_sanitize_context_t *)((long)puVar69 + 0x128));
  in_XMM1._0_8_ = auVar279._8_8_;
  in_XMM1._8_8_ = extraout_XMM1_Qb_10;
  auVar279._8_8_ = extraout_XMM0_Qb_08;
LAB_003f0ec0:
  do {
    uVar129 = auVar279._0_8_;
    lVar116 = *(long *)(*(long *)(lVar119 + 0x58) + 0x10);
    *(long *)(lVar119 + 0x30) = lVar116;
    uVar88._0_4_ = *(uint *)(*(long *)(lVar119 + 0x58) + 0x18);
    *(ulong *)(lVar119 + 0x38) = lVar116 + (ulong)(uint)uVar88;
    *(uint *)(lVar119 + 0x40) = (uint)uVar88;
    phVar32 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                **)((long)puVar69 + 0x58);
    lVar34 = *(long *)((long)puVar69 + 0x240);
    if (*(char *)((long)puVar69 + 0x1f) == '\0') {
      lVar116 = *(long *)(lVar119 + 0x20);
      uVar88._0_4_ = *(uint *)(lVar116 + 0x60);
      if (1 < (uint)uVar88) {
        puVar84 = *(undefined8 **)(lVar116 + 0x70);
        uVar33 = (ulong)((uint)uVar88 - 1);
        puVar131 = (undefined8 *)((long)puVar84 + uVar33 * 0x14);
        ppVar117 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
        do {
          uVar33 = uVar33 - 1;
          *(undefined4 *)((long)puVar69 + 0x90) = *(undefined4 *)(puVar131 + 2);
          uVar129 = puVar131[1];
          *(undefined8 *)((long)puVar69 + 0x80) = *puVar131;
          *(undefined8 *)((long)puVar69 + 0x88) = uVar129;
          *(undefined4 *)(puVar131 + 2) = *(undefined4 *)(puVar84 + 2);
          uVar129 = puVar84[1];
          *puVar131 = *puVar84;
          puVar131[1] = uVar129;
          *(undefined4 *)(puVar84 + 2) = *(undefined4 *)((long)puVar69 + 0x90);
          uVar129 = *(undefined8 *)((long)puVar69 + 0x80);
          uVar111 = *(undefined8 *)((long)puVar69 + 0x88);
          *puVar84 = uVar129;
          puVar84[1] = uVar111;
          ppVar117 = (pthread_mutex_t *)(ppVar117->__size + 1);
          uVar92 = uVar33 & 0xffffffff;
          puVar84 = (undefined8 *)((long)puVar84 + 0x14);
          puVar131 = (undefined8 *)((long)puVar131 + -0x14);
        } while (ppVar117 < (ulong)uVar92);
      }
      if (*(char *)(lVar116 + 0x5b) != '\0') {
        if (*(uint *)(lVar116 + 0x60) < (uint)uVar88) {
          uVar88._0_4_ = *(uint *)(lVar116 + 0x60);
        }
        if (1 < (uint)uVar88) {
          puVar84 = *(undefined8 **)(lVar116 + 0x80);
          uVar33 = (ulong)((uint)uVar88 - 1);
          puVar131 = (undefined8 *)((long)puVar84 + uVar33 * 0x14);
          uVar152 = 0;
          do {
            uVar33 = uVar33 - 1;
            *(undefined4 *)((long)puVar69 + 0x90) = *(undefined4 *)(puVar131 + 2);
            uVar129 = puVar131[1];
            *(undefined8 *)((long)puVar69 + 0x80) = *puVar131;
            *(undefined8 *)((long)puVar69 + 0x88) = uVar129;
            *(undefined4 *)(puVar131 + 2) = *(undefined4 *)(puVar84 + 2);
            uVar129 = puVar84[1];
            *puVar131 = *puVar84;
            puVar131[1] = uVar129;
            *(undefined4 *)(puVar84 + 2) = *(undefined4 *)((long)puVar69 + 0x90);
            uVar129 = *(undefined8 *)((long)puVar69 + 0x80);
            uVar88 = *(undefined8 *)((long)puVar69 + 0x88);
            *puVar84 = uVar129;
            puVar84[1] = uVar88;
            uVar152 = uVar152 + 1;
            puVar84 = (undefined8 *)((long)puVar84 + 0x14);
            puVar131 = (undefined8 *)((long)puVar131 + -0x14);
          } while (uVar152 < (uVar33 & 0xffffffff));
        }
      }
    }
    uVar111 = *(undefined8 *)(lVar119 + 0x10);
    phVar140 = *(hb_buffer_t **)(lVar119 + 0x20);
    uVar88._0_4_ = *(uint *)(lVar119 + 0xe4);
    *(undefined8 *)((long)puVar69 + -8) = 0x3f100d;
    hb_buffer_t::message
              (uVar129,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
               in_XMM6._0_8_,in_XMM7._0_8_,phVar140,uVar111,"end subtable %u",(ulong)(uint)uVar88,
               param_5,param_6,*(undefined1 *)puVar69);
    puVar147 = *(uint **)((long)puVar69 + 0x248);
    uVar111 = extraout_XMM0_Qa_07;
    do {
      do {
        uVar88._0_4_ = *(uint *)phVar32;
        uVar90 = *(int *)(lVar119 + 0xe4) + 1;
        *(uint *)(lVar119 + 0xe4) = uVar90;
        lVar116 = *(long *)((long)puVar69 + 0x78);
        *(long *)((long)puVar69 + 0x78) = lVar116 + 1;
        if (lVar116 + 1 == lVar34) {
          return (pthread_mutex_t *)(ulong)(uint)uVar88;
        }
        phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   *)((long)phVar32 +
                     (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                             ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18));
        uVar129 = *(undefined8 *)(lVar119 + 0x20);
        uVar88._0_4_ = *(uint *)((long)phVar32 + 4);
        bVar153 = ((uint)uVar88 & 0x80) == 0;
        uVar92._1_7_ = (undefined7)((ulong)uVar92 >> 8);
        uVar92._0_1_ = bVar153;
      } while (((*(uint *)(uVar129 + 0x38) & 0xfffffffe) != 4) == bVar153);
      *(bool *)((long)puVar69 + 0x1f) = (*(uint *)(uVar129 + 0x38) & 0xfffffffd) != 5;
      lVar116 = *(long *)(lVar119 + 0x10);
      *(undefined8 *)((long)puVar69 + -8) = 0x3ee3df;
      bVar153 = hb_buffer_t::message
                          (uVar111,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                           in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)uVar129,lVar116,
                           "start subtable %u",(ulong)uVar90,param_5,param_6,*(undefined1 *)puVar69)
      ;
      uVar111 = extraout_XMM0_Qa;
    } while (!bVar153);
    uVar111._0_4_ = ((uint)uVar88 & 0x10) >> 4;
    uVar111._4_4_ = 0;
    *(byte *)((long)puVar69 + 0x1f) = *(byte *)((long)puVar69 + 0x1f) ^ (byte)(uint)uVar111;
    if (((*(byte *)((long)puVar69 + 0x1e8) & 1) == 0) &&
       (((byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)((long)phVar32 + 4) & 0x40) != 0)) {
      lVar34 = *(long *)(lVar119 + 0x20);
      uVar88._0_4_ = *(uint *)(lVar34 + 0x60);
      *(ulong *)((long)puVar69 + 0x1e8) = CONCAT71((int7)((ulong)extraout_RDX_08 >> 8),1);
      if ((uint)uVar88 != 0) {
        lVar34 = *(long *)(lVar34 + 0x80);
        if ((uint)uVar88 == 1) {
          ppVar117 = (pthread_mutex_t *)0x0;
        }
        else {
          lVar116._0_4_ = (uint)uVar88 & 0xfffffffe;
          lVar116._4_4_ = 0;
          uVar129 = lVar34 + 0x26;
          ppVar117 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
          do {
            *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              *)(uVar129 + -0x14) =
                 (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  )0x2;
            *(ushort *)(uVar129 + -0x16) =
                 (ushort)((*(uint *)(*(long *)(lVar119 + 0x20) + 0x38) & 0xfffffffd) != 4) * 2 + -1;
            *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              *)uVar129 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                           )0x2;
            bVar153 = (*(uint *)(*(long *)(lVar119 + 0x20) + 0x38) & 0xfffffffd) != 4;
            uVar92._1_7_ = 0;
            uVar92._0_1_ = bVar153;
            uVar111._0_4_ = (uint)bVar153 * 2 - 1;
            uVar111._4_4_ = 0;
            *(short *)(uVar129 + -2) = (short)(uint)uVar111;
            ppVar117 = (pthread_mutex_t *)(ppVar117->__size + 2);
            uVar129 = uVar129 + 0x28;
          } while ((pthread_mutex_t *)lVar116 != ppVar117);
        }
        if (((uint)uVar88 & 1) != 0) {
          *(undefined1 *)(lVar34 + 0x12 + (long)ppVar117 * 0x14) = 2;
          bVar153 = (*(uint *)(*(long *)(lVar119 + 0x20) + 0x38) & 0xfffffffd) != 4;
          lVar116._1_7_ = 0;
          lVar116._0_1_ = bVar153;
          *(ushort *)(lVar34 + 0x10 + (long)ppVar117 * 0x14) = (ushort)bVar153 * 2 + -1;
        }
      }
    }
    if (*(char *)((long)puVar69 + 0x1f) == '\0') {
      lVar34 = *(long *)(lVar119 + 0x20);
      uVar88._0_4_ = *(uint *)(lVar34 + 0x60);
      if (1 < (uint)uVar88) {
        plVar125 = *(long **)(lVar34 + 0x70);
        lVar116 = (ulong)((uint)uVar88 - 1) - 1;
        uVar129 = (long)plVar125 + (ulong)((uint)uVar88 - 1) * 0x14;
        uVar111 = ((pthread_mutex_t *)0x0)->__size;
        do {
          *(undefined4 *)((long)puVar69 + 0x90) = *(undefined4 *)(uVar129 + 0x10);
          uVar92 = *(undefined8 *)(uVar129 + 8);
          *(long *)((long)puVar69 + 0x80) = *(long *)uVar129;
          *(undefined8 *)((long)puVar69 + 0x88) = uVar92;
          *(int *)(uVar129 + 0x10) = (int)plVar125[2];
          lVar143 = plVar125[1];
          *(long *)uVar129 = *plVar125;
          *(long *)(uVar129 + 8) = lVar143;
          *(undefined4 *)(plVar125 + 2) = *(undefined4 *)((long)puVar69 + 0x90);
          lVar143 = *(long *)((long)puVar69 + 0x88);
          *plVar125 = *(long *)((long)puVar69 + 0x80);
          plVar125[1] = lVar143;
          uVar111 = uVar111 + 1;
          uVar92 = lVar116 & 0xffffffff;
          plVar125 = (long *)((long)plVar125 + 0x14);
          lVar116 = lVar116 + -1;
          uVar129 = uVar129 + -0x14;
        } while ((ulong)uVar111 < (ulong)uVar92);
      }
      if (*(char *)(lVar34 + 0x5b) != '\0') {
        if (*(uint *)(lVar34 + 0x60) < (uint)uVar88) {
          uVar88._0_4_ = *(uint *)(lVar34 + 0x60);
        }
        if (1 < (uint)uVar88) {
          puVar84 = *(undefined8 **)(lVar34 + 0x80);
          uVar33 = (ulong)((uint)uVar88 - 1);
          puVar131 = (undefined8 *)((long)puVar84 + uVar33 * 0x14);
          lVar116 = (long)((pthread_mutex_t *)0x0)->__size;
          do {
            uVar33 = uVar33 - 1;
            *(undefined4 *)((long)puVar69 + 0x90) = *(undefined4 *)(puVar131 + 2);
            uVar129 = puVar131[1];
            *(undefined8 *)((long)puVar69 + 0x80) = *puVar131;
            *(undefined8 *)((long)puVar69 + 0x88) = uVar129;
            *(undefined4 *)(puVar131 + 2) = *(undefined4 *)(puVar84 + 2);
            uVar129 = puVar84[1];
            *puVar131 = *puVar84;
            puVar131[1] = uVar129;
            *(undefined4 *)(puVar84 + 2) = *(undefined4 *)((long)puVar69 + 0x90);
            uVar129 = *(undefined8 *)((long)puVar69 + 0x88);
            *puVar84 = *(undefined8 *)((long)puVar69 + 0x80);
            puVar84[1] = uVar129;
            lVar116 = lVar116 + 1;
            uVar129 = uVar33 & 0xffffffff;
            puVar84 = (undefined8 *)((long)puVar84 + 0x14);
            puVar131 = (undefined8 *)((long)puVar131 + -0x14);
          } while ((ulong)lVar116 < (ulong)uVar129);
        }
      }
    }
    puVar131 = (undefined8 *)puVar69;
    if ((pthread_mutex_t *)puVar147 == (pthread_mutex_t *)0x0) {
LAB_003ee63a:
      pauVar67 = *(undefined1 (**) [16])((long)puVar131 + 0x1e0);
      auVar279._8_4_ = 0xffffffff;
      auVar279._0_8_ = 0xffffffffffffffff;
      auVar279._12_4_ = 0xffffffff;
      pauVar67[2] = auVar279;
      pauVar67[1] = auVar279;
      *pauVar67 = auVar279;
      puVar69 = (uint *)puVar131;
    }
    else {
      lVar34 = *(ulong *)((long)puVar69 + 0x78) * 0x30;
      if (*(ulong *)((long)puVar69 + 0x78) < (ulong)*(uint *)((long)puVar147 + 4)) {
        plVar125 = (long *)(*(long *)((long)puVar147 + 8) + lVar34);
      }
      else {
        plVar125 = (long *)&_hb_NullPool;
      }
      lVar116 = *(long *)((long)puVar69 + 0x1e0);
      *(long *)(lVar116 + 0x10) = plVar125[2];
      lVar143 = plVar125[1];
      *(long *)lVar116 = *plVar125;
      *(long *)(lVar116 + 8) = lVar143;
      if (*(ulong *)((long)puVar69 + 0x78) < (ulong)*(uint *)((long)puVar147 + 4)) {
        puVar50 = (undefined4 *)(lVar34 + *(long *)((long)puVar147 + 8));
      }
      else {
        puVar50 = &_hb_NullPool;
      }
      pauVar67 = *(undefined1 (**) [16])((long)puVar69 + 0x238);
      *(undefined8 *)pauVar67[1] = *(undefined8 *)(puVar50 + 10);
      auVar279 = *(undefined1 (*) [16])(puVar50 + 6);
      *pauVar67 = auVar279;
    }
    lVar143 = (long)in_ST0;
    ppVar114 = *(pthread_mutex_t **)(*(long *)(lVar119 + 0x58) + 0x10);
    *(__pthread_mutex_s **)(lVar119 + 0x30) = &ppVar114->__data;
    uVar88._0_4_ = *(uint *)(*(long *)(lVar119 + 0x58) + 0x18);
    ppVar117 = (pthread_mutex_t *)(ppVar114->__size + (uint)uVar88);
    *(__pthread_mutex_s **)(lVar119 + 0x38) = &ppVar117->__data;
    *(uint *)(lVar119 + 0x40) = (uint)uVar88;
    uVar88 = *(undefined8 *)(puVar69 + 0x1e);
    if (((ulong)uVar88 < *(pthread_mutex_t **)(puVar69 + 0x94)) &&
       ((pthread_mutex_t *)phVar32 != (pthread_mutex_t *)0x0)) {
      uVar33 = (long)ppVar117 - (long)phVar32;
      uVar88._1_7_ = (undefined7)((ulong)uVar88 >> 8);
      uVar88._0_1_ = ppVar117 < phVar32 || uVar33 == 0;
      if (phVar32 < ppVar114) {
        uVar88._0_1_ = 1;
      }
      else if (ppVar117 >= phVar32 && uVar33 != 0) {
        *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          **)(lVar119 + 0x30) = phVar32;
        uVar90 = *(uint *)phVar32;
        uVar152 = (ulong)(uVar90 >> 0x18 | (uVar90 & 0xff0000) >> 8 | (uVar90 & 0xff00) << 8 |
                         uVar90 << 0x18);
        if (uVar152 < uVar33) {
          uVar33 = uVar152;
        }
        *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          **)(lVar119 + 0x38) =
             (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              *)((long)phVar32 + uVar33);
        *(int *)(lVar119 + 0x40) = (int)uVar33;
        goto LAB_003ee6b7;
      }
      pauVar67 = *(undefined1 (**) [16])(puVar69 + 0x8c);
      auVar279 = (undefined1  [16])0x0;
      *pauVar67 = (undefined1  [16])0x0;
      *(undefined4 *)pauVar67[1] = 0;
    }
LAB_003ee6b7:
    *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
      **)(puVar69 + 0x16) = phVar32;
    uVar90 = *(uint *)((long)phVar32 + 4);
    puVar144._4_4_ = 0;
    puVar144._0_1_ = (char)uVar90;
    puVar144._1_1_ = (char)(uVar90 >> 8);
    puVar144._2_1_ = (char)(uVar90 >> 0x10);
    puVar144._3_1_ = (char)(uVar90 >> 0x18);
  } while (6 < (byte)(uVar90 >> 0x18));
  param_4 = &DAT_005e01f4;
  uVar33 = (ulong)*(int *)(&DAT_005e01f4 + (ulong)(uVar90 >> 0x18) * 4);
  bVar153 = 0xffffffffffa1fe0b < uVar33;
  uVar49 = (long)&DAT_005e01f4 + uVar33;
  uVar42 = auVar279._0_8_;
  uVar118 = in_XMM1._0_8_;
  uVar44 = in_XMM2._0_8_;
  uVar45 = in_XMM3._0_8_;
  uVar97 = in_XMM4._0_8_;
  uVar96 = in_XMM5._0_8_;
  uVar66 = in_XMM6._0_8_;
  uVar94 = in_XMM7._0_8_;
  bVar78 = (byte)uVar49;
  lVar34._1_7_ = (undefined7)((ulong)uVar49 >> 8);
  puVar100 = puVar69;
  puVar24 = puVar69;
  uVar113 = uVar111;
  lVar34 = uVar49;
  switch(uVar90 >> 0x18) {
  case 0:
    if ((*(byte *)(*(long *)(lVar119 + 8) + 0xa8) & 1) == 0) goto LAB_003f0ec0;
    puVar144._4_4_ = 0;
    puVar144._0_4_ = uVar90 << 0x18;
    if ((uVar90 << 0x18 & 0x10000000) != 0) goto LAB_003f0ec0;
    uVar33 = *(ulong *)(lVar119 + 0x80);
    if ((*(ulong *)(lVar119 + 0xb0) & uVar33) == 0) goto LAB_003f0ec0;
    if ((*(ulong *)(lVar119 + 0xb8) & *(ulong *)(lVar119 + 0x88)) == 0) goto LAB_003f0ec0;
    if (((((*(ulong *)(lVar119 + 0xc0) & *(ulong *)(lVar119 + 0x90)) == 0) ||
         ((((pthread_mutex_t *)(lVar119 + 200))->__align & uVar33) == 0)) ||
        ((*(ulong *)(lVar119 + 0xd0) & *(ulong *)(lVar119 + 0x88)) == 0)) ||
       ((*(ulong *)(lVar119 + 0x90) & *(ulong *)(lVar119 + 0xd8)) == 0)) goto LAB_003f0ec0;
    uVar129 = *(undefined8 *)(lVar119 + 0x10);
    phVar140 = *(hb_buffer_t **)(lVar119 + 0x20);
    puVar69[2] = *(uint *)(*(long *)(lVar119 + 8) + 0xa0);
    *(hb_buffer_t **)(puVar69 + 8) = phVar140;
    *(undefined8 *)(puVar69 + 0x10) = uVar129;
    puVar69[-2] = 0x3ee790;
    puVar69[-1] = 0;
    bVar153 = hb_buffer_t::message
                        (uVar42,uVar118,uVar44,uVar45,uVar97,uVar96,uVar66,uVar94,phVar140,uVar129,
                         "start kern",uVar33,param_5,param_6,(char)*puVar69);
    auVar279 = extraout_XMM0_01;
    if (!bVar153) goto LAB_003f0ec0;
    puVar50 = *(undefined4 **)(puVar69 + 8);
    if ((*(byte *)(puVar50 + 6) & 0x40) != 0) {
      uVar88._0_4_ = puVar50[0x18];
      *(byte *)(puVar50 + 0x30) = *(byte *)(puVar50 + 0x30) | 0x20;
      if ((ulong)(uint)uVar88 != 0) {
        lVar116 = *(long *)(puVar50 + 0x1c);
        if ((ulong)(uint)uVar88 - 1 < 3) {
          uVar33 = 0;
        }
        else {
          pbVar136 = (byte *)(lVar116 + 0x40);
          uVar33 = 0;
          do {
            pbVar136[-0x3c] = pbVar136[-0x3c] | 2;
            pbVar136[-0x28] = pbVar136[-0x28] | 2;
            pbVar136[-0x14] = pbVar136[-0x14] | 2;
            *pbVar136 = *pbVar136 | 2;
            uVar33 = uVar33 + 4;
            pbVar136 = pbVar136 + 0x50;
          } while (((uint)uVar88 & 0xfffffffc) != uVar33);
        }
        lVar119 = *(long *)(puVar69 + 4);
        puVar50 = *(undefined4 **)(puVar69 + 8);
        if ((ulong)((uint)uVar88 & 3) != 0) {
          lVar34 = 0;
          do {
            pbVar136 = (byte *)(lVar116 + uVar33 * 0x14 + 4 + lVar34);
            *pbVar136 = *pbVar136 | 2;
            lVar34 = lVar34 + 0x14;
          } while ((ulong)((uint)uVar88 & 3) * 0x14 != lVar34);
        }
      }
    }
    puVar137 = &_hb_NullPool;
    puVar69[-2] = 0x3ee7c5;
    puVar69[-1] = 0;
    OT::hb_ot_apply_context_t::hb_ot_apply_context_t
              ((hb_ot_apply_context_t *)(puVar69 + 0x20),1,*(long *)(puVar69 + 0x10),puVar50,
               (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
    in_XMM1._8_8_ = extraout_XMM1_Qb;
    in_XMM1._0_8_ = extraout_XMM1_Qa;
    puVar69[0x6b] = puVar69[2];
    puVar69[0x72] = 0xffffffff;
    puVar69[0x73] = 0;
    uVar92._1_7_ = (undefined7)((ulong)uVar92 >> 8);
    uVar92._0_1_ = *(undefined1 *)((long)puVar69 + 0x1be);
    pcVar58 = (char *)(ulong)*(byte *)((long)puVar69 + 0x1bf);
    if (puVar69[0x42] != 0) {
      pcVar58 = (char *)0x0;
    }
    uVar129 = puVar69 + 0x2a;
    auVar279 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar69 + 0x3a) = (undefined1  [16])0x0;
    puVar69[0x3e] = 0;
    puVar69[0x3f] = 0;
    param_5._1_7_ = (undefined7)((ulong)puVar137 >> 8);
    param_5._0_1_ = *(char *)((long)puVar69 + 0x1bd) != '\0';
    bVar153 = puVar69[0x42] == 1;
    *(undefined1 *)((long)puVar69 + 0xe1) = 1;
    *(bool *)((long)puVar69 + 0xe2) = bVar153;
    puVar69[0x6d] = 8;
    lVar116 = (long)(puVar69 + 0x20);
    *(long *)(puVar69 + 0x24) = lVar116;
    param_4._4_4_ = 0;
    param_4._0_4_ = *(uint *)(*(long *)(puVar69 + 0x48) + 0x60);
    puVar69[0x30] = *(uint *)(*(long *)(puVar69 + 0x48) + 0x60);
    *(undefined1 (*) [16])uVar129 = (undefined1  [16])0x0;
    puVar69[0x2e] = 0;
    puVar69[0x2f] = 0;
    puVar69[0x26] = 8;
    *(bool *)(puVar69 + 0x28) = bVar153;
    *(undefined1 *)((long)puVar69 + 0xa1) = *(undefined1 *)((long)puVar69 + 0x1be);
    *(bool *)((long)puVar69 + 0xa2) = bVar153;
    uVar88._1_7_ = 0;
    uVar88._0_1_ = bVar153;
    puVar69[0x27] = puVar69[2];
    *(char *)((long)puVar69 + 0xa3) = (char)pcVar58;
    *(undefined1 *)(puVar69 + 0x29) = 0;
code_r0x003ee8a9:
    uVar42 = in_XMM1._0_8_;
    uVar111 = auVar279._0_8_;
    *(long *)((long)puVar69 + 0xd0) = lVar116;
    *(int *)((long)puVar69 + 0x100) = (int)param_4;
    *(undefined1 (*) [16])(uVar129 + 0x40) = auVar279;
    ((pthread_mutex_t *)(uVar129 + 0x50))->__align = 0;
    *(bool *)((long)puVar69 + 0xe2) = bVar153;
    puVar148 = (ushort *)0xffffffff00000008;
    *(undefined8 *)((long)puVar69 + 0xd8) = 0xffffffff00000008;
    *(byte *)((long)puVar69 + 0xe0) = (byte)uVar88 | (byte)param_5;
    *(undefined1 *)((long)puVar69 + 0xe1) = 1;
    *(char *)((long)puVar69 + 0xe3) = (char)pcVar58;
    *(undefined1 *)((long)puVar69 + 0xe4) = 0;
    iVar31 = *(int *)(*(long *)((long)puVar69 + 0x20) + 0x60);
    *(int *)((long)puVar69 + 0x2c) = iVar31;
    if (iVar31 == 0) goto LAB_003f0e56;
    param_4 = *(long *)((long)puVar69 + 0x20);
    *(uint *)((long)puVar69 + 0x48) = *(uint *)(param_4 + 0x38) & 0xfffffffe;
code_r0x003ee923:
    *(undefined8 *)((long)puVar69 + 0x38) = *(undefined8 *)(param_4 + 0x70);
    *(undefined8 *)((long)puVar69 + 0x60) = *(undefined8 *)(param_4 + 0x80);
    uVar92 = (pthread_mutex_t *)0x0;
LAB_003f025e:
    uVar88._0_4_ = (uint)uVar92;
    puVar148 = *(ushort **)((long)puVar69 + 0x38);
    if ((*(uint *)(puVar148 + uVar92 * 10 + 2) & *(uint *)((long)puVar69 + 8)) == 0) {
      uVar92._0_4_ = (uint)uVar88 + 1;
      uVar92._4_4_ = 0;
    }
    else {
      *(uint *)((long)puVar69 + 0x88) = (uint)uVar88;
      lVar116 = *(long *)((long)puVar69 + 0x90);
      puVar148 = *(ushort **)(lVar116 + 0xa0);
      iVar31 = *(int *)(puVar148 + 0x30);
      *(int *)((long)puVar69 + 0xc0) = iVar31;
      uVar90 = *(uint *)(puVar148 + 0x2e);
      *(long *)((long)puVar69 + 0x30) = uVar92 * 5;
      if (uVar90 == (uint)uVar88) {
        uVar26 = *(undefined1 *)(*(long *)(puVar148 + 0x38) + 0xf + uVar92 * 0x14);
      }
      else {
        uVar26 = 0;
      }
      if (*(char *)((long)puVar69 + 0xa3) == '\0') {
        uVar26 = 0;
      }
      *(undefined1 *)((long)puVar69 + 0xa4) = uVar26;
      iVar31 = iVar31 + -1;
      if ((int)(uint)uVar88 < iVar31) {
        do {
          uVar90 = (int)uVar92 + 1;
          uVar33 = (ulong)uVar90;
          *(uint *)((long)puVar69 + 0x88) = uVar90;
          lVar119 = *(long *)(puVar148 + 0x38);
          uVar90 = *(uint *)((long)puVar69 + 0x98);
          uVar29 = *(ushort *)(lVar119 + 0xc + uVar33 * 0x14);
          puVar148 = (ushort *)(ulong)uVar29;
          if ((uVar90 & uVar29 & 0xe) != 0) goto LAB_003f03fa;
          puVar100 = (uint *)(lVar119 + uVar33 * 0x14);
          if ((uVar29 & 8) == 0) {
LAB_003f0319:
            lVar116 = lVar119 + uVar33 * 0x14;
            uVar29 = *(ushort *)(lVar119 + 0x10 + uVar33 * 0x14);
            uVar79 = 0;
            bVar153 = false;
            if (((((uVar29 & 0x20) != 0) &&
                 (bVar153 = false, (*(byte *)(lVar116 + 0xc) & 0x10) == 0)) &&
                ((*(char *)((long)puVar69 + 0xa0) != '\0' ||
                 (bVar153 = false, (uVar29 & 0x21f) != 0x201)))) &&
               ((*(char *)((long)puVar69 + 0xa1) != '\0' ||
                (bVar153 = false, (uVar29 & 0x11f) != 0x101)))) {
              bVar153 = (uVar29 & 0x40) == 0 || *(char *)((long)puVar69 + 0xa2) != '\0';
            }
            puVar148 = *(ushort **)((long)puVar69 + 0xb8);
            if (puVar148 != (ushort *)0x0) {
              uVar79 = *puVar148 << 8 | *puVar148 >> 8;
            }
            if (((*(uint *)(lVar119 + 4 + uVar33 * 0x14) & *(uint *)((long)puVar69 + 0x9c)) != 0) &&
               ((*(char *)((long)puVar69 + 0xa4) == '\0' ||
                (*(char *)((long)puVar69 + 0xa4) == *(char *)(lVar116 + 0xf))))) {
              if (*(code **)((long)puVar69 + 0xa8) == (code *)0x0) {
                if (bVar153) goto LAB_003f03fa;
              }
              else {
                *(undefined8 *)((long)puVar69 + -8) = 0x3f03ed;
                cVar27 = (**(code **)((long)puVar69 + 0xa8))
                                   (puVar100,uVar79,*(undefined8 *)((long)puVar69 + 0xb0));
                in_XMM1._8_8_ = extraout_XMM1_Qb_06;
                in_XMM1._0_8_ = extraout_XMM1_Qa_04;
                auVar279._8_8_ = extraout_XMM0_Qb_04;
                auVar279._0_8_ = extraout_XMM0_Qa_02;
                if (cVar27 == '\0') goto LAB_003f03f1;
                puVar148 = *(ushort **)((long)puVar69 + 0xb8);
              }
              if (puVar148 != (ushort *)0x0) {
                *(ushort **)((long)puVar69 + 0xb8) = puVar148 + 1;
              }
              lVar116 = *(long *)((long)puVar69 + 0x30);
              uVar90 = *(uint *)(*(long *)((long)puVar69 + 0x38) + lVar116 * 4);
              puVar148 = (ushort *)(ulong)uVar90;
              lVar119 = *(long *)((long)puVar69 + 0x10);
              in_R10 = *(ulong *)((long)puVar69 + 0x58);
              if ((((*(ulong *)(lVar119 + 0xb0) >> ((ulong)(uVar90 >> 4) & 0x3f) & 1) == 0) ||
                  ((*(ulong *)(lVar119 + 0xb8) >> ((ulong)puVar148 & 0x3f) & 1) == 0)) ||
                 ((*(ulong *)(lVar119 + 0xc0) >> ((ulong)(uVar90 >> 9) & 0x3f) & 1) == 0))
              goto LAB_003f05cb;
              phVar32._0_4_ = *(uint *)((long)puVar69 + 0x88);
              uVar33 = (ulong)(uint)phVar32;
              param_5 = (uint *)(uVar33 * 5);
              uVar64 = *(uint *)(*(long *)((long)puVar69 + 0x38) + uVar33 * 0x14);
              param_6._4_4_ = 0;
              param_6._0_4_ = uVar64;
              if (((((ulong)((pthread_mutex_t *)(lVar119 + 200))->__align >>
                     ((ulong)(uVar64 >> 4) & 0x3f) & 1) == 0) ||
                  ((*(ulong *)(lVar119 + 0xd0) >> (param_6 & 0x3fU) & 1) == 0)) ||
                 ((*(ulong *)(lVar119 + 0xd8) >> ((ulong)(uVar64 >> 9) & 0x3f) & 1) == 0))
              goto LAB_003f05cb;
              uVar122 = *(uint *)(in_R10 + 0xc);
              uVar122 = uVar122 >> 0x18 | (uVar122 & 0xff0000) >> 8 | (uVar122 & 0xff00) << 8 |
                        uVar122 << 0x18;
              in_R11 = (uint *)(ulong)uVar122;
              puVar50 = &_hb_NullPool;
              if ((int)uVar122 < 1) goto LAB_003f05af;
              in_R11 = (uint *)(ulong)(uVar122 - 1);
              iVar31 = 0;
              goto LAB_003f0554;
            }
LAB_003f03f1:
            if (!bVar153) break;
          }
          else if ((uVar90 & 0x10) == 0) {
            if (((uVar90 & 0xff00) == 0) ||
               (phVar32._0_4_ = uVar29 & 0xff00, puVar148 = (ushort *)(ulong)(uint)phVar32,
               (uVar90 & 0xff00) == (uint)phVar32)) goto LAB_003f0319;
          }
          else {
            phVar32._0_4_ = *puVar100;
            paVar54 = *(accelerator_t **)(lVar116 + 0xf8);
            *(undefined8 *)((long)puVar69 + -8) = 0x3f045a;
            uVar129 = OT::GDEF::accelerator_t::mark_set_covers(paVar54,uVar90 >> 0x10,(uint)phVar32)
            ;
            auVar279 = extraout_XMM0_11;
            if ((char)uVar129 != '\0') goto LAB_003f0319;
          }
LAB_003f03fa:
          uVar92._4_4_ = 0;
          uVar92._0_4_ = *(uint *)((long)puVar69 + 0x88);
          if (iVar31 <= (int)*(uint *)((long)puVar69 + 0x88)) break;
          lVar116 = *(long *)((long)puVar69 + 0x90);
          puVar148 = *(ushort **)(lVar116 + 0xa0);
        } while( true );
      }
      uVar92._0_4_ = (uint)uVar88 + 1;
      uVar92._4_4_ = 0;
      lVar119 = *(long *)((long)puVar69 + 0x10);
    }
    goto LAB_003f0254;
  case 1:
    if (((*(byte *)(*(long *)(lVar119 + 8) + 0xa8) & 1) != 0) || ((uVar90 & 0x40) != 0)) {
      *(long *)(puVar69 + 0x7c) = lVar119;
      lVar116 = *(long *)(puVar69 + 0x16);
      *(long *)(puVar69 + 0x7e) = lVar116;
      uVar88._0_4_ = *(uint *)(lVar116 + 0x1c);
      *(ulong *)(puVar69 + 0x80) =
           (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                   ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) + lVar116 + 0xc;
      puVar69[0x8a] = 0;
      *(byte *)(puVar69 + 0x8b) = (byte)uVar90 >> 6 & 1;
      lVar34 = *(long *)(*(long *)(lVar119 + 0x10) + 0x20);
      uVar88._0_4_ = *(uint *)(lVar34 + 0x18);
      puVar69[0xe] = (uint)uVar88;
      if ((uint)uVar88 == 0xffffffff) {
        piVar53 = *(int **)(lVar34 + 0x78);
        while (piVar53 == (int *)0x0) {
          lVar116 = *(long *)(lVar34 + 0x68);
          if (lVar116 == 0) {
            piVar53 = (int *)&_hb_NullPool;
            lVar116 = *(long *)(puVar69 + 0x16);
            break;
          }
          puVar69[0x20] = 0;
          *(undefined1 (*) [16])(puVar69 + 0x26) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(puVar69 + 0x22) = (undefined1  [16])0x0;
          *(undefined1 *)(puVar69 + 0x2a) = 0;
          *(undefined1 *)((long)puVar69 + 0xbd) = 0;
          *(undefined1 (*) [16])(puVar69 + 0x2b) = (undefined1  [16])0x0;
          *(undefined1 *)(puVar69 + 0x2f) = 1;
          pcVar86 = *(code **)(lVar116 + 0x20);
          piVar53 = (int *)&_hb_NullPool;
          if (pcVar86 != (code *)0x0) {
            uVar129 = *(undefined8 *)(lVar116 + 0x28);
            puVar69[-2] = 0x3f14cc;
            puVar69[-1] = 0;
            piVar53 = (int *)(*pcVar86)(lVar116,0x6d617870,uVar129);
            if (piVar53 == (int *)0x0) {
              piVar53 = (int *)&_hb_NullPool;
            }
          }
          puVar69[-2] = 0x3f14e5;
          puVar69[-1] = 0;
          piVar53 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                              ((hb_sanitize_context_t *)(puVar69 + 0x20),piVar53);
          puVar69[-2] = 0x3f14f5;
          puVar69[-1] = 0;
          auVar279 = hb_sanitize_context_t::~hb_sanitize_context_t
                               ((hb_sanitize_context_t *)(puVar69 + 0x20));
          in_XMM1._0_8_ = auVar279._8_8_;
          in_XMM1._8_8_ = extraout_XMM1_Qb_14;
          auVar279._8_8_ = extraout_XMM0_Qb_10;
          if (piVar53 == (int *)0x0) {
            piVar53 = (int *)&_hb_NullPool;
            LOCK();
            bVar153 = *(long *)(lVar34 + 0x78) == 0;
            if (bVar153) {
              *(long *)(lVar34 + 0x78) = (long)&_hb_NullPool;
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar153 = *(long *)(lVar34 + 0x78) == 0;
            if (bVar153) {
              *(long *)(lVar34 + 0x78) = (long)piVar53;
            }
            UNLOCK();
          }
          if (bVar153) {
            lVar116 = *(long *)(puVar69 + 0x16);
            break;
          }
          if (((piVar53 != (int *)0x0) && ((uint *)piVar53 != &_hb_NullPool)) && (*piVar53 != 0)) {
            LOCK();
            *piVar53 = *piVar53 + -1;
            UNLOCK();
            if (*piVar53 == 0) {
              *piVar53 = -0xdead;
              ppVar117 = *(pthread_mutex_t **)(piVar53 + 2);
              if (ppVar117 != (pthread_mutex_t *)0x0) {
                puVar69[-2] = 0x3f1546;
                puVar69[-1] = 0;
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar117[1].__data,ppVar117);
                in_XMM1._8_8_ = extraout_XMM1_Qb_15;
                in_XMM1._0_8_ = extraout_XMM1_Qa_09;
                puVar69[-2] = 0x3f154e;
                puVar69[-1] = 0;
                free(ppVar117);
                piVar53[2] = 0;
                piVar53[3] = 0;
              }
              pcVar86 = *(code **)(piVar53 + 10);
              if (pcVar86 != (code *)0x0) {
                uVar129 = *(undefined8 *)(piVar53 + 8);
                *(undefined1 **)(puVar69 + -2) = &LAB_003f1565;
                (*pcVar86)(uVar129);
                in_XMM1._8_8_ = extraout_XMM1_Qb_16;
                in_XMM1._0_8_ = extraout_XMM1_Qa_10;
              }
              *(undefined1 **)(puVar69 + -2) = &LAB_003f156d;
              free(piVar53);
              auVar279 = extraout_XMM0_15;
            }
          }
          lVar116 = *(long *)(puVar69 + 0x16);
          piVar53 = *(int **)(lVar34 + 0x78);
        }
        puVar50 = &_hb_NullPool;
        if (5 < (uint)piVar53[6]) {
          puVar50 = *(undefined4 **)(piVar53 + 4);
        }
        uVar29 = *(ushort *)(puVar50 + 1);
        uVar79 = uVar29 << 8 | uVar29 >> 8;
        if (uVar29 == 0) {
          uVar79 = 0;
        }
        puVar69[0xe] = (uint)uVar79;
        *(uint *)(lVar34 + 0x18) = (uint)uVar79;
        lVar119 = *(long *)(puVar69 + 4);
      }
      uVar111 = lVar116 + 0xc;
      uVar88._0_4_ = *(uint *)(lVar116 + 0x14);
      uVar90 = *(uint *)(lVar116 + 0x18);
      phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)((ulong)(uVar90 >> 0x18 | (uVar90 & 0xff0000) >> 8 | (uVar90 & 0xff00) << 8 |
                           uVar90 << 0x18) + uVar111);
      uVar29 = *(ushort *)
                (lVar116 + 0xe +
                (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                        ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18));
      uVar33 = (ulong)(ushort)(uVar29 << 8 | uVar29 >> 8);
      if ((*(short *)(phVar32 + uVar33 * 6 + 4) == -1) && (*(short *)(phVar32 + uVar33 * 6) == 0)) {
        uVar33 = *(ulong *)(lVar119 + 0x80);
code_r0x003eec46:
        if ((*(ulong *)(lVar119 + 0xb0) & uVar33) == 0) goto LAB_003f0ec0;
        if ((*(ulong *)(lVar119 + 0xb8) & *(ulong *)(lVar119 + 0x88)) == 0) goto LAB_003f0ec0;
        if ((*(ulong *)(lVar119 + 0xc0) & *(ulong *)(lVar119 + 0x90)) == 0) goto LAB_003f0ec0;
        if ((((pthread_mutex_t *)(lVar119 + 200))->__align & uVar33) == 0) goto LAB_003f0ec0;
        if ((*(ulong *)(lVar119 + 0xd0) & *(ulong *)(lVar119 + 0x88)) == 0) goto LAB_003f0ec0;
        if ((*(ulong *)(lVar119 + 0x90) & *(ulong *)(lVar119 + 0xd8)) == 0) goto LAB_003f0ec0;
      }
      lVar116 = *(long *)&((pthread_mutex_t *)(lVar119 + 0x78))->__data;
      uVar113 = uVar111;
      if ((lVar116 == 0) || (*(uint *)(lVar116 + 4) < 2)) {
        puVar144 = (uint *)&((pthread_mutex_t *)0x0)->__data;
        phVar140 = *(hb_buffer_t **)(lVar119 + 0x20);
        *(undefined4 *)(phVar140 + 0x5c) = 0;
        hVar7 = phVar140[0x58];
      }
      else {
        puVar144 = *(uint **)(lVar116 + 8);
        puVar100 = puVar69;
code_r0x003eecc0:
        phVar140 = *(hb_buffer_t **)(lVar119 + 0x20);
        *(undefined4 *)(phVar140 + 0x5c) = 0;
        hVar7 = phVar140[0x58];
        puVar69 = puVar100;
      }
      if (hVar7 != (hb_buffer_t)0x0) {
        uVar90 = 0;
        param_6 = 0;
        *(undefined8 *)((long)puVar69 + 8) = uVar113;
        uVar88._0_4_ = *(uint *)(phVar140 + 0x60);
        uVar33 = 0;
        uVar129 = uVar92;
        if ((pthread_mutex_t *)puVar144 == (pthread_mutex_t *)0x0) goto LAB_003efbd0;
LAB_003efac0:
        if (uVar90 < (uint)uVar88) {
          phVar32._0_4_ = *(uint *)(*(long *)(phVar140 + 0x70) + 8 + uVar33 * 0x14);
          phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)((long)puVar144 + 0xc);
          do {
            puVar144 = (uint *)((long)&(((pthread_mutex_t *)((long)puVar144 + -0x28))->__data).
                                       __list.__prev + 4);
            uVar129 = (long)phVar107 + -0xc;
            phVar81 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                       *)((long)phVar107 + -8);
            phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)uVar129;
          } while ((uint)phVar32 < *(uint *)phVar81);
          uVar113 = *(long *)((long)puVar69 + 8);
          phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)puVar144;
          do {
            puVar144 = (uint *)((long)phVar107 + 0xc);
            phVar81 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                       *)((long)phVar107 + 0x14);
            phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)puVar144;
          } while (*(uint *)phVar81 < (uint)phVar32);
        }
        if ((*puVar144 & *(uint *)(lVar119 + 0xe0)) != 0) goto LAB_003efbd3;
        uVar92 = uVar129;
        if (uVar90 != (uint)uVar88) {
          if (phVar140[0x5a] == (hb_buffer_t)0x0) {
            uVar92 = (pthread_mutex_t *)0x0;
            goto LAB_003effc3;
          }
          pvVar123 = *(void **)(phVar140 + 0x78);
          pvVar57 = *(void **)(phVar140 + 0x70);
          if ((pvVar123 == pvVar57) && (*(uint *)(phVar140 + 100) == uVar90)) {
            uVar92 = (pthread_mutex_t *)0x0;
            uVar88._0_4_ = uVar90;
            goto LAB_003effba;
          }
          uVar88._0_4_ = *(uint *)(phVar140 + 100) + 1;
          if (((uint)uVar88 == 0) || ((uint)uVar88 < *(uint *)(phVar140 + 0x68))) {
            if (pvVar123 == pvVar57) goto LAB_003efb85;
          }
          else {
            *(undefined8 *)((long)puVar69 + -8) = 0x3efb74;
            uVar88 = hb_buffer_t::enlarge(phVar140,(uint)uVar88);
            if ((char)uVar88 == '\0') {
              hVar7 = phVar140[0x58];
              param_5 = (uint *)(pthread_mutex_t *)0x0;
              auVar279 = extraout_XMM0_08;
              goto joined_r0x003efbc2;
            }
            pvVar57 = *(void **)(phVar140 + 0x70);
            pvVar123 = *(void **)(phVar140 + 0x78);
            if (pvVar123 == pvVar57) {
LAB_003efb85:
              uVar88._0_4_ = *(uint *)(phVar140 + 100);
              if (*(int *)(phVar140 + 0x5c) + 1U < (uint)uVar88 + 1) {
                pvVar123 = *(void **)(phVar140 + 0x80);
                *(void **)(phVar140 + 0x78) = pvVar123;
                uVar92 = (pthread_mutex_t *)0x0;
                goto joined_r0x003efba7;
              }
              uVar92 = (pthread_mutex_t *)0x0;
              goto LAB_003eff83;
            }
          }
          uVar92 = (pthread_mutex_t *)0x0;
LAB_003eff90:
          uVar88._0_4_ = *(uint *)(phVar140 + 0x5c);
          uVar90 = *(uint *)(phVar140 + 100);
          *(undefined4 *)((long)pvVar123 + (ulong)uVar90 * 0x14 + 0x10) =
               *(undefined4 *)((long)pvVar57 + (ulong)(uint)uVar88 * 0x14 + 0x10);
          auVar279 = *(undefined1 (*) [16])((long)pvVar57 + (ulong)(uint)uVar88 * 0x14);
          *(undefined1 (*) [16])((long)pvVar123 + (ulong)uVar90 * 0x14) = auVar279;
          uVar90 = *(uint *)(phVar140 + 0x5c);
          uVar88._0_4_ = *(uint *)(phVar140 + 100);
LAB_003effba:
          *(uint *)(phVar140 + 100) = (uint)uVar88 + 1;
LAB_003effc3:
          *(uint *)(phVar140 + 0x5c) = uVar90 + 1;
LAB_003effca:
          hVar7 = phVar140[0x58];
          param_5 = (uint *)uVar92;
joined_r0x003efbc2:
          uVar92 = uVar129;
          if (hVar7 != (hb_buffer_t)0x0) {
            do {
              uVar90 = *(uint *)(phVar140 + 0x5c);
              uVar88._0_4_ = *(uint *)(phVar140 + 0x60);
              uVar33 = (ulong)uVar90;
              uVar129 = uVar92;
              param_6 = (long)param_5;
              if ((pthread_mutex_t *)puVar144 != (pthread_mutex_t *)0x0) goto LAB_003efac0;
LAB_003efbd0:
              puVar144 = (uint *)&((pthread_mutex_t *)0x0)->__data;
LAB_003efbd3:
              if (uVar90 < (uint)uVar88) {
                uVar90 = *(uint *)(*(long *)(phVar140 + 0x70) + uVar33 * 0x14);
                if ((ulong)uVar90 == 0xffff) {
                  uVar88._0_4_ = 2;
                }
                else {
                  uVar88._0_4_ = 1;
                  if ((((*(ulong *)(lVar119 + 0x98) >> ((ulong)(uVar90 >> 4) & 0x3f) & 1) != 0) &&
                      (((ulong)((pthread_mutex_t *)(lVar119 + 0xa0))->__align >>
                        ((ulong)uVar90 & 0x3f) & 1) != 0)) &&
                     ((*(ulong *)(lVar119 + 0xa8) >> ((ulong)(uVar90 >> 9) & 0x3f) & 1) != 0)) {
                    phVar32._0_4_ = *(uint *)(uVar113 + 4);
                    *(undefined1 **)((long)puVar69 + -8) = &LAB_003efc43;
                    pLVar46 = Lookup<OT::IntType<unsigned_short,2u>>::get_value
                                        ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                         (uVar113 +
                                         (ulong)((uint)phVar32 >> 0x18 |
                                                 ((uint)phVar32 & 0xff0000) >> 8 |
                                                 ((uint)phVar32 & 0xff00) << 8 |
                                                (uint)phVar32 << 0x18)),uVar90,
                                         *(uint *)((long)puVar69 + 0x38));
                    auVar279 = extraout_XMM0_09;
                    if (pLVar46 != (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
                      uVar88._0_4_ = (uint)(ushort)(*(ushort *)pLVar46 << 8 |
                                                   *(ushort *)pLVar46 >> 8);
                    }
                  }
                }
              }
              else {
                uVar88._0_4_ = 0;
              }
              uVar90 = *(uint *)uVar113;
              uVar64 = uVar90 >> 0x18 | (uVar90 & 0xff0000) >> 8 | (uVar90 & 0xff00) << 8 |
                       uVar90 << 0x18;
              phVar32._0_4_ = (uint)uVar88;
              if (uVar64 <= (uint)uVar88) {
                phVar32._0_4_ = 1;
              }
              uVar122 = *(uint *)(uVar113 + 8);
              uVar91 = *(uint *)(uVar113 + 0xc);
              phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                          *)(uVar113 +
                            (ulong)(uVar122 >> 0x18 | (uVar122 & 0xff0000) >> 8 |
                                    (uVar122 & 0xff00) << 8 | uVar122 << 0x18));
              phVar81 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                         *)(uVar113 +
                           (ulong)(uVar91 >> 0x18 | (uVar91 & 0xff0000) >> 8 |
                                   (uVar91 & 0xff00) << 8 | uVar91 << 0x18));
              iVar31 = uVar64 * (int)param_6;
              uVar33 = (ulong)(ushort)(*(ushort *)(phVar107 + (ulong)((uint)phVar32 + iVar31) * 2)
                                       << 8 | *(ushort *)
                                               (phVar107 + (ulong)((uint)phVar32 + iVar31) * 2) >> 8
                                      );
              uVar129 = uVar33 * 3;
              uVar29 = *(ushort *)(phVar81 + uVar33 * 6);
              if (*(short *)(phVar81 + uVar33 * 6 + 4) == -1) {
                if (((int)param_6 != 0) &&
                   (((*(ushort *)(phVar81 + uVar33 * 6 + 2) & 0x40) == 0 || (uVar29 != 0)))) {
                  if (uVar64 <= (uint)uVar88) {
                    uVar88._0_4_ = 1;
                  }
                  uVar152 = (ulong)(ushort)(*(ushort *)(phVar107 + (ulong)(uint)uVar88 * 2) << 8 |
                                           *(ushort *)(phVar107 + (ulong)(uint)uVar88 * 2) >> 8);
                  if (((*(short *)(phVar81 + uVar152 * 6 + 4) != -1) ||
                      (uVar29 != *(ushort *)(phVar81 + uVar152 * 6))) ||
                     (((*(ushort *)(phVar81 + uVar33 * 6 + 2) ^
                       *(ushort *)(phVar81 + uVar152 * 6 + 2)) & 0x40) != 0)) goto LAB_003efd30;
                }
                if (*(short *)(phVar81 +
                              (ulong)(ushort)(*(ushort *)
                                               (phVar107 + (ulong)((uint)(uVar90 == 0) + iVar31) * 2
                                               ) << 8 |
                                             *(ushort *)
                                              (phVar107 + (ulong)((uint)(uVar90 == 0) + iVar31) * 2)
                                             >> 8) * 6 + 4) != -1) goto LAB_003efd30;
              }
              else {
LAB_003efd30:
                uVar88._0_4_ = *(uint *)(phVar140 + 0x5c);
                uVar90 = (uint)uVar88;
                if (phVar140[0x5a] != (hb_buffer_t)0x0) {
                  uVar90 = *(uint *)(phVar140 + 100);
                }
                if ((uVar90 != 0) && ((uint)uVar88 < *(uint *)(phVar140 + 0x60))) {
                  *(undefined8 *)((long)puVar69 + -8) = 0x3efd6a;
                  auVar279 = hb_buffer_t::_set_glyph_flags
                                       (phVar140,3,uVar90 - 1,(uint)uVar88 + 1,'\x01');
                  in_XMM1._0_8_ = auVar279._8_8_;
                  in_XMM1._8_8_ = extraout_XMM1_Qb_05;
                  auVar279._8_8_ = extraout_XMM0_Qb_03;
                }
              }
              param_5._2_6_ = 0;
              param_5._0_2_ = uVar29;
              uVar79 = *(short *)(phVar81 + uVar33 * 6 + 2) << 8;
              if ((uVar79 & 0x2000) == 0) {
                lVar119 = *(long *)((long)puVar69 + 0x10);
                if ((uVar79 & 0x8000) != 0) goto LAB_003efdc7;
LAB_003efd90:
                uVar79 = *(ushort *)(phVar81 + uVar33 * 6 + 4);
              }
              else {
                *(undefined4 *)((long)puVar69 + 0x228) = 0;
                lVar119 = *(long *)((long)puVar69 + 0x10);
                if ((uVar79 & 0x8000) == 0) goto LAB_003efd90;
LAB_003efdc7:
                uVar88._0_4_ = *(uint *)((long)puVar69 + 0x228);
                if ((ulong)(uint)uVar88 < 8) {
                  uVar30 = *(undefined4 *)(phVar140 + 0x5c);
                  *(uint *)((long)puVar69 + 0x228) = (uint)uVar88 + 1;
                  *(undefined4 *)((long)puVar69 + (ulong)(uint)uVar88 * 4 + 0x208) = uVar30;
                  uVar79 = *(ushort *)(phVar81 + uVar33 * 6 + 4);
                }
                else {
                  *(undefined4 *)((long)puVar69 + 0x228) = 0;
                  uVar79 = *(ushort *)(phVar81 + uVar33 * 6 + 4);
                }
              }
              if (uVar79 != 0xffff) {
                uVar88._0_4_ = *(uint *)((long)puVar69 + 0x228);
                uVar152 = (ulong)(uint)uVar88;
                if (uVar152 != 0) {
                  uVar90 = *(uint *)(*(long *)((long)puVar69 + 0x1f8) + 8);
                  uVar90 = uVar90 >> 0x18 | (uVar90 & 0xff0000) >> 8 | (uVar90 & 0xff00) << 8 |
                           uVar90 << 0x18;
                  if (uVar90 == 0) {
                    uVar90 = 1;
                  }
                  if ((!CARRY4((uint)uVar88,(uint)uVar88)) &&
                     (lVar116 = (ulong)((uint)uVar88 * 2) * (ulong)uVar90,
                     uVar88._0_4_ = (uint)lVar116, (int)((ulong)lVar116 >> 0x20) == 0)) {
                    in_R11 = *(uint **)((long)puVar69 + 0x1f0);
                    puVar148 = (ushort *)
                               (*(long *)((long)puVar69 + 0x200) +
                               (ulong)((ushort)(uVar79 << 8 | uVar79 >> 8) >> 1) * 2);
                    uVar113 = *(long *)((long)puVar69 + 8);
                    if (((ulong)((long)puVar148 - *(long *)(in_R11 + 0xc)) <= (ulong)in_R11[0x10])
                       && (((uint)uVar88 <= in_R11[0xe] - (int)puVar148 &&
                           (uVar88._0_4_ = in_R11[0x11] - (uint)uVar88, in_R11[0x11] = (uint)uVar88,
                           0 < (int)(uint)uVar88)))) {
                      *(undefined4 *)((long)puVar69 + 0x20) =
                           *(undefined4 *)(*(long *)(in_R11 + 2) + 0xa0);
                      *(undefined1 *)((long)puVar69 + 0x2c) = *(undefined1 *)((long)puVar69 + 0x22c)
                      ;
                      in_R10 = (ulong)uVar90 * 2;
                      bVar78 = 0;
                      *(ulong *)((long)puVar69 + 0x30) = in_R10;
                      do {
                        if (uVar152 == 0) break;
                        uVar152 = uVar152 - 1;
                        *(int *)((long)puVar69 + 0x228) = (int)uVar152;
                        uVar146 = (ulong)*(uint *)((long)puVar69 +
                                                  (uVar152 & 0xffffffff) * 4 + 0x208);
                        if (*(uint *)((long)puVar69 + (uVar152 & 0xffffffff) * 4 + 0x208) <
                            *(uint *)(phVar140 + 0x60)) {
                          uVar79 = *puVar148;
                          bVar78 = (byte)(uVar79 >> 8) & 1;
                          uVar79 = uVar79 << 8 | uVar79 >> 8 & 0xfffe;
                          lVar116 = *(long *)(phVar140 + 0x80);
                          param_6 = uVar129;
                          if ((*(uint *)(phVar140 + 0x38) & 0xfffffffe) == 4) {
                            if (*(char *)((long)puVar69 + 0x2c) == '\0') {
                              if ((*(uint *)(*(long *)(phVar140 + 0x70) + 4 + uVar146 * 0x14) &
                                  *(uint *)((long)puVar69 + 0x20)) != 0) {
                                piVar53 = (int *)(lVar116 + uVar146 * 0x14);
                                iVar31 = (int)((ulong)((long)(short)uVar79 *
                                                       *(long *)(*(long *)(in_R11 + 4) + 0x58) +
                                                      0x8000) >> 0x10);
                                *piVar53 = *piVar53 + iVar31;
                                piVar53 = (int *)(lVar116 + 8 + uVar146 * 0x14);
                                *piVar53 = *piVar53 + iVar31;
                              }
                              goto LAB_003f016f;
                            }
                            puVar93 = (undefined2 *)(uVar146 * 0x14 + 0x10 + lVar116);
                            if (uVar79 == 0x8000) {
                              *(undefined1 *)(puVar93 + 1) = 0;
                              *puVar93 = 0;
                              *(undefined4 *)(lVar116 + 0xc + uVar146 * 0x14) = 0;
                              goto LAB_003f0002;
                            }
                            lVar119 = *(long *)((long)puVar69 + 0x10);
                            if (*(char *)(puVar93 + 1) != '\0') {
                              piVar53 = (int *)(lVar116 + 0xc + uVar146 * 0x14);
                              *piVar53 = *piVar53 +
                                         (int)((ulong)((long)(short)uVar79 *
                                                       *(long *)(*(long *)(in_R11 + 4) + 0x60) +
                                                      0x8000) >> 0x10);
                              phVar140[0xc0] = (hb_buffer_t)((byte)phVar140[0xc0] | 8);
                            }
                          }
                          else {
                            if (*(char *)((long)puVar69 + 0x2c) == '\0') {
                              if ((*(uint *)(*(long *)(phVar140 + 0x70) + 4 + uVar146 * 0x14) &
                                  *(uint *)((long)puVar69 + 0x20)) != 0) {
                                piVar53 = (int *)(lVar116 + 4 + uVar146 * 0x14);
                                iVar31 = (int)((ulong)((long)(short)uVar79 *
                                                       *(long *)(*(long *)(in_R11 + 4) + 0x60) +
                                                      0x8000) >> 0x10);
                                *piVar53 = *piVar53 + iVar31;
                                piVar53 = (int *)(lVar116 + 0xc + uVar146 * 0x14);
                                *piVar53 = *piVar53 + iVar31;
                              }
LAB_003f016f:
                              uVar113 = *(long *)((long)puVar69 + 8);
                              in_R10 = *(ulong *)((long)puVar69 + 0x30);
                              goto LAB_003f000f;
                            }
                            puVar93 = (undefined2 *)(uVar146 * 0x14 + 0x10 + lVar116);
                            if (uVar79 == 0x8000) {
                              *(undefined1 *)(puVar93 + 1) = 0;
                              *puVar93 = 0;
                              *(undefined4 *)(lVar116 + 8 + uVar146 * 0x14) = 0;
LAB_003f0002:
                              lVar119 = *(long *)((long)puVar69 + 0x10);
                            }
                            else {
                              lVar119 = *(long *)((long)puVar69 + 0x10);
                              if (*(char *)(puVar93 + 1) != '\0') {
                                piVar53 = (int *)(lVar116 + 8 + uVar146 * 0x14);
                                *piVar53 = *piVar53 +
                                           (int)((ulong)((long)(short)uVar79 *
                                                         *(long *)(*(long *)(in_R11 + 4) + 0x58) +
                                                        0x8000) >> 0x10);
                                phVar140[0xc0] = (hb_buffer_t)((byte)phVar140[0xc0] | 8);
                              }
                            }
                          }
                          uVar113 = *(long *)((long)puVar69 + 8);
                        }
LAB_003f000f:
                        puVar148 = (ushort *)((long)puVar148 + in_R10);
                      } while (bVar78 == 0);
                      goto LAB_003efebb;
                    }
                  }
                  *(undefined4 *)((long)puVar69 + 0x228) = 0;
                }
              }
LAB_003efebb:
              uVar90 = *(uint *)(phVar140 + 0x5c);
              uVar92 = uVar129;
              if ((uVar90 == *(uint *)(phVar140 + 0x60)) || (phVar140[0x58] == (hb_buffer_t)0x0))
              break;
              uVar92._0_2_ = uVar29 << 8 | uVar29 >> 8;
              uVar92._2_6_ = 0;
              if ((((byte)phVar81[uVar33 * 6 + 2] & 0x40) != 0) &&
                 (iVar31 = *(int *)(phVar140 + 200), *(int *)(phVar140 + 200) = iVar31 + -1,
                 0 < iVar31)) goto LAB_003effca;
              if (phVar140[0x5a] == (hb_buffer_t)0x0) goto LAB_003effc3;
              pvVar123 = *(void **)(phVar140 + 0x78);
              pvVar57 = *(void **)(phVar140 + 0x70);
              if ((pvVar123 == pvVar57) && (*(uint *)(phVar140 + 100) == uVar90)) {
                uVar88._0_4_ = uVar90;
                goto LAB_003effba;
              }
              uVar88._0_4_ = *(uint *)(phVar140 + 100) + 1;
              if (((uint)uVar88 == 0) || ((uint)uVar88 < *(uint *)(phVar140 + 0x68))) {
                if (pvVar123 == pvVar57) {
LAB_003eff43:
                  uVar88._0_4_ = *(uint *)(phVar140 + 100);
                  if (*(int *)(phVar140 + 0x5c) + 1U < (uint)uVar88 + 1) {
                    pvVar123 = *(void **)(phVar140 + 0x80);
                    *(void **)(phVar140 + 0x78) = pvVar123;
joined_r0x003efba7:
                    if ((uint)uVar88 != 0) {
                      *(undefined8 *)((long)puVar69 + -8) = 0x3eff76;
                      memcpy(pvVar123,pvVar57,(ulong)(uint)uVar88 * 0x14);
                      pvVar57 = *(void **)(phVar140 + 0x70);
                      uVar129 = uVar92;
                      pvVar123 = *(void **)(phVar140 + 0x78);
                    }
                  }
                  else {
LAB_003eff83:
                    pvVar123 = pvVar57;
                  }
                }
                goto LAB_003eff90;
              }
              *(undefined8 *)((long)puVar69 + -8) = 0x3f0211;
              uVar129 = hb_buffer_t::enlarge(phVar140,(uint)uVar88);
              if ((char)uVar129 != '\0') {
                pvVar57 = *(void **)(phVar140 + 0x70);
                pvVar123 = *(void **)(phVar140 + 0x78);
                uVar129 = uVar92;
                if (pvVar123 == pvVar57) goto LAB_003eff43;
                goto LAB_003eff90;
              }
              param_5 = (uint *)uVar92;
              auVar279 = extraout_XMM0_10;
              if (phVar140[0x58] == (hb_buffer_t)0x0) break;
            } while( true );
          }
        }
      }
    }
    goto LAB_003f0ec0;
  case 2:
    goto code_r0x003ee93f;
  case 3:
  case 5:
    goto LAB_003f0ec0;
  case 4:
    lVar116 = *(long *)(puVar69 + 0x16);
    puVar147._4_4_ = 0;
    puVar147._0_4_ = *(uint *)(lVar116 + 0x1c);
    lVar34 = *(long *)(*(long *)(lVar119 + 0x10) + 0x20);
    uVar88._0_4_ = *(uint *)(lVar34 + 0x18);
    puVar69[0x10] = (uint)uVar88;
    if ((uint)uVar88 == 0xffffffff) {
      piVar53 = *(int **)(lVar34 + 0x78);
      while (piVar53 == (int *)0x0) {
        lVar116 = *(long *)(lVar34 + 0x68);
        if (lVar116 == 0) {
          piVar53 = (int *)&_hb_NullPool;
LAB_003f1424:
          lVar119 = *(long *)(puVar69 + 4);
          lVar116 = *(long *)(puVar69 + 0x16);
          uVar88._0_4_ = piVar53[6];
          goto joined_r0x003f143a;
        }
        puVar69[0x20] = 0;
        *(undefined1 (*) [16])(puVar69 + 0x26) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar69 + 0x22) = (undefined1  [16])0x0;
        *(undefined1 *)(puVar69 + 0x2a) = 0;
        *(undefined1 *)((long)puVar69 + 0xbd) = 0;
        *(undefined1 (*) [16])(puVar69 + 0x2b) = (undefined1  [16])0x0;
        *(undefined1 *)(puVar69 + 0x2f) = 1;
        pcVar86 = *(code **)(lVar116 + 0x20);
        piVar53 = (int *)&_hb_NullPool;
        if (pcVar86 != (code *)0x0) {
          uVar129 = *(undefined8 *)(lVar116 + 0x28);
          puVar69[-2] = 0x3f1358;
          puVar69[-1] = 0;
          piVar53 = (int *)(*pcVar86)(lVar116,0x6d617870,uVar129);
          if (piVar53 == (int *)0x0) {
            piVar53 = (int *)&_hb_NullPool;
          }
        }
        puVar69[-2] = 0x3f1371;
        puVar69[-1] = 0;
        piVar53 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                            ((hb_sanitize_context_t *)(puVar69 + 0x20),piVar53);
        puVar69[-2] = 0x3f1381;
        puVar69[-1] = 0;
        auVar279 = hb_sanitize_context_t::~hb_sanitize_context_t
                             ((hb_sanitize_context_t *)(puVar69 + 0x20));
        in_XMM1._0_8_ = auVar279._8_8_;
        in_XMM1._8_8_ = extraout_XMM1_Qb_11;
        auVar279._8_8_ = extraout_XMM0_Qb_09;
        if (piVar53 == (int *)0x0) {
          piVar53 = (int *)&_hb_NullPool;
          LOCK();
          bVar153 = *(long *)(lVar34 + 0x78) == 0;
          if (bVar153) {
            *(long *)(lVar34 + 0x78) = (long)&_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar153 = *(long *)(lVar34 + 0x78) == 0;
          if (bVar153) {
            *(long *)(lVar34 + 0x78) = (long)piVar53;
          }
          UNLOCK();
        }
        if (bVar153) goto LAB_003f1424;
        if (((piVar53 != (int *)0x0) && ((uint *)piVar53 != &_hb_NullPool)) && (*piVar53 != 0)) {
          LOCK();
          *piVar53 = *piVar53 + -1;
          UNLOCK();
          if (*piVar53 == 0) {
            *piVar53 = -0xdead;
            uVar92 = *(undefined8 *)(piVar53 + 2);
            if ((pthread_mutex_t *)uVar92 != (pthread_mutex_t *)0x0) {
              puVar69[-2] = 0x3f13da;
              puVar69[-1] = 0;
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &((pthread_mutex_t *)(uVar92 + 0x28))->__data,(pthread_mutex_t *)uVar92);
              in_XMM1._8_8_ = extraout_XMM1_Qb_12;
              in_XMM1._0_8_ = extraout_XMM1_Qa_07;
              puVar69[-2] = 0x3f13e2;
              puVar69[-1] = 0;
              free((void *)uVar92);
              piVar53[2] = 0;
              piVar53[3] = 0;
            }
            pcVar86 = *(code **)(piVar53 + 10);
            if (pcVar86 != (code *)0x0) {
              uVar129 = *(undefined8 *)(piVar53 + 8);
              *(undefined1 **)(puVar69 + -2) = &LAB_003f13f9;
              (*pcVar86)(uVar129);
              in_XMM1._8_8_ = extraout_XMM1_Qb_13;
              in_XMM1._0_8_ = extraout_XMM1_Qa_08;
            }
            *(undefined1 **)(puVar69 + -2) = &LAB_003f1401;
            free(piVar53);
            auVar279 = extraout_XMM0_14;
          }
        }
        lVar119 = *(long *)(puVar69 + 4);
        lVar116 = *(long *)(puVar69 + 0x16);
        piVar53 = *(int **)(lVar34 + 0x78);
      }
      uVar88._0_4_ = piVar53[6];
joined_r0x003f143a:
      puVar50 = &_hb_NullPool;
      if (5 < (uint)uVar88) {
        puVar50 = *(undefined4 **)(piVar53 + 4);
      }
      uVar29 = *(ushort *)(puVar50 + 1);
      uVar79 = uVar29 << 8 | uVar29 >> 8;
      if (uVar29 == 0) {
        uVar79 = 0;
      }
      puVar69[0x10] = (uint)uVar79;
      *(uint *)(lVar34 + 0x18) = (uint)uVar79;
    }
    uVar88._0_4_ = *(uint *)(lVar116 + 0x14);
    uVar90 = *(uint *)(lVar116 + 0x18);
    lVar34 = (ulong)(uVar90 >> 0x18 | (uVar90 & 0xff0000) >> 8 | (uVar90 & 0xff00) << 8 |
                    uVar90 << 0x18) + lVar116 + 0xc;
    *(long *)(puVar69 + 0xc) = lVar116 + 0xc;
    uVar29 = *(ushort *)
              (lVar116 + 0xe +
              (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                      ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18));
    uVar33 = (ulong)(ushort)(uVar29 << 8 | uVar29 >> 8);
    if ((*(short *)(lVar34 + 4 + uVar33 * 6) == -1) && (*(short *)(lVar34 + uVar33 * 6) == 0)) {
      uVar33 = *(ulong *)(lVar119 + 0x80);
code_r0x003eed39:
      if ((*(ulong *)(lVar119 + 0xb0) & uVar33) == 0) goto LAB_003f0ec0;
      if ((*(ulong *)(lVar119 + 0xb8) & *(ulong *)(lVar119 + 0x88)) == 0) goto LAB_003f0ec0;
      if ((*(ulong *)(lVar119 + 0xc0) & *(ulong *)(lVar119 + 0x90)) == 0) goto LAB_003f0ec0;
      if ((((pthread_mutex_t *)(lVar119 + 200))->__align & uVar33) == 0) goto LAB_003f0ec0;
      if ((*(ulong *)(lVar119 + 0xd0) & *(ulong *)(lVar119 + 0x88)) == 0) goto LAB_003f0ec0;
      if ((*(ulong *)(lVar119 + 0x90) & *(ulong *)(lVar119 + 0xd8)) == 0) goto LAB_003f0ec0;
    }
    uVar88._0_4_ = (uint)puVar147;
    lVar116 = *(long *)&((pthread_mutex_t *)(lVar119 + 0x78))->__data;
    if ((lVar116 == 0) || (*(uint *)(lVar116 + 4) < 2)) {
      phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)&((pthread_mutex_t *)0x0)->__data;
      phVar140 = *(hb_buffer_t **)(lVar119 + 0x20);
      *(undefined4 *)(phVar140 + 0x5c) = 0;
      hVar7 = phVar140[0x58];
    }
    else {
      phVar32 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  **)(lVar116 + 8);
      puVar100 = puVar69;
code_r0x003eedb3:
      uVar88._0_4_ = (uint)puVar147;
      phVar140 = *(hb_buffer_t **)(lVar119 + 0x20);
      *(undefined4 *)(phVar140 + 0x5c) = 0;
      hVar7 = phVar140[0x58];
      puVar69 = puVar100;
    }
    if (hVar7 != (hb_buffer_t)0x0) {
      *(uint *)((long)puVar69 + 0x60) = ((uint)uVar88 & 0xff) >> 6;
      *(ulong *)((long)puVar69 + 0x50) =
           (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                  ((uint)uVar88 & 0xff00) << 8) + *(long *)((long)puVar69 + 0x58) + 0xc;
      uVar90 = 0;
      *(undefined4 *)((long)puVar69 + 0x2c) = 0;
      *(undefined4 *)((long)puVar69 + 0x20) = 0;
      uVar64 = 0;
      uVar88._0_4_ = *(uint *)(phVar140 + 0x60);
      uVar33 = 0;
      if ((pthread_mutex_t *)phVar32 == (pthread_mutex_t *)0x0) goto LAB_003ef1d0;
LAB_003ef090:
      if (uVar90 < (uint)uVar88) {
        uVar122 = *(uint *)(*(long *)(phVar140 + 0x70) + 8 + uVar33 * 0x14);
        phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)((long)phVar32 + 0xc);
        phVar81 = phVar32;
        do {
          phVar81 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)((long)&(((pthread_mutex_t *)((long)phVar81 + -0x28))->__data).__list.__prev
                       + 4);
          uVar92 = (long)phVar107 + -0xc;
          phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)((long)phVar107 + -8);
          phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)uVar92;
        } while (uVar122 < *(uint *)phVar32);
        do {
          phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)((long)phVar81 + 0xc);
          phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)((long)phVar81 + 0x14);
          phVar81 = phVar32;
        } while (*(uint *)phVar107 < uVar122);
      }
      if ((*(uint *)phVar32 & *(uint *)(*(long *)((long)puVar69 + 0x10) + 0xe0)) != 0)
      goto LAB_003ef1d3;
      lVar119 = *(long *)((long)puVar69 + 0x10);
      if (uVar90 == (uint)uVar88) goto LAB_003f0ec0;
      if (phVar140[0x5a] == (hb_buffer_t)0x0) {
        *(undefined4 *)((long)puVar69 + 8) = 0;
        goto LAB_003ef9f3;
      }
      pvVar123 = *(void **)(phVar140 + 0x78);
      pvVar57 = *(void **)(phVar140 + 0x70);
      if ((pvVar123 == pvVar57) && (*(uint *)(phVar140 + 100) == uVar90)) {
        *(undefined4 *)((long)puVar69 + 8) = 0;
        uVar88._0_4_ = uVar90;
        goto LAB_003ef9ea;
      }
      uVar88._0_4_ = *(uint *)(phVar140 + 100) + 1;
      if (((uint)uVar88 == 0) || ((uint)uVar88 < *(uint *)(phVar140 + 0x68))) {
        if (pvVar123 == pvVar57) {
LAB_003ef16d:
          uVar88._0_4_ = *(uint *)(phVar140 + 100);
          if (*(int *)(phVar140 + 0x5c) + 1U < (uint)uVar88 + 1) {
            pvVar123 = *(void **)(phVar140 + 0x80);
            *(void **)(phVar140 + 0x78) = pvVar123;
            *(undefined4 *)((long)puVar69 + 8) = 0;
            goto joined_r0x003ef194;
          }
          *(undefined4 *)((long)puVar69 + 8) = 0;
          goto LAB_003ef9bd;
        }
      }
      else {
        *(undefined8 *)((long)puVar69 + -8) = 0x3ef15c;
        uVar129 = hb_buffer_t::enlarge(phVar140,(uint)uVar88);
        if ((char)uVar129 == '\0') {
          *(undefined4 *)((long)puVar69 + 8) = 0;
          auVar279 = extraout_XMM0_04;
          if (phVar140[0x58] != (hb_buffer_t)0x0) goto LAB_003efa05;
          goto LAB_003f0ec0;
        }
        pvVar57 = *(void **)(phVar140 + 0x70);
        pvVar123 = *(void **)(phVar140 + 0x78);
        if (pvVar123 == pvVar57) goto LAB_003ef16d;
      }
      *(undefined4 *)((long)puVar69 + 8) = 0;
LAB_003ef9c0:
      do {
        uVar88._0_4_ = *(uint *)(phVar140 + 0x5c);
        uVar90 = *(uint *)(phVar140 + 100);
        *(undefined4 *)((long)pvVar123 + (ulong)uVar90 * 0x14 + 0x10) =
             *(undefined4 *)((long)pvVar57 + (ulong)(uint)uVar88 * 0x14 + 0x10);
        auVar279 = *(undefined1 (*) [16])((long)pvVar57 + (ulong)(uint)uVar88 * 0x14);
        *(undefined1 (*) [16])((long)pvVar123 + (ulong)uVar90 * 0x14) = auVar279;
        uVar90 = *(uint *)(phVar140 + 0x5c);
        uVar88._0_4_ = *(uint *)(phVar140 + 100);
LAB_003ef9ea:
        *(uint *)(phVar140 + 100) = (uint)uVar88 + 1;
LAB_003ef9f3:
        do {
          *(uint *)(phVar140 + 0x5c) = uVar90 + 1;
LAB_003ef9fa:
          do {
            if (phVar140[0x58] == (hb_buffer_t)0x0) goto LAB_003f0ec0;
LAB_003efa05:
            uVar64 = (uint)*(ushort *)((long)puVar69 + 8);
            uVar90 = *(uint *)(phVar140 + 0x5c);
            uVar88._0_4_ = *(uint *)(phVar140 + 0x60);
            uVar33 = (ulong)uVar90;
            if ((pthread_mutex_t *)phVar32 != (pthread_mutex_t *)0x0) goto LAB_003ef090;
LAB_003ef1d0:
            phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                       *)&((pthread_mutex_t *)0x0)->__data;
LAB_003ef1d3:
            if (uVar90 < (uint)uVar88) {
              uVar88._0_4_ = *(uint *)(*(long *)(phVar140 + 0x70) + uVar33 * 0x14);
              if ((ulong)(uint)uVar88 == 0xffff) {
                uVar33 = 2;
                goto LAB_003ef270;
              }
              lVar116 = *(long *)((long)puVar69 + 0x10);
              uVar33 = 1;
              if ((((*(ulong *)(lVar116 + 0x98) >> ((ulong)((uint)uVar88 >> 4) & 0x3f) & 1) == 0) ||
                  ((*(ulong *)(lVar116 + 0xa0) >> ((ulong)(uint)uVar88 & 0x3f) & 1) == 0)) ||
                 ((*(ulong *)(lVar116 + 0xa8) >> ((ulong)((uint)uVar88 >> 9) & 0x3f) & 1) == 0))
              goto LAB_003ef270;
              uVar90 = *(uint *)(*(long *)((long)puVar69 + 0x30) + 4);
              *(undefined8 *)((long)puVar69 + -8) = 0x3ef23f;
              pLVar46 = Lookup<OT::IntType<unsigned_short,2u>>::get_value
                                  ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                   ((ulong)(uVar90 >> 0x18 | (uVar90 & 0xff0000) >> 8 |
                                            (uVar90 & 0xff00) << 8 | uVar90 << 0x18) +
                                   *(long *)((long)puVar69 + 0x30)),(uint)uVar88,
                                   *(uint *)((long)puVar69 + 0x40));
              puVar100 = *(uint **)((long)puVar69 + 0x30);
              auVar279 = extraout_XMM0_05;
              if (pLVar46 != (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
                uVar33 = (ulong)(ushort)(*(ushort *)pLVar46 << 8 | *(ushort *)pLVar46 >> 8);
              }
            }
            else {
              uVar33 = 0;
LAB_003ef270:
              puVar100 = *(uint **)((long)puVar69 + 0x30);
            }
            uVar88._0_4_ = *puVar100;
            uVar122 = (uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                      ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18;
            uVar91 = (uint)uVar33;
            uVar90 = uVar91;
            if (uVar122 <= uVar91) {
              uVar90 = 1;
            }
            uVar63 = puVar100[2];
            uVar110 = puVar100[3];
            uVar63 = uVar63 >> 0x18 | (uVar63 & 0xff0000) >> 8 | (uVar63 & 0xff00) << 8 |
                     uVar63 << 0x18;
            uVar110 = uVar110 >> 0x18 | (uVar110 & 0xff0000) >> 8 | (uVar110 & 0xff00) << 8 |
                      uVar110 << 0x18;
            uVar29 = *(ushort *)
                      ((long)puVar100 + (ulong)(uVar90 + uVar122 * uVar64) * 2 + (ulong)uVar63);
            uVar152 = (ulong)(ushort)(uVar29 << 8 | uVar29 >> 8);
            uVar92 = uVar152 * 3;
            *(uint *)((long)puVar69 + 8) =
                 (uint)*(ushort *)((long)puVar100 + uVar152 * 6 + (ulong)uVar110);
            *(undefined8 *)((long)puVar69 + 0x38) = uVar92;
            if (*(short *)((long)puVar100 + uVar152 * 6 + (ulong)uVar110 + 4) == -1) {
              if ((uVar64 != 0) &&
                 ((uVar29 = *(ushort *)
                             ((long)puVar100 +
                             *(long *)((long)puVar69 + 0x38) * 2 + (ulong)uVar110 + 2),
                  (uVar29 & 0x40) == 0 || (*(short *)((long)puVar69 + 8) != 0)))) {
                if (uVar122 <= uVar91) {
                  uVar33 = 1;
                }
                uVar79 = *(ushort *)((long)puVar100 + uVar33 * 2 + (ulong)uVar63);
                uVar33 = (ulong)(ushort)(uVar79 << 8 | uVar79 >> 8);
                if (((*(short *)((long)puVar100 + uVar33 * 6 + (ulong)uVar110 + 4) != -1) ||
                    (uVar92._4_4_ = 0, uVar92._0_4_ = *(uint *)((long)puVar69 + 8),
                    (short)*(uint *)((long)puVar69 + 8) !=
                    *(short *)((long)puVar100 + uVar33 * 6 + (ulong)uVar110))) ||
                   (((uVar29 ^ *(ushort *)((long)puVar100 + uVar33 * 6 + (ulong)uVar110 + 2)) & 0x40
                    ) != 0)) goto LAB_003ef350;
              }
              uVar29 = *(ushort *)
                        ((long)puVar100 +
                        (ulong)((uint)((uint)uVar88 == 0) + uVar122 * uVar64) * 2 + (ulong)uVar63);
              if (*(short *)((long)puVar100 +
                            (ulong)(ushort)(uVar29 << 8 | uVar29 >> 8) * 6 + (ulong)uVar110 + 4) !=
                  -1) goto LAB_003ef350;
            }
            else {
LAB_003ef350:
              uVar88._0_4_ = *(uint *)(phVar140 + 0x5c);
              uVar90 = (uint)uVar88;
              if (phVar140[0x5a] != (hb_buffer_t)0x0) {
                uVar90 = *(uint *)(phVar140 + 100);
              }
              if ((uVar90 != 0) && ((uint)uVar88 < *(uint *)(phVar140 + 0x60))) {
                param_5 = (uint *)0x1;
                *(undefined1 **)((long)puVar69 + -8) = &LAB_003ef384;
                auVar279 = hb_buffer_t::_set_glyph_flags
                                     (phVar140,3,uVar90 - 1,(uint)uVar88 + 1,'\x01');
                in_XMM1._0_8_ = auVar279._8_8_;
                in_XMM1._8_8_ = extraout_XMM1_Qb_01;
                auVar279._8_8_ = extraout_XMM0_Qb;
              }
            }
            lVar119 = *(long *)((long)puVar69 + 0x10);
            if (((*(char *)((long)puVar69 + 0x2c) == '\0') ||
                (uVar29 = *(ushort *)
                           ((long)puVar100 +
                           *(long *)((long)puVar69 + 0x38) * 2 + 4 + (ulong)uVar110),
                uVar29 == 0xffff)) ||
               (uVar92._4_4_ = 0, uVar92._0_4_ = *(uint *)(phVar140 + 0x5c),
               *(uint *)(phVar140 + 0x60) <= *(uint *)(phVar140 + 0x5c))) {
LAB_003ef8e0:
              if ((*(byte *)((long)puVar100 +
                            *(long *)((long)puVar69 + 0x38) * 2 + (ulong)uVar110 + 2) & 0x80) != 0)
              {
                uVar30 = *(undefined4 *)(phVar140 + 0x5c);
                *(undefined4 *)((long)puVar69 + 0x20) = uVar30;
                *(int *)((long)puVar69 + 0x2c) = (int)CONCAT71((uint7)(uint3)((uint)uVar30 >> 8),1);
              }
LAB_003ef8fa:
              uVar90 = *(uint *)(phVar140 + 0x5c);
              if (uVar90 == *(uint *)(phVar140 + 0x60)) goto LAB_003f0ec0;
            }
            else {
              uVar29 = uVar29 << 8 | uVar29 >> 8;
              *(undefined8 *)((long)puVar69 + 0x48) = *(undefined8 *)(phVar140 + 0x80);
              iVar31 = *(int *)((long)puVar69 + 0x60);
              if (iVar31 == 2) {
                puVar148 = (ushort *)(*(long *)((long)puVar69 + 0x50) + (ulong)uVar29 * 8);
                if ((((ulong)((long)puVar148 - *(long *)(lVar119 + 0x30)) <=
                      (ulong)*(uint *)(lVar119 + 0x40)) &&
                    ((*(int *)(lVar119 + 0x38) - (int)puVar148 & 0xfffffff8U) != 0)) &&
                   (iVar31 = *(int *)(lVar119 + 0x44) + -8, *(int *)(lVar119 + 0x44) = iVar31,
                   0 < iVar31)) {
                  uVar29 = puVar148[1];
                  uVar79 = puVar148[3];
                  param_6 = *(long *)(lVar119 + 0x10);
                  lVar116 = *(long *)((long)puVar69 + 0x48);
                  *(int *)(lVar116 + 8 + uVar92 * 0x14) =
                       (int)((ulong)((long)(short)(*puVar148 << 8 | *puVar148 >> 8) *
                                     *(long *)(param_6 + 0x58) + 0x8000) >> 0x10) -
                       (int)((ulong)((long)(short)(puVar148[2] << 8 | puVar148[2] >> 8) *
                                     *(long *)(param_6 + 0x58) + 0x8000) >> 0x10);
                  *(int *)(lVar116 + 0xc + uVar92 * 0x14) =
                       (int)((ulong)((long)(short)(uVar29 << 8 | uVar29 >> 8) *
                                     *(long *)(param_6 + 0x60) + 0x8000) >> 0x10) -
                       (int)((ulong)((long)(short)(uVar79 << 8 | uVar79 >> 8) *
                                     *(long *)(param_6 + 0x60) + 0x8000) >> 0x10);
                  param_5 = (uint *)uVar92;
                  goto LAB_003ef8b4;
                }
                goto LAB_003ef8fa;
              }
              if (iVar31 == 1) {
                puVar148 = (ushort *)
                           (*(long *)((long)puVar69 + 0x50) + (ulong)((uint)uVar29 * 2) * 2);
                if ((((ulong)*(uint *)(lVar119 + 0x40) <
                      (ulong)((long)puVar148 - *(long *)(lVar119 + 0x30))) ||
                    ((*(int *)(lVar119 + 0x38) - (int)puVar148 & 0xfffffffcU) == 0)) ||
                   (iVar31 = *(int *)(lVar119 + 0x44) + -4, *(int *)(lVar119 + 0x44) = iVar31,
                   iVar31 < 1)) goto LAB_003ef8fa;
                lVar116 = *(long *)(lVar119 + 0x68);
                uVar88._0_4_ = *(uint *)(lVar116 + 4);
                pLVar130 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                            *)&_hb_Null_OT_Index;
                if ((uint)uVar88 != 0) {
                  pLVar130 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                              *)((ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                                         ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) +
                                lVar116);
                }
                *(ushort *)((long)puVar69 + 0x1d0) = puVar148[1];
                uVar29 = *puVar148;
                uVar88._0_4_ = *(uint *)(*(long *)(*(long *)(*(long *)((long)puVar69 + 0x10) + 0x20)
                                                  + 0x70) +
                                        (ulong)*(uint *)((long)puVar69 + 0x20) * 0x14);
                uVar90 = *(uint *)(*(long *)((long)puVar69 + 0x10) + 0x60);
                *(undefined8 *)((long)puVar69 + -8) = 0x3ef529;
                pLVar130 = Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                           ::get_value(pLVar130,(uint)uVar88,uVar90);
                puVar50 = &_hb_NullPool;
                if (pLVar130 !=
                    (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                     *)0x0) {
                  uVar29 = uVar29 << 8 | uVar29 >> 8;
                  uVar88._0_4_ = *(uint *)(lVar116 + 8);
                  lVar116 = (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                                    ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) + lVar116;
                  uVar33 = (ulong)(ushort)(*(ushort *)pLVar130 << 8 | *(ushort *)pLVar130 >> 8);
                  uVar88._0_4_ = *(uint *)(uVar33 + lVar116);
                  puVar50 = &_hb_NullPool;
                  if ((uint)uVar29 <
                      ((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                       ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18)) {
                    puVar50 = (undefined4 *)(lVar116 + uVar33 + (ulong)uVar29 * 4 + 4);
                  }
                }
                *(undefined4 **)((long)puVar69 + 0x1d8) = puVar50;
                lVar116 = *(long *)((long)puVar69 + 0x10);
                lVar119 = *(long *)(lVar116 + 0x68);
                uVar88._0_4_ = *(uint *)(*(long *)(*(long *)(lVar116 + 0x20) + 0x70) +
                                        (ulong)*(uint *)(*(long *)(lVar116 + 0x20) + 0x5c) * 0x14);
                uVar90 = *(uint *)(lVar116 + 0x60);
                uVar64 = *(uint *)(lVar119 + 4);
                pLVar130 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                            *)&_hb_Null_OT_Index;
                if (uVar64 != 0) {
                  pLVar130 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                              *)((ulong)(uVar64 >> 0x18 | (uVar64 & 0xff0000) >> 8 |
                                         (uVar64 & 0xff00) << 8 | uVar64 << 0x18) + lVar119);
                }
                *(undefined8 *)((long)puVar69 + -8) = 0x3ef5ae;
                pLVar130 = Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                           ::get_value(pLVar130,(uint)uVar88,uVar90);
                puVar148 = (ushort *)&_hb_NullPool;
                if (pLVar130 !=
                    (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                     *)0x0) {
                  uVar29 = *(ushort *)((long)puVar69 + 0x1d0) << 8 |
                           *(ushort *)((long)puVar69 + 0x1d0) >> 8;
                  uVar88._0_4_ = *(uint *)(lVar119 + 8);
                  lVar119 = (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                                    ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) + lVar119;
                  uVar33 = (ulong)(ushort)(*(ushort *)pLVar130 << 8 | *(ushort *)pLVar130 >> 8);
                  uVar88._0_4_ = *(uint *)(uVar33 + lVar119);
                  puVar148 = (ushort *)&_hb_NullPool;
                  if ((uint)uVar29 <
                      ((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                       ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18)) {
                    puVar148 = (ushort *)(lVar119 + uVar33 + (ulong)uVar29 * 4 + 4);
                  }
                }
                lVar119 = *(long *)((long)puVar69 + 0x10);
                param_5 = *(uint **)(lVar119 + 0x10);
                puVar132 = *(ushort **)((long)puVar69 + 0x1d8);
                uVar29 = *puVar132;
                lVar116 = *(long *)((long)puVar69 + 0x48);
                *(int *)(lVar116 + 8 + uVar92 * 0x14) =
                     (int)((ulong)((long)(short)(uVar29 << 8 | uVar29 >> 8) *
                                   *(long *)((long)param_5 + 0x58) + 0x8000) >> 0x10) -
                     (int)((ulong)((long)(short)(*puVar148 << 8 | *puVar148 >> 8) *
                                   *(long *)((long)param_5 + 0x58) + 0x8000) >> 0x10);
                uVar29 = puVar132[1];
                *(int *)(lVar116 + 0xc + uVar92 * 0x14) =
                     (int)((ulong)((long)(short)(uVar29 << 8 | uVar29 >> 8) *
                                   *(long *)((long)param_5 + 0x60) + 0x8000) >> 0x10) -
                     (int)((ulong)((long)(short)(puVar148[1] << 8 | puVar148[1] >> 8) *
                                   *(long *)((long)param_5 + 0x60) + 0x8000) >> 0x10);
                auVar279 = extraout_XMM0_06;
LAB_003ef8b4:
                lVar116 = *(long *)((long)puVar69 + 0x48);
                *(undefined1 *)(lVar116 + 0x12 + uVar92 * 0x14) = 1;
                *(short *)(lVar116 + 0x10 + uVar92 * 0x14) =
                     (short)*(undefined4 *)((long)puVar69 + 0x20) -
                     (short)*(undefined4 *)(phVar140 + 0x5c);
                phVar140[0xc0] = (hb_buffer_t)((byte)phVar140[0xc0] | 8);
                goto LAB_003ef8e0;
              }
              if (iVar31 != 0) goto LAB_003ef8b4;
              puVar148 = (ushort *)(*(long *)((long)puVar69 + 0x50) + (ulong)((uint)uVar29 * 2) * 2)
              ;
              if ((((ulong)*(uint *)(lVar119 + 0x40) <
                    (ulong)((long)puVar148 - *(long *)(lVar119 + 0x30))) ||
                  ((*(int *)(lVar119 + 0x38) - (int)puVar148 & 0xfffffffcU) == 0)) ||
                 (iVar31 = *(int *)(lVar119 + 0x44) + -4, *(int *)(lVar119 + 0x44) = iVar31,
                 iVar31 < 1)) goto LAB_003ef8fa;
              uVar29 = *puVar148;
              *(ushort *)((long)puVar69 + 0x1d8) = puVar148[1];
              *(undefined4 *)((long)puVar69 + 0x6c) = 0;
              *(undefined4 *)((long)puVar69 + 0x68) = 0;
              lVar116 = *(long *)(lVar119 + 0x10);
              uVar30 = *(undefined4 *)
                        (*(long *)(*(long *)(lVar119 + 0x20) + 0x70) +
                        (ulong)*(uint *)((long)puVar69 + 0x20) * 0x14);
              *(undefined4 *)((long)puVar69 + 0x70) = 0;
              *(undefined4 *)((long)puVar69 + 0x74) = 0;
              lVar119 = *(long *)(*(long *)(lVar116 + 0x90) + 0x10);
              if (lVar119 == 0) {
                uVar129 = 0;
              }
              else {
                uVar129 = *(undefined8 *)(lVar119 + 0x70);
              }
              uVar88 = *(undefined8 *)(lVar116 + 0x98);
              pcVar86 = *(code **)(*(long *)(lVar116 + 0x90) + 0x90);
              *(undefined8 *)puVar69 = uVar129;
              *(long *)((long)puVar69 + 0x1d0) = lVar116;
              param_5 = (uint *)((long)puVar69 + 0x74);
              param_6 = (long)puVar69 + 0x70;
              *(undefined8 *)((long)puVar69 + -8) = 0x3ef7a0;
              iVar31 = (*pcVar86)(lVar116,uVar88,uVar30,uVar29 << 8 | uVar29 >> 8);
              in_XMM1._8_8_ = extraout_XMM1_Qb_02;
              in_XMM1._0_8_ = extraout_XMM1_Qa_02;
              auVar279._8_8_ = extraout_XMM0_Qb_00;
              auVar279._0_8_ = extraout_XMM0_Qa_00;
              uVar29 = *(ushort *)((long)puVar69 + 0x1d8);
              if (iVar31 != 0) {
                *(undefined8 *)((long)puVar69 + -8) = 0x3ef7d1;
                hb_font_t::get_glyph_h_origin_with_fallback
                          (*(hb_font_t **)((long)puVar69 + 0x1d0),uVar30,
                           (int *)((long)puVar69 + 0x80),(int *)((long)puVar69 + 0x1f0));
                *(int *)((long)puVar69 + 0x74) =
                     *(int *)((long)puVar69 + 0x74) - *(int *)((long)puVar69 + 0x80);
                *(int *)((long)puVar69 + 0x70) =
                     *(int *)((long)puVar69 + 0x70) - *(int *)((long)puVar69 + 0x1f0);
                this = *(hb_font_t **)(*(long *)((long)puVar69 + 0x10) + 0x10);
                lVar116 = *(long *)(*(long *)((long)puVar69 + 0x10) + 0x20);
                uVar30 = *(undefined4 *)
                          (*(long *)(lVar116 + 0x70) + (ulong)*(uint *)(lVar116 + 0x5c) * 0x14);
                *(undefined4 *)((long)puVar69 + 0x68) = 0;
                *(undefined4 *)((long)puVar69 + 0x6c) = 0;
                lVar116 = *(long *)(*(long *)(this + 0x90) + 0x10);
                if (lVar116 == 0) {
                  uVar129 = 0;
                }
                else {
                  uVar129 = *(undefined8 *)(lVar116 + 0x70);
                }
                uVar88 = *(undefined8 *)(this + 0x98);
                pcVar86 = *(code **)(*(long *)(this + 0x90) + 0x90);
                *(undefined8 *)puVar69 = uVar129;
                param_5 = (uint *)((long)puVar69 + 0x6c);
                param_6 = (long)puVar69 + 0x68;
                *(undefined8 *)((long)puVar69 + -8) = 0x3ef859;
                iVar31 = (*pcVar86)(this,uVar88,uVar30,uVar29 << 8 | uVar29 >> 8);
                in_XMM1._8_8_ = extraout_XMM1_Qb_03;
                in_XMM1._0_8_ = extraout_XMM1_Qa_03;
                auVar279._8_8_ = extraout_XMM0_Qb_01;
                auVar279._0_8_ = extraout_XMM0_Qa_01;
                if (iVar31 != 0) {
                  *(undefined1 **)((long)puVar69 + -8) = &LAB_003ef87c;
                  auVar279 = hb_font_t::get_glyph_h_origin_with_fallback
                                       (this,uVar30,(int *)((long)puVar69 + 0x80),
                                        (int *)((long)puVar69 + 0x1f0));
                  in_XMM1._0_8_ = auVar279._8_8_;
                  in_XMM1._8_8_ = extraout_XMM1_Qb_04;
                  auVar279._8_8_ = extraout_XMM0_Qb_02;
                  *(int *)((long)puVar69 + 0x68) =
                       *(int *)((long)puVar69 + 0x68) - *(int *)((long)puVar69 + 0x1f0);
                  lVar116 = *(long *)((long)puVar69 + 0x48);
                  *(int *)(lVar116 + 8 + uVar92 * 0x14) =
                       (*(int *)((long)puVar69 + 0x80) - *(int *)((long)puVar69 + 0x6c)) +
                       *(int *)((long)puVar69 + 0x74);
                  *(int *)(lVar116 + 0xc + uVar92 * 0x14) =
                       *(int *)((long)puVar69 + 0x70) - *(int *)((long)puVar69 + 0x68);
                  lVar119 = *(long *)((long)puVar69 + 0x10);
                  goto LAB_003ef8b4;
                }
              }
              lVar119 = *(long *)((long)puVar69 + 0x10);
              uVar90 = *(uint *)(phVar140 + 0x5c);
              if (uVar90 == *(uint *)(phVar140 + 0x60)) goto LAB_003f0ec0;
            }
            if (phVar140[0x58] == (hb_buffer_t)0x0) goto LAB_003f0ec0;
            uVar29 = (ushort)*(undefined4 *)((long)puVar69 + 8);
            *(uint *)((long)puVar69 + 8) =
                 CONCAT22((short)((uint)*(undefined4 *)((long)puVar69 + 8) >> 0x10),
                          uVar29 << 8 | uVar29 >> 8);
          } while (((*(byte *)((long)puVar100 +
                              *(long *)((long)puVar69 + 0x38) * 2 + (ulong)uVar110 + 2) & 0x40) != 0
                   ) && (iVar31 = *(int *)(phVar140 + 200), *(int *)(phVar140 + 200) = iVar31 + -1,
                        0 < iVar31));
        } while (phVar140[0x5a] == (hb_buffer_t)0x0);
        pvVar123 = *(void **)(phVar140 + 0x78);
        pvVar57 = *(void **)(phVar140 + 0x70);
        if ((pvVar123 == pvVar57) && (*(uint *)(phVar140 + 100) == uVar90)) {
          uVar88._0_4_ = uVar90;
          goto LAB_003ef9ea;
        }
        uVar88._0_4_ = *(uint *)(phVar140 + 100) + 1;
        if (((uint)uVar88 == 0) || ((uint)uVar88 < *(uint *)(phVar140 + 0x68))) {
          if (pvVar123 != pvVar57) goto LAB_003ef9c0;
        }
        else {
          *(undefined8 *)((long)puVar69 + -8) = 0x3efa59;
          uVar129 = hb_buffer_t::enlarge(phVar140,(uint)uVar88);
          auVar279 = extraout_XMM0_07;
          if ((char)uVar129 == '\0') goto LAB_003ef9fa;
          pvVar57 = *(void **)(phVar140 + 0x70);
          pvVar123 = *(void **)(phVar140 + 0x78);
          if (pvVar123 != pvVar57) goto LAB_003ef9c0;
        }
        uVar88._0_4_ = *(uint *)(phVar140 + 100);
        if (*(int *)(phVar140 + 0x5c) + 1U < (uint)uVar88 + 1) {
          pvVar123 = *(void **)(phVar140 + 0x80);
          *(void **)(phVar140 + 0x78) = pvVar123;
joined_r0x003ef194:
          if ((uint)uVar88 != 0) {
            *(undefined8 *)((long)puVar69 + -8) = 0x3ef9b3;
            memcpy(pvVar123,pvVar57,(ulong)(uint)uVar88 * 0x14);
            pvVar57 = *(void **)(phVar140 + 0x70);
            pvVar123 = *(void **)(phVar140 + 0x78);
          }
        }
        else {
LAB_003ef9bd:
          pvVar123 = pvVar57;
        }
      } while( true );
    }
    goto LAB_003f0ec0;
  case 6:
    if ((*(byte *)(*(long *)(lVar119 + 8) + 0xa8) & 1) != 0) {
      puVar144._4_4_ = 0;
      puVar144._0_4_ = uVar90 << 0x18;
      if ((uVar90 << 0x18 & 0x10000000) == 0) {
        uVar33 = *(ulong *)(lVar119 + 0x80);
        if ((*(ulong *)(lVar119 + 0xb0) & uVar33) != 0) {
          if ((*(ulong *)(lVar119 + 0xb8) & *(ulong *)(lVar119 + 0x88)) != 0) {
            if (((((*(ulong *)(lVar119 + 0xc0) & *(ulong *)(lVar119 + 0x90)) != 0) &&
                 ((((pthread_mutex_t *)(lVar119 + 200))->__align & uVar33) != 0)) &&
                ((*(ulong *)(lVar119 + 0xd0) & *(ulong *)(lVar119 + 0x88)) != 0)) &&
               ((*(ulong *)(lVar119 + 0x90) & *(ulong *)(lVar119 + 0xd8)) != 0))
            goto code_r0x003eee56;
          }
        }
      }
    }
    goto LAB_003f0ec0;
  case 7:
    return (pthread_mutex_t *)uVar49;
  case 8:
  case 10:
  case 0xc:
  case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
    uVar33 = (ulong)*(uint *)(uVar33 + 0x1d609c4);
    goto code_r0x003f25c2;
  case 0xb:
    *(byte *)uVar49 =
         (byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar49 >> 7 |
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar49 << 1;
    goto code_r0x003f267c;
  case 0xd:
    goto code_r0x003f26d0;
  case 0xf:
    *(byte *)uVar129 =
         (byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar129 | 0xf4;
    goto LAB_003f275d;
  case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x11:
  case 0x13:
  case 0x15:
  case 0x17:
    goto code_r0x003f2dd3;
  case 0x12:
    *(byte *)uVar49 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar49 + bVar78;
    *(undefined8 *)(puVar69 + -2) = uVar92;
    uVar29 = *(ushort *)uVar129 << 8 | *(ushort *)uVar129 >> 8;
    if (8 < uVar29) {
      return (pthread_mutex_t *)0x0;
    }
    param_5 = &Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
               ::get_value::switchD_003f2ba5::switchdataD_005e0234;
    param_4 = SEXT48((int)(&Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                            ::get_value::switchD_003f2ba5::switchdataD_005e0234)[uVar29]);
    goto code_r0x003f2ba2;
  case 0x14:
                    /* WARNING (jumptable): Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
    UNK_005e0181 = bVar78 + 0x77;
    goto code_r0x003f2c43;
  case 0x16:
    if ((short)uVar49 != 0) {
      lVar34 = (long)((pthread_mutex_t *)0xffffffff)->__size;
      goto code_r0x003f2c90;
    }
    uVar88._0_2_ = *(ushort *)(uVar129 + 2) << 8 | *(ushort *)(uVar129 + 2) >> 8;
    uVar88._2_6_ = 0;
    param_6._2_6_ = 0;
    param_6._0_2_ = (ushort)uVar88;
    iVar31 = (int)param_5;
    goto joined_r0x003f2cc1;
  case 0x18:
    *(char *)uVar129 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar129 + -0xc;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x19:
    *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
      *)(uVar111 + 0x41) =
         (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          )((char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)(uVar111 + 0x41) + (char)uVar88);
    *(undefined8 *)(puVar69 + -2) = uVar129;
    *(uint **)(puVar69 + -4) = puVar147;
    *(uint **)(puVar69 + -6) = puVar144;
    *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
      **)(puVar69 + -8) = phVar32;
    *(undefined8 *)(puVar69 + -10) = uVar92;
    if ((ulong)*(uint *)(lVar116 + 0x18) < (ulong)((long)(uVar129 + 2) - *(long *)(lVar116 + 8)))
    goto LAB_003f312d;
    *(undefined8 *)(puVar69 + -0x12) = uVar88;
    if ((ushort)(*(ushort *)uVar129 << 8 | *(ushort *)uVar129 >> 8) < 0xb) {
      halt_baddata();
    }
    goto 
    AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_1
    ;
  case 0x1a:
  case 0x1c:
  case 0x1e:
  case 0x20:
  case 0x22:
    goto code_r0x003f3820;
  case 0x1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1d:
    goto code_r0x003f33ac;
  case 0x1f:
    goto code_r0x003f366d;
  case 0x21:
    return (pthread_mutex_t *)uVar49;
  case 0x23:
    return (pthread_mutex_t *)uVar49;
  case 0x24:
    LOCK();
    uVar30 = *(undefined4 *)(uVar92 + -0x74000009);
    *(int *)(uVar92 + -0x74000009) = (int)lVar116;
    lVar116._4_4_ = (undefined4)((ulong)lVar116 >> 0x20);
    lVar116._0_4_ = uVar30;
    UNLOCK();
    uRamffffffffc9e31e42 = uRamffffffffc9e31e42 >> 0xf | uRamffffffffc9e31e42 << 0x11;
    goto code_r0x003f398e;
  case 0x25:
  case 0x27:
  case 0x29:
  case 0x2b:
  case 0x2d:
    goto code_r0x003f3d5a;
  case 0x26:
    pcVar58 = (char *)(uVar33 + 0x1108703 + uVar49 * 8);
    *pcVar58 = *pcVar58 + bVar78;
    *(byte *)uVar49 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar49 + bVar78;
    puVar69[-2] = 0x41f838;
    puVar69[-1] = 0;
    bVar153 = subtag_matches((char *)uVar92,(char *)uVar111,"-mo");
    if (bVar153) {
LAB_0041f93e:
      puVar69[5] = 0x5a48544d;
      puVar69[6] = 0x5a484820;
      uVar88._0_4_ = 2;
LAB_0041f9e3:
      bVar153 = (char)uVar90 == '\0';
    }
    else {
      puVar69[-2] = 0x41f852;
      puVar69[-1] = 0;
      bVar153 = subtag_matches((char *)uVar92,(char *)uVar111,"-tw");
      pcVar58 = *(char **)(puVar69 + 8);
      if (bVar153) {
LAB_0041f9d2:
        puVar69[5] = 0x5a485420;
LAB_0041f9da:
        uVar88._0_4_ = 1;
        goto LAB_0041f9e3;
      }
      puVar69[-2] = 0x41ec8a;
      puVar69[-1] = 0;
      iVar31 = strncmp(pcVar58,"px-",3);
      if (iVar31 == 0) {
        pcVar58 = *(char **)(puVar69 + 2);
        puVar69[-2] = 0x41f87b;
        puVar69[-1] = 0;
        bVar153 = subtag_matches(pcVar58,(char *)uVar111,"-hk");
        if (!bVar153) {
          puVar69[-2] = 0x41f891;
          puVar69[-1] = 0;
          bVar153 = subtag_matches(pcVar58,(char *)uVar111,"-mo");
          if (bVar153) goto LAB_0041f93e;
          puVar69[-2] = 0x41f8ab;
          puVar69[-1] = 0;
          bVar153 = subtag_matches(pcVar58,(char *)uVar111,"-tw");
          pcVar58 = *(char **)(puVar69 + 8);
          if (bVar153) goto LAB_0041f9d2;
          goto LAB_0041ec92;
        }
LAB_0041f8d8:
        puVar69[5] = 0x5a484820;
        goto LAB_0041f9da;
      }
LAB_0041ec92:
      puVar69[-2] = 0x41eca6;
      puVar69[-1] = 0;
      iVar31 = strncmp(pcVar58,"sp-",3);
      if (iVar31 == 0) {
        pcVar58 = *(char **)(puVar69 + 2);
        puVar69[-2] = 0x41f8d4;
        puVar69[-1] = 0;
        bVar153 = subtag_matches(pcVar58,(char *)uVar111,"-hk");
        if (bVar153) goto LAB_0041f8d8;
        puVar69[-2] = 0x41f93a;
        puVar69[-1] = 0;
        bVar153 = subtag_matches(pcVar58,(char *)uVar111,"-mo");
        if (bVar153) goto LAB_0041f93e;
        puVar69[-2] = 0x41f99f;
        puVar69[-1] = 0;
        bVar153 = subtag_matches(pcVar58,(char *)uVar111,"-tw");
        pcVar58 = *(char **)(puVar69 + 8);
        if (bVar153) goto LAB_0041f9d2;
      }
      puVar69[-2] = 0x41ecc2;
      puVar69[-1] = 0;
      iVar31 = strncmp(pcVar58,"zh-",3);
      if (iVar31 != 0) {
LAB_0041ecca:
        puVar69[-2] = 0x41f0cc;
        puVar69[-1] = 0;
        iVar31 = strncmp(pcVar58,"zo-",3);
        pcVar58 = *(char **)(puVar69 + 2);
        cVar27 = (char)uVar90;
        if (iVar31 == 0) {
          puVar69[-2] = 0x41f0eb;
          puVar69[-1] = 0;
          bVar153 = subtag_matches(pcVar58,(char *)uVar111,"-hk");
          if (bVar153) {
            puVar69[5] = 0x5a484820;
LAB_0041f31b:
            uVar88._0_4_ = 1;
          }
          else {
            puVar69[-2] = 0x41f2dc;
            puVar69[-1] = 0;
            bVar153 = subtag_matches(pcVar58,(char *)uVar111,"-mo");
            if (!bVar153) {
              puVar69[-2] = 0x41f30c;
              puVar69[-1] = 0;
              bVar153 = subtag_matches(pcVar58,(char *)uVar111,"-tw");
              if (!bVar153) goto hb_ot_map_builder_t_hb_ot_map_builder_t_switchD_0041ebbb_caseD_62;
              puVar69[5] = 0x5a485420;
              goto LAB_0041f31b;
            }
            puVar69[5] = 0x5a48544d;
            puVar69[6] = 0x5a484820;
            uVar88._0_4_ = 2;
          }
          uVar90 = *puVar69;
          goto joined_r0x0041f32f;
        }
hb_ot_map_builder_t_hb_ot_map_builder_t_switchD_0041ebbb_caseD_62:
        puVar69[-2] = 0x41f344;
        puVar69[-1] = 0;
        pcVar58 = strchr(pcVar58,0x2d);
        if ((5 < *(long *)(puVar69 + 0xe)) && (pcVar58 != (char *)0x0)) {
          pbVar136 = (byte *)(pcVar58 + 1);
          puVar69[-2] = 0x41f366;
          puVar69[-1] = 0;
          pcVar59 = strchr((char *)pbVar136,0x2d);
          if (pcVar59 == (char *)0x0) {
            puVar69[-2] = 0x41f547;
            puVar69[-1] = 0;
            pcVar59 = (char *)strlen((char *)pbVar136);
            pbVar77 = *(byte **)(puVar69 + 2);
          }
          else {
            pcVar59 = pcVar59 + ~(ulong)pcVar58;
            pbVar77 = *(byte **)(puVar69 + 2);
          }
          if (pcVar59 == (char *)0x3) {
            if ((byte)((*pbVar136 & 0xdf) + 0xbf) < 0x1a) {
              pbVar77 = pbVar136;
            }
            *(byte **)(puVar69 + 2) = pbVar77;
          }
        }
        pcVar59 = *(char **)(puVar69 + 2);
        puVar69[-2] = 0x41f3a6;
        puVar69[-1] = 0;
        pcVar60 = strchr(pcVar59,0x2d);
        iVar31 = (int)uVar111;
        if (pcVar60 != (char *)0x0) {
          iVar31 = (int)pcVar60;
        }
        uVar90 = iVar31 - (int)pcVar59;
        *(char *)((long)puVar69 + 7) = cVar27;
        if (uVar90 == 3) {
          pcVar60 = " eaa IQS oaa ARA taa IQS aba";
          phVar32._0_4_ = 0x4c9;
          uVar88._0_4_ = 0x4c9;
joined_r0x0041f3f1:
          bVar153 = false;
        }
        else {
          if (uVar90 == 2) {
            pcVar60 = 
            "  aa RFA  ba KBA  fa KFA  ka AKA  ma HMA  na GRA  ra ARA  sa MSA  va RVA  ya MYA  za EZA  ab HSB  eb LEB  gb RGB  ib SIB  ib PPC  mb BMB  nb NEB  ob BIT  rb ERB  sb SOB  ac TAC  ec EHC  hc AHC  oc SOC  rc ERC  sc YSC  uc LSC  vc UHC  yc LEW  ad NAD  ed UED  vd VID  vd VHD  zd NZD  ee EWE  le LLE  ne GNE  oe OTN  se PSE  te ITE  ue QUE  af RAF  ff LUF  if NIF  jf IJF  of SOF  rf ARF  yf IRF  ag IRI  ag TRI  dg EAG  lg LAG  ng AUG  ug JUG  vg XNM  ah UAH  eh RWI  ih NIH  oh OMH  oh PPC  rh VRH  th IAH  th PPC  uh NUH  yh0EYH  yh EYH  zh REH  ai ANI  di DNI  di YLM  ei ELI  gi OBI  ii MIY  ki KPI  ni DNI  ni YLM  oi ODI  si LSI  ti ATI  ui UNI  uiKUNI  wi RWI  aj NAJ  ij IIJ  vj VAJ  wj VAJ  ak TAK  gk0NOK  ik KIK  jk AUK  kk ZAK  lk NRG  mk MHK  nk NAK  ok ROK  ok HOK  rk RNK  sk HSK  uk RUK  vk MOK  wk ROC  yk RIK  al TAL  bl ZTL  gl GUL  il MIL  nl NIL  ol OAL  tl HTL  ul BUL  vl IVL  gm GLM  hm HAM  im IRM  km DKM  lm LAM  lm RLM  nm GNM  om LOM  om MOR  rm RAM  sm YLM  tm STM  ym MRB  an UAN  bn RON  dn BDN  en PEN  gn GDN  ln DLN  nn NYN  on RON  rn BDN  vn VAN  vn HTA  yn IHC  co ICO  jo BJO  mo ORO  ro IRO  so SSO  ap NAP  ip LAP  lp KLP  sp SAP  tp GTP  uq ZUQ  mr SMR  nr NUR  or MOR  ur SUR  wr AUR  as NAS  cs DRS  ds DNS  es MSN  gs OGS  hs SOB  hs VRH  hs BRS  is HNS  ks YKS  ls VLS  ms OMS  ns0ANS  os LMS  qs IQS  rs BRS  ss ZWS  ts TOS  us NUS  vs EVS  ws KWS  at MAT  et LET  gt JAT  ht AHT  it YGT  kt MKT  lt LGT  nt ANT  ot NGT  rt KRT  st GST  tt TAT  wt IWT  wt AKA  yt THT  gu GYU  ku RKU  ru DRU  zu BZU  ev NEV  iv TIV  ov LOV  aw NLW  ow FLW  hx SHX  iy IIJ  oy ABY  az AHZ  hz SHZ  uz LUZ eaa IQS oaa ARA taa IQS aba"
            ;
            phVar32._0_4_ = 0xcc;
            uVar88._0_4_ = 0xcc;
            goto joined_r0x0041f3f1;
          }
          pcVar60 = (char *)0x0;
          bVar153 = true;
          phVar32._0_4_ = 0;
          uVar88._0_4_ = 0;
        }
        uVar64 = 0;
        if (pcVar59 == (char *)0x0) goto LAB_0041f46d;
        uVar64 = 0;
        uVar88._0_4_ = (uint)phVar32;
        if ((uVar90 == 0) || (cVar27 = *pcVar59, cVar27 == '\0')) goto LAB_0041f46d;
        uVar33 = 4;
        if (uVar90 < 4) {
          uVar33 = (ulong)uVar90;
        }
        uVar152 = 0;
        goto LAB_0041f420;
      }
      *(byte *)((long)puVar69 + 7) = (byte)uVar90;
      pcVar58 = *(char **)(puVar69 + 2);
      puVar69[-2] = 0x41f901;
      puVar69[-1] = 0;
      bVar153 = subtag_matches(pcVar58,(char *)uVar111,"-hk");
      if (bVar153) {
        puVar69[5] = 0x5a484820;
        uVar88._0_4_ = 1;
        bVar153 = *(char *)((long)puVar69 + 7) == '\0';
      }
      else {
        puVar69[-2] = 0x41f96d;
        puVar69[-1] = 0;
        bVar153 = subtag_matches(pcVar58,(char *)uVar111,"-mo");
        if (!bVar153) {
          puVar69[-2] = 0x41f9c0;
          puVar69[-1] = 0;
          bVar153 = subtag_matches(pcVar58,(char *)uVar111,"-tw");
          uVar90 = (uint)*(byte *)((long)puVar69 + 7);
          pcVar58 = *(char **)(puVar69 + 8);
          if (bVar153) goto LAB_0041f9d2;
          goto LAB_0041ecca;
        }
        puVar69[5] = 0x5a48544d;
        puVar69[6] = 0x5a484820;
        uVar88._0_4_ = 2;
        bVar153 = *(char *)((long)puVar69 + 7) == '\0';
      }
    }
    uVar90 = *puVar69;
    if (!bVar153) goto LAB_0041f56e;
    goto LAB_0041f6da;
  case 0x28:
    goto code_r0x003f3b06;
  case 0x2a:
    goto code_r0x003f3c06;
  case 0x2c:
    *(byte *)uVar49 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar49 + bVar78;
    uVar96 = uVar92;
    goto LAB_003f3cf0;
  case 0x2e:
    *(byte *)uVar129 =
         (byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar129 >> 7 |
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar129 << 1;
    auVar10._4_4_ = in_XMM9_Db;
    auVar10._0_4_ = in_XMM9_Da;
    auVar10._8_4_ = in_XMM9_Dc;
    auVar10._12_4_ = in_XMM9_Dd;
    vpaddsw_avx(auVar10,*(undefined1 (*) [16])(lVar116 + -0x7d));
    if (-0x5e01f5 < (long)uVar33) goto code_r0x003f3d03;
    param_4._1_1_ = (pthread_mutex_t *)uVar49 == (pthread_mutex_t *)0x0;
    param_4._0_1_ = 0xf4;
    param_4._2_6_ = 0x5e;
    goto code_r0x003f3d03;
  case 0x2f:
    bVar153 = CARRY1((byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                             *)uVar49,bVar78);
    *(byte *)uVar49 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar49 + bVar78;
    uVar124 = lVar116;
    goto code_r0x003f3f52;
  case 0x30:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x31:
    goto code_r0x003f45a3;
  case 0x32:
  case 0x34:
    if (((ulong)*(uint *)(lVar116 + 0x18) < (uVar49 - *(long *)(lVar116 + 8)) + 2U) ||
       (uVar29 = *(ushort *)uVar129 << 8 | *(ushort *)uVar129 >> 8, uVar29 < 2)) goto LAB_003f4e62;
    uVar92 = *(undefined8 *)(lVar116 + 8);
    param_4._4_4_ = 0;
    param_4._0_4_ = *(uint *)(lVar116 + 0x18);
    if ((ulong)param_4 < (pthread_mutex_t *)((uVar129 - uVar92) + 8)) goto LAB_003f4e62;
    uVar118 = uVar129 + 8;
    uVar88._0_4_ = *(uint *)(uVar129 + 4);
    phVar32._0_4_ =
         (uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 | ((uint)uVar88 & 0xff00) << 8 |
         (uint)uVar88 << 0x18;
    in_R11 = (uint *)(ulong)(uint)phVar32;
    uVar90 = 0;
    if ((uint)uVar88 != 0) {
      *(undefined8 *)(puVar69 + 0x20) = uVar129;
      puVar69[0x1b] = (uint)uVar88;
      *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
        **)(puVar69 + 0x1e) =
           (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
            *)(lVar116 + 8);
      puVar69[0x1d] = (uint)phVar32 - 1;
      param_6 = lVar116 + 0x1c;
      *(uint **)(puVar69 + 0x22) = in_R11;
      uVar88._0_4_ = 1;
      if (1 < (uint)phVar32) {
        uVar88._0_4_ = (uint)phVar32;
      }
      puVar69[0x1c] = (uint)uVar88;
      uVar129 = (pthread_mutex_t *)0x0;
      in_XMM7 = (undefined1  [16])0x0;
      *(long *)(puVar69 + 4) = param_6;
      phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)lVar116;
      goto LAB_003f3f0e;
    }
    goto LAB_003f4e86;
  case 0x33:
    goto LAB_003f4640;
  case 0x35:
    goto code_r0x003f4c23;
  case 0x36:
    goto code_r0x003f4f12;
  case 0x37:
  case 0x39:
  case 0x3b:
  case 0x3d:
  case 0x3f:
    goto code_r0x003f51ac;
  case 0x38:
    LOCK();
    *(int *)lVar116 = (int)uVar88;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3a:
    goto code_r0x003f4f71;
  case 0x3c:
    *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
      *)(uVar111 + 0xf) =
         (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          )((char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)(uVar111 + 0xf) + SUB81(uVar88,1));
    goto code_r0x003f5152;
  case 0x3e:
    goto code_r0x003f51c3;
  case 0x40:
    goto code_r0x003f5215;
  case 0x41:
    goto code_r0x003f7f71;
  default:
    *(byte *)uVar49 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar49 + bVar78;
    (&UNK_005e017f)[uVar33] = (&UNK_005e017f)[uVar33] + -0xc;
    goto code_r0x003f7e92;
  case 0x48:
    goto code_r0x003f7f25;
  case 0x49:
    halt_baddata();
  case 0x4c:
    pcVar86 = (code *)swi(1);
    ppVar117 = (pthread_mutex_t *)(*pcVar86)();
    return ppVar117;
  case 0x5a:
    goto LAB_003f8038;
  case 0x5b:
    goto code_r0x003f7fe1;
  case 0x5f:
    *(char *)uVar49 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar49 + '\x01';
    *(byte *)uVar49 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar49 + bVar78;
    goto LAB_003f8000;
  case 0x7b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7f:
    *(byte *)uVar49 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar49 + bVar78;
    goto code_r0x003f8047;
  case 0x9b:
    goto code_r0x003f7fc3;
  case 0x9d:
    lVar34._0_1_ = bVar78 + 0x76;
    goto code_r0x003f7fe5;
  case 0x9e:
    goto code_r0x003f7dfd;
  case 0x9f:
    break;
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
    goto LAB_003f7d30;
  case 0xb0:
    piVar53 = (int *)((uVar33 - 0x7458cf98) + uVar49 * 8);
    *piVar53 = *piVar53 + 1;
    LOCK();
    uVar30 = *(undefined4 *)(uVar33 + 0x485e01f4);
    *(undefined4 *)(uVar33 + 0x485e01f4) = (int)uVar49;
    uVar33 = CONCAT44((int)((ulong)uVar49 >> 0x20),uVar30);
    UNLOCK();
    goto code_r0x003f7e42;
  case 0xb1:
    uVar33 = uVar49 & 0xffffffffffffff60;
    goto code_r0x003f7e42;
  case 0xb2:
  case 0xb4:
    uVar129._0_4_ = (int)uVar129 + 0x28;
    uVar129._4_4_ = 0;
    goto LAB_003fd093;
  case 0xb3:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xc0:
  case 0xc1:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
  case 0xf1:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7:
  case 0xf8:
  case 0xf9:
  case 0xfa:
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0xfe:
  case 0xff:
    *(uint *)(&UNK_005e0177 + uVar33) = *(uint *)(&UNK_005e0177 + uVar33) & 0x5e01f4;
    return (pthread_mutex_t *)uVar49;
  case 0xb5:
    *(byte *)uVar49 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar49 + bVar78;
    *(byte *)uVar49 =
         (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)uVar49 + bVar78;
    *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
      *)(lVar116 + -0x70) =
         (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          )((char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)(lVar116 + -0x70) + SUB81(uVar49,1));
    goto LAB_003fd120;
  }
code_r0x003f7de1:
  *(char *)uVar49 =
       (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
               *)uVar49 + (char)uVar49;
  *(long *)param_4 = lVar143;
  puVar100 = puVar69;
  goto LAB_003f7db0;
  while( true ) {
    uVar47 = uVar47 + 1;
    pbVar136 = (byte *)(*(long *)((long)phVar32 + 0x70) + lVar116);
    lVar116 = lVar116 + 0x14;
    if ((*pbVar136 & 0x80) == 0) break;
LAB_003f79a0:
    if ((pthread_mutex_t *)(ulong)((uint)uVar88 - 1) == (pthread_mutex_t *)uVar47) {
      uVar47 = uVar49;
      break;
    }
  }
  uVar129 = ((pthread_mutex_t *)0x0)->__size;
  do {
    uVar90 = (uint)uVar47;
    uVar92 = uVar47 & 0xffffffff;
    uVar111 = uVar47 & 0xffffffff;
    if ((uint)uVar49 < uVar90) {
      uVar111 = uVar49;
    }
    uVar64 = (uint)uVar111;
    uVar122 = (uint)uVar129;
    if (1 < uVar64 - uVar122) {
      *(byte *)((long)phVar32 + 0xc0) = *(byte *)((long)phVar32 + 0xc0) | 0x20;
      lVar116 = *(long *)((long)phVar32 + 0x70);
      param_5 = (uint *)0xffffffff;
      if (uVar64 != uVar122) {
        if (*(int *)((long)phVar32 + 0x1c) == 2) {
          if (uVar122 < uVar64) {
            uVar33 = uVar111 - uVar129;
            param_5 = (uint *)0xffffffff;
            if (8 < uVar33) {
              uVar152 = (ulong)((uint)uVar33 & 7);
              if (uVar152 == 0) {
                uVar152 = 8;
              }
              lVar119 = (long)(uVar152 + uVar129) - uVar111;
              puVar50 = (undefined4 *)(lVar116 + uVar129 * 0x14 + 0x94);
              auVar226._8_4_ = 0xffffffff;
              auVar226._0_8_ = 0xffffffffffffffff;
              auVar226._12_4_ = 0xffffffff;
              auVar186._8_4_ = 0xffffffff;
              auVar186._0_8_ = 0xffffffffffffffff;
              auVar186._12_4_ = 0xffffffff;
              do {
                in_XMM4._12_4_ = puVar50[-0x14];
                in_XMM4._8_4_ = puVar50[-0x19];
                in_XMM4._4_4_ = puVar50[-0x1e];
                in_XMM4._0_4_ = puVar50[-0x23];
                in_XMM5._12_4_ = *puVar50;
                in_XMM5._8_4_ = puVar50[-5];
                in_XMM5._4_4_ = puVar50[-10];
                in_XMM5._0_4_ = puVar50[-0xf];
                auVar189 = in_XMM4 ^ _DAT_006524b0;
                auVar279 = auVar226 ^ _DAT_006524b0;
                auVar258._0_4_ = -(uint)(auVar279._0_4_ < auVar189._0_4_);
                auVar258._4_4_ = -(uint)(auVar279._4_4_ < auVar189._4_4_);
                auVar258._8_4_ = -(uint)(auVar279._8_4_ < auVar189._8_4_);
                auVar258._12_4_ = -(uint)(auVar279._12_4_ < auVar189._12_4_);
                auVar226 = ~auVar258 & in_XMM4 | auVar226 & auVar258;
                auVar189 = in_XMM5 ^ _DAT_006524b0;
                auVar279 = auVar186 ^ _DAT_006524b0;
                auVar259._0_4_ = -(uint)(auVar279._0_4_ < auVar189._0_4_);
                auVar259._4_4_ = -(uint)(auVar279._4_4_ < auVar189._4_4_);
                auVar259._8_4_ = -(uint)(auVar279._8_4_ < auVar189._8_4_);
                auVar259._12_4_ = -(uint)(auVar279._12_4_ < auVar189._12_4_);
                auVar186 = ~auVar259 & in_XMM5 | auVar186 & auVar259;
                puVar50 = puVar50 + 0x28;
                lVar119 = lVar119 + 8;
              } while (lVar119 != 0);
              uVar129 = uVar129 + (uVar33 - uVar152);
              auVar279 = auVar226 ^ _DAT_006524b0;
              auVar189 = auVar186 ^ _DAT_006524b0;
              auVar260._0_4_ = -(uint)(auVar279._0_4_ < auVar189._0_4_);
              auVar260._4_4_ = -(uint)(auVar279._4_4_ < auVar189._4_4_);
              auVar260._8_4_ = -(uint)(auVar279._8_4_ < auVar189._8_4_);
              auVar260._12_4_ = -(uint)(auVar279._12_4_ < auVar189._12_4_);
              auVar226 = ~auVar260 & auVar186 | auVar226 & auVar260;
              auVar170._0_8_ = auVar226._8_8_;
              auVar170._8_4_ = auVar226._8_4_;
              auVar170._12_4_ = auVar226._12_4_;
              auVar279 = auVar226 ^ _DAT_006524b0;
              auVar189 = auVar170 ^ _DAT_006524b0;
              auVar224._0_4_ = -(uint)(auVar279._0_4_ < auVar189._0_4_);
              auVar224._4_4_ = -(uint)(auVar279._4_4_ < auVar189._4_4_);
              auVar224._8_4_ = -(uint)(auVar279._8_4_ < auVar189._8_4_);
              auVar224._12_4_ = -(uint)(auVar279._12_4_ < auVar189._12_4_);
              in_XMM2 = ~auVar224 & auVar170 | auVar226 & auVar224;
              uVar30 = in_XMM2._4_4_;
              auVar171._4_4_ = uVar30;
              auVar171._0_4_ = uVar30;
              auVar171._8_4_ = uVar30;
              auVar171._12_4_ = uVar30;
              auVar279 = in_XMM2 ^ _DAT_006524b0;
              auVar189 = auVar171 ^ _DAT_006524b0;
              auVar261._0_4_ = -(uint)(auVar279._0_4_ < auVar189._0_4_);
              auVar261._4_4_ = -(uint)(auVar279._4_4_ < auVar189._4_4_);
              auVar261._8_4_ = -(uint)(auVar279._8_4_ < auVar189._8_4_);
              auVar261._12_4_ = -(uint)(auVar279._12_4_ < auVar189._12_4_);
              in_XMM2 = in_XMM2 & auVar261;
              in_XMM3 = ~auVar261 & auVar171 | in_XMM2;
              param_5._0_4_ = in_XMM3._0_4_;
              param_5._4_4_ = 0;
              in_XMM6 = _DAT_006524b0;
            }
            lVar119 = uVar111 - uVar129;
            puVar69 = (uint *)(lVar116 + uVar129 * 0x14 + 8);
            do {
              if (*puVar69 < (uint)param_5) {
                param_5._4_4_ = 0;
                param_5._0_4_ = *puVar69;
              }
              puVar69 = puVar69 + 5;
              lVar119 = lVar119 + -1;
            } while (lVar119 != 0);
          }
        }
        else {
          uVar91 = *(uint *)(lVar116 + 8 + uVar129 * 0x14);
          uVar63 = *(uint *)(lVar116 + 8 + (ulong)(uVar64 - 1) * 0x14);
          param_5._4_4_ = 0;
          param_5._0_4_ = uVar91;
          if (uVar63 < uVar91) {
            param_5._4_4_ = 0;
            param_5._0_4_ = uVar63;
          }
        }
      }
      param_6 = 3;
      *(undefined8 *)((long)puVar100 + -8) = 0x3fb4db;
      hb_buffer_t::_infos_set_glyph_flags
                ((hb_buffer_t *)phVar32,lVar116,uVar122,uVar64,(uint)param_5,3);
      in_XMM1._8_8_ = extraout_XMM1_Qb_47;
      in_XMM1._0_8_ = extraout_XMM1_Qa_31;
      uVar49._4_4_ = 0;
      uVar49._0_4_ = *(uint *)((long)phVar32 + 0x60);
    }
    uVar72._0_4_ = uVar90 + 1;
    uVar72._4_4_ = 0;
    if ((uint)uVar72 < (uint)uVar49) {
      uVar72 = uVar49;
    }
    uVar47 = uVar92;
    do {
      if ((int)uVar72 + -1 == (int)uVar47) {
        uVar47 = uVar72;
        break;
      }
      uVar47._0_4_ = (int)uVar47 + 1;
      uVar47._4_4_ = 0;
    } while ((*(byte *)(*(long *)((long)phVar32 + 0x70) + 0x10 + (ulong)(uint)uVar47 * 0x14) & 0x80)
             != 0);
    uVar129 = uVar92;
  } while (uVar90 < (uint)uVar88);
  goto LAB_003f790f;
code_r0x003f7dec:
  while( true ) {
    ppVar117 = (pthread_mutex_t *)(uVar88 & 0xffffffff);
    param_4 = param_4 + 0x14;
    uVar88 = uVar88 + -1;
    uVar49 = uVar49 + -0x14;
    bVar153 = (ulong)lVar116 < ppVar117;
    puVar69 = puVar100;
code_r0x003f7dfd:
    puVar100 = puVar69;
    if (!bVar153) break;
LAB_003f7db0:
    *(undefined4 *)((long)puVar100 + 0xe0) = *(undefined4 *)(uVar49 + 0x10);
    uVar129 = *(undefined8 *)(uVar49 + 8);
    *(long *)((long)puVar100 + 0xd0) = *(long *)uVar49;
    *(undefined8 *)((long)puVar100 + 0xd8) = uVar129;
    *(undefined4 *)(uVar49 + 0x10) = *(undefined4 *)(param_4 + 0x10);
    uVar129 = *(undefined8 *)(param_4 + 8);
    *(long *)uVar49 = *(long *)param_4;
    *(undefined8 *)(uVar49 + 8) = uVar129;
    *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)((long)puVar100 + 0xe0);
    auVar279 = *(undefined1 (*) [16])((long)puVar100 + 0xd0);
    *(undefined1 (*) [16])param_4 = auVar279;
    lVar116 = lVar116 + 1;
  }
  goto LAB_003f7dff;
code_r0x003f7fe1:
  iRam8d48c96348c373ca = (int)uVar49;
  lVar34._0_4_ = iRam8d48c96348c373ca + 0x21095d + (uint)bVar153;
  lVar34._4_4_ = 0;
  puVar100 = puVar69;
code_r0x003f7fe5:
  param_4 = SEXT48((int)param_4);
  uVar113._4_4_ = 0;
  uVar113._0_4_ = *(uint *)(&DAT_0060894c + param_4 * 4);
  if (*(uint *)(&DAT_0060894c + param_4 * 4) == (uint)lVar34)
  goto _hb_ot_shape_switchD_003f8054_caseD_2015;
LAB_003f807d:
  do {
    *(undefined4 *)((long)puVar100 + 0xd0) = 0;
    uVar33 = *(ulong *)(*(long *)((long)puVar100 + 8) + 0x90);
    uVar111 = uVar113;
    if (*(long *)(uVar33 + 0x10) == 0) {
      param_5 = (uint *)0x0;
    }
    else {
      param_5 = *(uint **)(*(long *)(uVar33 + 0x10) + 0x10);
    }
LAB_003f7f87:
    uVar129 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
    param_4 = (long)puVar100 + 0xd0;
    pcVar86 = *(code **)(uVar33 + 0x30);
    *(undefined8 *)((long)puVar100 + -8) = 0x3f7fa0;
    iVar31 = (*pcVar86)(*(long *)((long)puVar100 + 8),uVar129,uVar111 & 0xffffffff);
    in_XMM1._8_8_ = extraout_XMM1_Qb_22;
    in_XMM1._0_8_ = extraout_XMM1_Qa_13;
    auVar279._8_8_ = extraout_XMM0_Qb_15;
    auVar279._0_8_ = extraout_XMM0_Qa_10;
    if (iVar31 != 0) {
      *(int *)(lVar119 + uVar92) = (int)uVar111;
    }
_hb_ot_shape_switchD_003f8054_caseD_2015:
    do {
      while( true ) {
        uVar92 = uVar92 + 0x14;
        if (phVar32 ==
            (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
             *)uVar92) goto LAB_003f817b;
LAB_003f7fb5:
        uVar49._4_4_ = 0;
        uVar49._0_4_ = *(uint *)(lVar119 + uVar92);
code_r0x003f7fb9:
        param_4 = (ulong)uVar49 >> 8 & 0xffffff;
        if (0xfd < (uint)param_4) break;
code_r0x003f7fc6:
        lVar34 = uVar49;
        if ((int)param_4 == 0x20) {
LAB_003f8038:
          param_4._0_4_ = (int)uVar49 - 0x2013;
          param_4._4_4_ = 0;
          if ((uint)param_4 < 0x14) {
code_r0x003f8047:
                    /* WARNING: Could not recover jumptable at 0x003f8054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            ppVar117 = (pthread_mutex_t *)
                       (*(code *)((long)*(int *)((long)puVar144 + param_4 * 4) + (long)puVar144))();
            return ppVar117;
          }
        }
        else {
code_r0x003f7fcb:
          if ((int)param_4 == 0x30) {
            param_4._0_4_ = (int)lVar34 - 0x3001;
            param_4._4_4_ = 0;
            if (((uint)param_4 < 0x17) && ((0x79ff83U >> ((uint)param_4 & 0x1f) & 1) != 0))
            goto code_r0x003f7fe5;
          }
        }
      }
LAB_003f8000:
      lVar34 = uVar49;
      if ((int)param_4 != 0xfe) {
code_r0x003f8008:
        if (((int)param_4 == 0xff) &&
           (param_4._0_4_ = (int)lVar34 - 0xff01, param_4._4_4_ = 0, (uint)param_4 < 0x5d))
        goto code_r0x003f801b;
        goto _hb_ot_shape_switchD_003f8054_caseD_2015;
      }
      uVar113 = (pthread_mutex_t *)0xfe34;
    } while ((int)uVar49 != 0xfe4f);
  } while( true );
LAB_003f8560:
  uVar122 = *(uint *)((long)param_5 + (ulong)((int)uVar152 + 1) * 0x14);
  uVar30 = *(undefined4 *)((long)param_5 + uVar152 * 0x14);
  *(undefined4 *)
   ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
     *)((long)param_5 + 0xc) + uVar152 * 0x14) = 0;
  param_4 = (long)((long)param_5 + uVar152 * 0x14) + 0xc;
  lVar119 = *(long *)(lVar116 + 0x90);
  if (((uVar122 & 0xfffffff0) == 0xfe00) || (0xffffff0f < uVar122 - 0xe01f0)) {
    if (*(long *)(lVar119 + 0x10) == 0) {
      uVar129 = 0;
    }
    else {
      uVar129 = *(undefined8 *)(*(long *)(lVar119 + 0x10) + 0x20);
    }
    uVar111 = *(undefined8 *)(lVar116 + 0x98);
    pcVar86 = *(code **)(lVar119 + 0x40);
    *(undefined8 *)((long)puVar100 + -8) = 0x3f86ac;
    iVar31 = (*pcVar86)(lVar116,uVar111,uVar30,uVar122,param_4,uVar129);
    in_XMM1._8_8_ = extraout_XMM1_Qb_27;
    in_XMM1._0_8_ = extraout_XMM1_Qa_18;
    if (iVar31 != 0) {
      uVar129 = (ulong)*(uint *)(phVar140 + 0x5c) * 5;
      *(undefined4 *)((long)puVar100 + 0x240) =
           *(undefined4 *)(*(long *)(phVar140 + 0x70) + (ulong)*(uint *)(phVar140 + 0x5c) * 0x14);
      *(undefined8 *)((long)puVar100 + -8) = 0x3f86da;
      hb_buffer_t::replace_glyphs<unsigned_int>(phVar140,2,(undefined4 *)((long)puVar100 + 0x240));
      goto LAB_003f8920;
    }
    lVar116 = *(long *)(phVar140 + 0x70);
    uVar33 = (ulong)*(uint *)(phVar140 + 0x5c);
    uVar30 = *(undefined4 *)(lVar116 + uVar33 * 0x14);
    *(undefined4 *)(lVar116 + 0xc + uVar33 * 0x14) = 0;
    uVar129 = *(undefined8 *)(*(long *)((long)puVar100 + 0x20) + 0x98);
    pcVar86 = *(code **)(*(long *)(*(long *)((long)puVar100 + 0x20) + 0x90) + 0x30);
    *(undefined8 *)((long)puVar100 + -8) = 0x3f8757;
    (*pcVar86)(*(long *)((long)puVar100 + 0x20),uVar129,uVar30,lVar116 + uVar33 * 0x14 + 0xc);
    if (phVar140[0x5a] == (hb_buffer_t)0x0) {
LAB_003f87eb:
      uVar64 = *(int *)(phVar140 + 0x5c) + 1;
      *(uint *)(phVar140 + 0x5c) = uVar64;
    }
    else {
      pvVar123 = *(void **)(phVar140 + 0x78);
      pvVar57 = *(void **)(phVar140 + 0x70);
      iVar31 = *(int *)(phVar140 + 100);
      if ((pvVar123 == pvVar57) && (iVar31 == *(int *)(phVar140 + 0x5c))) {
LAB_003f87e5:
        *(int *)(phVar140 + 100) = iVar31 + 1;
        goto LAB_003f87eb;
      }
      uVar64 = iVar31 + 1;
      if ((uVar64 == 0) || (uVar64 < *(uint *)(phVar140 + 0x68))) {
        if (pvVar123 == pvVar57) {
LAB_003f8788:
          uVar64 = *(uint *)(phVar140 + 100);
          if (*(int *)(phVar140 + 0x5c) + 1U < uVar64 + 1) {
            pvVar123 = *(void **)(phVar140 + 0x80);
            *(void **)(phVar140 + 0x78) = pvVar123;
            if ((ulong)uVar64 != 0) {
              *(undefined8 *)((long)puVar100 + -8) = 0x3f87b5;
              memcpy(pvVar123,pvVar57,(ulong)uVar64 * 0x14);
              pvVar57 = *(void **)(phVar140 + 0x70);
              pvVar123 = *(void **)(phVar140 + 0x78);
            }
          }
          else {
            pvVar123 = pvVar57;
          }
        }
LAB_003f87c2:
        uVar64 = *(uint *)(phVar140 + 0x5c);
        uVar122 = *(uint *)(phVar140 + 100);
        *(undefined4 *)((long)pvVar123 + (ulong)uVar122 * 0x14 + 0x10) =
             *(undefined4 *)((long)pvVar57 + (ulong)uVar64 * 0x14 + 0x10);
        puVar131 = (undefined8 *)((long)pvVar57 + (ulong)uVar64 * 0x14);
        uVar129 = puVar131[1];
        puVar84 = (undefined8 *)((long)pvVar123 + (ulong)uVar122 * 0x14);
        *puVar84 = *puVar131;
        puVar84[1] = uVar129;
        iVar31 = *(int *)(phVar140 + 100);
        goto LAB_003f87e5;
      }
      *(undefined8 *)((long)puVar100 + -8) = 0x3f8aaf;
      uVar129 = hb_buffer_t::enlarge(phVar140,uVar64);
      if ((char)uVar129 != '\0') {
        pvVar57 = *(void **)(phVar140 + 0x70);
        pvVar123 = *(void **)(phVar140 + 0x78);
        if (pvVar123 == pvVar57) goto LAB_003f8788;
        goto LAB_003f87c2;
      }
      uVar64 = *(uint *)(phVar140 + 0x5c);
    }
    phVar140[0xc0] = (hb_buffer_t)((byte)phVar140[0xc0] | 0x80);
    *(ushort *)(*(long *)(phVar140 + 0x70) + 0x10 + (ulong)uVar64 * 0x14) =
         *(ushort *)(*(long *)(phVar140 + 0x70) + 0x10 + (ulong)uVar64 * 0x14) & 0xe0 | 0x401;
    if (*(int *)(phVar140 + 0x2c) != -1) {
      puVar148 = (ushort *)
                 (*(long *)(phVar140 + 0x70) + 0x10 + (ulong)*(uint *)(phVar140 + 0x5c) * 0x14);
      *puVar148 = *puVar148 & 0xffdf;
    }
    lVar116 = *(long *)(phVar140 + 0x70);
    uVar33 = (ulong)*(uint *)(phVar140 + 0x5c);
    uVar30 = *(undefined4 *)(lVar116 + uVar33 * 0x14);
    *(undefined4 *)(lVar116 + 0xc + uVar33 * 0x14) = 0;
    lVar119 = *(long *)(*(long *)((long)puVar100 + 0x20) + 0x90);
    uVar111 = *(undefined8 *)(*(long *)((long)puVar100 + 0x20) + 0x98);
    lVar34 = *(long *)(lVar119 + 0x10);
    pcVar86 = *(code **)(lVar119 + 0x30);
    if (lVar34 == 0) {
      param_4 = (pthread_mutex_t *)0x0;
    }
    else {
      param_4 = *(long *)(lVar34 + 0x10);
    }
    uVar129 = lVar116 + uVar33 * 0x14 + 0xc;
    *(undefined8 *)((long)puVar100 + -8) = 0x3f8883;
    (*pcVar86)(*(undefined8 *)((long)puVar100 + 0x20),uVar111,uVar30);
    in_XMM1._8_8_ = extraout_XMM1_Qb_28;
    in_XMM1._0_8_ = extraout_XMM1_Qa_19;
    if (phVar140[0x5a] != (hb_buffer_t)0x0) {
      pvVar123 = *(void **)(phVar140 + 0x78);
      pvVar57 = *(void **)(phVar140 + 0x70);
      iVar31 = *(int *)(phVar140 + 100);
      if ((pvVar123 != pvVar57) || (iVar31 != *(int *)(phVar140 + 0x5c))) {
        uVar64 = iVar31 + 1;
        if ((uVar64 == 0) || (uVar64 < *(uint *)(phVar140 + 0x68))) {
          if (pvVar123 == pvVar57) {
LAB_003f88b4:
            uVar64 = *(uint *)(phVar140 + 100);
            if (*(int *)(phVar140 + 0x5c) + 1U < uVar64 + 1) {
              pvVar123 = *(void **)(phVar140 + 0x80);
              *(void **)(phVar140 + 0x78) = pvVar123;
              if ((ulong)uVar64 != 0) {
                *(undefined8 *)((long)puVar100 + -8) = 0x3f88e1;
                memcpy(pvVar123,pvVar57,(ulong)uVar64 * 0x14);
                pvVar57 = *(void **)(phVar140 + 0x70);
                pvVar123 = *(void **)(phVar140 + 0x78);
              }
            }
            else {
              pvVar123 = pvVar57;
            }
          }
        }
        else {
          *(undefined8 *)((long)puVar100 + -8) = 0x3f8ad3;
          uVar111 = hb_buffer_t::enlarge(phVar140,uVar64);
          uVar64 = *(uint *)((long)puVar100 + 0x40);
          if ((char)uVar111 == '\0') goto LAB_003f8920;
          pvVar57 = *(void **)(phVar140 + 0x70);
          pvVar123 = *(void **)(phVar140 + 0x78);
          if (pvVar123 == pvVar57) goto LAB_003f88b4;
        }
        uVar64 = *(uint *)(phVar140 + 0x5c);
        uVar33 = (ulong)*(uint *)(phVar140 + 100);
        uVar129 = uVar33 * 5;
        *(undefined4 *)((long)pvVar123 + uVar33 * 0x14 + 0x10) =
             *(undefined4 *)((long)pvVar57 + (ulong)uVar64 * 0x14 + 0x10);
        puVar131 = (undefined8 *)((long)pvVar57 + (ulong)uVar64 * 0x14);
        uVar111 = puVar131[1];
        puVar84 = (undefined8 *)((long)pvVar123 + uVar33 * 0x14);
        *puVar84 = *puVar131;
        puVar84[1] = uVar111;
        iVar31 = *(int *)(phVar140 + 100);
      }
      *(int *)(phVar140 + 100) = iVar31 + 1;
    }
    *(int *)(phVar140 + 0x5c) = *(int *)(phVar140 + 0x5c) + 1;
    uVar64 = *(uint *)((long)puVar100 + 0x40);
LAB_003f8920:
    uVar122 = *(uint *)(phVar140 + 0x5c);
    lVar116 = *(long *)((long)puVar100 + 0x20);
    param_5 = (uint *)param_4;
joined_r0x003f892a:
    param_4 = uVar129;
    uVar152 = (ulong)uVar122;
    if (uVar122 < uVar90) {
      do {
        if (phVar140[0x58] == (hb_buffer_t)0x0) break;
        lVar119 = *(long *)(phVar140 + 0x70);
        uVar122 = *(uint *)(lVar119 + uVar152 * 0x14);
        if (((uVar122 & 0xfffffff0) != 0xfe00) &&
           (param_4._0_4_ = uVar122 - 0xe01f0, param_4._4_4_ = 0, (uint)param_4 < 0xffffff10))
        break;
        *(undefined4 *)(lVar119 + 0xc + uVar152 * 0x14) = 0;
        lVar34 = *(long *)(*(long *)(lVar116 + 0x90) + 0x10);
        if (lVar34 == 0) {
          param_5 = (uint *)0x0;
        }
        else {
          param_5 = *(uint **)(lVar34 + 0x10);
        }
        param_4 = lVar119 + uVar152 * 0x14 + 0xc;
        pcVar86 = *(code **)(*(long *)(lVar116 + 0x90) + 0x30);
        *(undefined8 *)((long)puVar100 + -8) = 0x3f89e0;
        (*pcVar86)();
        in_XMM1._8_8_ = extraout_XMM1_Qb_29;
        in_XMM1._0_8_ = extraout_XMM1_Qa_20;
        if (phVar140[0x5a] != (hb_buffer_t)0x0) {
          pvVar123 = *(void **)(phVar140 + 0x78);
          pvVar57 = *(void **)(phVar140 + 0x70);
          iVar31 = *(int *)(phVar140 + 100);
          if ((pvVar123 != pvVar57) || (iVar31 != *(int *)(phVar140 + 0x5c))) {
            uVar122 = iVar31 + 1;
            if ((uVar122 == 0) || (uVar122 < *(uint *)(phVar140 + 0x68))) {
              if (pvVar123 == pvVar57) goto LAB_003f8a15;
            }
            else {
              *(undefined8 *)((long)puVar100 + -8) = 0x3f8a62;
              uVar129 = hb_buffer_t::enlarge(phVar140,uVar122);
              if ((char)uVar129 == '\0') goto LAB_003f8a7e;
              pvVar57 = *(void **)(phVar140 + 0x70);
              pvVar123 = *(void **)(phVar140 + 0x78);
              uVar64 = *(uint *)((long)puVar100 + 0x40);
              if (pvVar123 == pvVar57) {
LAB_003f8a15:
                uVar122 = *(uint *)(phVar140 + 100);
                if (*(int *)(phVar140 + 0x5c) + 1U < uVar122 + 1) {
                  pvVar123 = *(void **)(phVar140 + 0x80);
                  *(void **)(phVar140 + 0x78) = pvVar123;
                  if ((ulong)uVar122 != 0) {
                    *(undefined8 *)((long)puVar100 + -8) = 0x3f8a46;
                    memcpy(pvVar123,pvVar57,(ulong)uVar122 * 0x14);
                    pvVar57 = *(void **)(phVar140 + 0x70);
                    pvVar123 = *(void **)(phVar140 + 0x78);
                  }
                  uVar64 = *(uint *)((long)puVar100 + 0x40);
                }
                else {
                  pvVar123 = pvVar57;
                }
              }
            }
            uVar122 = *(uint *)(phVar140 + 0x5c);
            uVar33 = (ulong)*(uint *)(phVar140 + 100);
            param_4 = uVar33 * 5;
            *(undefined4 *)((long)pvVar123 + uVar33 * 0x14 + 0x10) =
                 *(undefined4 *)((long)pvVar57 + (ulong)uVar122 * 0x14 + 0x10);
            puVar131 = (undefined8 *)((long)pvVar57 + (ulong)uVar122 * 0x14);
            uVar129 = puVar131[1];
            puVar84 = (undefined8 *)((long)pvVar123 + uVar33 * 0x14);
            *puVar84 = *puVar131;
            puVar84[1] = uVar129;
            iVar31 = *(int *)(phVar140 + 100);
          }
          *(int *)(phVar140 + 100) = iVar31 + 1;
        }
        uVar122 = *(int *)(phVar140 + 0x5c) + 1;
        uVar152 = (ulong)uVar122;
        *(uint *)(phVar140 + 0x5c) = uVar122;
        lVar116 = *(long *)((long)puVar100 + 0x20);
        if (uVar90 <= uVar122) break;
      } while( true );
    }
    goto LAB_003f8671;
  }
  if (*(long *)(lVar119 + 0x10) == 0) {
    param_5 = (uint *)0x0;
  }
  else {
    param_5 = *(uint **)(*(long *)(lVar119 + 0x10) + 0x10);
  }
  pcVar86 = *(code **)(lVar119 + 0x30);
  *(undefined8 *)((long)puVar100 + -8) = 0x3f85cf;
  (*pcVar86)();
  in_XMM1._8_8_ = extraout_XMM1_Qb_26;
  in_XMM1._0_8_ = extraout_XMM1_Qa_17;
  if (phVar140[0x5a] == (hb_buffer_t)0x0) {
LAB_003f8663:
    uVar122 = *(int *)(phVar140 + 0x5c) + 1;
    *(uint *)(phVar140 + 0x5c) = uVar122;
  }
  else {
    pvVar123 = *(void **)(phVar140 + 0x78);
    pvVar57 = *(void **)(phVar140 + 0x70);
    iVar31 = *(int *)(phVar140 + 100);
    if ((pvVar123 == pvVar57) && (iVar31 == *(int *)(phVar140 + 0x5c))) {
LAB_003f865d:
      *(int *)(phVar140 + 100) = iVar31 + 1;
      goto LAB_003f8663;
    }
    uVar122 = iVar31 + 1;
    if ((uVar122 == 0) || (uVar122 < *(uint *)(phVar140 + 0x68))) {
      if (pvVar123 == pvVar57) {
LAB_003f8600:
        uVar122 = *(uint *)(phVar140 + 100);
        if (*(int *)(phVar140 + 0x5c) + 1U < uVar122 + 1) {
          pvVar123 = *(void **)(phVar140 + 0x80);
          *(void **)(phVar140 + 0x78) = pvVar123;
          if ((ulong)uVar122 != 0) {
            *(undefined8 *)((long)puVar100 + -8) = 0x3f862d;
            memcpy(pvVar123,pvVar57,(ulong)uVar122 * 0x14);
            pvVar57 = *(void **)(phVar140 + 0x70);
            pvVar123 = *(void **)(phVar140 + 0x78);
          }
        }
        else {
          pvVar123 = pvVar57;
        }
      }
LAB_003f863a:
      uVar122 = *(uint *)(phVar140 + 0x5c);
      uVar33 = (ulong)*(uint *)(phVar140 + 100);
      param_4 = uVar33 * 5;
      *(undefined4 *)((long)pvVar123 + uVar33 * 0x14 + 0x10) =
           *(undefined4 *)((long)pvVar57 + (ulong)uVar122 * 0x14 + 0x10);
      puVar131 = (undefined8 *)((long)pvVar57 + (ulong)uVar122 * 0x14);
      uVar129 = puVar131[1];
      puVar84 = (undefined8 *)((long)pvVar123 + uVar33 * 0x14);
      *puVar84 = *puVar131;
      puVar84[1] = uVar129;
      iVar31 = *(int *)(phVar140 + 100);
      goto LAB_003f865d;
    }
    *(undefined8 *)((long)puVar100 + -8) = 0x3f871a;
    uVar129 = hb_buffer_t::enlarge(phVar140,uVar122);
    if ((char)uVar129 != '\0') {
      pvVar57 = *(void **)(phVar140 + 0x70);
      pvVar123 = *(void **)(phVar140 + 0x78);
      uVar64 = *(uint *)((long)puVar100 + 0x40);
      if (pvVar123 == pvVar57) goto LAB_003f8600;
      goto LAB_003f863a;
    }
    uVar122 = *(uint *)(phVar140 + 0x5c);
    uVar64 = *(uint *)((long)puVar100 + 0x40);
  }
  uVar152 = (ulong)uVar122;
  lVar116 = *(long *)((long)puVar100 + 0x20);
LAB_003f8671:
  if (((uint)phVar32 <= (uint)uVar152) || (phVar140[0x58] == (hb_buffer_t)0x0)) goto LAB_003f8afe;
  param_5 = *(uint **)(phVar140 + 0x70);
  goto LAB_003f8560;
LAB_003f8a7e:
  uVar122 = *(uint *)(phVar140 + 0x5c);
  uVar64 = *(uint *)((long)puVar100 + 0x40);
  lVar116 = *(long *)((long)puVar100 + 0x20);
  uVar129 = param_4;
  goto joined_r0x003f892a;
LAB_003f8afe:
  if (uVar90 <= (uint)uVar152) goto LAB_003f8410;
  lVar119 = *(long *)(phVar140 + 0x70);
  uVar30 = *(undefined4 *)(lVar119 + uVar152 * 0x14);
  *(undefined4 *)(lVar119 + 0xc + uVar152 * 0x14) = 0;
  lVar34 = *(long *)(*(long *)(lVar116 + 0x90) + 0x10);
  if (lVar34 == 0) {
    param_5 = (uint *)0x0;
  }
  else {
    param_5 = *(uint **)(lVar34 + 0x10);
  }
  param_4 = lVar119 + uVar152 * 0x14 + 0xc;
  uVar129 = *(undefined8 *)(lVar116 + 0x98);
  pcVar86 = *(code **)(*(long *)(lVar116 + 0x90) + 0x30);
  *(undefined8 *)((long)puVar100 + -8) = 0x3f8b46;
  uVar152 = (*pcVar86)(lVar116,uVar129,uVar30);
  in_XMM1._8_8_ = extraout_XMM1_Qb_30;
  in_XMM1._0_8_ = extraout_XMM1_Qa_21;
  if (phVar140[0x5a] != (hb_buffer_t)0x0) {
    pvVar123 = *(void **)(phVar140 + 0x78);
    pvVar57 = *(void **)(phVar140 + 0x70);
    iVar31 = *(int *)(phVar140 + 100);
    if ((pvVar123 != pvVar57) || (iVar31 != *(int *)(phVar140 + 0x5c))) {
      uVar90 = iVar31 + 1;
      if ((uVar90 == 0) || (uVar90 < *(uint *)(phVar140 + 0x68))) {
        if (pvVar123 == pvVar57) {
LAB_003f8b77:
          uVar90 = *(uint *)(phVar140 + 100);
          if (*(int *)(phVar140 + 0x5c) + 1U < uVar90 + 1) {
            pvVar123 = *(void **)(phVar140 + 0x80);
            *(void **)(phVar140 + 0x78) = pvVar123;
            if ((ulong)uVar90 != 0) {
              *(undefined8 *)((long)puVar100 + -8) = 0x3f8ba4;
              memcpy(pvVar123,pvVar57,(ulong)uVar90 * 0x14);
              pvVar57 = *(void **)(phVar140 + 0x70);
              pvVar123 = *(void **)(phVar140 + 0x78);
            }
          }
          else {
            pvVar123 = pvVar57;
          }
        }
      }
      else {
        *(undefined8 *)((long)puVar100 + -8) = 0x3f8c18;
        uVar152 = hb_buffer_t::enlarge(phVar140,uVar90);
        if ((char)uVar152 == '\0') goto LAB_003f8410;
        pvVar57 = *(void **)(phVar140 + 0x70);
        pvVar123 = *(void **)(phVar140 + 0x78);
        if (pvVar123 == pvVar57) goto LAB_003f8b77;
      }
      uVar90 = *(uint *)(phVar140 + 0x5c);
      uVar33 = (ulong)*(uint *)(phVar140 + 100);
      param_4 = uVar33 * 5;
      *(undefined4 *)((long)pvVar123 + uVar33 * 0x14 + 0x10) =
           *(undefined4 *)((long)pvVar57 + (ulong)uVar90 * 0x14 + 0x10);
      puVar131 = (undefined8 *)((long)pvVar57 + (ulong)uVar90 * 0x14);
      uVar129 = puVar131[1];
      puVar84 = (undefined8 *)((long)pvVar123 + uVar33 * 0x14);
      *puVar84 = *puVar131;
      puVar84[1] = uVar129;
      iVar31 = *(int *)(phVar140 + 100);
    }
    uVar152 = (ulong)(iVar31 + 1U);
    *(uint *)(phVar140 + 100) = iVar31 + 1U;
  }
  *(int *)(phVar140 + 0x5c) = *(int *)(phVar140 + 0x5c) + 1;
LAB_003f8410:
  this_01 = *(hb_buffer_t **)((long)puVar100 + 0x10);
  uVar33 = (ulong)*(uint *)(this_01 + 0x5c);
  phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x28);
  if (((uint)uVar88 <= *(uint *)(this_01 + 0x5c)) ||
     (uVar129 = CONCAT71((int7)(uVar152 >> 8),1), this_01[0x58] == (hb_buffer_t)0x0))
  goto LAB_003f8c66;
  goto LAB_003f8250;
LAB_003f8c66:
  *(undefined8 *)((long)puVar100 + -8) = 0x3f8c6e;
  hb_buffer_t::sync(this_01);
  uVar129 = extraout_XMM0_Qa_11;
LAB_003f8c6e:
  uVar111 = *(undefined8 *)((long)puVar100 + 8);
  *(undefined8 *)((long)puVar100 + -8) = 0x3f8c87;
  bVar153 = hb_buffer_t::message
                      (uVar129,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_
                       ,in_XMM6._0_8_,in_XMM7._0_8_,this_01,uVar111,"start reorder",param_4,param_5,
                       phVar140,*(undefined1 *)puVar100);
  uVar129 = extraout_XMM0_25._0_8_;
  if (bVar153) {
    uVar88._0_4_ = **(uint **)((long)puVar100 + 0x38);
    plVar125 = *(long **)((long)puVar100 + 0x28);
    if ((uint)uVar88 != 0) {
      lVar116 = *plVar125;
      ppVar117 = (pthread_mutex_t *)0x0;
      *(uint *)((long)puVar100 + 0x48) = (uint)uVar88;
      *(long *)((long)puVar100 + 0x78) = lVar116;
      auVar166 = extraout_XMM0_25;
      do {
        while( true ) {
          uVar129 = auVar166._0_8_;
          iVar31 = (int)ppVar117;
          uVar90 = *(uint *)(lVar116 + 0x10 + (long)ppVar117 * 0x14);
          if (((0x1c00U >> (uVar90 & 0x1f) & 1) != 0) && (0xff < (uVar90 & 0xffff))) break;
          ppVar114 = ppVar117;
LAB_003f8cc3:
          uVar111 = *(undefined8 *)((long)puVar100 + 8);
          uVar90 = (int)ppVar114 + 1;
          ppVar117 = (pthread_mutex_t *)(ulong)uVar90;
          if ((uint)uVar88 <= uVar90) goto LAB_003f8ee7;
        }
        phVar32._0_4_ = iVar31 + 1;
        uVar90 = (uint)phVar32;
        if ((uint)phVar32 < (uint)uVar88) {
          uVar90 = (uint)uVar88;
        }
        ppVar114 = ppVar117;
        do {
          uVar64 = (int)ppVar114 + 1;
          ppVar114 = (pthread_mutex_t *)(ulong)uVar64;
          if ((uint)uVar88 <= uVar64) {
            ppVar114 = (pthread_mutex_t *)(ulong)uVar90;
            uVar122 = uVar90 - iVar31;
            uVar64 = uVar90;
            goto joined_r0x003f8d3a;
          }
          uVar122 = *(uint *)(lVar116 + 0x10 + (ulong)uVar64 * 0x14);
        } while (((0x1c00U >> (uVar122 & 0x1f) & 1) != 0) && (0xff < (uVar122 & 0xffff)));
        uVar122 = uVar64 - iVar31;
joined_r0x003f8d3a:
        param_4._4_4_ = 0;
        param_4._0_4_ = uVar122;
        if (0x20 < uVar122) goto LAB_003f8cc3;
        ppVar114 = ppVar117;
        if ((uint)phVar32 < uVar64) {
          ppVar82 = (pthread_mutex_t *)(ulong)(uint)phVar32;
          uVar88._0_4_ = iVar31 + 2;
          *(int *)((long)puVar100 + 0x18) = iVar31;
          *(__pthread_mutex_s **)((long)puVar100 + 0x50) = &ppVar117->__data;
          do {
            iVar31 = *(int *)((long)puVar100 + 0x18);
            *(uint *)((long)puVar100 + 0x18) = (uint)ppVar82;
            ppVar126 = ppVar82;
            if ((uint)ppVar114 < (uint)ppVar82) {
              ppVar126 = ppVar114;
            }
            param_5 = (uint *)((ulong)ppVar126 & 0xffffffff);
            ppVar126 = ppVar82;
            uVar90 = (uint)uVar88;
            do {
              uVar98 = param_5;
              if (ppVar126 <= ppVar117) goto joined_r0x003f8e68;
              ppVar126 = (pthread_mutex_t *)((long)ppVar126 + -1);
              uVar29 = *(ushort *)(*plVar125 + 0x10 + ((ulong)ppVar126 & 0xffffffff) * 0x14);
              uVar79 = uVar29 >> 8;
              if ((0x1c00U >> (uVar29 & 0x1f) & 1) == 0) {
                uVar79 = 0;
              }
              uVar29 = *(ushort *)(*plVar125 + 0x10 + (long)ppVar82 * 0x14);
              param_4._2_6_ = 0;
              param_4._0_2_ = uVar29;
              uVar128 = uVar29 >> 8;
              if ((0x1c00U >> (uVar29 & 0x1f) & 1) == 0) {
                uVar128 = 0;
              }
              uVar90 = uVar90 - 1;
            } while (uVar128 < uVar79);
            uVar98._4_4_ = 0;
            uVar98._0_4_ = uVar90;
joined_r0x003f8e68:
            if (ppVar82 != (pthread_mutex_t *)uVar98) {
              *(uint *)((long)puVar100 + 0x20) = (uint)uVar88;
              uVar88._0_4_ = (uint)uVar98;
              if (1 < (iVar31 + 2U) - (uint)uVar88) {
                *(undefined8 *)((long)puVar100 + -8) = 0x3f8e8f;
                hb_buffer_t::merge_clusters_impl
                          (*(hb_buffer_t **)((long)puVar100 + 0x10),(uint)uVar88,iVar31 + 2U);
                in_XMM1._8_8_ = extraout_XMM1_Qb_31;
                in_XMM1._0_8_ = extraout_XMM1_Qa_22;
                plVar125 = *(long **)((long)puVar100 + 0x28);
              }
              lVar116 = *plVar125;
              *(undefined4 *)((long)puVar100 + 0x250) =
                   *(undefined4 *)(lVar116 + 0x10 + (long)ppVar82 * 0x14);
              puVar131 = (undefined8 *)(lVar116 + (long)ppVar82 * 0x14);
              uVar129 = puVar131[1];
              *(undefined8 *)((long)puVar100 + 0x240) = *puVar131;
              *(undefined8 *)((long)puVar100 + 0x248) = uVar129;
              *(long *)((long)puVar100 + 0x58) = uVar98 * 0x14;
              *(undefined8 *)((long)puVar100 + -8) = 0x3f8daf;
              memmove((void *)(lVar116 + (ulong)((uint)uVar88 + 1) * 0x14),
                      (void *)(lVar116 + uVar98 * 0x14),
                      (ulong)(*(int *)((long)puVar100 + 0x18) - (uint)uVar88) * 0x14);
              plVar125 = *(long **)((long)puVar100 + 0x28);
              lVar116 = *plVar125;
              auVar166 = *(undefined1 (*) [16])((long)puVar100 + 0x240);
              lVar119 = *(long *)((long)puVar100 + 0x58);
              *(undefined1 (*) [16])(lVar116 + lVar119) = auVar166;
              param_4._4_4_ = 0;
              param_4._0_4_ = *(uint *)((long)puVar100 + 0x250);
              *(uint *)(lVar116 + 0x10 + lVar119) = *(uint *)((long)puVar100 + 0x250);
              ppVar114 = *(pthread_mutex_t **)((long)puVar100 + 0x50);
              uVar88._0_4_ = *(uint *)((long)puVar100 + 0x20);
            }
            ppVar82 = (pthread_mutex_t *)((long)&(ppVar82->__data).__lock + 1);
            uVar88._0_4_ = (uint)uVar88 + 1;
          } while ((uint)ppVar82 < uVar64);
        }
        pcVar86 = *(code **)(*(long *)(*(long *)((long)puVar100 + 0x30) + 0x80) + 0x48);
        uVar111 = *(undefined8 *)((long)puVar100 + 8);
        if (pcVar86 != (code *)0x0) {
          param_4._4_4_ = 0;
          param_4._0_4_ = uVar64;
          *(undefined8 *)((long)puVar100 + -8) = 0x3f8ecb;
          auVar279 = (*pcVar86)(*(undefined8 *)((long)puVar100 + 0x60),
                                *(undefined8 *)((long)puVar100 + 0x10),(ulong)ppVar114 & 0xffffffff)
          ;
          in_XMM1._0_8_ = auVar279._8_8_;
          auVar166._0_8_ = auVar279._0_8_;
          in_XMM1._8_8_ = extraout_XMM1_Qb_32;
          auVar166._8_8_ = extraout_XMM0_Qb_16;
          plVar125 = *(long **)((long)puVar100 + 0x28);
        }
        uVar129 = auVar166._0_8_;
        uVar88._0_4_ = *(uint *)((long)puVar100 + 0x48);
        lVar116 = *(long *)((long)puVar100 + 0x78);
        ppVar117 = (pthread_mutex_t *)(ulong)(uVar64 + 1);
      } while (uVar64 + 1 < (uint)uVar88);
    }
LAB_003f8ee7:
    this_01 = *(hb_buffer_t **)((long)puVar100 + 0x10);
    *(undefined8 *)((long)puVar100 + -8) = 0x3f8f00;
    hb_buffer_t::message
              (uVar129,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
               in_XMM6._0_8_,in_XMM7._0_8_,this_01,uVar111,"end reorder",param_4,param_5,plVar125,
               *(undefined1 *)puVar100);
    phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x28);
    uVar64 = *(uint *)((long)puVar100 + 0x40);
    hVar7 = this_01[0xc0];
    auVar279 = extraout_XMM0_26;
  }
  else {
    phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x28);
    hVar7 = this_01[0xc0];
    auVar279 = extraout_XMM0_25;
  }
  bVar153 = true;
joined_r0x003f8f2a:
  if (((byte)hVar7 & 0x10) != 0) {
    uVar88._0_4_ = **(uint **)((long)puVar100 + 0x38);
    param_4._4_4_ = 0;
    param_4._0_4_ = (uint)uVar88;
    if (2 < (uint)uVar88) {
      lVar116 = *(long *)phVar140;
      param_4 = (ulong)((uint)uVar88 - 1) * 0x14 + -0x14;
      lVar119 = 0;
      do {
        if (*(int *)(lVar119 + 0x14 + lVar116) == 0x34f) {
          uVar29 = *(ushort *)(lVar119 + 0x38 + lVar116);
          if (((0x1c00U >> (uVar29 & 0x1f) & 1) != 0) && (0xff < uVar29)) {
            uVar79 = *(ushort *)(lVar119 + 0x10 + lVar116);
            uVar128 = uVar79 >> 8;
            if ((0x1c00U >> (uVar79 & 0x1f) & 1) == 0) {
              uVar128 = 0;
            }
            if (uVar29 >> 8 < uVar128) goto LAB_003f8f65;
          }
          pbVar136 = (byte *)(lVar119 + lVar116 + 0x24);
          *pbVar136 = *pbVar136 & 0xbf;
        }
LAB_003f8f65:
        lVar119 = lVar119 + 0x14;
      } while (param_4 != lVar119);
    }
  }
  if (((bVar153) && (this_01[0x58] != (hb_buffer_t)0x0)) && ((uVar64 & 0xfffffffe) == 2)) {
    *(undefined2 *)(this_01 + 0x5a) = 1;
    lVar116 = *(long *)(this_01 + 0x70);
    *(long *)(this_01 + 0x78) = lVar116;
    uVar88._0_4_ = *(uint *)(this_01 + 0x60);
    *(undefined4 *)(this_01 + 100) = 1;
    *(undefined4 *)(this_01 + 0x5c) = 1;
    if (1 < (uint)uVar88) {
      param_4 = (pthread_mutex_t *)0x1;
      uVar90 = 0;
      do {
        uVar29 = *(ushort *)(lVar116 + 0x10 + param_4 * 0x14);
        if ((0x1c00U >> (uVar29 & 0x1f) & 1) == 0) {
LAB_003f91e0:
          lVar116 = *(long *)((long)puVar100 + 0x10);
          if (*(char *)(lVar116 + 0x5a) == '\0') {
            iVar31 = *(int *)(lVar116 + 100);
          }
          else {
            pvVar123 = *(void **)(lVar116 + 0x78);
            pvVar57 = *(void **)(lVar116 + 0x70);
            iVar31 = *(int *)(lVar116 + 100);
            if ((pvVar123 != pvVar57) || (iVar31 != *(int *)(lVar116 + 0x5c))) {
              phVar32._0_4_ = iVar31 + 1;
              if (((uint)phVar32 == 0) ||
                 (param_4 = *(long *)((long)puVar100 + 0x10),
                 (uint)phVar32 < *(uint *)(param_4 + 0x68))) {
                if (pvVar123 == pvVar57) goto LAB_003f9223;
              }
              else {
                phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x10);
                *(undefined8 *)((long)puVar100 + -8) = 0x3f930f;
                uVar129 = hb_buffer_t::enlarge(phVar140,(uint)phVar32);
                if ((char)uVar129 == '\0') break;
                pvVar57 = *(void **)(phVar140 + 0x70);
                pvVar123 = *(void **)(phVar140 + 0x78);
                phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x28);
                if (pvVar123 == pvVar57) {
LAB_003f9223:
                  lVar116 = *(long *)((long)puVar100 + 0x10);
                  phVar32._0_4_ = *(uint *)(lVar116 + 100);
                  if (*(int *)(lVar116 + 0x5c) + 1U < (uint)phVar32 + 1) {
                    pvVar123 = *(void **)(lVar116 + 0x80);
                    *(void **)(lVar116 + 0x78) = pvVar123;
                    if ((ulong)(uint)phVar32 != 0) {
                      *(undefined8 *)((long)puVar100 + -8) = 0x3f925d;
                      memcpy(pvVar123,pvVar57,(ulong)(uint)phVar32 * 0x14);
                      phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x28);
                      pvVar57 = *(void **)(lVar116 + 0x70);
                      pvVar123 = *(void **)(lVar116 + 0x78);
                    }
                  }
                  else {
                    pvVar123 = pvVar57;
                  }
                }
              }
              lVar116 = *(long *)((long)puVar100 + 0x10);
              phVar32._0_4_ = *(uint *)(lVar116 + 0x5c);
              uVar64 = *(uint *)(lVar116 + 100);
              *(undefined4 *)((long)pvVar123 + (ulong)uVar64 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar57 + (ulong)(uint)phVar32 * 0x14 + 0x10);
              puVar131 = (undefined8 *)((long)pvVar57 + (ulong)(uint)phVar32 * 0x14);
              uVar129 = puVar131[1];
              puVar84 = (undefined8 *)((long)pvVar123 + (ulong)uVar64 * 0x14);
              *puVar84 = *puVar131;
              puVar84[1] = uVar129;
              iVar31 = *(int *)(lVar116 + 100);
            }
            iVar31 = iVar31 + 1;
            *(int *)(lVar116 + 100) = iVar31;
          }
          phVar32._0_4_ = *(int *)(lVar116 + 0x5c) + 1;
          *(uint *)(lVar116 + 0x5c) = (uint)phVar32;
          uVar64 = iVar31 - 1;
          uVar33 = (ulong)uVar64;
          if (iVar31 == 0) {
            uVar33 = 0;
          }
          uVar122 = (uint)*(ushort *)(*(long *)(lVar116 + 0x78) + 0x10 + uVar33 * 0x14);
          if (uVar122 < 0x100) {
            uVar90 = uVar64;
          }
          if ((0x1c00U >> (uVar122 & 0x1f) & 1) == 0) {
            uVar90 = uVar64;
          }
        }
        else {
          iVar31 = *(int *)(*(long *)((long)puVar100 + 0x10) + 100);
          phVar32._0_4_ = iVar31 - 1;
          lVar119 = *(long *)(*(long *)((long)puVar100 + 0x10) + 0x78);
          if (uVar90 != (uint)phVar32) {
            if (iVar31 == 0) {
              phVar32._0_4_ = 0;
            }
            uVar79 = *(ushort *)(lVar119 + 0x10 + (ulong)(uint)phVar32 * 0x14);
            uVar128 = uVar79 >> 8;
            if ((0x1c00U >> (uVar79 & 0x1f) & 1) == 0) {
              uVar128 = 0;
            }
            if (uVar29 >> 8 <= uVar128) goto LAB_003f91e0;
          }
          uVar30 = *(undefined4 *)(lVar119 + (ulong)uVar90 * 0x14);
          uVar109 = *(undefined4 *)(lVar116 + param_4 * 0x14);
          *(undefined8 *)((long)puVar100 + -8) = 0x3f90eb;
          cVar27 = (**(code **)((long)puVar100 + 0xf8))
                             ((undefined1 *)((long)puVar100 + 0xd0),uVar30,uVar109,
                              (undefined1 *)((long)puVar100 + 0x240));
          in_XMM1._8_8_ = extraout_XMM1_Qb_33;
          in_XMM1._0_8_ = extraout_XMM1_Qa_23;
          phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x28);
          if (cVar27 == '\0') goto LAB_003f91e0;
          *(undefined4 *)((long)puVar100 + 0x90) = 0;
          lVar116 = *(long *)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x10);
          if (lVar116 == 0) {
            uVar129 = 0;
          }
          else {
            uVar129 = *(undefined8 *)(lVar116 + 0x10);
          }
          uVar111 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
          param_4 = (long)puVar100 + 0x90;
          pcVar86 = *(code **)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x30);
          *(undefined8 *)((long)puVar100 + -8) = 0x3f913f;
          iVar31 = (*pcVar86)(*(long *)((long)puVar100 + 8),uVar111,
                              *(undefined4 *)((long)puVar100 + 0x240),param_4,uVar129);
          in_XMM1._8_8_ = extraout_XMM1_Qb_34;
          in_XMM1._0_8_ = extraout_XMM1_Qa_24;
          phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x28);
          if (iVar31 == 0) goto LAB_003f91e0;
          phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x10);
          if (phVar140[0x5a] == (hb_buffer_t)0x0) {
            phVar32._0_4_ = *(uint *)(phVar140 + 100);
          }
          else {
            pvVar123 = *(void **)(phVar140 + 0x78);
            pvVar57 = *(void **)(phVar140 + 0x70);
            iVar31 = *(int *)(phVar140 + 100);
            if ((pvVar123 != pvVar57) || (iVar31 != *(int *)(phVar140 + 0x5c))) {
              phVar32._0_4_ = iVar31 + 1;
              if (((uint)phVar32 == 0) ||
                 ((uint)phVar32 < *(uint *)(*(long *)((long)puVar100 + 0x10) + 0x68))) {
                if (pvVar123 == pvVar57) goto LAB_003f918f;
              }
              else {
                phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x10);
                *(undefined8 *)((long)puVar100 + -8) = 0x3f933d;
                uVar129 = hb_buffer_t::enlarge(phVar140,(uint)phVar32);
                if ((char)uVar129 == '\0') break;
                pvVar57 = *(void **)(phVar140 + 0x70);
                pvVar123 = *(void **)(phVar140 + 0x78);
                if (pvVar123 == pvVar57) {
LAB_003f918f:
                  lVar116 = *(long *)((long)puVar100 + 0x10);
                  phVar32._0_4_ = *(uint *)(lVar116 + 100);
                  if (*(int *)(lVar116 + 0x5c) + 1U < (uint)phVar32 + 1) {
                    pvVar123 = *(void **)(lVar116 + 0x80);
                    *(void **)(lVar116 + 0x78) = pvVar123;
                    if ((ulong)(uint)phVar32 != 0) {
                      *(undefined8 *)((long)puVar100 + -8) = 0x3f91c9;
                      memcpy(pvVar123,pvVar57,(ulong)(uint)phVar32 * 0x14);
                      pvVar57 = *(void **)(lVar116 + 0x70);
                      pvVar123 = *(void **)(lVar116 + 0x78);
                    }
                  }
                  else {
                    pvVar123 = pvVar57;
                  }
                }
              }
              phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x10);
              phVar32._0_4_ = *(uint *)(phVar140 + 0x5c);
              uVar64 = *(uint *)(phVar140 + 100);
              *(undefined4 *)((long)pvVar123 + (ulong)uVar64 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar57 + (ulong)(uint)phVar32 * 0x14 + 0x10);
              puVar131 = (undefined8 *)((long)pvVar57 + (ulong)(uint)phVar32 * 0x14);
              uVar129 = puVar131[1];
              puVar84 = (undefined8 *)((long)pvVar123 + (ulong)uVar64 * 0x14);
              *puVar84 = *puVar131;
              puVar84[1] = uVar129;
              iVar31 = *(int *)(phVar140 + 100);
            }
            phVar32._0_4_ = iVar31 + 1;
            *(uint *)(phVar140 + 100) = (uint)phVar32;
          }
          *(int *)(phVar140 + 0x5c) = *(int *)(phVar140 + 0x5c) + 1;
          *(undefined8 *)((long)puVar100 + -8) = 0x3f92bc;
          hb_buffer_t::merge_out_clusters(phVar140,uVar90,(uint)phVar32);
          *(int *)(phVar140 + 100) = *(int *)(phVar140 + 100) + -1;
          lVar116 = *(long *)(phVar140 + 0x78);
          lVar119 = (ulong)uVar90 * 0x14;
          *(undefined4 *)(lVar116 + lVar119) = *(undefined4 *)((long)puVar100 + 0x240);
          *(undefined4 *)(lVar116 + 0xc + lVar119) = *(undefined4 *)((long)puVar100 + 0x90);
          lVar116 = *(long *)(phVar140 + 0x78);
          *(undefined8 *)((long)puVar100 + -8) = 0x3f92ed;
          _hb_glyph_info_set_unicode_props((uint *)(lVar119 + lVar116),(long)phVar140);
          in_XMM1._8_8_ = extraout_XMM1_Qb_35;
          in_XMM1._0_8_ = extraout_XMM1_Qa_25;
          phVar32._0_4_ = *(uint *)(phVar140 + 0x5c);
          phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x28);
        }
        param_4._4_4_ = 0;
        param_4._0_4_ = (uint)phVar32;
        if ((uint)uVar88 <= (uint)phVar32) break;
        lVar116 = *(long *)phVar140;
      } while( true );
    }
    this_01 = *(hb_buffer_t **)((long)puVar100 + 0x10);
    *(undefined8 *)((long)puVar100 + -8) = 0x3f9364;
    hb_buffer_t::sync(this_01);
    phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x28);
    auVar279 = extraout_XMM0_27;
  }
  goto LAB_003f9369;
LAB_003fc117:
  *(undefined8 *)((long)puVar100 + -8) = 0x3fc12b;
  bVar153 = hb_buffer_t::message
                      (uVar129,auVar184._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                       in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)puVar147,puVar144,
                       "start fallback kern",param_4,param_5,param_6,*(undefined1 *)puVar100);
  if (bVar153) {
    uVar88._0_4_ = *(uint *)((long)puVar147 + 0x38) & 0xfffffffd;
    *(uint *)((long)puVar100 + 0x230) = (uint)uVar88;
    plVar125 = *(long **)((long)puVar100 + 0x48);
    lVar116 = extraout_XMM0_Qa_32;
    if ((uint)uVar88 == 5) {
      uVar88._0_4_ = **(uint **)((long)puVar100 + 0x38);
      param_4 = *(long *)((long)puVar100 + 0x28);
      if (1 < (uint)uVar88) {
        param_4 = *(undefined8 *)param_4;
        uVar33 = (ulong)((uint)uVar88 - 1);
        phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   *)(param_4 + uVar33 * 0x14);
        uVar152 = 0;
        do {
          uVar33 = uVar33 - 1;
          *(undefined4 *)((long)puVar100 + 0xe0) = *(undefined4 *)(phVar32 + 0x10);
          uVar129 = *(undefined8 *)(phVar32 + 8);
          *(undefined8 *)((long)puVar100 + 0xd0) = *(undefined8 *)phVar32;
          *(undefined8 *)((long)puVar100 + 0xd8) = uVar129;
          *(undefined4 *)(phVar32 + 0x10) = *(undefined4 *)(param_4 + 0x10);
          uVar129 = *(undefined8 *)(param_4 + 8);
          *(long *)phVar32 = *(long *)param_4;
          *(undefined8 *)(phVar32 + 8) = uVar129;
          *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)((long)puVar100 + 0xe0);
          lVar116 = *(long *)((long)puVar100 + 0xd0);
          uVar129 = *(undefined8 *)((long)puVar100 + 0xd8);
          *(long *)param_4 = lVar116;
          *(undefined8 *)(param_4 + 8) = uVar129;
          uVar152 = uVar152 + 1;
          param_4 = param_4 + 0x14;
          phVar32 = phVar32 + -0x14;
        } while (uVar152 < (uVar33 & 0xffffffff));
      }
      if (*(char *)((long)puVar147 + 0x5b) != '\0') {
        uVar90 = **(uint **)((long)puVar100 + 0x38);
        param_4._4_4_ = 0;
        param_4._0_4_ = uVar90;
        if (uVar90 < (uint)uVar88) {
          uVar88._0_4_ = uVar90;
        }
        if (1 < (uint)uVar88) {
          param_4 = *plVar125;
          uVar33 = (ulong)((uint)uVar88 - 1);
          phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)(param_4 + uVar33 * 0x14);
          uVar152 = 0;
          do {
            uVar33 = uVar33 - 1;
            *(undefined4 *)((long)puVar100 + 0xe0) = *(undefined4 *)(phVar32 + 0x10);
            uVar129 = *(undefined8 *)(phVar32 + 8);
            *(undefined8 *)((long)puVar100 + 0xd0) = *(undefined8 *)phVar32;
            *(undefined8 *)((long)puVar100 + 0xd8) = uVar129;
            *(undefined4 *)(phVar32 + 0x10) = *(undefined4 *)(param_4 + 0x10);
            uVar129 = *(undefined8 *)(param_4 + 8);
            *(long *)phVar32 = *(long *)param_4;
            *(undefined8 *)(phVar32 + 8) = uVar129;
            *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)((long)puVar100 + 0xe0);
            lVar116 = *(long *)((long)puVar100 + 0xd0);
            uVar129 = *(undefined8 *)((long)puVar100 + 0xd8);
            *(long *)param_4 = lVar116;
            *(undefined8 *)(param_4 + 8) = uVar129;
            uVar152 = uVar152 + 1;
            param_4 = param_4 + 0x14;
            phVar32 = phVar32 + -0x14;
          } while (uVar152 < (uVar33 & 0xffffffff));
        }
      }
    }
    *(undefined4 *)((long)puVar100 + 0x22c) = *(undefined4 *)((long)puVar147 + 0x38);
    *(undefined4 *)((long)puVar100 + 0x18) = *(undefined4 *)(lVar119 + 0x100);
    *(undefined8 *)((long)puVar100 + -8) = 0x3fc279;
    bVar153 = hb_buffer_t::message
                        (lVar116,auVar184._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                         in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)puVar147,puVar144,
                         "start kern",param_4,param_5,param_6,*(undefined1 *)puVar100);
    auVar278._8_8_ = auVar184._0_8_;
    auVar278._0_8_ = extraout_XMM0_Qa_33;
    if (bVar153) {
      if ((*(byte *)((long)puVar147 + 0x18) & 0x40) != 0) {
        uVar88._0_4_ = *(uint *)((long)puVar147 + 0x60);
        *(byte *)((long)puVar147 + 0xc0) = *(byte *)((long)puVar147 + 0xc0) | 0x20;
        if ((ulong)(uint)uVar88 != 0) {
          lVar116 = **(long **)((long)puVar100 + 0x28);
          if ((ulong)(uint)uVar88 - 1 < 3) {
            uVar33 = 0;
          }
          else {
            pbVar136 = (byte *)(lVar116 + 0x40);
            uVar33 = 0;
            do {
              pbVar136[-0x3c] = pbVar136[-0x3c] | 2;
              pbVar136[-0x28] = pbVar136[-0x28] | 2;
              pbVar136[-0x14] = pbVar136[-0x14] | 2;
              *pbVar136 = *pbVar136 | 2;
              uVar33 = uVar33 + 4;
              pbVar136 = pbVar136 + 0x50;
            } while (((uint)uVar88 & 0xfffffffc) != uVar33);
          }
          puVar147 = *(uint **)((long)puVar100 + 0x10);
          puVar144 = *(uint **)((long)puVar100 + 8);
          lVar119 = *(long *)((long)puVar100 + 0x30);
          if ((ulong)((uint)uVar88 & 3) != 0) {
            lVar34 = 0;
            do {
              pbVar136 = (byte *)(lVar116 + uVar33 * 0x14 + 4 + lVar34);
              *pbVar136 = *pbVar136 | 2;
              lVar34 = lVar34 + 0x14;
            } while ((ulong)((uint)uVar88 & 3) * 0x14 != lVar34);
          }
        }
      }
      param_5 = &_hb_NullPool;
      phVar3 = (hb_ot_apply_context_t *)((long)puVar100 + 0xd0);
      *(undefined8 *)((long)puVar100 + -8) = 0x3fc2ae;
      OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                (phVar3,1,(long)puVar144,puVar147,
                 (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
      *(undefined4 *)((long)puVar100 + 0x1fc) = *(undefined4 *)((long)puVar100 + 0x18);
      *(undefined8 *)((long)puVar100 + 0x218) = 0xffffffff;
      uVar26 = *(undefined1 *)((long)puVar100 + 0x20f);
      if (*(int *)((long)puVar100 + 0x158) != 0) {
        uVar26 = 0;
      }
      bVar153 = *(int *)((long)puVar100 + 0x158) == 1;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = extraout_XMM1_Qa_33;
      auVar277 = auVar19 << 0x40;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = extraout_XMM1_Qa_33;
      *(undefined1 (*) [16])((long)puVar100 + 0x138) = (undefined1  [16])0x0;
      *(undefined8 *)((long)puVar100 + 0x148) = 0;
      *(undefined1 *)((long)puVar100 + 0x131) = 1;
      *(bool *)((long)puVar100 + 0x132) = bVar153;
      *(undefined4 *)((long)puVar100 + 0x204) = 8;
      *(hb_ot_apply_context_t **)((long)puVar100 + 0xe0) = phVar3;
      uVar88._0_4_ = *(uint *)(*(long *)((long)puVar100 + 0x170) + 0x60);
      param_4._4_4_ = 0;
      param_4._0_1_ = (char)(uint)uVar88;
      param_4._1_1_ = (char)((uint)uVar88 >> 8);
      param_4._2_1_ = (char)((uint)uVar88 >> 0x10);
      param_4._3_1_ = (char)((uint)uVar88 >> 0x18);
      *(uint *)((long)puVar100 + 0x110) = (uint)uVar88;
      *(undefined1 (*) [16])((long)puVar100 + 0xf8) = (undefined1  [16])0x0;
      *(undefined8 *)((long)puVar100 + 0x108) = 0;
      *(undefined4 *)((long)puVar100 + 0xe8) = 8;
      *(bool *)((long)puVar100 + 0xf0) = bVar153;
      *(undefined1 *)((long)puVar100 + 0xf1) = *(undefined1 *)((long)puVar100 + 0x20e);
      *(bool *)((long)puVar100 + 0xf2) = bVar153;
      *(bool *)((long)puVar100 + 0x132) = bVar153;
      *(undefined4 *)((long)puVar100 + 0xec) = *(undefined4 *)((long)puVar100 + 0x18);
      *(undefined1 *)((long)puVar100 + 0xf3) = uVar26;
      *(undefined1 *)((long)puVar100 + 0xf4) = 0;
      *(hb_ot_apply_context_t **)((long)puVar100 + 0x120) = phVar3;
      *(uint *)((long)puVar100 + 0x150) = (uint)uVar88;
      *(undefined1 (*) [16])((long)puVar100 + 0x138) = (undefined1  [16])0x0;
      *(undefined8 *)((long)puVar100 + 0x148) = 0;
      *(undefined4 *)((long)puVar100 + 0x128) = 8;
      *(bool *)((long)puVar100 + 0x130) = bVar153 || *(char *)((long)puVar100 + 0x20d) != '\0';
      *(undefined1 *)((long)puVar100 + 0x131) = 1;
      *(undefined4 *)((long)puVar100 + 300) = 0xffffffff;
      *(undefined1 *)((long)puVar100 + 0x133) = uVar26;
      *(undefined1 *)((long)puVar100 + 0x134) = 0;
      iVar31 = *(int *)((long)puVar147 + 0x60);
      *(int *)((long)puVar100 + 0x58) = iVar31;
      auVar189 = auVar22 << 0x40;
      if (iVar31 != 0) {
        *(uint *)((long)puVar100 + 0x23c) = *(uint *)((long)puVar147 + 0x38) & 0xfffffffe;
        *(undefined8 *)((long)puVar100 + 0x20) = *(undefined8 *)((long)puVar147 + 0x70);
        *(undefined8 *)((long)puVar100 + 0x280) = *(undefined8 *)((long)puVar147 + 0x80);
        *(uint *)((long)puVar100 + 0x22c) = *(uint *)((long)puVar100 + 0x22c) & 0xfffffffe;
        uVar88._0_4_ = 0;
        do {
          while( true ) {
            while( true ) {
              uVar33 = (ulong)(uint)uVar88;
              param_4 = *(long *)((long)puVar100 + 0x20);
              if ((*(uint *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                              *)(param_4 + 4) + uVar33 * 0x14) & *(uint *)((long)puVar100 + 0x18))
                  != 0) break;
              uVar88._0_4_ = (uint)uVar88 + 1;
              auVar189 = auVar277;
              if (*(uint *)((long)puVar100 + 0x58) <= (uint)uVar88) goto LAB_003fd203;
            }
            *(uint *)((long)puVar100 + 0xd8) = (uint)uVar88;
            lVar116 = *(long *)((long)puVar100 + 0xe0);
            param_4 = *(long *)(lVar116 + 0xa0);
            iVar31 = *(int *)(param_4 + 0x60);
            *(int *)((long)puVar100 + 0x110) = iVar31;
            uVar90 = *(uint *)(param_4 + 0x5c);
            *(ulong *)((long)puVar100 + 0x88) = uVar33;
            *(ulong *)((long)puVar100 + 0x68) = uVar33 * 5;
            if (uVar90 == (uint)uVar88) {
              uVar26 = *(undefined1 *)(*(long *)(param_4 + 0x70) + 0xf + uVar33 * 0x14);
            }
            else {
              uVar26 = 0;
            }
            if (*(char *)((long)puVar100 + 0xf3) == '\0') {
              uVar26 = 0;
            }
            *(undefined1 *)((long)puVar100 + 0xf4) = uVar26;
            iVar31 = iVar31 + -1;
            if (iVar31 <= (int)(uint)uVar88) break;
            uVar90 = (uint)uVar88;
LAB_003fc4f0:
            uVar129 = auVar277._8_8_;
            uVar33 = (ulong)(uVar90 + 1);
            *(uint *)((long)puVar100 + 0xd8) = uVar90 + 1;
            lVar119 = *(long *)(param_4 + 0x70);
            uVar90 = *(uint *)((long)puVar100 + 0xe8);
            uVar29 = *(ushort *)(lVar119 + 0xc + uVar33 * 0x14);
            param_4._2_6_ = 0;
            param_4._0_2_ = uVar29;
            if ((uVar90 & uVar29 & 0xe) != 0) goto LAB_003fc61a;
            puVar69 = (uint *)(lVar119 + uVar33 * 0x14);
            if ((uVar29 & 8) != 0) {
              if ((uVar90 & 0x10) == 0) {
                if (((uVar90 & 0xff00) == 0) ||
                   (param_4._0_4_ = uVar29 & 0xff00, param_4._4_4_ = 0,
                   (uVar90 & 0xff00) == (uint)param_4)) goto LAB_003fc529;
              }
              else {
                phVar32._0_4_ = *puVar69;
                paVar54 = *(accelerator_t **)(lVar116 + 0xf8);
                *(undefined8 *)((long)puVar100 + -8) = 0x3fc67f;
                uVar111 = OT::GDEF::accelerator_t::mark_set_covers
                                    (paVar54,uVar90 >> 0x10,(uint)phVar32);
                auVar277._8_8_ = uVar129;
                auVar277._0_8_ = extraout_XMM0_Qa_35;
                puVar147 = *(uint **)((long)puVar100 + 0x10);
                if ((char)uVar111 != '\0') goto LAB_003fc529;
              }
LAB_003fc61a:
              uVar90 = *(uint *)((long)puVar100 + 0xd8);
              if ((int)uVar90 < iVar31) goto code_r0x003fc62a;
              break;
            }
LAB_003fc529:
            lVar116 = lVar119 + uVar33 * 0x14;
            uVar29 = *(ushort *)(lVar119 + 0x10 + uVar33 * 0x14);
            uVar79 = 0;
            bVar153 = false;
            if (((((uVar29 & 0x20) != 0) &&
                 (bVar153 = false, (*(byte *)(lVar116 + 0xc) & 0x10) == 0)) &&
                ((*(char *)((long)puVar100 + 0xf0) != '\0' ||
                 (bVar153 = false, (uVar29 & 0x21f) != 0x201)))) &&
               ((*(char *)((long)puVar100 + 0xf1) != '\0' ||
                (bVar153 = false, (uVar29 & 0x11f) != 0x101)))) {
              bVar153 = (uVar29 & 0x40) == 0 || *(char *)((long)puVar100 + 0xf2) != '\0';
            }
            param_4 = *(long *)((long)puVar100 + 0x108);
            if ((pthread_mutex_t *)param_4 != (pthread_mutex_t *)0x0) {
              uVar79 = *(ushort *)param_4 << 8 | *(ushort *)param_4 >> 8;
            }
            if (((*(uint *)(lVar119 + 4 + uVar33 * 0x14) & *(uint *)((long)puVar100 + 0xec)) == 0)
               || ((*(char *)((long)puVar100 + 0xf4) != '\0' &&
                   (*(char *)((long)puVar100 + 0xf4) != *(char *)(lVar116 + 0xf))))) {
LAB_003fc60c:
              puVar147 = *(uint **)((long)puVar100 + 0x10);
              if (bVar153) goto LAB_003fc61a;
              break;
            }
            if (*(code **)((long)puVar100 + 0xf8) == (code *)0x0) {
              puVar147 = *(uint **)((long)puVar100 + 0x10);
              if (bVar153) goto LAB_003fc61a;
            }
            else {
              *(undefined8 *)((long)puVar100 + -8) = 0x3fc602;
              cVar27 = (**(code **)((long)puVar100 + 0xf8))
                                 (puVar69,uVar79,*(undefined8 *)((long)puVar100 + 0x100));
              auVar277._8_8_ = extraout_XMM1_Qa_34;
              auVar277._0_8_ = extraout_XMM0_Qa_34;
              if (cVar27 == '\0') goto LAB_003fc60c;
              param_4 = *(long *)((long)puVar100 + 0x108);
              puVar147 = *(uint **)((long)puVar100 + 0x10);
            }
            if ((pthread_mutex_t *)param_4 != (pthread_mutex_t *)0x0) {
              *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                **)((long)puVar100 + 0x108) =
                   (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)(param_4 + 2);
            }
            uVar90 = *(uint *)((long)puVar100 + 0xd8);
            uVar33 = (ulong)uVar90;
            uVar30 = *(undefined4 *)
                      (*(long *)((long)puVar100 + 0x20) + *(long *)((long)puVar100 + 0x68) * 4);
            uVar109 = *(undefined4 *)(*(long *)((long)puVar100 + 0x20) + uVar33 * 0x14);
            puVar144 = *(uint **)((long)puVar100 + 8);
            lVar116 = *(long *)((long)puVar144 + 0x90);
            if (*(int *)((long)puVar100 + 0x22c) == 4) {
              if (*(long *)(lVar116 + 0x10) == 0) {
                param_5 = (uint *)0x0;
              }
              else {
                param_5 = *(uint **)(*(long *)(lVar116 + 0x10) + 0x58);
              }
              lVar119 = *(long *)((long)puVar100 + 0x30);
              uVar129 = *(undefined8 *)((long)puVar144 + 0x98);
              pcVar86 = *(code **)(lVar116 + 0x78);
              *(undefined8 *)((long)puVar100 + -8) = 0x3fc708;
              phVar32._0_4_ = (*pcVar86)(puVar144,uVar129);
              uVar129 = extraout_XMM0_Qa_36;
              uVar111 = extraout_XMM1_Qa_35;
            }
            else {
              if (*(long *)(lVar116 + 0x10) == 0) {
                param_5 = (uint *)0x0;
              }
              else {
                param_5 = *(uint **)(*(long *)(lVar116 + 0x10) + 0x60);
              }
              puVar144 = *(uint **)((long)puVar100 + 8);
              uVar129 = *(undefined8 *)((long)puVar144 + 0x98);
              pcVar86 = *(code **)(lVar116 + 0x80);
              *(undefined8 *)((long)puVar100 + -8) = 0x3fc9a9;
              phVar32._0_4_ = (*pcVar86)(puVar144,uVar129,uVar30,uVar109);
              puVar147 = *(uint **)((long)puVar100 + 0x10);
              lVar119 = *(long *)((long)puVar100 + 0x30);
              uVar129 = extraout_XMM0_Qa_37;
              uVar111 = extraout_XMM1_Qa_36;
            }
            auVar16._8_8_ = uVar111;
            auVar16._0_8_ = uVar129;
            auVar277._8_8_ = uVar111;
            auVar277._0_8_ = uVar129;
            param_4._4_4_ = 0;
            param_4._0_4_ = (uint)phVar32;
            if ((uint)phVar32 != 0) {
              iVar31 = (int)(uint)phVar32 >> 1;
              param_4._0_4_ = (uint)phVar32 - iVar31;
              param_4._4_4_ = 0;
              if (*(int *)((long)puVar100 + 0x23c) == 4) {
                lVar116 = *(long *)((long)puVar100 + 0x280);
                *(int *)(lVar116 + *(long *)((long)puVar100 + 0x68) * 4) =
                     *(int *)(lVar116 + *(long *)((long)puVar100 + 0x68) * 4) + iVar31;
                piVar53 = (int *)(lVar116 + uVar33 * 0x14);
                *piVar53 = *piVar53 + (uint)param_4;
                piVar53 = (int *)(lVar116 + uVar33 * 0x14 + 8);
              }
              else {
                lVar116 = *(long *)((long)puVar100 + 0x280);
                piVar53 = (int *)(lVar116 + 4 + *(long *)((long)puVar100 + 0x68) * 4);
                *piVar53 = *piVar53 + iVar31;
                piVar53 = (int *)(lVar116 + 4 + uVar33 * 0x14);
                *piVar53 = *piVar53 + (uint)param_4;
                piVar53 = (int *)(lVar116 + uVar33 * 0x14 + 0xc);
              }
              *piVar53 = *piVar53 + (uint)param_4;
              uVar90 = uVar90 + 1;
              if (**(uint **)((long)puVar100 + 0x38) < uVar90) {
                uVar90 = **(uint **)((long)puVar100 + 0x38);
              }
              puVar147 = *(uint **)((long)puVar100 + 0x10);
              puVar144 = *(uint **)((long)puVar100 + 8);
              lVar119 = *(long *)((long)puVar100 + 0x30);
              auVar277 = auVar16;
              if (1 < uVar90 - (uint)uVar88) {
                *(byte *)((long)puVar147 + 0xc0) = *(byte *)((long)puVar147 + 0xc0) | 0x20;
                lVar116 = *(long *)((long)puVar147 + 0x70);
                param_5 = (uint *)0xffffffff;
                if (uVar90 != (uint)uVar88) {
                  if (*(int *)(*(long *)((long)puVar100 + 0x10) + 0x1c) == 2) {
                    if ((uint)uVar88 < uVar90) {
                      uVar33 = (ulong)uVar90;
                      uVar152 = uVar33 - *(long *)((long)puVar100 + 0x88);
                      param_5 = (uint *)0xffffffff;
                      if (8 < uVar152) {
                        uVar146 = (ulong)((uint)uVar152 & 7);
                        if (uVar146 == 0) {
                          uVar146 = 8;
                        }
                        lVar119 = (uVar146 + *(long *)((long)puVar100 + 0x88)) - uVar33;
                        puVar50 = (undefined4 *)
                                  (lVar116 + *(long *)((long)puVar100 + 0x68) * 4 + 0x94);
                        auVar172._8_4_ = 0xffffffff;
                        auVar172._0_8_ = 0xffffffffffffffff;
                        auVar172._12_4_ = 0xffffffff;
                        auVar187._8_4_ = 0xffffffff;
                        auVar187._0_8_ = 0xffffffffffffffff;
                        auVar187._12_4_ = 0xffffffff;
                        do {
                          auVar269._12_4_ = puVar50[-0x14];
                          auVar269._8_4_ = puVar50[-0x19];
                          auVar269._4_4_ = puVar50[-0x1e];
                          auVar269._0_4_ = puVar50[-0x23];
                          in_XMM5._12_4_ = *puVar50;
                          in_XMM5._8_4_ = puVar50[-5];
                          in_XMM5._4_4_ = puVar50[-10];
                          in_XMM5._0_4_ = puVar50[-0xf];
                          auVar189 = auVar269 ^ _DAT_006524b0;
                          auVar279 = auVar172 ^ _DAT_006524b0;
                          auVar262._0_4_ = -(uint)(auVar279._0_4_ < auVar189._0_4_);
                          auVar262._4_4_ = -(uint)(auVar279._4_4_ < auVar189._4_4_);
                          auVar262._8_4_ = -(uint)(auVar279._8_4_ < auVar189._8_4_);
                          auVar262._12_4_ = -(uint)(auVar279._12_4_ < auVar189._12_4_);
                          auVar172 = ~auVar262 & auVar269 | auVar172 & auVar262;
                          auVar189 = in_XMM5 ^ _DAT_006524b0;
                          auVar279 = auVar187 ^ _DAT_006524b0;
                          auVar263._0_4_ = -(uint)(auVar279._0_4_ < auVar189._0_4_);
                          auVar263._4_4_ = -(uint)(auVar279._4_4_ < auVar189._4_4_);
                          auVar263._8_4_ = -(uint)(auVar279._8_4_ < auVar189._8_4_);
                          auVar263._12_4_ = -(uint)(auVar279._12_4_ < auVar189._12_4_);
                          auVar187 = ~auVar263 & in_XMM5 | auVar187 & auVar263;
                          puVar50 = puVar50 + 0x28;
                          lVar119 = lVar119 + 8;
                        } while (lVar119 != 0);
                        *(long *)((long)puVar100 + 0x88) =
                             *(long *)((long)puVar100 + 0x88) + (uVar152 - uVar146);
                        auVar279 = auVar172 ^ _DAT_006524b0;
                        auVar189 = auVar187 ^ _DAT_006524b0;
                        auVar264._0_4_ = -(uint)(auVar279._0_4_ < auVar189._0_4_);
                        auVar264._4_4_ = -(uint)(auVar279._4_4_ < auVar189._4_4_);
                        auVar264._8_4_ = -(uint)(auVar279._8_4_ < auVar189._8_4_);
                        auVar264._12_4_ = -(uint)(auVar279._12_4_ < auVar189._12_4_);
                        auVar226 = ~auVar264 & auVar187 | auVar172 & auVar264;
                        auVar173._0_8_ = auVar226._8_8_;
                        auVar173._8_4_ = auVar226._8_4_;
                        auVar173._12_4_ = auVar226._12_4_;
                        auVar279 = auVar226 ^ _DAT_006524b0;
                        auVar189 = auVar173 ^ _DAT_006524b0;
                        auVar225._0_4_ = -(uint)(auVar279._0_4_ < auVar189._0_4_);
                        auVar225._4_4_ = -(uint)(auVar279._4_4_ < auVar189._4_4_);
                        auVar225._8_4_ = -(uint)(auVar279._8_4_ < auVar189._8_4_);
                        auVar225._12_4_ = -(uint)(auVar279._12_4_ < auVar189._12_4_);
                        in_XMM2 = ~auVar225 & auVar173 | auVar226 & auVar225;
                        uVar30 = in_XMM2._4_4_;
                        auVar174._4_4_ = uVar30;
                        auVar174._0_4_ = uVar30;
                        auVar174._8_4_ = uVar30;
                        auVar174._12_4_ = uVar30;
                        auVar279 = in_XMM2 ^ _DAT_006524b0;
                        auVar189 = auVar174 ^ _DAT_006524b0;
                        auVar265._0_4_ = -(uint)(auVar279._0_4_ < auVar189._0_4_);
                        auVar265._4_4_ = -(uint)(auVar279._4_4_ < auVar189._4_4_);
                        auVar265._8_4_ = -(uint)(auVar279._8_4_ < auVar189._8_4_);
                        auVar265._12_4_ = -(uint)(auVar279._12_4_ < auVar189._12_4_);
                        in_XMM2 = in_XMM2 & auVar265;
                        in_XMM3 = ~auVar265 & auVar174 | in_XMM2;
                        param_5._0_4_ = in_XMM3._0_4_;
                        param_5._4_4_ = 0;
                        in_XMM4 = _DAT_006524b0;
                        in_XMM6 = _DAT_006524b0;
                      }
                      lVar119 = uVar33 - *(long *)((long)puVar100 + 0x88);
                      puVar69 = (uint *)(lVar116 + *(long *)((long)puVar100 + 0x88) * 0x14 + 8);
                      do {
                        if (*puVar69 < (uint)param_5) {
                          param_5._4_4_ = 0;
                          param_5._0_4_ = *puVar69;
                        }
                        puVar69 = puVar69 + 5;
                        lVar119 = lVar119 + -1;
                      } while (lVar119 != 0);
                    }
                  }
                  else {
                    phVar32._0_4_ = *(uint *)(lVar116 + 8 + *(long *)((long)puVar100 + 0x68) * 4);
                    uVar64 = *(uint *)(lVar116 + 8 + (ulong)(uVar90 - 1) * 0x14);
                    param_5._4_4_ = 0;
                    param_5._0_4_ = (uint)phVar32;
                    if (uVar64 < (uint)phVar32) {
                      param_5._4_4_ = 0;
                      param_5._0_4_ = uVar64;
                    }
                  }
                }
                puVar147 = *(uint **)((long)puVar100 + 0x10);
                param_4._4_4_ = 0;
                param_4._0_4_ = uVar90;
                param_6 = 3;
                *(undefined8 *)((long)puVar100 + -8) = 0x3fc9ee;
                auVar277 = hb_buffer_t::_infos_set_glyph_flags
                                     ((hb_buffer_t *)puVar147,lVar116,(uint)uVar88,uVar90,
                                      (uint)param_5,3);
                puVar144 = *(uint **)((long)puVar100 + 8);
                lVar119 = *(long *)((long)puVar100 + 0x30);
              }
            }
            uVar88._0_4_ = *(uint *)((long)puVar100 + 0xd8);
            auVar189 = auVar277;
            if (*(uint *)((long)puVar100 + 0x58) <= (uint)uVar88) goto LAB_003fd203;
          }
          uVar88._0_4_ = (uint)uVar88 + 1;
          puVar144 = *(uint **)((long)puVar100 + 8);
          lVar119 = *(long *)((long)puVar100 + 0x30);
          auVar189 = auVar277;
        } while ((uint)uVar88 < *(uint *)((long)puVar100 + 0x58));
      }
LAB_003fd203:
      *(undefined8 *)((long)puVar100 + -8) = 0x3fd217;
      hb_buffer_t::message
                (auVar189._0_8_,auVar189._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                 in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)puVar147,puVar144,
                 "end kern",param_4,param_5,param_6,*(undefined1 *)puVar100);
      *(undefined8 *)((long)puVar100 + -8) = 0x3fd224;
      free(*(void **)((long)puVar100 + 0x1d8));
      *(undefined8 *)((long)puVar100 + -8) = 0x3fd231;
      auVar278 = hb_sanitize_context_t::~hb_sanitize_context_t
                           ((hb_sanitize_context_t *)((long)puVar100 + 0x178));
    }
    lVar116 = auVar278._0_8_;
    plVar125 = *(long **)((long)puVar100 + 0x48);
    if (*(int *)((long)puVar100 + 0x230) == 5) {
      uVar88._0_4_ = **(uint **)((long)puVar100 + 0x38);
      param_4 = *(long *)((long)puVar100 + 0x28);
      if (1 < (uint)uVar88) {
        param_4 = *(undefined8 *)param_4;
        uVar33 = (ulong)((uint)uVar88 - 1);
        phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   *)(param_4 + uVar33 * 0x14);
        uVar152 = 0;
        do {
          uVar33 = uVar33 - 1;
          *(undefined4 *)((long)puVar100 + 0xe0) = *(undefined4 *)(phVar32 + 0x10);
          uVar129 = *(undefined8 *)(phVar32 + 8);
          *(undefined8 *)((long)puVar100 + 0xd0) = *(undefined8 *)phVar32;
          *(undefined8 *)((long)puVar100 + 0xd8) = uVar129;
          *(undefined4 *)(phVar32 + 0x10) = *(undefined4 *)(param_4 + 0x10);
          uVar129 = *(undefined8 *)(param_4 + 8);
          *(long *)phVar32 = *(long *)param_4;
          *(undefined8 *)(phVar32 + 8) = uVar129;
          *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)((long)puVar100 + 0xe0);
          lVar116 = *(long *)((long)puVar100 + 0xd0);
          uVar129 = *(undefined8 *)((long)puVar100 + 0xd8);
          *(long *)param_4 = lVar116;
          *(undefined8 *)(param_4 + 8) = uVar129;
          uVar152 = uVar152 + 1;
          param_4 = param_4 + 0x14;
          phVar32 = phVar32 + -0x14;
        } while (uVar152 < (uVar33 & 0xffffffff));
      }
      if (*(char *)((long)puVar147 + 0x5b) != '\0') {
        uVar90 = **(uint **)((long)puVar100 + 0x38);
        param_4._4_4_ = 0;
        param_4._0_4_ = uVar90;
        if (uVar90 < (uint)uVar88) {
          uVar88._0_4_ = uVar90;
        }
        if (1 < (uint)uVar88) {
          param_4 = *plVar125;
          uVar33 = (ulong)((uint)uVar88 - 1);
          phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)(param_4 + uVar33 * 0x14);
          uVar152 = 0;
          do {
            uVar33 = uVar33 - 1;
            *(undefined4 *)((long)puVar100 + 0xe0) = *(undefined4 *)(phVar32 + 0x10);
            uVar129 = *(undefined8 *)(phVar32 + 8);
            *(undefined8 *)((long)puVar100 + 0xd0) = *(undefined8 *)phVar32;
            *(undefined8 *)((long)puVar100 + 0xd8) = uVar129;
            *(undefined4 *)(phVar32 + 0x10) = *(undefined4 *)(param_4 + 0x10);
            uVar129 = *(undefined8 *)(param_4 + 8);
            *(long *)phVar32 = *(long *)param_4;
            *(undefined8 *)(phVar32 + 8) = uVar129;
            *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)((long)puVar100 + 0xe0);
            lVar116 = *(long *)((long)puVar100 + 0xd0);
            uVar129 = *(undefined8 *)((long)puVar100 + 0xd8);
            *(long *)param_4 = lVar116;
            *(undefined8 *)(param_4 + 8) = uVar129;
            uVar152 = uVar152 + 1;
            param_4 = param_4 + 0x14;
            phVar32 = phVar32 + -0x14;
          } while (uVar152 < (uVar33 & 0xffffffff));
        }
      }
    }
    *(undefined8 *)((long)puVar100 + -8) = 0x3fd353;
    hb_buffer_t::message
              (lVar116,auVar278._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
               in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)puVar147,puVar144,"end fallback kern",
               param_4,param_5,param_6,*(undefined1 *)puVar100);
  }
  goto LAB_003fbed1;
code_r0x003fc62a:
  lVar116 = *(long *)((long)puVar100 + 0xe0);
  param_4 = *(long *)(lVar116 + 0xa0);
  goto LAB_003fc4f0;
AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_4:
  if ((((ulong)*(uint *)(&UNK_005e02c8 + uVar33) <
        (ulong)((long)&UNK_005e02bc - *(long *)(&UNK_005e02b8 + uVar33))) ||
      (param_5 = (uint *)&UNK_005e02bc,
      (ulong)*(uint *)(&UNK_005e02c8 + uVar33) <
      (ulong)((long)&UNK_005e02bc - *(long *)(&UNK_005e02b8 + uVar33)))) ||
     (*(int *)(&UNK_005e02c0 + uVar33) - 0x5e02bcU < 0x9c7728c3)) goto LAB_003f4fbb;
  iVar121 = *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                            switchdataD_005e02cc + uVar33) + 0x6388d73d;
  *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                  switchdataD_005e02cc + uVar33) = iVar121;
  iVar31 = 0;
  if (iVar121 < 1) goto LAB_003f4fbb;
  param_6 = 0xffffffff;
  lVar34 = 0x3db1;
  if (sRam000000009cd44980 == -1) {
    iVar31 = -(uint)(sRam000000009cd44982 == -1);
  }
  if (iVar31 == -0xb13d)
  goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1;
  in_R10 = (ulong)(iVar31 + 0xb13c);
  phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
             *)0x0;
  lVar119 = (long)&_hb_NullPool;
  puVar147 = (uint *)0x4;
LAB_003f5120:
  uVar29 = (ushort)lVar34;
  uVar88._0_2_ = uVar29 << 8 | uVar29 >> 8;
  uVar88._2_6_ = 0;
  uVar90 = (uint)(ushort)uVar88;
  iVar31 = 0;
  if (uVar29 != 0) {
code_r0x003f5133:
    uVar90 = (uint)uVar88;
    uVar49._0_4_ = (uint)(ushort)(*(ushort *)(uVar129 + 2) << 8 | *(ushort *)(uVar129 + 2) >> 8) *
                   (uVar90 + (int)param_6);
    uVar49._4_4_ = 0;
    iVar31 = 0;
    if (*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)(uVar129 + 0xc) + uVar49) == -1) {
code_r0x003f5152:
      uVar90 = (uint)uVar88;
      iVar31 = -(uint)(*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                   *)((long)param_5 + 2) + uVar49) == -1);
    }
  }
  param_4 = lVar119;
  if ((uint)phVar32 < iVar31 + uVar90) {
    param_4._2_6_ = 0;
    param_4._0_2_ = *(ushort *)(uVar129 + 2) << 8 | *(ushort *)(uVar129 + 2) >> 8;
code_r0x003f5176:
    param_4 = (ulong)(uint)((int)param_4 * (int)phVar32) + (long)param_5;
  }
  if ((ulong)*(uint *)(lVar116 + 0x18) < (param_4 - *(long *)(lVar116 + 8)) + 6U) goto LAB_003f4fbb;
  uVar88._0_2_ = *(ushort *)(param_4 + 2) << 8 | *(ushort *)(param_4 + 2) >> 8;
  uVar88._2_6_ = 0;
  lVar34._2_6_ = 0;
  lVar34._0_2_ = *(ushort *)param_4;
code_r0x003f519f:
  uVar49._0_2_ = (ushort)lVar34 << 8 | (ushort)lVar34 >> 8;
  uVar49._2_6_ = 0;
  if ((ushort)uVar49 < (ushort)uVar88) goto LAB_003f4fbb;
code_r0x003f51ac:
  if ((ulong)*(uint *)(lVar116 + 0x18) < (param_4 - *(long *)(lVar116 + 8)) + 6U) goto LAB_003f4fbb;
code_r0x003f51c3:
  lVar34 = (ulong)((((uint)uVar49 & 0xffff) - ((uint)uVar88 & 0xffff)) + 1) *
           ((ulong)puVar147 & 0xffffffff);
  uVar88._0_4_ = (uint)lVar34;
  if ((((int)((ulong)lVar34 >> 0x20) != 0) ||
      (phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   *)((ulong)(ushort)(*(ushort *)(param_4 + 4) << 8 | *(ushort *)(param_4 + 4) >> 8)
                     + uVar129),
      (ulong)*(uint *)(lVar116 + 0x18) < (ulong)((long)phVar107 - *(long *)(lVar116 + 8)))) ||
     ((uint)(*(int *)(lVar116 + 0x10) - (int)phVar107) < (uint)uVar88)) goto LAB_003f4fbb;
code_r0x003f5205:
  iVar31 = *(int *)(lVar116 + 0x1c) - (uint)uVar88;
  *(int *)(lVar116 + 0x1c) = iVar31;
  if (iVar31 < 1) goto LAB_003f4fbb;
code_r0x003f5215:
  if ((int)in_R10 == (int)phVar32)
  goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1;
  lVar34._2_6_ = 0;
  lVar34._0_2_ = *(ushort *)(uVar129 + 4);
  phVar32._0_4_ = (int)phVar32 + 1;
  phVar32._4_4_ = 0;
  goto LAB_003f5120;
code_r0x003f3f23:
  uVar88 = *(long *)(*(long *)((long)phVar32 + 0x30) + 0x10);
  *(undefined8 *)((long)phVar32 + 8) = uVar88;
  uVar90 = *(uint *)(*(long *)((long)phVar32 + 0x30) + 0x18);
  uVar124._4_4_ = 0;
  uVar124._0_4_ = uVar90;
  uVar49 = uVar88 + uVar124;
  *(undefined8 *)((long)phVar32 + 0x10) = uVar49;
  *(uint *)((long)phVar32 + 0x18) = uVar90;
  bVar153 = (uint)uVar129 < *(uint *)((long)puVar100 + 0x74);
  param_4 = &((pthread_mutex_t *)0x0)->__data;
  uVar113 = lVar116;
  if (bVar153) {
    param_4 = lVar116;
  }
  goto code_r0x003f3f52;
code_r0x003f3d5a:
  do {
    *(ulong *)puVar147 = *(ulong *)puVar147 | uVar111;
    *(ulong *)((long)puVar147 + 8) = *(ulong *)((long)puVar147 + 8) | 1L << ((byte)uVar49 & 0x3f);
    lVar34._0_4_ = (uint)uVar49 >> 9;
    lVar34._4_4_ = 0;
    uVar111 = 1L << ((byte)(uint)lVar34 & 0x3f);
code_r0x003f3d78:
    *(ulong *)((long)puVar147 + 0x10) = *(ulong *)((long)puVar147 + 0x10) | uVar111;
    do {
      if ((int)uVar129 == (int)uVar88) {
        return (pthread_mutex_t *)lVar34;
      }
      lVar34._2_6_ = 0;
      lVar34._0_2_ = *(ushort *)(uVar92 + 4);
      uVar88._0_4_ = (int)uVar88 + 1;
      uVar88._4_4_ = 0;
      uVar96 = uVar92;
LAB_003f3cf0:
      uVar29 = (ushort)lVar34;
      param_4._0_2_ = uVar29 << 8 | uVar29 >> 8;
      param_4._2_6_ = 0;
      uVar90 = (uint)(ushort)param_4;
      iVar31 = 0;
      uVar92 = uVar96;
      if (uVar29 != 0) {
code_r0x003f3d03:
        uVar90 = (uint)param_4;
        iVar31 = -(uint)(*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                     *)(uVar92 + 0xc) +
                                   (uint)(ushort)(*(ushort *)(uVar92 + 2) << 8 |
                                                 *(ushort *)(uVar92 + 2) >> 8) *
                                   (uVar90 + (int)param_5)) == -1);
      }
      lVar34 = param_6;
      if ((uint)uVar88 < iVar31 + uVar90) {
        lVar34 = (ulong)((uint)(ushort)(*(ushort *)(uVar92 + 2) << 8 | *(ushort *)(uVar92 + 2) >> 8)
                        * (uint)uVar88) + lVar116;
      }
LAB_003f3d3d:
      uVar29 = *(ushort *)lVar34;
      lVar34._2_6_ = 0;
      lVar34._0_2_ = uVar29;
    } while (uVar29 == 0xffff);
    uVar49._0_2_ = uVar29 << 8 | uVar29 >> 8;
    uVar49._2_6_ = 0;
    uVar111 = 1L << ((byte)((ushort)uVar49 >> 4) & 0x3f);
  } while( true );
code_r0x003f398e:
  param_5 = (uint *)((long)param_5 + 2);
  if ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
       *)lVar119 == phVar32)
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  ;
  if ((uVar92 & 0xffffffff) < (ulong)((long)param_5 - uVar88)) goto LAB_003f312d;
  uVar33 = (ulong)(ushort)(*(ushort *)
                            ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                              *)(uVar129 + 6) + (long)phVar32 * 2) << 8 |
                          *(ushort *)
                           ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                             *)(uVar129 + 6) + (long)phVar32 * 2) >> 8);
  uVar113 = (long)(uVar33 + (long)puVar144) + 4;
  if ((ulong)*in_R11 < (ulong)(uVar113 - *(long *)param_6)) goto LAB_003f312d;
  uVar88._0_4_ = *(uint *)(uVar33 + (long)puVar144);
  uVar33 = (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                   ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) *
           ((ulong)puVar147 & 0xffffffff);
  lVar34 = uVar33 & 0xffffffff;
  if ((int)(uVar33 >> 0x20) != 0) goto LAB_003f312d;
code_r0x003f3958:
  uVar88 = *(undefined8 *)param_6;
  uVar92._4_4_ = 0;
  uVar92._0_4_ = *in_R11;
  if ((((ulong)uVar92 < (pthread_mutex_t *)(uVar113 - uVar88)) ||
      ((uint)(*(int *)(lVar116 + 0x10) - (int)uVar113) < (uint)lVar34)) ||
     (iVar31 = *(int *)(lVar116 + 0x1c) - (uint)lVar34, *(int *)(lVar116 + 0x1c) = iVar31,
     iVar31 < 1)) goto LAB_003f312d;
  phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
             *)((long)phVar32 + 1);
  goto code_r0x003f398e;
code_r0x003f366d:
  if ((((ulong)uVar111 < (ulong)uVar92) ||
      ((uint)(*(int *)(lVar116 + 0x10) - (int)param_4) < (uint)uVar49)) ||
     (iVar31 = *(int *)(lVar116 + 0x1c) - (uint)uVar49, *(int *)(lVar116 + 0x1c) = iVar31,
     iVar31 < 1)) goto LAB_003f312d;
  puVar144 = (uint *)((long)puVar144 + 2);
  if ((uint *)lVar119 == puVar144) {
    do {
      uVar88._0_4_ = (int)*(undefined8 *)((long)puVar69 + -8) + 1;
      if ((uint)uVar88 == *(uint *)((long)puVar69 + -0x14))
      goto 
      AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
      ;
      uVar29 = *(ushort *)(uVar129 + 4);
      puVar148 = (ushort *)&_hb_NullPool;
      uVar79 = uVar29 << 8 | uVar29 >> 8;
      iVar31 = 0;
      if (uVar29 != 0) {
        uVar33 = (ulong)((uint)(ushort)(*(ushort *)(uVar129 + 2) << 8 |
                                       *(ushort *)(uVar129 + 2) >> 8) * (uVar79 - 1));
        iVar31 = 0;
        if (*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(uVar129 + 0xc) + uVar33) == -1) {
          iVar31 = -(uint)(*(short *)(*(long *)((long)puVar69 + -0x10) + 2 + uVar33) == -1);
        }
      }
      if ((uint)uVar88 < iVar31 + (uint)uVar79) {
        puVar148 = (ushort *)
                   ((ulong)((ushort)(*(ushort *)(uVar129 + 2) << 8 | *(ushort *)(uVar129 + 2) >> 8)
                           * (uint)uVar88) + *(long *)((long)puVar69 + -0x10));
      }
      if ((ulong)*in_R11 < (ulong)((long)puVar148 + (6 - *(long *)param_6))) goto LAB_003f312d;
      uVar29 = puVar148[1] << 8 | puVar148[1] >> 8;
      uVar79 = *puVar148 << 8 | *puVar148 >> 8;
      if ((uVar79 < uVar29) || ((ulong)*in_R11 < (ulong)((long)puVar148 + (6 - *(long *)param_6))))
      goto LAB_003f312d;
      *(ulong *)((long)puVar69 + -8) = (ulong)(uint)uVar88;
      uVar90 = ((uint)uVar79 - (uint)uVar29) + 1;
      if (CARRY4(uVar90,uVar90)) goto LAB_003f312d;
      uVar33 = (ulong)(ushort)(puVar148[2] << 8 | puVar148[2] >> 8);
      puVar147 = (uint *)(uVar129 + uVar33);
      if ((((ulong)*in_R11 < (ulong)((long)puVar147 - *(long *)param_6)) ||
          ((uint)(*(int *)(lVar116 + 0x10) - (int)puVar147) < uVar90 * 2)) ||
         (iVar31 = *(int *)(lVar116 + 0x1c) + uVar90 * -2, *(int *)(lVar116 + 0x1c) = iVar31,
         iVar31 < 1)) goto LAB_003f312d;
    } while (uVar90 == 0);
    uVar88 = *(undefined8 *)param_6;
    uVar111._4_4_ = 0;
    uVar111._0_4_ = *in_R11;
    lVar119 = (ulong)uVar90 * 2;
    phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
               *)(uVar33 + (long)param_5);
    puVar144 = (uint *)0x0;
  }
  if ((uVar111 & 0xffffffff) < (ulong)((long)((long)phVar32 + (long)puVar144) - uVar88))
  goto LAB_003f312d;
  lVar34._0_2_ = *(ushort *)((long)puVar147 + (long)puVar144) << 8 |
                 *(ushort *)((long)puVar147 + (long)puVar144) >> 8;
  lVar34._2_6_ = 0;
  puVar112 = *(undefined1 **)((long)puVar69 + -0x20);
  param_4 = (long)puVar112 + (long)(lVar34 + 4);
  if ((ulong)*in_R11 < (ulong)(param_4 - *(long *)param_6)) goto LAB_003f312d;
code_r0x003f364d:
  uVar88._0_4_ = *(uint *)(puVar112 + lVar34);
  uVar33 = (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                   ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) * 4;
  uVar49 = uVar33 & 0xffffffff;
  if ((int)(uVar33 >> 0x20) != 0) goto LAB_003f312d;
  uVar88 = *(undefined8 *)param_6;
  uVar92 = param_4 - uVar88;
  uVar111._4_4_ = 0;
  uVar111._0_4_ = *in_R11;
  goto code_r0x003f366d;
code_r0x003f3820:
  if ((ulong)*in_R11 < (ulong)(uVar88 - *(long *)param_6)) goto LAB_003f312d;
  uVar88._0_4_ = *(uint *)(uVar49 + uVar111);
  lVar34 = (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                   ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) * 4;
  uVar88._0_4_ = (uint)lVar34;
  if (((((int)((ulong)lVar34 >> 0x20) != 0) || ((ulong)*in_R11 < (ulong)(uVar92 - *(long *)param_6))
       ) || ((uint)(*(int *)(lVar116 + 0x10) - (int)uVar92) < (uint)uVar88)) ||
     (iVar31 = *(int *)(lVar116 + 0x1c) - (uint)uVar88, *(int *)(lVar116 + 0x1c) = iVar31,
     iVar31 < 1)) goto LAB_003f312d;
  if ((int)puVar147 == (int)phVar32)
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_1
  ;
  lVar34._2_6_ = 0;
  lVar34._0_2_ = *(ushort *)(uVar129 + 4);
  phVar32._0_4_ = (int)phVar32 + 1;
  phVar32._4_4_ = 0;
  uVar113 = uVar111;
LAB_003f379d:
  uVar29 = (ushort)lVar34;
  uVar79 = uVar29 << 8 | uVar29 >> 8;
  iVar31 = 0;
  if (uVar29 != 0) {
    iVar31 = -(uint)(*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                 *)(uVar129 + 0xc) +
                               (uint)(ushort)(*(ushort *)(uVar129 + 2) << 8 |
                                             *(ushort *)(uVar129 + 2) >> 8) *
                               ((uint)uVar79 + (int)param_5)) == -1);
  }
  lVar34 = lVar119;
  if ((uint)phVar32 < iVar31 + (uint)uVar79) {
    lVar34 = (ulong)((uint)(ushort)(*(ushort *)(uVar129 + 2) << 8 | *(ushort *)(uVar129 + 2) >> 8) *
                    (uint)phVar32) + (long)puVar144;
  }
  uVar152 = (ulong)*in_R11;
  uVar33 = (lVar34 - *(long *)param_6) + 4;
  in_R10 = 0;
  bVar153 = uVar33 < uVar152;
  bVar154 = uVar33 == uVar152;
  if (uVar152 < uVar33)
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  ;
code_r0x003f3804:
  if (!bVar153 && !bVar154)
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  ;
code_r0x003f380a:
  uVar49._0_2_ = *(ushort *)(lVar34 + 2) << 8 | *(ushort *)(lVar34 + 2) >> 8;
  uVar49._2_6_ = 0;
  uVar88 = (long)(uVar49 + uVar113) + 4;
  uVar92 = uVar88;
  uVar111 = uVar113;
  goto code_r0x003f3820;
LAB_003f312d:
  in_R10 = 0;
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  ;

  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_1
  :
  in_R10 = CONCAT71((int7)(in_R10 >> 8),1);
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  ;
code_r0x003f2c43:
  param_4 = (ulong)param_4 >> 1;
  if ((uint)lVar116 <
      (uint)(ushort)(*(ushort *)
                      ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(uVar129 + 2) + in_R10 * param_4) << 8 |
                    *(ushort *)
                     ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                       *)(uVar129 + 2) + in_R10 * param_4) >> 8)) {
LAB_003f2c30:
    uVar90 = (int)param_4 - 1;
    in_R11 = (uint *)(ulong)uVar90;
    if ((int)uVar90 < (int)uVar88) goto LAB_003f2e1f;
  }
  else {
    uVar29 = (ushort)((__pthread_mutex_s *)(uVar129 + in_R10 * param_4))->__lock;
    if ((uint)lVar116 <= (uint)(ushort)(uVar29 << 8 | uVar29 >> 8)) {
      param_6 = uVar129 + (ulong)(uint)((int)param_4 * (int)param_5);
LAB_003f2e1f:
      ppVar117 = (pthread_mutex_t *)(param_6 + 4);
      if ((pthread_mutex_t *)param_6 == (pthread_mutex_t *)0x0) {
        ppVar117 = (pthread_mutex_t *)0x0;
      }
      return ppVar117;
    }
    uVar88._0_4_ = (int)param_4 + 1;
    uVar88._4_4_ = 0;
    if ((int)in_R11 < (int)(uint)uVar88) goto LAB_003f2e1f;
  }
  param_4._0_4_ = (int)in_R11 + (int)uVar88;
  param_4._4_4_ = 0;
  goto code_r0x003f2c43;
code_r0x003f2dd3:
  do {
    uVar33 = uVar88 & 0xffffffff;
    if ((int)uVar88 < (int)in_R11) {
      return (pthread_mutex_t *)uVar49;
    }
LAB_003f2ddb:
    while( true ) {
      uVar88._0_4_ = (uint)((int)uVar33 + (int)in_R11) >> 1;
      uVar90 = (uint)lVar116;
      if (uVar90 < (ushort)(*(ushort *)
                             ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                               *)(uVar129 + 0xe) + param_6 * (ulong)(uint)uVar88) << 8 |
                           *(ushort *)
                            ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                              *)(uVar129 + 0xe) + param_6 * (ulong)(uint)uVar88) >> 8)) break;
      if (uVar90 <= (ushort)(*(ushort *)
                              ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                *)(uVar129 + 0xc) + param_6 * (ulong)(uint)uVar88) << 8 |
                            *(ushort *)
                             ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                               *)(uVar129 + 0xc) + param_6 * (ulong)(uint)uVar88) >> 8)) {
        uVar88._0_4_ = (uint)uVar88 * (int)param_5;
        phVar32._0_4_ =
             (uint)(ushort)(*(ushort *)
                             ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                               *)(uVar129 + 0xe) + (uint)uVar88) << 8 |
                           *(ushort *)
                            ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                              *)(uVar129 + 0xe) + (uint)uVar88) >> 8);
        if ((uVar90 < (uint)phVar32) ||
           ((ushort)(*(ushort *)
                      ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(uVar129 + 0xc) + (uint)uVar88) << 8 |
                    *(ushort *)
                     ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                       *)(uVar129 + 0xc) + (uint)uVar88) >> 8) < uVar90)) {
          return (pthread_mutex_t *)0x0;
        }
        return (pthread_mutex_t *)
               ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)((ulong)(ushort)(*(ushort *)
                                     ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                       *)(uVar129 + 0x10) + (uint)uVar88) << 8 |
                                   *(ushort *)
                                    ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                      *)(uVar129 + 0x10) + (uint)uVar88) >> 8) + uVar129) +
               (ulong)(uVar90 - (uint)phVar32) * 2);
      }
      in_R11 = (uint *)(ulong)((uint)uVar88 + 1);
      if ((int)uVar33 < (int)((uint)uVar88 + 1)) {
        return (pthread_mutex_t *)uVar49;
      }
    }
    uVar88._0_4_ = (uint)uVar88 - 1;
    uVar88._4_4_ = 0;
  } while( true );
LAB_003f275d:
  uVar90 = (uint)((int)uVar49 + (int)uVar88) >> 1;
  uVar29 = (ushort)((__pthread_mutex_s *)(uVar129 + in_R10 * uVar90))->__lock;
  uVar92._0_2_ = uVar29 << 8 | uVar29 >> 8;
  uVar92._2_6_ = 0;
  if ((uint)lVar116 < (uint)(ushort)uVar92) {
    uVar49._4_4_ = 0;
    uVar49._0_4_ = uVar90 - 1;
    if ((int)(uVar90 - 1) < (int)uVar88) goto LAB_003f2856;
    goto LAB_003f275d;
  }
  if ((uint)(ushort)uVar92 == (uint)lVar116) {
    param_6 = uVar129 + (ulong)(uVar90 * (int)param_5);
    goto LAB_003f2856;
  }
  uVar88._4_4_ = 0;
  uVar88._0_4_ = uVar90 + 1;
code_r0x003f277b:
  *(char *)uVar49 =
       (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
               *)uVar49 + (char)uVar49;
  *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
    *)(uVar92 + -0x3576fe3f) =
       (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
        )((char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)(uVar92 + -0x3576fe3f) + (char)uVar49);
  if ((int)uVar49 < (int)uVar88) {
LAB_003f2856:
    ppVar117 = (pthread_mutex_t *)(param_6 + 2);
    if ((pthread_mutex_t *)param_6 == (pthread_mutex_t *)0x0) {
      ppVar117 = (pthread_mutex_t *)0x0;
    }
    return ppVar117;
  }
  goto LAB_003f275d;
code_r0x003f267c:
  if ((uint)lVar116 <=
      (uint)(ushort)(*(ushort *)(uVar129 + uVar49) << 8 | *(ushort *)(uVar129 + uVar49) >> 8)) {
    param_6 = uVar129 + (ulong)(uint)((int)param_4 * (int)param_5);
LAB_003f283f:
    ppVar117 = (pthread_mutex_t *)(param_6 + 4);
    if ((pthread_mutex_t *)param_6 == (pthread_mutex_t *)0x0) {
      ppVar117 = (pthread_mutex_t *)0x0;
    }
    return ppVar117;
  }
  uVar88._0_4_ = (int)param_4 + 1;
  uVar88._4_4_ = 0;
  if ((int)in_R11 < (int)(uint)uVar88) goto LAB_003f283f;
LAB_003f265f:
  while( true ) {
    param_4._0_4_ = (uint)((int)in_R11 + (int)uVar88) >> 1;
    param_4._4_4_ = 0;
    uVar49 = in_R10 * param_4;
    if ((uint)(ushort)(*(ushort *)
                        ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                          *)(uVar129 + 2) + uVar49) << 8 |
                      *(ushort *)
                       ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                         *)(uVar129 + 2) + uVar49) >> 8) <= (uint)lVar116) break;
    in_R11 = (uint *)(ulong)((uint)param_4 - 1);
    if ((int)((uint)param_4 - 1) < (int)uVar88) goto LAB_003f283f;
  }
  goto code_r0x003f267c;
code_r0x003eee56:
  uVar92 = *(undefined8 *)(lVar119 + 0x10);
  phVar140 = *(hb_buffer_t **)(lVar119 + 0x20);
  puVar69[2] = *(uint *)(*(long *)(lVar119 + 8) + 0xa0);
  puVar69[-2] = 0x3eee7c;
  puVar69[-1] = 0;
  bVar153 = hb_buffer_t::message
                      (uVar42,uVar118,uVar44,uVar45,uVar97,uVar96,uVar66,uVar94,phVar140,uVar92,
                       "start kern",uVar33,param_5,param_6,(char)*puVar69);
  auVar279 = extraout_XMM0_03;
  if (bVar153) goto code_r0x003eee84;
  goto LAB_003f0ec0;
code_r0x003eee84:
  hVar7 = phVar140[0x18];
  *(hb_buffer_t **)(puVar69 + 8) = phVar140;
  if (((byte)hVar7 & 0x40) != 0) {
    uVar88._0_4_ = *(uint *)(phVar140 + 0x60);
    phVar140[0xc0] = (hb_buffer_t)((byte)phVar140[0xc0] | 0x20);
    if ((ulong)(uint)uVar88 != 0) {
      lVar116 = *(long *)(phVar140 + 0x70);
      if ((ulong)(uint)uVar88 - 1 < 3) {
        uVar33 = 0;
      }
      else {
        pbVar136 = (byte *)(lVar116 + 0x40);
        uVar33 = 0;
        do {
          pbVar136[-0x3c] = pbVar136[-0x3c] | 2;
          pbVar136[-0x28] = pbVar136[-0x28] | 2;
          pbVar136[-0x14] = pbVar136[-0x14] | 2;
          *pbVar136 = *pbVar136 | 2;
          uVar33 = uVar33 + 4;
          pbVar136 = pbVar136 + 0x50;
        } while (((uint)uVar88 & 0xfffffffc) != uVar33);
      }
      lVar119 = *(long *)(puVar69 + 4);
      phVar140 = *(hb_buffer_t **)(puVar69 + 8);
      if ((ulong)((uint)uVar88 & 3) != 0) {
        lVar34 = 0;
        do {
          pbVar136 = (byte *)(lVar116 + uVar33 * 0x14 + 4 + lVar34);
          *pbVar136 = *pbVar136 | 2;
          lVar34 = lVar34 + 0x14;
        } while ((ulong)((uint)uVar88 & 3) * 0x14 != lVar34);
      }
    }
  }
  puVar50 = &_hb_NullPool;
  puVar69[-2] = 0x3eeeb2;
  puVar69[-1] = 0;
  OT::hb_ot_apply_context_t::hb_ot_apply_context_t
            ((hb_ot_apply_context_t *)(puVar69 + 0x20),1,uVar92,(undefined4 *)phVar140,
             (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
  uVar88._0_4_ = puVar69[2];
  param_6._4_4_ = 0;
  param_6._0_4_ = (uint)uVar88;
  puVar69[0x6b] = (uint)uVar88;
  puVar69[0x72] = 0xffffffff;
  puVar69[0x73] = 0;
  *(undefined8 *)(puVar69 + 0x12) = uVar92;
  uVar92._1_7_ = (undefined7)((ulong)uVar92 >> 8);
  uVar92._0_1_ = *(undefined1 *)((long)puVar69 + 0x1be);
  uVar26 = *(undefined1 *)((long)puVar69 + 0x1bf);
  if (puVar69[0x42] != 0) {
    uVar26 = 0;
  }
  auVar20._8_8_ = 0;
  auVar20._0_8_ = extraout_XMM1_Qa_01;
  auVar274 = auVar20 << 0x40;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = extraout_XMM1_Qa_01;
  auVar21 = auVar21 << 0x40;
  *(undefined1 (*) [16])(puVar69 + 0x3a) = (undefined1  [16])0x0;
  puVar69[0x3e] = 0;
  puVar69[0x3f] = 0;
  param_5._1_7_ = (undefined7)((ulong)puVar50 >> 8);
  param_5._0_1_ = *(char *)((long)puVar69 + 0x1bd) != '\0';
  bVar153 = puVar69[0x42] == 1;
  *(undefined1 *)((long)puVar69 + 0xe1) = 1;
  *(bool *)((long)puVar69 + 0xe2) = bVar153;
  puVar69[0x6d] = 8;
  *(uint **)(puVar69 + 0x24) = puVar69 + 0x20;
  uVar90 = *(uint *)(*(long *)(puVar69 + 0x48) + 0x60);
  puVar69[0x30] = uVar90;
  *(undefined1 (*) [16])(puVar69 + 0x2a) = (undefined1  [16])0x0;
  puVar69[0x2e] = 0;
  puVar69[0x2f] = 0;
  puVar69[0x26] = 8;
  *(bool *)(puVar69 + 0x28) = bVar153;
  *(undefined1 *)((long)puVar69 + 0xa1) = *(undefined1 *)((long)puVar69 + 0x1be);
  *(bool *)((long)puVar69 + 0xa2) = bVar153;
  puVar69[0x27] = (uint)uVar88;
  *(undefined1 *)((long)puVar69 + 0xa3) = uVar26;
  *(undefined1 *)(puVar69 + 0x29) = 0;
  *(uint **)(puVar69 + 0x34) = puVar69 + 0x20;
  puVar69[0x40] = uVar90;
  *(undefined1 (*) [16])(puVar69 + 0x3a) = (undefined1  [16])0x0;
  puVar69[0x3e] = 0;
  puVar69[0x3f] = 0;
  *(bool *)((long)puVar69 + 0xe2) = bVar153;
  param_4 = (pthread_mutex_t *)0xffffffff00000008;
  puVar69[0x36] = 8;
  puVar69[0x37] = 0xffffffff;
  *(bool *)(puVar69 + 0x38) = bVar153 || *(char *)((long)puVar69 + 0x1bd) != '\0';
  *(undefined1 *)((long)puVar69 + 0xe1) = 1;
  *(undefined1 *)((long)puVar69 + 0xe3) = uVar26;
  *(undefined1 *)(puVar69 + 0x39) = 0;
  uVar88._0_4_ = *(uint *)(phVar140 + 0x60);
  puVar69[0xb] = (uint)uVar88;
  if ((uint)uVar88 != 0) {
    puVar69[0x18] = *(uint *)(phVar140 + 0x38) & 0xfffffffe;
    *(undefined8 *)(puVar69 + 0xe) = *(undefined8 *)(phVar140 + 0x70);
    *(undefined8 *)(puVar69 + 0x14) = *(undefined8 *)(phVar140 + 0x80);
    uVar92 = (pthread_mutex_t *)0x0;
    do {
      iVar31 = (int)uVar92;
      param_4 = *(long *)((long)puVar69 + 0x38);
      if ((*(uint *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)(param_4 + 4) + uVar92 * 0x14) & *(uint *)((long)puVar69 + 8)) == 0) {
        uVar92._0_4_ = iVar31 + 1;
        uVar92._4_4_ = 0;
      }
      else {
        *(int *)((long)puVar69 + 0x88) = iVar31;
        lVar116 = *(long *)((long)puVar69 + 0x90);
        param_4 = *(long *)(lVar116 + 0xa0);
        iVar121 = *(int *)(param_4 + 0x60);
        *(int *)((long)puVar69 + 0xc0) = iVar121;
        iVar141 = *(int *)(param_4 + 0x5c);
        *(long *)((long)puVar69 + 0x40) = uVar92 * 5;
        if (iVar141 == iVar31) {
          uVar26 = *(undefined1 *)(*(long *)(param_4 + 0x70) + 0xf + uVar92 * 0x14);
        }
        else {
          uVar26 = 0;
        }
        if (*(char *)((long)puVar69 + 0xa3) == '\0') {
          uVar26 = 0;
        }
        *(undefined1 *)((long)puVar69 + 0xa4) = uVar26;
        iVar121 = iVar121 + -1;
        if (iVar31 < iVar121) {
          *(int *)((long)puVar69 + 0x30) = iVar31;
          uVar95 = uVar92;
LAB_003f0b30:
          uVar129 = auVar274._8_8_;
          uVar88._0_4_ = (int)uVar92 + 1;
          uVar33 = (ulong)(uint)uVar88;
          *(uint *)((long)puVar69 + 0x88) = (uint)uVar88;
          lVar119 = *(long *)(param_4 + 0x70);
          uVar88._0_4_ = *(uint *)((long)puVar69 + 0x98);
          uVar29 = *(ushort *)(lVar119 + 0xc + uVar33 * 0x14);
          param_4._2_6_ = 0;
          param_4._0_2_ = uVar29;
          if (((uint)uVar88 & uVar29 & 0xe) != 0) goto LAB_003f0c4e;
          puVar100 = (uint *)(lVar119 + uVar33 * 0x14);
          if ((uVar29 & 8) != 0) {
            if (((uint)uVar88 & 0x10) == 0) {
              if ((((uint)uVar88 & 0xff00) == 0) ||
                 (param_4._0_4_ = uVar29 & 0xff00, param_4._4_4_ = 0,
                 ((uint)uVar88 & 0xff00) == (uint)param_4)) goto LAB_003f0b69;
            }
            else {
              uVar90 = *puVar100;
              paVar54 = *(accelerator_t **)(lVar116 + 0xf8);
              *(undefined8 *)((long)puVar69 + -8) = 0x3f0cae;
              uVar88 = OT::GDEF::accelerator_t::mark_set_covers(paVar54,(uint)uVar88 >> 0x10,uVar90)
              ;
              auVar274._8_8_ = uVar129;
              auVar274._0_8_ = extraout_XMM0_Qa_05;
              uVar95._4_4_ = 0;
              uVar95._0_4_ = *(uint *)((long)puVar69 + 0x30);
              if ((char)uVar88 != '\0') goto LAB_003f0b69;
            }
LAB_003f0c4e:
            iVar31 = (int)uVar95;
            uVar92._4_4_ = 0;
            uVar92._0_4_ = *(uint *)((long)puVar69 + 0x88);
            if (iVar121 <= (int)*(uint *)((long)puVar69 + 0x88)) goto LAB_003f0a96;
            lVar116 = *(long *)((long)puVar69 + 0x90);
            param_4 = *(long *)(lVar116 + 0xa0);
            goto LAB_003f0b30;
          }
LAB_003f0b69:
          lVar116 = lVar119 + uVar33 * 0x14;
          uVar29 = *(ushort *)(lVar119 + 0x10 + uVar33 * 0x14);
          uVar79 = 0;
          bVar153 = false;
          if (((((uVar29 & 0x20) != 0) && (bVar153 = false, (*(byte *)(lVar116 + 0xc) & 0x10) == 0))
              && ((*(char *)((long)puVar69 + 0xa0) != '\0' ||
                  (bVar153 = false, (uVar29 & 0x21f) != 0x201)))) &&
             ((*(char *)((long)puVar69 + 0xa1) != '\0' ||
              (bVar153 = false, (uVar29 & 0x11f) != 0x101)))) {
            bVar153 = (uVar29 & 0x40) == 0 || *(char *)((long)puVar69 + 0xa2) != '\0';
          }
          param_4 = *(long *)((long)puVar69 + 0xb8);
          if ((pthread_mutex_t *)param_4 != (pthread_mutex_t *)0x0) {
            uVar79 = *(ushort *)param_4 << 8 | *(ushort *)param_4 >> 8;
          }
          if (((*(uint *)(lVar119 + 4 + uVar33 * 0x14) & *(uint *)((long)puVar69 + 0x9c)) == 0) ||
             ((*(char *)((long)puVar69 + 0xa4) != '\0' &&
              (*(char *)((long)puVar69 + 0xa4) != *(char *)(lVar116 + 0xf))))) {
LAB_003f0c45:
            iVar31 = (int)uVar95;
            if (!bVar153) goto LAB_003f0a96;
            goto LAB_003f0c4e;
          }
          if (*(code **)((long)puVar69 + 0xa8) == (code *)0x0) {
            if (bVar153) goto LAB_003f0c4e;
          }
          else {
            *(undefined8 *)((long)puVar69 + -8) = 0x3f0c3d;
            cVar27 = (**(code **)((long)puVar69 + 0xa8))
                               (puVar100,uVar79,*(undefined8 *)((long)puVar69 + 0xb0));
            auVar274._8_8_ = extraout_XMM1_Qa_06;
            auVar274._0_8_ = extraout_XMM0_Qa_04;
            uVar95._4_4_ = 0;
            uVar95._0_4_ = *(uint *)((long)puVar69 + 0x30);
            if (cVar27 == '\0') goto LAB_003f0c45;
            param_4 = *(long *)((long)puVar69 + 0xb8);
          }
          uVar129 = auVar274._8_8_;
          if ((pthread_mutex_t *)param_4 != (pthread_mutex_t *)0x0) {
            *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              **)((long)puVar69 + 0xb8) =
                 (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)(param_4 + 2);
          }
          uVar88._0_4_ = *(uint *)(*(long *)((long)puVar69 + 0x38) +
                                  *(long *)((long)puVar69 + 0x40) * 4);
          lVar119 = *(long *)((long)puVar69 + 0x10);
          param_4._4_4_ = 0;
          param_4._0_4_ = (uint)uVar88 >> 4;
          phVar140 = *(hb_buffer_t **)((long)puVar69 + 0x20);
          if ((((*(ulong *)(lVar119 + 0xb0) >> (param_4 & 0x3f) & 1) == 0) ||
              ((*(ulong *)(lVar119 + 0xb8) >> ((ulong)(uint)uVar88 & 0x3f) & 1) == 0)) ||
             (param_4._4_4_ = 0, param_4._0_4_ = (uint)uVar88 >> 9,
             (*(ulong *)(lVar119 + 0xc0) >> (param_4 & 0x3f) & 1) == 0)) goto LAB_003f0d7d;
          uVar90 = *(uint *)((long)puVar69 + 0x88);
          puVar147._4_4_ = 0;
          puVar147._0_4_ = uVar90;
          phVar32._0_4_ = *(uint *)(*(long *)((long)puVar69 + 0x38) + (long)puVar147 * 0x14);
          param_4._4_4_ = 0;
          param_4._0_4_ = (uint)phVar32 >> 4;
          if (((((ulong)((pthread_mutex_t *)(lVar119 + 200))->__align >> (param_4 & 0x3f) & 1) == 0)
              || ((*(ulong *)(lVar119 + 0xd0) >> ((ulong)(uint)phVar32 & 0x3f) & 1) == 0)) ||
             (param_4._0_4_ = (uint)phVar32 >> 9, param_4._4_4_ = 0,
             (*(ulong *)(lVar119 + 0xd8) >> (param_4 & 0x3f) & 1) == 0)) goto LAB_003f0d7d;
          *(undefined8 *)((long)puVar69 + -8) = 0x3f0d79;
          param_4 = lVar119;
          uVar88._0_4_ = KerxSubTableFormat6<AAT::KerxSubTableHeader>::get_kerning
                                   (*(KerxSubTableFormat6<AAT::KerxSubTableHeader> **)
                                     ((long)puVar69 + 0x58),(uint)uVar88,(uint)phVar32,lVar119);
          auVar274._8_8_ = uVar129;
          auVar274._0_8_ = extraout_XMM0_Qa_06;
          if ((uint)uVar88 == 0) goto LAB_003f0d7d;
          if (*(int *)((long)puVar69 + 0x60) != 4) {
            iVar31 = (int)((ulong)((long)(short)(uint)uVar88 *
                                   *(long *)(*(long *)((long)puVar69 + 0x48) + 0x60) + 0x8000) >>
                          0x10);
            if (((ulong)puVar144 & 0x40000000) == 0) {
              param_4._0_4_ = iVar31 >> 1;
              param_4._4_4_ = 0;
              lVar116 = *(long *)((long)puVar69 + 0x50);
              piVar53 = (int *)(lVar116 + 4 + *(long *)((long)puVar69 + 0x40) * 4);
              *piVar53 = *piVar53 + (uint)param_4;
              piVar53 = (int *)(lVar116 + 4 + (long)puVar147 * 0x14);
              *piVar53 = *piVar53 + (iVar31 - (uint)param_4);
              piVar53 = (int *)(lVar116 + 0xc + (long)puVar147 * 0x14);
              *piVar53 = *piVar53 + (iVar31 - (uint)param_4);
              goto LAB_003f0e34;
            }
            param_4 = *(long *)((long)puVar69 + 0x50);
            *(int *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)(param_4 + 8) + (long)puVar147 * 0x14) = iVar31;
            goto LAB_003f0e28;
          }
          iVar31 = (int)((ulong)((long)(short)(uint)uVar88 *
                                 *(long *)(*(long *)((long)puVar69 + 0x48) + 0x58) + 0x8000) >> 0x10
                        );
          if (((ulong)puVar144 & 0x40000000) == 0) {
            param_4._0_4_ = iVar31 >> 1;
            param_4._4_4_ = 0;
            lVar116 = *(long *)((long)puVar69 + 0x50);
            *(int *)(lVar116 + *(long *)((long)puVar69 + 0x40) * 4) =
                 *(int *)(lVar116 + *(long *)((long)puVar69 + 0x40) * 4) + (uint)param_4;
            piVar53 = (int *)(lVar116 + (long)puVar147 * 0x14);
            *piVar53 = *piVar53 + (iVar31 - (uint)param_4);
            piVar53 = (int *)(lVar116 + 8 + (long)puVar147 * 0x14);
            *piVar53 = *piVar53 + (iVar31 - (uint)param_4);
          }
          else {
            param_4 = *(long *)((long)puVar69 + 0x50);
            *(int *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)(param_4 + 0xc) + (long)puVar147 * 0x14) = iVar31;
LAB_003f0e28:
            uVar90 = (uint)puVar147;
            *(byte *)(*(long *)((long)puVar69 + 0x20) + 0xc0) =
                 *(byte *)(*(long *)((long)puVar69 + 0x20) + 0xc0) | 8;
          }
LAB_003f0e34:
          phVar140 = *(hb_buffer_t **)((long)puVar69 + 0x20);
          *(undefined8 *)((long)puVar69 + -8) = 0x3f0e4c;
          auVar274 = hb_buffer_t::unsafe_to_break
                               (phVar140,*(uint *)((long)puVar69 + 0x30),uVar90 + 1);
          lVar119 = *(long *)((long)puVar69 + 0x10);
LAB_003f0d7d:
          uVar92._4_4_ = 0;
          uVar92._0_4_ = *(uint *)((long)puVar69 + 0x88);
        }
        else {
LAB_003f0a96:
          uVar92._0_4_ = iVar31 + 1;
          uVar92._4_4_ = 0;
          lVar119 = *(long *)((long)puVar69 + 0x10);
          phVar140 = *(hb_buffer_t **)((long)puVar69 + 0x20);
        }
      }
      auVar21 = auVar274;
    } while ((uint)uVar92 < *(uint *)((long)puVar69 + 0x2c));
  }
  *(undefined1 **)((long)puVar69 + -8) = &LAB_003f0e9e;
  hb_buffer_t::message
            (auVar21._0_8_,auVar21._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
             in_XMM6._0_8_,in_XMM7._0_8_,phVar140,*(undefined8 *)((long)puVar69 + 0x48),"end kern",
             param_4,param_5,param_6,*(undefined1 *)puVar69);
  goto LAB_003f0e9e;
code_r0x003ee93f:
  if ((*(byte *)(*(long *)(lVar119 + 8) + 0xa8) & 1) == 0) goto LAB_003f0ec0;
  puVar144._4_4_ = 0;
  puVar144._0_4_ = uVar90 << 0x18;
  if ((uVar90 << 0x18 & 0x10000000) != 0) goto LAB_003f0ec0;
  uVar33 = *(ulong *)(lVar119 + 0x80);
  if ((*(ulong *)(lVar119 + 0xb0) & uVar33) == 0) goto LAB_003f0ec0;
  if ((*(ulong *)(lVar119 + 0xb8) & *(ulong *)(lVar119 + 0x88)) == 0) goto LAB_003f0ec0;
  if (((((*(ulong *)(lVar119 + 0xc0) & *(ulong *)(lVar119 + 0x90)) == 0) ||
       ((((pthread_mutex_t *)(lVar119 + 200))->__align & uVar33) == 0)) ||
      ((*(ulong *)(lVar119 + 0xd0) & *(ulong *)(lVar119 + 0x88)) == 0)) ||
     ((*(ulong *)(lVar119 + 0x90) & *(ulong *)(lVar119 + 0xd8)) == 0)) goto LAB_003f0ec0;
  uVar92 = *(undefined8 *)(lVar119 + 0x10);
  uVar111 = *(undefined8 *)(lVar119 + 0x20);
  puVar69[2] = *(uint *)(*(long *)(lVar119 + 8) + 0xa0);
  puVar69[-2] = 0x3ee9ec;
  puVar69[-1] = 0;
  bVar153 = hb_buffer_t::message
                      (uVar42,uVar118,uVar44,uVar45,uVar97,uVar96,uVar66,uVar94,
                       (hb_buffer_t *)uVar111,uVar92,"start kern",uVar33,param_5,param_6,
                       (char)*puVar69);
  auVar279 = extraout_XMM0_02;
  if (!bVar153) goto LAB_003f0ec0;
  hVar7 = *(hb_buffer_t *)(uVar111 + 0x18);
  *(undefined8 *)(puVar69 + 8) = uVar111;
  if (((byte)hVar7 & 0x40) != 0) {
    uVar88._0_4_ = *(uint *)(uVar111 + 0x60);
    *(hb_buffer_t *)(uVar111 + 0xc0) = (hb_buffer_t)((byte)*(hb_buffer_t *)(uVar111 + 0xc0) | 0x20);
    if ((ulong)(uint)uVar88 != 0) {
      lVar116 = *(long *)(uVar111 + 0x70);
      if ((ulong)(uint)uVar88 - 1 < 3) {
        uVar33 = 0;
      }
      else {
        pbVar136 = (byte *)(lVar116 + 0x40);
        uVar33 = 0;
        do {
          pbVar136[-0x3c] = pbVar136[-0x3c] | 2;
          pbVar136[-0x28] = pbVar136[-0x28] | 2;
          pbVar136[-0x14] = pbVar136[-0x14] | 2;
          *pbVar136 = *pbVar136 | 2;
          uVar33 = uVar33 + 4;
          pbVar136 = pbVar136 + 0x50;
        } while (((uint)uVar88 & 0xfffffffc) != uVar33);
      }
      lVar119 = *(long *)(puVar69 + 4);
      uVar111 = *(undefined8 *)(puVar69 + 8);
      if ((ulong)((uint)uVar88 & 3) != 0) {
        lVar34 = 0;
        do {
          pbVar136 = (byte *)(lVar116 + uVar33 * 0x14 + 4 + lVar34);
          *pbVar136 = *pbVar136 | 2;
          lVar34 = lVar34 + 0x14;
        } while ((ulong)((uint)uVar88 & 3) * 0x14 != lVar34);
      }
    }
  }
  puVar50 = &_hb_NullPool;
  puVar69[-2] = 0x3eea22;
  puVar69[-1] = 0;
  OT::hb_ot_apply_context_t::hb_ot_apply_context_t
            ((hb_ot_apply_context_t *)(puVar69 + 0x20),1,uVar92,(undefined4 *)uVar111,
             (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
  in_XMM1._8_8_ = extraout_XMM1_Qb_00;
  in_XMM1._0_8_ = extraout_XMM1_Qa_00;
  uVar90 = puVar69[2];
  param_6._4_4_ = 0;
  param_6._0_4_ = uVar90;
  puVar69[0x6b] = uVar90;
  puVar69[0x72] = 0xffffffff;
  puVar69[0x73] = 0;
  *(undefined8 *)(puVar69 + 0x12) = uVar92;
  uVar92._1_7_ = (undefined7)((ulong)uVar92 >> 8);
  uVar92._0_1_ = *(undefined1 *)((long)puVar69 + 0x1be);
  lVar34._1_7_ = 0;
  lVar34._0_1_ = *(byte *)((long)puVar69 + 0x1bf);
  if (puVar69[0x42] != 0) {
    lVar34 = 0;
  }
  uVar129 = puVar69 + 0x2a;
  auVar279 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar69 + 0x3a) = (undefined1  [16])0x0;
  puVar69[0x3e] = 0;
  puVar69[0x3f] = 0;
  param_5._1_7_ = (undefined7)((ulong)puVar50 >> 8);
  param_5._0_1_ = *(char *)((long)puVar69 + 0x1bd) != '\0';
  bVar153 = puVar69[0x42] == 1;
  *(undefined1 *)((long)puVar69 + 0xe1) = 1;
  *(bool *)((long)puVar69 + 0xe2) = bVar153;
  puVar69[0x6d] = 8;
  lVar116 = (long)(puVar69 + 0x20);
  *(long *)(puVar69 + 0x24) = lVar116;
  param_4._4_4_ = 0;
  param_4._0_4_ = *(uint *)(*(long *)(puVar69 + 0x48) + 0x60);
  puVar69[0x30] = *(uint *)(*(long *)(puVar69 + 0x48) + 0x60);
  *(undefined1 (*) [16])uVar129 = (undefined1  [16])0x0;
  puVar69[0x2e] = 0;
  puVar69[0x2f] = 0;
  puVar69[0x26] = 8;
  *(bool *)(puVar69 + 0x28) = bVar153;
  *(undefined1 *)((long)puVar69 + 0xa1) = *(undefined1 *)((long)puVar69 + 0x1be);
  *(bool *)((long)puVar69 + 0xa2) = bVar153;
  uVar88._1_7_ = 0;
  uVar88._0_1_ = bVar153;
  puVar69[0x27] = uVar90;
  *(char *)((long)puVar69 + 0xa3) = (char)lVar34;
code_r0x003eeb06:
  *(undefined1 *)((long)puVar69 + 0xa4) = 0;
  *(long *)((long)puVar69 + 0xd0) = lVar116;
  *(int *)((long)puVar69 + 0x100) = (int)param_4;
  *(undefined1 (*) [16])(uVar129 + 0x40) = auVar279;
  ((pthread_mutex_t *)(uVar129 + 0x50))->__align = 0;
  *(bool *)((long)puVar69 + 0xe2) = bVar153;
  uVar66 = (pthread_mutex_t *)0xffffffff00000008;
  *(undefined8 *)((long)puVar69 + 0xd8) = 0xffffffff00000008;
  *(byte *)((long)puVar69 + 0xe0) = (byte)uVar88 | (byte)param_5;
  *(undefined1 *)((long)puVar69 + 0xe1) = 1;
  *(char *)((long)puVar69 + 0xe3) = (char)lVar34;
  *(undefined1 *)((long)puVar69 + 0xe4) = 0;
  iVar31 = *(int *)(uVar111 + 0x60);
  *(int *)((long)puVar69 + 0x2c) = iVar31;
  if (iVar31 != 0) goto code_r0x003eeb74;
  goto LAB_003f0e70;
code_r0x003eeb74:
  *(uint *)((long)puVar69 + 0x60) = *(uint *)(uVar111 + 0x38) & 0xfffffffe;
  goto code_r0x003eeb7e;
LAB_003f0554:
  do {
    uVar91 = (uint)((int)in_R11 + iVar31) >> 1;
    lVar34 = (ulong)uVar91 * 6;
    uVar29 = *(ushort *)(in_R10 + 0x1c + lVar34);
    uVar122 = (uint)(ushort)(uVar29 << 8 | uVar29 >> 8);
    if (uVar90 != uVar122) {
      if (uVar122 <= uVar90) goto LAB_003f0590;
LAB_003f0549:
      in_R11 = (uint *)(ulong)(uVar91 - 1);
      if ((int)(uVar91 - 1) < iVar31) break;
      goto LAB_003f0554;
    }
    uVar29 = *(ushort *)(in_R10 + 0x1e + lVar34);
    uVar122 = (uint)(ushort)(uVar29 << 8 | uVar29 >> 8);
    if (uVar64 < uVar122) goto LAB_003f0549;
    if (uVar64 == uVar122) {
      puVar50 = (undefined4 *)(in_R10 + (ulong)uVar91 * 6 + 0x1c);
      goto LAB_003f05af;
    }
LAB_003f0590:
    iVar31 = uVar91 + 1;
  } while (iVar31 <= (int)in_R11);
  puVar50 = &_hb_NullPool;
LAB_003f05af:
  uVar90 = (uint)(short)(*(ushort *)(puVar50 + 1) << 8 | *(ushort *)(puVar50 + 1) >> 8);
  puVar148 = (ushort *)(ulong)uVar90;
  if (((pthread_mutex_t *)lVar119 != (pthread_mutex_t *)0x0) &&
     (uVar64 = *(uint *)(in_R10 + 8), uVar64 != 0)) {
    uVar90 = uVar64 >> 0x18 | (uVar64 & 0xff0000) >> 8 | (uVar64 & 0xff00) << 8 | uVar64 << 0x18;
    if ((CARRY4(uVar90,uVar90)) ||
       (((puVar148 = (ushort *)((long)puVar148 + in_R10),
         (ulong)*(uint *)(lVar119 + 0x40) < (ulong)((long)puVar148 - *(long *)(lVar119 + 0x30)) ||
         ((uint)(*(int *)(lVar119 + 0x38) - (int)puVar148) < uVar90 * 2)) ||
        (iVar31 = *(int *)(lVar119 + 0x44) + uVar90 * -2, *(int *)(lVar119 + 0x44) = iVar31,
        iVar31 < 1)))) goto LAB_003f05cb;
    uVar90 = (uint)(short)(*puVar148 << 8 | *puVar148 >> 8);
    puVar148 = (ushort *)(ulong)uVar90;
  }
  if (uVar90 == 0) goto LAB_003f05cb;
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
  if (*(int *)((long)puVar69 + 0x48) == 4) {
    iVar31 = (int)((ulong)((long)(short)puVar148 * *(long *)(*(long *)((long)puVar69 + 0x40) + 0x58)
                          + 0x8000) >> 0x10);
    if (((ulong)puVar144 & 0x40000000) != 0) {
      puVar148 = *(ushort **)((long)puVar69 + 0x60);
      *(int *)(puVar148 + uVar33 * 10 + 6) = iVar31;
      goto LAB_003f06b1;
    }
    uVar90 = iVar31 >> 1;
    puVar148 = (ushort *)(ulong)uVar90;
    lVar119 = *(long *)((long)puVar69 + 0x60);
    piVar53 = (int *)(lVar119 + lVar116 * 4);
    *piVar53 = *piVar53 + uVar90;
    piVar53 = (int *)(lVar119 + uVar33 * 0x14);
    *piVar53 = *piVar53 + (iVar31 - uVar90);
    piVar53 = (int *)(lVar119 + 8 + uVar33 * 0x14);
    *piVar53 = *piVar53 + (iVar31 - uVar90);
  }
  else {
    iVar31 = (int)((ulong)((long)(short)puVar148 * *(long *)(*(long *)((long)puVar69 + 0x40) + 0x60)
                          + 0x8000) >> 0x10);
    if (((ulong)puVar144 & 0x40000000) == 0) {
      uVar90 = iVar31 >> 1;
      puVar148 = (ushort *)(ulong)uVar90;
      lVar119 = *(long *)((long)puVar69 + 0x60);
      piVar53 = (int *)(lVar119 + 4 + lVar116 * 4);
      *piVar53 = *piVar53 + uVar90;
      piVar53 = (int *)(lVar119 + 4 + uVar33 * 0x14);
      *piVar53 = *piVar53 + (iVar31 - uVar90);
      piVar53 = (int *)(lVar119 + 0xc + uVar33 * 0x14);
      *piVar53 = *piVar53 + (iVar31 - uVar90);
    }
    else {
      puVar148 = *(ushort **)((long)puVar69 + 0x60);
      *(int *)(puVar148 + uVar33 * 10 + 4) = iVar31;
LAB_003f06b1:
      *(byte *)(*(long *)((long)puVar69 + 0x20) + 0xc0) =
           *(byte *)(*(long *)((long)puVar69 + 0x20) + 0xc0) | 8;
    }
  }
  *(undefined8 *)((long)puVar69 + -8) = 0x3f06ca;
  auVar279 = hb_buffer_t::unsafe_to_break
                       (*(hb_buffer_t **)((long)puVar69 + 0x20),(uint)uVar88,(uint)phVar32 + 1);
  in_XMM1._0_8_ = auVar279._8_8_;
  in_XMM1._8_8_ = extraout_XMM1_Qb_07;
  auVar279._8_8_ = extraout_XMM0_Qb_05;
  lVar119 = *(long *)((long)puVar69 + 0x10);
LAB_003f05cb:
  uVar92._4_4_ = 0;
  uVar92._0_4_ = *(uint *)((long)puVar69 + 0x88);
LAB_003f0254:
  uVar42 = in_XMM1._0_8_;
  uVar111 = auVar279._0_8_;
  if (*(uint *)((long)puVar69 + 0x2c) <= (uint)uVar92) goto LAB_003f0e56;
  goto LAB_003f025e;
LAB_003f0e56:
  *(undefined8 *)((long)puVar69 + -8) = 0x3f0e6e;
  hb_buffer_t::message
            (uVar111,uVar42,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,in_XMM6._0_8_,
             in_XMM7._0_8_,*(hb_buffer_t **)((long)puVar69 + 0x20),
             *(undefined8 *)((long)puVar69 + 0x40),"end kern",puVar148,param_5,param_6,
             *(undefined1 *)puVar69);
  goto LAB_003f0e9e;
code_r0x003eb4ed:
  do {
    *(ulong *)puVar147 = *(ulong *)puVar147 | 1L << ((byte)((ulong)lVar34 >> 4) & 0x3f);
    *(ulong *)((long)puVar147 + 8) = *(ulong *)((long)puVar147 + 8) | 1L << ((byte)lVar34 & 0x3f);
    uVar43._0_4_ = (uint)lVar34 >> 9;
    uVar43._4_4_ = 0;
    *(ulong *)((long)puVar147 + 0x10) =
         *(ulong *)((long)puVar147 + 0x10) | 1L << ((byte)(uint)uVar43 & 0x3f);
    do {
      if ((int)uVar129 == (int)uVar88) {
        return (pthread_mutex_t *)uVar43;
      }
      uVar29 = *(ushort *)(uVar92 + 4);
      uVar88._0_4_ = (int)uVar88 + 1;
      uVar88._4_4_ = 0;
      uVar79 = uVar29 << 8 | uVar29 >> 8;
      iVar121 = 0;
      if (uVar29 != 0) {
        iVar121 = -(uint)(*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                      *)(uVar92 + 0xc) +
                                    (uint)(ushort)(*(ushort *)(uVar92 + 2) << 8 |
                                                  *(ushort *)(uVar92 + 2) >> 8) *
                                    ((uint)uVar79 + iVar31)) == -1);
      }
      uVar111 = param_6;
      if ((uint)uVar88 < iVar121 + (uint)uVar79) {
        uVar111 = (ulong)((ushort)(*(ushort *)(uVar92 + 2) << 8 | *(ushort *)(uVar92 + 2) >> 8) *
                         (uint)uVar88) + lVar116;
      }
      uVar29 = *(ushort *)uVar111;
      uVar43._2_6_ = 0;
      uVar43._0_2_ = uVar29;
    } while (uVar29 == 0xffff);
    lVar34._0_2_ = uVar29 << 8 | uVar29 >> 8;
    lVar34._2_6_ = 0;
  } while( true );
code_r0x003eafcc:
  *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
    *)(uVar111 + -0x162eeff4) =
       (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
        )((char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)(uVar111 + -0x162eeff4) + (char)param_4);
  uVar29 = (ushort)((__pthread_mutex_s *)(uVar129 + in_R10 * param_4))->__lock;
  uVar90 = (uint)(ushort)(uVar29 << 8 | uVar29 >> 8);
  iVar121 = (int)param_4;
  if (uVar91 < uVar90) {
    lVar34._4_4_ = 0;
    lVar34._0_4_ = iVar121 - 1U;
    if ((int)(iVar121 - 1U) < (int)uVar88) goto LAB_003eb0c6;
  }
  else {
    if (uVar90 == uVar91) {
      param_6 = uVar129 + (ulong)(uint)(iVar121 * iVar31);
LAB_003eb0c6:
      ppVar117 = (pthread_mutex_t *)(param_6 + 2);
      if ((pthread_mutex_t *)param_6 == (pthread_mutex_t *)0x0) {
        ppVar117 = (pthread_mutex_t *)0x0;
      }
      return ppVar117;
    }
    uVar88._4_4_ = 0;
    uVar88._0_4_ = iVar121 + 1U;
    if ((int)lVar34 < (int)(iVar121 + 1U)) goto LAB_003eb0c6;
  }
  param_4._0_4_ = (uint)((int)lVar34 + (int)uVar88) >> 1;
  param_4._4_4_ = 0;
  goto code_r0x003eafcc;
LAB_003e7a1d:
  if (puVar100 == (uint *)0x0) {
    puVar100 = (uint *)0x0;
LAB_003e7a82:
    uStack_40 = 0x3e7a97;
    pLVar35 = Lookup<OT::HBGlyphID16>::get_value
                        ((Lookup<OT::HBGlyphID16> *)(unaff_R13 + 0xc),
                         *(uint *)(lVar116 + (long)ppVar117 * 0x14),0x5e0158);
    uVar36 = (pthread_mutex_t *)0x0;
    if (pLVar35 != (Lookup<OT::HBGlyphID16> *)0x0) {
      uVar29 = *(ushort *)pLVar35;
      uVar79 = uVar29 << 8 | uVar29 >> 8;
      *(uint *)(lVar116 + (long)ppVar117 * 0x14) = (uint)uVar79;
      *(ulong *)(unaff_RBX + 0x80) =
           *(ulong *)(unaff_RBX + 0x80) | 1L << ((byte)(uVar79 >> 4) & 0x3f);
      *(ulong *)(unaff_RBX + 0x88) =
           *(ulong *)(unaff_RBX + 0x88) | 1L << ((byte)(uVar29 >> 8) & 0x3f);
      uVar36 = 1L << ((byte)uVar29 >> 1 & 0x3f);
      *(ulong *)(unaff_RBX + 0x90) = *(ulong *)(unaff_RBX + 0x90) | uVar36;
      if (((char)unaff_R12D & (byte)uVar92) != 0) {
        uStack_40 = 0x3e7b02;
        uVar36._0_4_ = OT::GDEF::get_glyph_props((GDEF *)uStack_38,(uint)uVar79);
        uVar36._4_4_ = 0;
        *(short *)(lVar116 + 0xc + (long)ppVar117 * 0x14) = (short)(uint)uVar36;
      }
    }
  }
  else {
    uVar88._0_4_ = *(uint *)(lVar116 + 8 + (long)ppVar117 * 0x14);
    puVar144 = puVar100 + 3;
    puVar69 = puVar100;
    do {
      puVar69 = puVar69 + -3;
      puVar100 = puVar144 + -2;
      puVar144 = puVar144 + -3;
    } while ((uint)uVar88 < *puVar100);
    do {
      puVar100 = puVar69 + 3;
      puVar144 = puVar69 + 5;
      puVar69 = puVar100;
    } while (*puVar144 < (uint)uVar88);
    uVar36._4_4_ = 0;
    uVar36._0_4_ = *(uint *)(unaff_RBX + 0xe0);
    if ((*puVar100 & *(uint *)(unaff_RBX + 0xe0)) != 0) goto LAB_003e7a82;
  }
  ppVar117 = (pthread_mutex_t *)(ppVar117->__size + 1);
  if (ppVar117 == (pthread_mutex_t *)puVar147) {
    return (pthread_mutex_t *)uVar36;
  }
  goto LAB_003e7a1d;
LAB_003ea310:
  if (*(char *)(lVar119 + 0x5a) == '\0') goto LAB_003ea340;
  pvVar57 = *(void **)&((pthread_mutex_t *)(lVar119 + 0x78))->__data;
  pvVar123 = *(void **)(lVar119 + 0x70);
  if ((pvVar57 == pvVar123) && (*(uint *)(lVar119 + 100) == uVar90)) {
    uStack_38._0_4_ = uVar30;
    uVar92 = unaff_RBX;
    uVar88._0_4_ = uVar90;
    goto LAB_003ea3d9;
  }
  uVar88._0_4_ = *(uint *)(lVar119 + 100) + 1;
  if (((uint)uVar88 == 0) || ((uint)uVar88 < *(uint *)(lVar119 + 0x68))) {
    if (pvVar57 != pvVar123) goto LAB_003ea3ab;
    goto LAB_003ea35c;
  }
  uStack_40 = (pthread_mutex_t *)0x3ea563;
  uVar129 = hb_buffer_t::enlarge((hb_buffer_t *)lVar119,(uint)uVar88);
  if ((char)uVar129 == '\0') {
    uStack_38._0_4_ = uVar30;
    phVar32._0_4_ = (uint)uVar29;
    cVar27 = *(char *)(lVar119 + 0x58);
    uVar92 = unaff_RBX;
    goto joined_r0x003e999c;
  }
  pvVar57 = *(void **)&ppVar114->__data;
  pvVar123 = *(void **)&ppVar117->__data;
  if (pvVar57 == pvVar123) {
LAB_003ea35c:
    phVar32._0_4_ = (uint)uVar29;
    uVar88._0_4_ = *(uint *)(lVar119 + 100);
    if (*(int *)(lVar119 + 0x5c) + 1U < (uint)uVar88 + 1) {
      pvVar57 = *(void **)(lVar119 + 0x80);
      *(void **)&((pthread_mutex_t *)(lVar119 + 0x78))->__data = pvVar57;
      uStack_38._0_4_ = uVar30;
      uVar92 = unaff_RBX;
LAB_003ea37d:
      if ((uint)uVar88 != 0) {
        uStack_40 = (pthread_mutex_t *)0x3ea393;
        memcpy(pvVar57,pvVar123,(ulong)(uint)uVar88 * 0x14);
        pvVar123 = *(void **)&ppVar117->__data;
        pvVar57 = *(void **)&ppVar114->__data;
      }
      goto LAB_003ea3af;
    }
    pvVar57 = pvVar123;
  }
LAB_003ea3ab:
  phVar32._0_4_ = (uint)uVar29;
  uStack_38._0_4_ = uVar30;
  uVar92 = unaff_RBX;
  goto LAB_003ea3af;
LAB_003ea340:
  uStack_38._0_4_ = uVar30;
  uVar92 = unaff_RBX;
  goto LAB_003ea3e2;
LAB_003e7b40:
  phVar32._0_4_ = *(uint *)(lVar119 + 0x60);
  if ((pthread_mutex_t *)uVar92 == (pthread_mutex_t *)0x0) {
    uVar92 = &((pthread_mutex_t *)0x0)->__data;
LAB_003e7c32:
    if ((uint)uVar88 < (uint)phVar32) {
      uVar88._0_4_ = *(uint *)(*(long *)(lVar119 + 0x70) + (ulong)(uint)uVar88 * 0x14);
      if ((ulong)(uint)uVar88 == 0xffff) {
        uVar33 = 2;
      }
      else {
        uVar33 = 1;
        if ((((*(ulong *)(unaff_RBX + 0x98) >> ((ulong)((uint)uVar88 >> 4) & 0x3f) & 1) != 0) &&
            (((ulong)((pthread_mutex_t *)(unaff_RBX + 0xa0))->__align >>
              ((ulong)(uint)uVar88 & 0x3f) & 1) != 0)) &&
           ((*(ulong *)(unaff_RBX + 0xa8) >> ((ulong)((uint)uVar88 >> 9) & 0x3f) & 1) != 0)) {
          phVar32._0_4_ = *(uint *)(unaff_R13 + 0x10);
          uStack_40 = 0x3e7ca6;
          pLVar46 = Lookup<OT::IntType<unsigned_short,2u>>::get_value
                              ((Lookup<OT::IntType<unsigned_short,2u>> *)
                               ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                 *)(unaff_R13 +
                                   (ulong)((uint)phVar32 >> 0x18 | ((uint)phVar32 & 0xff0000) >> 8 |
                                           ((uint)phVar32 & 0xff00) << 8 | (uint)phVar32 << 0x18)) +
                               0xc),(uint)uVar88,in_stack_00000038);
          if (pLVar46 != (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
            uVar33 = (ulong)(ushort)(*(ushort *)pLVar46 << 8 | *(ushort *)pLVar46 >> 8);
          }
        }
      }
    }
    else {
      uVar33 = 0;
    }
    uVar88._0_4_ = *(uint *)(unaff_R13 + 0xc);
    uVar64 = (uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 | ((uint)uVar88 & 0xff00) << 8 |
             (uint)uVar88 << 0x18;
    uVar122 = (uint)uVar33;
    phVar32._0_4_ = uVar122;
    if (uVar64 <= uVar122) {
      phVar32._0_4_ = 1;
    }
    uVar91 = *(uint *)(unaff_R13 + 0x14);
    uVar63 = *(uint *)(unaff_R13 + 0x18);
    phVar81 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
               *)((ulong)(uVar91 >> 0x18 | (uVar91 & 0xff0000) >> 8 | (uVar91 & 0xff00) << 8 |
                         uVar91 << 0x18) + unaff_R13);
    phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                *)(unaff_R13 +
                  (ulong)(uVar63 >> 0x18 | (uVar63 & 0xff0000) >> 8 | (uVar63 & 0xff00) << 8 |
                         uVar63 << 0x18));
    uVar38 = (long)phVar107 + 0xc;
    uVar152 = (ulong)(ushort)(*(ushort *)
                               (phVar81 + (ulong)((uint)phVar32 + uVar64 * uVar90) * 2 + 0xc) << 8 |
                             *(ushort *)
                              (phVar81 + (ulong)((uint)phVar32 + uVar64 * uVar90) * 2 + 0xc) >> 8);
    uVar29 = *(ushort *)(uVar38 + uVar152 * 4);
    uVar79 = *(ushort *)(phVar107 + uVar152 * 4 + 0xe);
    phVar32._0_4_ = (uint)uStack_38;
    if (((uVar79 & 0xf00) == 0) || ((uint)phVar32 <= (uint)uVar30)) {
      if ((uVar90 != 0) && (((uVar79 & 0x40) == 0 || (uVar29 != 0)))) {
        if (uVar64 <= uVar122) {
          uVar33 = 1;
        }
        uVar33 = (ulong)(ushort)(*(ushort *)(phVar81 + uVar33 * 2 + 0xc) << 8 |
                                *(ushort *)(phVar81 + uVar33 * 2 + 0xc) >> 8);
        if (((((*(ushort *)(phVar107 + uVar33 * 4 + 0xe) & 0xf00) != 0) &&
             ((uint)uVar30 < (uint)phVar32)) || (uVar29 != *(ushort *)(uVar38 + uVar33 * 4))) ||
           (((*(ushort *)(phVar107 + uVar33 * 4 + 0xe) ^ uVar79) & 0x40) != 0)) goto LAB_003e7dc0;
      }
      if ((((byte)phVar107[(ulong)(ushort)(*(ushort *)
                                            (phVar81 +
                                            (ulong)((uint)((uint)uVar88 == 0) + uVar64 * uVar90) * 2
                                            + 0xc) << 8 |
                                          *(ushort *)
                                           (phVar81 +
                                           (ulong)((uint)((uint)uVar88 == 0) + uVar64 * uVar90) * 2
                                           + 0xc) >> 8) * 4 + 0xf] & 0xf) != 0) &&
         ((uint)uVar30 < (uint)phVar32)) goto LAB_003e7dc0;
    }
    else {
LAB_003e7dc0:
      uVar88._0_4_ = *(uint *)(lVar119 + 0x5c);
      uVar90 = (uint)uVar88;
      if (*(char *)(lVar119 + 0x5a) != '\0') {
        uVar90 = *(uint *)(lVar119 + 100);
      }
      if ((uVar90 != 0) && ((uint)uVar88 < *(uint *)(lVar119 + 0x60))) {
        uStack_40 = 0x3e7df4;
        hb_buffer_t::_set_glyph_flags((hb_buffer_t *)lVar119,3,uVar90 - 1,(uint)uVar88 + 1,'\x01');
        uVar79 = *(ushort *)(phVar107 + uVar152 * 4 + 0xe);
      }
    }
    uVar128 = uVar79 >> 8;
    if ((uVar79 << 8 & 0x8000) != 0) {
      uVar30 = *(uint *)(lVar119 + 0x5c);
    }
    if ((uVar79 << 8 & 0x2000) != 0) {
      uVar88._0_4_ = *(int *)(lVar119 + 0x5c) + 1;
      if (*(uint *)(lVar119 + 0x60) < (uint)uVar88) {
        uVar88._0_4_ = *(uint *)(lVar119 + 0x60);
      }
      uStack_38._4_4_ = 0;
      uStack_38._0_4_ = (uint)uVar88;
    }
    uVar37 = (ulong)uVar128 & 0xf;
    if ((uVar128 & 0xf) != 0) {
      uVar37 = (ulong)uVar128 & 0xf;
      uVar88._0_4_ = (uint)uStack_38 - uVar30;
      if ((uint)uVar30 < (uint)uStack_38) {
        bVar78 = (&DAT_005de390)[uVar37];
        uVar37._0_4_ = CONCAT31(0,bVar78 >> 4);
        uVar37._4_4_ = 0;
        uVar33 = 2;
        if ((uint)uVar37 < 2) {
          uVar33 = (ulong)(uint)uVar37;
        }
        phVar32._0_4_ = bVar78 & 0xf;
        uVar90 = 2;
        if ((uint)phVar32 < 2) {
          uVar90 = (uint)phVar32;
        }
        if ((uint)uVar88 < 0x41) {
          phVar32._0_4_ = (uint)uVar33;
          if ((uint)phVar32 + uVar90 <= (uint)uVar88) {
            uVar64 = *(int *)(lVar119 + 0x5c) + 1;
            if (*(uint *)(lVar119 + 0x60) < uVar64) {
              uVar64 = *(uint *)(lVar119 + 0x60);
            }
            if (1 < uVar64 - uVar30) {
              uStack_40 = &LAB_003e7ef1;
              hb_buffer_t::merge_clusters_impl((hb_buffer_t *)lVar119,uVar30,uVar64);
            }
            if (1 < (uint)uVar88) {
              uStack_40 = &LAB_003e7f08;
              hb_buffer_t::merge_clusters_impl((hb_buffer_t *)lVar119,uVar30,(uint)uStack_38);
            }
            lVar116 = *(long *)(lVar119 + 0x70);
            pauVar67 = (undefined1 (*) [16])(lVar116 + (ulong)(uint)uVar30 * 0x14);
            if ((uint)phVar32 != 0) {
              uStack_40 = &LAB_003e7f49;
              memcpy(&uStack0000000000000058,pauVar67,uVar33 * 0x14);
            }
            uVar146 = (ulong)uVar90;
            uVar129 = uVar146 * 4;
            uVar76 = uStack_38 & 0xffffffff;
            if (uVar90 != 0) {
              uStack_40 = 0x3e7f99;
              uVar129 = memcpy(&uStack0000000000000080,
                               (void *)(lVar116 + uVar76 * 0x14 + uVar146 * -0x14),uVar146 * 0x14);
            }
            if ((uint)phVar32 != uVar90) {
              uStack_40 = &LAB_003e7fd8;
              uVar129 = memmove((void *)((long)pauVar67 + uVar146 * 0x14),
                                (void *)((long)pauVar67 + uVar33 * 0x14),
                                (ulong)((int)uStack_38 - ((uint)phVar32 + uVar90 + uVar30)) * 0x14);
            }
            if (uVar90 != 0) {
              uStack_40 = &LAB_003e7ff4;
              uVar129 = memcpy(pauVar67,&uStack0000000000000080,uVar146 * 0x14);
            }
            if ((uint)phVar32 != 0) {
              uStack_40 = &LAB_003e8028;
              uVar129 = memcpy((void *)(lVar116 + uVar76 * 0x14 + uVar33 * -0x14),
                               &uStack0000000000000058,uVar33 * 0x14);
            }
            bVar153 = (uint)uVar37 == 3;
            uVar37 = uVar129;
            if (bVar153) {
              uVar33 = (ulong)((int)uStack_38 - 1);
              uStack0000000000000068 = *(uint *)(lVar116 + 0x10 + uVar33 * 0x14);
              pauVar2 = (undefined1 (*) [16])(lVar116 + uVar33 * 0x14);
              in_stack_00000060 = *(undefined8 *)(*pauVar2 + 8);
              auVar279 = *pauVar2;
              uStack0000000000000058._0_4_ = (uint)*(undefined8 *)*pauVar2;
              uStack0000000000000058._4_4_ = (undefined4)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
              uVar146 = (ulong)((int)uStack_38 - 2);
              *(undefined4 *)(lVar116 + 0x10 + uVar33 * 0x14) =
                   *(undefined4 *)(lVar116 + 0x10 + uVar146 * 0x14);
              puVar131 = (undefined8 *)(lVar116 + uVar146 * 0x14);
              uVar129 = puVar131[1];
              puVar84 = (undefined8 *)(lVar116 + uVar33 * 0x14);
              *puVar84 = *puVar131;
              puVar84[1] = uVar129;
              uVar37._4_4_ = 0;
              uVar37._0_4_ = uStack0000000000000068;
              *(uint *)(lVar116 + 0x10 + uVar146 * 0x14) = uStack0000000000000068;
              *(undefined1 (*) [16])(lVar116 + uVar146 * 0x14) = auVar279;
            }
            if ((bVar78 & 0xf) == 3) {
              uStack0000000000000068 = *(uint *)pauVar67[1];
              in_stack_00000060 = *(undefined8 *)((long)*pauVar67 + 8);
              auVar279 = *pauVar67;
              uStack0000000000000058._0_4_ = (uint)*(undefined8 *)*pauVar67;
              uStack0000000000000058._4_4_ = (undefined4)((ulong)*(undefined8 *)*pauVar67 >> 0x20);
              uVar33 = (ulong)(uVar30 + 1);
              uVar37 = uVar33 * 5;
              *(undefined4 *)pauVar67[1] = *(undefined4 *)(lVar116 + 0x10 + uVar33 * 0x14);
              puVar131 = (undefined8 *)(lVar116 + uVar33 * 0x14);
              uVar129 = puVar131[1];
              *(undefined8 *)*pauVar67 = *puVar131;
              *(undefined8 *)((long)*pauVar67 + 8) = uVar129;
              *(uint *)(lVar116 + 0x10 + uVar33 * 0x14) = uStack0000000000000068;
              *(undefined1 (*) [16])(lVar116 + uVar33 * 0x14) = auVar279;
            }
          }
        }
      }
    }
    uVar88._0_4_ = *(uint *)(lVar119 + 0x5c);
    if ((uint)uVar88 == *(uint *)(lVar119 + 0x60)) {
      return (pthread_mutex_t *)uVar37;
    }
    if (*(char *)(lVar119 + 0x58) == '\0') {
      return (pthread_mutex_t *)uVar37;
    }
    uVar90 = (uint)(ushort)(uVar29 << 8 | uVar29 >> 8);
    if (((byte)phVar107[uVar152 * 4 + 0xe] & 0x40) == 0) {
LAB_003e8130:
      if (*(char *)(lVar119 + 0x5a) == '\0') goto LAB_003e81e3;
      pvVar123 = *(void **)&((pthread_mutex_t *)(lVar119 + 0x78))->__data;
      pvVar57 = *(void **)(lVar119 + 0x70);
      if ((pvVar123 == pvVar57) && (*(uint *)(lVar119 + 100) == (uint)uVar88)) goto LAB_003e8150;
      uVar88._0_4_ = *(uint *)(lVar119 + 100) + 1;
      if (((uint)uVar88 == 0) || ((uint)uVar88 < *(uint *)(lVar119 + 0x68))) {
        if (pvVar123 == pvVar57) {
LAB_003e816a:
          uVar88._0_4_ = *(uint *)(lVar119 + 100);
          if ((uint)uVar88 + 1 <= *(int *)(lVar119 + 0x5c) + 1U) goto LAB_003e81a9;
          pvVar123 = *(void **)(lVar119 + 0x80);
          *(void **)&((pthread_mutex_t *)(lVar119 + 0x78))->__data = pvVar123;
          if ((uint)uVar88 != 0) goto LAB_003e818b;
        }
      }
      else {
        uStack_40 = 0x3e822f;
        uVar38 = hb_buffer_t::enlarge((hb_buffer_t *)lVar119,(uint)uVar88);
        if ((char)uVar38 == '\0') goto LAB_003e81ea;
        pvVar57 = *(void **)(lVar119 + 0x70);
        pvVar123 = *(void **)&((pthread_mutex_t *)(lVar119 + 0x78))->__data;
        if (pvVar123 == pvVar57) goto LAB_003e816a;
      }
LAB_003e81b0:
      uVar88._0_4_ = *(uint *)(lVar119 + 0x5c);
      phVar32._0_4_ = *(uint *)(lVar119 + 100);
      *(undefined4 *)((long)pvVar123 + (ulong)(uint)phVar32 * 0x14 + 0x10) =
           *(undefined4 *)((long)pvVar57 + (ulong)(uint)uVar88 * 0x14 + 0x10);
      *(undefined1 (*) [16])((long)pvVar123 + (ulong)(uint)phVar32 * 0x14) =
           *(undefined1 (*) [16])((long)pvVar57 + (ulong)(uint)uVar88 * 0x14);
      uVar88._0_4_ = *(uint *)(lVar119 + 0x5c);
      phVar32._0_4_ = *(uint *)(lVar119 + 100);
LAB_003e81da:
      uVar38._4_4_ = 0;
      uVar38._0_4_ = (uint)uVar88;
      *(uint *)(lVar119 + 100) = (uint)phVar32 + 1;
      goto LAB_003e81e3;
    }
    phVar32._0_4_ = (((pthread_mutex_t *)(lVar119 + 200))->__data).__lock;
    uVar38._4_4_ = 0;
    uVar38._0_4_ = (uint)phVar32;
    (((pthread_mutex_t *)(lVar119 + 200))->__data).__lock = (uint)phVar32 - 1;
    if ((int)(uint)phVar32 < 1) goto LAB_003e8130;
  }
  else {
    if ((uint)uVar88 < (uint)phVar32) {
      uVar64 = *(uint *)(*(long *)(lVar119 + 0x70) + 8 + (ulong)(uint)uVar88 * 0x14);
      phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)(uVar92 + 0xc);
      uVar129 = uVar92;
      do {
        uVar129 = uVar129 + -0xc;
        phVar81 = phVar107 + -8;
        phVar107 = phVar107 + -0xc;
      } while (uVar64 < *(uint *)phVar81);
      do {
        uVar92 = uVar129 + 0xc;
        phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)(uVar129 + 0x14);
        uVar129 = uVar92;
      } while (*(uint *)phVar107 < uVar64);
    }
    uVar38._4_4_ = 0;
    uVar38._0_4_ = *(uint *)(unaff_RBX + 0xe0);
    if ((*(uint *)uVar92 & *(uint *)(unaff_RBX + 0xe0)) != 0) goto LAB_003e7c32;
    if ((uint)uVar88 == (uint)phVar32) {
      return (pthread_mutex_t *)uVar38;
    }
    if (*(char *)(lVar119 + 0x5a) != '\0') {
      pvVar123 = *(void **)&((pthread_mutex_t *)(lVar119 + 0x78))->__data;
      pvVar57 = *(void **)(lVar119 + 0x70);
      if ((pvVar123 != pvVar57) || (uVar90 = 0, *(uint *)(lVar119 + 100) != (uint)uVar88)) {
        uVar88._0_4_ = *(uint *)(lVar119 + 100) + 1;
        if (((uint)uVar88 != 0) && (*(uint *)(lVar119 + 0x68) <= (uint)uVar88)) {
          uStack_40 = 0x3e825e;
          uVar38 = hb_buffer_t::enlarge((hb_buffer_t *)lVar119,(uint)uVar88);
          if ((char)uVar38 != '\0') {
            pvVar57 = *(void **)(lVar119 + 0x70);
            pvVar123 = *(void **)&((pthread_mutex_t *)(lVar119 + 0x78))->__data;
            uVar90 = 0;
            if (pvVar123 == pvVar57) goto LAB_003e7bff;
            goto LAB_003e81b0;
          }
          uVar90 = 0;
          goto LAB_003e81ea;
        }
        uVar90 = 0;
        if (pvVar123 != pvVar57) goto LAB_003e81b0;
LAB_003e7bff:
        uVar90 = 0;
        uVar88._0_4_ = *(uint *)(lVar119 + 100);
        if (*(int *)(lVar119 + 0x5c) + 1U < (uint)uVar88 + 1) {
          pvVar123 = *(void **)(lVar119 + 0x80);
          *(void **)&((pthread_mutex_t *)(lVar119 + 0x78))->__data = pvVar123;
          uVar90 = 0;
          if ((uint)uVar88 == 0) goto LAB_003e81b0;
LAB_003e818b:
          uStack_40 = 0x3e819a;
          memcpy(pvVar123,pvVar57,(ulong)(uint)uVar88 * 0x14);
          pvVar57 = *(void **)(lVar119 + 0x70);
          pvVar123 = *(void **)&((pthread_mutex_t *)(lVar119 + 0x78))->__data;
        }
        else {
LAB_003e81a9:
          pvVar123 = pvVar57;
        }
        goto LAB_003e81b0;
      }
LAB_003e8150:
      phVar32._0_4_ = (uint)uVar88;
      goto LAB_003e81da;
    }
    uVar90 = 0;
LAB_003e81e3:
    *(uint *)(lVar119 + 0x5c) = (uint)uVar88 + 1;
  }
LAB_003e81ea:
  if (*(char *)(lVar119 + 0x58) == '\0') {
    return (pthread_mutex_t *)uVar38;
  }
  uVar88._0_4_ = *(uint *)(lVar119 + 0x5c);
  goto LAB_003e7b40;
LAB_003e84a0:
  uVar109 = uVar30;
  goto LAB_003e8c0e;
LAB_003e8bd0:
  pvVar123 = pvVar57;
  goto LAB_003e8be0;
  while( true ) {
    cVar27 = pcVar59[uVar152 + 1];
    uVar152 = uVar152 + 1;
    if (cVar27 == '\0') break;
LAB_0041f420:
    *(char *)((long)puVar69 + uVar152 + 0x2c) = cVar27;
    if (uVar33 - 1 == uVar152) goto LAB_0041f438;
  }
  uVar33 = uVar152 & 0xffffffff;
LAB_0041f438:
  if ((uint)uVar33 < 4) {
    puVar69[-2] = 0x41f45f;
    puVar69[-1] = 0;
    memset((undefined1 *)((long)puVar69 + uVar33 + 0x2c),0x20,(ulong)(3 - (uint)uVar33) + 1);
    pcVar59 = *(char **)(puVar69 + 2);
  }
  uVar90 = puVar69[0xb];
  uVar64 = uVar90 >> 0x18 | (uVar90 & 0xff0000) >> 8 | (uVar90 & 0xff00) << 8 | uVar90 << 0x18;
LAB_0041f46d:
  uVar33 = (ulong)_ZZL24hb_ot_tags_from_languagePKcS0_PjS1_E12last_tag_idx_0;
  if ((_ZZL24hb_ot_tags_from_languagePKcS0_PjS1_E12last_tag_idx_0 < (uint)uVar88) &&
     (*(uint *)(pcVar60 + uVar33 * 8) == uVar64)) {
LAB_0041f485:
    _ZZL24hb_ot_tags_from_languagePKcS0_PjS1_E12last_tag_idx_0 = (uint)uVar33;
    uVar90 = *puVar69;
    do {
      phVar32._0_4_ = (uint)uVar33;
      if ((uint)phVar32 == 0) {
        phVar32._0_4_ = 0;
        if ((uint)uVar88 == 0) goto LAB_0041f563;
        goto LAB_0041f4d3;
      }
      lVar116 = uVar33 * 8;
      uVar33 = (ulong)((uint)phVar32 - 1);
    } while (*(int *)(pcVar60 + lVar116) == *(int *)(pcVar60 + (ulong)((uint)phVar32 - 1) * 8));
    bVar153 = (uint)phVar32 <= (uint)uVar88;
    uVar88._0_4_ = (uint)uVar88 - (uint)phVar32;
    bVar154 = (uint)uVar88 != 0;
    if (!bVar153) {
      uVar88._0_4_ = 0;
    }
    if (bVar153 && bVar154) {
LAB_0041f4d3:
      uVar33 = (ulong)(uint)phVar32;
      if (*(uint *)(pcVar60 + uVar33 * 8 + 4) == 0) {
        uVar88._0_4_ = 0;
      }
      else {
        uVar64 = 0;
        if (*(int *)(pcVar60 + uVar33 * 8) == *(int *)(pcVar60 + uVar33 * 8)) {
          puVar69[5] = *(uint *)(pcVar60 + uVar33 * 8 + 4);
          if ((uint)uVar88 != 1) {
            if (*(uint *)(pcVar60 + (ulong)((uint)phVar32 + 1) * 8 + 4) == 0) {
              uVar88._0_4_ = 1;
            }
            else {
              uVar64 = 1;
              if (*(int *)(pcVar60 + (ulong)((uint)phVar32 + 1) * 8) !=
                  *(int *)(pcVar60 + uVar33 * 8)) goto LAB_0041f560;
              puVar69[6] = *(uint *)(pcVar60 + (ulong)((uint)phVar32 + 1) * 8 + 4);
              if ((uint)uVar88 != 2) {
                if (*(uint *)(pcVar60 + (ulong)((uint)phVar32 + 2) * 8 + 4) == 0) {
                  uVar88._0_4_ = 2;
                }
                else {
                  uVar64 = 2;
                  if (*(int *)(pcVar60 + (ulong)((uint)phVar32 + 2) * 8) !=
                      *(int *)(pcVar60 + uVar33 * 8)) goto LAB_0041f560;
                  puVar69[7] = *(uint *)(pcVar60 + (ulong)((uint)phVar32 + 2) * 8 + 4);
                  uVar88._0_4_ = 3;
                }
              }
            }
          }
        }
        else {
LAB_0041f560:
          uVar88._0_4_ = uVar64;
        }
      }
    }
  }
  else {
    uVar90 = *puVar69;
    if (!bVar153) {
      iVar31 = (uint)uVar88 - 1;
      iVar121 = 0;
      do {
        while( true ) {
          phVar32._0_4_ = (uint)(iVar31 + iVar121) >> 1;
          uVar33 = (ulong)(uint)phVar32;
          if (uVar64 < *(uint *)(pcVar60 + uVar33 * 8)) break;
          if (uVar64 <= *(uint *)(pcVar60 + uVar33 * 8)) goto LAB_0041f485;
          iVar121 = (uint)phVar32 + 1;
          if (iVar31 < iVar121) goto LAB_0041fa27;
        }
        iVar31 = (uint)phVar32 - 1;
      } while (iVar121 <= iVar31);
    }
LAB_0041fa27:
    if (pcVar58 == (char *)0x0) {
      puVar69[-2] = 0x41fa36;
      puVar69[-1] = 0;
      sVar61 = strlen(*(char **)(puVar69 + 2));
      pcVar59 = *(char **)(puVar69 + 2);
      pcVar58 = pcVar59 + sVar61;
    }
    uVar88._0_4_ = 0;
    if ((long)pcVar58 - (long)pcVar59 == 3) {
      puVar69[-2] = 0x41fa5c;
      puVar69[-1] = 0;
      uVar88._0_4_ = hb_tag_from_string(pcVar59);
      puVar69[5] = (uint)uVar88 & 0xdfdfdfff;
      uVar88._0_4_ = 1;
    }
  }
LAB_0041f563:
  cVar27 = *(char *)((long)puVar69 + 7);
joined_r0x0041f32f:
  phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
             *)0x0;
  if (cVar27 == '\0') goto LAB_0041f6da;
LAB_0041f56e:
  if ((int)uVar90 < 0x4d6c796d) {
    if ((int)uVar90 < 0x47756a72) {
      uVar64 = 0x626e6732;
      if (uVar90 != 0x42656e67) {
        if (uVar90 != 0x44657661) goto LAB_0041f64c;
        uVar64 = 0x64657632;
      }
    }
    else if (uVar90 == 0x47756a72) {
      uVar64 = 0x676a7232;
    }
    else if (uVar90 == 0x47757275) {
      uVar64 = 0x67757232;
    }
    else {
      if (uVar90 != 0x4b6e6461) goto LAB_0041f64c;
      uVar64 = 0x6b6e6432;
    }
LAB_0041f620:
    puVar69[0x13] = uVar64 | 0x33;
    phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
               *)0x1;
    if (puVar69[10] < 2) {
      puVar69[10] = 1;
      goto LAB_0041f6da;
    }
LAB_0041f636:
    uVar33 = (ulong)phVar32 & 0xffffffff;
    phVar32._0_4_ = (int)phVar32 + 1;
    phVar32._4_4_ = 0;
    puVar69[uVar33 + 0x13] = uVar64;
    if ((uint)phVar32 < puVar69[10]) goto LAB_0041f64c;
  }
  else {
    if (0x4f727960 < (int)uVar90) {
      if (uVar90 == 0x4f727961) {
        uVar64 = 0x6f727932;
      }
      else if (uVar90 == 0x54616d6c) {
        uVar64 = 0x746d6c32;
      }
      else {
        if (uVar90 != 0x54656c75) goto LAB_0041f64c;
        uVar64 = 0x74656c32;
      }
      goto LAB_0041f620;
    }
    if (uVar90 == 0x4d6c796d) {
      uVar64 = 0x6d6c6d32;
      goto LAB_0041f620;
    }
    uVar64 = 0x6d796d32;
    if (uVar90 == 0x4d796d72) goto LAB_0041f636;
LAB_0041f64c:
    if ((int)uVar90 < 0x4e6b6f6f) {
      if (uVar90 == 0) goto LAB_0041f6d5;
      if (uVar90 == 0x48697261) {
        uVar64 = 0x6b616e61;
      }
      else {
        if (uVar90 != 0x4c616f6f) goto LAB_0041f6ad;
        uVar64 = 0x6c616f20;
      }
    }
    else if ((int)uVar90 < 0x59696969) {
      if (uVar90 == 0x4e6b6f6f) {
        uVar64 = 0x6e6b6f20;
      }
      else {
        if (uVar90 != 0x56616969) goto LAB_0041f6ad;
        uVar64 = 0x76616920;
      }
    }
    else if (uVar90 == 0x59696969) {
      uVar64 = 0x79692020;
    }
    else {
      uVar64 = 0x6d617468;
      if (uVar90 != 0x5a6d7468) {
LAB_0041f6ad:
        uVar64 = uVar90 | 0x20000000;
      }
    }
    uVar33 = (ulong)phVar32 & 0xffffffff;
    phVar32._0_4_ = (uint)phVar32 + 1;
    puVar69[uVar33 + 0x13] = uVar64;
  }
LAB_0041f6d5:
  puVar69[10] = (uint)phVar32;
LAB_0041f6da:
  uVar90 = puVar69[10];
  puVar69[-2] = 0x41f6fe;
  puVar69[-1] = 0;
  uVar129 = hb_ot_layout_table_select_script
                      ((long)puVar147,0x47535542,uVar90,(long)(puVar69 + 0x13),
                       (uint *)(lVar119 + 0x38),(undefined4 *)(lVar119 + 0x2c));
  *(bool *)(lVar119 + 0x34) = (int)uVar129 != 0;
  lVar116 = *(long *)lVar119;
  phVar32._0_4_ = *(uint *)(lVar119 + 0x38);
  puVar69[-2] = 0x41f722;
  puVar69[-1] = 0;
  hb_ot_layout_script_select_language2
            (lVar116,0x47535542,(uint)phVar32,(uint)uVar88,(long)(puVar69 + 5),
             (uint *)(lVar119 + 0x40));
  lVar116 = *(long *)lVar119;
  puVar69[-2] = 0x41f73e;
  puVar69[-1] = 0;
  uVar129 = hb_ot_layout_table_select_script
                      (lVar116,0x47504f53,uVar90,(long)(puVar69 + 0x13),(uint *)(lVar119 + 0x3c),
                       (undefined4 *)(lVar119 + 0x30));
  *(bool *)(lVar119 + 0x35) = (int)uVar129 != 0;
  lVar116 = *(long *)lVar119;
  uVar90 = *(uint *)(lVar119 + 0x3c);
  puVar69[-2] = 0x41f762;
  puVar69[-1] = 0;
  ppVar117 = (pthread_mutex_t *)
             hb_ot_layout_script_select_language2
                       (lVar116,0x47504f53,uVar90,(uint)uVar88,(long)(puVar69 + 5),
                        (uint *)(lVar119 + 0x44));
  return ppVar117;
  while( true ) {
    uVar92 = uVar92 + 1;
    pbVar136 = (byte *)(*(long *)((long)phVar32 + 0x70) + lVar116);
    lVar116 = lVar116 + 0x14;
    if ((*pbVar136 & 0x80) == 0) break;
LAB_003fa240:
    if ((pthread_mutex_t *)(ulong)((uint)uVar88 - 1) == (pthread_mutex_t *)uVar92) {
      uVar92 = uVar49;
      break;
    }
  }
  lVar116 = 0;
  uVar129 = phVar32;
  lVar119 = uVar49;
  do {
    phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
               *)uVar129;
    if (1 < (uint)((int)uVar92 - (int)lVar116)) {
      uVar88 = uVar92 & 0xffffffff;
code_r0x003fd0fd:
      *(undefined8 *)((long)puVar100 + -8) = 0x3fd102;
      hb_buffer_t::merge_clusters_impl((hb_buffer_t *)uVar129,(uint)lVar116,(uint)uVar88);
      in_XMM1._8_8_ = extraout_XMM1_Qb_53;
      in_XMM1._0_8_ = extraout_XMM1_Qa_37;
      uVar49._4_4_ = 0;
      uVar49._0_4_ = *(uint *)((long)phVar32 + 0x60);
    }
    param_4._0_4_ = (int)uVar92 + 1;
    param_4._4_4_ = 0;
    if ((uint)param_4 < (uint)uVar49) {
      param_4 = uVar49 & 0xffffffff;
    }
    lVar116._0_4_ = (int)param_4 - 1;
    lVar116._4_4_ = 0;
    uVar88 = uVar92 & 0xffffffff;
LAB_003fd120:
    do {
      iVar31 = (int)uVar88;
      uVar88._0_4_ = (uint)param_4;
      if ((int)lVar116 == iVar31) break;
      uVar88._0_4_ = iVar31 + 1;
      uVar88._4_4_ = 0;
    } while ((*(byte *)(*(long *)((long)phVar32 + 0x70) + 0x10 + (ulong)(uint)uVar88 * 0x14) & 0x80)
             != 0);
    uVar90 = (uint)uVar92;
    lVar116 = uVar92 & 0xffffffff;
    uVar92._4_4_ = 0;
    uVar92._0_4_ = (uint)uVar88;
    uVar129 = phVar32;
  } while (uVar90 < (uint)lVar119);
LAB_003f790f:
  uVar88._0_4_ = *(uint *)((long)phVar32 + 0x38);
  iVar31 = *(int *)((long)phVar32 + 0x3c);
  *(undefined8 *)((long)puVar100 + -8) = 0x3f791e;
  uVar129 = hb_script_get_horizontal_direction(iVar31);
  uVar90 = (uint)uVar129;
  if (uVar90 == 5) {
    lVar119 = *(long *)((long)puVar100 + 0x30);
    if ((uint)uVar88 == 4) {
      uVar33 = (ulong)*(uint *)((long)phVar32 + 0x60);
      if (uVar33 == 0) {
        bVar78 = 0;
        param_5 = (uint *)0x0;
        bVar153 = false;
      }
      else {
        puVar148 = (ushort *)(*(long *)((long)phVar32 + 0x70) + 0x10);
        bVar153 = true;
        param_5 = (uint *)0x0;
        param_6 = 0x3e0;
        bVar78 = 0;
        uVar152 = 1;
        do {
          if ((*puVar148 & 0x1f) == 0xd) {
            param_5 = (uint *)0x1;
          }
          else {
            if ((0x3e0U >> (*puVar148 & 0x1f) & 1) != 0) break;
            if (*(int *)(puVar148 + -8) - 0x1f1e6U < 0x1a) {
              bVar78 = 1;
            }
          }
          bVar153 = uVar152 < uVar33;
          puVar148 = puVar148 + 10;
          bVar154 = uVar152 != uVar33;
          uVar152 = uVar152 + 1;
        } while (bVar154);
      }
      uVar90 = (byte)(~bVar153 & (bVar78 | (byte)param_5)) ^ 5;
    }
  }
  else {
    lVar119 = *(long *)((long)puVar100 + 0x30);
  }
  *(long *)((long)puVar100 + 0x38) = (long)phVar32 + 0x60;
  param_4._0_4_ = (uint)uVar88 & 0xfffffffe;
  param_4._4_4_ = 0;
  auVar279 = extraout_XMM0_21;
  if ((uint)param_4 == 4) {
    if (((uint)uVar88 != uVar90) && (uVar90 != 0)) goto LAB_003f79fd;
  }
  else if (((uint)uVar88 != 6) && ((uint)param_4 == 6)) {
LAB_003f79fd:
    uVar88._0_4_ = *(uint *)((long)phVar32 + 0x1c);
    param_4._4_4_ = 0;
    param_4._0_4_ = (uint)uVar88;
    uVar90 = *(uint *)((long)phVar32 + 0x60);
    uVar33 = (ulong)uVar90;
    if (uVar90 == 1) {
      uVar64 = 0;
      uVar90 = 1;
      uVar152 = 1;
LAB_003f7bc7:
      uVar122 = (uint)uVar152;
      if (((uint)uVar88 == 1) && (1 < uVar122 - uVar64)) {
        *(undefined8 *)((long)puVar100 + -8) = 0x3f7be1;
        auVar279 = hb_buffer_t::merge_clusters_impl((hb_buffer_t *)phVar32,uVar64,uVar122);
        in_XMM1._0_8_ = auVar279._8_8_;
        in_XMM1._8_8_ = extraout_XMM1_Qb_18;
        auVar279._8_8_ = extraout_XMM0_Qb_12;
        uVar90 = *(uint *)((long)phVar32 + 0x60);
      }
      uVar88._0_4_ = uVar64;
      if (uVar90 < uVar64) {
        uVar88._0_4_ = uVar90;
      }
      uVar48._4_4_ = 0;
      uVar48._0_4_ = (uint)uVar88;
      if (uVar122 <= uVar90) {
        uVar90 = uVar122;
      }
      param_4 = uVar48;
      if (((uint)uVar88 + 2 <= uVar90) && ((uint)uVar88 < uVar90 - 1)) {
        uVar33 = (ulong)(uVar90 - 1);
        param_4 = *(long *)((long)phVar32 + 0x70) + uVar48 * 0x14;
        plVar125 = (long *)(*(long *)((long)phVar32 + 0x70) + uVar33 * 0x14);
        do {
          uVar33 = uVar33 - 1;
          *(int *)((long)puVar100 + 0xe0) = (int)plVar125[2];
          lVar116 = plVar125[1];
          *(long *)((long)puVar100 + 0xd0) = *plVar125;
          *(long *)((long)puVar100 + 0xd8) = lVar116;
          *(undefined4 *)(plVar125 + 2) = *(undefined4 *)(param_4 + 0x10);
          lVar116 = *(long *)(param_4 + 8);
          *plVar125 = *(long *)param_4;
          plVar125[1] = lVar116;
          *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)((long)puVar100 + 0xe0);
          auVar279 = *(undefined1 (*) [16])((long)puVar100 + 0xd0);
          *(undefined1 (*) [16])param_4 = auVar279;
          uVar48 = uVar48 + 1;
          param_4 = param_4 + 0x14;
          plVar125 = (long *)((long)plVar125 + -0x14);
        } while ((ulong)uVar48 < (pthread_mutex_t *)(uVar33 & 0xffffffff));
      }
      if (*(char *)((long)phVar32 + 0x5b) != '\0') {
        uVar88._0_4_ = *(uint *)((long)phVar32 + 0x60);
        if ((uint)uVar88 < uVar64) {
          uVar64 = (uint)uVar88;
        }
        uVar111._4_4_ = 0;
        uVar111._0_4_ = uVar64;
        if ((uint)uVar88 < uVar122) {
          uVar122 = (uint)uVar88;
        }
        lVar34._0_4_ = uVar64 + 2;
        lVar34._4_4_ = 0;
        if ((uint)lVar34 <= uVar122) {
          uVar92._0_4_ = uVar122 - 1;
          uVar92._4_4_ = 0;
          puVar105 = (undefined8 *)puVar100;
code_r0x003f7c94:
          phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)(uVar92 + -0x22c6003d);
          hVar8 = *phVar107;
          *phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                       )((char)*phVar107 + (byte)lVar34);
          puVar100 = (uint *)puVar105;
          if (CARRY1((byte)hVar8,(byte)lVar34)) {
            uVar33 = uVar92 & 0xffffffff;
            param_4 = *(long *)((long)phVar32 + 0x80) + uVar111 * 0x14;
            plVar125 = (long *)(*(long *)((long)phVar32 + 0x80) + uVar33 * 0x14);
            do {
              uVar33 = uVar33 - 1;
              *(int *)((long)puVar105 + 0xe0) = (int)plVar125[2];
              lVar116 = plVar125[1];
              *(long *)((long)puVar105 + 0xd0) = *plVar125;
              *(long *)((long)puVar105 + 0xd8) = lVar116;
              *(undefined4 *)(plVar125 + 2) = *(undefined4 *)(param_4 + 0x10);
              lVar116 = *(long *)(param_4 + 8);
              *plVar125 = *(long *)param_4;
              plVar125[1] = lVar116;
              *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)((long)puVar105 + 0xe0);
              auVar279 = *(undefined1 (*) [16])((long)puVar105 + 0xd0);
              *(undefined1 (*) [16])param_4 = auVar279;
              uVar111 = uVar111 + 1;
              param_4 = param_4 + 0x14;
              plVar125 = (long *)((long)plVar125 + -0x14);
            } while ((ulong)uVar111 < (pthread_mutex_t *)(uVar33 & 0xffffffff));
          }
        }
      }
      lVar34._4_4_ = 0;
      lVar34._0_4_ = *(uint *)((long)phVar32 + 0x60);
code_r0x003f7d14:
      uVar90 = (uint)lVar34;
      if (1 < uVar90) {
        param_4 = *(undefined8 *)((long)phVar32 + 0x70);
        uVar88 = (ulong)(uVar90 - 1) - 1;
        lVar116 = param_4 + (ulong)(uVar90 - 1) * 0x14;
        uVar129 = ((pthread_mutex_t *)0x0)->__size;
        uVar49 = lVar34;
LAB_003f7d30:
        do {
          uVar90 = (uint)uVar49;
          *(undefined4 *)((long)puVar100 + 0xe0) = *(undefined4 *)(lVar116 + 0x10);
          uVar111 = *(undefined8 *)(lVar116 + 8);
          *(long *)((long)puVar100 + 0xd0) = *(long *)lVar116;
          *(undefined8 *)((long)puVar100 + 0xd8) = uVar111;
          *(undefined4 *)(lVar116 + 0x10) = *(undefined4 *)(param_4 + 0x10);
          uVar111 = *(undefined8 *)(param_4 + 8);
          *(long *)lVar116 = *(long *)param_4;
          *(undefined8 *)(lVar116 + 8) = uVar111;
          *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)((long)puVar100 + 0xe0);
          auVar279 = *(undefined1 (*) [16])((long)puVar100 + 0xd0);
          *(undefined1 (*) [16])param_4 = auVar279;
          uVar129 = uVar129 + 1;
          ppVar117 = (pthread_mutex_t *)(uVar88 & 0xffffffff);
          param_4 = param_4 + 0x14;
          uVar88 = uVar88 + -1;
          lVar116 = lVar116 + -0x14;
        } while ((ulong)uVar129 < ppVar117);
      }
      if (*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
            *)((long)phVar32 + 0x5b) !=
          (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
           )0x0) {
        uVar88._0_4_ = *(uint *)((long)phVar32 + 0x60);
        param_4._4_4_ = 0;
        param_4._0_4_ = (uint)uVar88;
        if ((uint)uVar88 < uVar90) {
          uVar90 = (uint)uVar88;
        }
        lVar34._4_4_ = 0;
        lVar34._0_4_ = uVar90;
        if (1 < uVar90) {
          param_4 = *(undefined8 *)((long)phVar32 + 0x80);
code_r0x003f7d9e:
          uVar33 = (ulong)((int)lVar34 - 1);
          uVar88 = uVar33 - 1;
          lVar34 = uVar33 * 5;
code_r0x003f7da9:
          lVar116 = (long)((pthread_mutex_t *)0x0)->__size;
          uVar49 = param_4 + lVar34 * 4;
          goto LAB_003f7db0;
        }
      }
    }
    else if (uVar90 != 0) {
      uVar146 = 0;
      uVar152 = 1;
      do {
        uVar64 = (uint)uVar146;
        uVar90 = (uint)uVar33;
        lVar116 = *(long *)((long)phVar32 + 0x70);
        if ((*(byte *)(lVar116 + 0x10 + uVar152 * 0x14) & 0x80) == 0) {
          uVar122 = (uint)uVar152;
          if (1 < uVar122 - uVar64 && (uint)uVar88 == 1) {
            *(undefined8 *)((long)puVar100 + -8) = 0x3f7a71;
            auVar279 = hb_buffer_t::merge_clusters_impl((hb_buffer_t *)phVar32,uVar64,uVar122);
            in_XMM1._0_8_ = auVar279._8_8_;
            in_XMM1._8_8_ = extraout_XMM1_Qb_17;
            auVar279._8_8_ = extraout_XMM0_Qb_11;
            lVar116 = *(long *)((long)phVar32 + 0x70);
            uVar90 = *(uint *)((long)phVar32 + 0x60);
          }
          uVar91 = uVar64;
          if (uVar90 < uVar64) {
            uVar91 = uVar90;
          }
          if (uVar152 <= uVar90) {
            uVar90 = uVar122;
          }
          if ((uVar91 + 2 <= uVar90) && (uVar91 < uVar90 - 1)) {
            uVar33 = (ulong)(uVar90 - 1);
            uVar146 = (ulong)uVar91;
            pauVar67 = (undefined1 (*) [16])(lVar116 + uVar146 * 0x14);
            puVar131 = (undefined8 *)(lVar116 + uVar33 * 0x14);
            do {
              uVar33 = uVar33 - 1;
              *(undefined4 *)((long)puVar100 + 0xe0) = *(undefined4 *)(puVar131 + 2);
              uVar129 = puVar131[1];
              *(undefined8 *)((long)puVar100 + 0xd0) = *puVar131;
              *(undefined8 *)((long)puVar100 + 0xd8) = uVar129;
              *(undefined4 *)(puVar131 + 2) = *(undefined4 *)pauVar67[1];
              uVar129 = *(undefined8 *)(*pauVar67 + 8);
              *puVar131 = *(undefined8 *)*pauVar67;
              puVar131[1] = uVar129;
              *(undefined4 *)pauVar67[1] = *(undefined4 *)((long)puVar100 + 0xe0);
              auVar279 = *(undefined1 (*) [16])((long)puVar100 + 0xd0);
              *pauVar67 = auVar279;
              uVar146 = uVar146 + 1;
              pauVar67 = (undefined1 (*) [16])(pauVar67[1] + 4);
              puVar131 = (undefined8 *)((long)puVar131 + -0x14);
            } while (uVar146 < (uVar33 & 0xffffffff));
          }
          if (*(char *)((long)phVar32 + 0x5b) != '\0') {
            uVar90 = *(uint *)((long)phVar32 + 0x60);
            if (uVar90 < uVar64) {
              uVar64 = uVar90;
            }
            if (uVar90 < uVar152) {
              uVar122 = uVar90;
            }
            if ((uVar64 + 2 <= uVar122) && (uVar64 < uVar122 - 1)) {
              uVar33 = (ulong)(uVar122 - 1);
              uVar146 = (ulong)uVar64;
              pauVar67 = (undefined1 (*) [16])(*(long *)((long)phVar32 + 0x80) + uVar146 * 0x14);
              puVar131 = (undefined8 *)(*(long *)((long)phVar32 + 0x80) + uVar33 * 0x14);
              do {
                uVar33 = uVar33 - 1;
                *(undefined4 *)((long)puVar100 + 0xe0) = *(undefined4 *)(puVar131 + 2);
                uVar129 = puVar131[1];
                *(undefined8 *)((long)puVar100 + 0xd0) = *puVar131;
                *(undefined8 *)((long)puVar100 + 0xd8) = uVar129;
                *(undefined4 *)(puVar131 + 2) = *(undefined4 *)pauVar67[1];
                uVar129 = *(undefined8 *)(*pauVar67 + 8);
                *puVar131 = *(undefined8 *)*pauVar67;
                puVar131[1] = uVar129;
                *(undefined4 *)pauVar67[1] = *(undefined4 *)((long)puVar100 + 0xe0);
                auVar279 = *(undefined1 (*) [16])((long)puVar100 + 0xd0);
                *pauVar67 = auVar279;
                uVar146 = uVar146 + 1;
                pauVar67 = (undefined1 (*) [16])(pauVar67[1] + 4);
                puVar131 = (undefined8 *)((long)puVar131 + -0x14);
              } while (uVar146 < (uVar33 & 0xffffffff));
            }
          }
          uVar146 = uVar152 & 0xffffffff;
        }
        uVar64 = (uint)uVar146;
        uVar152 = uVar152 + 1;
        uVar90 = **(uint **)((long)puVar100 + 0x38);
        uVar33 = (ulong)uVar90;
      } while (uVar152 < uVar33);
      goto LAB_003f7bc7;
    }
LAB_003f7dff:
    *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
      *)((long)phVar32 + 0x38) =
         (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
          )((byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)((long)phVar32 + 0x38) ^ 1);
  }
  *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
    **)((long)puVar100 + 0x60) =
       (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
        *)(lVar119 + 0x60);
  lVar34 = *(long *)(lVar119 + 0x80);
code_r0x003f7e15:
  uVar118 = auVar279._0_8_;
  if (*(long *)(lVar34 + 0x20) != 0) {
code_r0x003f7e1c:
    *(undefined8 *)((long)puVar100 + -8) = 0x3f7e32;
    bVar153 = hb_buffer_t::message
                        (uVar118,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                         in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)phVar32,
                         *(undefined8 *)((long)puVar100 + 8),"start preprocess-text",param_4,param_5
                         ,param_6,*(undefined1 *)puVar100);
    auVar279 = extraout_XMM0_22;
    if (bVar153) {
      uVar33 = *(ulong *)(lVar119 + 0x80);
code_r0x003f7e42:
      uVar129 = *(undefined8 *)((long)puVar100 + 8);
      pcVar86 = *(code **)(uVar33 + 0x20);
      *(undefined8 *)((long)puVar100 + -8) = 0x3f7e50;
      auVar279 = (*pcVar86)();
      in_XMM1._0_8_ = auVar279._8_8_;
      in_XMM1._8_8_ = extraout_XMM1_Qb_19;
      *(undefined8 *)((long)puVar100 + -8) = 0x3f7e64;
      hb_buffer_t::message
                (auVar279._0_8_,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                 in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)phVar32,uVar129,
                 "end preprocess-text",param_4,param_5,param_6,*(undefined1 *)puVar100);
      auVar279 = extraout_XMM0_23;
    }
  }
  *(ulong *)((long)puVar100 + 0x18) = (ulong)*(uint *)((long)phVar32 + 0x60);
  lVar119 = *(long *)((long)phVar32 + 0x70);
  if ((*(uint *)((long)puVar100 + 0x84) & 0xfffffffd) == 5) {
    bVar153 = *(long *)((long)puVar100 + 0x18) == 0;
code_r0x003f7e8c:
    if (!bVar153) {
code_r0x003f7e92:
      uVar92 = *(long *)(*(long *)((long)puVar100 + 0x10) + 0x10);
      puVar144._4_4_ = 0;
      puVar144._0_4_ = *(uint *)(*(long *)((long)puVar100 + 0x30) + 0xfc);
      phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)(*(long *)((long)puVar100 + 0x18) * 0x14);
      puVar147 = (uint *)&((pthread_mutex_t *)0x0)->__data;
LAB_003f7eeb:
      do {
        uVar30 = *(undefined4 *)(lVar119 + (long)puVar147);
        uVar129 = *(undefined8 *)(uVar92 + 0x70);
        pcVar86 = *(code **)(uVar92 + 0x30);
        *(undefined8 *)((long)puVar100 + -8) = 0x3f7ef9;
        uVar64 = (*pcVar86)(uVar92,uVar30,uVar129);
        in_XMM1._8_8_ = extraout_XMM1_Qb_21;
        in_XMM1._0_8_ = extraout_XMM1_Qa_12;
        auVar279._8_8_ = extraout_XMM0_Qb_14;
        auVar279._0_8_ = extraout_XMM0_Qa_09;
        if (uVar64 != *(uint *)(lVar119 + (long)puVar147)) {
code_r0x003f7eff:
          uVar111._4_4_ = 0;
          uVar111._0_4_ = uVar64;
          *(undefined4 *)((long)puVar100 + 0xd0) = 0;
          uVar49 = *(long *)(*(long *)((long)puVar100 + 8) + 0x90);
          if (*(long *)(uVar49 + 0x10) == 0) {
            param_5 = (uint *)0x0;
          }
          else {
            param_5 = *(uint **)(*(long *)(uVar49 + 0x10) + 0x10);
code_r0x003f7f25:
          }
          uVar129 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
          param_4 = (long)puVar100 + 0xd0;
          pcVar86 = *(code **)(uVar49 + 0x30);
          *(undefined8 *)((long)puVar100 + -8) = 0x3f7ed9;
          iVar31 = (*pcVar86)(*(long *)((long)puVar100 + 8),uVar129,uVar111 & 0xffffffff);
          in_XMM1._8_8_ = extraout_XMM1_Qb_20;
          in_XMM1._0_8_ = extraout_XMM1_Qa_11;
          auVar279._8_8_ = extraout_XMM0_Qb_13;
          auVar279._0_8_ = extraout_XMM0_Qa_08;
          puVar25 = (undefined8 *)puVar100;
          if (iVar31 != 0) {
LAB_003f7f27:
            puVar100 = (uint *)puVar25;
            *(int *)(lVar119 + (long)puVar147) = (int)uVar111;
            puVar147 = (uint *)((long)puVar147 + 0x14);
            if (phVar32 ==
                (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)puVar147) break;
            goto LAB_003f7eeb;
          }
        }
LAB_003f7edd:
        *(uint *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   *)(lVar119 + 4) + (long)puVar147) =
             *(uint *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(lVar119 + 4) + (long)puVar147) | (uint)puVar144;
        puVar147 = (uint *)((long)puVar147 + 0x14);
      } while (phVar32 !=
               (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                *)puVar147);
    }
  }
  if ((*(uint *)((long)puVar100 + 0x84) & 0xfffffffe) == 6) {
code_r0x003f7f47:
    if ((*(byte *)(*(long *)((long)puVar100 + 0x30) + 0x108) & 8) == 0) {
code_r0x003f7f59:
      bVar153 = *(int *)((long)puVar100 + 0x18) == 0;
      puVar84 = (undefined8 *)puVar100;
code_r0x003f7f5e:
      puVar106 = puVar84;
      puVar100 = (uint *)puVar84;
      if (!bVar153) {
code_r0x003f7f64:
        phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   *)(*(long *)((long)puVar106 + 0x18) * 0x14);
        puVar69 = (uint *)puVar106;
code_r0x003f7f71:
        uVar92 = &((pthread_mutex_t *)0x0)->__data;
        puVar144 = &_hb_ot_shape::switchD_003f8054::switchdataD_005e046c;
        puVar147 = &_hb_ot_shape::switchD_003f8027::switchdataD_005e02f8;
        puVar100 = puVar69;
        goto LAB_003f7fb5;
      }
    }
  }
LAB_003f817b:
  this_01 = *(hb_buffer_t **)((long)puVar100 + 0x10);
  this_01[0xb8] = (hb_buffer_t)((byte)this_01[0xb8] | 0xf);
  phVar140 = this_01 + 0x70;
  uVar88._0_4_ = *(uint *)(this_01 + 0x60);
  *(hb_buffer_t **)((long)puVar100 + 0x28) = phVar140;
  if ((uint)uVar88 != 0) {
    lVar116 = *(long *)(*(long *)((long)puVar100 + 0x30) + 0x80);
    uVar90 = *(uint *)(lVar116 + 0x54);
    if (uVar90 == 4) {
      uVar90 = 2;
    }
    *(uint *)((long)puVar100 + 0x40) = uVar90;
    *(undefined8 *)((long)puVar100 + 0xd0) = *(undefined8 *)((long)puVar100 + 0x60);
    *(hb_buffer_t **)((long)puVar100 + 0xd8) = this_01;
    *(undefined8 *)((long)puVar100 + 0xe0) = *(undefined8 *)((long)puVar100 + 8);
    *(undefined8 *)((long)puVar100 + 0xe8) = *(undefined8 *)(this_01 + 0x10);
    pcVar86 = hb_ot_shape_normalize_context_t::decompose_unicode;
    if (*(code **)(lVar116 + 0x30) != (code *)0x0) {
      pcVar86 = *(code **)(lVar116 + 0x30);
    }
    pcVar68 = hb_ot_shape_normalize_context_t::compose_unicode;
    if (*(code **)(lVar116 + 0x38) != (code *)0x0) {
      pcVar68 = *(code **)(lVar116 + 0x38);
    }
    *(code **)((long)puVar100 + 0xf0) = pcVar86;
    *(code **)((long)puVar100 + 0xf8) = pcVar68;
    *(uint *)((long)puVar100 + 0x18) = uVar90 & 0xfffffffd;
    *(undefined2 *)(this_01 + 0x5a) = 1;
    *(undefined4 *)(this_01 + 100) = 0;
    *(undefined8 *)(this_01 + 0x78) = *(undefined8 *)(this_01 + 0x70);
    *(undefined4 *)(this_01 + 0x5c) = 0;
    uVar33 = 0;
    uVar129 = 0;
LAB_003f8250:
    *(undefined8 *)((long)puVar100 + 0x20) = uVar129;
    uVar90 = (uint)uVar33;
    phVar32._0_4_ = uVar90 + 1;
    if (uVar90 + 1 < (uint)uVar88) {
      phVar32._0_4_ = (uint)uVar88;
    }
    uVar64 = uVar90 - 1;
    do {
      uVar122 = uVar64 + 2;
      uVar91 = (uint)phVar32;
      if ((uint)uVar88 <= uVar122) break;
      uVar122 = *(uint *)(*(long *)phVar140 + 0x10 + (ulong)uVar122 * 0x14);
      uVar64 = uVar64 + 1;
      uVar91 = uVar64;
    } while ((0x1c00U >> (uVar122 & 0x1f) & 1) == 0);
    if (*(int *)((long)puVar100 + 0x18) == 1) {
      param_4._4_4_ = 0;
      param_4._0_4_ = uVar122;
      iVar31 = 1;
joined_r0x003f853f:
      while ((uVar90 < uVar91 && (this_01[0x58] != (hb_buffer_t)0x0))) {
        *(undefined8 *)((long)puVar100 + -8) = 0x3f82c2;
        decompose_current_character((long)((long)puVar100 + 0xd0),(uint)(iVar31 != 1));
        in_XMM1._8_8_ = extraout_XMM1_Qb_23;
        in_XMM1._0_8_ = extraout_XMM1_Qa_14;
        uVar90 = *(uint *)(this_01 + 0x5c);
        uVar33 = (ulong)uVar90;
      }
      if (((uint)uVar33 == (uint)uVar88) ||
         (*(char *)(*(long *)((long)puVar100 + 0x10) + 0x58) == '\0')) goto LAB_003f8c32;
      uVar90 = (uint)uVar33 + 1;
      if (uVar90 < (uint)uVar88) {
        uVar90 = (uint)uVar88;
      }
      phVar32._0_4_ = uVar90 - 1;
      uVar64 = *(uint *)((long)puVar100 + 0x40);
      do {
        uVar122 = (uint)uVar33;
        uVar91 = uVar122 + 1;
        uVar33 = (ulong)uVar91;
        if ((uint)uVar88 <= uVar91) {
          uVar33 = (ulong)uVar90;
          phVar140 = *(hb_buffer_t **)((long)puVar100 + 0xd8);
          uVar152 = (ulong)*(uint *)(phVar140 + 0x5c);
          if (uVar90 <= *(uint *)(phVar140 + 0x5c)) goto LAB_003f8410;
          goto LAB_003f8391;
        }
        uVar63 = *(uint *)(**(long **)((long)puVar100 + 0x28) + 0x10 + (ulong)uVar91 * 0x14);
        param_4._4_4_ = 0;
        param_4._0_4_ = uVar63;
      } while ((0x1c00U >> (uVar63 & 0x1f) & 1) != 0);
      phVar140 = *(hb_buffer_t **)((long)puVar100 + 0xd8);
      uVar152 = (ulong)*(uint *)(phVar140 + 0x5c);
      phVar32._0_4_ = uVar122;
      if (*(uint *)(phVar140 + 0x5c) < uVar91) {
LAB_003f8391:
        if (phVar140[0x58] != (hb_buffer_t)0x0) {
          param_5 = *(uint **)(phVar140 + 0x70);
          param_4 = (long)param_5 + uVar152 * 0x14;
          uVar90 = (uint)uVar33;
          do {
            if (((*(uint *)param_4 & 0xfffffff0) == 0xfe00) ||
               (0xffffff0f < *(uint *)param_4 - 0xe01f0)) {
              lVar116 = *(long *)((long)puVar100 + 0xe0);
              if ((uint)phVar32 <= (uint)uVar152) goto LAB_003f8afe;
              *(long *)((long)puVar100 + 0x20) = lVar116;
              goto LAB_003f8560;
            }
            uVar122 = (int)uVar33 - 1;
            uVar33 = (ulong)uVar122;
            param_4 = param_4 + 0x14;
          } while ((uint)uVar152 != uVar122);
          do {
            *(undefined8 *)((long)puVar100 + -8) = 0x3f83f6;
            uVar152 = decompose_current_character((long)((long)puVar100 + 0xd0),(uint)(uVar64 == 0))
            ;
            in_XMM1._8_8_ = extraout_XMM1_Qb_24;
            in_XMM1._0_8_ = extraout_XMM1_Qa_15;
            if (uVar90 <= *(uint *)(phVar140 + 0x5c)) break;
          } while (phVar140[0x58] != (hb_buffer_t)0x0);
        }
      }
      goto LAB_003f8410;
    }
    lVar116 = *(long *)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x10);
    if (lVar116 == 0) {
      uVar129 = 0;
    }
    else {
      uVar129 = *(undefined8 *)(lVar116 + 0x18);
    }
    param_4 = *(long *)phVar140 + uVar33 * 0x14;
    phVar140 = (hb_buffer_t *)(*(long *)phVar140 + uVar33 * 0x14 + 0xc);
    uVar111 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
    pcVar86 = *(code **)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x38);
    param_5 = (uint *)0x14;
    *(undefined8 *)((long)puVar100 + -8) = uVar129;
    *(undefined8 *)((long)puVar100 + -0x10) = 0x14;
    *(undefined8 *)((long)puVar100 + -0x18) = 0x3f846b;
    uVar90 = (*pcVar86)(*(long *)((long)puVar100 + 8),uVar111,uVar91 - uVar90);
    in_XMM1._8_8_ = extraout_XMM1_Qb_25;
    in_XMM1._0_8_ = extraout_XMM1_Qa_16;
    this_01 = *(hb_buffer_t **)((long)puVar100 + 0x10);
    if (this_01[0x5a] == (hb_buffer_t)0x0) {
LAB_003f852d:
      uVar90 = *(int *)(this_01 + 0x5c) + uVar90;
      uVar33 = (ulong)uVar90;
      *(uint *)(this_01 + 0x5c) = uVar90;
      iVar31 = *(int *)((long)puVar100 + 0x18);
      goto joined_r0x003f853f;
    }
    pvVar123 = *(void **)(this_01 + 0x78);
    pvVar57 = *(void **)(this_01 + 0x70);
    iVar31 = *(int *)(this_01 + 100);
    if ((pvVar123 == pvVar57) && (iVar31 == *(int *)(this_01 + 0x5c))) {
LAB_003f8526:
      *(uint *)(this_01 + 100) = iVar31 + uVar90;
      goto LAB_003f852d;
    }
    phVar32._0_4_ = iVar31 + uVar90;
    if (((uint)phVar32 == 0) ||
       (param_4 = *(long *)((long)puVar100 + 0x10), (uint)phVar32 < *(uint *)(param_4 + 0x68))) {
      if (pvVar123 == pvVar57) {
LAB_003f84b5:
        lVar116 = *(long *)((long)puVar100 + 0x10);
        phVar32._0_4_ = *(uint *)(lVar116 + 100);
        if (*(int *)(lVar116 + 0x5c) + uVar90 < (uint)phVar32 + uVar90) {
          pvVar123 = *(void **)(lVar116 + 0x80);
          *(void **)(lVar116 + 0x78) = pvVar123;
          if ((ulong)(uint)phVar32 != 0) {
            *(undefined8 *)((long)puVar100 + -8) = 0x3f84e8;
            memcpy(pvVar123,pvVar57,(ulong)(uint)phVar32 * 0x14);
            pvVar57 = *(void **)(lVar116 + 0x70);
            pvVar123 = *(void **)(lVar116 + 0x78);
          }
        }
        else {
          pvVar123 = pvVar57;
        }
      }
LAB_003f84f5:
      this_01 = *(hb_buffer_t **)((long)puVar100 + 0x10);
      phVar32._0_4_ = *(uint *)(this_01 + 0x5c);
      uVar64 = *(uint *)(this_01 + 100);
      param_4 = (ulong)uVar64 * 5;
      *(undefined8 *)((long)puVar100 + -8) = 0x3f8522;
      memmove((void *)((long)pvVar123 + (ulong)uVar64 * 0x14),
              (void *)((long)pvVar57 + (ulong)(uint)phVar32 * 0x14),(ulong)uVar90 * 0x14);
      iVar31 = *(int *)(this_01 + 100);
      goto LAB_003f8526;
    }
    *(undefined8 *)((long)puVar100 + -8) = 0x3f8bef;
    uVar129 = hb_buffer_t::enlarge(*(hb_buffer_t **)((long)puVar100 + 0x10),(uint)phVar32);
    if ((char)uVar129 != '\0') {
      pvVar57 = *(void **)(*(long *)((long)puVar100 + 0x10) + 0x70);
      pvVar123 = *(void **)(*(long *)((long)puVar100 + 0x10) + 0x78);
      if (pvVar123 == pvVar57) goto LAB_003f84b5;
      goto LAB_003f84f5;
    }
LAB_003f8c32:
    this_01 = *(hb_buffer_t **)((long)puVar100 + 0x10);
    *(undefined8 *)((long)puVar100 + -8) = 0x3f8c3f;
    hb_buffer_t::sync(this_01);
    uVar129 = extraout_XMM0_24._0_8_;
    uVar64 = *(uint *)((long)puVar100 + 0x40);
    if ((*(byte *)((long)puVar100 + 0x20) & 1) != 0) goto LAB_003f8c6e;
    bVar153 = false;
    phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x28);
    hVar7 = this_01[0xc0];
    auVar279 = extraout_XMM0_24;
    goto joined_r0x003f8f2a;
  }
LAB_003f9369:
  if ((((byte)this_01[0xc0] & 1) != 0) &&
     ((*(byte *)(*(long *)((long)puVar100 + 0x30) + 0x108) & 4) != 0)) {
    if ((*(uint *)(this_01 + 0x38) & 0xfffffffd) == 4) {
      lVar116 = *(long *)((long)puVar100 + 0x30);
      phVar32._0_4_ = *(uint *)(lVar116 + 0xf4) | *(uint *)(lVar116 + 0xf0);
      uVar90 = *(uint *)(lVar116 + 0xf0) | *(uint *)(lVar116 + 0xf8);
      uVar88._0_4_ = **(uint **)((long)puVar100 + 0x38);
    }
    else {
      lVar116 = *(long *)((long)puVar100 + 0x30);
      phVar32._0_4_ = *(uint *)(lVar116 + 0xf8) | *(uint *)(lVar116 + 0xf0);
      uVar90 = *(uint *)(lVar116 + 0xf0) | *(uint *)(lVar116 + 0xf4);
      uVar88._0_4_ = **(uint **)((long)puVar100 + 0x38);
    }
    uVar33 = (ulong)(uint)uVar88;
    if (uVar33 != 0) {
      lVar119 = *(long *)phVar140;
      lVar116 = lVar119 + 0x10;
      *(long *)((long)puVar100 + 0x48) = lVar119 + 4;
      *(long *)((long)puVar100 + 0x230) = lVar119 + 0x40;
      uVar64 = 0;
      *(uint *)((long)puVar100 + 0x78) = uVar90;
      *(uint *)((long)puVar100 + 0x88) = (uint)phVar32;
      *(long *)((long)puVar100 + 0x50) = lVar116;
      do {
        uVar152 = (ulong)uVar64;
        lVar34 = uVar152 * 5;
        if (*(int *)(lVar119 + uVar152 * 0x14) == 0x2044) {
          uVar122 = uVar64 + 1;
          uVar76 = (ulong)uVar122;
          uVar146 = uVar152 - 1;
          do {
            if (uVar146 == 0xffffffffffffffff) {
              uVar91 = 0;
              goto joined_r0x003fad75;
            }
            uVar135 = uVar146 & 0xffffffff;
            uVar146 = uVar146 - 1;
          } while ((*(ushort *)(lVar119 + 0x10 + uVar135 * 0x14) & 0x1f) == 0xd);
          uVar91 = (int)uVar146 + 2;
joined_r0x003fad75:
          if (uVar122 < (uint)uVar88) {
            *(ulong *)((long)puVar100 + 0x18) = uVar76 * 5;
            puVar148 = (ushort *)(lVar116 + uVar76 * 0x14);
            uVar146 = uVar76;
            do {
              param_4._0_4_ = *puVar148 & 0x1f;
              param_4._4_4_ = 0;
              if ((short)(uint)param_4 != 0xd) goto LAB_003fadac;
              uVar146 = uVar146 + 1;
              puVar148 = puVar148 + 10;
            } while (uVar33 != uVar146);
            uVar146 = uVar33;
LAB_003fadac:
            uVar63 = (uint)uVar146;
            bVar153 = uVar63 == uVar122;
            if ((uVar91 == uVar64) || (uVar63 == uVar122)) {
              this_01 = *(hb_buffer_t **)((long)puVar100 + 0x10);
              if (uVar91 == uVar64) goto LAB_003fafc2;
LAB_003fafcd:
              if (bVar153) goto LAB_003fafd5;
            }
            else {
              param_4._4_4_ = 0;
              param_4._0_4_ = **(uint **)((long)puVar100 + 0x38);
              if (uVar63 <= **(uint **)((long)puVar100 + 0x38)) {
                param_4 = uVar146 & 0xffffffff;
              }
              uVar110 = (uint)param_4;
              *(ulong *)((long)puVar100 + 0x20) = uVar76;
              if (1 < uVar110 - uVar91) {
                *(long *)((long)puVar100 + 0x58) = lVar34;
                lVar116 = *(long *)((long)puVar100 + 0x10);
                *(byte *)(lVar116 + 0xc0) = *(byte *)(lVar116 + 0xc0) | 0x20;
                lVar34 = *(long *)(lVar116 + 0x70);
                *(ulong *)((long)puVar100 + 0x40) = uVar76;
                uVar90 = 0xffffffff;
                if (uVar110 != uVar91) {
                  if (*(int *)(lVar116 + 0x1c) == 2) {
                    if (uVar91 < uVar110) {
                      uVar146 = (ulong)uVar91;
                      uVar76 = param_4 - uVar146;
                      uVar90 = 0xffffffff;
                      if (8 < uVar76) {
                        uVar135 = (ulong)((uint)uVar76 & 7);
                        if (uVar135 == 0) {
                          uVar135 = 8;
                        }
                        lVar116 = (uVar135 + uVar146) - param_4;
                        puVar50 = (undefined4 *)(lVar34 + uVar146 * 0x14 + 0x94);
                        auVar167._8_4_ = 0xffffffff;
                        auVar167._0_8_ = 0xffffffffffffffff;
                        auVar167._12_4_ = 0xffffffff;
                        auVar185._8_4_ = 0xffffffff;
                        auVar185._0_8_ = 0xffffffffffffffff;
                        auVar185._12_4_ = 0xffffffff;
                        do {
                          in_XMM4._12_4_ = puVar50[-0x14];
                          in_XMM4._8_4_ = puVar50[-0x19];
                          in_XMM4._4_4_ = puVar50[-0x1e];
                          in_XMM4._0_4_ = puVar50[-0x23];
                          in_XMM5._12_4_ = *puVar50;
                          in_XMM5._8_4_ = puVar50[-5];
                          in_XMM5._4_4_ = puVar50[-10];
                          in_XMM5._0_4_ = puVar50[-0xf];
                          auVar189 = in_XMM4 ^ _DAT_006524b0;
                          auVar279 = auVar167 ^ _DAT_006524b0;
                          auVar254._0_4_ = -(uint)(auVar279._0_4_ < auVar189._0_4_);
                          auVar254._4_4_ = -(uint)(auVar279._4_4_ < auVar189._4_4_);
                          auVar254._8_4_ = -(uint)(auVar279._8_4_ < auVar189._8_4_);
                          auVar254._12_4_ = -(uint)(auVar279._12_4_ < auVar189._12_4_);
                          auVar167 = ~auVar254 & in_XMM4 | auVar167 & auVar254;
                          auVar189 = in_XMM5 ^ _DAT_006524b0;
                          auVar279 = auVar185 ^ _DAT_006524b0;
                          auVar255._0_4_ = -(uint)(auVar279._0_4_ < auVar189._0_4_);
                          auVar255._4_4_ = -(uint)(auVar279._4_4_ < auVar189._4_4_);
                          auVar255._8_4_ = -(uint)(auVar279._8_4_ < auVar189._8_4_);
                          auVar255._12_4_ = -(uint)(auVar279._12_4_ < auVar189._12_4_);
                          auVar185 = ~auVar255 & in_XMM5 | auVar185 & auVar255;
                          puVar50 = puVar50 + 0x28;
                          lVar116 = lVar116 + 8;
                        } while (lVar116 != 0);
                        uVar146 = uVar146 + (uVar76 - uVar135);
                        auVar279 = auVar167 ^ _DAT_006524b0;
                        auVar189 = auVar185 ^ _DAT_006524b0;
                        auVar256._0_4_ = -(uint)(auVar279._0_4_ < auVar189._0_4_);
                        auVar256._4_4_ = -(uint)(auVar279._4_4_ < auVar189._4_4_);
                        auVar256._8_4_ = -(uint)(auVar279._8_4_ < auVar189._8_4_);
                        auVar256._12_4_ = -(uint)(auVar279._12_4_ < auVar189._12_4_);
                        auVar226 = ~auVar256 & auVar185 | auVar167 & auVar256;
                        auVar168._0_8_ = auVar226._8_8_;
                        auVar168._8_4_ = auVar226._8_4_;
                        auVar168._12_4_ = auVar226._12_4_;
                        auVar279 = auVar226 ^ _DAT_006524b0;
                        auVar189 = auVar168 ^ _DAT_006524b0;
                        auVar223._0_4_ = -(uint)(auVar279._0_4_ < auVar189._0_4_);
                        auVar223._4_4_ = -(uint)(auVar279._4_4_ < auVar189._4_4_);
                        auVar223._8_4_ = -(uint)(auVar279._8_4_ < auVar189._8_4_);
                        auVar223._12_4_ = -(uint)(auVar279._12_4_ < auVar189._12_4_);
                        in_XMM2 = ~auVar223 & auVar168 | auVar226 & auVar223;
                        uVar30 = in_XMM2._4_4_;
                        auVar169._4_4_ = uVar30;
                        auVar169._0_4_ = uVar30;
                        auVar169._8_4_ = uVar30;
                        auVar169._12_4_ = uVar30;
                        auVar279 = in_XMM2 ^ _DAT_006524b0;
                        auVar189 = auVar169 ^ _DAT_006524b0;
                        auVar257._0_4_ = -(uint)(auVar279._0_4_ < auVar189._0_4_);
                        auVar257._4_4_ = -(uint)(auVar279._4_4_ < auVar189._4_4_);
                        auVar257._8_4_ = -(uint)(auVar279._8_4_ < auVar189._8_4_);
                        auVar257._12_4_ = -(uint)(auVar279._12_4_ < auVar189._12_4_);
                        in_XMM2 = in_XMM2 & auVar257;
                        in_XMM3 = ~auVar257 & auVar169 | in_XMM2;
                        uVar90 = in_XMM3._0_4_;
                        in_XMM6 = _DAT_006524b0;
                      }
                      lVar116 = param_4 - uVar146;
                      puVar69 = (uint *)(lVar34 + uVar146 * 0x14 + 8);
                      do {
                        if (*puVar69 < uVar90) {
                          uVar90 = *puVar69;
                        }
                        puVar69 = puVar69 + 5;
                        lVar116 = lVar116 + -1;
                      } while (lVar116 != 0);
                    }
                  }
                  else {
                    uVar90 = *(uint *)(lVar34 + 8 + (ulong)uVar91 * 0x14);
                    phVar32._0_4_ = *(uint *)(lVar34 + 8 + (ulong)(uVar110 - 1) * 0x14);
                    if ((uint)phVar32 < uVar90) {
                      uVar90 = (uint)phVar32;
                    }
                  }
                }
                *(undefined8 *)((long)puVar100 + -8) = 0x3fb09a;
                auVar279 = hb_buffer_t::_infos_set_glyph_flags
                                     (*(hb_buffer_t **)((long)puVar100 + 0x10),lVar34,uVar91,uVar110
                                      ,uVar90,3);
                in_XMM1._0_8_ = auVar279._8_8_;
                in_XMM1._8_8_ = extraout_XMM1_Qb_46;
                auVar279._8_8_ = extraout_XMM0_Qb_18;
                phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x28);
                uVar90 = *(uint *)((long)puVar100 + 0x78);
                phVar32._0_4_ = *(uint *)((long)puVar100 + 0x88);
                lVar116 = *(long *)((long)puVar100 + 0x50);
                uVar122 = (uint)*(undefined8 *)((long)puVar100 + 0x40);
                lVar34 = *(long *)((long)puVar100 + 0x58);
                uVar76 = *(ulong *)((long)puVar100 + 0x20);
              }
              if (uVar91 < uVar64) {
                uVar146 = (ulong)uVar91;
                param_4 = ~uVar146 + uVar152;
                if ((uVar64 - uVar91 & 3) != 0) {
                  *(long *)((long)puVar100 + 0x58) = lVar34;
                  puVar69 = (uint *)(*(long *)((long)puVar100 + 0x48) + uVar146 * 0x14);
                  lVar116 = 0;
                  do {
                    *puVar69 = *puVar69 | (uint)phVar32;
                    lVar116 = lVar116 + -1;
                    puVar69 = puVar69 + 5;
                  } while (-lVar116 != ((ulong)(uVar64 - uVar91) & 3));
                  uVar146 = uVar146 - lVar116;
                  lVar34 = *(long *)((long)puVar100 + 0x58);
                  lVar116 = *(long *)((long)puVar100 + 0x50);
                }
                uVar76 = *(ulong *)((long)puVar100 + 0x20);
                if ((pthread_mutex_t *)0x2 < (ulong)param_4) {
                  lVar143 = uVar152 - uVar146;
                  param_4 = *(long *)((long)puVar100 + 0x230);
                  phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                              *)(param_4 + uVar146 * 0x14);
                  do {
                    *(uint *)(phVar107 + -0x3c) = *(uint *)(phVar107 + -0x3c) | (uint)phVar32;
                    *(uint *)(phVar107 + -0x28) = *(uint *)(phVar107 + -0x28) | (uint)phVar32;
                    *(uint *)(phVar107 + -0x14) = *(uint *)(phVar107 + -0x14) | (uint)phVar32;
                    *(uint *)phVar107 = *(uint *)phVar107 | (uint)phVar32;
                    phVar107 = phVar107 + 0x50;
                    lVar143 = lVar143 + -4;
                  } while (lVar143 != 0);
                }
              }
              puVar69 = (uint *)(lVar119 + 4 + lVar34 * 4);
              *puVar69 = *puVar69 | *(uint *)(*(long *)((long)puVar100 + 0x30) + 0xf0);
              if (uVar122 < uVar63) {
                uVar122 = ~uVar64 + uVar63 & 3;
                if (uVar122 != 0) {
                  param_4 = *(long *)((long)puVar100 + 0x48) + *(long *)((long)puVar100 + 0x18) * 4;
                  lVar34 = 0;
                  do {
                    *(uint *)param_4 = *(uint *)param_4 | uVar90;
                    lVar34 = lVar34 + -1;
                    param_4 = param_4 + 0x14;
                  } while (-uVar122 != (int)lVar34);
                  uVar76 = uVar76 - lVar34;
                }
                if (2 < (uVar63 - uVar64) - 2) {
                  iVar31 = uVar63 - (int)uVar76;
                  param_4 = *(long *)((long)puVar100 + 0x230) + uVar76 * 0x14;
                  do {
                    *(uint *)(param_4 + -0x3c) = *(uint *)(param_4 + -0x3c) | uVar90;
                    (((pthread_mutex_t *)(param_4 + -0x28))->__data).__lock =
                         (((pthread_mutex_t *)(param_4 + -0x28))->__data).__lock | uVar90;
                    *(uint *)(param_4 + -0x14) = *(uint *)(param_4 + -0x14) | uVar90;
                    *(uint *)param_4 = *(uint *)param_4 | uVar90;
                    param_4 = param_4 + 0x50;
                    iVar31 = iVar31 + -4;
                  } while (iVar31 != 0);
                }
              }
              uVar64 = uVar63 - 1;
              this_01 = *(hb_buffer_t **)((long)puVar100 + 0x10);
            }
          }
          else {
            bVar153 = true;
            if (uVar91 == uVar64) {
LAB_003fafc2:
              if (((byte)this_01[0x18] & 0x40) == 0) goto LAB_003fafcd;
              *(long *)((long)puVar100 + 0x58) = lVar34;
              uVar91 = *(uint *)(this_01 + 0x60);
              if (uVar122 <= *(uint *)(this_01 + 0x60)) {
                uVar91 = uVar122;
              }
              this_01[0xc0] = (hb_buffer_t)((byte)this_01[0xc0] | 0x20);
              if (uVar64 < uVar91) {
                *(ulong *)((long)puVar100 + 0x40) = uVar76;
                lVar116 = *(long *)phVar140;
                param_4._4_4_ = 0;
                param_4._0_4_ = uVar91;
                uVar146 = uVar152;
                if ((uVar91 - uVar64 & 3) != 0) {
                  pbVar136 = (byte *)(lVar116 + *(long *)((long)puVar100 + 0x58) * 4 + 4);
                  lVar34 = 0;
                  do {
                    *pbVar136 = *pbVar136 | 2;
                    lVar34 = lVar34 + -1;
                    pbVar136 = pbVar136 + 0x14;
                  } while (-lVar34 != ((ulong)(uVar91 - uVar64) & 3));
                  uVar146 = uVar152 - lVar34;
                }
                if ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)0x2 < (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                              *)(~uVar152 + param_4)) {
                  lVar34 = param_4 - uVar146;
                  pbVar136 = (byte *)(lVar116 + uVar146 * 0x14 + 0x40);
                  do {
                    pbVar136[-0x3c] = pbVar136[-0x3c] | 2;
                    pbVar136[-0x28] = pbVar136[-0x28] | 2;
                    pbVar136[-0x14] = pbVar136[-0x14] | 2;
                    *pbVar136 = *pbVar136 | 2;
                    pbVar136 = pbVar136 + 0x50;
                    lVar34 = lVar34 + -4;
                    param_4 = (pthread_mutex_t *)0x0;
                  } while (lVar34 != 0);
                }
                lVar116 = *(long *)((long)puVar100 + 0x50);
                uVar122 = (uint)*(undefined8 *)((long)puVar100 + 0x40);
              }
              lVar34 = *(long *)((long)puVar100 + 0x58);
              if (!bVar153) goto LAB_003fad00;
            }
LAB_003fafd5:
            if (((byte)this_01[0x18] & 0x40) != 0) {
              if (*(uint *)(this_01 + 0x60) < uVar122) {
                uVar122 = *(uint *)(this_01 + 0x60);
              }
              this_01[0xc0] = (hb_buffer_t)((byte)this_01[0xc0] | 0x20);
              if (uVar64 < uVar122) {
                param_4 = *(undefined8 *)phVar140;
                uVar146 = ~uVar152;
                if ((uVar122 - uVar64 & 3) != 0) {
                  phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                              *)(param_4 + lVar34 * 4) + 4;
                  lVar34 = 0;
                  do {
                    *phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                 )((byte)*phVar107 | 2);
                    lVar34 = lVar34 + -1;
                    phVar107 = phVar107 + 0x14;
                  } while (-lVar34 != ((ulong)(uVar122 - uVar64) & 3));
                  uVar152 = uVar152 - lVar34;
                }
                if (2 < uVar146 + uVar122) {
                  lVar34 = uVar122 - uVar152;
                  param_4 = (long)(param_4 + uVar152 * 0x14) + 0x40;
                  do {
                    *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)(param_4 + -0x3c) =
                         (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                          )((byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                    *)(param_4 + -0x3c) | 2);
                    ((pthread_mutex_t *)(param_4 + -0x28))->__size[0] =
                         ((pthread_mutex_t *)(param_4 + -0x28))->__size[0] | 2;
                    *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)(param_4 + -0x14) =
                         (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                          )((byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                    *)(param_4 + -0x14) | 2);
                    *(byte *)param_4 =
                         (byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                 *)param_4 | 2;
                    param_4 = param_4 + 0x50;
                    lVar34 = lVar34 + -4;
                  } while (lVar34 != 0);
                }
              }
            }
          }
        }
LAB_003fad00:
        uVar64 = uVar64 + 1;
      } while (uVar64 < (uint)uVar88);
    }
  }
  lVar116 = *(long *)((long)puVar100 + 0x30);
  pcVar86 = *(code **)(*(long *)(lVar116 + 0x80) + 0x40);
  lVar119 = *(long *)((long)puVar100 + 8);
  if (pcVar86 != (code *)0x0) {
    *(undefined8 *)((long)puVar100 + -8) = 0x3f93ac;
    auVar279 = (*pcVar86)(*(undefined8 *)((long)puVar100 + 0x60),this_01,lVar119);
    in_XMM1._0_8_ = auVar279._8_8_;
    in_XMM1._8_8_ = extraout_XMM1_Qb_36;
    auVar279._8_8_ = extraout_XMM0_Qb_17;
  }
  lVar34 = *(long *)((long)puVar100 + 0x70);
  if (*(int *)((long)puVar100 + 0x68) != 0) {
    uVar88._0_4_ = *(uint *)((long)puVar100 + 0x68);
    uVar33 = 0;
    do {
      lVar143 = uVar33 * 0x10;
      uVar90 = *(uint *)(lVar34 + 8 + lVar143);
      if (((uVar90 != 0) || (*(int *)(lVar34 + 0xc + lVar143) != -1)) &&
         (0 < *(int *)(lVar116 + 0x9c))) {
        param_4 = *(long *)(lVar116 + 0xa0);
        iVar121 = *(int *)(lVar116 + 0x9c) + -1;
        iVar31 = 0;
        do {
          while( true ) {
            uVar64 = (uint)(iVar121 + iVar31) >> 1;
            uVar152 = (ulong)uVar64;
            phVar32._0_4_ = *(uint *)(param_4 + uVar152 * 0x24);
            if (*(uint *)(lVar34 + lVar143) < (uint)phVar32) break;
            if (*(uint *)(lVar34 + lVar143) <= (uint)phVar32) {
              phVar32._0_4_ =
                   *(uint *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                              *)(param_4 + 0x18) + uVar152 * 0x24);
              if ((uint)phVar32 != 0) {
                iVar31 = *(int *)(lVar34 + 4 + lVar143);
                hVar8 = ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                          *)(param_4 + 0x14))[uVar152 * 0x24];
                param_4._1_7_ = (undefined7)((ulong)param_4 >> 8);
                param_4._0_1_ = hVar8;
                uVar64 = **(uint **)((long)puVar100 + 0x38);
                if ((ulong)uVar64 != 0) {
                  uVar122 = *(uint *)(lVar34 + 0xc + lVar143);
                  param_4._4_4_ = 0;
                  param_4._0_4_ = uVar122;
                  lVar143 = **(long **)((long)puVar100 + 0x28);
                  lVar115 = 0;
                  do {
                    uVar91 = *(uint *)(lVar143 + 8 + lVar115);
                    if ((uVar90 <= uVar91) && (uVar91 < uVar122)) {
                      *(uint *)(lVar143 + 4 + lVar115) =
                           *(uint *)(lVar143 + 4 + lVar115) & ~(uint)phVar32 |
                           iVar31 << ((byte)hVar8 & 0x1f) & (uint)phVar32;
                    }
                    lVar115 = lVar115 + 0x14;
                  } while ((ulong)uVar64 * 0x14 != lVar115);
                }
              }
              goto LAB_003f93d0;
            }
            iVar31 = uVar64 + 1;
            if (iVar121 < iVar31) goto LAB_003f93d0;
          }
          iVar121 = uVar64 - 1;
        } while (iVar31 <= iVar121);
      }
LAB_003f93d0:
      uVar33 = uVar33 + 1;
    } while (uVar33 != (uint)uVar88);
  }
  if ((*(byte *)(lVar116 + 0x108) & 0x80) == 0) {
LAB_003f94d3:
    uVar88._0_4_ = **(uint **)((long)puVar100 + 0x38);
    pGVar139 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)((long)puVar100 + 0x28);
    if ((ulong)(uint)uVar88 != 0) {
      lVar116 = *(long *)pGVar139;
      if ((ulong)(uint)uVar88 - 1 < 3) {
        uVar33 = 0;
      }
      else {
        puVar50 = (undefined4 *)(lVar116 + 0x48);
        uVar33 = 0;
        do {
          puVar50[-0x12] = puVar50[-0xf];
          puVar50[-0xd] = puVar50[-10];
          puVar50[-8] = puVar50[-5];
          puVar50[-3] = *puVar50;
          uVar33 = uVar33 + 4;
          puVar50 = puVar50 + 0x14;
        } while (((uint)uVar88 & 0xfffffffc) != uVar33);
      }
      param_4 = (pthread_mutex_t *)0x0;
      if ((ulong)((uint)uVar88 & 3) != 0) {
        lVar116 = lVar116 + uVar33 * 0x14;
        param_4 = (ulong)((uint)uVar88 & 3) * 0x14;
        lVar34 = 0;
        do {
          *(undefined4 *)(lVar34 + lVar116) = *(undefined4 *)(lVar34 + 0xc + lVar116);
          lVar34 = lVar34 + 0x14;
        } while (param_4 != lVar34);
      }
    }
  }
  else {
    uVar33 = (ulong)**(uint **)((long)puVar100 + 0x38);
    pGVar139 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)((long)puVar100 + 0x28);
    param_4 = (pthread_mutex_t *)0x0;
    if (uVar33 != 0) {
      lVar116 = *(long *)pGVar139;
      param_4 = uVar33 * 4;
      lVar34 = 0;
      do {
        uVar29 = *(ushort *)(lVar116 + 0x10 + lVar34);
        if ((uVar29 & 0x1f) == 0xc) {
          uVar79 = uVar29 >> 8;
          if (0xc7ff < uVar29) goto _hb_ot_shape_switchD_003fd3df_caseD_0;
          uVar88._0_4_ = *(uint *)(lVar116 + lVar34);
          if (((uint)uVar88 & 0xffffff00) == 0xe00) {
            if (uVar29 < 0x100) {
              uVar128 = 0;
              switch((uint)uVar88) {
              case 0xe31:
              case 0xe34:
              case 0xe35:
              case 0xe36:
              case 0xe37:
              case 0xe47:
              case 0xe4c:
              case 0xe4d:
              case 0xe4e:
                uVar128 = 0xe8;
                break;
              case 0xeb1:
              case 0xeb4:
              case 0xeb5:
              case 0xeb6:
              case 0xeb7:
              case 0xebb:
              case 0xecc:
              case 0xecd:
                uVar128 = 0xe6;
                break;
              case 0xebc:
                uVar128 = 0xdc;
              }
            }
            else {
              uVar128 = 0xde;
              if ((uint)uVar88 != 0xe3a) goto LAB_003fd3c5;
            }
_hb_ot_shape_switchD_003fd3df_caseD_1:
            uVar79 = uVar128;
          }
          else {
LAB_003fd3c5:
            uVar79 = 0xdc;
            uVar128 = uVar29 >> 8;
            switch((uVar29 >> 8) + 0x7f & 0xff) {
            case 0:
            case 2:
            case 0x8e:
            case 0x8f:
            case 0x90:
            case 0x91:
            case 0x92:
            case 0x93:
            case 0x94:
            case 0x95:
            case 0x96:
            case 0x97:
            case 0x98:
            case 0x9d:
            case 0xa0:
            case 0xf5:
              break;
            default:
              goto _hb_ot_shape_switchD_003fd3df_caseD_1;
            case 3:
            case 0x99:
            case 0x9a:
            case 0x9b:
            case 0x9c:
            case 0x9e:
            case 0x9f:
            case 0xa1:
            case 0xa2:
            case 0xa3:
            case 0xf9:
              uVar79 = 0xe6;
              break;
            case 0x82:
              uVar79 = 0xde;
              break;
            case 0x89:
            case 0xea:
              uVar79 = 0xe8;
              break;
            case 0x8a:
            case 0x8d:
              uVar79 = 0xe4;
              break;
            case 0x8c:
              uVar79 = 0xd6;
            }
          }
_hb_ot_shape_switchD_003fd3df_caseD_0:
          param_4 = (ulong)uVar29 & 0xff;
          *(ushort *)(lVar116 + 0x10 + lVar34) = uVar79 << 8 | (ushort)param_4;
        }
        lVar34 = lVar34 + 0x14;
      } while (uVar33 * 0x14 != lVar34);
      goto LAB_003f94d3;
    }
  }
  *(undefined4 *)(this_01 + 0x30) = 2;
  this_01[0xb8] = (hb_buffer_t)((byte)this_01[0xb8] & 0xf0 | 7);
  lVar116 = *(long *)(lVar119 + 0x20);
  paVar54 = *(accelerator_t **)(lVar116 + 0x128);
  while (paVar54 == (accelerator_t *)0x0) {
    lVar119 = *(long *)(lVar116 + 0x68);
    if (lVar119 == 0) {
LAB_003fdb8d:
      paVar54 = (accelerator_t *)&_hb_NullPool;
      pGVar139 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)((long)puVar100 + 0x28);
      break;
    }
    *(undefined8 *)((long)puVar100 + -8) = 0x3fdb30;
    paVar54 = calloc(1,0x218);
    if (paVar54 == (accelerator_t *)0x0) {
      LOCK();
      bVar153 = *(long *)(lVar116 + 0x128) == 0;
      if (bVar153) {
        *(long *)(lVar116 + 0x128) = (long)&_hb_NullPool;
      }
      UNLOCK();
      auVar279 = extraout_XMM0_31;
      if (bVar153) goto LAB_003fdb8d;
    }
    else {
      *(undefined8 *)((long)puVar100 + -8) = 0x3fdb43;
      auVar279 = OT::GDEF::accelerator_t::accelerator_t
                           (paVar54,lVar119,extraout_RDX_09,param_4,pGVar139);
      in_XMM1._0_8_ = auVar279._8_8_;
      in_XMM1._8_8_ = extraout_XMM1_Qb_57;
      auVar279._8_8_ = extraout_XMM0_Qb_23;
      LOCK();
      bVar153 = *(long *)(lVar116 + 0x128) == 0;
      if (bVar153) {
        *(long *)(lVar116 + 0x128) = (long)paVar54;
      }
      UNLOCK();
      pGVar139 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)((long)puVar100 + 0x28);
      if (bVar153) break;
      *(undefined8 *)((long)puVar100 + -8) = 0x3fdb61;
      OT::GDEF::accelerator_t::~accelerator_t(paVar54);
      in_XMM1._8_8_ = extraout_XMM1_Qb_58;
      in_XMM1._0_8_ = extraout_XMM1_Qa_40;
      *(undefined8 *)((long)puVar100 + -8) = 0x3fdb69;
      free(paVar54);
      auVar279 = extraout_XMM0_32;
    }
    pGVar139 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)((long)puVar100 + 0x28);
    paVar54 = *(accelerator_t **)(lVar116 + 0x128);
  }
  uVar88._0_4_ = **(uint **)((long)puVar100 + 0x38);
  if ((ulong)(uint)uVar88 != 0) {
    lVar116 = *(long *)pGVar139;
    lVar119 = 0;
    do {
      uVar90 = *(uint *)(lVar116 + lVar119);
      sVar9 = *(short *)(paVar54 + (ulong)(uVar90 & 0xff) * 2 + 0x18);
      if ((sVar9 == -1) || ((uint)(int)sVar9 >> 3 != uVar90 >> 8)) {
        puVar50 = *(undefined4 **)paVar54;
        this_00 = (GDEF *)&_hb_NullPool;
        if (puVar50 == (undefined4 *)0x0) {
          puVar50 = &_hb_NullPool;
        }
        if (3 < (uint)puVar50[6]) {
          this_00 = *(GDEF **)(puVar50 + 4);
        }
        *(undefined8 *)((long)puVar100 + -8) = 0x3f963d;
        phVar32._0_4_ = OT::GDEF::get_glyph_props(this_00,uVar90);
        auVar279 = extraout_XMM0_28;
        if (*(long *)paVar54 == 0) {
          pGVar139 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)((long)puVar100 + 0x28);
        }
        else {
          pGVar139 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)((long)puVar100 + 0x28);
          if ((uVar90 < 0x200000) && ((uint)phVar32 < 8)) {
            *(ushort *)(paVar54 + (ulong)(uVar90 & 0xff) * 2 + 0x18) =
                 (ushort)(uint)phVar32 | (ushort)(uVar90 >> 5) & 0xfff8;
          }
        }
      }
      else {
        phVar32._0_4_ = (int)sVar9 & 7;
      }
      *(short *)(lVar116 + 0xc + lVar119) = (short)(uint)phVar32;
      *(undefined1 *)(lVar116 + 0xe + lVar119) = 0;
      lVar119 = lVar119 + 0x14;
    } while ((ulong)(uint)uVar88 * 0x14 != lVar119);
  }
  auVar280._8_8_ = in_XMM1._0_8_;
  auVar280._0_8_ = auVar279._0_8_;
  lVar116 = *(long *)((long)puVar100 + 0x30);
  uVar29 = *(ushort *)(lVar116 + 0x108);
  if ((uVar29 & 0x40) == 0) {
    phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x10);
    lVar119 = *(long *)((long)puVar100 + 8);
  }
  else {
    uVar88._0_4_ = **(uint **)((long)puVar100 + 0x38);
    phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x10);
    lVar119 = *(long *)((long)puVar100 + 8);
    if ((ulong)(uint)uVar88 != 0) {
      lVar34 = *(long *)pGVar139;
      lVar143 = 0;
      do {
        uVar29 = *(ushort *)(lVar34 + 0x10 + lVar143);
        if (((uVar29 & 0x1f) != 0xc) ||
           ((uVar120 = 8, (uVar29 & 0x20) != 0 && ((*(byte *)(lVar34 + 0xc + lVar143) & 0x10) == 0))
           )) {
          uVar120 = 2;
        }
        *(undefined2 *)(lVar34 + 0xc + lVar143) = uVar120;
        lVar143 = lVar143 + 0x14;
      } while ((ulong)(uint)uVar88 * 0x14 != lVar143);
      uVar29 = *(ushort *)(lVar116 + 0x108);
    }
  }
  if ((uVar29 & 0x2000) == 0) {
    lVar34 = *(long *)(lVar119 + 0x20);
    lVar143 = *(long *)(lVar34 + 0x130);
    *(long *)((long)puVar100 + 0x20) = lVar143;
    while (lVar143 == 0) {
      uVar88 = in_XMM1._0_8_;
      uVar129 = auVar279._0_8_;
      lVar116 = *(long *)(lVar34 + 0x68);
      if (lVar116 == 0) {
        *(uint **)((long)puVar100 + 0x20) = &_hb_NullPool;
LAB_003fe723:
        auVar280._8_8_ = uVar88;
        auVar280._0_8_ = uVar129;
        lVar116 = *(long *)((long)puVar100 + 0x30);
        break;
      }
      *(undefined8 *)((long)puVar100 + -8) = 0x3fdc80;
      paVar55 = calloc(1,0x18);
      uVar88 = in_XMM1._0_8_;
      uVar129 = extraout_XMM0_33._0_8_;
      if (paVar55 == (accelerator_t<OT::Layout::GSUB> *)0x0) {
        LOCK();
        bVar153 = *(long *)(lVar34 + 0x130) == 0;
        if (bVar153) {
          *(long *)(lVar34 + 0x130) = (long)&_hb_NullPool;
        }
        UNLOCK();
        auVar279 = extraout_XMM0_33;
        if (bVar153) {
          *(uint **)((long)puVar100 + 0x20) = &_hb_NullPool;
          phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x10);
          lVar119 = *(long *)((long)puVar100 + 8);
          goto LAB_003fe723;
        }
      }
      else {
        *(undefined8 *)((long)puVar100 + -8) = 0x3fdc93;
        auVar280 = OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::accelerator_t(paVar55,lVar116);
        *(accelerator_t<OT::Layout::GSUB> **)((long)puVar100 + 0x20) = paVar55;
        LOCK();
        bVar153 = *(long *)(lVar34 + 0x130) == 0;
        if (bVar153) {
          *(long *)(lVar34 + 0x130) = (long)paVar55;
        }
        UNLOCK();
        lVar116 = *(long *)((long)puVar100 + 0x30);
        if (bVar153) break;
        paVar55 = *(accelerator_t<OT::Layout::GSUB> **)((long)puVar100 + 0x20);
        *(undefined8 *)((long)puVar100 + -8) = 0x3fdcbb;
        OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::~accelerator_t(paVar55);
        in_XMM1._8_8_ = extraout_XMM1_Qb_59;
        in_XMM1._0_8_ = extraout_XMM1_Qa_41;
        *(undefined8 *)((long)puVar100 + -8) = 0x3fdcc3;
        free(paVar55);
        auVar279 = extraout_XMM0_34;
      }
      auVar280._8_8_ = in_XMM1._0_8_;
      auVar280._0_8_ = auVar279._0_8_;
      lVar143 = *(long *)(lVar34 + 0x130);
      *(long *)((long)puVar100 + 0x20) = lVar143;
      phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x10);
      lVar119 = *(long *)((long)puVar100 + 8);
      lVar116 = *(long *)((long)puVar100 + 0x30);
    }
    if (*(long *)(phVar140 + 0xd0) == 0) {
LAB_003f976d:
      puVar131 = *(undefined8 **)((long)puVar100 + 0x20);
      pGVar139 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)*puVar131;
      *(undefined8 *)((long)puVar100 + -8) = 0x3f978d;
      auVar275 = OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                           ((hb_ot_apply_context_t *)((long)puVar100 + 0xd0),0,lVar119,
                            (undefined4 *)phVar140,pGVar139);
      *(code **)((long)puVar100 + 0x1b8) =
           OT::Layout::GSUB_impl::SubstLookup::dispatch_recurse_func<OT::hb_ot_apply_context_t>;
      uVar33 = (ulong)*(uint *)(lVar116 + 0xcc);
      if (*(uint *)(lVar116 + 0xcc) != 0) {
        uVar152 = 0;
        uVar146 = 0;
        do {
          if (uVar152 < uVar33) {
            puVar69 = (uint *)(uVar152 * 0x10 + *(long *)(lVar116 + 0xd0));
            uVar88._0_4_ = *puVar69;
          }
          else {
            puVar69 = &_hb_NullPool;
            uVar88._0_4_ = _hb_NullPool;
          }
          if ((uint)uVar146 < (uint)uVar88) {
            *(ulong *)((long)puVar100 + 0x50) = uVar152;
            uVar146 = uVar146 & 0xffffffff;
            *(uint **)((long)puVar100 + 0x58) = puVar69;
            do {
              if (uVar146 < *(uint *)(lVar116 + 0xac)) {
                puVar148 = (ushort *)(uVar146 * 0xc + *(long *)(lVar116 + 0xb0));
              }
              else {
                puVar148 = (ushort *)&_hb_NullPool;
              }
              uVar29 = *puVar148;
              *(ulong *)((long)puVar100 + 0x18) = (ulong)uVar29;
              if ((uint)uVar29 < *(uint *)(puVar131 + 1)) {
                while( true ) {
                  uVar129 = auVar275._8_8_;
                  __ptr = *(ulong **)(puVar131[2] + *(long *)((long)puVar100 + 0x18) * 8);
                  if (__ptr != (ulong *)0x0) break;
                  puVar50 = (undefined4 *)*puVar131;
                  if (puVar50 == (undefined4 *)0x0) {
                    puVar50 = &_hb_NullPool;
                  }
                  psVar70 = (short *)&_hb_NullPool;
                  if (3 < (uint)puVar50[6]) {
                    psVar70 = *(short **)(puVar50 + 4);
                  }
                  puVar132 = (ushort *)&_hb_NullPool;
                  if (*psVar70 == 0x100) {
                    uVar29 = psVar70[4];
                    puVar51 = (ushort *)&_hb_NullPool;
                    if (uVar29 != 0) {
                      puVar51 = (ushort *)
                                ((long)psVar70 + (ulong)(ushort)(uVar29 << 8 | uVar29 >> 8));
                    }
                    puVar132 = (ushort *)&_hb_NullPool;
                    if (*(ushort *)((long)puVar100 + 0x18) < (ushort)(*puVar51 << 8 | *puVar51 >> 8)
                       ) {
                      uVar29 = puVar51[*(long *)((long)puVar100 + 0x18) + 1];
                      puVar132 = (ushort *)&_hb_NullPool;
                      if (uVar29 != 0) {
                        puVar132 = (ushort *)
                                   ((long)puVar51 + (ulong)(ushort)(uVar29 << 8 | uVar29 >> 8));
                      }
                    }
                  }
                  *(undefined8 *)((long)puVar100 + -8) = 0x3f98fe;
                  __ptr = OT::hb_ot_layout_lookup_accelerator_t::
                          create<OT::Layout::GSUB_impl::SubstLookup>(puVar132);
                  auVar275._8_8_ = uVar129;
                  auVar275._0_8_ = extraout_XMM0_Qa_12;
                  if (__ptr == (ulong *)0x0) goto LAB_003f9820;
                  LOCK();
                  bVar153 = *(long *)(puVar131[2] + *(long *)((long)puVar100 + 0x18) * 8) == 0;
                  if (bVar153) {
                    *(long *)(puVar131[2] + *(long *)((long)puVar100 + 0x18) * 8) = (long)__ptr;
                  }
                  UNLOCK();
                  if (bVar153) break;
                  *(undefined8 *)((long)puVar100 + -8) = 0x3f9925;
                  free(__ptr);
                  auVar275._8_8_ = uVar129;
                  auVar275._0_8_ = extraout_XMM0_Qa_13;
                }
                uVar129 = auVar275._8_8_;
                if (*(long *)(*(long *)((long)puVar100 + 0x10) + 0xd0) != 0) {
                  uVar88._0_4_ = *(uint *)(puVar148 + 4);
                  *(ulong *)((long)puVar100 + -8) = (ulong)((uint)uVar88 & 0xff);
                  *(ulong *)((long)puVar100 + -0x10) = (ulong)((uint)uVar88 >> 8 & 0xff);
                  puVar131 = *(undefined8 **)((long)puVar100 + 0x20);
                  *(undefined8 *)((long)puVar100 + -0x18) = 0x3f997c;
                  bVar153 = hb_buffer_t::message
                                      (auVar275._0_8_,uVar129,in_XMM2._0_8_,in_XMM3._0_8_,
                                       in_XMM4._0_8_,in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,
                                       *(hb_buffer_t **)((long)puVar100 + 0x10),
                                       *(undefined8 *)((long)puVar100 + 8),
                                       "start lookup %u feature \'%c%c%c%c\'",
                                       *(undefined8 *)((long)puVar100 + 0x18),
                                       (ulong)((uint)uVar88 >> 0x18),
                                       (ulong)((uint)uVar88 >> 0x10 & 0xff),
                                       *(undefined1 *)((long)puVar100 + -0x10));
                  auVar275._8_8_ = uVar129;
                  auVar275._0_8_ = extraout_XMM0_Qa_14;
                  if (!bVar153) goto LAB_003f9820;
                }
                uVar129 = auVar275._8_8_;
                if ((((*__ptr & *(ulong *)((long)puVar100 + 0x1e0)) == 0) ||
                    ((__ptr[1] & *(ulong *)((long)puVar100 + 0x1e8)) == 0)) ||
                   ((*(ulong *)((long)puVar100 + 0x1f0) & __ptr[2]) == 0)) {
                  if (*(long *)(*(long *)((long)puVar100 + 0x10) + 0xd0) != 0) {
                    uVar88._0_4_ = *(uint *)(puVar148 + 4);
                    *(ulong *)((long)puVar100 + -8) = (ulong)((uint)uVar88 & 0xff);
                    *(ulong *)((long)puVar100 + -0x10) = (ulong)((uint)uVar88 >> 8 & 0xff);
                    puVar131 = *(undefined8 **)((long)puVar100 + 0x20);
                    *(undefined8 *)((long)puVar100 + -0x18) = 0x3f9d10;
                    hb_buffer_t::message
                              (auVar275._0_8_,uVar129,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                               in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,
                               *(hb_buffer_t **)((long)puVar100 + 0x10),
                               *(undefined8 *)((long)puVar100 + 8),
                               "skipped lookup %u feature \'%c%c%c%c\' because no glyph matches",
                               *(undefined8 *)((long)puVar100 + 0x18),(ulong)((uint)uVar88 >> 0x18),
                               (ulong)((uint)uVar88 >> 0x10 & 0xff),
                               *(undefined1 *)((long)puVar100 + -0x10));
                    auVar275._8_8_ = uVar129;
                    auVar275._0_8_ = extraout_XMM0_Qa_15;
                    goto LAB_003f9d14;
                  }
                }
                else {
                  *(int *)((long)puVar100 + 0x200) = (int)*(undefined8 *)((long)puVar100 + 0x18);
                  *(undefined4 *)((long)puVar100 + 0x1fc) = *(undefined4 *)(puVar148 + 2);
                  *(undefined8 *)((long)puVar100 + 0x218) = 0xffffffff;
                  *(byte *)((long)puVar100 + 0x20e) = (byte)puVar148[1] >> 1 & 1;
                  *(byte *)((long)puVar100 + 0x20d) = (byte)puVar148[1] & 1;
                  *(byte *)((long)puVar100 + 0x210) = (byte)puVar148[1] >> 2 & 1;
                  *(byte *)((long)puVar100 + 0x20f) = (byte)puVar148[1] >> 3 & 1;
                  puVar50 = (undefined4 *)*puVar131;
                  if (puVar50 == (undefined4 *)0x0) {
                    puVar50 = &_hb_NullPool;
                  }
                  psVar70 = (short *)&_hb_NullPool;
                  if (3 < (uint)puVar50[6]) {
                    psVar70 = *(short **)(puVar50 + 4);
                  }
                  psVar138 = (short *)&_hb_NullPool;
                  if (*psVar70 == 0x100) {
                    uVar29 = psVar70[4];
                    puVar132 = (ushort *)&_hb_NullPool;
                    if (uVar29 != 0) {
                      puVar132 = (ushort *)
                                 ((long)psVar70 + (ulong)(ushort)(uVar29 << 8 | uVar29 >> 8));
                    }
                    psVar138 = (short *)&_hb_NullPool;
                    if (*(ushort *)((long)puVar100 + 0x18) <
                        (ushort)(*puVar132 << 8 | *puVar132 >> 8)) {
                      uVar29 = puVar132[*(long *)((long)puVar100 + 0x18) + 1];
                      psVar138 = (short *)&_hb_NullPool;
                      if (uVar29 != 0) {
                        psVar138 = (short *)((long)puVar132 +
                                            (ulong)(ushort)(uVar29 << 8 | uVar29 >> 8));
                      }
                    }
                  }
                  phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x170);
                  iVar31 = *(int *)(phVar140 + 0x60);
                  if ((iVar31 == 0) || (*(int *)((long)puVar100 + 0x1fc) == 0)) {
LAB_003f9d14:
                    lVar116 = *(long *)(*(long *)((long)puVar100 + 0x10) + 0xd0);
                  }
                  else {
                    uVar79 = psVar138[2] << 8 | (ushort)psVar138[2] >> 8;
                    uVar29 = (ushort)psVar138[1] >> 8;
                    uVar128 = psVar138[1] << 8 | uVar29;
                    uVar88._0_4_ = (uint)uVar128;
                    if ((uVar29 & 0x10) != 0) {
                      uVar88._0_4_ = CONCAT22(psVar138[(ulong)uVar79 + 3] << 8 |
                                              (ushort)psVar138[(ulong)uVar79 + 3] >> 8,uVar128);
                    }
                    phVar3 = (hb_ot_apply_context_t *)((long)puVar100 + 0xd0);
                    *(uint *)((long)puVar100 + 0x204) = (uint)uVar88;
                    *(hb_ot_apply_context_t **)((long)puVar100 + 0xe0) = phVar3;
                    *(int *)((long)puVar100 + 0x110) = iVar31;
                    *(undefined1 (*) [16])((long)puVar100 + 0xf8) = (undefined1  [16])0x0;
                    *(undefined8 *)((long)puVar100 + 0x108) = 0;
                    *(uint *)((long)puVar100 + 0xe8) = (uint)uVar88;
                    uVar26 = *(undefined1 *)((long)puVar100 + 0x20f);
                    if (*(int *)((long)puVar100 + 0x158) != 0) {
                      uVar26 = 0;
                    }
                    bVar153 = *(int *)((long)puVar100 + 0x158) == 1;
                    *(bool *)((long)puVar100 + 0xf0) = bVar153;
                    *(undefined1 *)((long)puVar100 + 0xf1) = *(undefined1 *)((long)puVar100 + 0x20e)
                    ;
                    *(bool *)((long)puVar100 + 0xf2) = bVar153;
                    *(int *)((long)puVar100 + 0xec) = *(int *)((long)puVar100 + 0x1fc);
                    *(undefined1 *)((long)puVar100 + 0xf3) = uVar26;
                    *(undefined1 *)((long)puVar100 + 0xf4) = 0;
                    *(hb_ot_apply_context_t **)((long)puVar100 + 0x120) = phVar3;
                    *(int *)((long)puVar100 + 0x150) = iVar31;
                    *(undefined1 (*) [16])((long)puVar100 + 0x138) = (undefined1  [16])0x0;
                    *(undefined8 *)((long)puVar100 + 0x148) = 0;
                    *(uint *)((long)puVar100 + 0x128) = (uint)uVar88;
                    *(bool *)((long)puVar100 + 0x132) = bVar153;
                    *(bool *)((long)puVar100 + 0x130) =
                         *(char *)((long)puVar100 + 0x20d) != '\0' || bVar153;
                    *(undefined1 *)((long)puVar100 + 0x131) = 1;
                    *(undefined4 *)((long)puVar100 + 300) = 0xffffffff;
                    *(undefined1 *)((long)puVar100 + 0x133) = uVar26;
                    *(undefined1 *)((long)puVar100 + 0x134) = 0;
                    sVar9 = *psVar138;
                    if (sVar9 == 0x700) {
                      puVar132 = (ushort *)&_hb_NullPool;
                      if (psVar138[2] != 0) {
                        puVar132 = (ushort *)(psVar138 + 3);
                      }
                      uVar29 = *puVar132;
                      psVar70 = (short *)&_hb_NullPool;
                      puVar131 = *(undefined8 **)((long)puVar100 + 0x20);
                      if (uVar29 != 0) {
                        psVar70 = (short *)((long)psVar138 +
                                           (ulong)(ushort)(uVar29 << 8 | uVar29 >> 8));
                      }
                      if (*psVar70 == 0x100) {
                        sVar9 = psVar70[1];
                        goto joined_r0x003f9e77;
                      }
                    }
                    else {
                      puVar131 = *(undefined8 **)((long)puVar100 + 0x20);
joined_r0x003f9e77:
                      if (sVar9 == 0x800) {
                        *(int *)(phVar140 + 0x5c) = *(int *)(phVar140 + 0x60) + -1;
                        *(undefined8 *)((long)puVar100 + -8) = 0x3f9e92;
                        auVar275 = apply_backward(phVar3,__ptr,(uint)uVar79);
                        goto LAB_003f9d14;
                      }
                    }
                    *(undefined2 *)(phVar140 + 0x5a) = 1;
                    *(undefined4 *)(phVar140 + 100) = 0;
                    *(undefined8 *)(phVar140 + 0x78) = *(undefined8 *)(phVar140 + 0x70);
                    *(undefined4 *)(phVar140 + 0x5c) = 0;
                    *(undefined8 *)((long)puVar100 + -8) = 0x3f9c1e;
                    auVar275 = apply_forward(phVar3,__ptr,(uint)uVar79);
                    uVar129 = auVar275._8_8_;
                    if (phVar140[0x58] != (hb_buffer_t)0x0) {
                      if (phVar140[0x5a] != (hb_buffer_t)0x0) {
                        iVar31 = *(int *)(phVar140 + 0x5c);
                        uVar88._0_4_ = *(int *)(phVar140 + 0x60) - iVar31;
                        pvVar123 = *(void **)(phVar140 + 0x78);
                        pvVar57 = *(void **)(phVar140 + 0x70);
                        if ((pvVar123 != pvVar57) || (*(int *)(phVar140 + 100) != iVar31)) {
                          uVar90 = *(int *)(phVar140 + 100) + (uint)uVar88;
                          if ((uVar90 == 0) || (uVar90 < *(uint *)(phVar140 + 0x68))) {
                            if (pvVar123 == pvVar57) {
LAB_003f9c76:
                              uVar90 = *(uint *)(phVar140 + 100);
                              if (*(int *)(phVar140 + 0x5c) + (uint)uVar88 < uVar90 + (uint)uVar88)
                              {
                                pvVar123 = *(void **)(phVar140 + 0x80);
                                *(void **)(phVar140 + 0x78) = pvVar123;
                                if ((ulong)uVar90 != 0) {
                                  *(undefined8 *)((long)puVar100 + -8) = 0x3f9cb0;
                                  memcpy(pvVar123,pvVar57,(ulong)uVar90 * 0x14);
                                  pvVar57 = *(void **)(phVar140 + 0x70);
                                  pvVar123 = *(void **)(phVar140 + 0x78);
                                }
                              }
                              else {
                                pvVar123 = pvVar57;
                              }
                            }
                          }
                          else {
                            *(undefined8 *)((long)puVar100 + -8) = 0x3f9ea1;
                            uVar111 = hb_buffer_t::enlarge(phVar140,uVar90);
                            auVar275._8_8_ = uVar129;
                            auVar275._0_8_ = extraout_XMM0_Qa_18;
                            if ((char)uVar111 == '\0') goto LAB_003f9d8a;
                            pvVar57 = *(void **)(phVar140 + 0x70);
                            pvVar123 = *(void **)(phVar140 + 0x78);
                            if (pvVar123 == pvVar57) goto LAB_003f9c76;
                          }
                          uVar90 = *(uint *)(phVar140 + 0x5c);
                          phVar32._0_4_ = *(uint *)(phVar140 + 100);
                          *(undefined8 *)((long)puVar100 + -8) = 0x3f9d58;
                          memmove((void *)((long)pvVar123 + (ulong)(uint)phVar32 * 0x14),
                                  (void *)((long)pvVar57 + (ulong)uVar90 * 0x14),
                                  (ulong)(uint)uVar88 * 0x14);
                          auVar275._8_8_ = uVar129;
                          auVar275._0_8_ = extraout_XMM0_Qa_16;
                          iVar31 = *(int *)(phVar140 + 100);
                        }
                        *(uint *)(phVar140 + 100) = iVar31 + (uint)uVar88;
                      }
                      if (*(long *)(phVar140 + 0x78) != *(long *)(phVar140 + 0x70)) {
                        *(long *)(phVar140 + 0x80) = *(long *)(phVar140 + 0x70);
                        *(long *)(phVar140 + 0x70) = *(long *)(phVar140 + 0x78);
                      }
                      *(undefined4 *)(phVar140 + 0x60) = *(undefined4 *)(phVar140 + 100);
                    }
LAB_003f9d8a:
                    phVar140[0x5a] = (hb_buffer_t)0x0;
                    *(undefined4 *)(phVar140 + 100) = 0;
                    *(undefined8 *)(phVar140 + 0x78) = *(undefined8 *)(phVar140 + 0x70);
                    *(undefined4 *)(phVar140 + 0x5c) = 0;
                    puVar131 = *(undefined8 **)((long)puVar100 + 0x20);
                    lVar116 = *(long *)(*(long *)((long)puVar100 + 0x10) + 0xd0);
                  }
                  if (lVar116 != 0) {
                    uVar129 = auVar275._8_8_;
                    uVar88._0_4_ = *(uint *)(puVar148 + 4);
                    *(ulong *)((long)puVar100 + -8) = (ulong)((uint)uVar88 & 0xff);
                    *(ulong *)((long)puVar100 + -0x10) = (ulong)((uint)uVar88 >> 8 & 0xff);
                    puVar131 = *(undefined8 **)((long)puVar100 + 0x20);
                    *(undefined8 *)((long)puVar100 + -0x18) = 0x3f9e01;
                    hb_buffer_t::message
                              (auVar275._0_8_,uVar129,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                               in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,
                               *(hb_buffer_t **)((long)puVar100 + 0x10),
                               *(undefined8 *)((long)puVar100 + 8),
                               "end lookup %u feature \'%c%c%c%c\'",
                               *(undefined8 *)((long)puVar100 + 0x18),(ulong)((uint)uVar88 >> 0x18),
                               (ulong)((uint)uVar88 >> 0x10 & 0xff),
                               *(undefined1 *)((long)puVar100 + -0x10));
                    auVar275._8_8_ = uVar129;
                    auVar275._0_8_ = extraout_XMM0_Qa_17;
                  }
                }
              }
LAB_003f9820:
              uVar146 = uVar146 + 1;
              puVar69 = *(uint **)((long)puVar100 + 0x58);
              lVar116 = *(long *)((long)puVar100 + 0x30);
            } while (uVar146 < *puVar69);
            lVar119 = *(long *)((long)puVar100 + 8);
            uVar152 = *(ulong *)((long)puVar100 + 0x50);
          }
          pcVar86 = *(code **)(puVar69 + 2);
          if (pcVar86 != (code *)0x0) {
            *(undefined8 *)((long)puVar100 + -8) = 0x3f9ef6;
            cVar27 = (*pcVar86)(*(undefined8 *)((long)puVar100 + 0x60),lVar119,
                                *(undefined8 *)((long)puVar100 + 0x10));
            auVar17._8_8_ = extraout_XMM1_Qa_26;
            auVar17._0_8_ = extraout_XMM0_Qa_19;
            auVar275._8_8_ = extraout_XMM1_Qa_26;
            auVar275._0_8_ = extraout_XMM0_Qa_19;
            if (cVar27 != '\0') {
              uVar88._0_4_ = **(uint **)((long)puVar100 + 0x38);
              if ((uint)uVar88 == 0) {
                uVar33 = 0;
                uVar135 = 0;
                uVar76 = 0;
              }
              else {
                puVar69 = (uint *)**(undefined8 **)((long)puVar100 + 0x28);
                uVar90 = (uint)uVar88 - 1;
                puVar144 = puVar69;
                if (uVar90 < 3) {
                  uVar33 = 0;
                }
                else {
                  phVar32._0_4_ = (uint)uVar88 & 0xfffffffc;
                  uVar33 = 0;
                  do {
                    uVar33 = uVar33 | 1L << ((ulong)(*puVar144 >> 4) & 0x3f) |
                             1L << ((ulong)(puVar144[5] >> 4) & 0x3f) |
                             1L << ((ulong)(puVar144[10] >> 4) & 0x3f) |
                             1L << ((ulong)(puVar144[0xf] >> 4) & 0x3f);
                    puVar144 = puVar144 + 0x14;
                    phVar32._0_4_ = (uint)phVar32 - 4;
                  } while ((uint)phVar32 != 0);
                }
                if (((uint)uVar88 & 3) != 0) {
                  lVar34 = 0;
                  do {
                    uVar33 = uVar33 | 1L << ((ulong)(*(uint *)((long)puVar144 + lVar34) >> 4) & 0x3f
                                            );
                    lVar34 = lVar34 + 0x14;
                  } while (((uint)uVar88 & 3) * 0x14 != (int)lVar34);
                }
                puVar144 = puVar69;
                if (uVar90 < 3) {
                  uVar135 = 0;
                }
                else {
                  phVar32._0_4_ = (uint)uVar88 & 0xfffffffc;
                  uVar135 = 0;
                  do {
                    uVar135 = uVar135 | 1L << ((ulong)(byte)*puVar144 & 0x3f) |
                              1L << ((ulong)(byte)puVar144[5] & 0x3f) |
                              1L << ((ulong)(byte)puVar144[10] & 0x3f) |
                              1L << ((ulong)(byte)puVar144[0xf] & 0x3f);
                    puVar144 = puVar144 + 0x14;
                    phVar32._0_4_ = (uint)phVar32 - 4;
                  } while ((uint)phVar32 != 0);
                }
                if (((uint)uVar88 & 3) != 0) {
                  lVar34 = 0;
                  do {
                    uVar135 = uVar135 | 1L << ((ulong)*(byte *)((long)puVar144 + lVar34) & 0x3f);
                    lVar34 = lVar34 + 0x14;
                  } while (((uint)uVar88 & 3) * 0x14 != (int)lVar34);
                }
                if (uVar90 < 3) {
                  uVar76 = 0;
                }
                else {
                  uVar90 = (uint)uVar88 & 0xfffffffc;
                  uVar76 = 0;
                  do {
                    uVar76 = uVar76 | 1L << ((ulong)(*puVar69 >> 9) & 0x3f) |
                             1L << ((ulong)(puVar69[5] >> 9) & 0x3f) |
                             1L << ((ulong)(puVar69[10] >> 9) & 0x3f) |
                             1L << ((ulong)(puVar69[0xf] >> 9) & 0x3f);
                    puVar69 = puVar69 + 0x14;
                    uVar90 = uVar90 - 4;
                  } while (uVar90 != 0);
                }
                if (((uint)uVar88 & 3) != 0) {
                  lVar34 = 0;
                  do {
                    uVar76 = uVar76 | 1L << ((ulong)(*(uint *)((long)puVar69 + lVar34) >> 9) & 0x3f)
                    ;
                    lVar34 = lVar34 + 0x14;
                  } while (((uint)uVar88 & 3) * 0x14 != (int)lVar34);
                }
                puVar131 = *(undefined8 **)((long)puVar100 + 0x20);
              }
              *(ulong *)((long)puVar100 + 0x1e0) = uVar33;
              *(ulong *)((long)puVar100 + 0x1e8) = uVar135;
              *(ulong *)((long)puVar100 + 0x1f0) = uVar76;
              auVar275 = auVar17;
            }
          }
          uVar152 = uVar152 + 1;
          uVar33 = (ulong)*(uint *)(lVar116 + 0xcc);
        } while (uVar152 < uVar33);
      }
      *(undefined8 *)((long)puVar100 + -8) = 0x3fa0c0;
      free(*(void **)((long)puVar100 + 0x1d8));
      *(undefined8 *)((long)puVar100 + -8) = 0x3fa0cd;
      auVar279 = hb_sanitize_context_t::~hb_sanitize_context_t
                           ((hb_sanitize_context_t *)((long)puVar100 + 0x178));
      phVar140 = *(hb_buffer_t **)((long)puVar100 + 0x10);
      if (*(long *)(phVar140 + 0xd0) != 0) {
        uVar88._0_4_ = *(uint *)(lVar116 + 0x88);
        *(ulong *)((long)puVar100 + -0x10) = (ulong)((uint)uVar88 & 0xff);
        *(undefined8 *)((long)puVar100 + -0x18) = 0x3fa112;
        hb_buffer_t::message
                  (auVar279._0_8_,auVar279._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                   in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,phVar140,lVar119,
                   "end table GSUB script tag \'%c%c%c%c\'",(ulong)((uint)uVar88 >> 0x18),
                   (ulong)((uint)uVar88 >> 0x10 & 0xff),(ulong)((uint)uVar88 >> 8 & 0xff),
                   *(undefined1 *)((long)puVar100 + -0x10));
      }
    }
    else {
      uVar88._0_4_ = *(uint *)(lVar116 + 0x88);
      *(ulong *)((long)puVar100 + -0x10) = (ulong)((uint)uVar88 & 0xff);
      *(undefined8 *)((long)puVar100 + -0x18) = 0x3f9761;
      bVar153 = hb_buffer_t::message
                          (auVar280._0_8_,auVar280._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                           in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,phVar140,lVar119,
                           "start table GSUB script tag \'%c%c%c%c\'",(ulong)((uint)uVar88 >> 0x18),
                           (ulong)((uint)uVar88 >> 0x10 & 0xff),(ulong)((uint)uVar88 >> 8 & 0xff),
                           *(undefined1 *)((long)puVar100 + -0x10));
      if (bVar153) goto LAB_003f976d;
    }
    uVar88._0_4_ = *(uint *)(lVar116 + 0x108);
  }
  else {
    *(undefined8 *)((long)puVar100 + -8) = 0x3fdbb4;
    hb_aat_layout_substitute
              (*(undefined8 *)((long)puVar100 + 0x60),lVar119,phVar140,
               *(undefined8 *)((long)puVar100 + 0x70),*(undefined4 *)((long)puVar100 + 0x68));
    uVar88._0_4_ = *(uint *)(lVar116 + 0x108);
  }
  if ((~(uint)uVar88 & 0x2200) == 0) {
    *(undefined8 *)((long)puVar100 + -8) = 0x3fa12d;
    hb_aat_layout_remove_deleted_glyphs(phVar140);
  }
  *(undefined2 *)(phVar140 + 0x5a) = 0x100;
  *(undefined4 *)(phVar140 + 100) = 0;
  uVar129 = *(undefined8 *)(phVar140 + 0x70);
  *(undefined8 *)((long)puVar100 + 0x18) = uVar129;
  *(undefined8 *)(phVar140 + 0x78) = uVar129;
  uVar88._0_4_ = *(uint *)(phVar140 + 0x60);
  if ((uint)uVar88 * 0x14 != 0) {
    pvVar57 = *(void **)(phVar140 + 0x80);
    *(undefined8 *)((long)puVar100 + -8) = 0x3fa16a;
    memset(pvVar57,0,(ulong)((uint)uVar88 * 0x14));
    uVar88._0_4_ = *(uint *)(phVar140 + 0x60);
    *(undefined8 *)((long)puVar100 + 0x18) = *(undefined8 *)(phVar140 + 0x70);
  }
  lVar116 = *(long *)(phVar140 + 0x80);
  if ((*(uint *)(phVar140 + 0x38) & 0xfffffffe) == 4) {
    lVar119 = *(long *)(*(long *)((long)puVar100 + 8) + 0x90);
    uVar129 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
    lVar34 = *(long *)(lVar119 + 0x10);
    pcVar86 = *(code **)(lVar119 + 0x58);
    if (lVar34 == 0) {
      uVar111 = 0;
    }
    else {
      uVar111 = *(undefined8 *)(lVar34 + 0x38);
    }
    puVar99 = *(undefined **)((long)puVar100 + 8);
    *(undefined8 *)((long)puVar100 + -8) = uVar111;
    *(undefined8 *)((long)puVar100 + -0x10) = 0x14;
    *(undefined8 *)((long)puVar100 + -0x18) = 0x3fa281;
    auVar279 = (*pcVar86)(puVar99,uVar129,(uint)uVar88,*(undefined8 *)((long)puVar100 + 0x18),0x14,
                          lVar116);
    auVar184._0_8_ = auVar279._8_8_;
    uVar129 = auVar279._0_8_;
    auVar184._8_8_ = extraout_XMM1_Qb_37;
    while (*(undefined **)(*(long *)(puVar99 + 0x90) + 0x68) ==
           PTR_hb_font_get_glyph_h_origin_default_00718ad8) {
      puVar99 = *(undefined **)(puVar99 + 0x18);
      if ((puVar99 == (undefined *)0x0) || (puVar99 == &_hb_Null_hb_font_t)) goto LAB_003fa3a9;
    }
    if ((uint)uVar88 != 0) {
      lVar119 = 0;
      do {
        uVar30 = *(undefined4 *)(*(long *)((long)puVar100 + 0x18) + lVar119);
        *(undefined8 *)((long)puVar100 + -8) = 0x3fa308;
        auVar279 = hb_font_t::get_glyph_h_origin_with_fallback
                             (*(hb_font_t **)((long)puVar100 + 8),uVar30,
                              (int *)((long)puVar100 + 0xd0),(int *)((long)puVar100 + 0x240));
        auVar184._0_8_ = auVar279._8_8_;
        uVar129 = auVar279._0_8_;
        auVar184._8_8_ = extraout_XMM1_Qb_38;
        piVar53 = (int *)(lVar116 + 8 + lVar119);
        *piVar53 = *piVar53 - *(int *)((long)puVar100 + 0xd0);
        piVar53 = (int *)(lVar116 + 0xc + lVar119);
        *piVar53 = *piVar53 - *(int *)((long)puVar100 + 0x240);
        lVar119 = lVar119 + 0x14;
      } while ((ulong)(uint)uVar88 * 0x14 != lVar119);
    }
  }
  else {
    lVar119 = *(long *)(*(long *)((long)puVar100 + 8) + 0x90);
    uVar129 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
    lVar34 = *(long *)(lVar119 + 0x10);
    pcVar86 = *(code **)(lVar119 + 0x60);
    if (lVar34 == 0) {
      uVar111 = 0;
    }
    else {
      uVar111 = *(undefined8 *)(lVar34 + 0x40);
    }
    *(undefined8 *)((long)puVar100 + -8) = uVar111;
    *(undefined8 *)((long)puVar100 + -0x10) = 0x14;
    *(undefined8 *)((long)puVar100 + -0x18) = 0x3fa345;
    auVar279 = (*pcVar86)(*(undefined8 *)((long)puVar100 + 8),uVar129,(uint)uVar88,
                          *(undefined8 *)((long)puVar100 + 0x18),0x14,lVar116 + 4);
    auVar184._0_8_ = auVar279._8_8_;
    uVar129 = auVar279._0_8_;
    auVar184._8_8_ = extraout_XMM1_Qb_39;
    if ((uint)uVar88 != 0) {
      lVar119 = 0;
      do {
        uVar30 = *(undefined4 *)(*(long *)((long)puVar100 + 0x18) + lVar119);
        *(undefined8 *)((long)puVar100 + -8) = 0x3fa388;
        auVar279 = hb_font_t::get_glyph_v_origin_with_fallback
                             (*(hb_font_t **)((long)puVar100 + 8),uVar30,
                              (int *)((long)puVar100 + 0xd0),(int *)((long)puVar100 + 0x240));
        auVar184._0_8_ = auVar279._8_8_;
        uVar129 = auVar279._0_8_;
        auVar184._8_8_ = extraout_XMM1_Qb_40;
        piVar53 = (int *)(lVar116 + 8 + lVar119);
        *piVar53 = *piVar53 - *(int *)((long)puVar100 + 0xd0);
        piVar53 = (int *)(lVar116 + 0xc + lVar119);
        *piVar53 = *piVar53 - *(int *)((long)puVar100 + 0x240);
        lVar119 = lVar119 + 0x14;
      } while ((ulong)(uint)uVar88 * 0x14 != lVar119);
    }
  }
LAB_003fa3a9:
  plVar125 = (long *)(*(long *)((long)puVar100 + 0x10) + 0x80);
  bVar78 = *(byte *)(*(long *)((long)puVar100 + 0x10) + 0xc0);
  param_5 = *(uint **)((long)puVar100 + 0x28);
  *(long **)((long)puVar100 + 0x48) = plVar125;
  if ((bVar78 & 4) == 0) {
LAB_003fa3c8:
    uVar71._4_4_ = 0;
    uVar71._0_4_ = **(uint **)((long)puVar100 + 0x38);
    lVar116 = *(long *)param_5;
    param_6 = *plVar125;
    lVar143 = *(long *)((long)puVar100 + 0x10);
    lVar119 = *(long *)((long)puVar100 + 0x30);
    hVar8 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              *)(lVar119 + 0x109);
    puVar144 = *(uint **)((long)puVar100 + 8);
  }
  else {
    lVar143 = *(long *)((long)puVar100 + 0x10);
    lVar116 = *(long *)(lVar143 + 0x70);
    param_6 = *(long *)(lVar143 + 0x80);
    uVar88._0_4_ = *(uint *)(lVar143 + 0x60);
    if ((ulong)(uint)uVar88 != 0) {
      uVar90 = *(uint *)(lVar143 + 0x38) & 0xfffffffe;
      lVar119 = 0;
      *(long *)((long)puVar100 + 0x50) = lVar116;
      *(long *)((long)puVar100 + 0x40) = param_6;
      do {
        if (((*(ushort *)(lVar116 + 0x10 + lVar119) & 0x1f) != 0x1d) ||
           ((*(byte *)(lVar116 + 0xc + lVar119) & 0x20) != 0))
        goto _hb_ot_shape_switchD_003fa4fb_caseD_7;
        if ((*(int *)(*(long *)((long)puVar100 + 0x10) + 0x24) != 0) &&
           (*(int *)(lVar116 + lVar119) == *(int *)(*(long *)((long)puVar100 + 0x10) + 0x24))) {
          if (uVar90 == 4) {
            iVar31 = *(int *)(*(long *)((long)puVar100 + 8) + 0x28);
            iVar121 = iVar31 + 3;
            if (-1 < iVar31) {
              iVar121 = iVar31;
            }
            *(int *)(param_6 + lVar119) = iVar121 >> 2;
          }
          else {
            iVar31 = *(int *)(*(long *)((long)puVar100 + 8) + 0x2c);
            iVar121 = iVar31 + 3;
            if (-1 < iVar31) {
              iVar121 = iVar31;
            }
            *(int *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)(param_6 + 4) + lVar119) = -(iVar121 >> 2);
          }
        }
        uVar29 = *(ushort *)(lVar116 + 0x10 + lVar119);
        phVar32._0_4_ = (uint)(uVar29 >> 8);
        if ((uVar29 & 0x1f) != 0x1d) {
          phVar32._0_4_ = 0;
        }
        switch((char)(uint)phVar32) {
        case '\x01':
        case '\x02':
        case '\x03':
        case '\x04':
        case '\x05':
        case '\x06':
        case '\x10':
          if (uVar90 == 4) {
            *(int *)(param_6 + lVar119) =
                 (int)(((uint)phVar32 >> 1) + *(int *)(*(long *)((long)puVar100 + 8) + 0x28)) /
                 (int)(uint)phVar32;
          }
          else {
            *(int *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)(param_6 + 4) + lVar119) =
                 -((int)(((uint)phVar32 >> 1) + *(int *)(*(long *)((long)puVar100 + 8) + 0x2c)) /
                  (int)(uint)phVar32);
          }
          break;
        case '\x11':
          if (uVar90 == 4) {
            lVar34 = (long)*(int *)(*(long *)((long)puVar100 + 8) + 0x28) << 2;
            *(uint *)(param_6 + lVar119) =
                 ((*(int *)(*(long *)((long)puVar100 + 8) + 0x28) >> 0x1f & 0x3fffffffU) >> 0x1d) +
                 (int)(lVar34 / 0x12) + (int)(lVar34 >> 0x3f);
          }
          else {
            *(int *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)(param_6 + 4) + lVar119) =
                 (int)(((long)*(int *)(*(long *)((long)puVar100 + 8) + 0x2c) * -4) / 0x12);
          }
          break;
        case '\x13':
          *(undefined4 *)((long)puVar100 + 0xd0) = 0;
          lVar116 = *(long *)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x10);
          if (lVar116 == 0) {
            uVar129 = 0;
          }
          else {
            uVar129 = *(undefined8 *)(lVar116 + 0x10);
          }
          uVar111 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
          pcVar86 = *(code **)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x30);
          *(undefined8 *)((long)puVar100 + -8) = 0x3fa67e;
          iVar31 = (*pcVar86)(*(long *)((long)puVar100 + 8),uVar111,0x30,
                              (undefined1 *)((long)puVar100 + 0xd0),uVar129);
          if (iVar31 == 0) {
            *(undefined4 *)((long)puVar100 + 0xd0) = 0;
            lVar116 = *(long *)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x10);
            if (lVar116 == 0) {
              uVar129 = 0;
            }
            else {
              uVar129 = *(undefined8 *)(lVar116 + 0x10);
            }
            uVar111 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
            pcVar86 = *(code **)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x30);
            *(undefined8 *)((long)puVar100 + -8) = 0x3fa737;
            iVar31 = (*pcVar86)(*(long *)((long)puVar100 + 8),uVar111,0x31,
                                (undefined1 *)((long)puVar100 + 0xd0),uVar129);
            if (iVar31 == 0) {
              *(undefined4 *)((long)puVar100 + 0xd0) = 0;
              lVar116 = *(long *)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x10);
              if (lVar116 == 0) {
                uVar129 = 0;
              }
              else {
                uVar129 = *(undefined8 *)(lVar116 + 0x10);
              }
              uVar111 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
              pcVar86 = *(code **)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x30);
              *(undefined8 *)((long)puVar100 + -8) = 0x3fa784;
              iVar31 = (*pcVar86)(*(long *)((long)puVar100 + 8),uVar111,0x32,
                                  (undefined1 *)((long)puVar100 + 0xd0),uVar129);
              if (iVar31 == 0) {
                *(undefined4 *)((long)puVar100 + 0xd0) = 0;
                lVar116 = *(long *)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x10);
                if (lVar116 == 0) {
                  uVar129 = 0;
                }
                else {
                  uVar129 = *(undefined8 *)(lVar116 + 0x10);
                }
                uVar111 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
                pcVar86 = *(code **)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x30);
                *(undefined8 *)((long)puVar100 + -8) = 0x3fa7d1;
                iVar31 = (*pcVar86)(*(long *)((long)puVar100 + 8),uVar111,0x33,
                                    (undefined1 *)((long)puVar100 + 0xd0),uVar129);
                if (iVar31 == 0) {
                  *(undefined4 *)((long)puVar100 + 0xd0) = 0;
                  lVar116 = *(long *)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x10);
                  if (lVar116 == 0) {
                    uVar129 = 0;
                  }
                  else {
                    uVar129 = *(undefined8 *)(lVar116 + 0x10);
                  }
                  uVar111 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
                  pcVar86 = *(code **)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x30);
                  *(undefined8 *)((long)puVar100 + -8) = 0x3fa81e;
                  iVar31 = (*pcVar86)(*(long *)((long)puVar100 + 8),uVar111,0x34,
                                      (undefined1 *)((long)puVar100 + 0xd0),uVar129);
                  if (iVar31 == 0) {
                    *(undefined4 *)((long)puVar100 + 0xd0) = 0;
                    lVar116 = *(long *)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x10);
                    if (lVar116 == 0) {
                      uVar129 = 0;
                    }
                    else {
                      uVar129 = *(undefined8 *)(lVar116 + 0x10);
                    }
                    uVar111 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
                    pcVar86 = *(code **)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x30);
                    *(undefined8 *)((long)puVar100 + -8) = 0x3fa86b;
                    iVar31 = (*pcVar86)(*(long *)((long)puVar100 + 8),uVar111,0x35,
                                        (undefined1 *)((long)puVar100 + 0xd0),uVar129);
                    if (iVar31 == 0) {
                      *(undefined4 *)((long)puVar100 + 0xd0) = 0;
                      lVar116 = *(long *)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x10);
                      if (lVar116 == 0) {
                        uVar129 = 0;
                      }
                      else {
                        uVar129 = *(undefined8 *)(lVar116 + 0x10);
                      }
                      uVar111 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
                      pcVar86 = *(code **)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x30);
                      *(undefined8 *)((long)puVar100 + -8) = 0x3fa8b8;
                      iVar31 = (*pcVar86)(*(long *)((long)puVar100 + 8),uVar111,0x36,
                                          (undefined1 *)((long)puVar100 + 0xd0),uVar129);
                      if (iVar31 == 0) {
                        *(undefined4 *)((long)puVar100 + 0xd0) = 0;
                        lVar116 = *(long *)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x10);
                        if (lVar116 == 0) {
                          uVar129 = 0;
                        }
                        else {
                          uVar129 = *(undefined8 *)(lVar116 + 0x10);
                        }
                        uVar111 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
                        pcVar86 = *(code **)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x30)
                        ;
                        *(undefined8 *)((long)puVar100 + -8) = 0x3fa905;
                        iVar31 = (*pcVar86)(*(long *)((long)puVar100 + 8),uVar111,0x37,
                                            (undefined1 *)((long)puVar100 + 0xd0),uVar129);
                        if (iVar31 == 0) {
                          *(undefined4 *)((long)puVar100 + 0xd0) = 0;
                          lVar116 = *(long *)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x10
                                             );
                          if (lVar116 == 0) {
                            uVar129 = 0;
                          }
                          else {
                            uVar129 = *(undefined8 *)(lVar116 + 0x10);
                          }
                          uVar111 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
                          pcVar86 = *(code **)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) +
                                              0x30);
                          *(undefined8 *)((long)puVar100 + -8) = 0x3fa952;
                          iVar31 = (*pcVar86)(*(long *)((long)puVar100 + 8),uVar111,0x38,
                                              (undefined1 *)((long)puVar100 + 0xd0),uVar129);
                          if (iVar31 == 0) {
                            *(undefined4 *)((long)puVar100 + 0xd0) = 0;
                            lVar116 = *(long *)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) +
                                               0x10);
                            if (lVar116 == 0) {
                              uVar129 = 0;
                            }
                            else {
                              uVar129 = *(undefined8 *)(lVar116 + 0x10);
                            }
                            uVar111 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
                            pcVar86 = *(code **)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) +
                                                0x30);
                            *(undefined8 *)((long)puVar100 + -8) = 0x3fa99b;
                            iVar31 = (*pcVar86)(*(long *)((long)puVar100 + 8),uVar111,0x39,
                                                (undefined1 *)((long)puVar100 + 0xd0),uVar129);
                            auVar184._8_8_ = extraout_XMM1_Qb_42;
                            auVar184._0_8_ = extraout_XMM1_Qa_28;
                            param_5 = *(uint **)((long)puVar100 + 0x28);
                            plVar125 = *(long **)((long)puVar100 + 0x48);
                            lVar116 = *(long *)((long)puVar100 + 0x50);
                            param_6 = *(long *)((long)puVar100 + 0x40);
                            uVar129 = extraout_XMM0_Qa_21;
                            if (iVar31 == 0) break;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar30 = *(undefined4 *)((long)puVar100 + 0xd0);
          lVar116 = *(long *)(*(long *)((long)puVar100 + 8) + 0x90);
          if (uVar90 != 4) goto LAB_003fa9fb;
          lVar34 = *(long *)(lVar116 + 0x10);
          if (lVar34 == 0) goto LAB_003fa711;
LAB_003fa9dd:
          uVar129 = *(undefined8 *)(lVar34 + 0x28);
LAB_003fa9e1:
          uVar111 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
          pcVar86 = *(code **)(lVar116 + 0x48);
          *(undefined8 *)((long)puVar100 + -8) = 0x3fa9f0;
          uVar30 = (*pcVar86)(*(long *)((long)puVar100 + 8),uVar111,uVar30,uVar129);
          auVar184._8_8_ = extraout_XMM1_Qb_43;
          auVar184._0_8_ = extraout_XMM1_Qa_29;
          param_6 = *(long *)((long)puVar100 + 0x40);
          *(undefined4 *)(param_6 + lVar119) = uVar30;
          uVar129 = extraout_XMM0_Qa_22;
          goto LAB_003faa25;
        case '\x14':
          *(undefined4 *)((long)puVar100 + 0xd0) = 0;
          lVar116 = *(long *)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x10);
          if (lVar116 == 0) {
            uVar129 = 0;
          }
          else {
            uVar129 = *(undefined8 *)(lVar116 + 0x10);
          }
          uVar111 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
          pcVar86 = *(code **)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x30);
          *(undefined8 *)((long)puVar100 + -8) = 0x3fa631;
          iVar31 = (*pcVar86)(*(long *)((long)puVar100 + 8),uVar111,0x2e,
                              (undefined1 *)((long)puVar100 + 0xd0),uVar129);
          if (iVar31 == 0) {
            *(undefined4 *)((long)puVar100 + 0xd0) = 0;
            lVar116 = *(long *)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x10);
            if (lVar116 == 0) {
              uVar129 = 0;
            }
            else {
              uVar129 = *(undefined8 *)(lVar116 + 0x10);
            }
            uVar111 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
            pcVar86 = *(code **)(*(long *)(*(long *)((long)puVar100 + 8) + 0x90) + 0x30);
            *(undefined8 *)((long)puVar100 + -8) = 0x3fa6cb;
            iVar31 = (*pcVar86)(*(long *)((long)puVar100 + 8),uVar111,0x2c,
                                (undefined1 *)((long)puVar100 + 0xd0),uVar129);
            auVar184._8_8_ = extraout_XMM1_Qb_41;
            auVar184._0_8_ = extraout_XMM1_Qa_27;
            param_5 = *(uint **)((long)puVar100 + 0x28);
            plVar125 = *(long **)((long)puVar100 + 0x48);
            lVar116 = *(long *)((long)puVar100 + 0x50);
            param_6 = *(long *)((long)puVar100 + 0x40);
            uVar129 = extraout_XMM0_Qa_20;
            if (iVar31 == 0) break;
          }
          uVar30 = *(undefined4 *)((long)puVar100 + 0xd0);
          lVar116 = *(long *)(*(long *)((long)puVar100 + 8) + 0x90);
          if (uVar90 == 4) {
            lVar34 = *(long *)(lVar116 + 0x10);
            if (lVar34 != 0) goto LAB_003fa9dd;
LAB_003fa711:
            uVar129 = 0;
            goto LAB_003fa9e1;
          }
LAB_003fa9fb:
          if (*(long *)(lVar116 + 0x10) == 0) {
            uVar129 = 0;
          }
          else {
            uVar129 = *(undefined8 *)(*(long *)(lVar116 + 0x10) + 0x30);
          }
          uVar111 = *(undefined8 *)(*(long *)((long)puVar100 + 8) + 0x98);
          pcVar86 = *(code **)(lVar116 + 0x50);
          *(undefined8 *)((long)puVar100 + -8) = 0x3faa1b;
          uVar30 = (*pcVar86)(*(long *)((long)puVar100 + 8),uVar111,uVar30,uVar129);
          auVar184._8_8_ = extraout_XMM1_Qb_44;
          auVar184._0_8_ = extraout_XMM1_Qa_30;
          param_6 = *(long *)((long)puVar100 + 0x40);
          *(undefined4 *)
           ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
             *)(param_6 + 4) + lVar119) = uVar30;
          uVar129 = extraout_XMM0_Qa_23;
LAB_003faa25:
          param_5 = *(uint **)((long)puVar100 + 0x28);
          plVar125 = *(long **)((long)puVar100 + 0x48);
          lVar116 = *(long *)((long)puVar100 + 0x50);
          break;
        case '\x15':
          if (uVar90 == 4) {
            *(int *)(param_6 + lVar119) = *(int *)(param_6 + lVar119) / 2;
          }
          else {
            *(int *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)(param_6 + 4) + lVar119) =
                 *(int *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                           *)(param_6 + 4) + lVar119) / 2;
          }
        }
_hb_ot_shape_switchD_003fa4fb_caseD_7:
        lVar119 = lVar119 + 0x14;
      } while ((ulong)(uint)uVar88 * 0x14 != lVar119);
      goto LAB_003fa3c8;
    }
    uVar71 = (pthread_mutex_t *)0x0;
    lVar119 = *(long *)((long)puVar100 + 0x30);
    hVar8 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              *)(lVar119 + 0x109);
    puVar144 = *(uint **)((long)puVar100 + 8);
  }
  if (((byte)hVar8 & 1) == 0) {
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
    *(undefined4 *)((long)puVar100 + 0x70) = 0;
  }
  else {
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
    uVar88._0_4_ = *(uint *)(lVar143 + 0x38) & 0xfffffffd;
    *(uint *)((long)puVar100 + 0x70) = CONCAT31((int3)((uint)uVar88 >> 8),(uint)uVar88 == 4);
  }
  *(long *)((long)puVar100 + 0x50) = lVar116;
  *(long *)((long)puVar100 + 0x40) = param_6;
  uVar88._0_4_ = (uint)uVar71;
  *(uint *)((long)puVar100 + 0x78) = (uint)uVar88;
  uVar73 = puVar144;
  while (*(undefined **)(*(long *)(uVar73 + 0x90) + 0x68) ==
         PTR_hb_font_get_glyph_h_origin_default_00718ad8) {
    uVar73 = ((__pthread_list_t *)(uVar73 + 0x18))->__prev;
    if (((pthread_mutex_t *)uVar73 == (pthread_mutex_t *)0x0) ||
       ((pthread_mutex_t *)uVar73 == (pthread_mutex_t *)&_hb_Null_hb_font_t))
    goto joined_r0x003faaaf;
  }
  if ((uint)uVar88 == 0) goto LAB_003fabaf;
  lVar119 = 0;
  do {
    uVar30 = *(undefined4 *)(lVar116 + lVar119);
    *(undefined8 *)((long)puVar100 + -8) = 0x3fab01;
    auVar279 = hb_font_t::get_glyph_h_origin_with_fallback
                         ((hb_font_t *)puVar144,uVar30,(int *)((long)puVar100 + 0xd0),
                          (int *)((long)puVar100 + 0x240));
    auVar184._0_8_ = auVar279._8_8_;
    uVar129 = auVar279._0_8_;
    auVar184._8_8_ = extraout_XMM1_Qb_45;
    lVar34 = *(long *)((long)puVar100 + 0x40);
    lVar116 = *(long *)((long)puVar100 + 0x50);
    piVar53 = (int *)(lVar34 + 8 + lVar119);
    *piVar53 = *piVar53 + *(int *)((long)puVar100 + 0xd0);
    piVar53 = (int *)(lVar34 + 0xc + lVar119);
    *piVar53 = *piVar53 + *(int *)((long)puVar100 + 0x240);
    lVar119 = lVar119 + 0x14;
  } while (uVar71 * 0x14 != lVar119);
  uVar88._0_4_ = **(uint **)((long)puVar100 + 0x38);
  uVar71._4_4_ = 0;
  uVar71._0_4_ = (uint)uVar88;
  lVar119 = *(long *)((long)puVar100 + 0x30);
  param_5 = *(uint **)((long)puVar100 + 0x28);
  plVar125 = *(long **)((long)puVar100 + 0x48);
joined_r0x003faaaf:
  uVar73 = uVar71;
  if ((uint)uVar88 != 0) {
    if ((uint)uVar73 == 1) {
      uVar88 = (pthread_mutex_t *)0x0;
    }
    else {
      lVar116 = 0;
      uVar88 = ((pthread_mutex_t *)0x0)->__size;
      do {
        *(undefined1 *)(*plVar125 + 0x12 + lVar116) = 0;
        *(undefined2 *)(*plVar125 + 0x10 + lVar116) = 0;
        *(undefined1 *)(*plVar125 + 0x26 + lVar116) = 0;
        *(undefined2 *)(*plVar125 + 0x24 + lVar116) = 0;
        uVar88 = uVar88 + 2;
        lVar116 = lVar116 + 0x28;
      } while ((pthread_mutex_t *)(ulong)((uint)uVar73 & 0xfffffffe) != (pthread_mutex_t *)uVar88);
    }
    uVar33 = uVar73 & 1;
    uVar73 = uVar88;
    if (uVar33 != 0) {
      uVar73 = uVar88 * 0x14;
      *(byte *)(*plVar125 + 0x12 + uVar73) = 0;
      pbVar136 = (byte *)(*plVar125 + 0x10 + uVar73);
      pbVar136[0] = 0;
      pbVar136[1] = 0;
    }
  }
LAB_003fabaf:
  if ((((byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                *)(lVar119 + 0x108) & 0x20) != 0) &&
     (*(int *)(*(long *)(lVar119 + 0x80) + 0x58) == 1)) {
    uVar33 = (ulong)**(uint **)((long)puVar100 + 0x38);
    uVar73 = (pthread_mutex_t *)0x0;
    if (uVar33 != 0) {
      lVar116 = *(long *)param_5;
      if (*(char *)((long)puVar100 + 0x70) == '\0') {
        uVar73 = uVar33 * 0x14;
        lVar34 = 0;
        do {
          if ((*(byte *)(lVar34 + lVar116 + 0xc) & 8) != 0) {
            *(undefined8 *)(lVar34 + *plVar125) = 0;
          }
          lVar34 = lVar34 + 0x14;
        } while (uVar73 != lVar34);
      }
      else {
        uVar73 = uVar33 * 0x14;
        lVar34 = 0;
        do {
          if ((*(byte *)(lVar34 + lVar116 + 0xc) & 8) != 0) {
            lVar115 = *plVar125;
            piVar53 = (int *)(lVar34 + 8 + lVar115);
            *piVar53 = *piVar53 - *(int *)(lVar34 + lVar115);
            piVar53 = (int *)(lVar34 + 0xc + lVar115);
            *piVar53 = *piVar53 - *(int *)(lVar34 + 4 + lVar115);
            *(undefined4 *)(lVar34 + lVar115) = 0;
            *(undefined4 *)(lVar34 + 4 + lVar115) = 0;
          }
          lVar34 = lVar34 + 0x14;
        } while (uVar73 != lVar34);
      }
    }
  }
  if ((*(ushort *)(lVar119 + 0x108) & 0x200) == 0) {
    puVar147 = (uint *)lVar143;
    if ((*(ushort *)(lVar119 + 0x108) & 0x1000) != 0) {
      p_Var133 = *(__pthread_internal_list **)((long)puVar144 + 0x20);
      p_Var56 = p_Var133[0x15].__next;
      while (p_Var56 == (__pthread_internal_list *)0x0) {
        p_Var52 = p_Var133[6].__next;
        if (p_Var52 == (__pthread_internal_list *)0x0) {
          p_Var56 = (__pthread_internal_list *)&_hb_NullPool;
          break;
        }
        *(undefined8 *)((long)puVar100 + -8) = 0x3fdd68;
        p_Var56 = calloc(1,0x18);
        if (p_Var56 == (__pthread_internal_list *)0x0) {
          LOCK();
          bVar153 = p_Var133[0x15].__next == (__pthread_internal_list *)0x0;
          if (bVar153) {
            p_Var133[0x15].__next = (__pthread_internal_list *)&_hb_NullPool;
          }
          UNLOCK();
          if (!bVar153) goto LAB_003fdd9f;
          p_Var56 = (__pthread_internal_list *)&_hb_NullPool;
          lVar143 = *(long *)((long)puVar100 + 0x10);
          puVar144 = *(uint **)((long)puVar100 + 8);
          break;
        }
        *(undefined8 *)((long)puVar100 + -8) = 0x3fdd7b;
        KerxTable<AAT::kerx>::accelerator_t::accelerator_t((accelerator_t *)p_Var56,p_Var52);
        LOCK();
        bVar153 = p_Var133[0x15].__next == (__pthread_internal_list *)0x0;
        if (bVar153) {
          p_Var133[0x15].__next = p_Var56;
        }
        UNLOCK();
        if (bVar153) break;
        *(undefined8 *)((long)puVar100 + -8) = 0x3fdd97;
        KerxTable<AAT::kerx>::accelerator_t::~accelerator_t((accelerator_t *)p_Var56);
        *(undefined8 *)((long)puVar100 + -8) = 0x3fdd9f;
        free(p_Var56);
LAB_003fdd9f:
        lVar143 = *(long *)((long)puVar100 + 0x10);
        puVar144 = *(uint **)((long)puVar100 + 8);
        p_Var56 = p_Var133[0x15].__next;
      }
      param_5 = (uint *)p_Var56->__prev;
      *(undefined8 *)((long)puVar100 + -8) = 0x3fb58b;
      uVar73 = lVar143;
      auVar279 = hb_aat_apply_context_t::hb_aat_apply_context_t
                           ((hb_aat_apply_context_t *)((long)puVar100 + 0xd0),
                            *(undefined8 *)((long)puVar100 + 0x60),(long)puVar144,
                            (undefined4 *)lVar143,(GDEFVersion1_2<OT::Layout::SmallTypes> *)param_5)
      ;
      *(undefined8 *)((long)puVar100 + -8) = 0x3fb59f;
      bVar153 = hb_buffer_t::message
                          (auVar279._0_8_,auVar279._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                           in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)lVar143,puVar144
                           ,"start table kerx",uVar73,param_5,param_6,*(undefined1 *)puVar100);
      lVar119 = *(long *)((long)puVar100 + 0x30);
      if (bVar153) {
        lVar116 = *(long *)((long)puVar144 + 0x20);
        piVar53 = *(int **)(lVar116 + 0x160);
        if (piVar53 == (int *)0x0) {
          while( true ) {
            lVar119 = *(long *)(lVar116 + 0x68);
            piVar53 = (int *)&_hb_NullPool;
            if (lVar119 == 0) break;
            *(undefined4 *)((long)puVar100 + 0x90) = 0;
            *(undefined4 *)((long)puVar100 + 0xbc) = 0;
            *(undefined8 *)((long)puVar100 + 0xc0) = 0;
            *(undefined1 (*) [16])((long)puVar100 + 0xa8) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])((long)puVar100 + 0x98) = (undefined1  [16])0x0;
            *(undefined1 *)((long)puVar100 + 0xb8) = 0;
            *(undefined4 *)((long)puVar100 + 200) = 0x10000;
            *(undefined2 *)((long)puVar100 + 0xcc) = 0;
            uVar88._0_4_ = *(uint *)(lVar119 + 0x18);
            if ((uint)uVar88 == 0xffffffff) {
              while (piVar53 = *(int **)(lVar119 + 0x78), piVar53 == (int *)0x0) {
                lVar34 = *(long *)(lVar119 + 0x68);
                if (lVar34 == 0) {
                  piVar53 = (int *)&_hb_NullPool;
                  break;
                }
                *(undefined4 *)((long)puVar100 + 0x240) = 0;
                *(undefined1 (*) [16])((long)puVar100 + 600) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])((long)puVar100 + 0x248) = (undefined1  [16])0x0;
                *(undefined1 *)((long)puVar100 + 0x268) = 0;
                *(undefined1 *)((long)puVar100 + 0x27d) = 0;
                *(undefined1 (*) [16])((long)puVar100 + 0x26c) = (undefined1  [16])0x0;
                *(undefined1 *)((long)puVar100 + 0x27c) = 1;
                pcVar86 = *(code **)(lVar34 + 0x20);
                piVar53 = (int *)&_hb_NullPool;
                if (pcVar86 != (code *)0x0) {
                  uVar129 = *(undefined8 *)(lVar34 + 0x28);
                  *(undefined8 *)((long)puVar100 + -8) = 0x3fe50c;
                  piVar53 = (int *)(*pcVar86)(lVar34,0x6d617870,uVar129);
                  if (piVar53 == (int *)0x0) {
                    piVar53 = (int *)&_hb_NullPool;
                  }
                }
                *(undefined8 *)((long)puVar100 + -8) = 0x3fe525;
                piVar53 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                                    ((hb_sanitize_context_t *)((long)puVar100 + 0x240),piVar53);
                *(undefined8 *)((long)puVar100 + -8) = 0x3fe535;
                hb_sanitize_context_t::~hb_sanitize_context_t
                          ((hb_sanitize_context_t *)((long)puVar100 + 0x240));
                if (piVar53 == (int *)0x0) {
                  piVar53 = (int *)&_hb_NullPool;
                  LOCK();
                  bVar153 = *(long *)(lVar119 + 0x78) == 0;
                  if (bVar153) {
                    *(long *)(lVar119 + 0x78) = (long)&_hb_NullPool;
                  }
                  UNLOCK();
                }
                else {
                  LOCK();
                  bVar153 = *(long *)(lVar119 + 0x78) == 0;
                  if (bVar153) {
                    *(long *)(lVar119 + 0x78) = (long)piVar53;
                  }
                  UNLOCK();
                }
                if (bVar153) break;
                if (((piVar53 != (int *)0x0) && ((uint *)piVar53 != &_hb_NullPool)) &&
                   (*piVar53 != 0)) {
                  LOCK();
                  *piVar53 = *piVar53 + -1;
                  UNLOCK();
                  if (*piVar53 == 0) {
                    *piVar53 = -0xdead;
                    ppVar117 = *(pthread_mutex_t **)(piVar53 + 2);
                    if (ppVar117 != (pthread_mutex_t *)0x0) {
                      *(undefined8 *)((long)puVar100 + -8) = 0x3fe593;
                      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                                ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                                  *)&ppVar117[1].__data,ppVar117);
                      *(undefined8 *)((long)puVar100 + -8) = 0x3fe59b;
                      free(ppVar117);
                      piVar53[2] = 0;
                      piVar53[3] = 0;
                    }
                    pcVar86 = *(code **)(piVar53 + 10);
                    if (pcVar86 != (code *)0x0) {
                      uVar129 = *(undefined8 *)(piVar53 + 8);
                      *(undefined8 *)((long)puVar100 + -8) = 0x3fe5b6;
                      (*pcVar86)(uVar129);
                    }
                    *(undefined8 *)((long)puVar100 + -8) = 0x3fe4a2;
                    free(piVar53);
                  }
                }
              }
              puVar50 = &_hb_NullPool;
              if (5 < (uint)piVar53[6]) {
                puVar50 = *(undefined4 **)(piVar53 + 4);
              }
              uVar29 = *(ushort *)(puVar50 + 1);
              uVar79 = uVar29 << 8 | uVar29 >> 8;
              if (uVar29 == 0) {
                uVar79 = 0;
              }
              uVar88._0_4_ = (uint)uVar79;
              *(uint *)(lVar119 + 0x18) = (uint)uVar88;
            }
            *(uint *)((long)puVar100 + 200) = (uint)uVar88;
            *(undefined1 *)((long)puVar100 + 0xcc) = 1;
            pcVar86 = *(code **)(lVar119 + 0x20);
            puVar69 = &_hb_NullPool;
            if (pcVar86 == (code *)0x0) {
LAB_003fde9b:
              uVar88._0_4_ = *puVar69;
            }
            else {
              uVar129 = *(undefined8 *)(lVar119 + 0x28);
              *(undefined8 *)((long)puVar100 + -8) = 0x3fde8f;
              puVar69 = (uint *)(*pcVar86)(lVar119,0x616e6b72,uVar129);
              if (puVar69 != (uint *)0x0) goto LAB_003fde9b;
              puVar69 = &_hb_NullPool;
              uVar88._0_4_ = _hb_NullPool;
            }
            if ((uint)uVar88 != 0) {
              LOCK();
              *puVar69 = *puVar69 + 1;
              UNLOCK();
            }
            *(uint **)((long)puVar100 + 0xc0) = puVar69;
            uVar26 = 0;
            *(uint **)((long)puVar100 + 0x18) = puVar69;
            while( true ) {
              *(undefined1 *)((long)puVar100 + 0xb8) = uVar26;
              psVar70 = *(short **)(puVar69 + 4);
              *(short **)((long)puVar100 + 0x98) = psVar70;
              uVar88._0_4_ = puVar69[6];
              uVar73._4_4_ = 0;
              uVar73._0_4_ = (uint)uVar88;
              uVar90 = (uint)(uVar73 * 0x40);
              if (uVar90 < 0x4001) {
                uVar90 = 0x4000;
              }
              if (0x3ffffffe < uVar90) {
                uVar90 = 0x3fffffff;
              }
              *(byte **)((long)puVar100 + 0xa0) = (byte *)(uVar73 + (long)psVar70);
              *(uint *)((long)puVar100 + 0xa8) = (uint)uVar88;
              phVar32._0_4_ = 0x3fffffff;
              if ((int)((ulong)(uVar73 * 0x40) >> 0x20) == 0) {
                phVar32._0_4_ = uVar90;
              }
              *(uint *)((long)puVar100 + 0xac) = (uint)phVar32;
              *(undefined4 *)((long)puVar100 + 0xbc) = 0;
              *(undefined4 *)((long)puVar100 + 0x90) = 0;
              *(undefined4 *)((long)puVar100 + 0xb4) = 0;
              if (psVar70 == (short *)0x0) {
                if (*puVar69 != 0) {
                  LOCK();
                  *puVar69 = *puVar69 - 1;
                  UNLOCK();
                  if (*puVar69 == 0) {
                    *puVar69 = 0xffff2153;
                    ppVar117 = *(pthread_mutex_t **)(puVar69 + 2);
                    if (ppVar117 != (pthread_mutex_t *)0x0) {
                      *(undefined8 *)((long)puVar100 + -8) = 0x3fe432;
                      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                                ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                                  *)&ppVar117[1].__data,ppVar117);
                      *(undefined8 *)((long)puVar100 + -8) = 0x3fe43a;
                      free(ppVar117);
                      puVar69[2] = 0;
                      puVar69[3] = 0;
                    }
                    pcVar86 = *(code **)(puVar69 + 10);
                    if (pcVar86 != (code *)0x0) {
                      uVar129 = *(undefined8 *)(puVar69 + 8);
                      *(undefined8 *)((long)puVar100 + -8) = 0x3fe451;
                      (*pcVar86)(uVar129);
                    }
                    *(undefined8 *)((long)puVar100 + -8) = 0x3fe459;
                    free(puVar69);
                  }
                }
                *(undefined8 *)((long)puVar100 + 0xc0) = 0;
                *(undefined1 (*) [16])((long)puVar100 + 0x98) = (undefined1  [16])0x0;
                *(undefined4 *)((long)puVar100 + 0xa8) = 0;
                piVar53 = *(int **)((long)puVar100 + 0x18);
                goto LAB_003fe360;
              }
              if (((uint)uVar88 < 0xc) || (*psVar70 != 0)) goto LAB_003fe0cc;
              uVar90 = *(uint *)(psVar70 + 4);
              uVar90 = uVar90 >> 0x18 | (uVar90 & 0xff0000) >> 8 | (uVar90 & 0xff00) << 8 |
                       uVar90 << 0x18;
              if (((uint)uVar88 < uVar90) ||
                 (*(uint *)((long)puVar100 + 0xac) = (uint)phVar32 - uVar90,
                 (int)((uint)phVar32 - uVar90) < 1)) goto LAB_003fe0cc;
              uVar88._0_4_ = *(uint *)(psVar70 + 2);
              bVar153 = true;
              if ((uint)uVar88 == 0) goto LAB_003fe0cf;
              *(undefined8 *)((long)puVar100 + -8) = 0x3fdfd1;
              uVar33 = Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                       ::sanitize((Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                                   *)((ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8
                                              | ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18)
                                     + (long)psVar70),(long)((long)puVar100 + 0x90),
                                  (ulong)uVar90 + (long)psVar70);
              uVar88._0_4_ = *(uint *)((long)puVar100 + 0xbc);
              uVar73._4_4_ = 0;
              uVar73._0_4_ = (uint)uVar88;
              if ((char)uVar33 != '\0') break;
              if ((uint)uVar88 < 0x20) {
                uVar73._0_4_ = (uint)uVar88 + 1;
                uVar73._4_4_ = 0;
                *(uint *)((long)puVar100 + 0xbc) = (uint)uVar73;
                if (*(char *)((long)puVar100 + 0xb8) != '\0') {
                  psVar70[2] = 0;
                  psVar70[3] = 0;
                  goto LAB_003fe190;
                }
              }
              else if (*(char *)((long)puVar100 + 0xb8) != '\0') goto LAB_003fe0cc;
              lVar119 = *(long *)((long)puVar100 + 0x18);
              uVar33 = (ulong)*(uint *)(lVar119 + 0x18);
              if (*(int *)(lVar119 + 4) == 0) {
LAB_003fe0b8:
                *(undefined8 *)((long)puVar100 + 0x98) = 0;
                *(ulong *)((long)puVar100 + 0xa0) = uVar33;
                goto LAB_003fe0cc;
              }
              if (uVar33 == 0) {
                *(undefined4 *)(lVar119 + 0x1c) = 2;
LAB_003fdec3:
                lVar119 = *(long *)(lVar119 + 0x10);
                *(long *)((long)puVar100 + 0x98) = lVar119;
                *(ulong *)((long)puVar100 + 0xa0) = uVar33 + lVar119;
                if (lVar119 == 0) goto LAB_003fe0cc;
              }
              else {
                if (*(int *)(lVar119 + 0x1c) == 2) goto LAB_003fdec3;
                if (*(int *)(lVar119 + 0x1c) == 3) {
                  *(undefined4 *)(lVar119 + 0x1c) = 1;
                }
                *(undefined8 *)((long)puVar100 + -8) = 0x3fe04c;
                pvVar57 = malloc(uVar33);
                if (pvVar57 == (void *)0x0) goto LAB_003fe0b8;
                pvVar123 = *(void **)(lVar119 + 0x10);
                *(undefined8 *)((long)puVar100 + -8) = 0x3fe063;
                memcpy(pvVar57,pvVar123,uVar33);
                pcVar86 = *(code **)(lVar119 + 0x28);
                if (pcVar86 != (code *)0x0) {
                  uVar129 = *(undefined8 *)(lVar119 + 0x20);
                  *(undefined8 *)((long)puVar100 + -8) = 0x3fe072;
                  (*pcVar86)(uVar129);
                  lVar119 = *(long *)((long)puVar100 + 0x18);
                  uVar33 = (ulong)*(uint *)(lVar119 + 0x18);
                }
                *(undefined4 *)(lVar119 + 0x1c) = 2;
                *(void **)(lVar119 + 0x10) = pvVar57;
                *(void **)(lVar119 + 0x20) = pvVar57;
                *(code **)(lVar119 + 0x28) = free;
                *(void **)((long)puVar100 + 0x98) = pvVar57;
                *(ulong *)((long)puVar100 + 0xa0) = (long)pvVar57 + uVar33;
              }
              uVar26 = 1;
              puVar69 = *(uint **)((long)puVar100 + 0xc0);
            }
            if ((uint)uVar88 == 0) goto LAB_003fe0cf;
LAB_003fe190:
            *(undefined4 *)((long)puVar100 + 0xbc) = 0;
            ppVar117 = (pthread_mutex_t *)((long)psVar70 - *(long *)((long)puVar100 + 0x98));
            uVar73._4_4_ = 0;
            uVar73._0_4_ = *(uint *)((long)puVar100 + 0xa8);
            if (((&(ppVar117->__data).__nusers <= (ulong)uVar73) && (*psVar70 == 0)) &&
               (ppVar117 <= (ulong)uVar73)) {
              uVar88._0_4_ = *(uint *)(psVar70 + 4);
              uVar88._0_4_ = (uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                             ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18;
              if ((((uint)uVar88 <= (uint)(*(int *)((long)puVar100 + 0xa0) - (int)psVar70)) &&
                  (iVar31 = *(int *)((long)puVar100 + 0xac),
                  *(uint *)((long)puVar100 + 0xac) = iVar31 - (uint)uVar88,
                  0 < (int)(iVar31 - (uint)uVar88))) &&
                 ((pthread_mutex_t *)((long)psVar70 + (8 - *(long *)((long)puVar100 + 0x98))) <=
                  (ulong)uVar73)) {
                uVar90 = *(uint *)(psVar70 + 2);
                if (uVar90 == 0) goto LAB_003fe0cf;
                *(undefined8 *)((long)puVar100 + -8) = 0x3fe234;
                uVar33 = Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                         ::sanitize((Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                                     *)((ulong)(uVar90 >> 0x18 | (uVar90 & 0xff0000) >> 8 |
                                                (uVar90 & 0xff00) << 8 | uVar90 << 0x18) +
                                       (long)psVar70),(long)((long)puVar100 + 0x90),
                                    (ulong)(uint)uVar88 + (long)psVar70);
                uVar88._0_4_ = *(uint *)((long)puVar100 + 0xbc);
                if ((char)uVar33 == '\0') {
                  if (((uint)uVar88 < 0x20) &&
                     (*(uint *)((long)puVar100 + 0xbc) = (uint)uVar88 + 1,
                     *(char *)((long)puVar100 + 0xb8) != '\0')) {
                    psVar70[2] = 0;
                    psVar70[3] = 0;
                  }
                }
                else if ((uint)uVar88 == 0) {
                  uVar73 = (pthread_mutex_t *)0x0;
                  goto LAB_003fe0cf;
                }
                piVar53 = *(int **)((long)puVar100 + 0xc0);
                if ((piVar53 != (int *)0x0) && (*piVar53 != 0)) {
                  LOCK();
                  *piVar53 = *piVar53 + -1;
                  UNLOCK();
                  if (*piVar53 == 0) {
                    *piVar53 = -0xdead;
                    ppVar117 = *(pthread_mutex_t **)(piVar53 + 2);
                    if (ppVar117 != (pthread_mutex_t *)0x0) {
                      *(undefined8 *)((long)puVar100 + -8) = 0x3fe2a7;
                      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                                ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                                  *)&ppVar117[1].__data,ppVar117);
                      *(undefined8 *)((long)puVar100 + -8) = 0x3fe2af;
                      free(ppVar117);
                      piVar53[2] = 0;
                      piVar53[3] = 0;
                    }
                    pcVar86 = *(code **)(piVar53 + 10);
                    if (pcVar86 != (code *)0x0) {
                      uVar129 = *(undefined8 *)(piVar53 + 8);
                      *(undefined8 *)((long)puVar100 + -8) = 0x3fe2c6;
                      (*pcVar86)(uVar129);
                    }
                    *(undefined8 *)((long)puVar100 + -8) = 0x3fe2ce;
                    free(piVar53);
                  }
                }
                *(undefined8 *)((long)puVar100 + 0xc0) = 0;
                *(undefined1 (*) [16])((long)puVar100 + 0x98) = (undefined1  [16])0x0;
                *(undefined4 *)((long)puVar100 + 0xa8) = 0;
                goto LAB_003fe2f1;
              }
            }
LAB_003fe0cc:
            bVar153 = false;
LAB_003fe0cf:
            piVar53 = *(int **)((long)puVar100 + 0xc0);
            if ((piVar53 != (int *)0x0) && (*piVar53 != 0)) {
              LOCK();
              *piVar53 = *piVar53 + -1;
              UNLOCK();
              if (*piVar53 == 0) {
                *piVar53 = -0xdead;
                ppVar117 = *(pthread_mutex_t **)(piVar53 + 2);
                if (ppVar117 != (pthread_mutex_t *)0x0) {
                  *(undefined8 *)((long)puVar100 + -8) = 0x3fe10d;
                  hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                            ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                              *)&ppVar117[1].__data,ppVar117);
                  *(undefined8 *)((long)puVar100 + -8) = 0x3fe115;
                  free(ppVar117);
                  piVar53[2] = 0;
                  piVar53[3] = 0;
                }
                pcVar86 = *(code **)(piVar53 + 10);
                if (pcVar86 != (code *)0x0) {
                  uVar129 = *(undefined8 *)(piVar53 + 8);
                  *(undefined8 *)((long)puVar100 + -8) = 0x3fe12c;
                  (*pcVar86)(uVar129);
                }
                *(undefined8 *)((long)puVar100 + -8) = 0x3fe134;
                free(piVar53);
              }
            }
            *(undefined8 *)((long)puVar100 + 0xc0) = 0;
            *(undefined1 (*) [16])((long)puVar100 + 0x98) = (undefined1  [16])0x0;
            *(undefined4 *)((long)puVar100 + 0xa8) = 0;
            if (bVar153) {
              if (*(int *)(*(long *)((long)puVar100 + 0x18) + 4) == 0) {
                piVar53 = *(int **)((long)puVar100 + 0x18);
              }
              else {
                piVar53 = *(int **)((long)puVar100 + 0x18);
                piVar53[1] = 0;
              }
            }
            else {
LAB_003fe2f1:
              uVar73 = *(long *)((long)puVar100 + 0x18);
              piVar53 = (int *)&_hb_NullPool;
              if (*(uint *)uVar73 != 0) {
                LOCK();
                *(uint *)uVar73 = *(uint *)uVar73 - 1;
                UNLOCK();
                piVar53 = (int *)&_hb_NullPool;
                if (*(uint *)uVar73 == 0) {
                  *(uint *)uVar73 = 0xffff2153;
                  ppVar117 = *(pthread_mutex_t **)(uVar73 + 8);
                  if (ppVar117 != (pthread_mutex_t *)0x0) {
                    *(undefined8 *)((long)puVar100 + -8) = 0x3fe325;
                    hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                              ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                                *)&ppVar117[1].__data,ppVar117);
                    *(undefined8 *)((long)puVar100 + -8) = 0x3fe32d;
                    free(ppVar117);
                    *(undefined8 *)(*(long *)((long)puVar100 + 0x18) + 8) = 0;
                  }
                  pcVar86 = *(code **)(*(long *)((long)puVar100 + 0x18) + 0x28);
                  if (pcVar86 != (code *)0x0) {
                    uVar73 = *(long *)((long)puVar100 + 0x18);
                    p_Var133 = *(__pthread_internal_list **)(uVar73 + 0x20);
                    *(undefined8 *)((long)puVar100 + -8) = 0x3fe353;
                    (*pcVar86)(p_Var133);
                  }
                  *(undefined8 *)((long)puVar100 + -8) = 0x3fe35d;
                  free(*(void **)((long)puVar100 + 0x18));
                  piVar53 = (int *)&_hb_NullPool;
                }
              }
            }
LAB_003fe360:
            *(undefined8 *)((long)puVar100 + -8) = 0x3fe36d;
            hb_sanitize_context_t::~hb_sanitize_context_t
                      ((hb_sanitize_context_t *)((long)puVar100 + 0x90));
            LOCK();
            bVar153 = *(long *)(lVar116 + 0x160) == 0;
            if (bVar153) {
              *(long *)(lVar116 + 0x160) = (long)piVar53;
            }
            UNLOCK();
            if (bVar153) break;
            if (((piVar53 != (int *)0x0) && ((uint *)piVar53 != &_hb_NullPool)) && (*piVar53 != 0))
            {
              LOCK();
              *piVar53 = *piVar53 + -1;
              UNLOCK();
              if (*piVar53 == 0) {
                *piVar53 = -0xdead;
                ppVar117 = *(pthread_mutex_t **)(piVar53 + 2);
                if (ppVar117 != (pthread_mutex_t *)0x0) {
                  *(undefined8 *)((long)puVar100 + -8) = 0x3fe3ba;
                  hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                            ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                              *)&ppVar117[1].__data,ppVar117);
                  *(undefined8 *)((long)puVar100 + -8) = 0x3fe3c2;
                  free(ppVar117);
                  piVar53[2] = 0;
                  piVar53[3] = 0;
                }
                pcVar86 = *(code **)(piVar53 + 10);
                if (pcVar86 != (code *)0x0) {
                  uVar129 = *(undefined8 *)(piVar53 + 8);
                  *(undefined8 *)((long)puVar100 + -8) = 0x3fe3d9;
                  (*pcVar86)(uVar129);
                }
                *(undefined8 *)((long)puVar100 + -8) = 0x3fe3e1;
                free(piVar53);
              }
            }
            piVar53 = *(int **)(lVar116 + 0x160);
            lVar143 = *(long *)((long)puVar100 + 0x10);
            lVar119 = *(long *)((long)puVar100 + 0x30);
            if (piVar53 != (int *)0x0) goto LAB_003fb5c0;
          }
          lVar143 = *(long *)((long)puVar100 + 0x10);
          lVar119 = *(long *)((long)puVar100 + 0x30);
        }
LAB_003fb5c0:
        p_Var133 = (__pthread_internal_list *)&_hb_NullPool;
        puVar50 = &_hb_NullPool;
        puVar144 = *(uint **)((long)puVar100 + 8);
        if (0xb < (uint)piVar53[6]) {
          puVar50 = *(undefined4 **)(piVar53 + 4);
        }
        *(undefined4 **)((long)puVar100 + 0x138) = puVar50;
        p_Var52 = p_Var56->__prev;
        if (p_Var52 == (__pthread_internal_list *)0x0) {
          p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
        }
        if (7 < *(uint *)&p_Var52[1].__next) {
          p_Var133 = p_Var52[1].__prev;
        }
        *(undefined8 *)((long)puVar100 + -8) = 0x3fb60a;
        auVar279 = KerxTable<AAT::kerx>::apply
                             (p_Var133,(undefined1 *)((long)puVar100 + 0xd0),&p_Var56->__next);
        *(undefined8 *)((long)puVar100 + -8) = 0x3fb61e;
        hb_buffer_t::message
                  (auVar279._0_8_,auVar279._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                   in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)lVar143,puVar144,
                   "end table kerx",uVar73,param_5,param_6,*(undefined1 *)puVar100);
      }
      *(undefined8 *)((long)puVar100 + -8) = 0x3fb62b;
      auVar279 = hb_aat_apply_context_t::~hb_aat_apply_context_t
                           ((hb_aat_apply_context_t *)((long)puVar100 + 0xd0));
      auVar184._0_8_ = auVar279._8_8_;
      uVar129 = auVar279._0_8_;
      auVar184._8_8_ = extraout_XMM1_Qb_48;
      puVar147 = (uint *)lVar143;
    }
  }
  else {
    p_Var133 = *(__pthread_internal_list **)((long)puVar144 + 0x20);
    p_Var56 = p_Var133[0x13].__next;
    while (p_Var56 == (__pthread_internal_list *)0x0) {
      p_Var52 = p_Var133[6].__next;
      if (p_Var52 == (__pthread_internal_list *)0x0) {
        p_Var56 = (__pthread_internal_list *)&_hb_NullPool;
        break;
      }
      *(undefined8 *)((long)puVar100 + -8) = 0x3fe78a;
      p_Var56 = calloc(1,0x18);
      if (p_Var56 == (__pthread_internal_list *)0x0) {
        LOCK();
        bVar153 = p_Var133[0x13].__next == (__pthread_internal_list *)0x0;
        if (bVar153) {
          p_Var133[0x13].__next = (__pthread_internal_list *)&_hb_NullPool;
        }
        UNLOCK();
        uVar129 = extraout_XMM0_Qa_40;
        if (!bVar153) goto LAB_003fe73d;
        p_Var56 = (__pthread_internal_list *)&_hb_NullPool;
        lVar143 = *(long *)((long)puVar100 + 0x10);
        puVar144 = *(uint **)((long)puVar100 + 8);
        break;
      }
      *(undefined8 *)((long)puVar100 + -8) = 0x3fe79d;
      auVar279 = OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::accelerator_t
                           ((accelerator_t<OT::Layout::GPOS> *)p_Var56,(long)p_Var52);
      auVar184._0_8_ = auVar279._8_8_;
      uVar129 = auVar279._0_8_;
      auVar184._8_8_ = extraout_XMM1_Qb_61;
      LOCK();
      bVar153 = p_Var133[0x13].__next == (__pthread_internal_list *)0x0;
      if (bVar153) {
        p_Var133[0x13].__next = p_Var56;
      }
      UNLOCK();
      if (bVar153) break;
      *(undefined8 *)((long)puVar100 + -8) = 0x3fe735;
      OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::~accelerator_t
                ((accelerator_t<OT::Layout::GPOS> *)p_Var56);
      auVar184._8_8_ = extraout_XMM1_Qb_60;
      auVar184._0_8_ = extraout_XMM1_Qa_42;
      *(undefined8 *)((long)puVar100 + -8) = 0x3fe73d;
      free(p_Var56);
      uVar129 = extraout_XMM0_Qa_39;
LAB_003fe73d:
      lVar143 = *(long *)((long)puVar100 + 0x10);
      puVar144 = *(uint **)((long)puVar100 + 8);
      p_Var56 = p_Var133[0x13].__next;
    }
    lVar116 = *(long *)(lVar143 + 0xd0);
    lVar119 = *(long *)((long)puVar100 + 0x30);
    *(__pthread_internal_list **)((long)puVar100 + 0x20) = p_Var56;
    if (lVar116 != 0) {
      uVar88._0_4_ = *(uint *)(lVar119 + 0x8c);
      uVar73._0_4_ = (uint)uVar88 >> 0x18;
      uVar73._4_4_ = 0;
      param_5._0_4_ = (uint)uVar88 >> 0x10 & 0xff;
      param_5._4_4_ = 0;
      param_6._4_4_ = 0;
      param_6._0_4_ = (uint)uVar88 >> 8 & 0xff;
      p_Var56 = *(__pthread_internal_list **)((long)puVar100 + 0x20);
      *(ulong *)((long)puVar100 + -0x10) = (ulong)((uint)uVar88 & 0xff);
      *(undefined8 *)((long)puVar100 + -0x18) = 0x3fb692;
      bVar153 = hb_buffer_t::message
                          (uVar129,auVar184._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                           in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)lVar143,puVar144
                           ,"start table GPOS script tag \'%c%c%c%c\'",uVar73,param_5,param_6,
                           *(undefined1 *)((long)puVar100 + -0x10));
      puVar147 = (uint *)lVar143;
      uVar129 = extraout_XMM0_Qa_24;
      if (!bVar153) goto LAB_003fbe61;
    }
    param_5 = (uint *)p_Var56->__prev;
    *(undefined8 *)((long)puVar100 + -8) = 0x3fb6ba;
    auVar276 = OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                         ((hb_ot_apply_context_t *)((long)puVar100 + 0xd0),1,(long)puVar144,
                          (undefined4 *)lVar143,(GDEFVersion1_2<OT::Layout::SmallTypes> *)param_5);
    *(code **)((long)puVar100 + 0x1b8) =
         OT::Layout::GPOS_impl::PosLookup::dispatch_recurse_func<OT::hb_ot_apply_context_t>;
    uVar33 = (ulong)*(uint *)(lVar119 + 0xdc);
    if (*(uint *)(lVar119 + 0xdc) != 0) {
      uVar152 = 0;
      uVar146 = 0;
      do {
        if (uVar152 < uVar33) {
          lVar143 = uVar152 * 0x10 + *(long *)(lVar119 + 0xe0);
          *(long *)((long)puVar100 + 0x58) = lVar143;
          uVar88._0_4_ = *(uint *)lVar143;
        }
        else {
          lVar143 = (long)&_hb_NullPool;
          *(uint **)((long)puVar100 + 0x58) = &_hb_NullPool;
          uVar88._0_4_ = _hb_NullPool;
        }
        if ((uint)uVar146 < (uint)uVar88) {
          *(ulong *)((long)puVar100 + 0x68) = uVar152;
          uVar146 = uVar146 & 0xffffffff;
          do {
            uVar129 = auVar276._8_8_;
            uVar88._0_4_ = *(uint *)(lVar119 + 0xbc);
            *(ulong *)((long)puVar100 + 0x18) = uVar146;
            if (uVar146 < (uint)uVar88) {
              puVar148 = (ushort *)(uVar146 * 0xc + *(long *)(lVar119 + 0xc0));
              uVar29 = *puVar148;
              if ((uint)*puVar148 < *(uint *)&p_Var56->__next) goto LAB_003fb79e;
            }
            else {
              puVar148 = (ushort *)&_hb_NullPool;
              uVar29 = (ushort)_hb_NullPool;
              if ((_hb_NullPool & 0xffff) < *(uint *)&p_Var56->__next) {
LAB_003fb79e:
                uVar74._2_6_ = 0;
                uVar74._0_2_ = uVar29;
                p_Var133 = (&(p_Var56[1].__prev)->__prev)[uVar74];
                while (p_Var133 == (__pthread_internal_list *)0x0) {
                  p_Var133 = p_Var56->__prev;
                  lVar143 = (long)&_hb_NullPool;
                  if (p_Var133 == (__pthread_internal_list *)0x0) {
                    p_Var133 = (__pthread_internal_list *)&_hb_NullPool;
                  }
                  if (3 < *(uint *)&p_Var133[1].__next) {
                    lVar143 = (long)p_Var133[1].__prev;
                  }
                  puVar132 = (ushort *)&_hb_NullPool;
                  if (*(ushort *)lVar143 == 0x100) {
                    uVar79 = *(ushort *)(lVar143 + 8);
                    puVar51 = (ushort *)&_hb_NullPool;
                    if (uVar79 != 0) {
                      puVar51 = (ushort *)(lVar143 + (ulong)(ushort)(uVar79 << 8 | uVar79 >> 8));
                    }
                    lVar143._0_2_ = *puVar51 << 8 | *puVar51 >> 8;
                    lVar143._2_6_ = 0;
                    puVar132 = (ushort *)&_hb_NullPool;
                    if (uVar29 < (ushort)lVar143) {
                      uVar79 = puVar51[(long)(uVar74 + 1)];
                      lVar143._2_6_ = 0;
                      lVar143._0_2_ = uVar79;
                      puVar132 = (ushort *)&_hb_NullPool;
                      if (uVar79 != 0) {
                        lVar143._0_2_ = uVar79 << 8 | uVar79 >> 8;
                        lVar143._2_6_ = 0;
                        puVar132 = (ushort *)((long)puVar51 + lVar143);
                      }
                    }
                  }
                  *(undefined8 *)((long)puVar100 + -8) = 0x3fb832;
                  p_Var133 = (__pthread_internal_list *)
                             OT::hb_ot_layout_lookup_accelerator_t::
                             create<OT::Layout::GPOS_impl::PosLookup>(puVar132);
                  auVar276._8_8_ = uVar129;
                  auVar276._0_8_ = extraout_XMM0_Qa_25;
                  if (p_Var133 == (__pthread_internal_list *)0x0) goto LAB_003fb750;
                  lVar143 = (long)p_Var56[1].__prev;
                  puVar69 = (uint *)(lVar143 + uVar74 * 8);
                  LOCK();
                  bVar153 = *(long *)puVar69 == 0;
                  if (bVar153) {
                    *(__pthread_internal_list **)puVar69 = p_Var133;
                  }
                  UNLOCK();
                  if (bVar153) break;
                  *(undefined8 *)((long)puVar100 + -8) = 0x3fb855;
                  free(p_Var133);
                  auVar276._8_8_ = uVar129;
                  auVar276._0_8_ = extraout_XMM0_Qa_26;
                  p_Var133 = (&(p_Var56[1].__prev)->__prev)[uVar74];
                }
                uVar129 = auVar276._8_8_;
                if (*(long *)(*(long *)((long)puVar100 + 0x10) + 0xd0) != 0) {
                  uVar88._0_4_ = *(uint *)(puVar148 + 4);
                  param_6._0_4_ = (uint)uVar88 >> 0x10 & 0xff;
                  param_6._4_4_ = 0;
                  param_5._4_4_ = 0;
                  param_5._0_4_ = (uint)uVar88 >> 0x18;
                  *(ulong *)((long)puVar100 + -8) = (ulong)((uint)uVar88 & 0xff);
                  *(ulong *)((long)puVar100 + -0x10) = (ulong)((uint)uVar88 >> 8 & 0xff);
                  p_Var56 = *(__pthread_internal_list **)((long)puVar100 + 0x20);
                  *(undefined8 *)((long)puVar100 + -0x18) = 0x3fb8ba;
                  lVar143 = uVar74;
                  bVar153 = hb_buffer_t::message
                                      (auVar276._0_8_,uVar129,in_XMM2._0_8_,in_XMM3._0_8_,
                                       in_XMM4._0_8_,in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,
                                       *(hb_buffer_t **)((long)puVar100 + 0x10),
                                       *(undefined8 *)((long)puVar100 + 8),
                                       "start lookup %u feature \'%c%c%c%c\'",uVar74,param_5,param_6
                                       ,*(undefined1 *)((long)puVar100 + -0x10));
                  auVar276._8_8_ = uVar129;
                  auVar276._0_8_ = extraout_XMM0_Qa_27;
                  if (!bVar153) goto LAB_003fb750;
                }
                uVar129 = auVar276._8_8_;
                if (((((ulong)p_Var133->__prev & *(ulong *)((long)puVar100 + 0x1e0)) == 0) ||
                    (((ulong)p_Var133->__next & *(ulong *)((long)puVar100 + 0x1e8)) == 0)) ||
                   ((*(ulong *)((long)puVar100 + 0x1f0) & (ulong)p_Var133[1].__prev) == 0)) {
                  if (*(long *)(*(long *)((long)puVar100 + 0x10) + 0xd0) == 0) goto LAB_003fb750;
                  uVar88._0_4_ = *(uint *)(puVar148 + 4);
                  param_6._0_4_ = (uint)uVar88 >> 0x10 & 0xff;
                  param_6._4_4_ = 0;
                  param_5._4_4_ = 0;
                  param_5._0_4_ = (uint)uVar88 >> 0x18;
                  *(ulong *)((long)puVar100 + -8) = (ulong)((uint)uVar88 & 0xff);
                  *(ulong *)((long)puVar100 + -0x10) = (ulong)((uint)uVar88 >> 8 & 0xff);
                  p_Var56 = *(__pthread_internal_list **)((long)puVar100 + 0x20);
                  *(undefined8 *)((long)puVar100 + -0x18) = 0x3fbb7e;
                  lVar143 = uVar74;
                  hb_buffer_t::message
                            (auVar276._0_8_,uVar129,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                             in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,
                             *(hb_buffer_t **)((long)puVar100 + 0x10),
                             *(undefined8 *)((long)puVar100 + 8),
                             "skipped lookup %u feature \'%c%c%c%c\' because no glyph matches",
                             uVar74,param_5,param_6,*(undefined1 *)((long)puVar100 + -0x10));
                  auVar276._8_8_ = uVar129;
                  auVar276._0_8_ = extraout_XMM0_Qa_28;
                }
                else {
                  *(uint *)((long)puVar100 + 0x200) = (uint)uVar29;
                  *(undefined4 *)((long)puVar100 + 0x1fc) = *(undefined4 *)(puVar148 + 2);
                  *(undefined8 *)((long)puVar100 + 0x218) = 0xffffffff;
                  *(byte *)((long)puVar100 + 0x20e) = (byte)puVar148[1] >> 1 & 1;
                  *(byte *)((long)puVar100 + 0x20d) = (byte)puVar148[1] & 1;
                  *(byte *)((long)puVar100 + 0x210) = (byte)puVar148[1] >> 2 & 1;
                  *(byte *)((long)puVar100 + 0x20f) = (byte)puVar148[1] >> 3 & 1;
                  p_Var52 = p_Var56->__prev;
                  p_Var87 = (__pthread_internal_list *)&_hb_NullPool;
                  if (p_Var52 == (__pthread_internal_list *)0x0) {
                    p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
                  }
                  if (3 < *(uint *)&p_Var52[1].__next) {
                    p_Var87 = p_Var52[1].__prev;
                  }
                  lVar143._2_6_ = 0;
                  lVar143._0_2_ = *(ushort *)&p_Var87->__prev;
                  uVar129 = &_hb_NullPool;
                  if (*(ushort *)&p_Var87->__prev == 0x100) {
                    uVar79 = *(ushort *)&p_Var87->__next;
                    lVar143 = (long)&_hb_NullPool;
                    if (uVar79 != 0) {
                      lVar143 = (long)&p_Var87->__prev + (ulong)(ushort)(uVar79 << 8 | uVar79 >> 8);
                    }
                    uVar129 = &_hb_NullPool;
                    if (uVar29 < (ushort)(*(ushort *)lVar143 << 8 | *(ushort *)lVar143 >> 8)) {
                      uVar29 = ((ushort *)(lVar143 + 2))[uVar74];
                      uVar129 = &_hb_NullPool;
                      if (uVar29 != 0) {
                        uVar129 = lVar143 + (ulong)(ushort)(uVar29 << 8 | uVar29 >> 8);
                        lVar143 = uVar129;
                      }
                    }
                  }
                  param_5 = *(uint **)((long)puVar100 + 0x170);
                  iVar31 = *(int *)&((__pthread_internal_list *)((long)param_5 + 0x60))->__prev;
                  if (iVar31 != 0) {
                    uVar88._0_4_ = *(uint *)((long)puVar100 + 0x1fc);
                    param_6._4_4_ = 0;
                    param_6._0_1_ = (char)(uint)uVar88;
                    param_6._1_1_ = (char)((uint)uVar88 >> 8);
                    param_6._2_1_ = (char)((uint)uVar88 >> 0x10);
                    param_6._3_1_ = (char)((uint)uVar88 >> 0x18);
                    if ((uint)uVar88 != 0) {
                      uVar79 = *(ushort *)(uVar129 + 4) << 8 | *(ushort *)(uVar129 + 4) >> 8;
                      uVar29 = *(ushort *)(uVar129 + 2) >> 8;
                      uVar128 = *(ushort *)(uVar129 + 2) << 8 | uVar29;
                      uVar90 = (uint)uVar128;
                      if ((uVar29 & 0x10) != 0) {
                        uVar90 = CONCAT22(((ushort *)(uVar129 + 6))[uVar79] << 8 |
                                          ((ushort *)(uVar129 + 6))[uVar79] >> 8,uVar128);
                      }
                      *(uint *)((long)puVar100 + 0x204) = uVar90;
                      phVar3 = (hb_ot_apply_context_t *)((long)puVar100 + 0xd0);
                      *(hb_ot_apply_context_t **)((long)puVar100 + 0xe0) = phVar3;
                      *(int *)((long)puVar100 + 0x110) = iVar31;
                      *(undefined1 (*) [16])((long)puVar100 + 0xf8) = (undefined1  [16])0x0;
                      *(undefined8 *)((long)puVar100 + 0x108) = 0;
                      *(uint *)((long)puVar100 + 0xe8) = uVar90;
                      uVar26 = *(undefined1 *)((long)puVar100 + 0x20f);
                      if (*(int *)((long)puVar100 + 0x158) != 0) {
                        uVar26 = 0;
                      }
                      bVar153 = *(int *)((long)puVar100 + 0x158) == 1;
                      *(bool *)((long)puVar100 + 0xf0) = bVar153;
                      *(undefined1 *)((long)puVar100 + 0xf1) =
                           *(undefined1 *)((long)puVar100 + 0x20e);
                      *(bool *)((long)puVar100 + 0xf2) = bVar153;
                      *(uint *)((long)puVar100 + 0xec) = (uint)uVar88;
                      *(undefined1 *)((long)puVar100 + 0xf3) = uVar26;
                      *(undefined1 *)((long)puVar100 + 0xf4) = 0;
                      *(hb_ot_apply_context_t **)((long)puVar100 + 0x120) = phVar3;
                      *(int *)((long)puVar100 + 0x150) = iVar31;
                      *(undefined1 (*) [16])((long)puVar100 + 0x138) = (undefined1  [16])0x0;
                      *(undefined8 *)((long)puVar100 + 0x148) = 0;
                      *(uint *)((long)puVar100 + 0x128) = uVar90;
                      *(bool *)((long)puVar100 + 0x132) = bVar153;
                      lVar143._1_7_ = (undefined7)((ulong)((long)puVar100 + 0xf8) >> 8);
                      lVar143._0_1_ = *(char *)((long)puVar100 + 0x20d) != '\0' || bVar153;
                      *(bool *)((long)puVar100 + 0x130) = lVar143._0_1_;
                      *(undefined1 *)((long)puVar100 + 0x131) = 1;
                      *(undefined4 *)((long)puVar100 + 300) = 0xffffffff;
                      *(undefined1 *)((long)puVar100 + 0x133) = uVar26;
                      *(undefined1 *)((long)puVar100 + 0x134) = 0;
                      *(undefined4 *)((long)param_5 + 0x5c) = 0;
                      *(undefined8 *)((long)puVar100 + -8) = 0x3fbb21;
                      auVar276 = apply_forward(phVar3,(ulong *)p_Var133,(uint)uVar79);
                    }
                  }
                }
                uVar129 = auVar276._8_8_;
                if (*(long *)(*(long *)((long)puVar100 + 0x10) + 0xd0) != 0) {
                  uVar88._0_4_ = *(uint *)(puVar148 + 4);
                  param_6._0_4_ = (uint)uVar88 >> 0x10 & 0xff;
                  param_6._4_4_ = 0;
                  param_5._4_4_ = 0;
                  param_5._0_4_ = (uint)uVar88 >> 0x18;
                  *(ulong *)((long)puVar100 + -8) = (ulong)((uint)uVar88 & 0xff);
                  *(ulong *)((long)puVar100 + -0x10) = (ulong)((uint)uVar88 >> 8 & 0xff);
                  p_Var56 = *(__pthread_internal_list **)((long)puVar100 + 0x20);
                  *(undefined8 *)((long)puVar100 + -0x18) = 0x3fbbd0;
                  hb_buffer_t::message
                            (auVar276._0_8_,uVar129,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                             in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,
                             *(hb_buffer_t **)((long)puVar100 + 0x10),
                             *(undefined8 *)((long)puVar100 + 8),
                             "end lookup %u feature \'%c%c%c%c\'",uVar74,param_5,param_6,
                             *(undefined1 *)((long)puVar100 + -0x10));
                  auVar276._8_8_ = uVar129;
                  auVar276._0_8_ = extraout_XMM0_Qa_29;
                  lVar143 = uVar74;
                }
              }
            }
LAB_003fb750:
            uVar146 = *(long *)((long)puVar100 + 0x18) + 1;
            lVar119 = *(long *)((long)puVar100 + 0x30);
          } while (uVar146 < **(uint **)((long)puVar100 + 0x58));
          uVar152 = *(ulong *)((long)puVar100 + 0x68);
        }
        pcVar86 = *(code **)(*(long *)((long)puVar100 + 0x58) + 8);
        if (pcVar86 != (code *)0x0) {
          *(undefined8 *)((long)puVar100 + -8) = 0x3fbc38;
          cVar27 = (*pcVar86)(*(undefined8 *)((long)puVar100 + 0x60),
                              *(undefined8 *)((long)puVar100 + 8),
                              *(undefined8 *)((long)puVar100 + 0x10));
          auVar18._8_8_ = extraout_XMM1_Qa_32;
          auVar18._0_8_ = extraout_XMM0_Qa_30;
          auVar276._8_8_ = extraout_XMM1_Qa_32;
          auVar276._0_8_ = extraout_XMM0_Qa_30;
          if (cVar27 != '\0') {
            uVar88._0_4_ = **(uint **)((long)puVar100 + 0x38);
            param_6._4_4_ = 0;
            param_6._0_4_ = (uint)uVar88;
            if ((uint)uVar88 == 0) {
              uVar33 = 0;
              uVar135 = 0;
              uVar76 = 0;
            }
            else {
              uVar129 = **(long **)((long)puVar100 + 0x28);
              param_5._0_4_ = (uint)uVar88 - 1;
              param_5._4_4_ = 0;
              lVar116 = uVar129;
              if ((uint)param_5 < 3) {
                uVar33 = 0;
              }
              else {
                uVar90 = (uint)uVar88 & 0xfffffffc;
                uVar33 = 0;
                do {
                  uVar33 = uVar33 | 1L << ((ulong)(*(uint *)lVar116 >> 4) & 0x3f) |
                           1L << ((ulong)((uint)*(int *)(lVar116 + 0x14) >> 4) & 0x3f) |
                           1L << ((ulong)((uint)(((pthread_mutex_t *)(lVar116 + 0x28))->__data).
                                                __lock >> 4) & 0x3f) |
                           1L << ((ulong)(*(uint *)(lVar116 + 0x3c) >> 4) & 0x3f);
                  lVar116 = lVar116 + 0x50;
                  uVar90 = uVar90 - 4;
                } while (uVar90 != 0);
              }
              if (((uint)uVar88 & 3) != 0) {
                lVar34 = 0;
                do {
                  uVar33 = uVar33 | 1L << ((ulong)(*(uint *)(lVar116 + lVar34) >> 4) & 0x3f);
                  lVar34 = lVar34 + 0x14;
                } while (((uint)uVar88 & 3) * 0x14 != (int)lVar34);
              }
              lVar143 = uVar129;
              if ((uint)param_5 < 3) {
                uVar135 = 0;
              }
              else {
                uVar90 = (uint)uVar88 & 0xfffffffc;
                uVar135 = 0;
                do {
                  uVar135 = uVar135 | 1L << ((ulong)*(byte *)lVar143 & 0x3f) |
                            1L << ((ulong)*(byte *)(lVar143 + 0x14) & 0x3f) |
                            1L << ((ulong)(byte)((pthread_mutex_t *)(lVar143 + 0x28))->__size[0] &
                                  0x3f) | 1L << ((ulong)*(byte *)(lVar143 + 0x3c) & 0x3f);
                  lVar143 = lVar143 + 0x50;
                  uVar90 = uVar90 - 4;
                } while (uVar90 != 0);
              }
              if (((uint)uVar88 & 3) != 0) {
                lVar116 = 0;
                do {
                  uVar135 = uVar135 | 1L << ((ulong)*(byte *)(lVar143 + lVar116) & 0x3f);
                  lVar116 = lVar116 + 0x14;
                } while (((uint)uVar88 & 3) * 0x14 != (int)lVar116);
              }
              if ((uint)param_5 < 3) {
                uVar76 = 0;
              }
              else {
                lVar143._0_4_ = (uint)uVar88 & 0xfffffffc;
                lVar143._4_4_ = 0;
                uVar76 = 0;
                do {
                  uVar76 = uVar76 | 1L << ((ulong)(*(uint *)uVar129 >> 9) & 0x3f) |
                           1L << ((ulong)((uint)*(int *)(uVar129 + 0x14) >> 9) & 0x3f) |
                           1L << ((ulong)((uint)(((pthread_mutex_t *)(uVar129 + 0x28))->__data).
                                                __lock >> 9) & 0x3f) |
                           1L << ((ulong)(*(uint *)(uVar129 + 0x3c) >> 9) & 0x3f);
                  uVar129 = uVar129 + 0x50;
                  lVar143._0_4_ = (int)lVar143 - 4;
                  lVar143._4_4_ = 0;
                } while ((uint)lVar143 != 0);
              }
              if (((uint)uVar88 & 3) != 0) {
                param_6 = (ulong)((uint)uVar88 & 3) * 4;
                lVar143 = (ulong)((uint)uVar88 & 3) * 0x14;
                lVar116 = 0;
                do {
                  uVar76 = uVar76 | 1L << ((ulong)(*(uint *)(uVar129 + lVar116) >> 9) & 0x3f);
                  lVar116 = lVar116 + 0x14;
                } while ((int)lVar143 != (int)lVar116);
              }
              p_Var56 = *(__pthread_internal_list **)((long)puVar100 + 0x20);
            }
            *(ulong *)((long)puVar100 + 0x1e0) = uVar33;
            *(ulong *)((long)puVar100 + 0x1e8) = uVar135;
            *(ulong *)((long)puVar100 + 0x1f0) = uVar76;
            auVar276 = auVar18;
          }
        }
        uVar152 = uVar152 + 1;
        uVar33 = (ulong)*(uint *)(lVar119 + 0xdc);
      } while (uVar152 < uVar33);
    }
    *(undefined8 *)((long)puVar100 + -8) = 0x3fbe07;
    free(*(void **)((long)puVar100 + 0x1d8));
    *(undefined8 *)((long)puVar100 + -8) = 0x3fbe14;
    auVar279 = hb_sanitize_context_t::~hb_sanitize_context_t
                         ((hb_sanitize_context_t *)((long)puVar100 + 0x178));
    auVar184._0_8_ = auVar279._8_8_;
    uVar129 = auVar279._0_8_;
    auVar184._8_8_ = extraout_XMM1_Qb_49;
    puVar147 = *(uint **)((long)puVar100 + 0x10);
    puVar144 = *(uint **)((long)puVar100 + 8);
    uVar73 = lVar143;
    if (*(long *)((long)puVar147 + 0xd0) != 0) {
      uVar88._0_4_ = *(uint *)(lVar119 + 0x8c);
      uVar73._0_4_ = (uint)uVar88 >> 0x18;
      uVar73._4_4_ = 0;
      param_5._0_4_ = (uint)uVar88 >> 0x10 & 0xff;
      param_5._4_4_ = 0;
      param_6._4_4_ = 0;
      param_6._0_4_ = (uint)uVar88 >> 8 & 0xff;
      *(ulong *)((long)puVar100 + -0x10) = (ulong)((uint)uVar88 & 0xff);
      *(undefined8 *)((long)puVar100 + -0x18) = 0x3fbe5d;
      hb_buffer_t::message
                (uVar129,auVar184._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                 in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)puVar147,puVar144,
                 "end table GPOS script tag \'%c%c%c%c\'",uVar73,param_5,param_6,
                 *(undefined1 *)((long)puVar100 + -0x10));
      uVar129 = extraout_XMM0_Qa_31;
    }
  }
LAB_003fbe61:
  if ((*(ushort *)(lVar119 + 0x108) & 0x400) == 0) {
    if ((*(ushort *)(lVar119 + 0x108) & 0x800) != 0) {
      param_4 = puVar144;
      if ((*(uint *)((long)puVar147 + 0x38) & 0xfffffffe) == 4) {
        do {
          if (*(undefined **)(*(long *)(param_4 + 0x90) + 0x78) !=
              PTR_hb_font_get_glyph_h_kerning_default_00718ae8) goto LAB_003fc117;
          param_4 = *(undefined8 *)(param_4 + 0x18);
        } while (((pthread_mutex_t *)param_4 != (pthread_mutex_t *)0x0) &&
                ((pthread_mutex_t *)param_4 != (pthread_mutex_t *)&_hb_Null_hb_font_t));
      }
      else {
        do {
          if (*(undefined **)(*(long *)(param_4 + 0x90) + 0x80) !=
              PTR_hb_font_get_glyph_v_kerning_default_00718af0) goto LAB_003fc117;
          param_4 = *(undefined8 *)(param_4 + 0x18);
        } while (((pthread_mutex_t *)param_4 != (pthread_mutex_t *)0x0) &&
                ((pthread_mutex_t *)param_4 != (pthread_mutex_t *)&_hb_Null_hb_font_t));
      }
    }
  }
  else {
    *(undefined8 *)((long)puVar100 + -8) = 0x3fbed1;
    hb_ot_layout_kern(uVar129,auVar184._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_
                      ,in_XMM6._0_8_,in_XMM7._0_8_,*(undefined8 *)((long)puVar100 + 0x60),
                      (long)puVar144,(hb_buffer_t *)puVar147,(undefined4 *)uVar73,param_5,param_6);
  }
LAB_003fbed1:
  uVar29 = *(ushort *)(lVar119 + 0x108);
  if ((uVar29 & 0x4000) != 0) {
    lVar116 = *(long *)((long)puVar144 + 0x20);
    *(undefined8 *)((long)puVar100 + -8) = 0x3fbef2;
    puVar50 = hb_lazy_loader_t<AAT::trak,hb_table_lazy_loader_t<AAT::trak,32u,false>,hb_face_t,32u,hb_blob_t>
              ::get((hb_lazy_loader_t<AAT::trak,hb_table_lazy_loader_t<AAT::trak,32u,false>,hb_face_t,32u,hb_blob_t>
                     *)(lVar116 + 0x168));
    pTVar151 = (TrackData *)&_hb_NullPool;
    *(undefined8 *)((long)puVar100 + -8) = 0x3fbf17;
    hb_aat_apply_context_t::hb_aat_apply_context_t
              ((hb_aat_apply_context_t *)((long)puVar100 + 0xd0),
               *(undefined8 *)((long)puVar100 + 0x60),(long)puVar144,puVar147,
               (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
    lVar116 = *(long *)((long)puVar100 + 0xe0);
    fVar156 = *(float *)(lVar116 + 0x70);
    if (0.0 < fVar156) {
      uVar88._0_4_ = *(uint *)(*(long *)((long)puVar100 + 0xd8) + 0xa4);
      lVar119 = *(long *)((long)puVar100 + 0xf0);
      if ((*(uint *)(lVar119 + 0x38) & 0xfffffffe) == 4) {
        uVar29 = *(ushort *)((long)puVar50 + 6);
        if (uVar29 == 0) {
          pTVar151 = (TrackData *)&_hb_NullPool;
        }
        else {
          pTVar151 = (TrackData *)((long)puVar50 + (ulong)(ushort)(uVar29 << 8 | uVar29 >> 8));
        }
        *(undefined8 *)((long)puVar100 + -8) = 0x3fbf7c;
        iVar31 = TrackData::get_tracking(fVar156,pTVar151,(long)puVar50);
        fVar156 = *(float *)(lVar116 + 0x4c);
        *(float *)((long)puVar100 + 0x18) = fVar156;
        *(undefined8 *)((long)puVar100 + -8) = 0x3fbfac;
        fVar156 = floorf((float)(iVar31 / 2) * fVar156 + 0.5);
        *(float *)((long)puVar100 + 0x20) = fVar156;
        *(undefined8 *)((long)puVar100 + -8) = 0x3fbfd0;
        fVar156 = floorf((float)iVar31 * *(float *)((long)puVar100 + 0x18) + 0.5);
        uVar90 = *(uint *)(lVar119 + 0x60);
        if (uVar90 != 0) {
          fVar6 = *(float *)((long)puVar100 + 0x20);
          param_6._0_4_ = (uint)fVar156;
          param_6._4_4_ = 0;
          lVar116 = 0x24;
          uVar33 = 0;
          do {
            lVar34 = *(long *)(lVar119 + 0x70);
            if (uVar90 - 1 == uVar33) {
              uVar33 = (ulong)uVar90;
              break;
            }
            uVar33 = uVar33 + 1;
            pbVar136 = (byte *)(lVar34 + lVar116);
            lVar116 = lVar116 + 0x14;
          } while ((*pbVar136 & 0x80) != 0);
          uVar152 = 0;
          do {
            if ((*(uint *)(lVar34 + 4 + uVar152 * 0x14) & (uint)uVar88) != 0) {
              lVar116 = *(long *)(lVar119 + 0x80);
              piVar53 = (int *)(lVar116 + uVar152 * 0x14);
              *piVar53 = *piVar53 + (uint)param_6;
              piVar53 = (int *)(lVar116 + 8 + uVar152 * 0x14);
              *piVar53 = *piVar53 + (int)fVar6;
            }
            phVar32._0_4_ = (uint)uVar33;
            uVar64 = (uint)phVar32 + 1;
            if ((uint)phVar32 + 1 < uVar90) {
              uVar64 = uVar90;
            }
            uVar122 = (uint)phVar32;
            do {
              uVar122 = uVar122 + 1;
              uVar91 = uVar64;
              if (uVar90 <= uVar122) break;
              uVar91 = uVar122;
            } while ((*(byte *)(lVar34 + 0x10 + (ulong)uVar122 * 0x14) & 0x80) != 0);
            uVar152 = uVar33 & 0xffffffff;
            uVar33 = (ulong)uVar91;
          } while ((uint)phVar32 < uVar90);
        }
      }
      else {
        uVar29 = *(ushort *)(puVar50 + 2);
        if (uVar29 != 0) {
          pTVar151 = (TrackData *)((long)puVar50 + (ulong)(ushort)(uVar29 << 8 | uVar29 >> 8));
        }
        *(undefined8 *)((long)puVar100 + -8) = 0x3fc042;
        iVar31 = TrackData::get_tracking(fVar156,pTVar151,(long)puVar50);
        fVar156 = *(float *)(lVar116 + 0x50);
        *(float *)((long)puVar100 + 0x18) = fVar156;
        *(undefined8 *)((long)puVar100 + -8) = 0x3fc072;
        fVar156 = floorf((float)(iVar31 / 2) * fVar156 + 0.5);
        *(float *)((long)puVar100 + 0x20) = fVar156;
        *(undefined8 *)((long)puVar100 + -8) = 0x3fc096;
        fVar156 = floorf((float)iVar31 * *(float *)((long)puVar100 + 0x18) + 0.5);
        uVar90 = *(uint *)(lVar119 + 0x60);
        if (uVar90 != 0) {
          fVar6 = *(float *)((long)puVar100 + 0x20);
          param_6._0_4_ = (uint)fVar156;
          param_6._4_4_ = 0;
          lVar116 = 0x24;
          uVar33 = 0;
          do {
            lVar34 = *(long *)(lVar119 + 0x70);
            if (uVar90 - 1 == uVar33) {
              uVar33 = (ulong)uVar90;
              break;
            }
            uVar33 = uVar33 + 1;
            pbVar136 = (byte *)(lVar34 + lVar116);
            lVar116 = lVar116 + 0x14;
          } while ((*pbVar136 & 0x80) != 0);
          phVar32._0_4_ = 0;
          do {
            uVar152 = (ulong)(uint)phVar32;
            phVar32._0_4_ = (uint)uVar33;
            if ((*(uint *)(lVar34 + 4 + uVar152 * 0x14) & (uint)uVar88) != 0) {
              lVar116 = *(long *)(lVar119 + 0x80);
              piVar53 = (int *)(lVar116 + 4 + uVar152 * 0x14);
              *piVar53 = *piVar53 + (uint)param_6;
              piVar53 = (int *)(lVar116 + 0xc + uVar152 * 0x14);
              *piVar53 = *piVar53 + (int)fVar6;
            }
            uVar64 = (uint)phVar32 + 1;
            if ((uint)phVar32 + 1 < uVar90) {
              uVar64 = uVar90;
            }
            uVar33 = uVar33 & 0xffffffff;
            do {
              uVar122 = (int)uVar33 + 1;
              uVar33 = (ulong)uVar122;
              if (uVar90 <= uVar122) {
                uVar33 = (ulong)uVar64;
                break;
              }
            } while ((*(byte *)(lVar34 + 0x10 + (ulong)uVar122 * 0x14) & 0x80) != 0);
          } while ((uint)phVar32 < uVar90);
        }
      }
    }
    *(undefined8 *)((long)puVar100 + -8) = 0x3fcac4;
    hb_aat_apply_context_t::~hb_aat_apply_context_t
              ((hb_aat_apply_context_t *)((long)puVar100 + 0xd0));
    lVar119 = *(long *)((long)puVar100 + 0x30);
    uVar29 = *(ushort *)(lVar119 + 0x108);
    puVar147 = *(uint **)((long)puVar100 + 0x10);
  }
  param_5 = *(uint **)((long)puVar100 + 0x28);
  uVar92 = *(long *)((long)puVar100 + 0x48);
  if ((((uVar29 & 0x20) != 0) && (*(int *)(*(long *)(lVar119 + 0x80) + 0x58) == 2)) &&
     (uVar33 = (ulong)**(uint **)((long)puVar100 + 0x38), uVar33 != 0)) {
    lVar116 = *(long *)param_5;
    if (*(char *)((long)puVar100 + 0x70) == '\0') {
      lVar34 = 0;
      do {
        if ((*(byte *)(lVar116 + 0xc + lVar34) & 8) != 0) {
          *(undefined8 *)(*(long *)uVar92 + lVar34) = 0;
        }
        lVar34 = lVar34 + 0x14;
      } while (uVar33 * 0x14 != lVar34);
    }
    else {
      lVar34 = 0;
      do {
        if ((*(byte *)(lVar116 + 0xc + lVar34) & 8) != 0) {
          lVar143 = *(long *)uVar92;
          piVar53 = (int *)(lVar143 + 8 + lVar34);
          *piVar53 = *piVar53 - *(int *)(lVar143 + lVar34);
          piVar53 = (int *)(lVar143 + 0xc + lVar34);
          *piVar53 = *piVar53 - *(int *)(lVar143 + 4 + lVar34);
          *(undefined4 *)(lVar143 + lVar34) = 0;
          *(undefined4 *)(lVar143 + 4 + lVar34) = 0;
        }
        lVar34 = lVar34 + 0x14;
      } while (uVar33 * 0x14 != lVar34);
    }
  }
  if (((((byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                 *)((long)puVar147 + 0xc0) & 2) != 0) &&
      (((byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                *)((long)puVar147 + 0x18) & 0xc) == 0)) &&
     (uVar88._0_4_ = **(uint **)((long)puVar100 + 0x38), (ulong)(uint)uVar88 != 0)) {
    lVar116 = *(long *)param_5;
    lVar34 = *(long *)uVar92;
    lVar143 = 0;
    do {
      if (((*(byte *)(lVar116 + 0x10 + lVar143) & 0x20) != 0) &&
         ((*(byte *)(lVar116 + 0xc + lVar143) & 0x10) == 0)) {
        *(undefined1 (*) [16])(lVar34 + lVar143) = (undefined1  [16])0x0;
      }
      lVar143 = lVar143 + 0x14;
    } while ((ulong)(uint)uVar88 * 0x14 != lVar143);
  }
  if (((byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
               *)(lVar119 + 0x109) & 0x20) == 0) {
LAB_003fcbd2:
    uVar88._0_4_ = **(uint **)((long)puVar100 + 0x38);
    phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                *)puVar100;
    puVar144 = puVar147;
  }
  else {
    uVar88._0_4_ = **(uint **)((long)puVar100 + 0x38);
    phVar32._4_4_ = 0;
    phVar32._0_4_ = (uint)uVar88;
    phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                *)puVar100;
    puVar144 = puVar147;
    if ((pthread_mutex_t *)phVar32 != (pthread_mutex_t *)0x0) {
      param_4 = *(undefined8 *)param_5;
      lVar34 = *(long *)uVar92;
      if ((uint)uVar88 == 1) {
        uVar88 = (pthread_mutex_t *)0x0;
LAB_003fcbbb:
        if ((((ulong)phVar32 & 1) != 0) && (*(int *)(param_4 + uVar88 * 0x14) == 0xffff)) {
          *(undefined1 (*) [16])(lVar34 + uVar88 * 0x14) = (undefined1  [16])0x0;
        }
        goto LAB_003fcbd2;
      }
LAB_003fd072:
      lVar116._0_4_ = (uint)phVar32 & 0xfffffffe;
      lVar116._4_4_ = 0;
      uVar129 = (pthread_mutex_t *)0x0;
      auVar279 = (undefined1  [16])0x0;
      uVar88 = ((pthread_mutex_t *)0x0)->__size;
LAB_003fd080:
      do {
        if (*(int *)(param_4 + uVar129) == 0xffff) {
          *(undefined1 (*) [16])(lVar34 + uVar129) = auVar279;
          if (*(int *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(param_4 + 0x14) + uVar129) != 0xffff) goto LAB_003fd093;
LAB_003fd0b4:
          *(undefined1 (*) [16])
           ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
             *)(lVar34 + 0x14) + uVar129) = auVar279;
          uVar88 = uVar88 + 2;
          uVar129 = uVar129 + 0x28;
          if (lVar116 == uVar88) goto LAB_003fcbbb;
          goto LAB_003fd080;
        }
        if (*(int *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)(param_4 + 0x14) + uVar129) == 0xffff) goto LAB_003fd0b4;
LAB_003fd093:
        uVar88 = uVar88 + 2;
        uVar129 = uVar129 + 0x28;
        if (lVar116 == uVar88) goto LAB_003fcbbb;
      } while( true );
    }
  }
  if (*(char *)((long)puVar144 + 0x5b) == '\0') {
    if (*(int *)((long)puVar144 + 0xe8) == 0) {
      *(undefined2 *)((long)puVar144 + 0x5a) = 0x100;
      *(undefined4 *)((long)puVar144 + 100) = 0;
      ((pthread_mutex_t *)((long)puVar144 + 0x78))->__align = *(long *)((long)puVar144 + 0x70);
      if ((uint)uVar88 * 0x14 != 0) {
        pvVar57 = *(void **)uVar92;
        *(undefined8 *)(phVar107 + -8) = 0x3fcc21;
        memset(pvVar57,0,(ulong)((uint)uVar88 * 0x14));
        uVar92 = *(undefined8 *)(phVar107 + 0x48);
      }
      goto LAB_003fcc26;
    }
    lVar116 = 0;
    bVar78 = *(byte *)((long)puVar144 + 0xc0);
  }
  else {
LAB_003fcc26:
    lVar116 = *(long *)uVar92;
    bVar78 = *(byte *)((long)puVar144 + 0xc0);
  }
  if (((bVar78 & 8) != 0) && ((uint)uVar88 != 0)) {
    uVar90 = *(uint *)((long)puVar144 + 0x38);
    phVar32._0_4_ = 0;
    do {
      param_5 = (uint *)0x40;
      *(undefined8 *)(phVar107 + -8) = 0x3fcc65;
      OT::Layout::propagate_attachment_offsets
                (lVar116,(ulong)(uint)uVar88,(uint)phVar32,uVar90,0x40);
      phVar32._0_4_ = (uint)phVar32 + 1;
    } while ((uint)uVar88 != (uint)phVar32);
  }
  phVar32 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              **)(phVar107 + 8);
  fVar156 = *(float *)((long)phVar32 + 0x44);
  auVar175 = ZEXT416((uint)fVar156);
  auVar188 = (undefined1  [16])0x0;
  uVar33 = (ulong)*(uint *)(phVar107 + 0x78);
  if (((fVar156 != 0.0) || (NAN(fVar156))) && ((uint)uVar88 != 0)) {
    lVar119 = 0;
    do {
      while( true ) {
        auVar188 = ZEXT816(0x3f000000);
        iVar31 = *(int *)(lVar116 + 0xc + lVar119);
        if (iVar31 != 0) break;
        lVar119 = lVar119 + 0x14;
        phVar32 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    **)(phVar107 + 8);
        if ((ulong)(uint)uVar88 * 0x14 == lVar119) goto LAB_003fcc95;
      }
      fVar156 = *(float *)(*(long *)(phVar107 + 8) + 0x48);
      *(undefined8 *)(phVar107 + -8) = 0x3fdc20;
      auVar175._0_4_ = floorf((float)iVar31 * fVar156 + auVar188._0_4_);
      auVar175._4_12_ = extraout_var;
      uVar33 = (ulong)*(uint *)(phVar107 + 0x78);
      auVar188 = ZEXT816(0x3f000000);
      *(int *)(lVar116 + 8 + lVar119) =
           (int)((float)*(int *)(lVar116 + 8 + lVar119) + auVar175._0_4_);
      lVar119 = lVar119 + 0x14;
      phVar32 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  **)(phVar107 + 8);
    } while ((ulong)(uint)uVar88 * 0x14 != lVar119);
  }
LAB_003fcc95:
  uVar75 = phVar32;
  while (*(undefined **)(*(long *)*(undefined1 (*) [16])(uVar75 + 0x90) + 0x68) ==
         PTR_hb_font_get_glyph_h_origin_default_00718ad8) {
    uVar75 = ((__pthread_list_t *)(uVar75 + 0x18))->__prev;
    if (((pthread_mutex_t *)uVar75 == (pthread_mutex_t *)0x0) ||
       ((pthread_mutex_t *)uVar75 == (pthread_mutex_t *)&_hb_Null_hb_font_t)) goto LAB_003fcd2a;
  }
  if ((int)uVar33 != 0) {
    lVar116 = 0;
    do {
      uVar30 = *(undefined4 *)(*(long *)(phVar107 + 0x50) + lVar116);
      *(undefined8 *)(phVar107 + -8) = 0x3fcd06;
      auVar279 = hb_font_t::get_glyph_h_origin_with_fallback
                           ((hb_font_t *)phVar32,uVar30,(int *)(phVar107 + 0xd0),
                            (int *)(phVar107 + 0x240));
      auVar188._0_8_ = auVar279._8_8_;
      auVar175._0_8_ = auVar279._0_8_;
      auVar188._8_8_ = extraout_XMM1_Qb_50;
      auVar175._8_8_ = extraout_XMM0_Qb_19;
      uVar75 = *(undefined8 *)(phVar107 + 0x40);
      piVar53 = (int *)((long)(uVar75 + 8) + lVar116);
      *piVar53 = *piVar53 - *(int *)(phVar107 + 0xd0);
      piVar53 = (int *)((long)(uVar75 + 0xc) + lVar116);
      *piVar53 = *piVar53 - *(int *)(phVar107 + 0x240);
      lVar116 = lVar116 + 0x14;
    } while (uVar33 * 0x14 != lVar116);
  }
LAB_003fcd2a:
  if ((*(byte *)(*(long *)(phVar107 + 0x30) + 0x108) & 0x80) != 0) {
    uVar88._0_4_ = 0;
    *(undefined8 *)(phVar107 + -8) = 0x3fcd53;
    bVar153 = hb_buffer_t::message
                        (auVar175._0_8_,auVar188._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                         in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)puVar144,phVar32,
                         "start fallback mark",uVar75,param_5,param_6,*phVar107);
    auVar175 = extraout_XMM0_29;
    if (bVar153) {
      uVar90 = **(uint **)(phVar107 + 0x38);
      param_5._4_4_ = 0;
      param_5._0_4_ = uVar90;
      bVar78 = *(byte *)(phVar107 + 0x70);
      uVar33 = (ulong)bVar78;
      if ((pthread_mutex_t *)0x1 < param_5) {
        puVar100 = (uint *)(**(long **)(phVar107 + 0x28) + 0x24);
        uVar88._0_4_ = 0;
        ppVar117 = (pthread_mutex_t *)((pthread_mutex_t *)0x1)->__size;
        do {
          if ((0x1c00U >> (*puVar100 & 0x1f) & 1) == 0) {
            *(undefined8 *)(phVar107 + -8) = 0x3fcdb5;
            position_cluster(*(uint **)(phVar107 + 0x60),*(long *)(phVar107 + 8),
                             *(hb_buffer_t **)(phVar107 + 0x10),(uint)uVar88,(uint)ppVar117,
                             (uint)bVar78);
            uVar88._0_4_ = (uint)ppVar117;
          }
          ppVar117 = (pthread_mutex_t *)(ppVar117->__size + 1);
          puVar100 = puVar100 + 5;
        } while ((pthread_mutex_t *)param_5 != ppVar117);
      }
      phVar32 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  **)(phVar107 + 8);
      puVar144 = *(uint **)(phVar107 + 0x10);
      uVar75._4_4_ = 0;
      uVar75._0_4_ = (uint)uVar88;
      *(undefined8 *)(phVar107 + -8) = 0x3fcde8;
      auVar279 = position_cluster(*(uint **)(phVar107 + 0x60),(long)phVar32,(hb_buffer_t *)puVar144,
                                  (uint)uVar88,uVar90,(uint)bVar78);
      auVar188._0_8_ = auVar279._8_8_;
      auVar188._8_8_ = extraout_XMM1_Qb_51;
      *(undefined8 *)(phVar107 + -8) = 0x3fcdfc;
      hb_buffer_t::message
                (auVar279._0_8_,auVar188._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                 in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)puVar144,phVar32,
                 "end fallback mark",uVar75,param_5,uVar33,*phVar107);
      auVar175 = extraout_XMM0_30;
    }
  }
  lVar119 = *(long *)(phVar107 + 0x30);
  plVar125 = *(long **)(phVar107 + 0x28);
  plVar142 = *(long **)(phVar107 + 0x48);
  if ((*(uint *)((long)puVar144 + 0x38) & 0xfffffffd) == 5) {
    uVar88._0_4_ = **(uint **)(phVar107 + 0x38);
    if (1 < (uint)uVar88) {
      uVar75 = *plVar125;
      uVar33 = (ulong)((uint)uVar88 - 1);
      plVar127 = (long *)(uVar75 + uVar33 * 0x14);
      uVar152 = 0;
      do {
        uVar33 = uVar33 - 1;
        *(int *)(phVar107 + 0xe0) = (int)plVar127[2];
        lVar116 = plVar127[1];
        *(long *)(phVar107 + 0xd0) = *plVar127;
        *(long *)(phVar107 + 0xd8) = lVar116;
        *(int *)(plVar127 + 2) = *(int *)(uVar75 + 0x10);
        lVar116 = *(long *)(uVar75 + 8);
        *plVar127 = *(long *)uVar75;
        plVar127[1] = lVar116;
        *(int *)(uVar75 + 0x10) = *(int *)(phVar107 + 0xe0);
        auVar175 = *(undefined1 (*) [16])(phVar107 + 0xd0);
        *(undefined1 (*) [16])uVar75 = auVar175;
        uVar152 = uVar152 + 1;
        uVar75 = uVar75 + 0x14;
        plVar127 = (long *)((long)plVar127 + -0x14);
      } while (uVar152 < (uVar33 & 0xffffffff));
    }
    if (*(char *)((long)puVar144 + 0x5b) != '\0') {
      uVar90 = **(uint **)(phVar107 + 0x38);
      uVar75._4_4_ = 0;
      uVar75._0_4_ = uVar90;
      if (uVar90 < (uint)uVar88) {
        uVar88._0_4_ = uVar90;
      }
      if (1 < (uint)uVar88) {
        uVar75 = *plVar142;
        uVar33 = (ulong)((uint)uVar88 - 1);
        plVar127 = (long *)(uVar75 + uVar33 * 0x14);
        uVar152 = 0;
        do {
          uVar33 = uVar33 - 1;
          *(int *)(phVar107 + 0xe0) = (int)plVar127[2];
          lVar116 = plVar127[1];
          *(long *)(phVar107 + 0xd0) = *plVar127;
          *(long *)(phVar107 + 0xd8) = lVar116;
          *(int *)(plVar127 + 2) = *(int *)(uVar75 + 0x10);
          lVar116 = *(long *)(uVar75 + 8);
          *plVar127 = *(long *)uVar75;
          plVar127[1] = lVar116;
          *(int *)(uVar75 + 0x10) = *(int *)(phVar107 + 0xe0);
          auVar175 = *(undefined1 (*) [16])(phVar107 + 0xd0);
          *(undefined1 (*) [16])uVar75 = auVar175;
          uVar152 = uVar152 + 1;
          uVar75 = uVar75 + 0x14;
          plVar127 = (long *)((long)plVar127 + -0x14);
        } while (uVar152 < (uVar33 & 0xffffffff));
      }
    }
  }
  *(byte *)((long)puVar144 + 0xb8) = *(byte *)((long)puVar144 + 0xb8) & 0xf8;
  if ((*(ushort *)(lVar119 + 0x108) & 0x2200) == 0x2000) {
    *(undefined8 *)(phVar107 + -8) = 0x3fcf31;
    auVar279 = hb_aat_layout_remove_deleted_glyphs((hb_buffer_t *)puVar144);
    auVar188._0_8_ = auVar279._8_8_;
    auVar175._0_8_ = auVar279._0_8_;
    auVar188._8_8_ = extraout_XMM1_Qb_52;
    auVar175._8_8_ = extraout_XMM0_Qb_20;
    plVar142 = *(long **)(phVar107 + 0x48);
    plVar125 = *(long **)(phVar107 + 0x28);
  }
  uVar129 = auVar188._0_8_;
  uVar88._0_4_ = *(uint *)((long)puVar144 + 0xc0);
  if ((((uint)uVar88 & 0x80) != 0) && (*(int *)((long)puVar144 + 0x2c) != -1)) {
    uVar75 = *(undefined8 *)(phVar107 + 0x38);
    uVar90 = *(uint *)uVar75;
    if ((ulong)uVar90 != 0) {
      lVar116 = *plVar125;
      uVar75 = *plVar142;
      lVar34 = 0;
      auVar175 = ZEXT816(0);
      do {
        if ((*(ushort *)(lVar116 + 0x10 + lVar34) & 0x41f) == 0x401) {
          *(undefined4 *)(lVar116 + lVar34) = *(undefined4 *)((long)puVar144 + 0x2c);
          *(undefined1 (*) [16])(uVar75 + lVar34) = auVar175;
          *(ushort *)(lVar116 + 0x10 + lVar34) = *(ushort *)(lVar116 + 0x10 + lVar34) & 0xe0 | 0xc;
        }
        lVar34 = lVar34 + 0x14;
      } while ((ulong)uVar90 * 0x14 != lVar34);
      uVar88._0_4_ = *(uint *)((long)puVar144 + 0xc0);
    }
  }
  uVar111 = auVar175._0_8_;
  if ((((uint)uVar88 & 2) != 0) &&
     (p_Var133 = ((__pthread_list_t *)((long)puVar144 + 0x18))->__prev, ((ulong)p_Var133 & 4) == 0))
  {
    uVar90 = *(uint *)((long)puVar144 + 0x60);
    uVar118._4_4_ = 0;
    uVar118._0_4_ = uVar90;
    uVar92 = *(long *)((long)puVar144 + 0x70);
    uVar88._0_4_ = *(uint *)((long)puVar144 + 0x24);
    uVar75._4_4_ = 0;
    uVar75._0_4_ = (uint)uVar88;
    *(uint *)(phVar107 + 0xd0) = (uint)uVar88;
    if (((ulong)p_Var133 & 8) == 0) {
      if ((uint)uVar88 == 0) {
        *(undefined4 *)(phVar107 + 0xd0) = 0;
        pcVar58 = *(char **)((long)phVar32 + 0x90);
code_r0x003fcffd:
        uVar129 = *(undefined8 *)((long)phVar32 + 0x98);
        pcVar86 = *(code **)(pcVar58 + 0x30);
        if (*(long *)(pcVar58 + 0x10) == 0) {
          param_5 = (uint *)0x0;
        }
        else {
          param_5 = *(uint **)(*(long *)(pcVar58 + 0x10) + 0x10);
        }
        uVar75 = (long)phVar107 + 0xd0;
        *(undefined8 *)(phVar107 + -8) = 0x3fd45b;
        iVar31 = (*pcVar86)(phVar32,uVar129,0x20);
        auVar188._8_8_ = extraout_XMM1_Qb_55;
        auVar188._0_8_ = extraout_XMM1_Qa_39;
        auVar175._8_8_ = extraout_XMM0_Qb_21;
        auVar175._0_8_ = extraout_XMM0_Qa_38;
        plVar125 = *(long **)(phVar107 + 0x28);
        plVar142 = *(long **)(phVar107 + 0x48);
        uVar111 = extraout_XMM0_Qa_38;
        uVar129 = extraout_XMM1_Qa_39;
        if (iVar31 == 0) {
          uVar90 = **(uint **)(phVar107 + 0x38);
          goto LAB_003fd4be;
        }
      }
      if ((int)uVar118 != 0) {
        uVar75 = ((pthread_mutex_t *)0x0)->__size;
        do {
          if ((((byte)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(uVar92 + 0x10))[uVar75] & 0x20) != 0) &&
             (((byte)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                       *)(uVar92 + 0xc))[uVar75] & 0x10) == 0)) {
            *(undefined4 *)(uVar92 + uVar75) = *(undefined4 *)(phVar107 + 0xd0);
          }
          uVar75 = uVar75 + 0x14;
        } while ((pthread_mutex_t *)(uVar118 * 0x14) != (pthread_mutex_t *)uVar75);
      }
    }
    else {
LAB_003fd4be:
      uVar129 = auVar188._0_8_;
      uVar111 = auVar175._0_8_;
      if (uVar90 == 0) {
        param_5 = (uint *)0x0;
      }
      else {
        ppVar117 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
        param_5 = (uint *)0x0;
        do {
          uVar75 = *plVar125;
          iVar31 = (int)param_5;
          if (((((int *)(uVar75 + 0x10))[(long)ppVar117 * 5] & 0x20) == 0) ||
             ((((uint *)(uVar75 + 0xc))[(long)ppVar117 * 5] & 0x10) != 0)) {
            if (ppVar117 != (pthread_mutex_t *)param_5) {
              puVar131 = (undefined8 *)(uVar75 + (long)ppVar117 * 0x14);
              lVar34 = (long)param_5 * 0x14;
              ((int *)(uVar75 + 0x10))[(long)param_5 * 5] = *(int *)(puVar131 + 2);
              uVar129 = puVar131[1];
              *(undefined8 *)(uVar75 + lVar34) = *puVar131;
              ((undefined8 *)(uVar75 + lVar34))[1] = uVar129;
              lVar116 = *plVar142;
              uVar88._0_4_ = *(uint *)(lVar116 + 0x10 + (long)ppVar117 * 0x14);
              uVar75._4_4_ = 0;
              uVar75._0_4_ = (uint)uVar88;
              *(uint *)(lVar116 + 0x10 + lVar34) = (uint)uVar88;
              auVar175 = *(undefined1 (*) [16])(lVar116 + (long)ppVar117 * 0x14);
              *(undefined1 (*) [16])(lVar116 + lVar34) = auVar175;
            }
            param_5._0_4_ = iVar31 + 1;
            param_5._4_4_ = 0;
          }
          else {
            uVar88._0_4_ = ((int *)(uVar75 + 8))[(long)ppVar117 * 5];
            if ((pthread_mutex_t *)(ppVar117->__size + 1) < (pthread_mutex_t *)(ulong)uVar90) {
              if ((uint)uVar88 != ((int *)(uVar75 + 8))[(long)(ppVar117->__size + 1) * 5]) {
                if (iVar31 != 0) goto LAB_003fd57f;
                *(undefined8 *)(phVar107 + -8) = 0x3fd52a;
                auVar279 = hb_buffer_t::merge_clusters_impl
                                     ((hb_buffer_t *)puVar144,(uint)ppVar117,(uint)ppVar117 + 2);
                auVar188._0_8_ = auVar279._8_8_;
                auVar175._0_8_ = auVar279._0_8_;
                auVar188._8_8_ = extraout_XMM1_Qb_56;
                auVar175._8_8_ = extraout_XMM0_Qb_22;
                plVar142 = *(long **)(phVar107 + 0x48);
                plVar125 = *(long **)(phVar107 + 0x28);
                param_5 = (uint *)0x0;
              }
            }
            else if (iVar31 == 0) {
              param_5 = (uint *)0x0;
            }
            else {
LAB_003fd57f:
              uVar64 = ((int *)(uVar75 + 8))[(ulong)(iVar31 - 1) * 5];
              if ((uint)uVar88 < uVar64) {
                uVar122 = ((uint *)(uVar75 + 4))[(long)ppVar117 * 5];
                uVar75 = (long)(uVar75 + (long)param_5 * 0x14) + -0xc;
                uVar129 = param_5;
                do {
                  if (*(uint *)uVar75 != uVar64) break;
                  uVar129 = uVar129 + -1;
                  *(uint *)(uVar75 + -4) = *(uint *)(uVar75 + -4) & 0xfffffff8 | uVar122 & 7;
                  *(uint *)uVar75 = (uint)uVar88;
                  uVar75 = uVar75 + -0x14;
                } while ((pthread_mutex_t *)uVar129 != (pthread_mutex_t *)0x0);
              }
            }
          }
          uVar129 = auVar188._0_8_;
          uVar111 = auVar175._0_8_;
          ppVar117 = (pthread_mutex_t *)(ppVar117->__size + 1);
        } while (ppVar117 != (pthread_mutex_t *)(ulong)uVar90);
      }
      **(undefined4 **)(phVar107 + 0x38) = (int)param_5;
    }
  }
  if (*(long *)(*(long *)(lVar119 + 0x80) + 0x28) != 0) {
    *(undefined8 *)(phVar107 + -8) = 0x3fd60c;
    bVar153 = hb_buffer_t::message
                        (uVar111,uVar129,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                         in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)puVar144,phVar32,
                         "start postprocess-glyphs",uVar75,param_5,plVar125,*phVar107);
    if (bVar153) {
      pcVar86 = *(code **)(*(long *)(lVar119 + 0x80) + 0x28);
      *(undefined8 *)(phVar107 + -8) = 0x3fd625;
      auVar279 = (*pcVar86)(*(undefined8 *)(phVar107 + 0x60),puVar144,phVar32);
      *(undefined8 *)(phVar107 + -8) = 0x3fd639;
      hb_buffer_t::message
                (auVar279._0_8_,auVar279._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                 in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)puVar144,phVar32,
                 "end postprocess-glyphs",uVar75,param_5,plVar125,*phVar107);
    }
  }
  auVar279 = _DAT_005de080;
  if (((*(byte *)((long)puVar144 + 0xc0) & 0x20) != 0) &&
     (uVar88._0_4_ = *(uint *)(*(long *)(phVar107 + 0x10) + 0x60), (uint)uVar88 != 0)) {
    uVar90 = *(uint *)(*(long *)(phVar107 + 0x10) + 0x18);
    lVar116 = *(long *)(*(long *)(phVar107 + 0x10) + 0x70);
    uVar33 = 0;
    piVar53 = (int *)(lVar116 + 8);
    do {
      if ((uint)uVar88 - 1 == uVar33) {
        uVar33 = (ulong)(uint)uVar88;
        break;
      }
      iVar31 = *piVar53;
      uVar33 = uVar33 + 1;
      piVar1 = piVar53 + 5;
      piVar53 = piVar53 + 5;
    } while (iVar31 == *piVar1);
    lVar119 = lVar116 + 4;
    if ((uVar90 & 0x80) == 0) {
      uVar152 = 0;
      do {
        phVar32._0_4_ = (uint)uVar33;
        uVar146 = uVar33 & 0xffffffff;
        if ((uint)uVar152 < (uint)phVar32) {
          uVar135 = uVar33 & 0xffffffff;
          uVar134 = uVar135 - uVar152;
          uVar64 = 0;
          uVar76 = uVar152;
          if (8 < uVar134) {
            uVar76 = (ulong)((uint)uVar134 & 7);
            if (uVar76 == 0) {
              uVar76 = 8;
            }
            lVar34 = (uVar76 + uVar152) - uVar135;
            puVar50 = (undefined4 *)(lVar116 + 0x90 + uVar152 * 0x14);
            auVar189 = (undefined1  [16])0x0;
            auVar226 = (undefined1  [16])0x0;
            do {
              auVar270._12_4_ = puVar50[-0x14];
              auVar270._8_4_ = puVar50[-0x19];
              auVar270._4_4_ = puVar50[-0x1e];
              auVar270._0_4_ = puVar50[-0x23];
              auVar272._12_4_ = *puVar50;
              auVar272._8_4_ = puVar50[-5];
              auVar272._4_4_ = puVar50[-10];
              auVar272._0_4_ = puVar50[-0xf];
              auVar189 = auVar189 | auVar270 & auVar279;
              auVar226 = auVar226 | auVar272 & auVar279;
              puVar50 = puVar50 + 0x28;
              lVar34 = lVar34 + 8;
            } while (lVar34 != 0);
            uVar76 = (uVar134 - uVar76) + uVar152;
            auVar226 = auVar226 | auVar189;
            auVar190._0_8_ = auVar226._8_8_;
            auVar190._8_4_ = auVar226._8_4_;
            auVar190._12_4_ = auVar226._12_4_;
            uVar64 = SUB164(auVar190 | auVar226,4) | SUB164(auVar190 | auVar226,0);
          }
          lVar34 = uVar135 - uVar76;
          puVar100 = (uint *)(lVar119 + uVar76 * 0x14);
          do {
            uVar64 = uVar64 | *puVar100 & 7;
            puVar100 = puVar100 + 5;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
          uVar122 = uVar64 & 0xfffffffd;
          if ((uVar90 & 0x40) != 0) {
            uVar122 = uVar64;
          }
          uVar76 = ~uVar152;
          if ((uVar134 & 3) != 0) {
            puVar100 = (uint *)(lVar119 + uVar152 * 0x14);
            lVar34 = 0;
            do {
              *puVar100 = uVar122;
              lVar34 = lVar34 + -1;
              puVar100 = puVar100 + 5;
            } while (-lVar34 != (uVar134 & 3));
            uVar152 = uVar152 - lVar34;
          }
          if (2 < uVar76 + uVar135) {
            lVar34 = uVar135 - uVar152;
            puVar100 = (uint *)(lVar116 + 0x40 + uVar152 * 0x14);
            do {
              puVar100[-0xf] = uVar122;
              puVar100[-10] = uVar122;
              puVar100[-5] = uVar122;
              *puVar100 = uVar122;
              puVar100 = puVar100 + 0x14;
              lVar34 = lVar34 + -4;
            } while (lVar34 != 0);
          }
        }
        uVar64 = (uint)phVar32 + 1;
        if ((uint)phVar32 + 1 < (uint)uVar88) {
          uVar64 = (uint)uVar88;
        }
        uVar152 = uVar33 & 0xffffffff;
        do {
          uVar122 = (int)uVar152 + 1;
          uVar33 = (ulong)uVar122;
          if ((uint)uVar88 <= uVar122) {
            uVar33 = (ulong)uVar64;
            break;
          }
          lVar34 = uVar152 * 0x14;
          uVar152 = uVar33;
        } while (*(int *)(lVar116 + 8 + lVar34) == *(int *)(lVar116 + 8 + (ulong)uVar122 * 0x14));
        uVar152 = uVar146;
      } while ((uint)phVar32 < (uint)uVar88);
    }
    else {
      uVar152 = 0;
      do {
        uVar122 = (uint)uVar33;
        uVar76 = uVar33 & 0xffffffff;
        phVar32._0_4_ = (uint)uVar152;
        uVar146 = uVar33 & 0xffffffff;
        uVar64 = 0;
        if ((uint)phVar32 < uVar122) {
          uVar135 = uVar146 - uVar152;
          uVar64 = 0;
          if (uVar135 < 9) {
            uVar135 = uVar152;
          }
          else {
            uVar134 = (ulong)((uint)uVar135 & 7);
            if (uVar134 == 0) {
              uVar134 = 8;
            }
            lVar34 = (uVar134 + uVar152) - uVar146;
            puVar50 = (undefined4 *)(lVar116 + 0x90 + uVar152 * 0x14);
            auVar189 = (undefined1  [16])0x0;
            auVar226 = (undefined1  [16])0x0;
            do {
              auVar271._12_4_ = puVar50[-0x14];
              auVar271._8_4_ = puVar50[-0x19];
              auVar271._4_4_ = puVar50[-0x1e];
              auVar271._0_4_ = puVar50[-0x23];
              auVar273._12_4_ = *puVar50;
              auVar273._8_4_ = puVar50[-5];
              auVar273._4_4_ = puVar50[-10];
              auVar273._0_4_ = puVar50[-0xf];
              auVar189 = auVar189 | auVar271 & auVar279;
              auVar226 = auVar226 | auVar273 & auVar279;
              puVar50 = puVar50 + 0x28;
              lVar34 = lVar34 + 8;
            } while (lVar34 != 0);
            uVar135 = (uVar135 - uVar134) + uVar152;
            auVar226 = auVar226 | auVar189;
            auVar191._0_8_ = auVar226._8_8_;
            auVar191._8_4_ = auVar226._8_4_;
            auVar191._12_4_ = auVar226._12_4_;
            uVar64 = SUB164(auVar191 | auVar226,4) | SUB164(auVar191 | auVar226,0);
          }
          lVar34 = uVar146 - uVar135;
          puVar100 = (uint *)(lVar119 + uVar135 * 0x14);
          do {
            uVar64 = uVar64 | *puVar100 & 7;
            puVar100 = puVar100 + 5;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
        }
        uVar91 = uVar64 & 0xfffffffb;
        if ((uVar64 & 1) == 0) {
          uVar91 = uVar64;
        }
        uVar64 = uVar91 | 3;
        if ((uVar91 & 4) == 0) {
          uVar64 = uVar91;
        }
        uVar91 = uVar64 & 0xfffffffd;
        if ((uVar90 & 0x40) != 0) {
          uVar91 = uVar64;
        }
        if ((uint)phVar32 < uVar122) {
          uVar135 = ~uVar152;
          if ((uVar122 - (uint)phVar32 & 3) != 0) {
            puVar100 = (uint *)(lVar119 + uVar152 * 0x14);
            lVar34 = 0;
            do {
              *puVar100 = uVar91;
              lVar34 = lVar34 + -1;
              puVar100 = puVar100 + 5;
            } while (-lVar34 != ((ulong)(uVar122 - (uint)phVar32) & 3));
            uVar152 = uVar152 - lVar34;
          }
          if (2 < uVar135 + uVar146) {
            lVar34 = uVar146 - uVar152;
            puVar100 = (uint *)(lVar116 + 0x40 + uVar152 * 0x14);
            do {
              puVar100[-0xf] = uVar91;
              puVar100[-10] = uVar91;
              puVar100[-5] = uVar91;
              *puVar100 = uVar91;
              puVar100 = puVar100 + 0x14;
              lVar34 = lVar34 + -4;
            } while (lVar34 != 0);
          }
        }
        phVar32._0_4_ = uVar122 + 1;
        if (uVar122 + 1 < (uint)uVar88) {
          phVar32._0_4_ = (uint)uVar88;
        }
        uVar152 = uVar33 & 0xffffffff;
        do {
          if ((uint)phVar32 - 1 == (int)uVar152) {
            uVar33 = (ulong)(uint)phVar32;
            break;
          }
          uVar33 = (ulong)((int)uVar152 + 1);
          lVar34 = uVar152 * 0x14;
          uVar152 = uVar33;
        } while (*(int *)(lVar116 + 8 + lVar34) == *(int *)(lVar116 + 8 + uVar33 * 0x14));
        uVar152 = uVar76;
      } while (uVar122 < (uint)uVar88);
    }
  }
  lVar116 = *(long *)(phVar107 + 0x10);
  *(undefined4 *)(lVar116 + 0x38) = *(undefined4 *)(phVar107 + 0x84);
  *(undefined8 *)(lVar116 + 0xc4) = 0x1fffffff3fffffff;
  *(undefined2 *)(lVar116 + 0xb8) = 0;
  return (pthread_mutex_t *)0x1;
code_r0x003f7fa7:
  *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
    *)(lVar34 + -0x7d) =
       (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
        )((char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)(lVar34 + -0x7d) + (char)param_4);
  return (pthread_mutex_t *)lVar34;
  while( true ) {
    uVar88._0_4_ = *(uint *)(uVar33 + uVar111);
    lVar34 = (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                     ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) * 4;
    uVar88._0_4_ = (uint)lVar34;
    if ((((int)((ulong)lVar34 >> 0x20) != 0) ||
        ((ulong)*in_R11 < (ulong)((long)phVar107 - *(long *)param_6))) ||
       (((uint)(*(int *)(lVar116 + 0x10) - (int)phVar107) < (uint)uVar88 ||
        (iVar31 = *(int *)(lVar116 + 0x1c) - (uint)uVar88, *(int *)(lVar116 + 0x1c) = iVar31,
        iVar31 < 1)))) goto LAB_003f312d;
    if ((int)puVar147 == (int)phVar32)
    goto 
    AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_1
    ;
    lVar34._2_6_ = 0;
    lVar34._0_2_ = *(ushort *)(uVar129 + 4);
    phVar32._0_4_ = (int)phVar32 + 1;
    phVar32._4_4_ = 0;
LAB_003f3331:
    uVar29 = (ushort)lVar34;
    uVar79 = uVar29 << 8 | uVar29 >> 8;
    iVar31 = 0;
    if (uVar29 != 0) {
      uVar88._0_4_ = (uint)(ushort)(*(ushort *)(uVar129 + 2) << 8 | *(ushort *)(uVar129 + 2) >> 8) *
                     ((uint)uVar79 + (int)param_5);
      iVar31 = 0;
      if (*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)(uVar129 + 0xc) + (uint)uVar88) == -1) {
        iVar31 = -(uint)(*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                     *)((long)puVar144 + 2) + (uint)uVar88) == -1);
      }
    }
    uVar49 = lVar119;
    if ((uint)phVar32 < iVar31 + (uint)uVar79) {
      uVar49 = (ulong)((uint)(ushort)(*(ushort *)(uVar129 + 2) << 8 | *(ushort *)(uVar129 + 2) >> 8)
                      * (uint)phVar32) + (long)puVar144;
    }
    uVar33 = (uVar49 - *(long *)param_6) + 6;
    in_R10 = 0;
    if ((*in_R11 < uVar33) || (*in_R11 < uVar33)) break;
code_r0x003f33ac:
    uVar33 = (ulong)(ushort)(*(ushort *)(uVar49 + 4) << 8 | *(ushort *)(uVar49 + 4) >> 8);
    phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                *)(uVar33 + uVar111) + 4;
    if ((ulong)*in_R11 < (ulong)((long)phVar107 - *(long *)param_6)) goto LAB_003f312d;
  }

  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  :
  return (pthread_mutex_t *)(in_R10 & 0xffffffff);
  while( true ) {
    uStack0000000000000058._0_4_ = 0;
    in_stack_00000070 = (undefined1  [16])0x0;
    in_stack_00000060 = 0;
    uStack0000000000000068 = 0;
    uStack000000000000006c = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000095 = 0;
    auStack0000000000000084 = (undefined1  [16])0x0;
    uStack0000000000000094 = 1;
    piVar53 = (int *)&_hb_NullPool;
    if (*(code **)(lVar119 + 0x20) != (code *)0x0) {
      uStack_40 = 0x3eaa2c;
      piVar53 = (int *)(**(code **)(lVar119 + 0x20))
                                 (lVar119,0x6d617870,*(undefined8 *)(lVar119 + 0x28));
      if (piVar53 == (int *)0x0) {
        piVar53 = (int *)&_hb_NullPool;
      }
    }
    uStack_40 = &LAB_003eaa45;
    piVar53 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                        ((hb_sanitize_context_t *)&uStack0000000000000058,piVar53);
    uStack_40 = 0x3eaa55;
    hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)&uStack0000000000000058);
    if (piVar53 == (int *)0x0) {
      piVar53 = (int *)&_hb_NullPool;
      LOCK();
      bVar153 = *(long *)(lVar116 + 0x78) == 0;
      if (bVar153) {
        *(long *)(lVar116 + 0x78) = (long)&_hb_NullPool;
      }
      UNLOCK();
    }
    else {
      LOCK();
      bVar153 = *(long *)(lVar116 + 0x78) == 0;
      if (bVar153) {
        *(long *)(lVar116 + 0x78) = (long)piVar53;
      }
      UNLOCK();
    }
    if (bVar153) goto LAB_003ea614;
    if (((piVar53 != (int *)0x0) && ((uint *)piVar53 != &_hb_NullPool)) && (*piVar53 != 0)) {
      LOCK();
      *piVar53 = *piVar53 + -1;
      UNLOCK();
      if (*piVar53 == 0) {
        *piVar53 = -0xdead;
        ppVar117 = *(pthread_mutex_t **)(piVar53 + 2);
        if (ppVar117 != (pthread_mutex_t *)0x0) {
          uStack_40 = 0x3eaab0;
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar117[1].__data,ppVar117);
          uStack_40 = 0x3eaaba;
          free(ppVar117);
          piVar53[2] = 0;
          piVar53[3] = 0;
        }
        if (*(code **)(piVar53 + 10) != (code *)0x0) {
          uStack_40 = &LAB_003eaad4;
          (**(code **)(piVar53 + 10))(*(undefined8 *)(piVar53 + 8));
        }
        uStack_40 = &LAB_003eaadc;
        free(piVar53);
      }
    }
    piVar53 = *(int **)(lVar116 + 0x78);
    if (piVar53 != (int *)0x0) break;
LAB_003ea9d3:
    lVar119 = *(long *)(lVar116 + 0x68);
    piVar53 = (int *)&_hb_NullPool;
    if (lVar119 == 0) goto LAB_003ea614;
  }
LAB_003ea611:
LAB_003ea614:
  if ((uint)piVar53[6] < 6) {
    puVar50 = &_hb_NullPool;
  }
  else {
    puVar50 = *(undefined4 **)(piVar53 + 4);
  }
  uVar29 = *(ushort *)(puVar50 + 1);
  unaff_EBP = (uint)(ushort)(uVar29 << 8 | uVar29 >> 8);
  if (uVar29 == 0) {
    unaff_EBP = 0;
  }
  *(uint *)(lVar116 + 0x18) = unaff_EBP;
  uVar129 = unaff_RBX;
LAB_003e78b9:
  uVar88._0_4_ = *(uint *)(unaff_R13 + 0x14);
  uVar90 = *(uint *)(unaff_R13 + 0x18);
  param_4 = *(undefined8 *)
             ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
               *)((ulong)(uVar90 >> 0x18 | (uVar90 & 0xff0000) >> 8 | (uVar90 & 0xff00) << 8 |
                         uVar90 << 0x18) + unaff_R13) +
             (ulong)(ushort)(*(ushort *)
                              ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                *)(unaff_R13 + 0xe) +
                              ((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                               ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18)) << 8 |
                            *(ushort *)
                             ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                               *)(unaff_R13 + 0xe) +
                             ((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                              ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18)) >> 8) * 8 + 0xc)
  ;
  phVar32 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              **)(uVar129 + 0x20);
  param_5._4_4_ = 0;
  param_5._0_4_ = *(uint *)((long)phVar32 + 0x60);
  bVar153 = *(uint *)((long)phVar32 + 0x5c) == *(uint *)((long)phVar32 + 0x60);
code_r0x003e78e8:
  uVar88._0_4_ = (uint)param_5;
  if (bVar153) {
    if ((short)param_4 != 0) goto LAB_003e82f6;
  }
  else if (((short)((ulong)param_4 >> 0x30) != -1) || ((param_4 & 0xffff0000ffff) != 0xffff00000000)
          ) goto LAB_003e82f6;
  if ((*(ulong *)(unaff_RBX + 0x80) & *(ulong *)(unaff_RBX + 0x98)) == 0) {
    return (pthread_mutex_t *)unaff_RBX;
  }
  if ((*(ulong *)(unaff_RBX + 0x88) & ((pthread_mutex_t *)(unaff_RBX + 0xa0))->__align) == 0) {
    return (pthread_mutex_t *)unaff_RBX;
  }
  if ((*(ulong *)(unaff_RBX + 0xa8) & *(ulong *)(unaff_RBX + 0x90)) == 0) {
    return (pthread_mutex_t *)unaff_RBX;
  }
LAB_003e82f6:
  lVar116 = *(long *)&((pthread_mutex_t *)(unaff_RBX + 0x78))->__data;
  if ((lVar116 == 0) || (*(uint *)(lVar116 + 4) < 2)) {
    puVar100 = (uint *)0x0;
    *(undefined4 *)((long)phVar32 + 0x5c) = 0;
    cVar27 = *(char *)((long)phVar32 + 0x58);
  }
  else {
    puVar100 = *(uint **)(lVar116 + 8);
    *(undefined4 *)((long)phVar32 + 0x5c) = 0;
    cVar27 = *(char *)((long)phVar32 + 0x58);
  }
  uVar39 = unaff_RBX;
  if (cVar27 != '\0') {
    uVar90 = (uint)uVar111;
    phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                *)((ulong)(uVar90 >> 0x18 | (uVar90 & 0xff0000) >> 8 | (uVar90 & 0xff00) << 8 |
                          uVar90 << 0x18) + 0xc + unaff_R13);
    uVar30 = 0;
    bVar153 = false;
    uStack_38 = uStack_38 & 0xffffffff00000000;
    uVar90 = 0;
    uVar33 = 0;
    uVar64 = 0;
    if (puVar100 == (uint *)0x0) goto LAB_003e84b0;
LAB_003e8380:
    uVar90 = uVar64;
    uVar88._0_4_ = (uint)param_5;
    if ((uint)uVar30 < (uint)uVar88) {
      uVar64 = *(uint *)(*(long *)((long)phVar32 + 0x70) + 8 + uVar33 * 0x14);
      puVar144 = puVar100 + 3;
      puVar69 = puVar100;
      do {
        puVar69 = puVar69 + -3;
        puVar100 = puVar144 + -2;
        puVar144 = puVar144 + -3;
      } while (uVar64 < *puVar100);
      do {
        puVar100 = puVar69 + 3;
        puVar144 = puVar69 + 5;
        puVar69 = puVar100;
      } while (*puVar144 < uVar64);
    }
    uVar39._4_4_ = 0;
    uVar39._0_4_ = *(uint *)(unaff_RBX + 0xe0);
    if ((*puVar100 & *(uint *)(unaff_RBX + 0xe0)) != 0) goto LAB_003e84b2;
    if (uVar30 != (uint)uVar88) {
      if (*(char *)((long)phVar32 + 0x5a) == '\0') {
        uVar90 = 0;
        goto LAB_003e8c18;
      }
      pvVar123 = *(void **)&((pthread_mutex_t *)((long)phVar32 + 0x78))->__data;
      pvVar57 = *(void **)((long)phVar32 + 0x70);
      if ((pvVar123 == pvVar57) && (uVar90 = 0, *(uint *)((long)phVar32 + 100) == uVar30))
      goto LAB_003e84a0;
      uVar88._0_4_ = *(uint *)((long)phVar32 + 100) + 1;
      if (((uint)uVar88 == 0) || ((uint)uVar88 < *(uint *)((long)phVar32 + 0x68))) {
        uVar90 = 0;
        if (pvVar123 != pvVar57) goto LAB_003e8be0;
      }
      else {
        uStack_40 = 0x3e8468;
        uVar39 = hb_buffer_t::enlarge((hb_buffer_t *)phVar32,(uint)uVar88);
        if ((char)uVar39 == '\0') {
          uVar90 = 0;
          cVar27 = *(char *)((long)phVar32 + 0x58);
          goto joined_r0x003e8493;
        }
        pvVar57 = *(void **)((long)phVar32 + 0x70);
        pvVar123 = *(void **)&((pthread_mutex_t *)((long)phVar32 + 0x78))->__data;
        uVar90 = 0;
        if (pvVar123 != pvVar57) goto LAB_003e8be0;
      }
      uVar90 = 0;
      uVar88._0_4_ = *(uint *)((long)phVar32 + 100);
      if ((uint)uVar88 + 1 <= *(int *)((long)phVar32 + 0x5c) + 1U) goto LAB_003e8bd0;
      pvVar123 = *(void **)((long)phVar32 + 0x80);
      *(void **)&((pthread_mutex_t *)((long)phVar32 + 0x78))->__data = pvVar123;
      uVar90 = 0;
LAB_003e8ba5:
      if ((uint)uVar88 != 0) {
        uStack_40 = 0x3e8bbe;
        memcpy(pvVar123,pvVar57,(ulong)(uint)uVar88 * 0x14);
        pvVar57 = *(void **)((long)phVar32 + 0x70);
        pvVar123 = *(void **)&((pthread_mutex_t *)((long)phVar32 + 0x78))->__data;
      }
LAB_003e8be0:
      uVar88._0_4_ = *(uint *)((long)phVar32 + 0x5c);
      uVar64 = *(uint *)((long)phVar32 + 100);
      *(undefined4 *)((long)pvVar123 + (ulong)uVar64 * 0x14 + 0x10) =
           *(undefined4 *)((long)pvVar57 + (ulong)(uint)uVar88 * 0x14 + 0x10);
      puVar131 = (undefined8 *)((long)pvVar57 + (ulong)(uint)uVar88 * 0x14);
      uVar129 = puVar131[1];
      puVar84 = (undefined8 *)((long)pvVar123 + (ulong)uVar64 * 0x14);
      *puVar84 = *puVar131;
      puVar84[1] = uVar129;
      uVar30 = *(uint *)((long)phVar32 + 0x5c);
      uVar109 = *(uint *)((long)phVar32 + 100);
LAB_003e8c0e:
      uVar39._4_4_ = 0;
      uVar39._0_4_ = uVar30;
      *(uint *)((long)phVar32 + 100) = uVar109 + 1;
LAB_003e8c18:
      *(uint *)((long)phVar32 + 0x5c) = uVar30 + 1;
LAB_003e8c20:
      cVar27 = *(char *)((long)phVar32 + 0x58);
joined_r0x003e8493:
      if (cVar27 != '\0') {
        do {
          uVar30 = *(uint *)((long)phVar32 + 0x5c);
          uVar88._0_4_ = *(uint *)((long)phVar32 + 0x60);
          param_5._4_4_ = 0;
          param_5._0_4_ = (uint)uVar88;
          uVar33 = (ulong)(uint)uVar30;
          uVar64 = uVar90;
          if (puVar100 != (uint *)0x0) goto LAB_003e8380;
LAB_003e84b0:
          puVar100 = (uint *)0x0;
LAB_003e84b2:
          if ((uint)uVar30 < (uint)uVar88) {
            uVar88._0_4_ = *(uint *)(*(long *)((long)phVar32 + 0x70) + uVar33 * 0x14);
            if ((ulong)(uint)uVar88 == 0xffff) {
              uVar33 = 2;
            }
            else {
              uVar33 = 1;
              if ((((*(ulong *)(unaff_RBX + 0x98) >> ((ulong)((uint)uVar88 >> 4) & 0x3f) & 1) != 0)
                  && (((ulong)((pthread_mutex_t *)(unaff_RBX + 0xa0))->__align >>
                       ((ulong)(uint)uVar88 & 0x3f) & 1) != 0)) &&
                 ((*(ulong *)(unaff_RBX + 0xa8) >> ((ulong)((uint)uVar88 >> 9) & 0x3f) & 1) != 0)) {
                uVar64 = *(uint *)(unaff_R13 + 0x10);
                uStack_40 = 0x3e852f;
                pLVar46 = Lookup<OT::IntType<unsigned_short,2u>>::get_value
                                    ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                     ((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                       *)((ulong)(uVar64 >> 0x18 | (uVar64 & 0xff0000) >> 8 |
                                                  (uVar64 & 0xff00) << 8 | uVar64 << 0x18) +
                                         unaff_R13) + 0xc),(uint)uVar88,unaff_EBP);
                if (pLVar46 != (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
                  uVar33 = (ulong)(ushort)(*(ushort *)pLVar46 << 8 | *(ushort *)pLVar46 >> 8);
                }
              }
            }
          }
          else {
            uVar33 = 0;
          }
          uVar88._0_4_ = *(uint *)(unaff_R13 + 0xc);
          uVar40._0_4_ = (uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                         ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18;
          uVar40._4_4_ = 0;
          uVar122 = (uint)uVar33;
          uVar64 = uVar122;
          if ((uint)uVar40 <= uVar122) {
            uVar64 = 1;
          }
          uVar91 = *(uint *)(unaff_R13 + 0x14);
          uVar63 = *(uint *)(unaff_R13 + 0x18);
          phVar81 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)((ulong)(uVar91 >> 0x18 | (uVar91 & 0xff0000) >> 8 | (uVar91 & 0xff00) << 8 |
                               uVar91 << 0x18) + unaff_R13);
          phVar145 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)(unaff_R13 +
                        (ulong)(uVar63 >> 0x18 | (uVar63 & 0xff0000) >> 8 | (uVar63 & 0xff00) << 8 |
                               uVar63 << 0x18));
          iVar31 = (uint)uVar40 * uVar90;
          uVar152 = (ulong)(ushort)(*(ushort *)(phVar81 + (ulong)(uVar64 + iVar31) * 2 + 0xc) << 8 |
                                   *(ushort *)(phVar81 + (ulong)(uVar64 + iVar31) * 2 + 0xc) >> 8);
          uVar29 = *(ushort *)(phVar145 + uVar152 * 8 + 0xc);
          uVar109 = *(uint *)((long)phVar32 + 0x5c);
          uVar30 = *(uint *)((long)phVar32 + 0x60);
          bVar154 = uVar109 != uVar30;
          if ((!(bVar153 || bVar154)) ||
             ((*(short *)(phVar145 + uVar152 * 8 + 0x10) == -1 &&
              (*(short *)(phVar145 + uVar152 * 8 + 0x12) == -1)))) {
            if ((uVar90 != 0) &&
               (((*(ushort *)(phVar145 + uVar152 * 8 + 0xe) & 0x40) == 0 || (uVar29 != 0)))) {
              if ((uint)uVar40 <= uVar122) {
                uVar33 = 1;
              }
              uVar40._0_2_ = *(ushort *)(phVar81 + uVar33 * 2 + 0xc) << 8 |
                             *(ushort *)(phVar81 + uVar33 * 2 + 0xc) >> 8;
              uVar40._2_6_ = 0;
              if ((((bVar153 || bVar154) &&
                   ((*(short *)(phVar145 + uVar40 * 8 + 0x10) != -1 ||
                    (*(short *)(phVar145 + uVar40 * 8 + 0x12) != -1)))) ||
                  (uVar29 != *(ushort *)(phVar145 + uVar40 * 8 + 0xc))) ||
                 (((*(ushort *)(phVar145 + uVar152 * 8 + 0xe) ^
                   *(ushort *)(phVar145 + uVar40 * 8 + 0xe)) & 0x40) != 0)) goto LAB_003e86b0;
            }
            uVar40._1_7_ = 0;
            uVar40._0_1_ = (uint)uVar88 == 0;
            if (bVar153 || bVar154) {
              uVar40._0_2_ = *(ushort *)
                              (phVar81 + (ulong)((uint)((uint)uVar88 == 0) + iVar31) * 2 + 0xc) << 8
                             | *(ushort *)
                                (phVar81 + (ulong)((uint)((uint)uVar88 == 0) + iVar31) * 2 + 0xc) >>
                               8;
              uVar40._2_6_ = 0;
              if ((*(short *)(phVar145 + uVar40 * 8 + 0x10) != -1) ||
                 (*(short *)(phVar145 + uVar40 * 8 + 0x12) != -1)) goto LAB_003e86b0;
            }
            else {
              uVar30 = uVar109;
            }
          }
          else {
LAB_003e86b0:
            uVar80 = uVar109;
            if (*(char *)((long)phVar32 + 0x5a) != '\0') {
              uVar80 = *(uint *)((long)phVar32 + 100);
            }
            if ((uVar80 != 0) && ((uint)uVar109 < (uint)uVar30)) {
              uStack_40 = 0x3e86e3;
              uVar40 = hb_buffer_t::_set_glyph_flags
                                 ((hb_buffer_t *)phVar32,3,uVar80 - 1,uVar109 + 1,'\x01');
              uVar109 = *(uint *)((long)phVar32 + 0x5c);
              uVar30 = *(uint *)((long)phVar32 + 0x60);
            }
          }
          if ((uVar109 != uVar30) || (bVar153)) {
            uVar79 = *(ushort *)(phVar145 + uVar152 * 8 + 0x10);
            if (uVar79 != 0xffff) {
              pLVar35 = (Lookup<OT::HBGlyphID16> *)&_hb_Null_OT_Index;
              if (phVar107 <= phVar107 + (ulong)(ushort)(uVar79 << 8 | uVar79 >> 8) * 4) {
                uVar88._0_4_ = *(uint *)(phVar107 + (ulong)(ushort)(uVar79 << 8 | uVar79 >> 8) * 4);
                pLVar35 = (Lookup<OT::HBGlyphID16> *)
                          (phVar107 +
                          ((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                           ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18));
              }
              uVar33 = uStack_38 & 0xffffffff;
              uStack_40 = 0x3e8761;
              pLVar35 = Lookup<OT::HBGlyphID16>::get_value
                                  (pLVar35,*(uint *)(*(long *)((long)phVar32 + 0x70) + uVar33 * 0x14
                                                    ),unaff_EBP);
              if (pLVar35 != (Lookup<OT::HBGlyphID16> *)0x0) {
                uVar88._0_4_ = *(int *)((long)phVar32 + 0x5c) + 1;
                if (*(uint *)((long)phVar32 + 0x60) < (uint)uVar88) {
                  uVar88._0_4_ = *(uint *)((long)phVar32 + 0x60);
                }
                if (1 < (uint)uVar88 - (undefined4)uStack_38) {
                  *(byte *)((long)phVar32 + 0xc0) = *(byte *)((long)phVar32 + 0xc0) | 0x20;
                  lVar116 = *(long *)((long)phVar32 + 0x70);
                  uVar90 = 0xffffffff;
                  if ((uint)uVar88 != (undefined4)uStack_38) {
                    if (*(int *)((long)phVar32 + 0x1c) == 2) {
                      if ((uint)(undefined4)uStack_38 < (uint)uVar88) {
                        uVar76 = (ulong)(uint)uVar88;
                        uVar135 = uVar76 - uVar33;
                        uVar90 = 0xffffffff;
                        uVar146 = uVar33;
                        if (8 < uVar135) {
                          uVar146 = (ulong)((uint)uVar135 & 7);
                          if (uVar146 == 0) {
                            uVar146 = 8;
                          }
                          lVar119 = (uVar146 + uVar33) - uVar76;
                          puVar69 = (uint *)(lVar116 + uVar33 * 0x14 + 0x94);
                          uVar122 = 0xffffffff;
                          uVar90 = 0xffffffff;
                          uVar64 = 0xffffffff;
                          uVar91 = 0xffffffff;
                          uVar192 = 0xffffffff;
                          uVar63 = 0xffffffff;
                          uVar110 = 0xffffffff;
                          uVar193 = 0xffffffff;
                          do {
                            uVar227 = -(uint)((int)(uVar90 ^ 0x80000000) <
                                             (int)(puVar69[-0x23] ^ 0x80000000));
                            uVar266 = -(uint)((int)(uVar64 ^ 0x80000000) <
                                             (int)(puVar69[-0x1e] ^ 0x80000000));
                            uVar267 = -(uint)((int)(uVar122 ^ 0x80000000) <
                                             (int)(puVar69[-0x19] ^ 0x80000000));
                            uVar268 = -(uint)((int)(uVar91 ^ 0x80000000) <
                                             (int)(puVar69[-0x14] ^ 0x80000000));
                            uVar90 = ~uVar227 & puVar69[-0x23] | uVar90 & uVar227;
                            uVar64 = ~uVar266 & puVar69[-0x1e] | uVar64 & uVar266;
                            uVar122 = ~uVar267 & puVar69[-0x19] | uVar122 & uVar267;
                            uVar91 = ~uVar268 & puVar69[-0x14] | uVar91 & uVar268;
                            uVar227 = -(uint)((int)(uVar63 ^ 0x80000000) <
                                             (int)(puVar69[-0xf] ^ 0x80000000));
                            uVar266 = -(uint)((int)(uVar110 ^ 0x80000000) <
                                             (int)(puVar69[-10] ^ 0x80000000));
                            uVar267 = -(uint)((int)(uVar192 ^ 0x80000000) <
                                             (int)(puVar69[-5] ^ 0x80000000));
                            uVar268 = -(uint)((int)(uVar193 ^ 0x80000000) <
                                             (int)(*puVar69 ^ 0x80000000));
                            uVar63 = ~uVar227 & puVar69[-0xf] | uVar63 & uVar227;
                            uVar110 = ~uVar266 & puVar69[-10] | uVar110 & uVar266;
                            uVar192 = ~uVar267 & puVar69[-5] | uVar192 & uVar267;
                            uVar193 = ~uVar268 & *puVar69 | uVar193 & uVar268;
                            puVar69 = puVar69 + 0x28;
                            lVar119 = lVar119 + 8;
                          } while (lVar119 != 0);
                          uVar146 = uVar33 + (uVar135 - uVar146);
                          uVar227 = -(uint)((int)(uVar90 ^ 0x80000000) < (int)(uVar63 ^ 0x80000000))
                          ;
                          uVar266 = -(uint)((int)(uVar64 ^ 0x80000000) < (int)(uVar110 ^ 0x80000000)
                                           );
                          uVar267 = -(uint)((int)(uVar122 ^ 0x80000000) <
                                           (int)(uVar192 ^ 0x80000000));
                          uVar268 = -(uint)((int)(uVar91 ^ 0x80000000) < (int)(uVar193 ^ 0x80000000)
                                           );
                          uVar63 = ~uVar227 & uVar63 | uVar90 & uVar227;
                          uVar110 = ~uVar266 & uVar110 | uVar64 & uVar266;
                          uVar122 = ~uVar267 & uVar192 | uVar122 & uVar267;
                          uVar91 = ~uVar268 & uVar193 | uVar91 & uVar268;
                          uVar90 = -(uint)((int)(uVar63 ^ 0x80000000) < (int)(uVar122 ^ 0x80000000))
                          ;
                          uVar64 = -(uint)((int)(uVar110 ^ 0x80000000) < (int)(uVar91 ^ 0x80000000))
                          ;
                          uVar90 = ~uVar90 & uVar122 | uVar63 & uVar90;
                          uVar64 = ~uVar64 & uVar91 | uVar110 & uVar64;
                          uVar122 = -(uint)((int)(uVar90 ^ 0x80000000) < (int)(uVar64 ^ 0x80000000))
                          ;
                          uVar90 = ~uVar122 & uVar64 | uVar90 & uVar122;
                        }
                        lVar119 = uVar76 - uVar146;
                        puVar69 = (uint *)(lVar116 + uVar146 * 0x14 + 8);
                        do {
                          if (*puVar69 < uVar90) {
                            uVar90 = *puVar69;
                          }
                          puVar69 = puVar69 + 5;
                          lVar119 = lVar119 + -1;
                        } while (lVar119 != 0);
                      }
                    }
                    else {
                      uVar90 = *(uint *)(lVar116 + 8 + uVar33 * 0x14);
                      uVar64 = *(uint *)(lVar116 + 8 + (ulong)((uint)uVar88 - 1) * 0x14);
                      if (uVar64 < uVar90) {
                        uVar90 = uVar64;
                      }
                    }
                  }
                  uStack_40 = 0x3e8980;
                  hb_buffer_t::_infos_set_glyph_flags
                            ((hb_buffer_t *)phVar32,lVar116,(undefined4)uStack_38,(uint)uVar88,
                             uVar90,3);
                }
                uVar79 = *(ushort *)pLVar35;
                uVar128 = uVar79 << 8 | uVar79 >> 8;
                lVar116 = *(long *)((long)phVar32 + 0x70);
                *(uint *)(lVar116 + uVar33 * 0x14) = (uint)uVar128;
                *(ulong *)(unaff_RBX + 0x80) =
                     *(ulong *)(unaff_RBX + 0x80) | 1L << ((byte)(uVar128 >> 4) & 0x3f);
                *(ulong *)(unaff_RBX + 0x88) =
                     *(ulong *)(unaff_RBX + 0x88) | 1L << ((byte)(uVar79 >> 8) & 0x3f);
                *(ulong *)(unaff_RBX + 0x90) =
                     *(ulong *)(unaff_RBX + 0x90) | 1L << ((byte)uVar79 >> 1 & 0x3f);
                if (unaff_R14B == '\0' && (char)puVar147 == '\0') {
                  uStack_40 = 0x3e89f0;
                  uVar88._0_4_ = OT::GDEF::get_glyph_props(unaff_retaddr,(uint)uVar128);
                  *(short *)(lVar116 + 0xc + uVar33 * 0x14) = (short)(uint)uVar88;
                }
              }
            }
            uVar88._0_4_ = *(int *)((long)phVar32 + 0x60) - 1;
            if (*(uint *)((long)phVar32 + 0x5c) <= (uint)uVar88) {
              uVar88._0_4_ = *(uint *)((long)phVar32 + 0x5c);
            }
            uVar79 = *(ushort *)(phVar145 + uVar152 * 8 + 0x12);
            if (uVar79 != 0xffff) {
              pLVar35 = (Lookup<OT::HBGlyphID16> *)&_hb_Null_OT_Index;
              if (phVar107 <= phVar107 + (ulong)(ushort)(uVar79 << 8 | uVar79 >> 8) * 4) {
                uVar90 = *(uint *)(phVar107 + (ulong)(ushort)(uVar79 << 8 | uVar79 >> 8) * 4);
                pLVar35 = (Lookup<OT::HBGlyphID16> *)
                          (phVar107 +
                          (uVar90 >> 0x18 | (uVar90 & 0xff0000) >> 8 | (uVar90 & 0xff00) << 8 |
                          uVar90 << 0x18));
              }
              uVar33 = (ulong)(uint)uVar88;
              uStack_40 = 0x3e8a5c;
              pLVar35 = Lookup<OT::HBGlyphID16>::get_value
                                  (pLVar35,*(uint *)(*(long *)((long)phVar32 + 0x70) + uVar33 * 0x14
                                                    ),unaff_EBP);
              if (pLVar35 != (Lookup<OT::HBGlyphID16> *)0x0) {
                uVar79 = *(ushort *)pLVar35;
                uVar128 = uVar79 << 8 | uVar79 >> 8;
                lVar116 = *(long *)((long)phVar32 + 0x70);
                *(uint *)(lVar116 + uVar33 * 0x14) = (uint)uVar128;
                *(ulong *)(unaff_RBX + 0x80) =
                     *(ulong *)(unaff_RBX + 0x80) | 1L << ((byte)(uVar128 >> 4) & 0x3f);
                *(ulong *)(unaff_RBX + 0x88) =
                     *(ulong *)(unaff_RBX + 0x88) | 1L << ((byte)(uVar79 >> 8) & 0x3f);
                *(ulong *)(unaff_RBX + 0x90) =
                     *(ulong *)(unaff_RBX + 0x90) | 1L << ((byte)uVar79 >> 1 & 0x3f);
                if (unaff_R14B == '\0' && (char)puVar147 == '\0') {
                  uStack_40 = 0x3e8ac8;
                  uVar88._0_4_ = OT::GDEF::get_glyph_props(unaff_retaddr,(uint)uVar128);
                  *(short *)(lVar116 + 0xc + uVar33 * 0x14) = (short)(uint)uVar88;
                }
              }
            }
            bVar154 = ((byte)phVar145[uVar152 * 8 + 0xe] & 0x80) != 0;
            uVar30 = *(uint *)((long)phVar32 + 0x5c);
            if (bVar154) {
              bVar153 = true;
            }
            uVar109 = (undefined4)uStack_38;
            if (bVar154) {
              uVar109 = uVar30;
            }
            uVar40._4_4_ = 0;
            uVar40._0_4_ = uVar109;
            uStack_38._0_4_ = uVar109;
          }
          else {
            bVar153 = false;
          }
          if (uVar30 == *(uint *)((long)phVar32 + 0x60)) {
            return (pthread_mutex_t *)uVar40;
          }
          if (*(char *)((long)phVar32 + 0x58) == '\0') {
            return (pthread_mutex_t *)uVar40;
          }
          uVar41._0_2_ = uVar29 << 8 | uVar29 >> 8;
          uVar41._2_6_ = 0;
          uVar90 = (uint)(ushort)uVar41;
          uVar39 = uVar41;
          if (((byte)phVar145[uVar152 * 8 + 0xe] & 0x40) != 0) {
            uVar88._0_4_ = (((pthread_mutex_t *)((long)phVar32 + 200))->__data).__lock;
            uVar39._4_4_ = 0;
            uVar39._0_4_ = (uint)uVar88;
            (((pthread_mutex_t *)((long)phVar32 + 200))->__data).__lock = (uint)uVar88 - 1;
            if (0 < (int)(uint)uVar88) goto LAB_003e8c20;
          }
          if (*(char *)((long)phVar32 + 0x5a) == '\0') goto LAB_003e8c18;
          pvVar123 = *(void **)&((pthread_mutex_t *)((long)phVar32 + 0x78))->__data;
          pvVar57 = *(void **)((long)phVar32 + 0x70);
          if ((pvVar123 == pvVar57) && (*(uint *)((long)phVar32 + 100) == uVar30))
          goto LAB_003e84a0;
          uVar88._0_4_ = *(uint *)((long)phVar32 + 100) + 1;
          if (((uint)uVar88 == 0) || ((uint)uVar88 < *(uint *)((long)phVar32 + 0x68))) {
            if (pvVar123 != pvVar57) goto LAB_003e8be0;
LAB_003e8b84:
            uVar90 = (uint)(ushort)uVar41;
            uVar88._0_4_ = *(uint *)((long)phVar32 + 100);
            if ((uint)uVar88 + 1 <= *(int *)((long)phVar32 + 0x5c) + 1U) goto LAB_003e8bd0;
            pvVar123 = *(void **)((long)phVar32 + 0x80);
            *(void **)&((pthread_mutex_t *)((long)phVar32 + 0x78))->__data = pvVar123;
            goto LAB_003e8ba5;
          }
          uVar90 = (uint)(ushort)uVar41;
          uStack_40 = 0x3e8c5b;
          uVar129 = hb_buffer_t::enlarge((hb_buffer_t *)phVar32,(uint)uVar88);
          if ((char)uVar129 != '\0') {
            pvVar57 = *(void **)((long)phVar32 + 0x70);
            pvVar123 = *(void **)&((pthread_mutex_t *)((long)phVar32 + 0x78))->__data;
            if (pvVar123 == pvVar57) goto LAB_003e8b84;
            goto LAB_003e8be0;
          }
          if (*(char *)((long)phVar32 + 0x58) == '\0') {
            return (pthread_mutex_t *)uVar129;
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
  return (pthread_mutex_t *)uVar39;
code_r0x003f2c90:
  lVar119 = CONCAT71((int7)((ulong)lVar34 >> 8),
                     (char)lVar34 +
                     (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                             *)lVar34);
  pcVar58 = (char *)(lVar119 + -1);
  *pcVar58 = *pcVar58 + SUB81(uVar92,1);
  iVar31 = (int)param_5;
  uVar88._0_2_ = *(ushort *)(uVar129 + 2) << 8 | *(ushort *)(uVar129 + 2) >> 8;
  uVar88._2_6_ = 0;
  param_6._2_6_ = 0;
  param_6._0_2_ = (ushort)uVar88;
  uVar90 = ((int)lVar119 + iVar31) * (uint)(ushort)uVar88;
  if (*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)(uVar129 + 0xc) + uVar90) == -1) {
    iVar121 = -(uint)(*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                  *)(uVar129 + 0xe) + uVar90) == -1);
    lVar34 = 0;
    uVar90 = iVar121 + iVar31;
    in_R10 = (ulong)uVar90;
    if (uVar90 != 0 && SCARRY4(iVar121,iVar31) == (int)uVar90 < 0) goto LAB_003f2db7;
  }
  else {
joined_r0x003f2cc1:
    in_R10 = (ulong)param_5 & 0xffffffff;
    lVar34 = 0;
    if (0 < iVar31) {
LAB_003f2db7:
      param_5 = (uint *)(uVar88 & 0xffff);
      uVar33 = (ulong)((int)in_R10 - 1);
      in_R11 = (uint *)0x0;
      uVar49 = lVar34;
      goto LAB_003f2ddb;
    }
  }
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
  return (pthread_mutex_t *)0x0;
code_r0x003f3f52:
  *(undefined8 *)((long)puVar100 + 0x90) = uVar129;
  if (bVar153) {
    lVar34 = uVar49 - param_4;
    uVar92._1_7_ = (undefined7)((ulong)uVar92 >> 8);
    uVar92._0_1_ = (ulong)uVar49 < (ulong)param_4 ||
                   (pthread_mutex_t *)lVar34 == (pthread_mutex_t *)0x0;
    if ((ulong)param_4 < (ulong)uVar88) {
      uVar92._0_1_ = 1;
    }
    else if ((ulong)uVar49 >= (ulong)param_4 && (pthread_mutex_t *)lVar34 != (pthread_mutex_t *)0x0)
    {
      *(undefined8 *)((long)phVar32 + 8) = param_4;
      uVar88._0_4_ = *(uint *)param_4;
      uVar85._0_4_ = (uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                     ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18;
      uVar85._4_4_ = 0;
      if ((ulong)uVar85 < (ulong)lVar34) {
        lVar34 = uVar85;
      }
      uVar88 = param_4 + lVar34;
code_r0x003f3f89:
      *(undefined8 *)((long)phVar32 + 0x10) = uVar88;
      *(int *)((long)phVar32 + 0x18) = (int)lVar34;
      uVar124 = lVar34 & 0xffffffff;
      uVar88 = param_4;
      goto LAB_003f3f98;
    }
    pauVar67 = *(undefined1 (**) [16])((long)puVar100 + 0x78);
    *pauVar67 = in_XMM7;
    *(undefined4 *)pauVar67[1] = 0;
    uVar124 = (pthread_mutex_t *)0x0;
    uVar88 = (pthread_mutex_t *)0x0;
  }
LAB_003f3f98:
  auVar189._8_8_ = in_XMM1._0_8_;
  auVar189._0_8_ = auVar279._0_8_;
  if ((uVar124 & 0xffffffff) < (ulong)((long)puVar144 - uVar88)) goto LAB_003f4e44;
  uVar88._0_4_ = *(uint *)uVar113;
  uVar90 = (uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 | ((uint)uVar88 & 0xff00) << 8 |
           (uint)uVar88 << 0x18;
  if (uVar90 < 0xc) goto LAB_003f4e44;
  uVar88 = *(long *)((long)phVar32 + 8);
  param_4 = uVar113 - uVar88;
  uVar64 = *(uint *)&((__pthread_list_t *)((long)phVar32 + 0x18))->__prev;
  uVar49._4_4_ = 0;
  uVar49._0_4_ = uVar64;
  if ((((ulong)uVar49 < (ulong)param_4) ||
      (uVar122 = (uint)uVar113, *(int *)((long)phVar32 + 0x10) - uVar122 < uVar90)) ||
     (iVar31 = *(int *)param_6, *(uint *)param_6 = iVar31 - uVar90, (int)(iVar31 - uVar90) < 1))
  goto LAB_003f4e44;
  uVar90 = *(uint *)(uVar113 + 4) >> 0x18;
  if ((byte)(*(uint *)(uVar113 + 4) >> 0x18) < 7) {
    uVar129 = &DAT_005e02b0;
    uVar33 = (ulong)*(int *)(&DAT_005e02b0 + (ulong)uVar90 * 4);
    bVar153 = 0xffffffffffa1fd4f < uVar33;
    lVar116 = (long)&DAT_005e02b0 + uVar33;
    *(undefined8 *)((long)puVar100 + 8) = uVar113;
    puVar69 = puVar100;
    switch(uVar90) {
    case 0:
      if ((pthread_mutex_t *)(param_4 + 0x14) <= (ulong)uVar49) {
        uVar88._0_4_ = *(uint *)(uVar113 + 0xc);
        uVar33 = (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                         ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) * 6;
        lVar34 = uVar33 & 0xffffffff;
        if ((((int)(uVar33 >> 0x20) == 0) &&
            ((ulong)((uVar113 + 0x1c) - *(long *)((long)phVar32 + 8)) <=
             (ulong)*(uint *)&((__pthread_list_t *)((long)phVar32 + 0x18))->__prev)) &&
           ((uint)uVar33 <=
            (uint)(*(int *)((long)phVar32 + 0x10) -
                  (int)(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        *)(uVar113 + 0x1c)))) {
LAB_003f3ec0:
          iVar121 = *(int *)param_6 - (int)lVar34;
          *(int *)param_6 = iVar121;
joined_r0x003f4e19:
          if (0 < iVar121) goto LAB_003f3ed0;
        }
      }
      break;
    case 1:
      if (((((pthread_mutex_t *)(param_4 + 0x20) <= (ulong)uVar49) &&
           ((pthread_mutex_t *)(((long)puVar144 - uVar88) + 0x10) <= (ulong)uVar49)) &&
          (uVar88._0_4_ = *puVar144,
          3 < ((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 | ((uint)uVar88 & 0xff00) << 8
              | (uint)uVar88 << 0x18))) &&
         (phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)((long)puVar144 + 8),
         (ulong)((long)phVar107 - *(long *)((long)phVar32 + 8)) <=
         (ulong)*(uint *)&((__pthread_list_t *)((long)phVar32 + 0x18))->__prev)) {
        uVar88._0_4_ = *(uint *)((long)puVar144 + 4);
        *(undefined8 *)((long)puVar100 + -8) = 0x3f40bb;
        uVar33 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                           ((Lookup<OT::IntType<unsigned_short,2u>> *)
                            ((ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                                     ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) +
                            (long)puVar144),(long)phVar32);
        param_6 = *(long *)((long)puVar100 + 0x10);
        in_XMM7 = (undefined1  [16])0x0;
        in_XMM9_Da = -1;
        in_XMM9_Db = -1;
        in_XMM9_Dc = -1;
        in_XMM9_Dd = -1;
        in_XMM10_Da = -0x7fffffff;
        in_XMM10_Db = -0x7fffffff;
        in_XMM10_Dc = -0x7fffffff;
        in_XMM10_Dd = -0x7fffffff;
        if ((char)uVar33 != '\0') {
          uVar88._0_4_ = *puVar144;
          uVar88._0_4_ = (uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                         ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18;
          in_R10 = (ulong)(uint)uVar88;
          if (-1 < (int)(uint)uVar88) {
            uVar90 = *(uint *)((long)puVar144 + 8);
            uVar33 = (ulong)(uVar90 >> 0x18 | (uVar90 & 0xff0000) >> 8 | (uVar90 & 0xff00) << 8 |
                            uVar90 << 0x18);
            uVar92 = uVar33 + (long)puVar144;
            uVar90 = *(uint *)((long)puVar144 + 0xc);
            uVar152 = (ulong)(uVar90 >> 0x18 | (uVar90 & 0xff0000) >> 8 | (uVar90 & 0xff00) << 8 |
                             uVar90 << 0x18);
            uVar129 = (long)puVar144 + uVar152;
            *(uint *)((long)puVar100 + 0x20) = (uint)uVar88 * 2;
            *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              **)((long)puVar100 + 0x58) = phVar107 + (uVar152 - 8);
            *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              **)((long)puVar100 + 0x50) =
                 (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)((long)puVar144 + 6) + uVar152;
            *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              **)((long)puVar100 + 0x60) = phVar107 + uVar152;
            *(long *)((long)puVar100 + 0x48) = 2 - (long)(phVar107 + uVar152);
            *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              **)((long)puVar100 + 0x38) = phVar107 + (uVar33 - 8);
            *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              **)((long)puVar100 + 0x40) = phVar107 + uVar33;
            *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              **)((long)puVar100 + 0x28) =
                 (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)(uVar33 + uVar113) + 0x14;
            *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              **)((long)puVar100 + 0x30) =
                 (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)(uVar152 + uVar113) + 0x24;
            in_R11 = (uint *)0x0;
            puVar147 = (uint *)0x0;
            lVar119 = 0;
            *(undefined8 *)((long)puVar100 + 0x18) = uVar92;
            auVar279 = extraout_XMM0_16;
            in_XMM8 = _DAT_005de020;
            in_XMM11 = _DAT_006524b0;
            do {
              param_5 = (uint *)(lVar119 & 0xffffffff);
              iVar31 = (int)in_R11;
              uVar90 = (uint)puVar147;
              uVar88._0_4_ = (uint)lVar119;
              lVar119 = (long)param_5;
              if (iVar31 <= (int)uVar90) {
                uVar122 = uVar90 + 1;
                uVar64 = (uint)((ulong)uVar122 * (ulong)*(uint *)((long)puVar100 + 0x20));
                if ((((int)((ulong)uVar122 * (ulong)*(uint *)((long)puVar100 + 0x20) >> 0x20) != 0)
                    || ((ulong)*(uint *)((long)phVar32 + 0x18) <
                        (ulong)(uVar92 - *(long *)((long)phVar32 + 8)))) ||
                   ((uint)(*(int *)((long)phVar32 + 0x10) - (int)uVar92) < uVar64))
                goto LAB_003f4e44;
                iVar121 = *(int *)param_6 - uVar64;
                *(int *)param_6 = iVar121;
                if (((iVar121 < 1) ||
                    (iVar121 = ~uVar90 + iVar31 + iVar121, *(int *)param_6 = iVar121, iVar121 < 1))
                   || ((int)((ulong)uVar122 * (in_R10 & 0xffffffff) >> 0x20) != 0))
                goto LAB_003f4e44;
                uVar64 = uVar122 * (int)in_R10;
                uVar91 = iVar31 * (int)in_R10;
                if (uVar91 < uVar64) {
                  uVar152 = (ulong)uVar91;
                  phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                              *)(uVar92 + uVar152 * 2);
                  uVar146 = uVar152 * 2 + 2 + *(long *)((long)puVar100 + 0x38);
                  uVar33 = *(long *)((long)puVar100 + 0x38) + (ulong)uVar64 * 2;
                  if (uVar33 < uVar146) {
                    uVar33 = uVar146;
                  }
                  uVar33 = (uVar33 - (*(long *)((long)puVar100 + 0x40) + uVar152 * 2)) + 7;
                  if (uVar33 < 0xe) {
                    uVar113 = *(long *)((long)puVar100 + 8);
                  }
                  else {
                    uVar146 = (uVar33 >> 1) + 1;
                    uVar76 = uVar146 & 0xfffffffffffffff8;
                    auVar158._4_4_ = (uint)uVar88;
                    auVar158._0_4_ = (uint)uVar88;
                    auVar158._8_4_ = (uint)uVar88;
                    auVar158._12_4_ = (uint)uVar88;
                    uVar33 = 0;
                    auVar279 = auVar158;
                    do {
                      uVar135 = *(ulong *)(uVar152 * 2 + *(long *)((long)puVar100 + 0x28) + -8 +
                                          uVar33 * 2);
                      auVar232._8_8_ = 0;
                      auVar232._0_8_ = uVar135;
                      uVar134 = *(ulong *)(uVar152 * 2 + *(long *)((long)puVar100 + 0x28) +
                                          uVar33 * 2);
                      auVar198._8_8_ = 0;
                      auVar198._0_8_ = uVar134;
                      auVar229._0_2_ = (ushort)uVar135 >> 8;
                      auVar229._2_2_ = (ushort)(uVar135 >> 0x10) >> 8;
                      auVar229._4_2_ = (ushort)(uVar135 >> 0x20) >> 8;
                      auVar229._6_2_ = (ushort)(uVar135 >> 0x38);
                      auVar229._8_6_ = 0;
                      auVar189 = psllw(auVar232,8);
                      auVar229 = auVar189._0_14_ | auVar229;
                      auVar195._0_2_ = (ushort)uVar134 >> 8;
                      auVar195._2_2_ = (ushort)(uVar134 >> 0x10) >> 8;
                      auVar195._4_2_ = (ushort)(uVar134 >> 0x20) >> 8;
                      auVar195._6_2_ = (ushort)(uVar134 >> 0x38);
                      auVar195._8_6_ = 0;
                      auVar189 = psllw(auVar198,8);
                      auVar195 = auVar189._0_14_ | auVar195;
                      auVar235._0_12_ = auVar229._0_12_;
                      auVar235._12_2_ = auVar229._6_2_;
                      auVar235._14_2_ = in_XMM7._6_2_;
                      auVar234._12_4_ = auVar235._12_4_;
                      auVar234._0_10_ = auVar229._0_10_;
                      auVar234._10_2_ = in_XMM7._4_2_;
                      auVar233._10_6_ = auVar234._10_6_;
                      auVar233._0_8_ = auVar229._0_8_;
                      auVar233._8_2_ = auVar229._4_2_;
                      auVar11._4_8_ = auVar233._8_8_;
                      auVar11._2_2_ = in_XMM7._2_2_;
                      auVar11._0_2_ = auVar229._2_2_;
                      iVar121 = CONCAT22(in_XMM7._0_2_,auVar229._0_2_);
                      auVar201._0_12_ = auVar195._0_12_;
                      auVar201._12_2_ = auVar195._6_2_;
                      auVar201._14_2_ = in_XMM7._6_2_;
                      auVar200._12_4_ = auVar201._12_4_;
                      auVar200._0_10_ = auVar195._0_10_;
                      auVar200._10_2_ = in_XMM7._4_2_;
                      auVar199._10_6_ = auVar200._10_6_;
                      auVar199._0_8_ = auVar195._0_8_;
                      auVar199._8_2_ = auVar195._4_2_;
                      auVar12._4_8_ = auVar199._8_8_;
                      auVar12._2_2_ = in_XMM7._2_2_;
                      auVar12._0_2_ = auVar195._2_2_;
                      iVar31 = CONCAT22(in_XMM7._0_2_,auVar195._0_2_);
                      in_XMM4._0_4_ = iVar121 - in_XMM9_Da;
                      in_XMM4._4_4_ = auVar11._0_4_ - in_XMM9_Db;
                      in_XMM4._8_4_ = auVar233._8_4_ - in_XMM9_Dc;
                      in_XMM4._12_4_ = auVar234._12_4_ - in_XMM9_Dd;
                      in_XMM5._0_4_ = iVar31 - in_XMM9_Da;
                      in_XMM5._4_4_ = auVar12._0_4_ - in_XMM9_Db;
                      in_XMM5._8_4_ = auVar199._8_4_ - in_XMM9_Dc;
                      in_XMM5._12_4_ = auVar200._12_4_ - in_XMM9_Dd;
                      auVar189 = auVar158 ^ in_XMM11;
                      auVar157._0_4_ = -(uint)(iVar121 + in_XMM10_Da < auVar189._0_4_);
                      auVar157._4_4_ = -(uint)(auVar11._0_4_ + in_XMM10_Db < auVar189._4_4_);
                      auVar157._8_4_ = -(uint)(auVar233._8_4_ + in_XMM10_Dc < auVar189._8_4_);
                      auVar157._12_4_ = -(uint)(auVar234._12_4_ + in_XMM10_Dd < auVar189._12_4_);
                      in_XMM6 = auVar158 & auVar157;
                      auVar158 = ~auVar157 & in_XMM4 | in_XMM6;
                      auVar189 = auVar279 ^ in_XMM11;
                      auVar176._0_4_ = -(uint)(iVar31 + in_XMM10_Da < auVar189._0_4_);
                      auVar176._4_4_ = -(uint)(auVar12._0_4_ + in_XMM10_Db < auVar189._4_4_);
                      auVar176._8_4_ = -(uint)(auVar199._8_4_ + in_XMM10_Dc < auVar189._8_4_);
                      auVar176._12_4_ = -(uint)(auVar200._12_4_ + in_XMM10_Dd < auVar189._12_4_);
                      auVar279 = ~auVar176 & in_XMM5 | auVar279 & auVar176;
                      uVar33 = uVar33 + 8;
                    } while (uVar76 != uVar33);
                    auVar189 = auVar279 ^ in_XMM11;
                    auVar226 = auVar158 ^ in_XMM11;
                    auVar236._0_4_ = -(uint)(auVar189._0_4_ < auVar226._0_4_);
                    auVar236._4_4_ = -(uint)(auVar189._4_4_ < auVar226._4_4_);
                    auVar236._8_4_ = -(uint)(auVar189._8_4_ < auVar226._8_4_);
                    auVar236._12_4_ = -(uint)(auVar189._12_4_ < auVar226._12_4_);
                    auVar226 = ~auVar236 & auVar279 | auVar158 & auVar236;
                    auVar159._0_8_ = auVar226._8_8_;
                    auVar159._8_4_ = auVar226._8_4_;
                    auVar159._12_4_ = auVar226._12_4_;
                    auVar279 = auVar226 ^ in_XMM11;
                    auVar189 = auVar159 ^ in_XMM11;
                    auVar177._0_4_ = -(uint)(auVar189._0_4_ < auVar279._0_4_);
                    auVar177._4_4_ = -(uint)(auVar189._4_4_ < auVar279._4_4_);
                    auVar177._8_4_ = -(uint)(auVar189._8_4_ < auVar279._8_4_);
                    auVar177._12_4_ = -(uint)(auVar189._12_4_ < auVar279._12_4_);
                    in_XMM1 = ~auVar177 & auVar159 | auVar226 & auVar177;
                    uVar30 = in_XMM1._4_4_;
                    auVar279._4_4_ = uVar30;
                    auVar279._0_4_ = uVar30;
                    auVar279._8_4_ = uVar30;
                    auVar279._12_4_ = uVar30;
                    auVar189 = in_XMM1 ^ in_XMM11;
                    in_XMM3 = auVar279 ^ in_XMM11;
                    auVar202._0_4_ = -(uint)(in_XMM3._0_4_ < auVar189._0_4_);
                    auVar202._4_4_ = -(uint)(in_XMM3._4_4_ < auVar189._4_4_);
                    auVar202._8_4_ = -(uint)(in_XMM3._8_4_ < auVar189._8_4_);
                    auVar202._12_4_ = -(uint)(in_XMM3._12_4_ < auVar189._12_4_);
                    in_XMM1 = in_XMM1 & auVar202;
                    in_XMM2 = ~auVar202 & auVar279 | in_XMM1;
                    lVar119._0_4_ = in_XMM2._0_4_;
                    lVar119._4_4_ = 0;
                    if (uVar146 == uVar76) {
                      in_R11 = (uint *)(ulong)uVar122;
                      uVar113 = *(long *)((long)puVar100 + 8);
                      uVar92 = *(long *)((long)puVar100 + 0x18);
                      goto LAB_003f43f5;
                    }
                    phVar107 = phVar107 + uVar76 * 2;
                    uVar113 = *(long *)((long)puVar100 + 8);
                    uVar92 = *(long *)((long)puVar100 + 0x18);
                  }
                  do {
                    uVar149._0_4_ =
                         (ushort)(*(ushort *)phVar107 << 8 | *(ushort *)phVar107 >> 8) + 1;
                    uVar149._4_4_ = 0;
                    if ((uint)uVar149 <= (uint)lVar119) {
                      uVar149 = lVar119;
                    }
                    phVar107 = phVar107 + 2;
                    lVar119 = uVar149;
                  } while (phVar107 <
                           (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                            *)(uVar92 + (ulong)uVar64 * 2));
                }
                in_R11 = (uint *)(ulong)uVar122;
              }
LAB_003f43f5:
              uVar64 = (uint)(lVar119 * 6);
              if ((((int)((ulong)(lVar119 * 6) >> 0x20) != 0) ||
                  ((ulong)*(uint *)((long)phVar32 + 0x18) <
                   (ulong)(uVar129 - *(long *)((long)phVar32 + 8)))) ||
                 ((uint)(*(int *)((long)phVar32 + 0x10) - (int)uVar129) < uVar64))
              goto LAB_003f4e44;
              iVar31 = *(int *)param_6 - uVar64;
              *(int *)param_6 = iVar31;
              if ((iVar31 < 1) ||
                 (iVar31 = iVar31 + ((uint)uVar88 - (uint)lVar119), *(int *)param_6 = iVar31,
                 iVar31 < 1)) goto LAB_003f4e44;
              if ((uint)uVar88 < (uint)lVar119) {
                param_6 = lVar119 * 3;
                lVar116 = (long)param_5 * 6;
                uVar33 = *(long *)((long)puVar100 + 0x58) + lVar119 * 6;
                if ((ulong)(*(long *)((long)puVar100 + 0x58) + lVar119 * 6) <
                    (ulong)(*(long *)((long)puVar100 + 0x50) + lVar116)) {
                  uVar33 = *(long *)((long)puVar100 + 0x50) + lVar116;
                }
                uVar146 = (ulong)(uVar33 + 2 != *(long *)((long)puVar100 + 0x60) + lVar116);
                lVar34 = lVar116 + uVar129;
                uVar33 = (((uVar33 + *(long *)((long)puVar100 + 0x48)) - uVar146) +
                         (long)param_5 * -6) / 6;
                uVar152 = uVar146 + uVar33 + 1;
                puVar144 = (uint *)uVar129;
                if (8 < uVar152) {
                  uVar76 = (ulong)((uint)uVar152 & 7);
                  if (uVar76 == 0) {
                    uVar76 = 8;
                  }
                  uVar111 = uVar152 - uVar76;
                  auVar279._4_4_ = uVar90;
                  auVar279._0_4_ = uVar90;
                  auVar279._8_4_ = uVar90;
                  auVar279._12_4_ = uVar90;
                  uVar97 = (uVar76 - (uVar146 + 1)) - uVar33;
                  uVar129 = lVar116 + *(long *)((long)puVar100 + 0x30);
                  puVar104 = (undefined8 *)puVar100;
                  in_XMM1 = auVar279;
LAB_003f4500:
                  do {
                    auVar203._8_8_ = 0;
                    auVar203._0_8_ = *(ulong *)(uVar129 + -8);
                    auVar237._8_8_ = 0;
                    auVar237._0_8_ = *(ulong *)(uVar129 + 0x10);
                    in_XMM6 = ~in_XMM8 & auVar203;
                    auVar189 = *(undefined1 (*) [16])(uVar129 + -0x18) & in_XMM8 | in_XMM6;
                    auVar204._4_4_ = auVar189._8_4_;
                    auVar204._0_4_ = auVar189._0_4_;
                    auVar204._8_4_ = auVar189._4_4_;
                    auVar204._12_4_ = auVar189._12_4_;
                    auVar189 = pshufhw(auVar204,auVar204,0xe6);
                    auVar205._0_4_ = auVar189._0_4_;
                    auVar205._8_4_ = auVar189._8_4_;
                    auVar205._12_4_ = auVar189._12_4_;
                    auVar205._4_4_ = auVar205._8_4_;
                    in_XMM2 = pshuflw(auVar205,auVar205,0x6c);
                    in_XMM5 = *(undefined1 (*) [16])uVar129 & in_XMM8 | ~in_XMM8 & auVar237;
                    auVar238._4_4_ = in_XMM5._8_4_;
                    auVar238._0_4_ = in_XMM5._0_4_;
                    auVar238._8_4_ = in_XMM5._4_4_;
                    auVar238._12_4_ = in_XMM5._12_4_;
                    auVar189 = pshufhw(auVar238,auVar238,0xe6);
                    auVar239._0_4_ = auVar189._0_4_;
                    auVar239._8_4_ = auVar189._8_4_;
                    auVar239._12_4_ = auVar189._12_4_;
                    auVar239._4_4_ = auVar239._8_4_;
                    in_XMM3 = pshuflw(auVar239,auVar239,0x6c);
                    auVar196._0_2_ = in_XMM2._0_2_ >> 8;
                    auVar196._2_2_ = in_XMM2._2_2_ >> 8;
                    auVar196._4_2_ = in_XMM2._4_2_ >> 8;
                    auVar196._6_2_ = in_XMM2._6_2_ >> 8;
                    auVar196._8_2_ = in_XMM2._8_2_ >> 8;
                    auVar196._10_2_ = in_XMM2._10_2_ >> 8;
                    auVar196._12_2_ = in_XMM2._12_2_ >> 8;
                    uVar92 = uVar97;
                    puVar100 = (uint *)puVar104;
                    uVar113 = uVar111;
code_r0x003f4568:
                    auVar189 = psllw(in_XMM2,8);
                    auVar196 = auVar189._0_14_ | auVar196;
                    auVar228._0_2_ = in_XMM3._0_2_ >> 8;
                    auVar228._2_2_ = in_XMM3._2_2_ >> 8;
                    auVar228._4_2_ = in_XMM3._4_2_ >> 8;
                    auVar228._6_2_ = in_XMM3._6_2_ >> 8;
                    auVar228._8_2_ = in_XMM3._8_2_ >> 8;
                    auVar228._10_2_ = in_XMM3._10_2_ >> 8;
                    auVar189 = psllw(in_XMM3,8);
                    auVar228 = auVar189._0_12_ | auVar228;
                    auVar208._0_12_ = auVar196._0_12_;
                    auVar208._12_2_ = auVar196._6_2_;
                    auVar208._14_2_ = in_XMM7._6_2_;
                    auVar207._12_4_ = auVar208._12_4_;
                    auVar207._0_10_ = auVar196._0_10_;
                    auVar207._10_2_ = in_XMM7._4_2_;
                    auVar206._10_6_ = auVar207._10_6_;
                    auVar206._0_8_ = auVar196._0_8_;
                    auVar206._8_2_ = auVar196._4_2_;
                    in_XMM2._8_8_ = auVar206._8_8_;
                    in_XMM2._6_2_ = in_XMM7._2_2_;
                    in_XMM2._4_2_ = auVar196._2_2_;
                    in_XMM2._0_2_ = auVar196._0_2_;
                    in_XMM2._2_2_ = in_XMM7._0_2_;
code_r0x003f4587:
                    auVar242._12_2_ = auVar228._6_2_;
                    auVar242._0_12_ = auVar228;
                    auVar242._14_2_ = in_XMM7._6_2_;
                    auVar241._12_4_ = auVar242._12_4_;
                    auVar241._0_10_ = auVar228._0_10_;
                    auVar241._10_2_ = in_XMM7._4_2_;
                    auVar240._10_6_ = auVar241._10_6_;
                    auVar240._0_8_ = auVar228._0_8_;
                    auVar240._8_2_ = auVar228._4_2_;
                    in_XMM3._8_8_ = auVar240._8_8_;
                    in_XMM3._6_2_ = in_XMM7._2_2_;
                    in_XMM3._4_2_ = auVar228._2_2_;
                    in_XMM3._0_2_ = auVar228._0_2_;
                    in_XMM3._2_2_ = in_XMM7._0_2_;
                    auVar160._0_4_ = -(uint)(in_XMM2._0_4_ < auVar279._0_4_);
                    auVar160._4_4_ = -(uint)(in_XMM2._4_4_ < auVar279._4_4_);
                    auVar160._8_4_ = -(uint)(in_XMM2._8_4_ < auVar279._8_4_);
                    auVar160._12_4_ = -(uint)(in_XMM2._12_4_ < auVar279._12_4_);
                    in_XMM4 = auVar279 & auVar160;
                    auVar279 = ~auVar160 & in_XMM2 | in_XMM4;
                    uVar49 = lVar34;
                    puVar24 = puVar100;
                    uVar111 = uVar113;
                    in_XMM2 = in_XMM1;
code_r0x003f45a3:
                    puVar100 = puVar24;
                    lVar34 = uVar49;
                    auVar178._0_4_ = -(uint)(in_XMM3._0_4_ < in_XMM1._0_4_);
                    auVar178._4_4_ = -(uint)(in_XMM3._4_4_ < in_XMM1._4_4_);
                    auVar178._8_4_ = -(uint)(in_XMM3._8_4_ < in_XMM1._8_4_);
                    auVar178._12_4_ = -(uint)(in_XMM3._12_4_ < in_XMM1._12_4_);
                    in_XMM1 = ~auVar178 & in_XMM3 | in_XMM2 & auVar178;
                    uVar129 = uVar129 + 0x30;
                    uVar97 = uVar92 + 8;
                    puVar104 = (undefined8 *)puVar100;
                  } while ((pthread_mutex_t *)uVar97 != (pthread_mutex_t *)0x0);
                  lVar34 = lVar34 + uVar111 * 6;
                  auVar209._0_4_ = -(uint)(in_XMM1._0_4_ < auVar279._0_4_);
                  auVar209._4_4_ = -(uint)(in_XMM1._4_4_ < auVar279._4_4_);
                  auVar209._8_4_ = -(uint)(in_XMM1._8_4_ < auVar279._8_4_);
                  auVar209._12_4_ = -(uint)(in_XMM1._12_4_ < auVar279._12_4_);
                  auVar279 = ~auVar209 & in_XMM1 | auVar279 & auVar209;
                  auVar161._0_8_ = auVar279._8_8_;
                  auVar161._8_4_ = auVar279._8_4_;
                  auVar161._12_4_ = auVar279._12_4_;
                  auVar179._0_4_ = -(uint)(auVar279._8_4_ < auVar279._0_4_);
                  auVar179._4_4_ = -(uint)(auVar279._12_4_ < auVar279._4_4_);
                  auVar179._8_8_ = 0;
                  in_XMM1 = ~auVar179 & auVar161 | auVar279 & auVar179;
                  iVar31 = in_XMM1._4_4_;
                  auVar279._4_4_ = iVar31;
                  auVar279._0_4_ = iVar31;
                  auVar279._8_4_ = iVar31;
                  auVar279._12_4_ = iVar31;
                  auVar210._0_4_ = -(uint)(iVar31 < in_XMM1._0_4_);
                  auVar210._4_4_ = 0;
                  auVar210._8_4_ = -(uint)(iVar31 < in_XMM1._8_4_);
                  auVar210._12_4_ = -(uint)(iVar31 < in_XMM1._12_4_);
                  in_XMM1 = in_XMM1 & auVar210;
                  in_XMM2 = ~auVar210 & auVar279 | in_XMM1;
                  puVar147._0_4_ = in_XMM2._0_4_;
                  puVar147._4_4_ = 0;
                  uVar92 = *(long *)((long)puVar100 + 0x18);
                }
LAB_003f4620:
                uVar88 = param_6 * 2 + (long)puVar144;
                param_6 = *(long *)((long)puVar100 + 0x10);
                uVar49 = lVar34;
                puVar69 = puVar100;
                uVar113 = *(long *)((long)puVar100 + 8);
LAB_003f4640:
                do {
                  uVar29 = *(ushort *)uVar49 << 8 | *(ushort *)uVar49 >> 8;
                  iVar31 = (int)puVar147;
                  puVar147 = (uint *)((ulong)puVar147 & 0xffffffff);
                  if (iVar31 < (int)(uint)uVar29) {
                    puVar147._2_6_ = 0;
                    puVar147._0_2_ = uVar29;
                  }
                  uVar49 = uVar49 + 6;
                  puVar100 = puVar69;
                  uVar129 = puVar144;
                } while ((ulong)uVar49 < (ulong)uVar88);
              }
            } while ((int)in_R11 <= (int)puVar147);
            goto LAB_003f3ed0;
          }
        }
      }
      break;
    case 2:
      if (((pthread_mutex_t *)(param_4 + 0x1c) <= (ulong)uVar49) &&
         ((pthread_mutex_t *)(param_4 + 0x14) <= (ulong)uVar49)) {
        uVar88._0_4_ = *(uint *)(uVar113 + 0x10);
        *(undefined8 *)((long)puVar100 + -8) = 0x3f4689;
        uVar33 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                           ((Lookup<OT::IntType<unsigned_short,2u>> *)
                            ((ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                                     ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) + uVar113)
                            ,(long)phVar32);
        if (((char)uVar33 != '\0') &&
           ((uVar113 - *(long *)((long)phVar32 + 8)) + 0x18U <=
            (ulong)*(uint *)&((__pthread_list_t *)((long)phVar32 + 0x18))->__prev)) {
          uVar88._0_4_ = *(uint *)(uVar113 + 0x14);
          *(undefined8 *)((long)puVar100 + -8) = 0x3f46bb;
          uVar33 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                             ((Lookup<OT::IntType<unsigned_short,2u>> *)
                              ((ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                                       ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) +
                              uVar113),(long)phVar32);
          param_6 = *(long *)((long)puVar100 + 0x10);
          in_XMM7 = (undefined1  [16])0x0;
          if (((char)uVar33 != '\0') &&
             ((ulong)(uVar113 - *(long *)((long)phVar32 + 8)) <=
              (ulong)*(uint *)&((__pthread_list_t *)((long)phVar32 + 0x18))->__prev)) {
            uVar88._0_4_ = *(uint *)(uVar113 + 0x18);
            lVar34._0_4_ = (uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                           ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18;
            lVar34._4_4_ = 0;
            auVar279 = extraout_XMM0_17;
            if ((uint)lVar34 <= *(int *)((long)phVar32 + 0x10) - uVar122) goto LAB_003f3ec0;
          }
        }
      }
      break;
    case 3:
    case 5:
      goto LAB_003f3ed0;
    case 4:
      if (((((pthread_mutex_t *)(param_4 + 0x20) <= (ulong)uVar49) &&
           ((pthread_mutex_t *)(((long)puVar144 - uVar88) + 0x10) <= (ulong)uVar49)) &&
          (uVar88._0_4_ = *puVar144,
          3 < ((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 | ((uint)uVar88 & 0xff00) << 8
              | (uint)uVar88 << 0x18))) &&
         (phVar107 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)((long)puVar144 + 8),
         (ulong)((long)phVar107 - *(long *)((long)phVar32 + 8)) <=
         (ulong)*(uint *)&((__pthread_list_t *)((long)phVar32 + 0x18))->__prev)) {
        uVar88._0_4_ = *(uint *)((long)puVar144 + 4);
        *(undefined8 *)((long)puVar100 + -8) = 0x3f4755;
        uVar33 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                           ((Lookup<OT::IntType<unsigned_short,2u>> *)
                            ((ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                                     ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) +
                            (long)puVar144),(long)phVar32);
        param_6 = *(long *)((long)puVar100 + 0x10);
        in_XMM7 = (undefined1  [16])0x0;
        in_XMM9_Da = -1;
        in_XMM9_Db = -1;
        in_XMM9_Dc = -1;
        in_XMM9_Dd = -1;
        in_XMM10_Da = -0x7fffffff;
        in_XMM10_Db = -0x7fffffff;
        in_XMM10_Dc = -0x7fffffff;
        in_XMM10_Dd = -0x7fffffff;
        if ((char)uVar33 != '\0') {
          uVar88._0_4_ = *puVar144;
          uVar88._0_4_ = (uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                         ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18;
          in_R10 = (ulong)(uint)uVar88;
          if (-1 < (int)(uint)uVar88) {
            uVar90 = *(uint *)((long)puVar144 + 8);
            uVar33 = (ulong)(uVar90 >> 0x18 | (uVar90 & 0xff0000) >> 8 | (uVar90 & 0xff00) << 8 |
                            uVar90 << 0x18);
            phVar81 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                       *)(uVar33 + (long)puVar144);
            uVar90 = *(uint *)((long)puVar144 + 0xc);
            uVar152 = (ulong)(uVar90 >> 0x18 | (uVar90 & 0xff0000) >> 8 | (uVar90 & 0xff00) << 8 |
                             uVar90 << 0x18);
            uVar111 = (long)puVar144 + uVar152;
            *(uint *)((long)puVar100 + 0x60) = (uint)uVar88 * 2;
            *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              **)((long)puVar100 + 0x50) = phVar107 + (uVar152 - 8);
            *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              **)((long)puVar100 + 0x48) =
                 (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)((long)puVar144 + 6) + uVar152;
            *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              **)((long)puVar100 + 0x58) = phVar107 + uVar152;
            *(long *)((long)puVar100 + 0x18) = 2 - (long)(phVar107 + uVar152);
            *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              **)((long)puVar100 + 0x38) = phVar107 + (uVar33 - 8);
            *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              **)((long)puVar100 + 0x40) = phVar107 + uVar33;
            *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              **)((long)puVar100 + 0x28) =
                 (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)(uVar33 + uVar113) + 0x14;
            *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              **)((long)puVar100 + 0x30) =
                 (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)(uVar152 + uVar113) + 0x24;
            in_R11 = (uint *)0x0;
            puVar147 = (uint *)0x0;
            lVar119 = 0;
            *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              **)((long)puVar100 + 0x20) = phVar81;
            auVar279 = extraout_XMM0_18;
            in_XMM8 = _DAT_005de020;
            in_XMM11 = _DAT_006524b0;
            do {
              param_5 = (uint *)(lVar119 & 0xffffffff);
              iVar31 = (int)in_R11;
              uVar90 = (uint)puVar147;
              uVar88._0_4_ = (uint)lVar119;
              lVar119 = (long)param_5;
              if (iVar31 <= (int)uVar90) {
                uVar122 = uVar90 + 1;
                uVar64 = (uint)((ulong)uVar122 * (ulong)*(uint *)((long)puVar100 + 0x60));
                if ((((int)((ulong)uVar122 * (ulong)*(uint *)((long)puVar100 + 0x60) >> 0x20) != 0)
                    || ((ulong)*(uint *)((long)phVar32 + 0x18) <
                        (ulong)((long)phVar81 - *(long *)((long)phVar32 + 8)))) ||
                   ((uint)(*(int *)((long)phVar32 + 0x10) - (int)phVar81) < uVar64))
                goto LAB_003f4e44;
                iVar121 = *(int *)param_6 - uVar64;
                *(int *)param_6 = iVar121;
                if (((iVar121 < 1) ||
                    (iVar121 = ~uVar90 + iVar31 + iVar121, *(int *)param_6 = iVar121, iVar121 < 1))
                   || ((int)((ulong)uVar122 * (in_R10 & 0xffffffff) >> 0x20) != 0))
                goto LAB_003f4e44;
                uVar64 = uVar122 * (int)in_R10;
                uVar91 = iVar31 * (int)in_R10;
                if (uVar91 < uVar64) {
                  uVar152 = (ulong)uVar91;
                  phVar107 = phVar81 + uVar152 * 2;
                  uVar146 = uVar152 * 2 + 2 + *(long *)((long)puVar100 + 0x38);
                  uVar33 = *(long *)((long)puVar100 + 0x38) + (ulong)uVar64 * 2;
                  if (uVar33 < uVar146) {
                    uVar33 = uVar146;
                  }
                  uVar33 = (uVar33 - (*(long *)((long)puVar100 + 0x40) + uVar152 * 2)) + 7;
                  if (uVar33 < 0xe) {
                    uVar113 = *(long *)((long)puVar100 + 8);
                  }
                  else {
                    uVar146 = (uVar33 >> 1) + 1;
                    uVar76 = uVar146 & 0xfffffffffffffff8;
                    auVar163._4_4_ = (uint)uVar88;
                    auVar163._0_4_ = (uint)uVar88;
                    auVar163._8_4_ = (uint)uVar88;
                    auVar163._12_4_ = (uint)uVar88;
                    uVar33 = 0;
                    auVar279 = auVar163;
                    do {
                      uVar135 = *(ulong *)(uVar152 * 2 + *(long *)((long)puVar100 + 0x28) + -8 +
                                          uVar33 * 2);
                      auVar243._8_8_ = 0;
                      auVar243._0_8_ = uVar135;
                      uVar134 = *(ulong *)(uVar152 * 2 + *(long *)((long)puVar100 + 0x28) +
                                          uVar33 * 2);
                      auVar211._8_8_ = 0;
                      auVar211._0_8_ = uVar134;
                      auVar230._0_2_ = (ushort)uVar135 >> 8;
                      auVar230._2_2_ = (ushort)(uVar135 >> 0x10) >> 8;
                      auVar230._4_2_ = (ushort)(uVar135 >> 0x20) >> 8;
                      auVar230._6_2_ = (ushort)(uVar135 >> 0x38);
                      auVar230._8_6_ = 0;
                      auVar189 = psllw(auVar243,8);
                      auVar230 = auVar189._0_14_ | auVar230;
                      auVar197._0_2_ = (ushort)uVar134 >> 8;
                      auVar197._2_2_ = (ushort)(uVar134 >> 0x10) >> 8;
                      auVar197._4_2_ = (ushort)(uVar134 >> 0x20) >> 8;
                      auVar197._6_2_ = (ushort)(uVar134 >> 0x38);
                      auVar197._8_6_ = 0;
                      auVar189 = psllw(auVar211,8);
                      auVar197 = auVar189._0_14_ | auVar197;
                      auVar246._0_12_ = auVar230._0_12_;
                      auVar246._12_2_ = auVar230._6_2_;
                      auVar246._14_2_ = in_XMM7._6_2_;
                      auVar245._12_4_ = auVar246._12_4_;
                      auVar245._0_10_ = auVar230._0_10_;
                      auVar245._10_2_ = in_XMM7._4_2_;
                      auVar244._10_6_ = auVar245._10_6_;
                      auVar244._0_8_ = auVar230._0_8_;
                      auVar244._8_2_ = auVar230._4_2_;
                      auVar13._4_8_ = auVar244._8_8_;
                      auVar13._2_2_ = in_XMM7._2_2_;
                      auVar13._0_2_ = auVar230._2_2_;
                      iVar121 = CONCAT22(in_XMM7._0_2_,auVar230._0_2_);
                      auVar214._0_12_ = auVar197._0_12_;
                      auVar214._12_2_ = auVar197._6_2_;
                      auVar214._14_2_ = in_XMM7._6_2_;
                      auVar213._12_4_ = auVar214._12_4_;
                      auVar213._0_10_ = auVar197._0_10_;
                      auVar213._10_2_ = in_XMM7._4_2_;
                      auVar212._10_6_ = auVar213._10_6_;
                      auVar212._0_8_ = auVar197._0_8_;
                      auVar212._8_2_ = auVar197._4_2_;
                      auVar14._4_8_ = auVar212._8_8_;
                      auVar14._2_2_ = in_XMM7._2_2_;
                      auVar14._0_2_ = auVar197._2_2_;
                      iVar31 = CONCAT22(in_XMM7._0_2_,auVar197._0_2_);
                      in_XMM4._0_4_ = iVar121 - in_XMM9_Da;
                      in_XMM4._4_4_ = auVar13._0_4_ - in_XMM9_Db;
                      in_XMM4._8_4_ = auVar244._8_4_ - in_XMM9_Dc;
                      in_XMM4._12_4_ = auVar245._12_4_ - in_XMM9_Dd;
                      in_XMM5._0_4_ = iVar31 - in_XMM9_Da;
                      in_XMM5._4_4_ = auVar14._0_4_ - in_XMM9_Db;
                      in_XMM5._8_4_ = auVar212._8_4_ - in_XMM9_Dc;
                      in_XMM5._12_4_ = auVar213._12_4_ - in_XMM9_Dd;
                      auVar189 = auVar163 ^ in_XMM11;
                      auVar162._0_4_ = -(uint)(iVar121 + in_XMM10_Da < auVar189._0_4_);
                      auVar162._4_4_ = -(uint)(auVar13._0_4_ + in_XMM10_Db < auVar189._4_4_);
                      auVar162._8_4_ = -(uint)(auVar244._8_4_ + in_XMM10_Dc < auVar189._8_4_);
                      auVar162._12_4_ = -(uint)(auVar245._12_4_ + in_XMM10_Dd < auVar189._12_4_);
                      in_XMM6 = auVar163 & auVar162;
                      auVar163 = ~auVar162 & in_XMM4 | in_XMM6;
                      auVar189 = auVar279 ^ in_XMM11;
                      auVar180._0_4_ = -(uint)(iVar31 + in_XMM10_Da < auVar189._0_4_);
                      auVar180._4_4_ = -(uint)(auVar14._0_4_ + in_XMM10_Db < auVar189._4_4_);
                      auVar180._8_4_ = -(uint)(auVar212._8_4_ + in_XMM10_Dc < auVar189._8_4_);
                      auVar180._12_4_ = -(uint)(auVar213._12_4_ + in_XMM10_Dd < auVar189._12_4_);
                      auVar279 = ~auVar180 & in_XMM5 | auVar279 & auVar180;
                      uVar33 = uVar33 + 8;
                    } while (uVar76 != uVar33);
                    auVar189 = auVar279 ^ in_XMM11;
                    auVar226 = auVar163 ^ in_XMM11;
                    auVar247._0_4_ = -(uint)(auVar189._0_4_ < auVar226._0_4_);
                    auVar247._4_4_ = -(uint)(auVar189._4_4_ < auVar226._4_4_);
                    auVar247._8_4_ = -(uint)(auVar189._8_4_ < auVar226._8_4_);
                    auVar247._12_4_ = -(uint)(auVar189._12_4_ < auVar226._12_4_);
                    auVar226 = ~auVar247 & auVar279 | auVar163 & auVar247;
                    auVar164._0_8_ = auVar226._8_8_;
                    auVar164._8_4_ = auVar226._8_4_;
                    auVar164._12_4_ = auVar226._12_4_;
                    auVar279 = auVar226 ^ in_XMM11;
                    auVar189 = auVar164 ^ in_XMM11;
                    auVar181._0_4_ = -(uint)(auVar189._0_4_ < auVar279._0_4_);
                    auVar181._4_4_ = -(uint)(auVar189._4_4_ < auVar279._4_4_);
                    auVar181._8_4_ = -(uint)(auVar189._8_4_ < auVar279._8_4_);
                    auVar181._12_4_ = -(uint)(auVar189._12_4_ < auVar279._12_4_);
                    in_XMM1 = ~auVar181 & auVar164 | auVar226 & auVar181;
                    uVar30 = in_XMM1._4_4_;
                    auVar279._4_4_ = uVar30;
                    auVar279._0_4_ = uVar30;
                    auVar279._8_4_ = uVar30;
                    auVar279._12_4_ = uVar30;
                    auVar189 = in_XMM1 ^ in_XMM11;
                    in_XMM3 = auVar279 ^ in_XMM11;
                    auVar215._0_4_ = -(uint)(in_XMM3._0_4_ < auVar189._0_4_);
                    auVar215._4_4_ = -(uint)(in_XMM3._4_4_ < auVar189._4_4_);
                    auVar215._8_4_ = -(uint)(in_XMM3._8_4_ < auVar189._8_4_);
                    auVar215._12_4_ = -(uint)(in_XMM3._12_4_ < auVar189._12_4_);
                    in_XMM1 = in_XMM1 & auVar215;
                    in_XMM2 = ~auVar215 & auVar279 | in_XMM1;
                    lVar119._0_4_ = in_XMM2._0_4_;
                    lVar119._4_4_ = 0;
                    if (uVar146 == uVar76) {
                      in_R11 = (uint *)(ulong)uVar122;
                      uVar113 = *(long *)((long)puVar100 + 8);
                      phVar81 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                  **)((long)puVar100 + 0x20);
                      goto LAB_003f4a85;
                    }
                    phVar107 = phVar107 + uVar76 * 2;
                    uVar113 = *(long *)((long)puVar100 + 8);
                    phVar81 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                **)((long)puVar100 + 0x20);
                  }
                  do {
                    uVar150._0_4_ =
                         (ushort)(*(ushort *)phVar107 << 8 | *(ushort *)phVar107 >> 8) + 1;
                    uVar150._4_4_ = 0;
                    if ((uint)uVar150 <= (uint)lVar119) {
                      uVar150 = lVar119;
                    }
                    phVar107 = phVar107 + 2;
                    lVar119 = uVar150;
                  } while (phVar107 < phVar81 + (ulong)uVar64 * 2);
                }
                in_R11 = (uint *)(ulong)uVar122;
              }
LAB_003f4a85:
              uVar64 = (uint)(lVar119 * 6);
              if ((((int)((ulong)(lVar119 * 6) >> 0x20) != 0) ||
                  ((ulong)*(uint *)((long)phVar32 + 0x18) <
                   (ulong)(uVar111 - *(long *)((long)phVar32 + 8)))) ||
                 ((uint)(*(int *)((long)phVar32 + 0x10) - (int)uVar111) < uVar64))
              goto LAB_003f4e44;
              iVar31 = *(int *)param_6 - uVar64;
              *(int *)param_6 = iVar31;
              if ((iVar31 < 1) ||
                 (iVar31 = iVar31 + ((uint)uVar88 - (uint)lVar119), *(int *)param_6 = iVar31,
                 iVar31 < 1)) goto LAB_003f4e44;
              if ((uint)uVar88 < (uint)lVar119) {
                param_6 = lVar119 * 3;
                lVar116 = (long)param_5 * 6;
                uVar33 = *(long *)((long)puVar100 + 0x50) + lVar119 * 6;
                if ((ulong)(*(long *)((long)puVar100 + 0x50) + lVar119 * 6) <
                    (ulong)(*(long *)((long)puVar100 + 0x48) + lVar116)) {
                  uVar33 = *(long *)((long)puVar100 + 0x48) + lVar116;
                }
                uVar146 = (ulong)(uVar33 + 2 != *(long *)((long)puVar100 + 0x58) + lVar116);
                lVar34 = lVar116 + uVar111;
                uVar33 = (((uVar33 + *(long *)((long)puVar100 + 0x18)) - uVar146) +
                         (long)param_5 * -6) / 6;
                uVar152 = uVar146 + uVar33 + 1;
                if (8 < uVar152) {
                  uVar76 = (ulong)((uint)uVar152 & 7);
                  if (uVar76 == 0) {
                    uVar76 = 8;
                  }
                  uVar92 = uVar152 - uVar76;
                  auVar279._4_4_ = uVar90;
                  auVar279._0_4_ = uVar90;
                  auVar279._8_4_ = uVar90;
                  auVar279._12_4_ = uVar90;
                  uVar113 = (uVar76 - (uVar146 + 1)) - uVar33;
                  uVar129 = lVar116 + *(long *)((long)puVar100 + 0x30);
                  puVar144 = (uint *)uVar111;
                  in_XMM1 = auVar279;
LAB_003f4b90:
                  do {
                    in_XMM6._8_8_ = 0;
                    in_XMM6._0_8_ = *(ulong *)(uVar129 + -8);
                    auVar248._8_8_ = 0;
                    auVar248._0_8_ = *(ulong *)(uVar129 + 0x10);
                    in_XMM6 = ~in_XMM8 & in_XMM6;
                    auVar189 = *(undefined1 (*) [16])(uVar129 + -0x18) & in_XMM8 | in_XMM6;
                    auVar216._4_4_ = auVar189._8_4_;
                    auVar216._0_4_ = auVar189._0_4_;
                    auVar216._8_4_ = auVar189._4_4_;
                    auVar216._12_4_ = auVar189._12_4_;
                    auVar189 = pshufhw(auVar216,auVar216,0xe6);
                    auVar217._0_4_ = auVar189._0_4_;
                    auVar217._8_4_ = auVar189._8_4_;
                    auVar217._12_4_ = auVar189._12_4_;
                    auVar217._4_4_ = auVar217._8_4_;
                    auVar189 = pshuflw(auVar217,auVar217,0x6c);
                    in_XMM5 = *(undefined1 (*) [16])uVar129 & in_XMM8 | ~in_XMM8 & auVar248;
                    auVar249._4_4_ = in_XMM5._8_4_;
                    auVar249._0_4_ = in_XMM5._0_4_;
                    auVar249._8_4_ = in_XMM5._4_4_;
                    auVar249._12_4_ = in_XMM5._12_4_;
                    auVar226 = pshufhw(auVar249,auVar249,0xe6);
                    auVar250._0_4_ = auVar226._0_4_;
                    auVar250._8_4_ = auVar226._8_4_;
                    auVar250._12_4_ = auVar226._12_4_;
                    auVar250._4_4_ = auVar250._8_4_;
                    in_XMM3 = pshuflw(auVar250,auVar250,0x6c);
                    auVar194._0_2_ = auVar189._0_2_ >> 8;
                    auVar194._2_2_ = auVar189._2_2_ >> 8;
                    auVar194._4_2_ = auVar189._4_2_ >> 8;
                    auVar194._6_2_ = auVar189._6_2_ >> 8;
                    auVar194._8_2_ = auVar189._8_2_ >> 8;
                    auVar194._10_2_ = auVar189._10_2_ >> 8;
                    auVar189 = psllw(auVar189,8);
                    auVar194 = auVar189._0_12_ | auVar194;
                    in_XMM4 = auVar279;
code_r0x003f4c01:
                    auVar231._0_2_ = in_XMM3._0_2_ >> 8;
                    auVar231._2_2_ = in_XMM3._2_2_ >> 8;
                    auVar231._4_2_ = in_XMM3._4_2_ >> 8;
                    auVar231._6_2_ = in_XMM3._6_2_ >> 8;
                    auVar231._8_2_ = in_XMM3._8_2_ >> 8;
                    auVar231._10_2_ = in_XMM3._10_2_ >> 8;
                    auVar231._12_2_ = in_XMM3._12_2_ >> 8;
                    auVar279 = psllw(in_XMM3,8);
                    auVar231 = auVar279._0_14_ | auVar231;
                    auVar220._12_2_ = auVar194._6_2_;
                    auVar220._0_12_ = auVar194;
                    auVar220._14_2_ = in_XMM7._6_2_;
                    auVar219._12_4_ = auVar220._12_4_;
                    auVar219._0_10_ = auVar194._0_10_;
                    auVar219._10_2_ = in_XMM7._4_2_;
                    auVar218._10_6_ = auVar219._10_6_;
                    auVar218._0_8_ = auVar194._0_8_;
                    auVar218._8_2_ = auVar194._4_2_;
                    auVar15._4_8_ = auVar218._8_8_;
                    auVar15._2_2_ = in_XMM7._2_2_;
                    auVar15._0_2_ = auVar194._2_2_;
                    in_XMM2._0_4_ = CONCAT22(in_XMM7._0_2_,auVar194._0_2_);
                    in_XMM2._4_12_ = auVar15;
                    auVar253._0_12_ = auVar231._0_12_;
                    auVar253._12_2_ = auVar231._6_2_;
                    auVar253._14_2_ = in_XMM7._6_2_;
                    auVar252._12_4_ = auVar253._12_4_;
                    auVar252._0_10_ = auVar231._0_10_;
                    auVar252._10_2_ = in_XMM7._4_2_;
                    auVar251._10_6_ = auVar252._10_6_;
                    auVar251._0_8_ = auVar231._0_8_;
                    auVar251._8_2_ = auVar231._4_2_;
                    in_XMM3._8_8_ = auVar251._8_8_;
                    in_XMM3._6_2_ = in_XMM7._2_2_;
                    in_XMM3._4_2_ = auVar231._2_2_;
                    in_XMM3._0_2_ = auVar231._0_2_;
                    in_XMM3._2_2_ = in_XMM7._0_2_;
                    auVar279._0_4_ = -(uint)(in_XMM2._0_4_ < in_XMM4._0_4_);
                    auVar279._4_4_ = -(uint)(auVar15._0_4_ < in_XMM4._4_4_);
                    auVar279._8_4_ = -(uint)(auVar218._8_4_ < in_XMM4._8_4_);
                    auVar279._12_4_ = -(uint)(auVar219._12_4_ < in_XMM4._12_4_);
                    uVar49 = lVar34;
                    uVar111 = uVar113;
code_r0x003f4c23:
                    lVar34 = uVar49;
                    in_XMM4 = in_XMM4 & auVar279;
                    auVar279 = ~auVar279 & in_XMM2 | in_XMM4;
                    auVar182._0_4_ = -(uint)(in_XMM3._0_4_ < in_XMM1._0_4_);
                    auVar182._4_4_ = -(uint)(in_XMM3._4_4_ < in_XMM1._4_4_);
                    auVar182._8_4_ = -(uint)(in_XMM3._8_4_ < in_XMM1._8_4_);
                    auVar182._12_4_ = -(uint)(in_XMM3._12_4_ < in_XMM1._12_4_);
                    in_XMM1 = ~auVar182 & in_XMM3 | in_XMM1 & auVar182;
                    uVar129 = uVar129 + 0x30;
                    uVar113 = uVar111 + 8;
                  } while ((pthread_mutex_t *)uVar113 != (pthread_mutex_t *)0x0);
                  lVar34 = lVar34 + uVar92 * 6;
                  auVar221._0_4_ = -(uint)(in_XMM1._0_4_ < auVar279._0_4_);
                  auVar221._4_4_ = -(uint)(in_XMM1._4_4_ < auVar279._4_4_);
                  auVar221._8_4_ = -(uint)(in_XMM1._8_4_ < auVar279._8_4_);
                  auVar221._12_4_ = -(uint)(in_XMM1._12_4_ < auVar279._12_4_);
                  auVar279 = ~auVar221 & in_XMM1 | auVar279 & auVar221;
                  auVar165._0_8_ = auVar279._8_8_;
                  auVar165._8_4_ = auVar279._8_4_;
                  auVar165._12_4_ = auVar279._12_4_;
                  auVar183._0_4_ = -(uint)(auVar279._8_4_ < auVar279._0_4_);
                  auVar183._4_4_ = -(uint)(auVar279._12_4_ < auVar279._4_4_);
                  auVar183._8_8_ = 0;
                  in_XMM1 = ~auVar183 & auVar165 | auVar279 & auVar183;
                  iVar31 = in_XMM1._4_4_;
                  auVar279._4_4_ = iVar31;
                  auVar279._0_4_ = iVar31;
                  auVar279._8_4_ = iVar31;
                  auVar279._12_4_ = iVar31;
                  auVar222._0_4_ = -(uint)(iVar31 < in_XMM1._0_4_);
                  auVar222._4_4_ = 0;
                  auVar222._8_4_ = -(uint)(iVar31 < in_XMM1._8_4_);
                  auVar222._12_4_ = -(uint)(iVar31 < in_XMM1._12_4_);
                  in_XMM1 = in_XMM1 & auVar222;
                  in_XMM2 = ~auVar222 & auVar279 | in_XMM1;
                  puVar147._0_4_ = in_XMM2._0_4_;
                  puVar147._4_4_ = 0;
                  uVar113 = *(long *)((long)puVar100 + 8);
                  uVar111 = puVar144;
                }
                lVar116 = param_6 * 2;
                param_6 = *(long *)((long)puVar100 + 0x10);
                phVar81 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                            **)((long)puVar100 + 0x20);
                do {
                  uVar29 = *(ushort *)lVar34 << 8 | *(ushort *)lVar34 >> 8;
                  if ((int)puVar147 < (int)(uint)uVar29) {
                    puVar147._2_6_ = 0;
                    puVar147._0_2_ = uVar29;
                  }
                  lVar34 = lVar34 + 6;
                } while ((ulong)lVar34 < (pthread_mutex_t *)(lVar116 + uVar111));
              }
            } while ((int)in_R11 <= (int)puVar147);
            goto LAB_003f3ed0;
          }
        }
      }
      break;
    case 6:
      if ((pthread_mutex_t *)(param_4 + 0x24) <= (ulong)uVar49) {
        if (((byte)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)(uVar113 + 0xf) & 1) == 0) {
          if ((uVar113 - *(long *)((long)phVar32 + 8)) + 0x18U <=
              (ulong)*(uint *)&((__pthread_list_t *)((long)phVar32 + 0x18))->__prev) {
            uVar88._0_4_ = *(uint *)(uVar113 + 0x14);
            *(undefined8 *)((long)puVar100 + -8) = 0x3f4d1c;
            uVar33 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                               ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                ((ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                                         ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) +
                                uVar113),(long)phVar32);
            if (((char)uVar33 != '\0') &&
               ((uVar113 - *(long *)((long)phVar32 + 8)) + 0x1cU <=
                (ulong)*(uint *)&((__pthread_list_t *)((long)phVar32 + 0x18))->__prev)) {
              uVar88._0_4_ = *(uint *)(uVar113 + 0x18);
              *(undefined8 *)((long)puVar100 + -8) = 0x3f4d4e;
              uVar33 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                                 ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                  ((ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                                           ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) +
                                  uVar113),(long)phVar32);
              cVar27 = (char)uVar33;
              auVar279 = extraout_XMM0_19;
              goto LAB_003f4dac;
            }
          }
        }
        else if ((uVar113 - *(long *)((long)phVar32 + 8)) + 0x18U <=
                 (ulong)*(uint *)&((__pthread_list_t *)((long)phVar32 + 0x18))->__prev) {
          uVar88._0_4_ = *(uint *)(uVar113 + 0x14);
          *(undefined8 *)((long)puVar100 + -8) = 0x3f4d7a;
          uVar33 = Lookup<OT::IntType<unsigned_int,4u>>::sanitize
                             ((Lookup<OT::IntType<unsigned_int,4u>> *)
                              ((ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                                       ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) +
                              uVar113),(long)phVar32);
          if (((char)uVar33 != '\0') &&
             ((uVar113 - *(long *)((long)phVar32 + 8)) + 0x1cU <=
              (ulong)*(uint *)&((__pthread_list_t *)((long)phVar32 + 0x18))->__prev)) {
            uVar88._0_4_ = *(uint *)(uVar113 + 0x18);
            *(undefined1 **)((long)puVar100 + -8) = &LAB_003f4dac;
            uVar33 = Lookup<OT::IntType<unsigned_int,4u>>::sanitize
                               ((Lookup<OT::IntType<unsigned_int,4u>> *)
                                ((ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                                         ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) +
                                uVar113),(long)phVar32);
            cVar27 = (char)uVar33;
            auVar279 = extraout_XMM0_20;
LAB_003f4dac:
            param_6 = *(long *)((long)puVar100 + 0x10);
            in_XMM7 = (undefined1  [16])0x0;
            if (cVar27 != '\0') {
              lVar116 = *(long *)((long)phVar32 + 8);
              uVar33 = (ulong)*(uint *)&((__pthread_list_t *)((long)phVar32 + 0x18))->__prev;
              if ((ulong)(uVar113 - lVar116) <= uVar33) {
                uVar88._0_4_ = *(uint *)(uVar113 + 0x1c);
                uVar88._0_4_ = (uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                               ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18;
                iVar31 = (int)*(undefined8 *)((long)phVar32 + 0x10);
                if ((uint)uVar88 <= iVar31 - uVar122) {
                  iVar121 = *(int *)param_6 - (uint)uVar88;
                  *(int *)param_6 = iVar121;
                  if (0 < iVar121) {
                    if (*(int *)(uVar113 + 8) == 0) goto LAB_003f3ed0;
                    if ((ulong)(uVar113 - lVar116) <= uVar33) {
                      uVar88._0_4_ = *(uint *)(uVar113 + 0x20);
                      uVar88._0_4_ = (uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                                     ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18;
                      if ((uint)uVar88 <= iVar31 - uVar122) {
                        iVar121 = iVar121 - (uint)uVar88;
                        *(int *)param_6 = iVar121;
                        goto joined_r0x003f4e19;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      break;
    case 7:
      switch(uVar64) {
      case 0:
        lVar116 = (ulong)*(uint *)((long)&UINT_005e02e8 + uVar33) * 4;
        uVar64 = (uint)lVar116;
        if ((int)((ulong)lVar116 >> 0x20) == 0) {
          uVar129 = &UNK_005e02b2;
          bVar153 = (ulong)((long)&UNK_005e02b2 - *(long *)(&UNK_005e02b8 + uVar33)) <
                    (ulong)*(uint *)(&UNK_005e02c8 + uVar33);
          bVar154 = (long)&UNK_005e02b2 - *(long *)(&UNK_005e02b8 + uVar33) ==
                    (ulong)*(uint *)(&UNK_005e02c8 + uVar33);
          goto code_r0x003f5005;
        }
        goto LAB_003f4fbb;
      default:
        goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1;
      case 2:
        uVar49 = (long)&UNK_005e02bc - *(long *)(&UNK_005e02b8 + uVar33);
        param_4._4_4_ = 0;
        param_4._0_4_ = *(uint *)(&UNK_005e02c8 + uVar33);
        goto code_r0x003f502d;
      case 4:
        goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_4;
      case 6:
        if ((ulong)((long)&UNK_005e02bc - *(long *)(&UNK_005e02b8 + uVar33)) <=
            (ulong)*(uint *)(&UNK_005e02c8 + uVar33)) goto LAB_003f5250;
        goto LAB_003f4fbb;
      case 8:
        if (((ulong)((long)&UNK_005e02b6 - *(long *)(&UNK_005e02b8 + uVar33)) <=
             (ulong)*(uint *)(&UNK_005e02c8 + uVar33)) &&
           (uVar113 = &UNK_005e02b6,
           (ulong)((long)&UNK_005e02b6 - *(long *)(&UNK_005e02b8 + uVar33)) <=
           (ulong)*(uint *)(&UNK_005e02c8 + uVar33))) goto code_r0x003f52cc;
        goto LAB_003f4fbb;
      case 10:
        goto LAB_003f4fbb;
      }
    case 8:
    case 10:
    case 0xc:
    case 0xe:
    case 0x10:
      return (pthread_mutex_t *)uVar49;
    case 9:
      bVar153 = (uint)param_4 < (uint)uVar88;
      bVar154 = (uint)param_4 == (uint)uVar88;
code_r0x003f5005:
      if ((!bVar153 && !bVar154) ||
         ((uint)(*(int *)(&UNK_005e02c0 + uVar33) - (int)uVar129) < uVar64)) goto LAB_003f4fbb;
      iVar31 = *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                               switchdataD_005e02cc + uVar33) - uVar64;
      *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                      switchdataD_005e02cc + uVar33) = iVar31;
LAB_003f528f:
      in_R11 = (uint *)CONCAT71((int7)((ulong)in_R11 >> 8),0 < iVar31);
      goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1;
    case 0xb:
code_r0x003f502d:
      if ((ulong)uVar49 <= (ulong)param_4) {
LAB_003f5250:
        if (((ulong)((long)&UNK_005e02bc - *(long *)(&UNK_005e02b8 + uVar33)) <=
             (ulong)*(uint *)(&UNK_005e02c8 + uVar33)) &&
           (iVar31 = -0x6388d73d, 0x9c7728c2 < *(int *)(&UNK_005e02c0 + uVar33) - 0x5e02bcU))
        goto LAB_003f5285;
      }
      goto LAB_003f4fbb;
    case 0xd:
      uVar88._0_4_ = CONCAT31((int3)(uVar64 >> 8),((char)uVar64 + '{') - bVar153);
      goto code_r0x003f5205;
    case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x11:
code_r0x003f52cc:
      iVar31 = 0x2c4f4;
      if (0x2c4f3 < (uint)(*(int *)(&UNK_005e02c0 + uVar33) - (int)uVar113)) {
LAB_003f5285:
        iVar31 = *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                                 switchdataD_005e02cc + uVar33) - iVar31;
        *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                        switchdataD_005e02cc + uVar33) = iVar31;
        goto LAB_003f528f;
      }
      goto LAB_003f4fbb;
    case 0x12:
      *(char *)param_4 =
           (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   *)param_4 + SUB81(uVar92,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1b:
    case 0x1c:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4d:
    case 0x4f:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x19:
      goto code_r0x003f7fe1;
    case 0x1a:
      goto LAB_003f807d;
    case 0x1d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2b:
      uVar113 = (pthread_mutex_t *)0xfe38;
      if (uVar64 == 0xfe38) goto _hb_ot_shape_switchD_003f8054_caseD_2015;
      goto LAB_003f807d;
    case 0x2c:
      goto code_r0x003f809d;
    case 0x30:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4e:
      uVar113 = (pthread_mutex_t *)0xfe47;
      if (uVar64 == 0xfe47) goto _hb_ot_shape_switchD_003f8054_caseD_2015;
      goto LAB_003f807d;
    case 0x50:
      uVar113 = (pthread_mutex_t *)0xfe16;
      if (uVar64 == 0xfe16) goto _hb_ot_shape_switchD_003f8054_caseD_2015;
      goto LAB_003f807d;
    case 0x6c:
      pcVar58 = (char *)(uVar49 & 0xffffffffffffffd0);
      cVar27 = (char)pcVar58;
      *pcVar58 = *pcVar58 + cVar27;
      *pcVar58 = *pcVar58 + cVar27;
      *pcVar58 = *pcVar58 + cVar27;
      pcVar58[-0x75] = pcVar58[-0x75] + (char)param_4;
      goto LAB_003f807d;
    case 0x6e:
      *(char *)uVar49 =
           (char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                   *)uVar49 + (char)uVar64;
      if (uVar122 == uVar64) goto _hb_ot_shape_switchD_003f8054_caseD_2015;
      goto LAB_003f807d;
    case 0x6f:
      goto code_r0x003f7e92;
    case 0x70:
      *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
        *)(uVar49 + -0x75) =
           (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
            )((char)*(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)(uVar49 + -0x75) + (char)param_4 + bVar153);
      goto code_r0x003f7e92;
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
      goto code_r0x003f7dec;
    case 0x81:
      goto LAB_003f7eeb;
    case 0x82:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x83:
    case 0x85:
                    /* WARNING (jumptable): Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
      DAT_005e02b0 = 0x46;
code_r0x003fd15b:
      *(undefined1 (*) [16])((long)puVar100 + 0xd4) = (undefined1  [16])0x0;
      *(undefined4 *)((long)puVar100 + 0xd0) = 0x25cc;
      *(undefined8 *)((long)puVar100 + -8) = 0x3fd183;
      _hb_glyph_info_set_unicode_props((uint *)((long)puVar100 + 0xd0),(long)phVar32);
      in_XMM1._8_8_ = extraout_XMM1_Qb_54;
      in_XMM1._0_8_ = extraout_XMM1_Qa_38;
      *(undefined2 *)((long)phVar32 + 0x5a) = 1;
      *(undefined4 *)((long)phVar32 + 100) = 0;
      lVar116 = *(long *)((long)phVar32 + 0x70);
      ((pthread_mutex_t *)((long)phVar32 + 0x78))->__align = lVar116;
      *(undefined4 *)((long)phVar32 + 0x5c) = 0;
      lVar119._4_4_ = 0;
      lVar119._0_4_ = *(uint *)((long)puVar100 + 0xd0);
      puVar147 = *(uint **)((long)puVar100 + 0xdc);
      uVar113._4_4_ = 0;
      uVar113._0_4_ = *(uint *)(lVar116 + 4);
      uVar92._4_4_ = 0;
      uVar92._0_4_ = *(uint *)(lVar116 + 8);
      if (1 < *(uint *)((long)phVar32 + 0x68)) {
        lVar116 = *(long *)((long)phVar32 + 0x80);
        (((pthread_mutex_t *)((long)phVar32 + 0x78))->__data).__lock = (int)lVar116;
        (((pthread_mutex_t *)((long)phVar32 + 0x78))->__data).__count =
             (int)((ulong)lVar116 >> 0x20);
        goto LAB_003fd1d6;
      }
      *(undefined8 *)((long)puVar100 + -8) = 0x3fe626;
      uVar129 = hb_buffer_t::enlarge((hb_buffer_t *)phVar32,1);
      if ((char)uVar129 != '\0') {
        lVar116._0_4_ = (((pthread_mutex_t *)((long)phVar32 + 0x78))->__data).__lock;
        lVar116._4_4_ = (((pthread_mutex_t *)((long)phVar32 + 0x78))->__data).__count;
        if (((pthread_mutex_t *)lVar116 == *(pthread_mutex_t **)((long)phVar32 + 0x70)) &&
           (uVar88._0_4_ = *(uint *)(*(long *)((long)puVar100 + 0x10) + 100),
           *(uint *)(*(long *)((long)puVar100 + 0x10) + 0x5c) < (uint)uVar88 + 1)) {
          uVar129 = *(long *)(*(long *)((long)puVar100 + 0x10) + 0x80);
          *(undefined8 *)(*(long *)((long)puVar100 + 0x10) + 0x78) = uVar129;
          if ((ulong)(uint)uVar88 == 0) {
            phVar32 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        **)((long)puVar100 + 0x10);
            lVar116 = uVar129;
          }
          else {
            *(undefined8 *)((long)puVar100 + -8) = 0x3fe670;
            memcpy((void *)uVar129,(void *)lVar116,(ulong)(uint)uVar88 * 0x14);
            phVar32 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                        **)((long)puVar100 + 0x10);
            lVar116._0_4_ = (((pthread_mutex_t *)((long)phVar32 + 0x78))->__data).__lock;
            lVar116._4_4_ = (((pthread_mutex_t *)((long)phVar32 + 0x78))->__data).__count;
          }
        }
        else {
          phVar32 = *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      **)((long)puVar100 + 0x10);
        }
        goto LAB_003fd1d6;
      }
      goto LAB_003fd1f6;
    default:
      if ((uVar64 & 0xd0ff0000) != 0) goto code_r0x003fd15b;
      goto LAB_003f7904;
    case 0x86:
      if (lVar116 < 0) goto LAB_003fd203;
LAB_003fd1d6:
      uVar33 = (ulong)*(uint *)((long)phVar32 + 100);
      *(int *)(lVar116 + uVar33 * 0x14) = (int)lVar119;
      *(int *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                *)(lVar116 + 4) + uVar33 * 0x14) = (int)uVar113;
      *(int *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                *)(lVar116 + 8) + uVar33 * 0x14) = (int)uVar92;
      *(uint **)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)(lVar116 + 0xc) + uVar33 * 0x14) = puVar147;
      *(int *)((long)phVar32 + 100) = *(int *)((long)phVar32 + 100) + 1;
LAB_003fd1f6:
      *(undefined8 *)((long)puVar100 + -8) = 0x3fd1fe;
      hb_buffer_t::sync((hb_buffer_t *)phVar32);
LAB_003f7904:
      if ((*(byte *)((long)phVar32 + 0xc0) & 1) == 0) goto LAB_003f790f;
      uVar88._0_4_ = *(uint *)((long)phVar32 + 0x60);
      uVar49._4_4_ = 0;
      uVar49._0_4_ = (uint)uVar88;
      if (*(int *)((long)phVar32 + 0x1c) == 0) {
        if ((uint)uVar88 == 0) goto LAB_003f790f;
        lVar116 = 0x24;
        uVar92 = (pthread_mutex_t *)0x0;
        goto LAB_003fa240;
      }
      if ((uint)uVar88 == 0) goto LAB_003f790f;
      lVar116 = 0x24;
      uVar47 = (pthread_mutex_t *)0x0;
      goto LAB_003f79a0;
    }
LAB_003f4e44:
    lVar116 = *(long *)(*(long *)((long)phVar32 + 0x30) + 0x10);
    *(long *)((long)phVar32 + 8) = lVar116;
    uVar88._0_4_ = *(uint *)(*(long *)((long)phVar32 + 0x30) + 0x18);
    *(ulong *)((long)phVar32 + 0x10) = lVar116 + (ulong)(uint)uVar88;
    *(uint *)((long)phVar32 + 0x18) = (uint)uVar88;
    goto LAB_003f4e62;
  }
LAB_003f3ed0:
  uVar88._0_4_ = *(uint *)uVar113;
  uVar118 = (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                    ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) + uVar113;
  uVar92 = *(long *)(*(long *)((long)phVar32 + 0x30) + 0x10);
  *(undefined8 *)((long)phVar32 + 8) = uVar92;
  uVar88._0_4_ = *(uint *)(*(long *)((long)phVar32 + 0x30) + 0x18);
  param_4._4_4_ = 0;
  param_4._0_4_ = (uint)uVar88;
  *(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
    **)((long)phVar32 + 0x10) =
       (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
        *)(param_4 + uVar92);
  *(uint *)((long)phVar32 + 0x18) = (uint)uVar88;
  uVar129._0_4_ = (int)*(undefined8 *)((long)puVar100 + 0x90) + 1;
  uVar129._4_4_ = 0;
  if ((uint)uVar129 != *(uint *)((long)puVar100 + 0x70)) {
LAB_003f3f0e:
    puVar144 = (uint *)(uVar118 + 0xc);
    lVar116 = uVar118;
    if ((ulong)((long)puVar144 - uVar92) <= (param_4 & 0xffffffff)) goto code_r0x003f3f23;
    goto LAB_003f4e62;
  }
  uVar29 = **(ushort **)((long)puVar100 + 0x80) << 8 | **(ushort **)((long)puVar100 + 0x80) >> 8;
  lVar116 = (long)phVar32;
code_r0x003f4e79:
  in_R11 = *(uint **)((long)puVar100 + 0x88);
  uVar90 = *(uint *)((long)puVar100 + 0x6c);
LAB_003f4e86:
  param_6._4_4_ = 0;
  param_6._0_4_ = uVar90;
  param_5._1_7_ = (undefined7)((ulong)param_5 >> 8);
  param_5._0_1_ = 1;
  if (uVar29 < 3) goto LAB_003f4f62;
  uVar33 = ((ulong)in_R11 & 0xffffffff) * 4;
  lVar34 = uVar33 & 0xffffffff;
  if (((int)(uVar33 >> 0x20) == 0) && ((ulong)(uVar118 - uVar92) <= (param_4 & 0xffffffff))) {
    unaff_R12D = *(int *)(lVar116 + 0x10);
    phVar32 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
               *)lVar116;
code_r0x003f4eb1:
    if (((uint)lVar34 <= (uint)(unaff_R12D - (int)uVar118)) &&
       (iVar31 = *(int *)((long)phVar32 + 0x1c) - (uint)lVar34,
       *(int *)((long)phVar32 + 0x1c) = iVar31, 0 < iVar31)) {
      if ((int)param_6 == 0) goto LAB_003f4f62;
      in_R10 = (ulong)*(uint *)((long)phVar32 + 0x38);
      lVar116 = uVar118;
code_r0x003f4ed5:
      in_R10 = (ulong)((int)in_R10 + 7U >> 3);
      param_6 = (ulong)in_R11 & 0xffffffff;
      uVar129 = lVar116 + 4;
      uVar113 = ((pthread_mutex_t *)0x0)->__size;
LAB_003f4efd:
      do {
        uVar88._0_4_ = *(uint *)(lVar116 + uVar113 * 4);
        if (1 < ((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                 ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) + 1) {
          uVar88 = uVar129 - uVar92;
          param_4 = param_4 & 0xffffffff;
code_r0x003f4f12:
          if ((ulong)uVar88 <= (ulong)param_4) {
            uVar88._0_4_ = *(uint *)(lVar116 + uVar113 * 4);
            lVar34 = (ulong)((uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 |
                             ((uint)uVar88 & 0xff00) << 8 | (uint)uVar88 << 0x18) + lVar116;
            uVar92 = *(undefined8 *)((long)phVar32 + 8);
            uVar88 = lVar34;
code_r0x003f4f2b:
            param_4._4_4_ = 0;
            param_4._0_4_ = *(uint *)((long)phVar32 + 0x18);
            if (((pthread_mutex_t *)(lVar34 - uVar92) <= (ulong)param_4) &&
               ((uint)in_R10 <= (uint)(*(int *)((long)phVar32 + 0x10) - (int)uVar88))) {
code_r0x003f4f4c:
              iVar31 = *(int *)((long)phVar32 + 0x1c) - (int)in_R10;
              *(int *)((long)phVar32 + 0x1c) = iVar31;
              if (0 < iVar31) goto LAB_003f4ef0;
            }
          }
          break;
        }
LAB_003f4ef0:
        uVar113 = uVar113 + 1;
        uVar129 = uVar129 + 4;
        if (param_6 == uVar113) goto LAB_003f4f62;
      } while( true );
    }
  }
LAB_003f4e62:
  param_5 = (uint *)0x0;
LAB_003f4f62:
  uVar49 = (ulong)param_5 & 0xffffffff;
code_r0x003f4f71:
  return (pthread_mutex_t *)uVar49;
LAB_003f4fbb:
  in_R11 = (uint *)0x0;
AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1:
  return (pthread_mutex_t *)((ulong)in_R11 & 0xffffffff);
code_r0x003f3b06:
  while( true ) {
    uVar90 = (uint)uVar111;
    uVar88._0_4_ = (uint)param_4 & 0xffff;
    iVar31 = 0;
    if ((short)uVar49 != 0) {
      uVar64 = (uint)(ushort)(*(ushort *)(uVar92 + 2) << 8 | *(ushort *)(uVar92 + 2) >> 8) *
               ((uint)uVar88 + (int)uVar129);
      iVar31 = 0;
      if (*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)(uVar92 + 0xc) + uVar64) == -1) {
        iVar31 = -(uint)(*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                     *)((long)phVar32 + 2) + uVar64) == -1);
      }
    }
    lVar34 = lVar119;
    if (uVar90 < iVar31 + (uint)uVar88) {
      lVar34 = (ulong)((ushort)(*(ushort *)(uVar92 + 2) << 8 | *(ushort *)(uVar92 + 2) >> 8) *
                      uVar90) + (long)phVar32;
    }
    uVar29 = *(ushort *)(lVar34 + 2);
    puVar100 = puVar69;
    if (uVar29 != 0xffff) {
      lVar116._2_6_ = 0;
      lVar116._0_2_ = uVar29 << 8 | uVar29 >> 8;
      puVar103 = (undefined8 *)puVar69;
code_r0x003f3b6a:
      uVar90 = (uint)uVar111;
      uVar29 = *(ushort *)lVar34;
      *(undefined8 *)((long)puVar103 + -8) = 0x3f3b7c;
      lVar34 = hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
               ::add_range((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                            *)puVar147,(uint)lVar116,(uint)(ushort)(uVar29 << 8 | uVar29 >> 8));
      uVar129 = (pthread_mutex_t *)0xffffffff;
      puVar100 = (uint *)puVar103;
    }
    if ((uint)puVar144 == uVar90) break;
    uVar49._2_6_ = 0;
    uVar49._0_2_ = *(ushort *)(uVar92 + 4);
    uVar111._0_4_ = uVar90 + 1;
    uVar111._4_4_ = 0;
LAB_003f3b00:
    param_4._0_2_ = (ushort)uVar49 << 8 | (ushort)uVar49 >> 8;
    param_4._2_6_ = 0;
    puVar69 = puVar100;
  }
code_r0x003f3df8:
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
  return (pthread_mutex_t *)lVar34;
code_r0x003f30b0:
  if (bVar153 || bVar154) {
    uVar29 = *(ushort *)(uVar88 + uVar42 * 2);
    uVar90 = (uint)(short)(uVar29 << 8 | uVar29 >> 8);
    uVar88._0_4_ = *(uint *)(uVar92 + 8);
    if ((uint)uVar88 == 0) {
      lVar34._4_4_ = 0;
      lVar34._0_4_ = uVar90;
    }
    else {
      phVar32._0_4_ =
           (uint)uVar88 >> 0x18 | ((uint)uVar88 & 0xff0000) >> 8 | ((uint)uVar88 & 0xff00) << 8 |
           (uint)uVar88 << 0x18;
      uVar88._0_4_ = (uint)phVar32 * 2;
      param_4._4_4_ = 0;
      param_4._0_4_ = (uint)uVar88;
      if ((!CARRY4((uint)phVar32,(uint)phVar32)) &&
         (uVar92 = uVar92 + (ulong)uVar90,
         (ulong)(uVar92 - *(long *)((long)puVar147 + 0x30)) <=
         (ulong)*(uint *)((long)puVar147 + 0x40))) {
        uVar90 = *(int *)((long)puVar147 + 0x38) - (int)uVar92;
        bVar153 = (uint)uVar88 < uVar90;
        bVar154 = (uint)uVar88 == uVar90;
code_r0x003f30f2:
        if ((bVar153 || bVar154) &&
           (iVar31 = *(int *)((long)puVar147 + 0x44) - (int)param_4,
           *(int *)((long)puVar147 + 0x44) = iVar31, 0 < iVar31)) {
          lVar34._0_4_ = (uint)(short)(*(ushort *)uVar92 << 8 | *(ushort *)uVar92 >> 8);
          lVar34._4_4_ = 0;
        }
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
  return (pthread_mutex_t *)lVar34;
code_r0x003f3c06:
  while( true ) {
    uVar90 = (uint)uVar111;
    uVar88._0_4_ = (uint)param_4 & 0xffff;
    iVar31 = 0;
    if ((short)uVar49 != 0) {
      uVar64 = (uint)(ushort)(*(ushort *)(uVar92 + 2) << 8 | *(ushort *)(uVar92 + 2) >> 8) *
               ((uint)uVar88 + (int)uVar129);
      iVar31 = 0;
      if (*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                      *)(uVar92 + 0xc) + uVar64) == -1) {
        iVar31 = -(uint)(*(short *)((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                                     *)((long)phVar32 + 2) + uVar64) == -1);
      }
    }
    lVar34 = lVar119;
    if (uVar90 < iVar31 + (uint)uVar88) {
      lVar34 = (ulong)((ushort)(*(ushort *)(uVar92 + 2) << 8 | *(ushort *)(uVar92 + 2) >> 8) *
                      uVar90) + (long)phVar32;
    }
    uVar29 = *(ushort *)(lVar34 + 2);
    uVar42 = puVar147;
    if (uVar29 != 0xffff) {
code_r0x003f3c63:
      lVar116._2_6_ = 0;
      lVar116._0_2_ = uVar29 << 8 | uVar29 >> 8;
      uVar88._2_6_ = 0;
      uVar88._0_2_ = *(ushort *)lVar34 << 8 | *(ushort *)lVar34 >> 8;
      puVar147 = (uint *)uVar42;
code_r0x003f3c77:
      uVar90 = (uint)uVar111;
      *(undefined8 *)((long)puVar69 + -8) = 0x3f3c7c;
      lVar34 = hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
               ::add_range((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                            *)uVar42,(uint)lVar116,(uint)uVar88);
      uVar129 = (pthread_mutex_t *)0xffffffff;
    }
    if ((uint)puVar144 == uVar90) break;
    uVar49._2_6_ = 0;
    uVar49._0_2_ = *(ushort *)(uVar92 + 4);
    uVar113._0_4_ = uVar90 + 1;
    uVar113._4_4_ = 0;
LAB_003f3c00:
    param_4._0_2_ = (ushort)uVar49 << 8 | (ushort)uVar49 >> 8;
    param_4._2_6_ = 0;
    uVar111 = uVar113;
  }
  return (pthread_mutex_t *)lVar34;
code_r0x003f809d:
  do {
    param_4 = param_4 + -1;
  } while ((pthread_mutex_t *)param_4 != (pthread_mutex_t *)0x0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
code_r0x003f2ba2:
                    /* WARNING: Could not recover jumptable at 0x003f2ba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppVar117 = (pthread_mutex_t *)(*(code *)(param_4 + (long)param_5))();
  return ppVar117;
code_r0x003f258f:
  ppVar117 = (pthread_mutex_t *)
             hb_buffer_t::_infos_set_glyph_flags
                       ((hb_buffer_t *)uVar129,lVar116,(uint)uVar88,(uint)param_4,(uint)param_5,
                        (uint)param_6);
  return ppVar117;
}


