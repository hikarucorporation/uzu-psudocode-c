// Function : apply
// Namespace: AAT:KerxTable_AAT__kerx_
// Entry    : 003ee0d0
// Prototype: undefined apply(hb_aat_apply_context_t * param_1, hb_vector_t * param_2)
// Body     : 003ee0d0 - 003f160a


/* WARNING: Instruction at (ram,0x003fd11e) overlaps instruction at (ram,0x003fd11d)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x003f25b4) */
/* WARNING: Removing unreachable block (ram,0x0041f4c9) */
/* WARNING: Removing unreachable block (ram,0x003f5044) */
/* WARNING: Removing unreachable block (ram,0x003f5311) */
/* WARNING: Removing unreachable block (ram,0x003f5328) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AAT::KerxTable<AAT::kerx>::apply(AAT::hb_aat_apply_context_t*,
   hb_vector_t<hb_pair_t<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 4u>,
   hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >,
   hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 4u>,
   hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > > >, false> const*) const */

undefined1  [16]
AAT::KerxTable<AAT::kerx>::apply
          (long param_1,undefined8 param_2,uint *param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  __pthread_internal_list **pp_Var3;
  short sVar4;
  uint uVar5;
  __pthread_internal_list *p_Var6;
  __pthread_internal_list *p_Var7;
  hb_font_t *this;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 uVar41;
  char cVar42;
  int iVar43;
  __pthread_internal_list *in_RAX;
  undefined8 *puVar44;
  Lookup<OT::IntType<unsigned_short,2u>> *pLVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined4 *puVar49;
  ushort *puVar50;
  void *pvVar51;
  int *piVar52;
  __pthread_internal_list *p_Var53;
  size_t sVar54;
  hb_buffer_t hVar55;
  ushort uVar56;
  uint uVar57;
  __pthread_internal_list *p_Var58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined1 (*pauVar63) [12];
  short *psVar64;
  uint *puVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  ulong uVar72;
  byte bVar73;
  ushort uVar75;
  undefined1 uVar74;
  undefined8 extraout_RDX;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  ulong uVar78;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  undefined8 uVar79;
  undefined8 extraout_RDX_13;
  undefined8 uVar80;
  undefined8 extraout_RDX_14;
  undefined8 extraout_RDX_15;
  undefined8 extraout_RDX_16;
  undefined8 extraout_RDX_17;
  undefined8 extraout_RDX_18;
  uint uVar81;
  undefined8 unaff_RBX;
  undefined8 uVar82;
  undefined2 *puVar83;
  undefined8 uVar84;
  hb_buffer_t *phVar85;
  pthread_mutex_t **pppVar86;
  uint uVar87;
  long lVar88;
  __pthread_internal_list *p_Var89;
  undefined8 uVar90;
  pthread_mutex_t *ppVar91;
  ulong uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined2 uVar96;
  uint uVar97;
  int iVar98;
  ulong uVar99;
  undefined8 uVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  hb_buffer_t *phVar103;
  long lVar104;
  ushort uVar105;
  ushort uVar106;
  undefined8 uVar107;
  Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
  *pLVar108;
  char *pcVar109;
  hb_buffer_t *phVar110;
  undefined8 uVar111;
  void *pvVar112;
  __pthread_internal_list *p_Var113;
  ushort *puVar114;
  undefined8 uVar115;
  __pthread_internal_list *p_Var116;
  ulong uVar117;
  ulong uVar118;
  byte *pbVar119;
  undefined8 uVar120;
  short *psVar121;
  int iVar122;
  undefined4 uVar123;
  undefined8 in_R10;
  undefined8 uVar124;
  undefined4 uVar125;
  int in_R11 [2];
  long lVar126;
  undefined8 uVar127;
  byte bVar128;
  pthread_mutex_t *ppVar129;
  undefined8 uVar130;
  uint *puVar131;
  ushort *puVar132;
  undefined8 uVar133;
  undefined8 uVar134;
  undefined8 uVar135;
  TrackData *pTVar136;
  bool bVar137;
  bool bVar138;
  unkbyte10 in_ST0;
  float fVar139;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  __pthread_internal_list *extraout_XMM0_Qa_02;
  __pthread_internal_list *extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_43;
  undefined8 extraout_XMM0_Qa_44;
  __pthread_internal_list in_XMM0;
  __pthread_internal_list extraout_XMM0;
  __pthread_internal_list extraout_XMM0_00;
  __pthread_internal_list extraout_XMM0_01;
  __pthread_internal_list *extraout_XMM0_Qb;
  __pthread_internal_list extraout_XMM0_02;
  __pthread_internal_list *extraout_XMM0_Qb_00;
  __pthread_internal_list *extraout_XMM0_Qb_01;
  __pthread_internal_list *extraout_XMM0_Qb_02;
  __pthread_internal_list extraout_XMM0_03;
  __pthread_internal_list extraout_XMM0_04;
  __pthread_internal_list extraout_XMM0_05;
  __pthread_internal_list *extraout_XMM0_Qb_03;
  __pthread_internal_list extraout_XMM0_06;
  __pthread_internal_list extraout_XMM0_07;
  __pthread_internal_list *extraout_XMM0_Qb_04;
  __pthread_internal_list extraout_XMM0_08;
  __pthread_internal_list *extraout_XMM0_Qb_05;
  __pthread_internal_list extraout_XMM0_09;
  __pthread_internal_list extraout_XMM0_10;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  __pthread_internal_list _Var144;
  undefined1 auVar145 [16];
  __pthread_internal_list extraout_XMM0_11;
  __pthread_internal_list extraout_XMM0_12;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  __pthread_internal_list _Var149;
  undefined1 auVar150 [16];
  __pthread_internal_list *extraout_XMM0_Qa_12;
  __pthread_internal_list *extraout_XMM0_Qa_13;
  __pthread_internal_list *extraout_XMM0_Qa_14;
  __pthread_internal_list *extraout_XMM0_Qa_15;
  __pthread_internal_list extraout_XMM0_13;
  __pthread_internal_list extraout_XMM0_14;
  __pthread_internal_list extraout_XMM0_15;
  __pthread_internal_list *extraout_XMM0_Qb_06;
  __pthread_internal_list *extraout_XMM0_Qb_07;
  __pthread_internal_list extraout_XMM0_16;
  __pthread_internal_list extraout_XMM0_17;
  __pthread_internal_list *extraout_XMM0_Qb_08;
  __pthread_internal_list *extraout_XMM0_Qb_09;
  __pthread_internal_list *extraout_XMM0_Qb_10;
  __pthread_internal_list extraout_XMM0_18;
  __pthread_internal_list extraout_XMM0_19;
  __pthread_internal_list *extraout_XMM0_Qb_11;
  __pthread_internal_list _Var151;
  undefined8 extraout_XMM0_Qa_28;
  undefined8 extraout_XMM0_Qa_41;
  undefined8 extraout_XMM0_Qa_16;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 extraout_XMM0_Qa_19;
  undefined8 extraout_XMM0_Qa_20;
  undefined8 extraout_XMM0_Qa_21;
  undefined8 extraout_XMM0_Qa_22;
  undefined8 extraout_XMM0_Qa_23;
  undefined8 extraout_XMM0_Qa_24;
  undefined8 extraout_XMM0_Qa_25;
  undefined8 extraout_XMM0_Qa_26;
  undefined8 extraout_XMM0_Qa_27;
  __pthread_internal_list extraout_XMM0_20;
  __pthread_internal_list extraout_XMM0_21;
  __pthread_internal_list *extraout_XMM0_Qb_12;
  __pthread_internal_list extraout_XMM0_22;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  __pthread_internal_list *extraout_XMM0_Qb_13;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined8 extraout_XMM0_Qa_29;
  undefined8 extraout_XMM0_Qa_30;
  undefined8 extraout_XMM0_Qa_31;
  undefined8 extraout_XMM0_Qa_32;
  undefined8 extraout_XMM0_Qa_33;
  undefined8 extraout_XMM0_Qa_34;
  undefined8 extraout_XMM0_Qa_35;
  int *extraout_XMM0_Qa_36;
  undefined8 extraout_XMM0_Qa_37;
  undefined8 extraout_XMM0_Qa_38;
  undefined8 extraout_XMM0_Qa_39;
  undefined8 extraout_XMM0_Qa_40;
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined8 extraout_XMM0_Qa_42;
  undefined8 extraout_XMM0_Qb_14;
  undefined1 extraout_XMM0_23 [16];
  undefined1 extraout_XMM0_24 [16];
  undefined8 extraout_XMM0_Qb_15;
  undefined8 extraout_XMM0_Qb_16;
  undefined8 extraout_XMM0_Qb_17;
  __pthread_internal_list extraout_XMM0_25;
  __pthread_internal_list *extraout_XMM0_Qb_18;
  __pthread_internal_list extraout_XMM0_26;
  undefined1 extraout_var [12];
  undefined1 auVar161 [16];
  __pthread_internal_list extraout_XMM0_27;
  __pthread_internal_list extraout_XMM0_28;
  ulong extraout_XMM1_Qa;
  ulong extraout_XMM1_Qa_00;
  ulong extraout_XMM1_Qa_01;
  __pthread_internal_list *extraout_XMM1_Qa_02;
  __pthread_internal_list *extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qa_05;
  undefined8 extraout_XMM1_Qa_06;
  __pthread_internal_list *extraout_XMM1_Qa_11;
  __pthread_internal_list *extraout_XMM1_Qa_12;
  __pthread_internal_list *extraout_XMM1_Qa_13;
  __pthread_internal_list *extraout_XMM1_Qa_14;
  __pthread_internal_list *extraout_XMM1_Qa_15;
  __pthread_internal_list *extraout_XMM1_Qa_16;
  __pthread_internal_list *extraout_XMM1_Qa_17;
  __pthread_internal_list *extraout_XMM1_Qa_18;
  __pthread_internal_list *extraout_XMM1_Qa_19;
  __pthread_internal_list *extraout_XMM1_Qa_20;
  __pthread_internal_list *extraout_XMM1_Qa_21;
  __pthread_internal_list *extraout_XMM1_Qa_22;
  __pthread_internal_list *extraout_XMM1_Qa_23;
  __pthread_internal_list *extraout_XMM1_Qa_24;
  __pthread_internal_list *extraout_XMM1_Qa_25;
  undefined8 extraout_XMM1_Qa_26;
  undefined8 extraout_XMM1_Qa_27;
  undefined8 extraout_XMM1_Qa_28;
  undefined8 extraout_XMM1_Qa_29;
  undefined8 extraout_XMM1_Qa_30;
  __pthread_internal_list *extraout_XMM1_Qa_31;
  undefined8 extraout_XMM1_Qa_32;
  ulong extraout_XMM1_Qa_33;
  undefined8 extraout_XMM1_Qa_34;
  undefined8 extraout_XMM1_Qa_35;
  undefined8 extraout_XMM1_Qa_36;
  undefined8 extraout_XMM1_Qa_37;
  undefined8 extraout_XMM1_Qa_38;
  __pthread_internal_list *extraout_XMM1_Qa_39;
  __pthread_internal_list *extraout_XMM1_Qa_40;
  __pthread_internal_list *extraout_XMM1_Qa_43;
  __pthread_internal_list *extraout_XMM1_Qa_07;
  __pthread_internal_list *extraout_XMM1_Qa_08;
  __pthread_internal_list *extraout_XMM1_Qa_09;
  __pthread_internal_list *extraout_XMM1_Qa_10;
  __pthread_internal_list *extraout_XMM1_Qa_44;
  undefined8 extraout_XMM1_Qa_45;
  __pthread_internal_list in_XMM1;
  __pthread_internal_list *extraout_XMM1_Qb;
  __pthread_internal_list *extraout_XMM1_Qb_00;
  __pthread_internal_list *extraout_XMM1_Qb_01;
  __pthread_internal_list *extraout_XMM1_Qb_02;
  __pthread_internal_list *extraout_XMM1_Qb_03;
  __pthread_internal_list *extraout_XMM1_Qb_04;
  __pthread_internal_list *extraout_XMM1_Qb_05;
  __pthread_internal_list *extraout_XMM1_Qb_06;
  __pthread_internal_list *extraout_XMM1_Qb_07;
  __pthread_internal_list *extraout_XMM1_Qb_08;
  __pthread_internal_list *extraout_XMM1_Qb_09;
  __pthread_internal_list *extraout_XMM1_Qb_10;
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  __pthread_internal_list *extraout_XMM1_Qb_11;
  __pthread_internal_list *extraout_XMM1_Qb_12;
  __pthread_internal_list *extraout_XMM1_Qb_13;
  __pthread_internal_list *extraout_XMM1_Qb_14;
  __pthread_internal_list *extraout_XMM1_Qb_15;
  __pthread_internal_list *extraout_XMM1_Qb_16;
  __pthread_internal_list *extraout_XMM1_Qb_17;
  __pthread_internal_list *extraout_XMM1_Qb_18;
  __pthread_internal_list *extraout_XMM1_Qb_19;
  __pthread_internal_list *extraout_XMM1_Qb_20;
  __pthread_internal_list *extraout_XMM1_Qb_21;
  __pthread_internal_list *extraout_XMM1_Qb_22;
  __pthread_internal_list *extraout_XMM1_Qb_23;
  __pthread_internal_list *extraout_XMM1_Qb_24;
  __pthread_internal_list *extraout_XMM1_Qb_25;
  __pthread_internal_list *extraout_XMM1_Qb_26;
  __pthread_internal_list *extraout_XMM1_Qb_27;
  __pthread_internal_list *extraout_XMM1_Qb_28;
  __pthread_internal_list *extraout_XMM1_Qb_29;
  __pthread_internal_list *extraout_XMM1_Qb_30;
  undefined8 extraout_XMM1_Qb_31;
  undefined8 extraout_XMM1_Qb_32;
  undefined8 extraout_XMM1_Qb_33;
  undefined1 auVar170 [16];
  undefined8 extraout_XMM1_Qb_34;
  undefined8 extraout_XMM1_Qb_35;
  undefined8 extraout_XMM1_Qb_36;
  undefined8 extraout_XMM1_Qb_37;
  undefined8 extraout_XMM1_Qb_38;
  undefined8 extraout_XMM1_Qb_39;
  undefined1 auVar171 [16];
  __pthread_internal_list *extraout_XMM1_Qb_40;
  undefined1 auVar172 [16];
  __pthread_internal_list *extraout_XMM1_Qb_41;
  undefined8 extraout_XMM1_Qb_42;
  undefined8 extraout_XMM1_Qb_43;
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined8 extraout_XMM1_Qa_41;
  undefined8 extraout_XMM1_Qa_42;
  undefined8 extraout_XMM1_Qb_44;
  undefined8 extraout_XMM1_Qb_45;
  undefined8 extraout_XMM1_Qb_46;
  __pthread_internal_list *extraout_XMM1_Qb_47;
  __pthread_internal_list *extraout_XMM1_Qb_48;
  undefined8 extraout_XMM1_Qb_49;
  undefined8 extraout_XMM1_Qb_50;
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  __pthread_internal_list *extraout_XMM1_Qb_51;
  __pthread_internal_list *extraout_XMM1_Qb_52;
  __pthread_internal_list *extraout_XMM1_Qb_53;
  undefined8 extraout_XMM1_Qb_54;
  undefined8 extraout_XMM1_Qb_55;
  undefined1 auVar178 [14];
  __pthread_internal_list in_XMM2;
  undefined1 auVar182 [16];
  undefined1 auVar185 [16];
  undefined1 auVar184 [16];
  undefined1 auVar183 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar179 [14];
  undefined1 auVar193 [16];
  undefined1 auVar192 [16];
  undefined1 auVar191 [16];
  undefined1 auVar190 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar180 [14];
  undefined1 auVar199 [16];
  undefined1 auVar198 [16];
  undefined1 auVar197 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar181 [14];
  undefined1 auVar206 [16];
  undefined1 auVar205 [16];
  undefined1 auVar204 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [14];
  undefined1 in_XMM3 [16];
  undefined1 auVar217 [16];
  undefined1 auVar220 [16];
  undefined1 auVar219 [16];
  undefined1 auVar218 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar214 [14];
  undefined1 auVar227 [16];
  undefined1 auVar226 [16];
  undefined1 auVar225 [16];
  undefined1 auVar228 [16];
  undefined1 auVar215 [14];
  undefined1 auVar231 [16];
  undefined1 auVar230 [16];
  undefined1 auVar229 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar216 [14];
  undefined1 auVar238 [16];
  undefined1 auVar237 [16];
  undefined1 auVar236 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  __pthread_internal_list in_XMM4;
  undefined1 auVar251 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  __pthread_internal_list in_XMM6;
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  __pthread_internal_list in_XMM7;
  undefined1 in_XMM8 [16];
  int in_XMM9_Da;
  int in_XMM9_Db;
  int in_XMM9_Dc;
  int in_XMM9_Dd;
  int in_XMM10_Da;
  int in_XMM10_Db;
  int in_XMM10_Dc;
  int in_XMM10_Dd;
  __pthread_internal_list in_XMM11;
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
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  pthread_mutex_t *ppStackY_2b0;
  pthread_mutex_t *ppStackY_2a8;
  pthread_mutex_t *ppStackY_2a0;
  undefined1 uVar283;
  __pthread_internal_list *in_stack_fffffffffffffd78;
  uint uStack_280;
  uint uStack_27c;
  undefined4 local_278;
  uint uStack_274;
  ushort uStack_270;
  undefined2 uStack_26e;
  undefined4 uStack_26c;
  undefined8 uStack_268;
  uint uStack_260;
  uint uStack_25c;
  uint uStack_258;
  undefined4 uStack_254;
  uint uStack_250;
  undefined4 uStack_24c;
  uint uStack_248;
  undefined4 uStack_244;
  uint uStack_240;
  uint auStack_23c [5];
  uint uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  uint uStack_218;
  undefined1 auStack_214 [12];
  int local_208 [2];
  __pthread_internal_list *p_Stack_200;
  int *local_1f8;
  undefined1 auStack_1f0 [9];
  char cStack_1e7;
  bool bStack_1e6;
  char cStack_1e5;
  char cStack_1e4;
  undefined3 uStack_1e3;
  uint uStack_1e0;
  uint uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  uint uStack_1d0;
  undefined1 uStack_1cc;
  undefined1 uStack_1cb;
  undefined2 uStack_1ca;
  uint *puStack_1c8;
  uint uStack_1c0;
  undefined2 uStack_1bc;
  undefined8 uStack_1b8;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  char cStack_1a8;
  char cStack_1a7;
  char cStack_1a6;
  char cStack_1a5;
  uint uStack_1a4;
  undefined1 auStack_1a0 [9];
  byte bStack_197;
  bool bStack_196;
  byte bStack_195;
  char cStack_194;
  undefined3 uStack_193;
  undefined1 auStack_190 [16];
  int iStack_180;
  uint uStack_178;
  hb_ot_apply_context_t *phStack_168;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined1 uStack_158;
  undefined1 uStack_157;
  undefined1 uStack_156;
  byte bStack_155;
  undefined1 uStack_154;
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  uint uStack_138;
  int iStack_130;
  undefined8 uStack_118;
  hb_sanitize_context_t ahStack_110 [16];
  void *pvStack_100;
  uint uStack_dc;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  __pthread_internal_list *p_Stack_b8;
  ushort *puStack_b0;
  undefined8 local_a8;
  ulong local_a0;
  int aiStack_98 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  uint uStack_80;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  byte bStack_78;
  undefined8 uStack_70;
  uint uStack_60;
  uint uStack_5c;
  int local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  int local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  uint local_38;
  undefined4 uStack_34;
  
  pppVar86 = (pthread_mutex_t **)(auStack_23c + -0x13);
  uVar107 = ((__pthread_internal_list *)(param_2 + 0x20))->__prev;
  uVar127._0_4_ = *(uint *)&((__pthread_internal_list *)(uVar107 + 0x60))->__prev;
  uVar120._4_4_ = 0;
  uVar120._0_4_ = (uint)uVar127;
  auStack_214._4_8_ = param_3;
  if ((*(byte *)(uVar107 + 0x18) & 0x40) == 0) {
LAB_003ee0fc:
    if (0x1f < (uint)uVar127) {
      in_XMM0.__next._0_4_ = 0xffffffff;
      in_XMM0.__prev = (__pthread_internal_list *)0xffffffffffffffff;
      in_XMM0.__next._4_4_ = 0xffffffff;
      *(__pthread_internal_list *)(param_2 + 0x80) = in_XMM0;
      ((__pthread_internal_list *)(param_2 + 0x90))->__prev =
           (__pthread_internal_list *)0xffffffffffffffff;
      *(undefined4 *)(param_2 + 0xe4) = 0;
      uVar127._0_4_ = *(uint *)(param_1 + 4);
      goto joined_r0x003ee14e;
    }
    if ((pthread_mutex_t *)uVar120 == (pthread_mutex_t *)0x0) goto LAB_003ee2f1;
    in_R10 = ((__pthread_internal_list *)(uVar107 + 0x70))->__prev;
    param_6._0_4_ = (uint)uVar127 - 1;
    param_6._4_4_ = 0;
    uVar100 = in_R10;
    if ((uint)param_6 < 3) {
      p_Var58 = (__pthread_internal_list *)0x0;
    }
    else {
      uVar80._0_4_ = (uint)uVar127 & 0xfffffffc;
      p_Var58 = (__pthread_internal_list *)0x0;
      do {
        uVar57 = *(uint *)(uVar100 + 0x14) >> 4;
        unaff_RBX._4_4_ = 0;
        unaff_RBX._0_4_ = uVar57;
        p_Var58 = (__pthread_internal_list *)
                  ((ulong)p_Var58 | 1L << ((ulong)(*(uint *)uVar100 >> 4) & 0x3f) |
                   1L << ((ulong)(byte)(char)uVar57 & 0x3f) |
                   1L << ((ulong)((uint)(((pthread_mutex_t *)(uVar100 + 0x28))->__data).__lock >> 4)
                         & 0x3f) | 1L << ((ulong)(*(uint *)(uVar100 + 0x3c) >> 4) & 0x3f));
        uVar100 = uVar100 + 0x50;
        uVar80._0_4_ = (uint)uVar80 - 4;
      } while ((uint)uVar80 != 0);
    }
    if (((uint)uVar127 & 3) != 0) {
      lVar88 = 0;
      do {
        uVar80._0_4_ = *(uint *)(uVar100 + lVar88) >> 4;
        unaff_RBX._4_4_ = 0;
        unaff_RBX._0_4_ = (uint)uVar80;
        p_Var58 = (__pthread_internal_list *)
                  ((ulong)p_Var58 | 1L << ((ulong)(byte)(char)(uint)uVar80 & 0x3f));
        lVar88 = lVar88 + 0x14;
      } while (((uint)uVar127 & 3) * 0x14 != (int)lVar88);
    }
    auStack_214._4_8_ = in_R10;
    if ((uint)param_6 < 3) {
      uVar99 = 0;
    }
    else {
      uVar80._0_4_ = (uint)uVar127 & 0xfffffffc;
      uVar99 = 0;
      do {
        unaff_RBX._1_1_ = '\0';
        unaff_RBX._2_1_ = '\0';
        unaff_RBX._3_1_ = '\0';
        unaff_RBX._4_1_ = '\0';
        unaff_RBX._5_1_ = '\0';
        unaff_RBX._6_1_ = '\0';
        unaff_RBX._7_1_ = '\0';
        unaff_RBX._0_1_ = *(hb_buffer_t *)auStack_214._4_8_;
        in_RAX = (__pthread_internal_list *)(ulong)(byte)*(hb_buffer_t *)(auStack_214._4_8_ + 0x3c);
        uVar99 = uVar99 | 1L << ((ulong)(byte)*(hb_buffer_t *)auStack_214._4_8_ & 0x3f) |
                 1L << ((ulong)(byte)*(hb_buffer_t *)(auStack_214._4_8_ + 0x14) & 0x3f) |
                 1L << ((ulong)(byte)((pthread_mutex_t *)(auStack_214._4_8_ + 0x28))->__size[0] &
                       0x3f) | 1L << ((ulong)in_RAX & 0x3f);
        auStack_214._4_8_ = auStack_214._4_8_ + 0x50;
        uVar80._0_4_ = (uint)uVar80 - 4;
      } while ((uint)uVar80 != 0);
    }
    if (((uint)uVar127 & 3) != 0) {
      unaff_RBX = ((pthread_mutex_t *)0x0)->__size;
      do {
        in_RAX = (__pthread_internal_list *)
                 (ulong)(byte)*(hb_buffer_t *)(unaff_RBX + auStack_214._4_8_);
        uVar99 = uVar99 | 1L << ((ulong)in_RAX & 0x3f);
        unaff_RBX = unaff_RBX + 0x14;
      } while (((uint)uVar127 & 3) * 0x14 != (int)unaff_RBX);
    }
    if ((uint)param_6 < 3) {
      p_Var89 = (__pthread_internal_list *)0x0;
    }
    else {
      auStack_214._4_4_ = (uint)uVar127 & 0xfffffffc;
      auStack_214._8_4_ = 0;
      p_Var89 = (__pthread_internal_list *)0x0;
      do {
        uVar80._0_4_ = *(uint *)(in_R10 + 0x14) >> 9;
        unaff_RBX._4_4_ = 0;
        unaff_RBX._0_4_ = (uint)uVar80;
        in_RAX = (__pthread_internal_list *)(ulong)(*(uint *)(in_R10 + 0x3c) >> 9);
        p_Var89 = (__pthread_internal_list *)
                  ((ulong)p_Var89 | 1L << ((ulong)(*(uint *)in_R10 >> 9) & 0x3f) |
                   1L << ((ulong)(byte)(char)(uint)uVar80 & 0x3f) |
                   1L << ((ulong)((uint)(((pthread_mutex_t *)(in_R10 + 0x28))->__data).__lock >> 9)
                         & 0x3f) | 1L << ((ulong)in_RAX & 0x3f));
        in_R10 = in_R10 + 0x50;
        auStack_214._4_4_ = auStack_214._4_4_ - 4;
        auStack_214._8_4_ = 0;
      } while (auStack_214._4_4_ != 0);
    }
    if (((uint)uVar127 & 3) != 0) {
      uVar120 = (ulong)((uint)uVar127 & 3) * 4;
      auStack_214._4_8_ = (ulong)((uint)uVar127 & 3) * 0x14;
      unaff_RBX = (pthread_mutex_t *)0x0;
      do {
        in_RAX = (__pthread_internal_list *)(ulong)(*(uint *)(unaff_RBX + in_R10) >> 9);
        p_Var89 = (__pthread_internal_list *)((ulong)p_Var89 | 1L << ((ulong)in_RAX & 0x3f));
        unaff_RBX = unaff_RBX + 0x14;
      } while (auStack_214._4_4_ != (int)unaff_RBX);
    }
  }
  else {
    *(byte *)&((__pthread_internal_list *)(uVar107 + 0xc0))->__prev =
         *(byte *)&((__pthread_internal_list *)(uVar107 + 0xc0))->__prev | 0x20;
    if ((pthread_mutex_t *)uVar120 != (pthread_mutex_t *)0x0) {
      in_RAX = ((__pthread_internal_list *)(uVar107 + 0x70))->__prev;
      if ((hb_buffer_t *)(uVar120 + -1) < (hb_buffer_t *)0x3) {
        auStack_214._4_8_ = (pthread_mutex_t *)0x0;
      }
      else {
        p_Var58 = in_RAX + 4;
        auStack_214._4_8_ = &((pthread_mutex_t *)0x0)->__data;
        do {
          pbVar119 = (byte *)((long)&p_Var58[-4].__prev + 4);
          *pbVar119 = *pbVar119 | 2;
          *(byte *)&p_Var58[-3].__next = *(byte *)&p_Var58[-3].__next | 2;
          pbVar119 = (byte *)((long)&p_Var58[-2].__next + 4);
          *pbVar119 = *pbVar119 | 2;
          *(byte *)&p_Var58->__prev = *(byte *)&p_Var58->__prev | 2;
          auStack_214._4_8_ = auStack_214._4_8_ + 4;
          p_Var58 = p_Var58 + 5;
        } while ((pthread_mutex_t *)(ulong)((uint)uVar127 & 0xfffffffc) !=
                 (pthread_mutex_t *)auStack_214._4_8_);
      }
      if ((ulong)((uint)uVar127 & 3) != 0) {
        in_RAX = (__pthread_internal_list *)((long)in_RAX + auStack_214._4_8_ * 0x14 + 4);
        auStack_214._4_8_ = ((pthread_mutex_t *)0x0)->__size;
        do {
          phVar103 = (hb_buffer_t *)((long)&in_RAX->__prev + auStack_214._4_8_);
          *phVar103 = (hb_buffer_t)((byte)*phVar103 | 2);
          auStack_214._4_8_ = auStack_214._4_8_ + 0x14;
        } while ((pthread_mutex_t *)((ulong)((uint)uVar127 & 3) * 0x14) !=
                 (pthread_mutex_t *)auStack_214._4_8_);
      }
      goto LAB_003ee0fc;
    }
LAB_003ee2f1:
    p_Var89 = (__pthread_internal_list *)0x0;
    uVar99 = 0;
    p_Var58 = (__pthread_internal_list *)0x0;
  }
  ((__pthread_internal_list *)(param_2 + 0x80))->__prev = p_Var58;
  *(ulong *)(param_2 + 0x88) = uVar99;
  ((__pthread_internal_list *)(param_2 + 0x90))->__prev = p_Var89;
  *(undefined4 *)(param_2 + 0xe4) = 0;
  uVar127._0_4_ = *(uint *)(param_1 + 4);
joined_r0x003ee14e:
  if ((uint)uVar127 == 0) {
LAB_003f159f:
    auVar265[8] = (char)auStack_214._4_8_;
    auVar265[9] = (char)((ulong)auStack_214._4_8_ >> 8);
    auVar265[10] = (char)((ulong)auStack_214._4_8_ >> 0x10);
    auVar265[0xb] = (char)((ulong)auStack_214._4_8_ >> 0x18);
    auVar265[0xc] = (char)((ulong)auStack_214._4_8_ >> 0x20);
    auVar265[0xd] = (char)((ulong)auStack_214._4_8_ >> 0x28);
    auVar265[0xe] = (char)((ulong)auStack_214._4_8_ >> 0x30);
    auVar265[0xf] = (char)((ulong)auStack_214._4_8_ >> 0x38);
    auVar265._0_8_ = in_RAX;
    return auVar265;
  }
  uVar80._0_4_ = (uint)uVar127 >> 0x18 | ((uint)uVar127 & 0xff0000) >> 8 |
                 ((uint)uVar127 & 0xff00) << 8 | (uint)uVar127 << 0x18;
  uVar127 = param_1 + 8;
  local_a8 = param_2 + 0xb0;
  local_50 = (pthread_mutex_t *)(param_2 + 200);
  local_38 = (uint)uVar80 - 1;
  uStack_34 = 0;
  _local_58 = param_2 + 0x30;
  ppVar129 = (pthread_mutex_t *)(ulong)(uint)uVar80;
  if ((uint)uVar80 < 2) {
    ppVar129 = (pthread_mutex_t *)0x1;
  }
  uVar99 = 0;
  auStack_214._4_8_ = ((pthread_mutex_t *)0x0)->__size;
  local_a0 = 0;
  local_278 = (undefined4)param_2;
  uStack_274 = SUB84(param_2,4);
  local_48 = (int)ppVar129;
  uStack_44 = 0;
  local_40 = param_3;
  do {
    uVar57 = (uint)in_stack_fffffffffffffd78;
    uVar80._0_4_ = *(uint *)(uVar127 + 4);
    bVar137 = ((uint)uVar80 & 0x80) == 0;
    unaff_RBX._0_1_ = bVar137;
    if (((*(uint *)(uVar107 + 0x38) & 0xfffffffe) != 4) == bVar137) goto LAB_003f1015;
    uStack_26c = CONCAT13((*(uint *)(uVar107 + 0x38) & 0xfffffffd) != 5,(undefined3)uStack_26c);
    uVar100 = ((__pthread_internal_list *)(param_2 + 0x10))->__prev;
    uVar283 = SUB81(in_stack_fffffffffffffd78,0);
    bVar137 = hb_buffer_t::message
                        (in_XMM0.__prev,in_XMM1.__prev,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,
                         in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,(hb_buffer_t *)uVar107,uVar100,
                         "start subtable %u",uVar99,uVar120,param_6,uVar283);
    uVar29._4_4_ = uStack_274;
    uVar29._0_4_ = local_278;
    uVar28._4_4_ = uStack_274;
    uVar28._0_4_ = local_278;
    uVar27._4_4_ = uStack_274;
    uVar27._0_4_ = local_278;
    uVar26._4_4_ = uStack_274;
    uVar26._0_4_ = local_278;
    uVar25._4_4_ = uStack_274;
    uVar25._0_4_ = local_278;
    uVar24._4_4_ = uStack_274;
    uVar24._0_4_ = local_278;
    uVar23._4_4_ = uStack_274;
    uVar23._0_4_ = local_278;
    uVar21._4_4_ = uStack_274;
    uVar21._0_4_ = local_278;
    uVar82._4_4_ = uStack_274;
    uVar82._0_4_ = local_278;
    uVar102._4_4_ = uStack_274;
    uVar102._0_4_ = local_278;
    in_XMM0 = extraout_XMM0;
    if (!bVar137) goto LAB_003f1015;
    uVar90._0_4_ = ((uint)uVar80 & 0x10) >> 4;
    uVar90._4_4_ = 0;
    bVar73 = uStack_26c._3_1_ ^ (byte)(uint)uVar90;
    uStack_26c = CONCAT13(bVar73,(undefined3)uStack_26c);
    if (((local_a0 & 1) == 0) && (((byte)*(hb_buffer_t *)(uVar127 + 4) & 0x40) != 0)) {
      p_Var58 = ((__pthread_internal_list *)(param_2 + 0x20))->__prev;
      uVar80._0_4_ = *(uint *)&p_Var58[6].__prev;
      local_a0 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
      if ((uint)uVar80 != 0) {
        p_Var58 = p_Var58[8].__prev;
        if ((uint)uVar80 == 1) {
          ppVar129 = (pthread_mutex_t *)0x0;
        }
        else {
          uVar100._0_4_ = (uint)uVar80 & 0xfffffffe;
          uVar100._4_4_ = 0;
          uVar107 = (long)&p_Var58[2].__prev + 6;
          ppVar129 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
          do {
            *(hb_buffer_t *)(uVar107 + -0x14) = (hb_buffer_t)0x2;
            *(ushort *)(uVar107 + -0x16) =
                 (ushort)(((ulong)((__pthread_internal_list *)(param_2 + 0x20))->__prev[3].__next &
                          0xfffffffd) != 4) * 2 + -1;
            *(hb_buffer_t *)uVar107 = (hb_buffer_t)0x2;
            bVar137 = ((ulong)((__pthread_internal_list *)(param_2 + 0x20))->__prev[3].__next &
                      0xfffffffd) != 4;
            unaff_RBX._1_1_ = '\0';
            unaff_RBX._2_1_ = '\0';
            unaff_RBX._3_1_ = '\0';
            unaff_RBX._4_1_ = '\0';
            unaff_RBX._5_1_ = '\0';
            unaff_RBX._6_1_ = '\0';
            unaff_RBX._7_1_ = '\0';
            unaff_RBX._0_1_ = bVar137;
            uVar90._0_4_ = (uint)bVar137 * 2 - 1;
            uVar90._4_4_ = 0;
            *(short *)(uVar107 + -2) = (short)(uint)uVar90;
            ppVar129 = (pthread_mutex_t *)(ppVar129->__size + 2);
            uVar107 = uVar107 + 0x28;
          } while ((pthread_mutex_t *)uVar100 != ppVar129);
        }
        if (((uint)uVar80 & 1) != 0) {
          *(undefined1 *)((long)p_Var58 + (long)ppVar129 * 0x14 + 0x12) = 2;
          bVar137 = ((ulong)((__pthread_internal_list *)(param_2 + 0x20))->__prev[3].__next &
                    0xfffffffd) != 4;
          uVar100._1_1_ = '\0';
          uVar100._2_1_ = '\0';
          uVar100._3_1_ = '\0';
          uVar100._4_1_ = '\0';
          uVar100._5_1_ = '\0';
          uVar100._6_1_ = '\0';
          uVar100._7_1_ = '\0';
          uVar100._0_1_ = bVar137;
          *(ushort *)((long)p_Var58 + (long)ppVar129 * 0x14 + 0x10) = (ushort)bVar137 * 2 + -1;
        }
      }
    }
    if (bVar73 == 0) {
      p_Var58 = ((__pthread_internal_list *)(param_2 + 0x20))->__prev;
      uVar80._0_4_ = *(uint *)&p_Var58[6].__prev;
      if (1 < (uint)uVar80) {
        p_Var89 = p_Var58[7].__prev;
        uVar100 = (ulong)((uint)uVar80 - 1) - 1;
        uVar107 = (long)p_Var89 + (ulong)((uint)uVar80 - 1) * 0x14;
        uVar90 = ((pthread_mutex_t *)0x0)->__size;
        do {
          uVar125 = *(undefined4 *)&((__pthread_internal_list *)(uVar107 + 0x10))->__prev;
          local_1f8._0_1_ = (char)uVar125;
          local_1f8._1_1_ = (char)((uint)uVar125 >> 8);
          local_1f8._2_1_ = (char)((uint)uVar125 >> 0x10);
          local_1f8._3_1_ = (char)((uint)uVar125 >> 0x18);
          local_208 = *(int (*) [2])uVar107;
          p_Var113 = *(__pthread_internal_list **)(uVar107 + 8);
          p_Stack_200 = p_Var113;
          *(undefined4 *)&((__pthread_internal_list *)(uVar107 + 0x10))->__prev =
               *(undefined4 *)&p_Var89[1].__prev;
          p_Var116 = p_Var89->__next;
          *(__pthread_internal_list **)uVar107 = p_Var89->__prev;
          *(__pthread_internal_list **)(uVar107 + 8) = p_Var116;
          *(undefined4 *)&p_Var89[1].__prev = uVar125;
          p_Var89->__prev = (__pthread_internal_list *)local_208;
          p_Var89->__next = p_Var113;
          uVar90 = uVar90 + 1;
          unaff_RBX = uVar100 & 0xffffffff;
          p_Var89 = (__pthread_internal_list *)((long)&p_Var89[1].__prev + 4);
          uVar100 = uVar100 + -1;
          uVar107 = uVar107 + -0x14;
        } while ((ulong)uVar90 < (ulong)unaff_RBX);
      }
      if (*(char *)((long)&p_Var58[5].__next + 3) != '\0') {
        if (*(uint *)&p_Var58[6].__prev < (uint)uVar80) {
          uVar80._0_4_ = *(uint *)&p_Var58[6].__prev;
        }
        if (1 < (uint)uVar80) {
          p_Var58 = p_Var58[8].__prev;
          uVar99 = (ulong)((uint)uVar80 - 1);
          puVar44 = (undefined8 *)((long)p_Var58 + uVar99 * 0x14);
          uVar100 = (pthread_mutex_t *)0x0;
          do {
            uVar99 = uVar99 - 1;
            uVar125 = *(undefined4 *)(puVar44 + 2);
            local_1f8._0_1_ = (char)uVar125;
            local_1f8._1_1_ = (char)((uint)uVar125 >> 8);
            local_1f8._2_1_ = (char)((uint)uVar125 >> 0x10);
            local_1f8._3_1_ = (char)((uint)uVar125 >> 0x18);
            local_208 = (int  [2])*puVar44;
            p_Var89 = (__pthread_internal_list *)puVar44[1];
            p_Stack_200 = p_Var89;
            *(undefined4 *)(puVar44 + 2) = *(undefined4 *)&p_Var58[1].__prev;
            p_Var113 = p_Var58->__next;
            *puVar44 = p_Var58->__prev;
            puVar44[1] = p_Var113;
            *(undefined4 *)&p_Var58[1].__prev = uVar125;
            p_Var58->__prev = (__pthread_internal_list *)local_208;
            p_Var58->__next = p_Var89;
            uVar100 = uVar100 + 1;
            uVar107 = uVar99 & 0xffffffff;
            p_Var58 = (__pthread_internal_list *)((long)&p_Var58[1].__prev + 4);
            puVar44 = (undefined8 *)((long)puVar44 + -0x14);
          } while ((ulong)uVar100 < (ulong)uVar107);
        }
      }
    }
    if ((pthread_mutex_t *)param_3 == (pthread_mutex_t *)0x0) {
      _Var144.__next._0_4_ = 0xffffffff;
      _Var144.__prev = (__pthread_internal_list *)0xffffffffffffffff;
      _Var144.__next._4_4_ = 0xffffffff;
      *(__pthread_internal_list *)(local_a8 + 0x20) = _Var144;
      *(__pthread_internal_list *)(local_a8 + 0x10) = _Var144;
      *(__pthread_internal_list *)local_a8 = _Var144;
    }
    else {
      if ((ulong)auStack_214._4_8_ < (pthread_mutex_t *)(ulong)*(uint *)((long)param_3 + 4)) {
        p_Var58 = *(__pthread_internal_list **)((long)param_3 + 8) + auStack_214._4_8_ * 3;
      }
      else {
        p_Var58 = (__pthread_internal_list *)&_hb_NullPool;
      }
      ((__pthread_internal_list *)(local_a8 + 0x10))->__prev = p_Var58[1].__prev;
      p_Var89 = p_Var58->__next;
      *(__pthread_internal_list **)local_a8 = p_Var58->__prev;
      *(__pthread_internal_list **)(local_a8 + 8) = p_Var89;
      if ((ulong)auStack_214._4_8_ < (pthread_mutex_t *)(ulong)*(uint *)((long)param_3 + 4)) {
        p_Var58 = *(__pthread_internal_list **)((long)param_3 + 8) + auStack_214._4_8_ * 3;
      }
      else {
        p_Var58 = (__pthread_internal_list *)&_hb_NullPool;
      }
      *(__pthread_internal_list **)&(local_50->__data).__kind = p_Var58[2].__next;
      _Var144 = *(__pthread_internal_list *)&p_Var58[1].__next;
      (&local_50->__align)[0] = (long)_Var144.__prev;
      (&local_50->__align)[1] = (long)_Var144.__next;
      uVar100 = local_a8;
    }
    lVar88 = *(long *)(param_2 + 0x58);
    ppVar91 = *(pthread_mutex_t **)(lVar88 + 0x10);
    ((__pthread_internal_list *)(param_2 + 0x30))->__prev =
         (__pthread_internal_list *)&ppVar91->__data;
    uVar80._0_4_ = *(uint *)(lVar88 + 0x18);
    ppVar129 = (pthread_mutex_t *)(ppVar91->__size + (uint)uVar80);
    *(__pthread_mutex_s **)(param_2 + 0x38) = &ppVar129->__data;
    *(uint *)&((__pthread_internal_list *)(param_2 + 0x40))->__prev = (uint)uVar80;
    uVar80 = auStack_214._4_8_;
    if (((ulong)auStack_214._4_8_ < (pthread_mutex_t *)CONCAT44(uStack_34,local_38)) &&
       ((pthread_mutex_t *)uVar127 != (pthread_mutex_t *)0x0)) {
      uVar99 = (long)ppVar129 - uVar127;
      uVar80._1_7_ = auStack_214._5_7_;
      uVar80._0_1_ = ppVar129 < (ulong)uVar127 || uVar99 == 0;
      if ((ulong)uVar127 < ppVar91) {
        uVar80._1_1_ = auStack_214[5];
        uVar80._2_1_ = auStack_214[6];
        uVar80._3_1_ = auStack_214[7];
        uVar80._4_1_ = auStack_214[8];
        uVar80._5_1_ = auStack_214[9];
        uVar80._6_1_ = auStack_214[10];
        uVar80._7_1_ = auStack_214[0xb];
        uVar80._0_1_ = '\x01';
      }
      else if (ppVar129 >= (ulong)uVar127 && uVar99 != 0) {
        ((__pthread_internal_list *)(param_2 + 0x30))->__prev = (__pthread_internal_list *)uVar127;
        uVar87 = *(uint *)uVar127;
        uVar92 = (ulong)(uVar87 >> 0x18 | (uVar87 & 0xff0000) >> 8 | (uVar87 & 0xff00) << 8 |
                        uVar87 << 0x18);
        if (uVar92 < uVar99) {
          uVar99 = uVar92;
        }
        *(hb_buffer_t **)(param_2 + 0x38) = (hb_buffer_t *)(uVar127 + uVar99);
        *(int *)&((__pthread_internal_list *)(param_2 + 0x40))->__prev = (int)uVar99;
        goto LAB_003ee6b7;
      }
      _Var144.__prev = (__pthread_internal_list *)0x0;
      _Var144.__next = (__pthread_internal_list *)0x0;
      *(__pthread_internal_list *)_local_58 = (__pthread_internal_list)0x0;
      *(undefined4 *)&((__pthread_internal_list *)(_local_58 + 0x10))->__prev = 0;
    }
LAB_003ee6b7:
    uVar93 = _Var144.__prev;
    uVar87 = *(uint *)(uVar127 + 4);
    puVar131._4_4_ = 0;
    puVar131._0_4_ = uVar87;
    uVar95 = _uStack_280;
    auStack_23c._12_8_ = uVar127;
    if (6 < (byte)(uVar87 >> 0x18)) goto LAB_003f0ec0;
    uVar59 = &DAT_005e01f4;
    uVar99 = (ulong)*(int *)(&DAT_005e01f4 + (ulong)(uVar87 >> 0x18) * 4);
    bVar137 = 0xffffffffffa1fe0b < uVar99;
    auVar259._0_8_ = (long)&DAT_005e01f4 + uVar99;
    bVar138 = (pthread_mutex_t *)auVar259._0_8_ == (pthread_mutex_t *)0x0;
    bVar128 = (byte)uVar87;
    p_Var58 = in_XMM1.__prev;
    p_Var89 = in_XMM2.__prev;
    uVar67 = in_XMM3._0_8_;
    p_Var113 = in_XMM4.__prev;
    uVar47 = in_XMM5._0_8_;
    p_Var116 = in_XMM6.__prev;
    p_Var53 = in_XMM7.__prev;
    uVar76._1_7_ = SUB87(unaff_RBX,1);
    uVar97 = (uint)uVar100;
    iVar43 = (int)uVar120;
    uVar81 = (uint)uVar80;
    bVar73 = (byte)auVar259._0_8_;
    uVar101 = uVar100;
    uVar130 = puVar131;
    _Var149 = in_XMM4;
    uVar77 = uVar80;
    piVar52 = uStack_1b8;
    switch(uVar87 >> 0x18) {
    case 0:
      if ((*(byte *)(*(long *)(param_2 + 8) + 0xa8) & 1) != 0) {
        uVar87 = uVar87 << 0x18;
        if ((uVar87 & 0x10000000) == 0) {
          p_Var6 = ((__pthread_internal_list *)(param_2 + 0x80))->__prev;
          if (((ulong)((__pthread_internal_list *)(param_2 + 0xb0))->__prev & (ulong)p_Var6) != 0) {
            if ((*(ulong *)(param_2 + 0xb8) & *(ulong *)(param_2 + 0x88)) != 0) {
              p_Var7 = ((__pthread_internal_list *)(param_2 + 0x90))->__prev;
              if ((((((ulong)((__pthread_internal_list *)(param_2 + 0xc0))->__prev & (ulong)p_Var7)
                     != 0) && ((((pthread_mutex_t *)(param_2 + 200))->__align & (ulong)p_Var6) != 0)
                   ) && (((ulong)((__pthread_internal_list *)(param_2 + 0xd0))->__prev &
                         *(ulong *)(param_2 + 0x88)) != 0)) &&
                 (((ulong)p_Var7 & *(ulong *)(param_2 + 0xd8)) != 0)) {
                _uStack_248 = ((__pthread_internal_list *)(param_2 + 0x10))->__prev;
                uStack_268 = ((__pthread_internal_list *)(param_2 + 0x20))->__prev;
                uStack_280 = *(uint *)(*(long *)(param_2 + 8) + 0xa0);
                bVar137 = hb_buffer_t::message
                                    (uVar93,p_Var58,p_Var89,uVar67,p_Var113,uVar47,p_Var116,p_Var53,
                                     (hb_buffer_t *)uStack_268,_uStack_248,"start kern",p_Var6,
                                     uVar120,param_6,uVar283);
                uVar93 = extraout_XMM0_Qa;
                uVar95 = _uStack_280;
                if (bVar137) {
                  if (((byte)*(hb_buffer_t *)(uStack_268 + 0x18) & 0x40) != 0) {
                    uVar127._0_4_ =
                         *(uint *)&((__pthread_internal_list *)(uStack_268 + 0x60))->__prev;
                    *(byte *)&((__pthread_internal_list *)(uStack_268 + 0xc0))->__prev =
                         *(byte *)&((__pthread_internal_list *)(uStack_268 + 0xc0))->__prev | 0x20;
                    if ((ulong)(uint)uVar127 != 0) {
                      p_Var58 = ((__pthread_internal_list *)(uStack_268 + 0x70))->__prev;
                      if ((ulong)(uint)uVar127 - 1 < 3) {
                        uVar99 = 0;
                      }
                      else {
                        p_Var89 = p_Var58 + 4;
                        uVar99 = 0;
                        do {
                          pbVar119 = (byte *)((long)&p_Var89[-4].__prev + 4);
                          *pbVar119 = *pbVar119 | 2;
                          *(byte *)&p_Var89[-3].__next = *(byte *)&p_Var89[-3].__next | 2;
                          pbVar119 = (byte *)((long)&p_Var89[-2].__next + 4);
                          *pbVar119 = *pbVar119 | 2;
                          *(byte *)&p_Var89->__prev = *(byte *)&p_Var89->__prev | 2;
                          uVar99 = uVar99 + 4;
                          p_Var89 = p_Var89 + 5;
                        } while (((uint)uVar127 & 0xfffffffc) != uVar99);
                      }
                      param_2._4_4_ = uStack_274;
                      param_2._0_4_ = local_278;
                      if ((ulong)((uint)uVar127 & 3) != 0) {
                        lVar88 = 0;
                        do {
                          pbVar119 = (byte *)((long)p_Var58 + lVar88 + uVar99 * 0x14 + 4);
                          *pbVar119 = *pbVar119 | 2;
                          lVar88 = lVar88 + 0x14;
                        } while ((ulong)((uint)uVar127 & 3) * 0x14 != lVar88);
                      }
                    }
                  }
                  puVar49 = &_hb_NullPool;
                  OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                            ((hb_ot_apply_context_t *)local_208,1,_uStack_248,
                             (undefined4 *)uStack_268,
                             (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
                  auVar259 = _auStack_1f0;
                  uStack_c0 = 0xffffffff;
                  uVar76._0_1_ = uStack_d0._6_1_;
                  cStack_1a5 = uStack_d0._7_1_;
                  if (iStack_180 != 0) {
                    cStack_1a5 = '\0';
                  }
                  auVar34._8_8_ = 0;
                  auVar34._0_8_ = extraout_XMM1_Qa;
                  auVar256 = auVar34 << 0x40;
                  auVar38._8_8_ = 0;
                  auVar38._0_8_ = extraout_XMM1_Qa;
                  uVar120._1_7_ = (undefined7)((ulong)puVar49 >> 8);
                  uVar120._0_1_ = uStack_d0._5_1_ != '\0';
                  cStack_1a6 = iStack_180 == 1;
                  uStack_d4 = 8;
                  uStack_1b8 = local_208;
                  local_1f8 = uStack_1b8;
                  puStack_1c8 = (uint *)CONCAT44(puStack_1c8._4_4_,
                                                 *(undefined4 *)(phStack_168 + 0x60));
                  uStack_1e0 = 0;
                  uStack_1dc = 0;
                  uStack_1d8 = 0;
                  uStack_1d4 = 0;
                  uStack_1d0 = 0;
                  uStack_1cc = 0;
                  uStack_1cb = 0;
                  uStack_1ca = 0;
                  auStack_1f0._0_4_ = 8;
                  auStack_1f0[8] = cStack_1a6;
                  cStack_1e7 = uStack_d0._6_1_;
                  _cStack_1e5 = auVar259._11_5_;
                  bStack_1e6 = (bool)cStack_1a6;
                  auStack_1f0._4_4_ = uStack_280;
                  auStack_1f0._0_4_ = 8;
                  cStack_1e5 = cStack_1a5;
                  uStack_1e3 = auVar259._13_3_;
                  cStack_1e4 = 0;
                  auVar12._4_4_ = auStack_190._12_4_;
                  auVar12._0_4_ = *(undefined4 *)(phStack_168 + 0x60);
                  _auStack_1a0 = (undefined1  [16])0x0;
                  auVar12._8_8_ = 0;
                  auStack_190 = auVar12 << 0x40;
                  cStack_1a8 = (bool)cStack_1a6 || uStack_d0._5_1_ != '\0';
                  uVar60 = (pthread_mutex_t *)0xffffffff00000008;
                  uStack_1b0 = 8;
                  uStack_1ac = 0xffffffff;
                  cStack_1a7 = '\x01';
                  uStack_1a4 = uStack_1a4 & 0xffffff00;
                  iVar43 = *(int *)&((__pthread_internal_list *)(uStack_268 + 0x60))->__prev;
                  uStack_25c = iVar43;
                  uStack_dc = uStack_280;
                  auVar259 = auVar38 << 0x40;
                  if (iVar43 != 0) {
                    _uStack_240 = CONCAT44(auStack_23c[0],*(undefined4 *)(uStack_268 + 0x38)) &
                                  0xfffffffffffffffe;
                    _uStack_250 = ((__pthread_internal_list *)(uStack_268 + 0x70))->__prev;
                    _uStack_228 = ((__pthread_internal_list *)(uStack_268 + 0x80))->__prev;
                    uVar76 = (pthread_mutex_t *)0x0;
LAB_003f025e:
                    auVar259 = _p_Stack_200;
                    uVar127._0_4_ = (uint)uVar76;
                    if ((*(uint *)((hb_buffer_t *)(_uStack_250 + 4) + uVar76 * 0x14) & uStack_280)
                        == 0) {
                      uVar76._0_4_ = (uint)uVar127 + 1;
                      uVar76._4_4_ = 0;
                      uVar60 = _uStack_250;
                    }
                    else {
                      p_Stack_200._0_4_ = (uint)uVar127;
                      auVar175 = _p_Stack_200;
                      local_1f8 = auVar259._8_8_;
                      uVar60 = *(undefined8 *)((long)local_1f8 + 0xa0);
                      iVar43 = *(int *)&((__pthread_internal_list *)(uVar60 + 0x60))->__prev;
                      puStack_1c8 = (uint *)CONCAT44(puStack_1c8._4_4_,iVar43);
                      if (*(uint *)(uVar60 + 0x5c) == (uint)uVar127) {
                        uVar74 = *(undefined1 *)
                                  ((long)((__pthread_internal_list *)(uVar60 + 0x70))->__prev +
                                  uVar76 * 0x14 + 0xf);
                      }
                      else {
                        uVar74 = 0;
                      }
                      if (cStack_1e5 == '\0') {
                        uVar74 = 0;
                      }
                      cStack_1e4 = uVar74;
                      iVar43 = iVar43 + -1;
                      _uStack_258 = uVar76 * 5;
                      if ((int)(uint)uVar127 < iVar43) {
                        piVar52 = local_1f8;
                        _p_Stack_200 = auVar175;
                        do {
                          uVar107 = auVar256._8_8_;
                          uVar80._0_4_ = (int)uVar76 + 1;
                          uVar99 = (ulong)(uint)uVar80;
                          p_Stack_200._0_4_ = (uint)uVar80;
                          p_Var58 = ((__pthread_internal_list *)(uVar60 + 0x70))->__prev;
                          uVar56 = *(ushort *)((long)p_Var58 + uVar99 * 0x14 + 0xc);
                          uVar60._2_1_ = '\0';
                          uVar60._3_1_ = '\0';
                          uVar60._4_1_ = '\0';
                          uVar60._5_1_ = '\0';
                          uVar60._6_1_ = '\0';
                          uVar60._7_1_ = '\0';
                          uVar60._0_2_ = uVar56;
                          if ((auStack_1f0._0_4_ & (uint)uVar56 & 0xe) != 0) goto LAB_003f03fa;
                          puVar131 = (uint *)((long)p_Var58 + uVar99 * 0x14);
                          if ((uVar56 & 8) == 0) {
LAB_003f0319:
                            uVar56 = *(ushort *)((long)p_Var58 + uVar99 * 0x14 + 0x10);
                            uVar75 = 0;
                            bVar137 = false;
                            if (((((uVar56 & 0x20) != 0) &&
                                 (bVar137 = false,
                                 (*(byte *)((long)p_Var58 + uVar99 * 0x14 + 0xc) & 0x10) == 0)) &&
                                ((auStack_1f0[8] != '\0' ||
                                 (bVar137 = false, (uVar56 & 0x21f) != 0x201)))) &&
                               ((cStack_1e7 != '\0' || (bVar137 = false, (uVar56 & 0x11f) != 0x101))
                               )) {
                              bVar137 = (uVar56 & 0x40) == 0 || bStack_1e6 != false;
                            }
                            uVar60._4_1_ = uStack_1cc;
                            uVar60._0_4_ = uStack_1d0;
                            uVar60._5_1_ = uStack_1cb;
                            uVar60._6_2_ = uStack_1ca;
                            if ((pthread_mutex_t *)uVar60 != (pthread_mutex_t *)0x0) {
                              uVar75 = *(ushort *)uVar60 << 8 | *(ushort *)uVar60 >> 8;
                            }
                            if (((*(uint *)((long)p_Var58 + uVar99 * 0x14 + 4) & auStack_1f0._4_4_)
                                 != 0) &&
                               ((cStack_1e4 == '\0' ||
                                (cStack_1e4 == *(char *)((long)p_Var58 + uVar99 * 0x14 + 0xf))))) {
                              if ((code *)CONCAT44(uStack_1dc,uStack_1e0) == (code *)0x0) {
                                if (bVar137) goto LAB_003f03fa;
                              }
                              else {
                                cVar42 = (*(code *)CONCAT44(uStack_1dc,uStack_1e0))
                                                   (puVar131,uVar75,CONCAT44(uStack_1d4,uStack_1d8))
                                ;
                                auVar256._8_8_ = extraout_XMM1_Qa_04;
                                auVar256._0_8_ = extraout_XMM0_Qa_04;
                                if (cVar42 == '\0') goto LAB_003f03f1;
                                uVar60._4_1_ = uStack_1cc;
                                uVar60._0_4_ = uStack_1d0;
                                uVar60._5_1_ = uStack_1cb;
                                uVar60._6_2_ = uStack_1ca;
                              }
                              if ((pthread_mutex_t *)uVar60 != (pthread_mutex_t *)0x0) {
                                phVar103 = (hb_buffer_t *)(uVar60 + 2);
                                uStack_1d0 = (uint)phVar103;
                                uStack_1cc = (undefined1)((ulong)phVar103 >> 0x20);
                                uStack_1cb = (undefined1)((ulong)phVar103 >> 0x28);
                                uStack_1ca = (undefined2)((ulong)phVar103 >> 0x30);
                              }
                              uVar80._0_4_ = *(uint *)(_uStack_250 + _uStack_258 * 4);
                              uVar60._4_4_ = 0;
                              uVar60._0_4_ = (uint)uVar80;
                              param_2._4_4_ = uStack_274;
                              param_2._0_4_ = local_278;
                              in_R10 = auStack_23c._12_8_;
                              if (((((ulong)((__pthread_internal_list *)(param_2 + 0xb0))->__prev >>
                                     ((ulong)((uint)uVar80 >> 4) & 0x3f) & 1) == 0) ||
                                  ((*(ulong *)(param_2 + 0xb8) >>
                                    ((ulong)(byte)(char)(uint)uVar80 & 0x3f) & 1) == 0)) ||
                                 (((ulong)((__pthread_internal_list *)(param_2 + 0xc0))->__prev >>
                                   ((ulong)((uint)uVar80 >> 9) & 0x3f) & 1) == 0))
                              goto LAB_003f05cb;
                              uVar99 = (ulong)(uint)p_Stack_200._0_4_;
                              uVar120 = uVar99 * 5;
                              uVar57 = *(uint *)(_uStack_250 + uVar99 * 0x14);
                              param_6._4_4_ = 0;
                              param_6._0_4_ = uVar57;
                              if (((((ulong)((pthread_mutex_t *)(param_2 + 200))->__align >>
                                     ((ulong)(uVar57 >> 4) & 0x3f) & 1) == 0) ||
                                  (((ulong)((__pthread_internal_list *)(param_2 + 0xd0))->__prev >>
                                    ((ulong)(byte)(char)uVar57 & 0x3f) & 1) == 0)) ||
                                 ((*(ulong *)(param_2 + 0xd8) >> ((ulong)(uVar57 >> 9) & 0x3f) & 1)
                                  == 0)) goto LAB_003f05cb;
                              uVar81 = *(uint *)(auStack_23c._12_8_ + 0xc);
                              in_R11[0] = uVar81 >> 0x18 | (uVar81 & 0xff0000) >> 8 |
                                          (uVar81 & 0xff00) << 8 | uVar81 << 0x18;
                              in_R11[1]._0_1_ = '\0';
                              in_R11[1]._1_1_ = '\0';
                              in_R11[1]._2_1_ = '\0';
                              in_R11[1]._3_1_ = '\0';
                              phVar103 = (hb_buffer_t *)&_hb_NullPool;
                              if ((int)in_R11[0] < 1) goto LAB_003f05af;
                              in_R11[0] = in_R11[0] - 1;
                              in_R11[1]._0_1_ = '\0';
                              in_R11[1]._1_1_ = '\0';
                              in_R11[1]._2_1_ = '\0';
                              in_R11[1]._3_1_ = '\0';
                              iVar43 = 0;
                              goto LAB_003f0554;
                            }
LAB_003f03f1:
                            auVar175 = _p_Stack_200;
                            if (!bVar137) break;
                          }
                          else if (((byte)auStack_1f0[0] & 0x10) == 0) {
                            if (((auStack_1f0._0_4_ & 0xff00) == 0) ||
                               (uVar60._0_4_ = uVar56 & 0xff00, uVar60._4_4_ = 0,
                               (auStack_1f0._0_4_ & 0xff00) == (uint)uVar60)) goto LAB_003f0319;
                          }
                          else {
                            uVar100 = OT::GDEF::accelerator_t::mark_set_covers
                                                (*(accelerator_t **)((long)piVar52 + 0xf8),
                                                 (uint)auStack_1f0._0_4_ >> 0x10,*puVar131);
                            auVar256._8_8_ = uVar107;
                            auVar256._0_8_ = extraout_XMM0_Qa_05;
                            if ((char)uVar100 != '\0') goto LAB_003f0319;
                          }
LAB_003f03fa:
                          uVar76._4_4_ = 0;
                          uVar76._0_4_ = p_Stack_200._0_4_;
                          auVar175 = _p_Stack_200;
                          if (iVar43 <= (int)p_Stack_200._0_4_) break;
                          uVar60 = *(undefined8 *)((long)local_1f8 + 0xa0);
                          piVar52 = local_1f8;
                        } while( true );
                      }
                      _p_Stack_200 = auVar175;
                      uVar76._0_4_ = (uint)uVar127 + 1;
                      uVar76._4_4_ = 0;
                      param_2._4_4_ = uStack_274;
                      param_2._0_4_ = local_278;
                    }
                    goto LAB_003f0254;
                  }
LAB_003f0e56:
                  hb_buffer_t::message
                            (auVar259._0_8_,auVar259._8_8_,in_XMM2.__prev,in_XMM3._0_8_,
                             in_XMM4.__prev,in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,
                             (hb_buffer_t *)uStack_268,_uStack_248,"end kern",uVar60,uVar120,param_6
                             ,uVar283);
LAB_003f0e9e:
                  free(pvStack_100);
                  auVar259 = hb_sanitize_context_t::~hb_sanitize_context_t
                                       ((hb_sanitize_context_t *)&uStack_160);
                  in_XMM1.__prev = auVar259._8_8_;
                  uVar93 = auVar259._0_8_;
                  in_XMM1.__next = extraout_XMM1_Qb_04;
                  unaff_RBX = uVar76;
                  uVar95 = _uStack_280;
                }
              }
            }
          }
        }
      }
      break;
    case 1:
      if ((*(byte *)(*(long *)(param_2 + 8) + 0xa8) & 1) == 0) {
        if ((uVar87 & 0x40) == 0) break;
      }
      aiStack_98 = (int  [2])param_2;
      uStack_90 = (pthread_mutex_t *)uVar127;
      uVar80._0_4_ = *(uint *)(uVar127 + 0x1c);
      uStack_88 = (hb_buffer_t *)
                  ((ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                           ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18) + uVar127) + 0xc;
      uStack_60 = 0;
      uStack_5c = CONCAT31(uStack_5c._1_3_,bVar128 >> 6) & 0xffffff01;
      p_Var58 = ((__pthread_internal_list *)(param_2 + 0x10))->__prev[2].__prev;
      uStack_250 = *(int *)&p_Var58[1].__next;
      if (*(int *)&p_Var58[1].__next == -1) {
        p_Var89 = p_Var58[7].__next;
        while (p_Var89 == (__pthread_internal_list *)0x0) {
          p_Var89 = p_Var58[6].__next;
          if (p_Var89 == (__pthread_internal_list *)0x0) {
            p_Var89 = (__pthread_internal_list *)&_hb_NullPool;
            break;
          }
          local_208 = (int  [2])((ulong)local_208 & 0xffffffff00000000);
          _auStack_1f0 = (undefined1  [16])0x0;
          p_Stack_200._0_1_ = '\0';
          p_Stack_200._1_1_ = '\0';
          p_Stack_200._2_1_ = '\0';
          p_Stack_200._3_1_ = '\0';
          p_Stack_200._4_1_ = '\0';
          p_Stack_200._5_1_ = '\0';
          p_Stack_200._6_1_ = '\0';
          p_Stack_200._7_1_ = '\0';
          local_1f8._0_1_ = '\0';
          local_1f8._1_1_ = '\0';
          local_1f8._2_1_ = '\0';
          local_1f8._3_1_ = '\0';
          local_1f8._4_1_ = '\0';
          local_1f8._5_1_ = '\0';
          local_1f8._6_1_ = '\0';
          local_1f8._7_1_ = '\0';
          uStack_1e0 = uStack_1e0 & 0xffffff00;
          uStack_1cb = 0;
          uStack_1dc = 0;
          uStack_1d8 = 0;
          uStack_1d4 = 0;
          uStack_1d0 = 0;
          uStack_1cc = 1;
          piVar52 = (int *)&_hb_NullPool;
          if (p_Var89[2].__prev != (__pthread_internal_list *)0x0) {
            piVar52 = (int *)(*(code *)p_Var89[2].__prev)(p_Var89,0x6d617870,p_Var89[2].__next);
            if (piVar52 == (int *)0x0) {
              piVar52 = (int *)&_hb_NullPool;
            }
          }
          p_Var89 = (__pthread_internal_list *)
                    hb_sanitize_context_t::sanitize_blob<OT::maxp>
                              ((hb_sanitize_context_t *)local_208,piVar52);
          auVar259 = hb_sanitize_context_t::~hb_sanitize_context_t
                               ((hb_sanitize_context_t *)local_208);
          in_XMM1.__prev = auVar259._8_8_;
          _Var144.__prev = auVar259._0_8_;
          in_XMM1.__next = extraout_XMM1_Qb_08;
          _Var144.__next = extraout_XMM0_Qb_05;
          if (p_Var89 == (__pthread_internal_list *)0x0) {
            p_Var89 = (__pthread_internal_list *)&_hb_NullPool;
            LOCK();
            bVar137 = p_Var58[7].__next == (__pthread_internal_list *)0x0;
            if (bVar137) {
              p_Var58[7].__next = (__pthread_internal_list *)&_hb_NullPool;
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar137 = p_Var58[7].__next == (__pthread_internal_list *)0x0;
            if (bVar137) {
              p_Var58[7].__next = p_Var89;
            }
            UNLOCK();
          }
          if (bVar137) break;
          if (((p_Var89 != (__pthread_internal_list *)0x0) &&
              (p_Var89 != (__pthread_internal_list *)&_hb_NullPool)) &&
             (*(int *)&p_Var89->__prev != 0)) {
            LOCK();
            *(int *)&p_Var89->__prev = *(int *)&p_Var89->__prev + -1;
            UNLOCK();
            if (*(int *)&p_Var89->__prev == 0) {
              *(undefined4 *)&p_Var89->__prev = 0xffff2153;
              ppVar129 = (pthread_mutex_t *)p_Var89->__next;
              if (ppVar129 != (pthread_mutex_t *)0x0) {
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar129[1].__data,ppVar129);
                in_XMM1.__next = extraout_XMM1_Qb_09;
                in_XMM1.__prev = extraout_XMM1_Qa_09;
                free(ppVar129);
                p_Var89->__next = (__pthread_internal_list *)0x0;
              }
              if (p_Var89[2].__next != (__pthread_internal_list *)0x0) {
                (*(code *)p_Var89[2].__next)(p_Var89[2].__prev);
                in_XMM1.__next = extraout_XMM1_Qb_10;
                in_XMM1.__prev = extraout_XMM1_Qa_10;
              }
              free(p_Var89);
              _Var144 = extraout_XMM0_09;
            }
          }
          p_Var89 = p_Var58[7].__next;
        }
        p_Var113 = (__pthread_internal_list *)&_hb_NullPool;
        if (5 < *(uint *)&p_Var89[1].__next) {
          p_Var113 = p_Var89[1].__prev;
        }
        uVar56 = *(ushort *)((long)&p_Var113->__prev + 4);
        uVar75 = uVar56 << 8 | uVar56 >> 8;
        if (uVar56 == 0) {
          uVar75 = 0;
        }
        uStack_250 = CONCAT22(0,uVar75);
        *(uint *)&p_Var58[1].__next = CONCAT22(0,uVar75);
        param_2._4_4_ = uStack_274;
        param_2._0_4_ = local_278;
      }
      uVar100 = auStack_23c._12_8_;
      uVar93 = _Var144.__prev;
      uVar107 = auStack_23c._12_8_ + 0xc;
      uVar127._0_4_ = *(uint *)(auStack_23c._12_8_ + 0x14);
      uVar80._0_4_ = *(uint *)(auStack_23c._12_8_ + 0x18);
      phVar103 = (hb_buffer_t *)
                 ((ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                          ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18) + uVar107);
      uVar99 = (ulong)(ushort)(*(ushort *)
                                ((hb_buffer_t *)(auStack_23c._12_8_ + 0xe) +
                                ((uint)uVar127 >> 0x18 | ((uint)uVar127 & 0xff0000) >> 8 |
                                 ((uint)uVar127 & 0xff00) << 8 | (uint)uVar127 << 0x18)) << 8 |
                              *(ushort *)
                               ((hb_buffer_t *)(auStack_23c._12_8_ + 0xe) +
                               ((uint)uVar127 >> 0x18 | ((uint)uVar127 & 0xff0000) >> 8 |
                                ((uint)uVar127 & 0xff00) << 8 | (uint)uVar127 << 0x18)) >> 8);
      if ((*(short *)(phVar103 + uVar99 * 6 + 4) == -1) && (*(short *)(phVar103 + uVar99 * 6) == 0))
      {
        p_Var58 = ((__pthread_internal_list *)(param_2 + 0x80))->__prev;
        if (((ulong)((__pthread_internal_list *)(param_2 + 0xb0))->__prev & (ulong)p_Var58) != 0) {
          if ((*(ulong *)(param_2 + 0xb8) & *(ulong *)(param_2 + 0x88)) != 0) {
            p_Var89 = ((__pthread_internal_list *)(param_2 + 0x90))->__prev;
            if (((ulong)((__pthread_internal_list *)(param_2 + 0xc0))->__prev & (ulong)p_Var89) != 0
               ) {
              if ((((pthread_mutex_t *)(param_2 + 200))->__align & (ulong)p_Var58) != 0) {
                if (((ulong)((__pthread_internal_list *)(param_2 + 0xd0))->__prev &
                    *(ulong *)(param_2 + 0x88)) != 0) {
                  if (((ulong)p_Var89 & *(ulong *)(param_2 + 0xd8)) != 0) goto LAB_003eeca5;
                }
              }
            }
          }
        }
      }
      else {
LAB_003eeca5:
        lVar88 = *(long *)&((pthread_mutex_t *)(param_2 + 0x78))->__data;
        if ((lVar88 == 0) || (*(uint *)(lVar88 + 4) < 2)) {
          puVar131 = (uint *)0x0;
          p_Var58 = ((__pthread_internal_list *)(param_2 + 0x20))->__prev;
          *(undefined4 *)((long)&p_Var58[5].__next + 4) = 0;
          cVar42 = *(char *)&p_Var58[5].__next;
        }
        else {
          puVar131 = *(uint **)(lVar88 + 8);
          p_Var58 = ((__pthread_internal_list *)(param_2 + 0x20))->__prev;
          *(undefined4 *)((long)&p_Var58[5].__next + 4) = 0;
          cVar42 = *(char *)&p_Var58[5].__next;
        }
        if (cVar42 != '\0') {
          uVar80._0_4_ = 0;
          param_6 = (pthread_mutex_t *)0x0;
          uVar127._0_4_ = *(uint *)&p_Var58[6].__prev;
          uVar99 = 0;
          uVar102 = unaff_RBX;
          uVar95 = uVar107;
          if (puVar131 == (uint *)0x0) goto LAB_003efbd0;
LAB_003efac0:
          uVar93 = _Var144.__prev;
          if ((uint)uVar80 < (uint)uVar127) {
            uVar57 = *(uint *)((long)p_Var58[7].__prev + uVar99 * 0x14 + 8);
            uVar82 = puVar131 + 3;
            puVar65 = puVar131;
            do {
              puVar65 = puVar65 + -3;
              uVar102 = uVar82 + -0xc;
              phVar103 = (hb_buffer_t *)(uVar82 + -8);
              uVar82 = uVar102;
            } while (uVar57 < *(uint *)phVar103);
            do {
              puVar131 = puVar65 + 3;
              puVar1 = puVar65 + 5;
              puVar65 = puVar131;
            } while (*puVar1 < uVar57);
          }
          if ((*puVar131 & *(uint *)&((__pthread_internal_list *)(param_2 + 0xe0))->__prev) != 0)
          goto LAB_003efbd3;
          unaff_RBX = uVar102;
          if ((uint)uVar80 != (uint)uVar127) {
            if (*(char *)((long)&p_Var58[5].__next + 2) == '\0') {
              unaff_RBX = (pthread_mutex_t *)0x0;
              goto LAB_003effc3;
            }
            p_Var113 = p_Var58[7].__next;
            p_Var89 = p_Var58[7].__prev;
            uVar127._0_4_ = *(uint *)((long)&p_Var58[6].__prev + 4);
            if ((p_Var113 == p_Var89) && ((uint)uVar127 == (uint)uVar80)) {
              unaff_RBX = (pthread_mutex_t *)0x0;
              uVar127._0_4_ = (uint)uVar80;
              goto LAB_003effba;
            }
            uVar127._0_4_ = (uint)uVar127 + 1;
            if (((uint)uVar127 == 0) || ((uint)uVar127 < *(uint *)&p_Var58[6].__next)) {
              if (p_Var113 == p_Var89) goto LAB_003efb85;
            }
            else {
              uVar120 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var58,(uint)uVar127);
              uVar93 = extraout_XMM0_04.__prev;
              if ((char)uVar120 == '\0') {
                cVar42 = *(char *)&p_Var58[5].__next;
                uVar120 = (pthread_mutex_t *)0x0;
                _Var144 = extraout_XMM0_04;
                goto joined_r0x003efbc2;
              }
              p_Var89 = p_Var58[7].__prev;
              p_Var113 = p_Var58[7].__next;
              if (p_Var113 == p_Var89) {
LAB_003efb85:
                uVar127._0_4_ = *(uint *)((long)&p_Var58[6].__prev + 4);
                if (*(int *)((long)&p_Var58[5].__next + 4) + 1U < (uint)uVar127 + 1) {
                  p_Var113 = p_Var58[8].__prev;
                  p_Var58[7].__next = p_Var113;
                  unaff_RBX = (pthread_mutex_t *)0x0;
                  goto joined_r0x003efba7;
                }
                unaff_RBX = (pthread_mutex_t *)0x0;
                goto LAB_003eff83;
              }
            }
            unaff_RBX = (pthread_mutex_t *)0x0;
LAB_003eff90:
            uVar99 = (ulong)*(uint *)((long)&p_Var58[5].__next + 4);
            uVar92 = (ulong)*(uint *)((long)&p_Var58[6].__prev + 4);
            *(undefined4 *)((long)p_Var113 + uVar92 * 0x14 + 0x10) =
                 *(undefined4 *)((long)p_Var89 + uVar99 * 0x14 + 0x10);
            _Var144 = *(__pthread_internal_list *)((long)p_Var89 + uVar99 * 0x14);
            *(__pthread_internal_list *)((long)p_Var113 + uVar92 * 0x14) = _Var144;
            uVar80._0_4_ = *(uint *)((long)&p_Var58[5].__next + 4);
            uVar127._0_4_ = *(uint *)((long)&p_Var58[6].__prev + 4);
LAB_003effba:
            *(uint *)((long)&p_Var58[6].__prev + 4) = (uint)uVar127 + 1;
LAB_003effc3:
            *(uint *)((long)&p_Var58[5].__next + 4) = (uint)uVar80 + 1;
LAB_003effca:
            uVar93 = _Var144.__prev;
            cVar42 = *(char *)&p_Var58[5].__next;
            uVar120 = unaff_RBX;
joined_r0x003efbc2:
            unaff_RBX = uVar102;
            if (cVar42 != '\0') {
              do {
                uVar80._0_4_ = *(uint *)((long)&p_Var58[5].__next + 4);
                uVar127._0_4_ = *(uint *)&p_Var58[6].__prev;
                uVar99 = (ulong)(uint)uVar80;
                uVar102 = unaff_RBX;
                param_6 = uVar120;
                if (puVar131 != (uint *)0x0) goto LAB_003efac0;
LAB_003efbd0:
                puVar131 = (uint *)0x0;
LAB_003efbd3:
                if ((uint)uVar80 < (uint)uVar127) {
                  uVar80._0_4_ = *(uint *)((long)p_Var58[7].__prev + uVar99 * 0x14);
                  if ((ulong)(uint)uVar80 == 0xffff) {
                    uVar127._0_4_ = 2;
                  }
                  else {
                    uVar127._0_4_ = 1;
                    if ((((*(ulong *)(param_2 + 0x98) >> ((ulong)((uint)uVar80 >> 4) & 0x3f) & 1) !=
                          0) && (((ulong)((pthread_mutex_t *)(param_2 + 0xa0))->__align >>
                                  ((ulong)(uint)uVar80 & 0x3f) & 1) != 0)) &&
                       ((*(ulong *)(param_2 + 0xa8) >> ((ulong)((uint)uVar80 >> 9) & 0x3f) & 1) != 0
                       )) {
                      uVar57 = *(uint *)&((__pthread_internal_list *)(uVar100 + 0x10))->__prev;
                      pLVar45 = Lookup<OT::IntType<unsigned_short,2u>>::get_value
                                          ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                           ((ulong)(uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 |
                                                    (uVar57 & 0xff00) << 8 | uVar57 << 0x18) +
                                           uVar107),(uint)uVar80,uStack_250);
                      _Var144 = extraout_XMM0_05;
                      if (pLVar45 != (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
                        uVar127._0_4_ =
                             (uint)(ushort)(*(ushort *)pLVar45 << 8 | *(ushort *)pLVar45 >> 8);
                      }
                    }
                  }
                }
                else {
                  uVar127._0_4_ = 0;
                }
                uVar80._0_4_ = *(uint *)uVar107;
                uVar87 = (uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                         ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18;
                uVar57 = (uint)uVar127;
                if (uVar87 <= (uint)uVar127) {
                  uVar57 = 1;
                }
                uVar81 = *(uint *)(uVar100 + 0x14);
                uVar97 = *(uint *)(uVar100 + 0x18);
                phVar103 = (hb_buffer_t *)
                           ((ulong)(uVar81 >> 0x18 | (uVar81 & 0xff0000) >> 8 |
                                    (uVar81 & 0xff00) << 8 | uVar81 << 0x18) + uVar107);
                phVar85 = (hb_buffer_t *)
                          ((ulong)(uVar97 >> 0x18 | (uVar97 & 0xff0000) >> 8 |
                                   (uVar97 & 0xff00) << 8 | uVar97 << 0x18) + uVar107);
                iVar43 = uVar87 * (int)param_6;
                uVar99 = (ulong)(ushort)(*(ushort *)(phVar103 + (ulong)(uVar57 + iVar43) * 2) << 8 |
                                        *(ushort *)(phVar103 + (ulong)(uVar57 + iVar43) * 2) >> 8);
                uVar102 = uVar99 * 3;
                uVar56 = *(ushort *)(phVar85 + uVar99 * 6);
                if (*(short *)(phVar85 + uVar99 * 6 + 4) == -1) {
                  if (((int)param_6 != 0) &&
                     (((*(ushort *)(phVar85 + uVar99 * 6 + 2) & 0x40) == 0 || (uVar56 != 0)))) {
                    if (uVar87 <= (uint)uVar127) {
                      uVar127._0_4_ = 1;
                    }
                    uVar92 = (ulong)(ushort)(*(ushort *)(phVar103 + (ulong)(uint)uVar127 * 2) << 8 |
                                            *(ushort *)(phVar103 + (ulong)(uint)uVar127 * 2) >> 8);
                    if (((*(short *)(phVar85 + uVar92 * 6 + 4) != -1) ||
                        (uVar56 != *(ushort *)(phVar85 + uVar92 * 6))) ||
                       (((*(ushort *)(phVar85 + uVar99 * 6 + 2) ^
                         *(ushort *)(phVar85 + uVar92 * 6 + 2)) & 0x40) != 0)) goto LAB_003efd30;
                  }
                  if (*(short *)(phVar85 +
                                (ulong)(ushort)(*(ushort *)
                                                 (phVar103 +
                                                 (ulong)((uint)((uint)uVar80 == 0) + iVar43) * 2) <<
                                                8 | *(ushort *)
                                                     (phVar103 +
                                                     (ulong)((uint)((uint)uVar80 == 0) + iVar43) * 2
                                                     ) >> 8) * 6 + 4) != -1) goto LAB_003efd30;
                }
                else {
LAB_003efd30:
                  uVar127._0_4_ = *(uint *)((long)&p_Var58[5].__next + 4);
                  uVar80._0_4_ = (uint)uVar127;
                  if (*(char *)((long)&p_Var58[5].__next + 2) != '\0') {
                    uVar80._0_4_ = *(uint *)((long)&p_Var58[6].__prev + 4);
                  }
                  if (((uint)uVar80 != 0) && ((uint)uVar127 < *(uint *)&p_Var58[6].__prev)) {
                    auVar259 = hb_buffer_t::_set_glyph_flags
                                         ((hb_buffer_t *)p_Var58,3,(uint)uVar80 - 1,
                                          (uint)uVar127 + 1,'\x01');
                    in_XMM1.__prev = auVar259._8_8_;
                    _Var144.__prev = auVar259._0_8_;
                    in_XMM1.__next = extraout_XMM1_Qb_03;
                    _Var144.__next = extraout_XMM0_Qb_03;
                  }
                }
                uVar93 = _Var144.__prev;
                uVar120._2_1_ = '\0';
                uVar120._3_1_ = '\0';
                uVar120._4_1_ = '\0';
                uVar120._5_1_ = '\0';
                uVar120._6_1_ = '\0';
                uVar120._7_1_ = '\0';
                uVar120._0_2_ = uVar56;
                uVar75 = *(short *)(phVar85 + uVar99 * 6 + 2) << 8;
                if ((uVar75 & 0x2000) == 0) {
                  if ((uVar75 & 0x8000) != 0) goto LAB_003efdc7;
LAB_003efd90:
                  uVar75 = *(ushort *)(phVar85 + uVar99 * 6 + 4);
                }
                else {
                  uStack_60 = 0;
                  if ((uVar75 & 0x8000) == 0) goto LAB_003efd90;
LAB_003efdc7:
                  uVar92 = (ulong)uStack_60;
                  if (uVar92 < 8) {
                    uStack_60 = uStack_60 + 1;
                    (&uStack_80)[uVar92] = *(uint *)((long)&p_Var58[5].__next + 4);
                    uVar75 = *(ushort *)(phVar85 + uVar99 * 6 + 4);
                  }
                  else {
                    uStack_60 = 0;
                    uVar75 = *(ushort *)(phVar85 + uVar99 * 6 + 4);
                  }
                }
                if (uVar75 != 0xffff) {
                  uVar92 = (ulong)uStack_60;
                  if (uVar92 != 0) {
                    uVar127._0_4_ = (uStack_90->__data).__owner;
                    uVar127._0_4_ =
                         (uint)uVar127 >> 0x18 | ((uint)uVar127 & 0xff0000) >> 8 |
                         ((uint)uVar127 & 0xff00) << 8 | (uint)uVar127 << 0x18;
                    if ((uint)uVar127 == 0) {
                      uVar127._0_4_ = 1;
                    }
                    if (!CARRY4(uStack_60,uStack_60)) {
                      lVar88 = (ulong)(uStack_60 * 2) * (ulong)(uint)uVar127;
                      uVar80._0_4_ = (uint)lVar88;
                      if ((int)((ulong)lVar88 >> 0x20) == 0) {
                        phVar103 = uStack_88 + (ulong)((ushort)(uVar75 << 8 | uVar75 >> 8) >> 1) * 2
                        ;
                        in_R11 = aiStack_98;
                        if ((((ulong)((long)phVar103 -
                                     (long)((__pthread_internal_list *)((long)aiStack_98 + 0x30))->
                                           __prev) <=
                              (ulong)*(uint *)&((__pthread_internal_list *)((long)aiStack_98 + 0x40)
                                               )->__prev) &&
                            ((uint)uVar80 <=
                             (uint)(*(int *)((long)aiStack_98 + 0x38) - (int)phVar103))) &&
                           (iVar43 = *(int *)((long)aiStack_98 + 0x44) - (uint)uVar80,
                           *(int *)((long)aiStack_98 + 0x44) = iVar43, 0 < iVar43)) {
                          uVar80._0_4_ = *(uint *)(*(long *)((long)aiStack_98 + 8) + 0xa0);
                          uStack_268._0_4_ = (float)(uint)uVar80;
                          uStack_25c._0_1_ = (char)uStack_5c;
                          in_R10 = (ulong)(uint)uVar127 * 2;
                          bVar73 = 0;
                          do {
                            _uStack_258 = in_R10;
                            if (uVar92 == 0) break;
                            uVar92 = uVar92 - 1;
                            uStack_60 = (uint)uVar92;
                            uVar78 = (ulong)(&uStack_80)[uVar92 & 0xffffffff];
                            if ((&uStack_80)[uVar92 & 0xffffffff] < *(uint *)&p_Var58[6].__prev) {
                              uVar75 = *(ushort *)phVar103;
                              bVar73 = (byte)(uVar75 >> 8) & 1;
                              uVar75 = uVar75 << 8 | uVar75 >> 8 & 0xfffe;
                              p_Var89 = p_Var58[8].__prev;
                              param_6 = uVar102;
                              if (((ulong)p_Var58[3].__next & 0xfffffffe) == 4) {
                                if ((char)uStack_5c == '\0') {
                                  if ((*(uint *)((long)p_Var58[7].__prev + uVar78 * 0x14 + 4) &
                                      (uint)uVar80) != 0) {
                                    piVar52 = (int *)((long)p_Var89 + uVar78 * 0x14);
                                    iVar43 = (int)((ulong)((long)(short)uVar75 *
                                                           (long)((__pthread_internal_list *)
                                                                 ((long)aiStack_98 + 0x10))->__prev
                                                                 [5].__next + 0x8000) >> 0x10);
                                    *piVar52 = *piVar52 + iVar43;
                                    piVar52 = (int *)((long)p_Var89 + uVar78 * 0x14 + 8);
                                    *piVar52 = *piVar52 + iVar43;
                                  }
                                }
                                else {
                                  puVar83 = (undefined2 *)(uVar78 * 0x14 + 0x10 + (long)p_Var89);
                                  if (uVar75 == 0x8000) {
                                    *(undefined1 *)(puVar83 + 1) = 0;
                                    *puVar83 = 0;
                                    *(undefined4 *)((long)p_Var89 + uVar78 * 0x14 + 0xc) = 0;
                                  }
                                  else if (*(char *)(puVar83 + 1) != '\0') {
                                    piVar52 = (int *)((long)p_Var89 + uVar78 * 0x14 + 0xc);
                                    *piVar52 = *piVar52 +
                                               (int)((ulong)((long)(short)uVar75 *
                                                             (long)((__pthread_internal_list *)
                                                                   ((long)aiStack_98 + 0x10))->
                                                                   __prev[6].__prev + 0x8000) >>
                                                    0x10);
                                    *(byte *)&p_Var58[0xc].__prev =
                                         *(byte *)&p_Var58[0xc].__prev | 8;
                                  }
                                }
                              }
                              else if ((char)uStack_5c == '\0') {
                                if ((*(uint *)((long)p_Var58[7].__prev + uVar78 * 0x14 + 4) &
                                    (uint)uVar80) != 0) {
                                  piVar52 = (int *)((long)p_Var89 + uVar78 * 0x14 + 4);
                                  iVar43 = (int)((ulong)((long)(short)uVar75 *
                                                         (long)((__pthread_internal_list *)
                                                               ((long)aiStack_98 + 0x10))->__prev[6]
                                                               .__prev + 0x8000) >> 0x10);
                                  *piVar52 = *piVar52 + iVar43;
                                  piVar52 = (int *)((long)p_Var89 + uVar78 * 0x14 + 0xc);
                                  *piVar52 = *piVar52 + iVar43;
                                }
                              }
                              else {
                                puVar83 = (undefined2 *)(uVar78 * 0x14 + 0x10 + (long)p_Var89);
                                if (uVar75 == 0x8000) {
                                  *(undefined1 *)(puVar83 + 1) = 0;
                                  *puVar83 = 0;
                                  *(undefined4 *)((long)p_Var89 + uVar78 * 0x14 + 8) = 0;
                                }
                                else if (*(char *)(puVar83 + 1) != '\0') {
                                  piVar52 = (int *)((long)p_Var89 + uVar78 * 0x14 + 8);
                                  *piVar52 = *piVar52 +
                                             (int)((ulong)((long)(short)uVar75 *
                                                           (long)((__pthread_internal_list *)
                                                                 ((long)aiStack_98 + 0x10))->__prev
                                                                 [5].__next + 0x8000) >> 0x10);
                                  *(byte *)&p_Var58[0xc].__prev = *(byte *)&p_Var58[0xc].__prev | 8;
                                }
                              }
                            }
                            phVar103 = phVar103 + in_R10;
                          } while (bVar73 == 0);
                          goto LAB_003efebb;
                        }
                      }
                    }
                    uStack_60 = 0;
                  }
                }
LAB_003efebb:
                param_2._4_4_ = uStack_274;
                param_2._0_4_ = local_278;
                uVar80._0_4_ = *(uint *)((long)&p_Var58[5].__next + 4);
                unaff_RBX = uVar102;
                if ((uint)uVar80 == *(uint *)&p_Var58[6].__prev) break;
                if (*(char *)&p_Var58[5].__next == '\0') break;
                unaff_RBX._0_2_ = uVar56 << 8 | uVar56 >> 8;
                unaff_RBX._2_1_ = '\0';
                unaff_RBX._3_1_ = '\0';
                unaff_RBX._4_1_ = '\0';
                unaff_RBX._5_1_ = '\0';
                unaff_RBX._6_1_ = '\0';
                unaff_RBX._7_1_ = '\0';
                if ((((byte)phVar85[uVar99 * 6 + 2] & 0x40) != 0) &&
                   (iVar43 = *(int *)&p_Var58[0xc].__next,
                   *(int *)&p_Var58[0xc].__next = iVar43 + -1, 0 < iVar43)) goto LAB_003effca;
                if (*(char *)((long)&p_Var58[5].__next + 2) == '\0') goto LAB_003effc3;
                p_Var113 = p_Var58[7].__next;
                p_Var89 = p_Var58[7].__prev;
                uVar127._0_4_ = *(uint *)((long)&p_Var58[6].__prev + 4);
                if ((p_Var113 == p_Var89) && ((uint)uVar127 == (uint)uVar80)) {
                  uVar127._0_4_ = (uint)uVar80;
                  goto LAB_003effba;
                }
                uVar127._0_4_ = (uint)uVar127 + 1;
                if (((uint)uVar127 == 0) || ((uint)uVar127 < *(uint *)&p_Var58[6].__next)) {
                  if (p_Var113 == p_Var89) {
LAB_003eff43:
                    uVar127._0_4_ = *(uint *)((long)&p_Var58[6].__prev + 4);
                    if (*(int *)((long)&p_Var58[5].__next + 4) + 1U < (uint)uVar127 + 1) {
                      p_Var113 = p_Var58[8].__prev;
                      p_Var58[7].__next = p_Var113;
joined_r0x003efba7:
                      if ((uint)uVar127 != 0) {
                        memcpy(p_Var113,p_Var89,(ulong)(uint)uVar127 * 0x14);
                        p_Var89 = p_Var58[7].__prev;
                        uVar102 = unaff_RBX;
                        p_Var113 = p_Var58[7].__next;
                      }
                    }
                    else {
LAB_003eff83:
                      p_Var113 = p_Var89;
                    }
                  }
                  goto LAB_003eff90;
                }
                uVar120 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var58,(uint)uVar127);
                uVar93 = extraout_XMM0_06.__prev;
                if ((char)uVar120 != '\0') {
                  p_Var89 = p_Var58[7].__prev;
                  p_Var113 = p_Var58[7].__next;
                  uVar102 = unaff_RBX;
                  if (p_Var113 == p_Var89) goto LAB_003eff43;
                  goto LAB_003eff90;
                }
                uVar120 = unaff_RBX;
                _Var144 = extraout_XMM0_06;
                if (*(char *)&p_Var58[5].__next == '\0') break;
              } while( true );
            }
          }
        }
      }
      break;
    case 2:
      if ((*(byte *)(*(long *)(param_2 + 8) + 0xa8) & 1) != 0) {
        uVar87 = uVar87 << 0x18;
        if ((uVar87 & 0x10000000) == 0) {
          p_Var6 = ((__pthread_internal_list *)(param_2 + 0x80))->__prev;
          if (((ulong)((__pthread_internal_list *)(param_2 + 0xb0))->__prev & (ulong)p_Var6) != 0) {
            if ((*(ulong *)(param_2 + 0xb8) & *(ulong *)(param_2 + 0x88)) != 0) {
              p_Var7 = ((__pthread_internal_list *)(param_2 + 0x90))->__prev;
              if (((ulong)((__pthread_internal_list *)(param_2 + 0xc0))->__prev & (ulong)p_Var7) !=
                  0) {
                if ((((pthread_mutex_t *)(param_2 + 200))->__align & (ulong)p_Var6) != 0) {
                  if (((ulong)((__pthread_internal_list *)(param_2 + 0xd0))->__prev &
                      *(ulong *)(param_2 + 0x88)) != 0) {
                    if (((ulong)p_Var7 & *(ulong *)(param_2 + 0xd8)) != 0) {
                      unaff_RBX = ((__pthread_internal_list *)(param_2 + 0x10))->__prev;
                      uVar107 = ((__pthread_internal_list *)(param_2 + 0x20))->__prev;
                      uStack_280 = *(uint *)(*(long *)(param_2 + 8) + 0xa0);
                      bVar137 = hb_buffer_t::message
                                          (uVar93,p_Var58,p_Var89,uVar67,p_Var113,uVar47,p_Var116,
                                           p_Var53,(hb_buffer_t *)uVar107,unaff_RBX,"start kern",
                                           p_Var6,uVar120,param_6,uVar283);
                      uVar93 = extraout_XMM0_Qa_00;
                      uVar95 = _uStack_280;
                      if (bVar137) {
                        if (((byte)*(hb_buffer_t *)(uVar107 + 0x18) & 0x40) != 0) {
                          uVar127._0_4_ =
                               *(uint *)&((__pthread_internal_list *)(uVar107 + 0x60))->__prev;
                          *(byte *)&((__pthread_internal_list *)(uVar107 + 0xc0))->__prev =
                               *(byte *)&((__pthread_internal_list *)(uVar107 + 0xc0))->__prev |
                               0x20;
                          if ((ulong)(uint)uVar127 != 0) {
                            p_Var58 = ((__pthread_internal_list *)(uVar107 + 0x70))->__prev;
                            if ((ulong)(uint)uVar127 - 1 < 3) {
                              uVar99 = 0;
                            }
                            else {
                              p_Var89 = p_Var58 + 4;
                              uVar99 = 0;
                              do {
                                pbVar119 = (byte *)((long)&p_Var89[-4].__prev + 4);
                                *pbVar119 = *pbVar119 | 2;
                                *(byte *)&p_Var89[-3].__next = *(byte *)&p_Var89[-3].__next | 2;
                                pbVar119 = (byte *)((long)&p_Var89[-2].__next + 4);
                                *pbVar119 = *pbVar119 | 2;
                                *(byte *)&p_Var89->__prev = *(byte *)&p_Var89->__prev | 2;
                                uVar99 = uVar99 + 4;
                                p_Var89 = p_Var89 + 5;
                              } while (((uint)uVar127 & 0xfffffffc) != uVar99);
                            }
                            param_2._4_4_ = uStack_274;
                            param_2._0_4_ = local_278;
                            if ((ulong)((uint)uVar127 & 3) != 0) {
                              lVar88 = 0;
                              do {
                                pbVar119 = (byte *)((long)p_Var58 + lVar88 + uVar99 * 0x14 + 4);
                                *pbVar119 = *pbVar119 | 2;
                                lVar88 = lVar88 + 0x14;
                              } while ((ulong)((uint)uVar127 & 3) * 0x14 != lVar88);
                            }
                          }
                        }
                        puVar49 = &_hb_NullPool;
                        uStack_268 = uVar107;
                        OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                                  ((hb_ot_apply_context_t *)local_208,1,unaff_RBX,
                                   (undefined4 *)uVar107,
                                   (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
                        auVar259 = _auStack_1f0;
                        param_6._4_4_ = 0;
                        param_6._0_4_ = uStack_280;
                        uStack_c0 = 0xffffffff;
                        uVar76._1_7_ = SUB87(unaff_RBX,1);
                        uVar76._0_1_ = uStack_d0._6_1_;
                        cStack_1a5 = uStack_d0._7_1_;
                        if (iStack_180 != 0) {
                          cStack_1a5 = '\0';
                        }
                        auVar35._8_8_ = 0;
                        auVar35._0_8_ = extraout_XMM1_Qa_00;
                        auVar257 = auVar35 << 0x40;
                        auVar39._8_8_ = 0;
                        auVar39._0_8_ = extraout_XMM1_Qa_00;
                        uVar120._1_7_ = (undefined7)((ulong)puVar49 >> 8);
                        uVar120._0_1_ = uStack_d0._5_1_ != '\0';
                        cStack_1a6 = iStack_180 == 1;
                        uStack_d4 = 8;
                        uStack_1b8 = local_208;
                        local_1f8 = uStack_1b8;
                        puStack_1c8 = (uint *)CONCAT44(puStack_1c8._4_4_,
                                                       *(undefined4 *)(phStack_168 + 0x60));
                        uStack_1e0 = 0;
                        uStack_1dc = 0;
                        uStack_1d8 = 0;
                        uStack_1d4 = 0;
                        uStack_1d0 = 0;
                        uStack_1cc = 0;
                        uStack_1cb = 0;
                        uStack_1ca = 0;
                        auStack_1f0._0_4_ = 8;
                        auStack_1f0[8] = cStack_1a6;
                        cStack_1e7 = uStack_d0._6_1_;
                        _cStack_1e5 = auVar259._11_5_;
                        bStack_1e6 = (bool)cStack_1a6;
                        auStack_1f0._4_4_ = uStack_280;
                        auStack_1f0._0_4_ = 8;
                        cStack_1e5 = cStack_1a5;
                        uStack_1e3 = auVar259._13_3_;
                        cStack_1e4 = 0;
                        auVar13._4_4_ = auStack_190._12_4_;
                        auVar13._0_4_ = *(undefined4 *)(phStack_168 + 0x60);
                        _auStack_1a0 = (undefined1  [16])0x0;
                        auVar13._8_8_ = 0;
                        auStack_190 = auVar13 << 0x40;
                        cStack_1a8 = (bool)cStack_1a6 || uStack_d0._5_1_ != '\0';
                        uVar61 = (pthread_mutex_t *)0xffffffff00000008;
                        uStack_1b0 = 8;
                        uStack_1ac = 0xffffffff;
                        cStack_1a7 = '\x01';
                        uStack_1a4 = uStack_1a4 & 0xffffff00;
                        iVar43 = *(int *)&((__pthread_internal_list *)(uVar107 + 0x60))->__prev;
                        uStack_25c = iVar43;
                        _uStack_240 = unaff_RBX;
                        uStack_dc = uStack_280;
                        auVar259 = auVar39 << 0x40;
                        if (iVar43 != 0) {
                          _uStack_228 = CONCAT44(uStack_224,*(undefined4 *)(uVar107 + 0x38)) &
                                        0xfffffffffffffffe;
                          _uStack_250 = ((__pthread_internal_list *)(uVar107 + 0x70))->__prev;
                          auStack_23c._4_8_ = ((__pthread_internal_list *)(uVar107 + 0x80))->__prev;
                          uVar76 = (pthread_mutex_t *)0x0;
                          do {
                            auVar259 = _p_Stack_200;
                            iVar43 = (int)uVar76;
                            if ((*(uint *)((hb_buffer_t *)(_uStack_250 + 4) + uVar76 * 0x14) &
                                uStack_280) == 0) {
                              uVar76._0_4_ = iVar43 + 1;
                              uVar76._4_4_ = 0;
                              uVar61 = _uStack_250;
                            }
                            else {
                              p_Stack_200._0_4_ = iVar43;
                              auVar175 = _p_Stack_200;
                              local_1f8 = auVar259._8_8_;
                              uVar61 = *(undefined8 *)((long)local_1f8 + 0xa0);
                              iVar98 = *(int *)&((__pthread_internal_list *)(uVar61 + 0x60))->__prev
                              ;
                              puStack_1c8 = (uint *)CONCAT44(puStack_1c8._4_4_,iVar98);
                              if (*(int *)(uVar61 + 0x5c) == iVar43) {
                                uVar74 = *(undefined1 *)
                                          ((long)((__pthread_internal_list *)(uVar61 + 0x70))->
                                                 __prev + uVar76 * 0x14 + 0xf);
                              }
                              else {
                                uVar74 = 0;
                              }
                              if (cStack_1e5 == '\0') {
                                uVar74 = 0;
                              }
                              cStack_1e4 = uVar74;
                              iVar98 = iVar98 + -1;
                              _uStack_248 = uVar76 * 5;
                              if (iVar43 < iVar98) {
                                uStack_258 = iVar43;
                                piVar52 = local_1f8;
                                uVar107 = uVar76;
                                _p_Stack_200 = auVar175;
                                do {
                                  uVar100 = auVar257._8_8_;
                                  uVar127._0_4_ = (int)uVar76 + 1;
                                  uVar99 = (ulong)(uint)uVar127;
                                  p_Stack_200._0_4_ = (uint)uVar127;
                                  p_Var58 = ((__pthread_internal_list *)(uVar61 + 0x70))->__prev;
                                  uVar56 = *(ushort *)((long)p_Var58 + uVar99 * 0x14 + 0xc);
                                  uVar61._2_1_ = '\0';
                                  uVar61._3_1_ = '\0';
                                  uVar61._4_1_ = '\0';
                                  uVar61._5_1_ = '\0';
                                  uVar61._6_1_ = '\0';
                                  uVar61._7_1_ = '\0';
                                  uVar61._0_2_ = uVar56;
                                  if ((auStack_1f0._0_4_ & (uint)uVar56 & 0xe) != 0)
                                  goto LAB_003f088e;
                                  puVar131 = (uint *)((long)p_Var58 + uVar99 * 0x14);
                                  if ((uVar56 & 8) == 0) {
LAB_003f07a9:
                                    uVar56 = *(ushort *)((long)p_Var58 + uVar99 * 0x14 + 0x10);
                                    uVar75 = 0;
                                    bVar137 = false;
                                    if (((((uVar56 & 0x20) != 0) &&
                                         (bVar137 = false,
                                         (*(byte *)((long)p_Var58 + uVar99 * 0x14 + 0xc) & 0x10) ==
                                         0)) && ((auStack_1f0[8] != '\0' ||
                                                 (bVar137 = false, (uVar56 & 0x21f) != 0x201)))) &&
                                       ((cStack_1e7 != '\0' ||
                                        (bVar137 = false, (uVar56 & 0x11f) != 0x101)))) {
                                      bVar137 = (uVar56 & 0x40) == 0 || bStack_1e6 != false;
                                    }
                                    uVar61._4_1_ = uStack_1cc;
                                    uVar61._0_4_ = uStack_1d0;
                                    uVar61._5_1_ = uStack_1cb;
                                    uVar61._6_2_ = uStack_1ca;
                                    if ((pthread_mutex_t *)uVar61 != (pthread_mutex_t *)0x0) {
                                      uVar75 = *(ushort *)uVar61 << 8 | *(ushort *)uVar61 >> 8;
                                    }
                                    if (((*(uint *)((long)p_Var58 + uVar99 * 0x14 + 4) &
                                         auStack_1f0._4_4_) != 0) &&
                                       ((cStack_1e4 == '\0' ||
                                        (cStack_1e4 ==
                                         *(char *)((long)p_Var58 + uVar99 * 0x14 + 0xf))))) {
                                      if ((code *)CONCAT44(uStack_1dc,uStack_1e0) == (code *)0x0) {
                                        if (bVar137) goto LAB_003f088e;
                                      }
                                      else {
                                        cVar42 = (*(code *)CONCAT44(uStack_1dc,uStack_1e0))
                                                           (puVar131,uVar75,
                                                            CONCAT44(uStack_1d4,uStack_1d8));
                                        auVar257._8_8_ = extraout_XMM1_Qa_05;
                                        auVar257._0_8_ = extraout_XMM0_Qa_06;
                                        uVar107 = _uStack_258 & 0xffffffff;
                                        if (cVar42 == '\0') goto LAB_003f0885;
                                        uVar61._4_1_ = uStack_1cc;
                                        uVar61._0_4_ = uStack_1d0;
                                        uVar61._5_1_ = uStack_1cb;
                                        uVar61._6_2_ = uStack_1ca;
                                      }
                                      uVar107 = uStack_268;
                                      uVar100 = auVar257._8_8_;
                                      if ((pthread_mutex_t *)uVar61 != (pthread_mutex_t *)0x0) {
                                        phVar103 = (hb_buffer_t *)(uVar61 + 2);
                                        uStack_1d0 = (uint)phVar103;
                                        uStack_1cc = (undefined1)((ulong)phVar103 >> 0x20);
                                        uStack_1cb = (undefined1)((ulong)phVar103 >> 0x28);
                                        uStack_1ca = (undefined2)((ulong)phVar103 >> 0x30);
                                      }
                                      uVar127._0_4_ = *(uint *)(_uStack_250 + _uStack_248 * 4);
                                      param_2._4_4_ = uStack_274;
                                      param_2._0_4_ = local_278;
                                      uVar61._4_4_ = 0;
                                      uVar61._0_4_ = (uint)uVar127 >> 4;
                                      if ((((ulong)((__pthread_internal_list *)(param_2 + 0xb0))->
                                                   __prev >>
                                            ((ulong)(byte)(char)((uint)uVar127 >> 4) & 0x3f) & 1) !=
                                           0) && ((*(ulong *)(param_2 + 0xb8) >>
                                                   ((ulong)(uint)uVar127 & 0x3f) & 1) != 0)) {
                                        uVar61._4_4_ = 0;
                                        uVar61._0_4_ = (uint)uVar127 >> 9;
                                        if (((ulong)((__pthread_internal_list *)(param_2 + 0xc0))->
                                                    __prev >>
                                             ((ulong)(byte)(char)((uint)uVar127 >> 9) & 0x3f) & 1)
                                            != 0) {
                                          uVar125 = p_Stack_200._0_4_;
                                          uVar99 = (ulong)(uint)p_Stack_200._0_4_;
                                          uVar80._0_4_ = *(uint *)(_uStack_250 + uVar99 * 0x14);
                                          uVar61._4_4_ = 0;
                                          uVar61._0_4_ = (uint)uVar80 >> 4;
                                          if ((((ulong)((pthread_mutex_t *)(param_2 + 200))->__align
                                                >> ((ulong)(byte)(char)((uint)uVar80 >> 4) & 0x3f) &
                                               1) != 0) &&
                                             (((ulong)((__pthread_internal_list *)(param_2 + 0xd0))
                                                      ->__prev >> ((ulong)(uint)uVar80 & 0x3f) & 1)
                                              != 0)) {
                                            uVar61._0_4_ = (uint)uVar80 >> 9;
                                            uVar61._4_4_ = 0;
                                            if ((*(ulong *)(param_2 + 0xd8) >>
                                                 ((ulong)(byte)(char)(uint)uVar61 & 0x3f) & 1) != 0)
                                            {
                                              uVar61 = param_2;
                                              uVar127._0_4_ =
                                                   KerxSubTableFormat2<AAT::KerxSubTableHeader>::
                                                   get_kerning((
                                                  KerxSubTableFormat2<AAT::KerxSubTableHeader> *)
                                                  auStack_23c._12_8_,(uint)uVar127,(uint)uVar80,
                                                  param_2);
                                              uVar80 = uStack_268;
                                              auVar257._8_8_ = uVar100;
                                              auVar257._0_8_ = extraout_XMM0_Qa_08;
                                              if ((uint)uVar127 != 0) {
                                                if (uStack_228 == 4) {
                                                  iVar43 = (int)((ulong)((long)(short)(uint)uVar127
                                                                         * *(long *)(_uStack_240 +
                                                                                    0x58) + 0x8000)
                                                                >> 0x10);
                                                  if ((uVar87 & 0x40000000) != 0) {
                                                    *(int *)((hb_buffer_t *)
                                                             (auStack_23c._4_8_ + 0xc) +
                                                            uVar99 * 0x14) = iVar43;
                                                    goto LAB_003f0a68;
                                                  }
                                                  uVar61._0_4_ = iVar43 >> 1;
                                                  uVar61._4_4_ = 0;
                                                  phVar103 = (hb_buffer_t *)
                                                             (auStack_23c._4_8_ + _uStack_248 * 4);
                                                  *(uint *)phVar103 =
                                                       *(int *)phVar103 + (uint)uVar61;
                                                  phVar103 = (hb_buffer_t *)
                                                             (auStack_23c._4_8_ + uVar99 * 0x14);
                                                  *(uint *)phVar103 =
                                                       *(int *)phVar103 + (iVar43 - (uint)uVar61);
                                                  *(uint *)((hb_buffer_t *)(auStack_23c._4_8_ + 8) +
                                                           uVar99 * 0x14) =
                                                       *(int *)((hb_buffer_t *)
                                                                (auStack_23c._4_8_ + 8) +
                                                               uVar99 * 0x14) +
                                                       (iVar43 - (uint)uVar61);
                                                }
                                                else {
                                                  iVar43 = (int)((ulong)((long)(short)(uint)uVar127
                                                                         * (long)((
                                                  __pthread_internal_list *)(_uStack_240 + 0x60))->
                                                  __prev + 0x8000) >> 0x10);
                                                  if ((uVar87 & 0x40000000) == 0) {
                                                    uVar61._0_4_ = iVar43 >> 1;
                                                    uVar61._4_4_ = 0;
                                                    *(uint *)((hb_buffer_t *)(auStack_23c._4_8_ + 4)
                                                             + _uStack_248 * 4) =
                                                         *(int *)((hb_buffer_t *)
                                                                  (auStack_23c._4_8_ + 4) +
                                                                 _uStack_248 * 4) + (uint)uVar61;
                                                    *(uint *)((hb_buffer_t *)(auStack_23c._4_8_ + 4)
                                                             + uVar99 * 0x14) =
                                                         *(int *)((hb_buffer_t *)
                                                                  (auStack_23c._4_8_ + 4) +
                                                                 uVar99 * 0x14) +
                                                         (iVar43 - (uint)uVar61);
                                                    *(uint *)((hb_buffer_t *)
                                                              (auStack_23c._4_8_ + 0xc) +
                                                             uVar99 * 0x14) =
                                                         *(int *)((hb_buffer_t *)
                                                                  (auStack_23c._4_8_ + 0xc) +
                                                                 uVar99 * 0x14) +
                                                         (iVar43 - (uint)uVar61);
                                                  }
                                                  else {
                                                    *(int *)((hb_buffer_t *)(auStack_23c._4_8_ + 8)
                                                            + uVar99 * 0x14) = iVar43;
LAB_003f0a68:
                                                    *(byte *)&((__pthread_internal_list *)
                                                              (uStack_268 + 0xc0))->__prev =
                                                         *(byte *)&((__pthread_internal_list *)
                                                                   (uStack_268 + 0xc0))->__prev | 8;
                                                    uVar61 = auStack_23c._4_8_;
                                                  }
                                                }
                                                auVar257 = hb_buffer_t::unsafe_to_break
                                                                     ((hb_buffer_t *)uStack_268,
                                                                      uStack_258,uVar125 + 1);
                                                param_2._4_4_ = uStack_274;
                                                uVar107 = uVar80;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      uVar76._4_4_ = 0;
                                      uVar76._0_4_ = p_Stack_200._0_4_;
                                      goto LAB_003f06e1;
                                    }
LAB_003f0885:
                                    iVar43 = (int)uVar107;
                                    auVar175 = _p_Stack_200;
                                    if (!bVar137) break;
                                  }
                                  else if (((byte)auStack_1f0[0] & 0x10) == 0) {
                                    if (((auStack_1f0._0_4_ & 0xff00) == 0) ||
                                       (uVar61._0_4_ = uVar56 & 0xff00, uVar61._4_4_ = 0,
                                       (auStack_1f0._0_4_ & 0xff00) == (uint)uVar61))
                                    goto LAB_003f07a9;
                                  }
                                  else {
                                    uVar127 = OT::GDEF::accelerator_t::mark_set_covers
                                                        (*(accelerator_t **)((long)piVar52 + 0xf8),
                                                         (uint)auStack_1f0._0_4_ >> 0x10,*puVar131);
                                    auVar257._8_8_ = uVar100;
                                    auVar257._0_8_ = extraout_XMM0_Qa_07;
                                    uVar107 = _uStack_258 & 0xffffffff;
                                    if ((char)uVar127 != '\0') goto LAB_003f07a9;
                                  }
LAB_003f088e:
                                  iVar43 = (int)uVar107;
                                  uVar76._4_4_ = 0;
                                  uVar76._0_4_ = p_Stack_200._0_4_;
                                  auVar175 = _p_Stack_200;
                                  if (iVar98 <= (int)p_Stack_200._0_4_) break;
                                  uVar61 = *(undefined8 *)((long)local_1f8 + 0xa0);
                                  piVar52 = local_1f8;
                                } while( true );
                              }
                              _p_Stack_200 = auVar175;
                              uVar76._0_4_ = iVar43 + 1;
                              uVar76._4_4_ = 0;
                              param_2._4_4_ = uStack_274;
                              param_2._0_4_ = local_278;
                              uVar107 = uStack_268;
                            }
LAB_003f06e1:
                            auVar259 = auVar257;
                          } while ((uint)uVar76 < uStack_25c);
                        }
                        hb_buffer_t::message
                                  (auVar259._0_8_,auVar259._8_8_,in_XMM2.__prev,in_XMM3._0_8_,
                                   in_XMM4.__prev,in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,
                                   (hb_buffer_t *)uVar107,_uStack_240,"end kern",uVar61,uVar120,
                                   param_6,uVar283);
                        goto LAB_003f0e9e;
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
    case 3:
    case 5:
      break;
    case 4:
      uVar127._0_4_ = *(uint *)(uVar127 + 0x1c);
      p_Var58 = ((__pthread_internal_list *)(param_2 + 0x10))->__prev[2].__prev;
      uStack_248 = *(int *)&p_Var58[1].__next;
      if (*(int *)&p_Var58[1].__next == -1) {
        p_Var89 = p_Var58[7].__next;
        while (p_Var89 == (__pthread_internal_list *)0x0) {
          p_Var89 = p_Var58[6].__next;
          if (p_Var89 == (__pthread_internal_list *)0x0) {
            p_Var89 = (__pthread_internal_list *)&_hb_NullPool;
LAB_003f1424:
            param_2._4_4_ = uStack_274;
            param_2._0_4_ = local_278;
            uVar80._0_4_ = *(uint *)&p_Var89[1].__next;
            goto joined_r0x003f143a;
          }
          local_208 = (int  [2])((ulong)local_208 & 0xffffffff00000000);
          _auStack_1f0 = (undefined1  [16])0x0;
          p_Stack_200._0_1_ = '\0';
          p_Stack_200._1_1_ = '\0';
          p_Stack_200._2_1_ = '\0';
          p_Stack_200._3_1_ = '\0';
          p_Stack_200._4_1_ = '\0';
          p_Stack_200._5_1_ = '\0';
          p_Stack_200._6_1_ = '\0';
          p_Stack_200._7_1_ = '\0';
          local_1f8._0_1_ = '\0';
          local_1f8._1_1_ = '\0';
          local_1f8._2_1_ = '\0';
          local_1f8._3_1_ = '\0';
          local_1f8._4_1_ = '\0';
          local_1f8._5_1_ = '\0';
          local_1f8._6_1_ = '\0';
          local_1f8._7_1_ = '\0';
          uStack_1e0 = uStack_1e0 & 0xffffff00;
          uStack_1cb = 0;
          uStack_1dc = 0;
          uStack_1d8 = 0;
          uStack_1d4 = 0;
          uStack_1d0 = 0;
          uStack_1cc = 1;
          piVar52 = (int *)&_hb_NullPool;
          if (p_Var89[2].__prev != (__pthread_internal_list *)0x0) {
            piVar52 = (int *)(*(code *)p_Var89[2].__prev)(p_Var89,0x6d617870,p_Var89[2].__next);
            if (piVar52 == (int *)0x0) {
              piVar52 = (int *)&_hb_NullPool;
            }
          }
          p_Var89 = (__pthread_internal_list *)
                    hb_sanitize_context_t::sanitize_blob<OT::maxp>
                              ((hb_sanitize_context_t *)local_208,piVar52);
          auVar259 = hb_sanitize_context_t::~hb_sanitize_context_t
                               ((hb_sanitize_context_t *)local_208);
          in_XMM1.__prev = auVar259._8_8_;
          _Var144.__prev = auVar259._0_8_;
          in_XMM1.__next = extraout_XMM1_Qb_05;
          _Var144.__next = extraout_XMM0_Qb_04;
          if (p_Var89 == (__pthread_internal_list *)0x0) {
            p_Var89 = (__pthread_internal_list *)&_hb_NullPool;
            LOCK();
            bVar137 = p_Var58[7].__next == (__pthread_internal_list *)0x0;
            if (bVar137) {
              p_Var58[7].__next = (__pthread_internal_list *)&_hb_NullPool;
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar137 = p_Var58[7].__next == (__pthread_internal_list *)0x0;
            if (bVar137) {
              p_Var58[7].__next = p_Var89;
            }
            UNLOCK();
          }
          if (bVar137) goto LAB_003f1424;
          if (((p_Var89 != (__pthread_internal_list *)0x0) &&
              (p_Var89 != (__pthread_internal_list *)&_hb_NullPool)) &&
             (*(int *)&p_Var89->__prev != 0)) {
            LOCK();
            *(int *)&p_Var89->__prev = *(int *)&p_Var89->__prev + -1;
            UNLOCK();
            if (*(int *)&p_Var89->__prev == 0) {
              *(undefined4 *)&p_Var89->__prev = 0xffff2153;
              unaff_RBX = p_Var89->__next;
              if ((pthread_mutex_t *)unaff_RBX != (pthread_mutex_t *)0x0) {
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&((pthread_mutex_t *)(unaff_RBX + 0x28))->__data,
                           (pthread_mutex_t *)unaff_RBX);
                in_XMM1.__next = extraout_XMM1_Qb_06;
                in_XMM1.__prev = extraout_XMM1_Qa_07;
                free((void *)unaff_RBX);
                p_Var89->__next = (__pthread_internal_list *)0x0;
              }
              if (p_Var89[2].__next != (__pthread_internal_list *)0x0) {
                (*(code *)p_Var89[2].__next)(p_Var89[2].__prev);
                in_XMM1.__next = extraout_XMM1_Qb_07;
                in_XMM1.__prev = extraout_XMM1_Qa_08;
              }
              free(p_Var89);
              _Var144 = extraout_XMM0_08;
            }
          }
          param_2._4_4_ = uStack_274;
          param_2._0_4_ = local_278;
          p_Var89 = p_Var58[7].__next;
        }
        uVar80._0_4_ = *(uint *)&p_Var89[1].__next;
joined_r0x003f143a:
        p_Var113 = (__pthread_internal_list *)&_hb_NullPool;
        if (5 < (uint)uVar80) {
          p_Var113 = p_Var89[1].__prev;
        }
        uVar56 = *(ushort *)((long)&p_Var113->__prev + 4);
        uVar75 = uVar56 << 8 | uVar56 >> 8;
        if (uVar56 == 0) {
          uVar75 = 0;
        }
        uStack_248 = CONCAT22(0,uVar75);
        *(uint *)&p_Var58[1].__next = CONCAT22(0,uVar75);
      }
      uVar93 = _Var144.__prev;
      _uStack_258 = auStack_23c._12_8_ + 0xc;
      uVar80._0_4_ = *(uint *)(auStack_23c._12_8_ + 0x14);
      uVar57 = *(uint *)(auStack_23c._12_8_ + 0x18);
      phVar103 = (hb_buffer_t *)
                 ((ulong)(uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 | (uVar57 & 0xff00) << 8 |
                         uVar57 << 0x18) + _uStack_258);
      uVar99 = (ulong)(ushort)(*(ushort *)
                                ((hb_buffer_t *)(auStack_23c._12_8_ + 0xe) +
                                ((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                                 ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18)) << 8 |
                              *(ushort *)
                               ((hb_buffer_t *)(auStack_23c._12_8_ + 0xe) +
                               ((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                                ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18)) >> 8);
      if ((*(short *)(phVar103 + uVar99 * 6 + 4) == -1) && (*(short *)(phVar103 + uVar99 * 6) == 0))
      {
        p_Var58 = ((__pthread_internal_list *)(param_2 + 0x80))->__prev;
        if (((ulong)((__pthread_internal_list *)(param_2 + 0xb0))->__prev & (ulong)p_Var58) != 0) {
          if ((*(ulong *)(param_2 + 0xb8) & *(ulong *)(param_2 + 0x88)) != 0) {
            p_Var89 = ((__pthread_internal_list *)(param_2 + 0x90))->__prev;
            if (((ulong)((__pthread_internal_list *)(param_2 + 0xc0))->__prev & (ulong)p_Var89) != 0
               ) {
              if ((((pthread_mutex_t *)(param_2 + 200))->__align & (ulong)p_Var58) != 0) {
                if (((ulong)((__pthread_internal_list *)(param_2 + 0xd0))->__prev &
                    *(ulong *)(param_2 + 0x88)) != 0) {
                  if (((ulong)p_Var89 & *(ulong *)(param_2 + 0xd8)) != 0) goto LAB_003eed98;
                }
              }
            }
          }
        }
      }
      else {
LAB_003eed98:
        lVar88 = *(long *)&((pthread_mutex_t *)(param_2 + 0x78))->__data;
        if ((lVar88 == 0) || (*(uint *)(lVar88 + 4) < 2)) {
          puVar131 = (uint *)0x0;
          p_Var58 = ((__pthread_internal_list *)(param_2 + 0x20))->__prev;
          *(undefined4 *)((long)&p_Var58[5].__next + 4) = 0;
          cVar42 = *(char *)&p_Var58[5].__next;
        }
        else {
          puVar131 = *(uint **)(lVar88 + 8);
          p_Var58 = ((__pthread_internal_list *)(param_2 + 0x20))->__prev;
          *(undefined4 *)((long)&p_Var58[5].__next + 4) = 0;
          cVar42 = *(char *)&p_Var58[5].__next;
        }
        if (cVar42 != '\0') {
          uStack_228 = ((uint)uVar127 & 0xff) >> 6;
          auStack_23c._4_8_ =
               (long)((ulong)((uint)uVar127 >> 0x18 | ((uint)uVar127 & 0xff0000) >> 8 |
                             ((uint)uVar127 & 0xff00) << 8) + auStack_23c._12_8_) + 0xc;
          uVar80._0_4_ = 0;
          _uStack_260 = _uStack_260 & 0xffffffff;
          uStack_268 = uStack_268 & 0xffffffff00000000;
          uVar57 = 0;
          uVar127._0_4_ = *(uint *)&p_Var58[6].__prev;
          uVar99 = 0;
          if (puVar131 == (uint *)0x0) goto LAB_003ef1d0;
          while( true ) {
            uVar93 = _Var144.__prev;
            if ((uint)uVar80 < (uint)uVar127) {
              uVar87 = *(uint *)((long)p_Var58[7].__prev + uVar99 * 0x14 + 8);
              uVar107 = puVar131 + 3;
              puVar65 = puVar131;
              do {
                puVar65 = puVar65 + -3;
                unaff_RBX = uVar107 + -0xc;
                phVar103 = (hb_buffer_t *)(uVar107 + -8);
                uVar107 = unaff_RBX;
              } while (uVar87 < *(uint *)phVar103);
              do {
                puVar131 = puVar65 + 3;
                puVar1 = puVar65 + 5;
                puVar65 = puVar131;
              } while (*puVar1 < uVar87);
            }
            if ((*puVar131 & *(uint *)(CONCAT44(uStack_274,local_278) + 0xe0)) != 0)
            goto LAB_003ef1d3;
            param_2._4_4_ = uStack_274;
            param_2._0_4_ = local_278;
            uVar95 = _uStack_280;
            if ((uint)uVar80 == (uint)uVar127) break;
            if (*(char *)((long)&p_Var58[5].__next + 2) == '\0') {
              _uStack_280 = (ulong)uStack_27c << 0x20;
              goto LAB_003ef9f3;
            }
            p_Var113 = p_Var58[7].__next;
            p_Var89 = p_Var58[7].__prev;
            uVar127._0_4_ = *(uint *)((long)&p_Var58[6].__prev + 4);
            if ((p_Var113 == p_Var89) && ((uint)uVar127 == (uint)uVar80)) {
              _uStack_280 = (ulong)uStack_27c << 0x20;
              uVar127._0_4_ = (uint)uVar80;
              goto LAB_003ef9ea;
            }
            uVar127._0_4_ = (uint)uVar127 + 1;
            if (((uint)uVar127 == 0) || ((uint)uVar127 < *(uint *)&p_Var58[6].__next)) {
              if (p_Var113 == p_Var89) {
LAB_003ef16d:
                uVar127._0_4_ = *(uint *)((long)&p_Var58[6].__prev + 4);
                if (*(int *)((long)&p_Var58[5].__next + 4) + 1U < (uint)uVar127 + 1) {
                  p_Var113 = p_Var58[8].__prev;
                  p_Var58[7].__next = p_Var113;
                  _uStack_280 = (ulong)uStack_27c << 0x20;
                  goto joined_r0x003ef194;
                }
                _uStack_280 = (ulong)uStack_27c << 0x20;
                goto LAB_003ef9bd;
              }
LAB_003ef145:
              _uStack_280 = _uStack_280 & 0xffffffff00000000;
              goto LAB_003ef9c0;
            }
            uVar107 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var58,(uint)uVar127);
            uVar93 = extraout_XMM0_00.__prev;
            if ((char)uVar107 != '\0') {
              p_Var89 = p_Var58[7].__prev;
              p_Var113 = p_Var58[7].__next;
              if (p_Var113 == p_Var89) goto LAB_003ef16d;
              goto LAB_003ef145;
            }
            _uStack_280 = (ulong)uStack_27c << 0x20;
            cVar42 = *(char *)&p_Var58[5].__next;
            _Var144 = extraout_XMM0_00;
            while( true ) {
              uVar95 = _uStack_280;
              if (cVar42 == '\0') goto LAB_003f0ec0;
              uVar57 = (uint)(ushort)uStack_280;
              uVar80._0_4_ = *(uint *)((long)&p_Var58[5].__next + 4);
              uVar127._0_4_ = *(uint *)&p_Var58[6].__prev;
              uVar99 = (ulong)(uint)uVar80;
              if (puVar131 != (uint *)0x0) break;
LAB_003ef1d0:
              puVar131 = (uint *)0x0;
LAB_003ef1d3:
              if ((uint)uVar80 < (uint)uVar127) {
                uVar127._0_4_ = *(uint *)((long)p_Var58[7].__prev + uVar99 * 0x14);
                if ((ulong)(uint)uVar127 == 0xffff) {
                  uVar99 = 2;
                }
                else {
                  lVar88 = CONCAT44(uStack_274,local_278);
                  uVar99 = 1;
                  if ((((*(ulong *)(lVar88 + 0x98) >> ((ulong)((uint)uVar127 >> 4) & 0x3f) & 1) != 0
                       ) && ((*(ulong *)(lVar88 + 0xa0) >> ((ulong)(uint)uVar127 & 0x3f) & 1) != 0))
                     && ((*(ulong *)(lVar88 + 0xa8) >> ((ulong)((uint)uVar127 >> 9) & 0x3f) & 1) !=
                         0)) {
                    uVar80._0_4_ = *(uint *)(_uStack_258 + 4);
                    pLVar45 = Lookup<OT::IntType<unsigned_short,2u>>::get_value
                                        ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                         ((ulong)((uint)uVar80 >> 0x18 |
                                                  ((uint)uVar80 & 0xff0000) >> 8 |
                                                  ((uint)uVar80 & 0xff00) << 8 |
                                                 (uint)uVar80 << 0x18) + _uStack_258),(uint)uVar127,
                                         uStack_248);
                    _Var144 = extraout_XMM0_01;
                    if (pLVar45 != (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
                      uVar99 = (ulong)(ushort)(*(ushort *)pLVar45 << 8 | *(ushort *)pLVar45 >> 8);
                    }
                  }
                }
              }
              else {
                uVar99 = 0;
              }
              uVar127._0_4_ = *(uint *)_uStack_258;
              uVar87 = (uint)uVar127 >> 0x18 | ((uint)uVar127 & 0xff0000) >> 8 |
                       ((uint)uVar127 & 0xff00) << 8 | (uint)uVar127 << 0x18;
              uVar81 = (uint)uVar99;
              uVar80._0_4_ = uVar81;
              if (uVar87 <= uVar81) {
                uVar80._0_4_ = 1;
              }
              uVar97 = *(uint *)(_uStack_258 + 8);
              uVar5 = *(uint *)(_uStack_258 + 0xc);
              phVar103 = (hb_buffer_t *)
                         ((ulong)(uVar97 >> 0x18 | (uVar97 & 0xff0000) >> 8 | (uVar97 & 0xff00) << 8
                                 | uVar97 << 0x18) + _uStack_258);
              phVar85 = (hb_buffer_t *)
                        ((ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                                uVar5 << 0x18) + _uStack_258);
              uVar92 = (ulong)(ushort)(*(ushort *)
                                        (phVar103 + (ulong)((uint)uVar80 + uVar87 * uVar57) * 2) <<
                                       8 | *(ushort *)
                                            (phVar103 + (ulong)((uint)uVar80 + uVar87 * uVar57) * 2)
                                           >> 8);
              _uStack_250 = uVar92 * 3;
              uVar56 = *(ushort *)(phVar85 + uVar92 * 6);
              uStack_280 = CONCAT22(0,uVar56);
              unaff_RBX = _uStack_250;
              if (*(short *)(phVar85 + uVar92 * 6 + 4) == -1) {
                if ((uVar57 != 0) &&
                   (((*(ushort *)(phVar85 + uVar92 * 6 + 2) & 0x40) == 0 || (uVar56 != 0)))) {
                  if (uVar87 <= uVar81) {
                    uVar99 = 1;
                  }
                  uVar99 = (ulong)(ushort)(*(ushort *)(phVar103 + uVar99 * 2) << 8 |
                                          *(ushort *)(phVar103 + uVar99 * 2) >> 8);
                  if (((*(short *)(phVar85 + uVar99 * 6 + 4) != -1) ||
                      (unaff_RBX._4_4_ = 0, unaff_RBX._0_4_ = CONCAT22(0,uVar56),
                      uVar56 != *(ushort *)(phVar85 + uVar99 * 6))) ||
                     (((*(ushort *)(phVar85 + uVar92 * 6 + 2) ^
                       *(ushort *)(phVar85 + uVar99 * 6 + 2)) & 0x40) != 0)) goto LAB_003ef350;
                }
                if (*(short *)(phVar85 +
                              (ulong)(ushort)(*(ushort *)
                                               (phVar103 +
                                               (ulong)((uint)((uint)uVar127 == 0) + uVar87 * uVar57)
                                               * 2) << 8 |
                                             *(ushort *)
                                              (phVar103 +
                                              (ulong)((uint)((uint)uVar127 == 0) + uVar87 * uVar57)
                                              * 2) >> 8) * 6 + 4) != -1) goto LAB_003ef350;
              }
              else {
LAB_003ef350:
                uVar127._0_4_ = *(uint *)((long)&p_Var58[5].__next + 4);
                uVar80._0_4_ = (uint)uVar127;
                if (*(char *)((long)&p_Var58[5].__next + 2) != '\0') {
                  uVar80._0_4_ = *(uint *)((long)&p_Var58[6].__prev + 4);
                }
                if (((uint)uVar80 != 0) && ((uint)uVar127 < *(uint *)&p_Var58[6].__prev)) {
                  uVar120 = (pthread_mutex_t *)0x1;
                  auVar259 = hb_buffer_t::_set_glyph_flags
                                       ((hb_buffer_t *)p_Var58,3,(uint)uVar80 - 1,(uint)uVar127 + 1,
                                        '\x01');
                  in_XMM1.__prev = auVar259._8_8_;
                  _Var144.__prev = auVar259._0_8_;
                  in_XMM1.__next = extraout_XMM1_Qb;
                  _Var144.__next = extraout_XMM0_Qb;
                }
              }
              param_2._4_4_ = uStack_274;
              param_2._0_4_ = local_278;
              uVar95 = _uStack_280;
              if ((((char)uStack_25c == '\0') ||
                  (uVar75 = *(ushort *)(phVar85 + _uStack_250 * 2 + 4), uVar75 == 0xffff)) ||
                 (uVar127._0_4_ = *(uint *)((long)&p_Var58[5].__next + 4), unaff_RBX._4_4_ = 0,
                 unaff_RBX._0_4_ = (uint)uVar127, *(uint *)&p_Var58[6].__prev <= (uint)uVar127)) {
LAB_003ef8e0:
                if (((byte)phVar85[_uStack_250 * 2 + 2] & 0x80) != 0) {
                  uVar125 = *(undefined4 *)((long)&p_Var58[5].__next + 4);
                  uStack_268._0_4_ = (float)uVar125;
                  uStack_25c = (int)CONCAT71((uint7)(uint3)((uint)uVar125 >> 8),1);
                }
LAB_003ef8fa:
                uVar93 = _Var144.__prev;
                uVar80._0_4_ = *(uint *)((long)&p_Var58[5].__next + 4);
                if ((uint)uVar80 == *(uint *)&p_Var58[6].__prev) goto LAB_003f0ec0;
              }
              else {
                uVar75 = uVar75 << 8 | uVar75 >> 8;
                _uStack_240 = p_Var58[8].__prev;
                if (uStack_228 == 2) {
                  phVar103 = (hb_buffer_t *)(auStack_23c._4_8_ + (ulong)uVar75 * 8);
                  if ((((ulong)((long)phVar103 -
                               (long)((__pthread_internal_list *)(param_2 + 0x30))->__prev) <=
                        (ulong)*(uint *)&((__pthread_internal_list *)(param_2 + 0x40))->__prev) &&
                      ((*(int *)(param_2 + 0x38) - (int)phVar103 & 0xfffffff8U) != 0)) &&
                     (iVar43 = *(int *)(param_2 + 0x44) + -8, *(int *)(param_2 + 0x44) = iVar43,
                     0 < iVar43)) {
                    uVar75 = *(ushort *)(phVar103 + 2);
                    uVar105 = *(ushort *)(phVar103 + 6);
                    param_6 = ((__pthread_internal_list *)(param_2 + 0x10))->__prev;
                    *(int *)((hb_buffer_t *)(_uStack_240 + 8) + unaff_RBX * 0x14) =
                         (int)((ulong)((long)(short)(*(ushort *)phVar103 << 8 |
                                                    *(ushort *)phVar103 >> 8) *
                                       *(long *)(param_6 + 0x58) + 0x8000) >> 0x10) -
                         (int)((ulong)((long)(short)(*(ushort *)(phVar103 + 4) << 8 |
                                                    *(ushort *)(phVar103 + 4) >> 8) *
                                       *(long *)(param_6 + 0x58) + 0x8000) >> 0x10);
                    p_Var89 = ((__pthread_internal_list *)(param_6 + 0x60))->__prev;
                    *(int *)((hb_buffer_t *)(_uStack_240 + 0xc) + unaff_RBX * 0x14) =
                         (int)((ulong)((long)(short)(uVar75 << 8 | uVar75 >> 8) * (long)p_Var89 +
                                      0x8000) >> 0x10) -
                         (int)((ulong)((long)(short)(uVar105 << 8 | uVar105 >> 8) * (long)p_Var89 +
                                      0x8000) >> 0x10);
                    uVar120 = unaff_RBX;
                    goto LAB_003ef8b4;
                  }
                  goto LAB_003ef8fa;
                }
                if (uStack_228 == 1) {
                  phVar103 = (hb_buffer_t *)(auStack_23c._4_8_ + (ulong)((uint)uVar75 * 2) * 2);
                  if ((((ulong)*(uint *)&((__pthread_internal_list *)(param_2 + 0x40))->__prev <
                        (ulong)((long)phVar103 -
                               (long)((__pthread_internal_list *)(param_2 + 0x30))->__prev)) ||
                      ((*(int *)(param_2 + 0x38) - (int)phVar103 & 0xfffffffcU) == 0)) ||
                     (iVar43 = *(int *)(param_2 + 0x44) + -4, *(int *)(param_2 + 0x44) = iVar43,
                     iVar43 < 1)) goto LAB_003ef8fa;
                  lVar88 = *(long *)(param_2 + 0x68);
                  uVar127._0_4_ = *(uint *)(lVar88 + 4);
                  pLVar108 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                              *)&_hb_Null_OT_Index;
                  if ((uint)uVar127 != 0) {
                    pLVar108 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                                *)((ulong)((uint)uVar127 >> 0x18 | ((uint)uVar127 & 0xff0000) >> 8 |
                                           ((uint)uVar127 & 0xff00) << 8 | (uint)uVar127 << 0x18) +
                                  lVar88);
                  }
                  p_Stack_b8 = (__pthread_internal_list *)
                               CONCAT62(p_Stack_b8._2_6_,*(ushort *)(phVar103 + 2));
                  uVar75 = *(ushort *)phVar103;
                  pLVar108 = Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                             ::get_value(pLVar108,*(uint *)(*(long *)(*(long *)(CONCAT44(uStack_274,
                                                                                         local_278)
                                                                               + 0x20) + 0x70) +
                                                           (uStack_268 & 0xffffffff) * 0x14),
                                         *(uint *)(CONCAT44(uStack_274,local_278) + 0x60));
                  puStack_b0 = (ushort *)&_hb_NullPool;
                  if (pLVar108 !=
                      (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                       *)0x0) {
                    uVar75 = uVar75 << 8 | uVar75 >> 8;
                    uVar127._0_4_ = *(uint *)(lVar88 + 8);
                    lVar88 = (ulong)((uint)uVar127 >> 0x18 | ((uint)uVar127 & 0xff0000) >> 8 |
                                     ((uint)uVar127 & 0xff00) << 8 | (uint)uVar127 << 0x18) + lVar88
                    ;
                    uVar99 = (ulong)(ushort)(*(ushort *)pLVar108 << 8 | *(ushort *)pLVar108 >> 8);
                    uVar127._0_4_ = *(uint *)(uVar99 + lVar88);
                    puStack_b0 = (ushort *)&_hb_NullPool;
                    if ((uint)uVar75 <
                        ((uint)uVar127 >> 0x18 | ((uint)uVar127 & 0xff0000) >> 8 |
                         ((uint)uVar127 & 0xff00) << 8 | (uint)uVar127 << 0x18)) {
                      puStack_b0 = (ushort *)(lVar88 + uVar99 + (ulong)uVar75 * 4 + 4);
                    }
                  }
                  lVar126 = CONCAT44(uStack_274,local_278);
                  lVar88 = *(long *)(lVar126 + 0x68);
                  uVar127._0_4_ = *(uint *)(lVar88 + 4);
                  pLVar108 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                              *)&_hb_Null_OT_Index;
                  if ((uint)uVar127 != 0) {
                    pLVar108 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                                *)((ulong)((uint)uVar127 >> 0x18 | ((uint)uVar127 & 0xff0000) >> 8 |
                                           ((uint)uVar127 & 0xff00) << 8 | (uint)uVar127 << 0x18) +
                                  lVar88);
                  }
                  pLVar108 = Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                             ::get_value(pLVar108,*(uint *)(*(long *)(*(long *)(lVar126 + 0x20) +
                                                                     0x70) +
                                                           (ulong)*(uint *)(*(long *)(lVar126 + 0x20
                                                                                     ) + 0x5c) *
                                                           0x14),*(uint *)(lVar126 + 0x60));
                  puVar132 = (ushort *)&_hb_NullPool;
                  if (pLVar108 !=
                      (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                       *)0x0) {
                    uVar75 = (ushort)p_Stack_b8 << 8 | (ushort)p_Stack_b8 >> 8;
                    uVar127._0_4_ = *(uint *)(lVar88 + 8);
                    lVar88 = (ulong)((uint)uVar127 >> 0x18 | ((uint)uVar127 & 0xff0000) >> 8 |
                                     ((uint)uVar127 & 0xff00) << 8 | (uint)uVar127 << 0x18) + lVar88
                    ;
                    uVar99 = (ulong)(ushort)(*(ushort *)pLVar108 << 8 | *(ushort *)pLVar108 >> 8);
                    uVar127._0_4_ = *(uint *)(uVar99 + lVar88);
                    puVar132 = (ushort *)&_hb_NullPool;
                    if ((uint)uVar75 <
                        ((uint)uVar127 >> 0x18 | ((uint)uVar127 & 0xff0000) >> 8 |
                         ((uint)uVar127 & 0xff00) << 8 | (uint)uVar127 << 0x18)) {
                      puVar132 = (ushort *)(lVar88 + uVar99 + (ulong)uVar75 * 4 + 4);
                    }
                  }
                  param_2._4_4_ = uStack_274;
                  uVar120 = ((__pthread_internal_list *)(param_2 + 0x10))->__prev;
                  *(int *)((hb_buffer_t *)(_uStack_240 + 8) + unaff_RBX * 0x14) =
                       (int)((ulong)((long)(short)(*puStack_b0 << 8 | *puStack_b0 >> 8) *
                                     *(long *)(uVar120 + 0x58) + 0x8000) >> 0x10) -
                       (int)((ulong)((long)(short)(*puVar132 << 8 | *puVar132 >> 8) *
                                     *(long *)(uVar120 + 0x58) + 0x8000) >> 0x10);
                  *(int *)((hb_buffer_t *)(_uStack_240 + 0xc) + unaff_RBX * 0x14) =
                       (int)((ulong)((long)(short)(puStack_b0[1] << 8 | puStack_b0[1] >> 8) *
                                     *(long *)(uVar120 + 0x60) + 0x8000) >> 0x10) -
                       (int)((ulong)((long)(short)(puVar132[1] << 8 | puVar132[1] >> 8) *
                                     *(long *)(uVar120 + 0x60) + 0x8000) >> 0x10);
                  _Var144 = extraout_XMM0_02;
LAB_003ef8b4:
                  ((hb_buffer_t *)(_uStack_240 + 0x12))[unaff_RBX * 0x14] = (hb_buffer_t)0x1;
                  *(short *)((long)(_uStack_240 + 0x10) + unaff_RBX * 0x14) =
                       (short)uStack_268 - (short)*(undefined4 *)((long)&p_Var58[5].__next + 4);
                  *(byte *)&p_Var58[0xc].__prev = *(byte *)&p_Var58[0xc].__prev | 8;
                  goto LAB_003ef8e0;
                }
                if (uStack_228 != 0) goto LAB_003ef8b4;
                phVar103 = (hb_buffer_t *)(auStack_23c._4_8_ + (ulong)((uint)uVar75 * 2) * 2);
                if ((((ulong)*(uint *)&((__pthread_internal_list *)(param_2 + 0x40))->__prev <
                      (ulong)((long)phVar103 -
                             (long)((__pthread_internal_list *)(param_2 + 0x30))->__prev)) ||
                    ((*(int *)(param_2 + 0x38) - (int)phVar103 & 0xfffffffcU) == 0)) ||
                   (iVar43 = *(int *)(param_2 + 0x44) + -4, *(int *)(param_2 + 0x44) = iVar43,
                   iVar43 < 1)) goto LAB_003ef8fa;
                puStack_b0 = (ushort *)CONCAT62(puStack_b0._2_6_,*(ushort *)(phVar103 + 2));
                uStack_220 = 0;
                p_Stack_b8 = ((__pthread_internal_list *)(param_2 + 0x10))->__prev;
                uVar125 = *(undefined4 *)
                           ((long)((__pthread_internal_list *)(param_2 + 0x20))->__prev[7].__prev +
                           (uStack_268 & 0xffffffff) * 0x14);
                uStack_218 = 0;
                auStack_214._0_4_ = 0;
                p_Var89 = p_Stack_b8[9].__prev[1].__prev;
                if (p_Var89 == (__pthread_internal_list *)0x0) {
                  in_stack_fffffffffffffd78 = (__pthread_internal_list *)0x0;
                }
                else {
                  in_stack_fffffffffffffd78 = p_Var89[7].__prev;
                }
                uVar120 = auStack_214;
                param_6 = &uStack_218;
                iVar43 = (*(code *)p_Stack_b8[9].__prev[9].__prev)
                                   (p_Stack_b8,p_Stack_b8[9].__next,uVar125,
                                    *(ushort *)phVar103 << 8 | *(ushort *)phVar103 >> 8);
                in_XMM1.__next = extraout_XMM1_Qb_00;
                in_XMM1.__prev = extraout_XMM1_Qa_02;
                _Var144.__next = extraout_XMM0_Qb_00;
                _Var144.__prev = extraout_XMM0_Qa_02;
                uVar75 = (ushort)puStack_b0;
                if (iVar43 != 0) {
                  hb_font_t::get_glyph_h_origin_with_fallback
                            ((hb_font_t *)p_Stack_b8,uVar125,local_208,aiStack_98);
                  auStack_214._0_4_ = auStack_214._0_4_ - local_208[0];
                  uStack_218 = uStack_218 - aiStack_98[0];
                  this = *(hb_font_t **)(CONCAT44(uStack_274,local_278) + 0x10);
                  lVar88 = *(long *)(CONCAT44(uStack_274,local_278) + 0x20);
                  uVar125 = *(undefined4 *)
                             (*(long *)(lVar88 + 0x70) + (ulong)*(uint *)(lVar88 + 0x5c) * 0x14);
                  uStack_220 = 0;
                  lVar88 = *(long *)(*(long *)(this + 0x90) + 0x10);
                  if (lVar88 == 0) {
                    in_stack_fffffffffffffd78 = (__pthread_internal_list *)0x0;
                  }
                  else {
                    in_stack_fffffffffffffd78 = *(__pthread_internal_list **)(lVar88 + 0x70);
                  }
                  uVar120 = (long)&uStack_220 + 4;
                  param_6 = &uStack_220;
                  iVar43 = (**(code **)(*(long *)(this + 0x90) + 0x90))
                                     (this,*(undefined8 *)(this + 0x98),uVar125,
                                      uVar75 << 8 | uVar75 >> 8);
                  in_XMM1.__next = extraout_XMM1_Qb_01;
                  in_XMM1.__prev = extraout_XMM1_Qa_03;
                  _Var144.__next = extraout_XMM0_Qb_01;
                  _Var144.__prev = extraout_XMM0_Qa_03;
                  if (iVar43 != 0) {
                    auVar259 = hb_font_t::get_glyph_h_origin_with_fallback
                                         (this,uVar125,local_208,aiStack_98);
                    in_XMM1.__prev = auVar259._8_8_;
                    _Var144.__prev = auVar259._0_8_;
                    in_XMM1.__next = extraout_XMM1_Qb_02;
                    _Var144.__next = extraout_XMM0_Qb_02;
                    uStack_220._0_4_ = (int)uStack_220 - aiStack_98[0];
                    *(int *)((hb_buffer_t *)(_uStack_240 + 8) + unaff_RBX * 0x14) =
                         (local_208[0] - uStack_220._4_4_) + auStack_214._0_4_;
                    *(uint *)((hb_buffer_t *)(_uStack_240 + 0xc) + unaff_RBX * 0x14) =
                         uStack_218 - (int)uStack_220;
                    param_2._4_4_ = uStack_274;
                    goto LAB_003ef8b4;
                  }
                }
                uVar93 = _Var144.__prev;
                param_2._4_4_ = uStack_274;
                uVar80._0_4_ = *(uint *)((long)&p_Var58[5].__next + 4);
                if ((uint)uVar80 == *(uint *)&p_Var58[6].__prev) goto LAB_003f0ec0;
              }
              uVar93 = _Var144.__prev;
              if (*(char *)&p_Var58[5].__next == '\0') goto LAB_003f0ec0;
              uStack_280._2_2_ = 0;
              uStack_280._0_2_ = uVar56 << 8 | uVar56 >> 8;
              if ((((byte)phVar85[_uStack_250 * 2 + 2] & 0x40) == 0) ||
                 (iVar43 = *(int *)&p_Var58[0xc].__next, *(int *)&p_Var58[0xc].__next = iVar43 + -1,
                 iVar43 < 1)) {
                if (*(char *)((long)&p_Var58[5].__next + 2) != '\0') {
                  p_Var113 = p_Var58[7].__next;
                  p_Var89 = p_Var58[7].__prev;
                  uVar127._0_4_ = *(uint *)((long)&p_Var58[6].__prev + 4);
                  if ((p_Var113 == p_Var89) && ((uint)uVar127 == (uint)uVar80)) {
                    uVar127._0_4_ = (uint)uVar80;
                  }
                  else {
                    uVar127._0_4_ = (uint)uVar127 + 1;
                    if (((uint)uVar127 == 0) || ((uint)uVar127 < *(uint *)&p_Var58[6].__next)) {
                      if (p_Var113 == p_Var89) {
LAB_003ef983:
                        uVar127._0_4_ = *(uint *)((long)&p_Var58[6].__prev + 4);
                        if (*(int *)((long)&p_Var58[5].__next + 4) + 1U < (uint)uVar127 + 1) {
                          p_Var113 = p_Var58[8].__prev;
                          p_Var58[7].__next = p_Var113;
joined_r0x003ef194:
                          if ((uint)uVar127 != 0) {
                            memcpy(p_Var113,p_Var89,(ulong)(uint)uVar127 * 0x14);
                            p_Var89 = p_Var58[7].__prev;
                            p_Var113 = p_Var58[7].__next;
                          }
                        }
                        else {
LAB_003ef9bd:
                          p_Var113 = p_Var89;
                        }
                      }
                    }
                    else {
                      uVar107 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var58,(uint)uVar127);
                      _Var144 = extraout_XMM0_03;
                      if ((char)uVar107 == '\0') goto LAB_003ef9fa;
                      p_Var89 = p_Var58[7].__prev;
                      p_Var113 = p_Var58[7].__next;
                      if (p_Var113 == p_Var89) goto LAB_003ef983;
                    }
LAB_003ef9c0:
                    uVar99 = (ulong)*(uint *)((long)&p_Var58[5].__next + 4);
                    uVar92 = (ulong)*(uint *)((long)&p_Var58[6].__prev + 4);
                    *(undefined4 *)((long)p_Var113 + uVar92 * 0x14 + 0x10) =
                         *(undefined4 *)((long)p_Var89 + uVar99 * 0x14 + 0x10);
                    _Var144 = *(__pthread_internal_list *)((long)p_Var89 + uVar99 * 0x14);
                    *(__pthread_internal_list *)((long)p_Var113 + uVar92 * 0x14) = _Var144;
                    uVar80._0_4_ = *(uint *)((long)&p_Var58[5].__next + 4);
                    uVar127._0_4_ = *(uint *)((long)&p_Var58[6].__prev + 4);
                  }
LAB_003ef9ea:
                  *(uint *)((long)&p_Var58[6].__prev + 4) = (uint)uVar127 + 1;
                }
LAB_003ef9f3:
                *(uint *)((long)&p_Var58[5].__next + 4) = (uint)uVar80 + 1;
              }
LAB_003ef9fa:
              uVar93 = _Var144.__prev;
              cVar42 = *(char *)&p_Var58[5].__next;
            }
          }
        }
      }
      break;
    case 6:
      if ((*(byte *)(*(long *)(param_2 + 8) + 0xa8) & 1) != 0) {
        uVar87 = uVar87 << 0x18;
        if ((uVar87 & 0x10000000) == 0) {
          p_Var6 = ((__pthread_internal_list *)(param_2 + 0x80))->__prev;
          if (((ulong)((__pthread_internal_list *)(param_2 + 0xb0))->__prev & (ulong)p_Var6) != 0) {
            if ((*(ulong *)(param_2 + 0xb8) & *(ulong *)(param_2 + 0x88)) != 0) {
              p_Var7 = ((__pthread_internal_list *)(param_2 + 0x90))->__prev;
              if (((ulong)((__pthread_internal_list *)(param_2 + 0xc0))->__prev & (ulong)p_Var7) !=
                  0) {
                if ((((pthread_mutex_t *)(param_2 + 200))->__align & (ulong)p_Var6) != 0) {
                  if (((ulong)((__pthread_internal_list *)(param_2 + 0xd0))->__prev &
                      *(ulong *)(param_2 + 0x88)) != 0) {
                    if (((ulong)p_Var7 & *(ulong *)(param_2 + 0xd8)) != 0) {
                      unaff_RBX = ((__pthread_internal_list *)(param_2 + 0x10))->__prev;
                      uVar107 = ((__pthread_internal_list *)(param_2 + 0x20))->__prev;
                      uStack_280 = *(uint *)(*(long *)(param_2 + 8) + 0xa0);
                      bVar137 = hb_buffer_t::message
                                          (uVar93,p_Var58,p_Var89,uVar67,p_Var113,uVar47,p_Var116,
                                           p_Var53,(hb_buffer_t *)uVar107,unaff_RBX,"start kern",
                                           p_Var6,uVar120,param_6,uVar283);
                      uVar93 = extraout_XMM0_Qa_01;
                      uVar95 = _uStack_280;
                      if (bVar137) {
                        if (((byte)*(hb_buffer_t *)(uVar107 + 0x18) & 0x40) != 0) {
                          uVar127._0_4_ =
                               *(uint *)&((__pthread_internal_list *)(uVar107 + 0x60))->__prev;
                          *(byte *)&((__pthread_internal_list *)(uVar107 + 0xc0))->__prev =
                               *(byte *)&((__pthread_internal_list *)(uVar107 + 0xc0))->__prev |
                               0x20;
                          if ((ulong)(uint)uVar127 != 0) {
                            p_Var58 = ((__pthread_internal_list *)(uVar107 + 0x70))->__prev;
                            if ((ulong)(uint)uVar127 - 1 < 3) {
                              uVar99 = 0;
                            }
                            else {
                              p_Var89 = p_Var58 + 4;
                              uVar99 = 0;
                              do {
                                pbVar119 = (byte *)((long)&p_Var89[-4].__prev + 4);
                                *pbVar119 = *pbVar119 | 2;
                                *(byte *)&p_Var89[-3].__next = *(byte *)&p_Var89[-3].__next | 2;
                                pbVar119 = (byte *)((long)&p_Var89[-2].__next + 4);
                                *pbVar119 = *pbVar119 | 2;
                                *(byte *)&p_Var89->__prev = *(byte *)&p_Var89->__prev | 2;
                                uVar99 = uVar99 + 4;
                                p_Var89 = p_Var89 + 5;
                              } while (((uint)uVar127 & 0xfffffffc) != uVar99);
                            }
                            param_2._4_4_ = uStack_274;
                            param_2._0_4_ = local_278;
                            if ((ulong)((uint)uVar127 & 3) != 0) {
                              lVar88 = 0;
                              do {
                                pbVar119 = (byte *)((long)p_Var58 + lVar88 + uVar99 * 0x14 + 4);
                                *pbVar119 = *pbVar119 | 2;
                                lVar88 = lVar88 + 0x14;
                              } while ((ulong)((uint)uVar127 & 3) * 0x14 != lVar88);
                            }
                          }
                        }
                        puVar49 = &_hb_NullPool;
                        uStack_268 = uVar107;
                        OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                                  ((hb_ot_apply_context_t *)local_208,1,unaff_RBX,
                                   (undefined4 *)uVar107,
                                   (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
                        auVar259 = _auStack_1f0;
                        param_6._4_4_ = 0;
                        param_6._0_4_ = uStack_280;
                        uStack_c0 = 0xffffffff;
                        uVar76._1_7_ = SUB87(unaff_RBX,1);
                        uVar76._0_1_ = uStack_d0._6_1_;
                        cStack_1a5 = uStack_d0._7_1_;
                        if (iStack_180 != 0) {
                          cStack_1a5 = '\0';
                        }
                        auVar36._8_8_ = 0;
                        auVar36._0_8_ = extraout_XMM1_Qa_01;
                        auVar258 = auVar36 << 0x40;
                        auVar40._8_8_ = 0;
                        auVar40._0_8_ = extraout_XMM1_Qa_01;
                        uVar120._1_7_ = (undefined7)((ulong)puVar49 >> 8);
                        uVar120._0_1_ = uStack_d0._5_1_ != '\0';
                        cStack_1a6 = iStack_180 == 1;
                        uStack_d4 = 8;
                        uStack_1b8 = local_208;
                        local_1f8 = uStack_1b8;
                        puStack_1c8 = (uint *)CONCAT44(puStack_1c8._4_4_,
                                                       *(undefined4 *)(phStack_168 + 0x60));
                        uStack_1e0 = 0;
                        uStack_1dc = 0;
                        uStack_1d8 = 0;
                        uStack_1d4 = 0;
                        uStack_1d0 = 0;
                        uStack_1cc = 0;
                        uStack_1cb = 0;
                        uStack_1ca = 0;
                        auStack_1f0._0_4_ = 8;
                        auStack_1f0[8] = cStack_1a6;
                        cStack_1e7 = uStack_d0._6_1_;
                        _cStack_1e5 = auVar259._11_5_;
                        bStack_1e6 = (bool)cStack_1a6;
                        auStack_1f0._4_4_ = uStack_280;
                        auStack_1f0._0_4_ = 8;
                        cStack_1e5 = cStack_1a5;
                        uStack_1e3 = auVar259._13_3_;
                        cStack_1e4 = 0;
                        auVar14._4_4_ = auStack_190._12_4_;
                        auVar14._0_4_ = *(undefined4 *)(phStack_168 + 0x60);
                        _auStack_1a0 = (undefined1  [16])0x0;
                        auVar14._8_8_ = 0;
                        auStack_190 = auVar14 << 0x40;
                        cStack_1a8 = (bool)cStack_1a6 || uStack_d0._5_1_ != '\0';
                        uVar62 = (pthread_mutex_t *)0xffffffff00000008;
                        uStack_1b0 = 8;
                        uStack_1ac = 0xffffffff;
                        cStack_1a7 = '\x01';
                        uStack_1a4 = uStack_1a4 & 0xffffff00;
                        iVar43 = *(int *)&((__pthread_internal_list *)(uVar107 + 0x60))->__prev;
                        uStack_25c = iVar43;
                        _uStack_240 = unaff_RBX;
                        uStack_dc = uStack_280;
                        auVar259 = auVar40 << 0x40;
                        if (iVar43 != 0) {
                          _uStack_228 = CONCAT44(uStack_224,*(undefined4 *)(uVar107 + 0x38)) &
                                        0xfffffffffffffffe;
                          _uStack_250 = ((__pthread_internal_list *)(uVar107 + 0x70))->__prev;
                          auStack_23c._4_8_ = ((__pthread_internal_list *)(uVar107 + 0x80))->__prev;
                          uVar76 = (pthread_mutex_t *)0x0;
                          do {
                            auVar259 = _p_Stack_200;
                            iVar43 = (int)uVar76;
                            if ((*(uint *)((hb_buffer_t *)(_uStack_250 + 4) + uVar76 * 0x14) &
                                uStack_280) == 0) {
                              uVar76._0_4_ = iVar43 + 1;
                              uVar76._4_4_ = 0;
                              uVar62 = _uStack_250;
                            }
                            else {
                              p_Stack_200._0_4_ = iVar43;
                              auVar175 = _p_Stack_200;
                              local_1f8 = auVar259._8_8_;
                              uVar62 = *(undefined8 *)((long)local_1f8 + 0xa0);
                              iVar98 = *(int *)&((__pthread_internal_list *)(uVar62 + 0x60))->__prev
                              ;
                              puStack_1c8 = (uint *)CONCAT44(puStack_1c8._4_4_,iVar98);
                              if (*(int *)(uVar62 + 0x5c) == iVar43) {
                                uVar74 = *(undefined1 *)
                                          ((long)((__pthread_internal_list *)(uVar62 + 0x70))->
                                                 __prev + uVar76 * 0x14 + 0xf);
                              }
                              else {
                                uVar74 = 0;
                              }
                              if (cStack_1e5 == '\0') {
                                uVar74 = 0;
                              }
                              cStack_1e4 = uVar74;
                              iVar98 = iVar98 + -1;
                              _uStack_248 = uVar76 * 5;
                              if (iVar43 < iVar98) {
                                uStack_258 = iVar43;
                                piVar52 = local_1f8;
                                uVar107 = uVar76;
                                _p_Stack_200 = auVar175;
                                do {
                                  uVar100 = auVar258._8_8_;
                                  uVar127._0_4_ = (int)uVar76 + 1;
                                  uVar99 = (ulong)(uint)uVar127;
                                  p_Stack_200._0_4_ = (uint)uVar127;
                                  p_Var58 = ((__pthread_internal_list *)(uVar62 + 0x70))->__prev;
                                  uVar56 = *(ushort *)((long)p_Var58 + uVar99 * 0x14 + 0xc);
                                  uVar62._2_1_ = '\0';
                                  uVar62._3_1_ = '\0';
                                  uVar62._4_1_ = '\0';
                                  uVar62._5_1_ = '\0';
                                  uVar62._6_1_ = '\0';
                                  uVar62._7_1_ = '\0';
                                  uVar62._0_2_ = uVar56;
                                  if ((auStack_1f0._0_4_ & (uint)uVar56 & 0xe) != 0)
                                  goto LAB_003f0c4e;
                                  puVar131 = (uint *)((long)p_Var58 + uVar99 * 0x14);
                                  if ((uVar56 & 8) == 0) {
LAB_003f0b69:
                                    uVar56 = *(ushort *)((long)p_Var58 + uVar99 * 0x14 + 0x10);
                                    uVar75 = 0;
                                    bVar137 = false;
                                    if (((((uVar56 & 0x20) != 0) &&
                                         (bVar137 = false,
                                         (*(byte *)((long)p_Var58 + uVar99 * 0x14 + 0xc) & 0x10) ==
                                         0)) && ((auStack_1f0[8] != '\0' ||
                                                 (bVar137 = false, (uVar56 & 0x21f) != 0x201)))) &&
                                       ((cStack_1e7 != '\0' ||
                                        (bVar137 = false, (uVar56 & 0x11f) != 0x101)))) {
                                      bVar137 = (uVar56 & 0x40) == 0 || bStack_1e6 != false;
                                    }
                                    uVar62._4_1_ = uStack_1cc;
                                    uVar62._0_4_ = uStack_1d0;
                                    uVar62._5_1_ = uStack_1cb;
                                    uVar62._6_2_ = uStack_1ca;
                                    if ((pthread_mutex_t *)uVar62 != (pthread_mutex_t *)0x0) {
                                      uVar75 = *(ushort *)uVar62 << 8 | *(ushort *)uVar62 >> 8;
                                    }
                                    if (((*(uint *)((long)p_Var58 + uVar99 * 0x14 + 4) &
                                         auStack_1f0._4_4_) != 0) &&
                                       ((cStack_1e4 == '\0' ||
                                        (cStack_1e4 ==
                                         *(char *)((long)p_Var58 + uVar99 * 0x14 + 0xf))))) {
                                      if ((code *)CONCAT44(uStack_1dc,uStack_1e0) == (code *)0x0) {
                                        if (bVar137) goto LAB_003f0c4e;
                                      }
                                      else {
                                        cVar42 = (*(code *)CONCAT44(uStack_1dc,uStack_1e0))
                                                           (puVar131,uVar75,
                                                            CONCAT44(uStack_1d4,uStack_1d8));
                                        auVar258._8_8_ = extraout_XMM1_Qa_06;
                                        auVar258._0_8_ = extraout_XMM0_Qa_09;
                                        uVar107 = _uStack_258 & 0xffffffff;
                                        if (cVar42 == '\0') goto LAB_003f0c45;
                                        uVar62._4_1_ = uStack_1cc;
                                        uVar62._0_4_ = uStack_1d0;
                                        uVar62._5_1_ = uStack_1cb;
                                        uVar62._6_2_ = uStack_1ca;
                                      }
                                      uVar107 = uStack_268;
                                      uVar100 = auVar258._8_8_;
                                      if ((pthread_mutex_t *)uVar62 != (pthread_mutex_t *)0x0) {
                                        phVar103 = (hb_buffer_t *)(uVar62 + 2);
                                        uStack_1d0 = (uint)phVar103;
                                        uStack_1cc = (undefined1)((ulong)phVar103 >> 0x20);
                                        uStack_1cb = (undefined1)((ulong)phVar103 >> 0x28);
                                        uStack_1ca = (undefined2)((ulong)phVar103 >> 0x30);
                                      }
                                      uVar127._0_4_ = *(uint *)(_uStack_250 + _uStack_248 * 4);
                                      param_2._4_4_ = uStack_274;
                                      param_2._0_4_ = local_278;
                                      uVar62._4_4_ = 0;
                                      uVar62._0_4_ = (uint)uVar127 >> 4;
                                      if ((((ulong)((__pthread_internal_list *)(param_2 + 0xb0))->
                                                   __prev >>
                                            ((ulong)(byte)(char)((uint)uVar127 >> 4) & 0x3f) & 1) !=
                                           0) && ((*(ulong *)(param_2 + 0xb8) >>
                                                   ((ulong)(uint)uVar127 & 0x3f) & 1) != 0)) {
                                        uVar62._4_4_ = 0;
                                        uVar62._0_4_ = (uint)uVar127 >> 9;
                                        if (((ulong)((__pthread_internal_list *)(param_2 + 0xc0))->
                                                    __prev >>
                                             ((ulong)(byte)(char)((uint)uVar127 >> 9) & 0x3f) & 1)
                                            != 0) {
                                          uVar125 = p_Stack_200._0_4_;
                                          uVar99 = (ulong)(uint)p_Stack_200._0_4_;
                                          uVar80._0_4_ = *(uint *)(_uStack_250 + uVar99 * 0x14);
                                          uVar62._4_4_ = 0;
                                          uVar62._0_4_ = (uint)uVar80 >> 4;
                                          if ((((ulong)((pthread_mutex_t *)(param_2 + 200))->__align
                                                >> ((ulong)(byte)(char)((uint)uVar80 >> 4) & 0x3f) &
                                               1) != 0) &&
                                             (((ulong)((__pthread_internal_list *)(param_2 + 0xd0))
                                                      ->__prev >> ((ulong)(uint)uVar80 & 0x3f) & 1)
                                              != 0)) {
                                            uVar62._0_4_ = (uint)uVar80 >> 9;
                                            uVar62._4_4_ = 0;
                                            if ((*(ulong *)(param_2 + 0xd8) >>
                                                 ((ulong)(byte)(char)(uint)uVar62 & 0x3f) & 1) != 0)
                                            {
                                              uVar62 = param_2;
                                              uVar127._0_4_ =
                                                   KerxSubTableFormat6<AAT::KerxSubTableHeader>::
                                                   get_kerning((
                                                  KerxSubTableFormat6<AAT::KerxSubTableHeader> *)
                                                  auStack_23c._12_8_,(uint)uVar127,(uint)uVar80,
                                                  param_2);
                                              uVar80 = uStack_268;
                                              auVar258._8_8_ = uVar100;
                                              auVar258._0_8_ = extraout_XMM0_Qa_11;
                                              if ((uint)uVar127 != 0) {
                                                if (uStack_228 == 4) {
                                                  iVar43 = (int)((ulong)((long)(short)(uint)uVar127
                                                                         * *(long *)(_uStack_240 +
                                                                                    0x58) + 0x8000)
                                                                >> 0x10);
                                                  if ((uVar87 & 0x40000000) != 0) {
                                                    *(int *)((hb_buffer_t *)
                                                             (auStack_23c._4_8_ + 0xc) +
                                                            uVar99 * 0x14) = iVar43;
                                                    goto LAB_003f0e28;
                                                  }
                                                  uVar62._0_4_ = iVar43 >> 1;
                                                  uVar62._4_4_ = 0;
                                                  phVar103 = (hb_buffer_t *)
                                                             (auStack_23c._4_8_ + _uStack_248 * 4);
                                                  *(uint *)phVar103 =
                                                       *(int *)phVar103 + (uint)uVar62;
                                                  phVar103 = (hb_buffer_t *)
                                                             (auStack_23c._4_8_ + uVar99 * 0x14);
                                                  *(uint *)phVar103 =
                                                       *(int *)phVar103 + (iVar43 - (uint)uVar62);
                                                  *(uint *)((hb_buffer_t *)(auStack_23c._4_8_ + 8) +
                                                           uVar99 * 0x14) =
                                                       *(int *)((hb_buffer_t *)
                                                                (auStack_23c._4_8_ + 8) +
                                                               uVar99 * 0x14) +
                                                       (iVar43 - (uint)uVar62);
                                                }
                                                else {
                                                  iVar43 = (int)((ulong)((long)(short)(uint)uVar127
                                                                         * (long)((
                                                  __pthread_internal_list *)(_uStack_240 + 0x60))->
                                                  __prev + 0x8000) >> 0x10);
                                                  if ((uVar87 & 0x40000000) == 0) {
                                                    uVar62._0_4_ = iVar43 >> 1;
                                                    uVar62._4_4_ = 0;
                                                    *(uint *)((hb_buffer_t *)(auStack_23c._4_8_ + 4)
                                                             + _uStack_248 * 4) =
                                                         *(int *)((hb_buffer_t *)
                                                                  (auStack_23c._4_8_ + 4) +
                                                                 _uStack_248 * 4) + (uint)uVar62;
                                                    *(uint *)((hb_buffer_t *)(auStack_23c._4_8_ + 4)
                                                             + uVar99 * 0x14) =
                                                         *(int *)((hb_buffer_t *)
                                                                  (auStack_23c._4_8_ + 4) +
                                                                 uVar99 * 0x14) +
                                                         (iVar43 - (uint)uVar62);
                                                    *(uint *)((hb_buffer_t *)
                                                              (auStack_23c._4_8_ + 0xc) +
                                                             uVar99 * 0x14) =
                                                         *(int *)((hb_buffer_t *)
                                                                  (auStack_23c._4_8_ + 0xc) +
                                                                 uVar99 * 0x14) +
                                                         (iVar43 - (uint)uVar62);
                                                  }
                                                  else {
                                                    *(int *)((hb_buffer_t *)(auStack_23c._4_8_ + 8)
                                                            + uVar99 * 0x14) = iVar43;
LAB_003f0e28:
                                                    *(byte *)&((__pthread_internal_list *)
                                                              (uStack_268 + 0xc0))->__prev =
                                                         *(byte *)&((__pthread_internal_list *)
                                                                   (uStack_268 + 0xc0))->__prev | 8;
                                                    uVar62 = auStack_23c._4_8_;
                                                  }
                                                }
                                                auVar258 = hb_buffer_t::unsafe_to_break
                                                                     ((hb_buffer_t *)uStack_268,
                                                                      uStack_258,uVar125 + 1);
                                                param_2._4_4_ = uStack_274;
                                                uVar107 = uVar80;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      uVar76._4_4_ = 0;
                                      uVar76._0_4_ = p_Stack_200._0_4_;
                                      goto LAB_003f0aa3;
                                    }
LAB_003f0c45:
                                    iVar43 = (int)uVar107;
                                    auVar175 = _p_Stack_200;
                                    if (!bVar137) break;
                                  }
                                  else if (((byte)auStack_1f0[0] & 0x10) == 0) {
                                    if (((auStack_1f0._0_4_ & 0xff00) == 0) ||
                                       (uVar62._0_4_ = uVar56 & 0xff00, uVar62._4_4_ = 0,
                                       (auStack_1f0._0_4_ & 0xff00) == (uint)uVar62))
                                    goto LAB_003f0b69;
                                  }
                                  else {
                                    uVar127 = OT::GDEF::accelerator_t::mark_set_covers
                                                        (*(accelerator_t **)((long)piVar52 + 0xf8),
                                                         (uint)auStack_1f0._0_4_ >> 0x10,*puVar131);
                                    auVar258._8_8_ = uVar100;
                                    auVar258._0_8_ = extraout_XMM0_Qa_10;
                                    uVar107 = _uStack_258 & 0xffffffff;
                                    if ((char)uVar127 != '\0') goto LAB_003f0b69;
                                  }
LAB_003f0c4e:
                                  iVar43 = (int)uVar107;
                                  uVar76._4_4_ = 0;
                                  uVar76._0_4_ = p_Stack_200._0_4_;
                                  auVar175 = _p_Stack_200;
                                  if (iVar98 <= (int)p_Stack_200._0_4_) break;
                                  uVar62 = *(undefined8 *)((long)local_1f8 + 0xa0);
                                  piVar52 = local_1f8;
                                } while( true );
                              }
                              _p_Stack_200 = auVar175;
                              uVar76._0_4_ = iVar43 + 1;
                              uVar76._4_4_ = 0;
                              param_2._4_4_ = uStack_274;
                              param_2._0_4_ = local_278;
                              uVar107 = uStack_268;
                            }
LAB_003f0aa3:
                            auVar259 = auVar258;
                          } while ((uint)uVar76 < uStack_25c);
                        }
                        hb_buffer_t::message
                                  (auVar259._0_8_,auVar259._8_8_,in_XMM2.__prev,in_XMM3._0_8_,
                                   in_XMM4.__prev,in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,
                                   (hb_buffer_t *)uVar107,_uStack_240,"end kern",uVar62,uVar120,
                                   param_6,uVar283);
                        goto LAB_003f0e9e;
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
      goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_get_value_switchD_003f25c5_caseD_1;
    case 8:
    case 10:
    case 0xc:
    case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 9:
                    /* WARNING: Could not recover jumptable at 0x003f25c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar259 = (*(code *)((ulong)*(uint *)(uVar99 + 0x1d609c4) + uVar120))();
      return auVar259;
    case 0xb:
      *(byte *)auVar259._0_8_ =
           (byte)*(hb_buffer_t *)auVar259._0_8_ >> 7 | (char)*(hb_buffer_t *)auVar259._0_8_ << 1;
      while ((uint)auVar259._0_8_ < uVar97) {
        uVar80._0_4_ = (int)uVar59 + 1;
        uVar80._4_4_ = 0;
        uVar127._0_4_ = in_R11[0];
        while( true ) {
          if ((int)(uint)uVar127 < (int)(uint)uVar80) goto LAB_003f283f;
          uVar59._0_4_ = in_R11[0] + (uint)uVar80 >> 1;
          uVar59._4_4_ = 0;
          if ((ushort)(*(ushort *)((hb_buffer_t *)(uVar107 + 2) + in_R10 * uVar59) << 8 |
                      *(ushort *)((hb_buffer_t *)(uVar107 + 2) + in_R10 * uVar59) >> 8) <= uVar97)
          break;
          uVar127._0_4_ = (uint)uVar59 - 1;
          in_R11[1]._0_1_ = '\0';
          in_R11[1]._1_1_ = '\0';
          in_R11[1]._2_1_ = '\0';
          in_R11[1]._3_1_ = '\0';
          in_R11[0] = (uint)uVar127;
        }
        uVar56 = *(ushort *)&((__pthread_mutex_s *)(uVar107 + in_R10 * uVar59))->__lock;
        auVar259._0_2_ = uVar56 << 8 | uVar56 >> 8;
        auVar259[2] = '\0';
        auVar259[3] = '\0';
        auVar259[4] = '\0';
        auVar259[5] = '\0';
        auVar259[6] = '\0';
        auVar259[7] = '\0';
      }
      param_6 = uVar107 + (ulong)(uint)((int)uVar59 * iVar43);
LAB_003f283f:
      phVar103 = (hb_buffer_t *)(param_6 + 4);
      if ((pthread_mutex_t *)param_6 == (pthread_mutex_t *)0x0) {
        phVar103 = (hb_buffer_t *)0x0;
      }
      auVar267[8] = (char)uVar80;
      auVar267[9] = (char)((ulong)uVar80 >> 8);
      auVar267[10] = (char)((ulong)uVar80 >> 0x10);
      auVar267[0xb] = (char)((ulong)uVar80 >> 0x18);
      auVar267[0xc] = (char)((ulong)uVar80 >> 0x20);
      auVar267[0xd] = (char)((ulong)uVar80 >> 0x28);
      auVar267[0xe] = (char)((ulong)uVar80 >> 0x30);
      auVar267[0xf] = (char)((ulong)uVar80 >> 0x38);
      auVar267._0_8_ = phVar103;
      return auVar267;
    case 0xd:
      if (*(short *)((hb_buffer_t *)(uVar107 + 0xc) + auVar259._0_8_) == -1) {
        iVar98 = -(uint)(*(short *)((hb_buffer_t *)(uVar107 + 0xe) + auVar259._0_8_) == -1);
        auVar259._0_8_ = (pthread_mutex_t *)0x0;
        iVar122 = iVar98 + iVar43;
        if (iVar122 == 0 || SCARRY4(iVar98,iVar43) != iVar122 < 0)
        goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_get_value_switchD_003f25c5_caseD_1;
      }
      else {
        auVar259._0_8_ = (pthread_mutex_t *)0x0;
        iVar122 = (int)in_R10 + iVar43;
        if (iVar122 == 0 || SCARRY4((int)in_R10,iVar43) != iVar122 < 0)
        goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_get_value_switchD_003f25c5_caseD_1;
      }
      auVar259._0_8_ = (pthread_mutex_t *)0x0;
      uVar127._0_4_ = iVar122 - 1;
      uVar57 = 0;
      goto LAB_003f27fb;
    case 0xf:
      *(byte *)uVar107 = (byte)*(hb_buffer_t *)uVar107 | 0xf4;
      uVar99 = CONCAT62(SUB86(unaff_RBX,2),CONCAT11(0xdb,(char)unaff_RBX));
      goto code_r0x003f2774;
    case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x11:
    case 0x13:
    case 0x15:
    case 0x17:
      goto code_r0x003f2dd3;
    case 0x12:
      *(byte *)auVar259._0_8_ = (char)*(hb_buffer_t *)auVar259._0_8_ + bVar73;
      auVar259._0_8_ = (pthread_mutex_t *)0x0;
      switch(*(ushort *)uVar107 << 8 | *(ushort *)uVar107 >> 8) {
      case 0:
        if (uVar97 < uVar81) {
          auVar270._0_8_ = (hb_buffer_t *)(uVar107 + (uVar100 & 0xffffffff) * 2) + 2;
          auVar270[8] = (char)uVar80;
          auVar270[9] = (char)((ulong)uVar80 >> 8);
          auVar270[10] = (char)((ulong)uVar80 >> 0x10);
          auVar270[0xb] = (char)((ulong)uVar80 >> 0x18);
          auVar270[0xc] = (char)((ulong)uVar80 >> 0x20);
          auVar270[0xd] = (char)((ulong)uVar80 >> 0x28);
          auVar270[0xe] = (char)((ulong)uVar80 >> 0x30);
          auVar270[0xf] = (char)((ulong)uVar80 >> 0x38);
          return auVar270;
        }
        goto LAB_003f2e67;
      default:
        goto 
        AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_get_value_switchD_003f2ba5_caseD_1
        ;
      case 2:
        goto 
        AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_get_value_switchD_003f2ba5_caseD_2
        ;
      case 4:
        uVar56 = *(ushort *)(uVar107 + 4);
        auVar259[2] = '\0';
        auVar259[3] = '\0';
        auVar259[4] = '\0';
        auVar259[5] = '\0';
        auVar259[6] = '\0';
        auVar259[7] = '\0';
        auVar259._0_2_ = uVar56;
        uVar120._2_1_ = '\0';
        uVar120._3_1_ = '\0';
        uVar120._4_1_ = '\0';
        uVar120._5_1_ = '\0';
        uVar120._6_1_ = '\0';
        uVar120._7_1_ = '\0';
        uVar120._0_2_ = uVar56 << 8 | uVar56 >> 8;
        goto code_r0x003f2c8c;
      case 6:
        uVar56 = *(ushort *)(uVar107 + 4);
        uVar75 = uVar56 << 8 | uVar56 >> 8;
        uVar127._0_4_ = (uint)uVar75;
        if (uVar56 == 0) {
          uVar56 = *(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8;
          uVar92 = (ulong)uVar56;
          phVar103 = (hb_buffer_t *)0x0;
          uVar99 = uVar92;
          if ((uint)uVar127 == 0) goto LAB_003f2e36;
        }
        else {
          uVar56 = *(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8;
          uVar92 = (ulong)uVar56;
          iVar43 = -(uint)(*(short *)((hb_buffer_t *)(uVar107 + 0xc) + (uVar75 - 1) * (uint)uVar56)
                          == -1);
          phVar103 = (hb_buffer_t *)0x0;
          uVar127._0_4_ = iVar43 + (uint)uVar127;
          uVar99 = uVar92;
          if ((uint)uVar127 == 0 || SCARRY4(iVar43,(uint)uVar75) != (int)(uint)uVar127 < 0)
          goto LAB_003f2e36;
        }
        phVar103 = (hb_buffer_t *)0x0;
        iVar43 = (uint)uVar127 - 1;
        uVar92 = 0;
        goto LAB_003f2d3d;
      case 8:
        uVar127._0_4_ =
             (uint)(ushort)(*(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8);
        if (((uint)uVar127 <= uVar97) &&
           (uVar97 = uVar97 - (uint)uVar127,
           uVar97 < (ushort)(*(ushort *)(uVar107 + 4) << 8 | *(ushort *)(uVar107 + 4) >> 8))) {
          auVar271._0_8_ = (hb_buffer_t *)(uVar107 + (ulong)uVar97 * 2) + 6;
          auVar271[8] = (char)uVar80;
          auVar271[9] = (char)((ulong)uVar80 >> 8);
          auVar271[10] = (char)((ulong)uVar80 >> 0x10);
          auVar271[0xb] = (char)((ulong)uVar80 >> 0x18);
          auVar271[0xc] = (char)((ulong)uVar80 >> 0x20);
          auVar271[0xd] = (char)((ulong)uVar80 >> 0x28);
          auVar271[0xe] = (char)((ulong)uVar80 >> 0x30);
          auVar271[0xf] = (char)((ulong)uVar80 >> 0x38);
          return auVar271;
        }
LAB_003f2e67:
        auVar11._8_8_ = 0;
        auVar11[0] = (char)uVar80;
        auVar11[1] = (char)((ulong)uVar80 >> 8);
        auVar11[2] = (char)((ulong)uVar80 >> 0x10);
        auVar11[3] = (char)((ulong)uVar80 >> 0x18);
        auVar11[4] = (char)((ulong)uVar80 >> 0x20);
        auVar11[5] = (char)((ulong)uVar80 >> 0x28);
        auVar11[6] = (char)((ulong)uVar80 >> 0x30);
        auVar11[7] = (char)((ulong)uVar80 >> 0x38);
        return auVar11 << 0x40;
      }
    case 0x14:
                    /* WARNING (jumptable): Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
      UNK_005e0181 = bVar73 + 0x77;
      goto code_r0x003f2c43;
    case 0x16:
code_r0x003f2c8c:
      iVar43 = (int)uVar120;
      if ((short)auVar259._0_8_ == 0) {
        uVar80._0_2_ = *(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8;
        uVar80._2_1_ = '\0';
        uVar80._3_1_ = '\0';
        uVar80._4_1_ = '\0';
        uVar80._5_1_ = '\0';
        uVar80._6_1_ = '\0';
        uVar80._7_1_ = '\0';
        param_6._2_1_ = '\0';
        param_6._3_1_ = '\0';
        param_6._4_1_ = '\0';
        param_6._5_1_ = '\0';
        param_6._6_1_ = '\0';
        param_6._7_1_ = '\0';
        param_6._0_2_ = (ushort)uVar80;
      }
      else {
        uVar80._0_2_ = *(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8;
        uVar80._2_1_ = '\0';
        uVar80._3_1_ = '\0';
        uVar80._4_1_ = '\0';
        uVar80._5_1_ = '\0';
        uVar80._6_1_ = '\0';
        uVar80._7_1_ = '\0';
        param_6._2_1_ = '\0';
        param_6._3_1_ = '\0';
        param_6._4_1_ = '\0';
        param_6._5_1_ = '\0';
        param_6._6_1_ = '\0';
        param_6._7_1_ = '\0';
        param_6._0_2_ = (ushort)uVar80;
        uVar127._0_4_ = (iVar43 + -1) * (uint)(ushort)uVar80;
        if (*(short *)((hb_buffer_t *)(uVar107 + 0xc) + (uint)uVar127) == -1) {
          iVar98 = -(uint)(*(short *)((hb_buffer_t *)(uVar107 + 0xe) + (uint)uVar127) == -1);
          auVar259._0_8_ = (pthread_mutex_t *)0x0;
          bVar137 = SCARRY4(iVar98,iVar43);
          iVar43 = iVar98 + iVar43;
          if (iVar43 != 0 && bVar137 == iVar43 < 0) goto LAB_003f2db7;
          goto 
          AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_get_value_switchD_003f2ba5_caseD_1
          ;
        }
      }
      auVar259._0_8_ = (pthread_mutex_t *)0x0;
      if (0 < iVar43) {
LAB_003f2db7:
        auVar259._0_8_ = (pthread_mutex_t *)0x0;
        uVar99 = (ulong)(iVar43 - 1);
        in_R11 = (int  [2])0x0;
        uVar120 = uVar80;
        goto LAB_003f2ddb;
      }
      goto 
      AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_get_value_switchD_003f2ba5_caseD_1
      ;
    case 0x18:
      *(char *)uVar107 = (char)*(hb_buffer_t *)uVar107 + -0xc;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x19:
      *(hb_buffer_t *)(uVar90 + 0x41) =
           (hb_buffer_t)((char)*(hb_buffer_t *)(uVar90 + 0x41) + (char)uVar80);
      ppStackY_2a0 = (pthread_mutex_t *)puVar131;
      ppStackY_2a8 = (pthread_mutex_t *)uVar127;
      pppVar86 = &ppStackY_2b0;
      ppStackY_2b0 = (pthread_mutex_t *)unaff_RBX;
      uVar120 = uVar107 + 2;
      if ((ulong)*(uint *)(uVar100 + 0x18) < (ulong)(uVar120 - *(long *)(uVar100 + 8)))
      goto LAB_003f312d;
      uVar56 = *(ushort *)uVar107 << 8 | *(ushort *)uVar107 >> 8;
      if (10 < uVar56)
      goto 
      AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_1
      ;
      param_6 = uVar100 + 8;
      in_R11 = (int  [2])(uVar100 + 0x18);
      in_R10 = (pthread_mutex_t *)0x0;
      uVar90 = uVar80;
      switch(uVar56) {
      case 0:
        uVar127._0_4_ = *(uint *)(uVar100 + 0x38);
        if ((((CARRY4((uint)uVar127,(uint)uVar127)) ||
             (uVar77._4_4_ = 0, uVar77._0_4_ = *(uint *)in_R11,
             (ulong)uVar77 < (pthread_mutex_t *)(uVar120 - *(long *)param_6))) ||
            ((uint)(*(int *)&((__pthread_internal_list *)(uVar100 + 0x10))->__prev - (int)uVar120) <
             (uint)uVar127 * 2)) ||
           (iVar43 = *(int *)(uVar100 + 0x1c) + (uint)uVar127 * -2,
           *(int *)(uVar100 + 0x1c) = iVar43, iVar43 < 1)) goto LAB_003f312d;
        in_R10 = (pthread_mutex_t *)0x1;
        if ((ulong)(uint)uVar127 == 0)
        goto 
        AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
        ;
        uVar77 = *(undefined8 *)param_6;
        phVar103 = (hb_buffer_t *)(ulong)*(uint *)in_R11;
        lVar88 = 0;
        goto LAB_003f31d0;
      default:
        goto 
        AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_1
        ;
      case 2:
        if (((ulong)*(uint *)in_R11 < (uVar107 - *(long *)param_6) + 0xcU) ||
           (uVar56 = *(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8, uVar56 < 6))
        goto LAB_003f312d;
        puVar131 = (uint *)(uVar107 + 0xc);
        uVar77 = (long)puVar131 - *(long *)param_6;
        if ((pthread_mutex_t *)(ulong)*(uint *)in_R11 < (ulong)((long)puVar131 - *(long *)param_6))
        goto LAB_003f312d;
        uVar127._0_4_ =
             (uint)(ushort)(*(ushort *)(uVar107 + 4) << 8 | *(ushort *)(uVar107 + 4) >> 8) *
             (uint)uVar56;
        uVar77._0_4_ = *(int *)&((__pthread_internal_list *)(uVar100 + 0x10))->__prev -
                       (int)puVar131;
        uVar77._4_4_ = 0;
        if ((uint)uVar77 < (uint)uVar127) goto LAB_003f312d;
        uVar77._0_4_ = *(int *)(uVar100 + 0x1c) - (uint)uVar127;
        uVar77._4_4_ = 0;
        *(uint *)(uVar100 + 0x1c) = (uint)uVar77;
        in_R10 = (pthread_mutex_t *)0x0;
        if ((int)(uint)uVar77 < 1)
        goto 
        AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
        ;
        uVar120 = (pthread_mutex_t *)0xffffffff;
        uVar56 = *(ushort *)(uVar107 + 4);
        uVar77._0_2_ = uVar56 << 8 | uVar56 >> 8;
        uVar77._2_1_ = '\0';
        uVar77._3_1_ = '\0';
        uVar77._4_1_ = '\0';
        uVar77._5_1_ = '\0';
        uVar77._6_1_ = '\0';
        uVar77._7_1_ = '\0';
        if ((uVar56 != 0) &&
           (uVar127._0_4_ =
                 (uint)(ushort)(*(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8) *
                 ((ushort)uVar77 - 1),
           *(short *)((hb_buffer_t *)(uVar107 + 0xc) + (uint)uVar127) == -1)) {
          in_R10._0_4_ = -(uint)(*(short *)((hb_buffer_t *)(uVar107 + 0xe) + (uint)uVar127) == -1);
          in_R10._4_4_ = 0;
        }
        if ((int)in_R10 + (uint)(ushort)uVar77 == 0)
        goto 
        AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_1
        ;
        param_3._0_4_ = ((int)in_R10 + (uint)(ushort)uVar77) - 1;
        param_3._4_4_ = 0;
        uVar127 = (pthread_mutex_t *)0x0;
        param_2 = &_hb_NullPool;
        goto LAB_003f3331;
      case 4:
        if (((ulong)*(uint *)in_R11 < (uVar107 - *(long *)param_6) + 0xcU) ||
           (uVar56 = *(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8, uVar56 < 6))
        goto LAB_003f312d;
        phVar103 = (hb_buffer_t *)(uVar107 + 0xc);
        uVar77._4_4_ = 0;
        uVar77._0_4_ = *(uint *)in_R11;
        if ((ulong)uVar77 < (pthread_mutex_t *)(phVar103 + -*(long *)param_6)) goto LAB_003f312d;
        uVar127._0_4_ =
             (uint)(ushort)(*(ushort *)(uVar107 + 4) << 8 | *(ushort *)(uVar107 + 4) >> 8) *
             (uint)uVar56;
        if ((uint)(*(int *)&((__pthread_internal_list *)(uVar100 + 0x10))->__prev - (int)phVar103) <
            (uint)uVar127) goto LAB_003f312d;
        iVar43 = *(int *)(uVar100 + 0x1c) - (uint)uVar127;
        *(int *)(uVar100 + 0x1c) = iVar43;
        iVar98 = 0;
        if (iVar43 < 1) goto LAB_003f312d;
        uVar56 = *(ushort *)(uVar107 + 4);
        uVar75 = uVar56 << 8 | uVar56 >> 8;
        uVar77._2_1_ = '\0';
        uVar77._3_1_ = '\0';
        uVar77._4_1_ = '\0';
        uVar77._5_1_ = '\0';
        uVar77._6_1_ = '\0';
        uVar77._7_1_ = '\0';
        uVar77._0_2_ = uVar75;
        if ((uVar56 != 0) &&
           (uVar127._0_4_ =
                 (uint)(ushort)(*(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8) *
                 (uVar75 - 1), *(short *)((hb_buffer_t *)(uVar107 + 0xc) + (uint)uVar127) == -1)) {
          iVar98 = -(uint)(*(short *)((hb_buffer_t *)(uVar107 + 0xe) + (uint)uVar127) == -1);
        }
        in_R10 = (pthread_mutex_t *)0x1;
        if (iVar98 + (uint)uVar75 == 0)
        goto 
        AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
        ;
        uVar99 = 0;
        break;
      case 6:
        if (((ulong)*(uint *)in_R11 < (uVar107 - *(long *)param_6) + 0xcU) ||
           (uVar56 = *(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8, uVar56 < 4))
        goto LAB_003f312d;
        puVar131 = (uint *)(uVar107 + 0xc);
        uVar77 = (long)puVar131 - *(long *)param_6;
        if ((pthread_mutex_t *)(ulong)*(uint *)in_R11 < (ulong)((long)puVar131 - *(long *)param_6))
        goto LAB_003f312d;
        uVar127._0_4_ =
             (uint)(ushort)(*(ushort *)(uVar107 + 4) << 8 | *(ushort *)(uVar107 + 4) >> 8) *
             (uint)uVar56;
        uVar77._0_4_ = *(int *)&((__pthread_internal_list *)(uVar100 + 0x10))->__prev -
                       (int)puVar131;
        uVar77._4_4_ = 0;
        if ((uint)uVar77 < (uint)uVar127) goto LAB_003f312d;
        uVar77._0_4_ = *(int *)(uVar100 + 0x1c) - (uint)uVar127;
        uVar77._4_4_ = 0;
        *(uint *)(uVar100 + 0x1c) = (uint)uVar77;
        in_R10 = (pthread_mutex_t *)0x0;
        if ((int)(uint)uVar77 < 1)
        goto 
        AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
        ;
        uVar120 = (pthread_mutex_t *)0xffffffff;
        uVar56 = *(ushort *)(uVar107 + 4);
        uVar77._0_2_ = uVar56 << 8 | uVar56 >> 8;
        uVar77._2_1_ = '\0';
        uVar77._3_1_ = '\0';
        uVar77._4_1_ = '\0';
        uVar77._5_1_ = '\0';
        uVar77._6_1_ = '\0';
        uVar77._7_1_ = '\0';
        if (uVar56 != 0) {
          in_R10._0_4_ = -(uint)(*(short *)((hb_buffer_t *)(uVar107 + 0xc) +
                                           (uint)(ushort)(*(ushort *)(uVar107 + 2) << 8 |
                                                         *(ushort *)(uVar107 + 2) >> 8) *
                                           ((ushort)uVar77 - 1)) == -1);
          in_R10._4_4_ = 0;
        }
        if ((int)in_R10 + (uint)(ushort)uVar77 == 0)
        goto 
        AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_1
        ;
        param_3._0_4_ = ((int)in_R10 + (uint)(ushort)uVar77) - 1;
        param_3._4_4_ = 0;
        uVar127 = (pthread_mutex_t *)0x0;
        param_2 = &_hb_NullPool;
        goto LAB_003f379d;
      case 8:
        uVar77._4_4_ = 0;
        uVar77._0_4_ = *(uint *)in_R11;
        if ((ulong)uVar77 < (pthread_mutex_t *)((uVar107 - *(long *)param_6) + 6))
        goto LAB_003f312d;
        if ((ulong)uVar77 < (pthread_mutex_t *)((hb_buffer_t *)(uVar107 + 6) + -*(long *)param_6))
        goto LAB_003f312d;
        uVar56 = *(ushort *)(uVar107 + 4);
        uVar75 = uVar56 << 8 | uVar56 >> 8;
        param_2._2_1_ = '\0';
        param_2._3_1_ = '\0';
        param_2._4_1_ = '\0';
        param_2._5_1_ = '\0';
        param_2._6_1_ = '\0';
        param_2._7_1_ = '\0';
        param_2._0_2_ = uVar75;
        uVar127._0_4_ = (uint)uVar75 * 2;
        uVar77._4_4_ = 0;
        uVar77._0_4_ = (uint)uVar127;
        if ((uint)(*(int *)&((__pthread_internal_list *)(uVar100 + 0x10))->__prev -
                  (int)(hb_buffer_t *)(uVar107 + 6)) < (uint)uVar127) goto LAB_003f312d;
        iVar43 = *(int *)(uVar100 + 0x1c) + (uint)uVar75 * -2;
        *(int *)(uVar100 + 0x1c) = iVar43;
        if (iVar43 < 1) goto LAB_003f312d;
        in_R10 = (pthread_mutex_t *)0x1;
        if (uVar56 == 0)
        goto 
        AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
        ;
        uVar77 = *(undefined8 *)param_6;
        unaff_RBX._4_4_ = 0;
        unaff_RBX._0_4_ = *(uint *)in_R11;
        uVar120 = uVar107 + 8;
        uVar127 = ((pthread_mutex_t *)0x0)->__size;
        param_3 = (uint *)0x4;
        goto LAB_003f3910;
      case 10:
        goto 
        AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
        ;
      }
      goto LAB_003f34fa;
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
      uVar57 = *(uint *)unaff_RBX;
      goto code_r0x003f33c8;
    case 0x1f:
      goto code_r0x003f366d;
    case 0x21:
      auVar277[8] = (char)uVar80;
      auVar277[9] = (char)((ulong)uVar80 >> 8);
      auVar277[10] = (char)((ulong)uVar80 >> 0x10);
      auVar277[0xb] = (char)((ulong)uVar80 >> 0x18);
      auVar277[0xc] = (char)((ulong)uVar80 >> 0x20);
      auVar277[0xd] = (char)((ulong)uVar80 >> 0x28);
      auVar277[0xe] = (char)((ulong)uVar80 >> 0x30);
      auVar277[0xf] = (char)((ulong)uVar80 >> 0x38);
      auVar277._0_8_ = auVar259._0_8_;
      return auVar277;
    case 0x23:
      auVar259[8] = (char)uVar80;
      auVar259[9] = (char)((ulong)uVar80 >> 8);
      auVar259[10] = (char)((ulong)uVar80 >> 0x10);
      auVar259[0xb] = (char)((ulong)uVar80 >> 0x18);
      auVar259[0xc] = (char)((ulong)uVar80 >> 0x20);
      auVar259[0xd] = (char)((ulong)uVar80 >> 0x28);
      auVar259[0xe] = (char)((ulong)uVar80 >> 0x30);
      auVar259[0xf] = (char)((ulong)uVar80 >> 0x38);
      return auVar259;
    case 0x24:
      LOCK();
      uVar125 = *(undefined4 *)(unaff_RBX + -0x74000009);
      *(uint *)(unaff_RBX + -0x74000009) = uVar97;
      uVar100._0_4_ = uVar125;
      UNLOCK();
      uRamffffffffc9e31e42 = uRamffffffffc9e31e42 >> 0xf | uRamffffffffc9e31e42 << 0x11;
      uVar80 = puVar131;
      goto code_r0x003f398e;
    case 0x25:
    case 0x27:
    case 0x29:
    case 0x2b:
    case 0x2d:
      goto code_r0x003f3d5a;
    case 0x26:
      pcVar109 = (char *)(uVar99 + 0x1108703 + auVar259._0_8_ * 8);
      *pcVar109 = *pcVar109 + bVar73;
      *(byte *)auVar259._0_8_ = (char)*(hb_buffer_t *)auVar259._0_8_ + bVar73;
      bVar137 = subtag_matches((char *)unaff_RBX,(char *)uVar90,"-mo");
      if (bVar137) {
LAB_0041f93e:
        uStack_274 = 0x5a48544d;
        uStack_270 = 0x4820;
        uStack_26e = 0x5a48;
        uVar80._0_4_ = 2;
LAB_0041f9e3:
        bVar137 = (char)uVar87 == '\0';
      }
      else {
        bVar137 = subtag_matches((char *)unaff_RBX,(char *)uVar90,"-tw");
        uVar107 = uStack_268;
        if (bVar137) {
LAB_0041f9d2:
          uStack_274 = 0x5a485420;
LAB_0041f9da:
          uVar80._0_4_ = 1;
          goto LAB_0041f9e3;
        }
        iVar43 = strncmp((char *)uStack_268,"px-",3);
        if (iVar43 == 0) {
          bVar137 = subtag_matches((char *)_uStack_280,(char *)uVar90,"-hk");
          if (!bVar137) {
            bVar137 = subtag_matches((char *)_uStack_280,(char *)uVar90,"-mo");
            if (bVar137) goto LAB_0041f93e;
            bVar137 = subtag_matches((char *)_uStack_280,(char *)uVar90,"-tw");
            uVar107 = uStack_268;
            if (bVar137) goto LAB_0041f9d2;
            goto LAB_0041ec92;
          }
LAB_0041f8d8:
          uStack_274 = 0x5a484820;
          goto LAB_0041f9da;
        }
LAB_0041ec92:
        iVar43 = strncmp((char *)uVar107,"sp-",3);
        if (iVar43 == 0) {
          bVar137 = subtag_matches((char *)_uStack_280,(char *)uVar90,"-hk");
          if (bVar137) goto LAB_0041f8d8;
          bVar137 = subtag_matches((char *)_uStack_280,(char *)uVar90,"-mo");
          if (bVar137) goto LAB_0041f93e;
          bVar137 = subtag_matches((char *)_uStack_280,(char *)uVar90,"-tw");
          uVar107 = uStack_268;
          if (bVar137) goto LAB_0041f9d2;
        }
        iVar43 = strncmp((char *)uVar107,"zh-",3);
        if (iVar43 != 0) {
LAB_0041ecca:
          iVar43 = strncmp((char *)uVar107,"zo-",3);
          if (iVar43 == 0) {
            bVar137 = subtag_matches((char *)_uStack_280,(char *)uVar90,"-hk");
            if (bVar137) {
              uStack_274 = 0x5a484820;
            }
            else {
              bVar137 = subtag_matches((char *)_uStack_280,(char *)uVar90,"-mo");
              if (bVar137) {
                uStack_274 = 0x5a48544d;
                uStack_270 = 0x4820;
                uStack_26e = 0x5a48;
                uVar80._0_4_ = 2;
                goto joined_r0x0041f32f;
              }
              bVar137 = subtag_matches((char *)_uStack_280,(char *)uVar90,"-tw");
              if (!bVar137) goto hb_ot_map_builder_t_hb_ot_map_builder_t_switchD_0041ebbb_caseD_62;
              uStack_274 = 0x5a485420;
            }
            uVar80._0_4_ = 1;
            goto joined_r0x0041f32f;
          }
hb_ot_map_builder_t_hb_ot_map_builder_t_switchD_0041ebbb_caseD_62:
          phVar103 = (hb_buffer_t *)strchr((char *)_uStack_280,0x2d);
          if ((5 < (long)_uStack_250) && (phVar103 != (hb_buffer_t *)0x0)) {
            uVar107 = (long)phVar103 + 1;
            pcVar109 = strchr((char *)uVar107,0x2d);
            if (pcVar109 == (char *)0x0) {
              pcVar109 = (char *)strlen((char *)uVar107);
            }
            else {
              pcVar109 = pcVar109 + ~(ulong)phVar103;
            }
            if ((pcVar109 == (char *)0x3) &&
               ((byte)(((byte)*(hb_buffer_t *)uVar107 & 0xdf) + 0xbf) < 0x1a)) {
              _uStack_280 = uVar107;
            }
          }
          pcVar109 = strchr((char *)_uStack_280,0x2d);
          iVar43 = (int)uVar90;
          if (pcVar109 != (char *)0x0) {
            iVar43 = (int)pcVar109;
          }
          uVar127._0_4_ = iVar43 - (int)_uStack_280;
          if ((uint)uVar127 == 3) {
            pcVar109 = " eaa IQS oaa ARA taa IQS aba";
            uVar80._0_4_ = 0x4c9;
            uVar87 = 0x4c9;
joined_r0x0041f3f1:
            bVar137 = false;
          }
          else {
            if ((uint)uVar127 == 2) {
              pcVar109 = 
              "  aa RFA  ba KBA  fa KFA  ka AKA  ma HMA  na GRA  ra ARA  sa MSA  va RVA  ya MYA  za EZA  ab HSB  eb LEB  gb RGB  ib SIB  ib PPC  mb BMB  nb NEB  ob BIT  rb ERB  sb SOB  ac TAC  ec EHC  hc AHC  oc SOC  rc ERC  sc YSC  uc LSC  vc UHC  yc LEW  ad NAD  ed UED  vd VID  vd VHD  zd NZD  ee EWE  le LLE  ne GNE  oe OTN  se PSE  te ITE  ue QUE  af RAF  ff LUF  if NIF  jf IJF  of SOF  rf ARF  yf IRF  ag IRI  ag TRI  dg EAG  lg LAG  ng AUG  ug JUG  vg XNM  ah UAH  eh RWI  ih NIH  oh OMH  oh PPC  rh VRH  th IAH  th PPC  uh NUH  yh0EYH  yh EYH  zh REH  ai ANI  di DNI  di YLM  ei ELI  gi OBI  ii MIY  ki KPI  ni DNI  ni YLM  oi ODI  si LSI  ti ATI  ui UNI  uiKUNI  wi RWI  aj NAJ  ij IIJ  vj VAJ  wj VAJ  ak TAK  gk0NOK  ik KIK  jk AUK  kk ZAK  lk NRG  mk MHK  nk NAK  ok ROK  ok HOK  rk RNK  sk HSK  uk RUK  vk MOK  wk ROC  yk RIK  al TAL  bl ZTL  gl GUL  il MIL  nl NIL  ol OAL  tl HTL  ul BUL  vl IVL  gm GLM  hm HAM  im IRM  km DKM  lm LAM  lm RLM  nm GNM  om LOM  om MOR  rm RAM  sm YLM  tm STM  ym MRB  an UAN  bn RON  dn BDN  en PEN  gn GDN  ln DLN  nn NYN  on RON  rn BDN  vn VAN  vn HTA  yn IHC  co ICO  jo BJO  mo ORO  ro IRO  so SSO  ap NAP  ip LAP  lp KLP  sp SAP  tp GTP  uq ZUQ  mr SMR  nr NUR  or MOR  ur SUR  wr AUR  as NAS  cs DRS  ds DNS  es MSN  gs OGS  hs SOB  hs VRH  hs BRS  is HNS  ks YKS  ls VLS  ms OMS  ns0ANS  os LMS  qs IQS  rs BRS  ss ZWS  ts TOS  us NUS  vs EVS  ws KWS  at MAT  et LET  gt JAT  ht AHT  it YGT  kt MKT  lt LGT  nt ANT  ot NGT  rt KRT  st GST  tt TAT  wt IWT  wt AKA  yt THT  gu GYU  ku RKU  ru DRU  zu BZU  ev NEV  iv TIV  ov LOV  aw NLW  ow FLW  hx SHX  iy IIJ  oy ABY  az AHZ  hz SHZ  uz LUZ eaa IQS oaa ARA taa IQS aba"
              ;
              uVar80._0_4_ = 0xcc;
              uVar87 = 0xcc;
              goto joined_r0x0041f3f1;
            }
            pcVar109 = (char *)0x0;
            bVar137 = true;
            uVar80._0_4_ = 0;
            uVar87 = 0;
          }
          uVar81 = 0;
          if ((pthread_mutex_t *)_uStack_280 == (pthread_mutex_t *)0x0) goto LAB_0041f46d;
          uVar81 = 0;
          uVar87 = (uint)uVar80;
          if (((uint)uVar127 == 0) ||
             (hVar55 = *(hb_buffer_t *)_uStack_280, hVar55 == (hb_buffer_t)0x0)) goto LAB_0041f46d;
          uVar99 = 4;
          if ((uint)uVar127 < 4) {
            uVar99 = (ulong)(uint)uVar127;
          }
          uVar92 = 0;
          goto LAB_0041f420;
        }
        bVar137 = subtag_matches((char *)_uStack_280,(char *)uVar90,"-hk");
        if (bVar137) {
          uStack_274 = 0x5a484820;
          uVar80._0_4_ = 1;
          bVar137 = bVar128 == 0;
        }
        else {
          bVar137 = subtag_matches((char *)_uStack_280,(char *)uVar90,"-mo");
          if (!bVar137) {
            bVar137 = subtag_matches((char *)_uStack_280,(char *)uVar90,"-tw");
            uVar87 = uVar87 & 0xff;
            puVar131._4_4_ = 0;
            puVar131._0_4_ = uVar87;
            uVar107 = uStack_268;
            if (bVar137) goto LAB_0041f9d2;
            goto LAB_0041ecca;
          }
          uStack_274 = 0x5a48544d;
          uStack_270 = 0x4820;
          uStack_26e = 0x5a48;
          uVar80._0_4_ = 2;
          bVar137 = bVar128 == 0;
        }
      }
      if (!bVar137) goto LAB_0041f56e;
      goto LAB_0041f6da;
    case 0x28:
      goto code_r0x003f3b06;
    case 0x2a:
      goto code_r0x003f3c06;
    case 0x2c:
      *(byte *)auVar259._0_8_ = (char)*(hb_buffer_t *)auVar259._0_8_ + bVar73;
      goto LAB_003f3cf0;
    case 0x2e:
      *(byte *)uVar107 = (byte)*(hb_buffer_t *)uVar107 >> 7 | (char)*(hb_buffer_t *)uVar107 << 1;
      auVar9._4_4_ = in_XMM9_Db;
      auVar9._0_4_ = in_XMM9_Da;
      auVar9._8_4_ = in_XMM9_Dc;
      auVar9._12_4_ = in_XMM9_Dd;
      vpaddsw_avx(auVar9,*(undefined1 (*) [16])(uVar100 + -0x7d));
      if ((long)uVar99 < -0x5e01f4) {
        uVar59._1_1_ = bVar138;
        uVar59._0_1_ = 0xf4;
        uVar59._2_1_ = '^';
        uVar59._3_1_ = '\0';
        uVar59._4_1_ = '\0';
        uVar59._5_1_ = '\0';
        uVar59._6_1_ = '\0';
        uVar59._7_1_ = '\0';
        goto code_r0x003f3d1d;
      }
      bVar138 = false;
      goto code_r0x003f3d1d;
    case 0x2f:
      bVar137 = CARRY1((byte)*(hb_buffer_t *)auVar259._0_8_,bVar73);
      *(byte *)auVar259._0_8_ = (char)*(hb_buffer_t *)auVar259._0_8_ + bVar73;
      uVar82 = unaff_RBX;
      goto code_r0x003f3f52;
    case 0x30:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x31:
      goto code_r0x003f45a3;
    case 0x32:
    case 0x34:
      if (((ulong)*(uint *)(uVar100 + 0x18) < (auVar259._0_8_ - *(long *)(uVar100 + 8)) + 2U) ||
         (uVar56 = *(ushort *)uVar107 << 8 | *(ushort *)uVar107 >> 8, uVar56 < 2))
      goto LAB_003f4e62;
      uVar82 = *(undefined8 *)(uVar100 + 8);
      uVar80 = (uVar107 - uVar82) + 8;
      uVar57 = *(uint *)(uVar100 + 0x18);
      uVar59._4_4_ = 0;
      uVar59._0_4_ = uVar57;
      if ((ulong)uVar59 < (ulong)uVar80) goto LAB_003f4e62;
      uVar101 = uVar107 + 8;
      uVar127._0_4_ = *(uint *)(uVar107 + 4);
      in_R11[0] = (uint)uVar127 >> 0x18 | ((uint)uVar127 & 0xff0000) >> 8 |
                  ((uint)uVar127 & 0xff00) << 8 | (uint)uVar127 << 0x18;
      in_R11[1]._0_1_ = '\0';
      in_R11[1]._1_1_ = '\0';
      in_R11[1]._2_1_ = '\0';
      in_R11[1]._3_1_ = '\0';
      iVar43 = 0;
      if ((uint)uVar127 != 0) {
        local_208 = (int  [2])uVar107;
        uStack_220 = CONCAT44((uint)uVar127,(int)uStack_220);
        auStack_214._4_8_ = &((pthread_mutex_t *)(uVar100 + 8))->__data;
        auStack_214._0_4_ = in_R11[0] - 1;
        param_6 = uVar100 + 0x1c;
        p_Stack_200._0_1_ = (char)in_R11[0];
        p_Stack_200._1_1_ = (char)(in_R11[0] >> 8);
        p_Stack_200._2_1_ = (char)(in_R11[0] >> 0x10);
        p_Stack_200._3_1_ = (char)(in_R11[0] >> 0x18);
        p_Stack_200._4_1_ = '\0';
        p_Stack_200._5_1_ = '\0';
        p_Stack_200._6_1_ = '\0';
        p_Stack_200._7_1_ = '\0';
        uStack_218 = 1;
        if (1 < in_R11[0]) {
          uStack_218 = in_R11[0];
        }
        uVar107 = (pthread_mutex_t *)0x0;
        in_XMM7.__prev = (__pthread_internal_list *)0x0;
        in_XMM7.__next = (__pthread_internal_list *)0x0;
        uVar90 = uVar101;
        uVar127 = uVar100;
        uVar102 = param_6;
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
      *(uint *)uVar100 = uVar81;
      UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3a:
      goto code_r0x003f4f71;
    case 0x3c:
      *(hb_buffer_t *)(uVar90 + 0xf) =
           (hb_buffer_t)((char)*(hb_buffer_t *)(uVar90 + 0xf) + SUB81(uVar80,1));
      goto code_r0x003f5152;
    case 0x3e:
      goto code_r0x003f51c3;
    case 0x40:
      bVar137 = uVar81 == (int)auStack_23c - 0x4cU;
      goto code_r0x003f5218;
    case 0x41:
      goto code_r0x003f7f71;
    default:
      *(byte *)auVar259._0_8_ = (char)*(hb_buffer_t *)auVar259._0_8_ + bVar73;
      (&UNK_005e017f)[uVar99] = (&UNK_005e017f)[uVar99] + -0xc;
      uVar102 = uVar28;
      goto code_r0x003f7e92;
    case 0x48:
      goto code_r0x003f7f25;
    case 0x49:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4c:
      pcVar8 = (code *)swi(1);
      auVar259 = (*pcVar8)();
      return auVar259;
    case 0x5a:
      goto LAB_003f8038;
    case 0x5b:
      goto code_r0x003f7fe1;
    case 0x5f:
      *(char *)auVar259._0_8_ = (char)*(hb_buffer_t *)auVar259._0_8_ + '\x01';
      *(byte *)auVar259._0_8_ = (char)*(hb_buffer_t *)auVar259._0_8_ + bVar73;
      uVar102 = uVar27;
      goto LAB_003f8000;
    case 0x7b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x7d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x7f:
      *(byte *)auVar259._0_8_ = (char)*(hb_buffer_t *)auVar259._0_8_ + bVar73;
code_r0x003f8047:
                    /* WARNING: Could not recover jumptable at 0x003f8054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar259 = (*(code *)((long)*(int *)((long)puVar131 + uVar59 * 4) + (long)puVar131))();
      return auVar259;
    case 0x9b:
      *(hb_buffer_t *)(uVar107 + 0x3a) =
           (hb_buffer_t)((char)*(hb_buffer_t *)(uVar107 + 0x3a) + SUB81(unaff_RBX,1));
      goto code_r0x003f7fc6;
    case 0x9d:
      auVar259[0] = bVar73 + 0x76;
      uVar82 = uVar21;
      goto code_r0x003f7fe5;
    case 0x9e:
      goto code_r0x003f7dfd;
    case 0x9f:
      *(byte *)auVar259._0_8_ = (char)*(hb_buffer_t *)auVar259._0_8_ + bVar73;
                    /* WARNING (jumptable): Read-only address (ram,0x005e01f4) is written */
                    /* WARNING: Read-only address (ram,0x005e01f4) is written */
      _DAT_005e01f4 = (undefined8)in_ST0;
      uVar102 = uVar24;
      goto LAB_003f7db0;
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
      piVar52 = (int *)((uVar99 - 0x7458cf98) + auVar259._0_8_ * 8);
      *piVar52 = *piVar52 + 1;
      LOCK();
      uVar125 = *(undefined4 *)(uVar99 + 0x485e01f4);
      *(undefined4 *)(uVar99 + 0x485e01f4) = (int)auVar259._0_8_;
      p_Var58 = (__pthread_internal_list *)CONCAT44(SUB84(auVar259._0_8_,4),uVar125);
      UNLOCK();
      goto code_r0x003f7e42;
    case 0xb1:
      p_Var58 = (__pthread_internal_list *)(auVar259._0_8_ & 0xffffffffffffff60);
      goto code_r0x003f7e42;
    case 0xb2:
    case 0xb4:
      uVar99 = (ulong)((int)uVar107 + 0x28);
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
      *(uint *)(&UNK_005e0177 + uVar99) = *(uint *)(&UNK_005e0177 + uVar99) & 0x5e01f4;
      auVar175[8] = (char)uVar80;
      auVar175[9] = (char)((ulong)uVar80 >> 8);
      auVar175[10] = (char)((ulong)uVar80 >> 0x10);
      auVar175[0xb] = (char)((ulong)uVar80 >> 0x18);
      auVar175[0xc] = (char)((ulong)uVar80 >> 0x20);
      auVar175[0xd] = (char)((ulong)uVar80 >> 0x28);
      auVar175[0xe] = (char)((ulong)uVar80 >> 0x30);
      auVar175[0xf] = (char)((ulong)uVar80 >> 0x38);
      auVar175._0_8_ = auVar259._0_8_;
      return auVar175;
    case 0xb5:
      *(byte *)auVar259._0_8_ = (char)*(hb_buffer_t *)auVar259._0_8_ + bVar73;
      *(byte *)auVar259._0_8_ = (char)*(hb_buffer_t *)auVar259._0_8_ + bVar73;
      *(char *)&((__pthread_internal_list *)(uVar100 + -0x70))->__prev =
           *(char *)&((__pthread_internal_list *)(uVar100 + -0x70))->__prev +
           SUB81(auVar259._0_8_,1);
      goto LAB_003fd120;
    }
LAB_003f0ec0:
    _uStack_280 = uVar95;
    uVar127 = auStack_23c._12_8_;
    lVar88 = *(long *)(param_2 + 0x58);
    p_Var58 = *(__pthread_internal_list **)(lVar88 + 0x10);
    ((__pthread_internal_list *)(param_2 + 0x30))->__prev = p_Var58;
    uVar80._0_4_ = *(uint *)(lVar88 + 0x18);
    *(ulong *)(param_2 + 0x38) = (long)&p_Var58->__prev + (ulong)(uint)uVar80;
    *(uint *)&((__pthread_internal_list *)(param_2 + 0x40))->__prev = (uint)uVar80;
    ppVar129 = (pthread_mutex_t *)CONCAT44(uStack_44,local_48);
    if (uStack_26c._3_1_ == '\0') {
      p_Var58 = ((__pthread_internal_list *)(param_2 + 0x20))->__prev;
      uVar80._0_4_ = *(uint *)&p_Var58[6].__prev;
      if (1 < (uint)uVar80) {
        p_Var89 = p_Var58[7].__prev;
        uVar99 = (ulong)((uint)uVar80 - 1);
        pcVar109 = (char *)((long)p_Var89 + uVar99 * 0x14);
        ppVar91 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
        do {
          uVar99 = uVar99 - 1;
          uVar125 = *(undefined4 *)(pcVar109 + 0x10);
          local_1f8._0_1_ = (char)uVar125;
          local_1f8._1_1_ = (char)((uint)uVar125 >> 8);
          local_1f8._2_1_ = (char)((uint)uVar125 >> 0x10);
          local_1f8._3_1_ = (char)((uint)uVar125 >> 0x18);
          uVar93 = *(undefined8 *)pcVar109;
          p_Var113 = *(__pthread_internal_list **)(pcVar109 + 8);
          p_Stack_200 = p_Var113;
          *(undefined4 *)(pcVar109 + 0x10) = *(undefined4 *)&p_Var89[1].__prev;
          p_Var116 = p_Var89->__next;
          *(__pthread_internal_list **)pcVar109 = p_Var89->__prev;
          *(__pthread_internal_list **)(pcVar109 + 8) = p_Var116;
          *(undefined4 *)&p_Var89[1].__prev = uVar125;
          p_Var89->__prev = (__pthread_internal_list *)uVar93;
          p_Var89->__next = p_Var113;
          ppVar91 = (pthread_mutex_t *)(ppVar91->__size + 1);
          unaff_RBX = uVar99 & 0xffffffff;
          p_Var89 = (__pthread_internal_list *)((long)&p_Var89[1].__prev + 4);
          pcVar109 = pcVar109 + -0x14;
          local_208 = (int  [2])uVar93;
        } while (ppVar91 < (ulong)unaff_RBX);
      }
      if (*(char *)((long)&p_Var58[5].__next + 3) != '\0') {
        if (*(uint *)&p_Var58[6].__prev < (uint)uVar80) {
          uVar80._0_4_ = *(uint *)&p_Var58[6].__prev;
        }
        if (1 < (uint)uVar80) {
          p_Var58 = p_Var58[8].__prev;
          uVar99 = (ulong)((uint)uVar80 - 1);
          pcVar109 = (char *)((long)p_Var58 + uVar99 * 0x14);
          uVar92 = 0;
          do {
            uVar99 = uVar99 - 1;
            uVar125 = *(undefined4 *)(pcVar109 + 0x10);
            local_1f8._0_1_ = (char)uVar125;
            local_1f8._1_1_ = (char)((uint)uVar125 >> 8);
            local_1f8._2_1_ = (char)((uint)uVar125 >> 0x10);
            local_1f8._3_1_ = (char)((uint)uVar125 >> 0x18);
            uVar93 = *(undefined8 *)pcVar109;
            p_Var89 = *(__pthread_internal_list **)(pcVar109 + 8);
            p_Stack_200 = p_Var89;
            *(undefined4 *)(pcVar109 + 0x10) = *(undefined4 *)&p_Var58[1].__prev;
            p_Var113 = p_Var58->__next;
            *(__pthread_internal_list **)pcVar109 = p_Var58->__prev;
            *(__pthread_internal_list **)(pcVar109 + 8) = p_Var113;
            *(undefined4 *)&p_Var58[1].__prev = uVar125;
            p_Var58->__prev = (__pthread_internal_list *)uVar93;
            p_Var58->__next = p_Var89;
            uVar92 = uVar92 + 1;
            p_Var58 = (__pthread_internal_list *)((long)&p_Var58[1].__prev + 4);
            pcVar109 = pcVar109 + -0x14;
            local_208 = (int  [2])uVar93;
          } while (uVar92 < (uVar99 & 0xffffffff));
        }
      }
    }
    hb_buffer_t::message
              (uVar93,in_XMM1.__prev,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,in_XMM5._0_8_,
               in_XMM6.__prev,in_XMM7.__prev,
               (hb_buffer_t *)((__pthread_internal_list *)(param_2 + 0x20))->__prev,
               ((__pthread_internal_list *)(param_2 + 0x10))->__prev,"end subtable %u",
               (ulong)*(uint *)(param_2 + 0xe4),uVar120,param_6,(char)in_stack_fffffffffffffd78);
    param_3 = (uint *)local_40;
    in_XMM0 = extraout_XMM0_07;
LAB_003f1015:
    uVar80._0_4_ = *(uint *)uVar127;
    in_RAX = (__pthread_internal_list *)(ulong)(uint)uVar80;
    uVar57 = *(int *)(param_2 + 0xe4) + 1;
    uVar99 = (ulong)uVar57;
    *(uint *)(param_2 + 0xe4) = uVar57;
    auStack_214._4_8_ = auStack_214._4_8_ + 1;
    if ((pthread_mutex_t *)auStack_214._4_8_ == ppVar129) goto LAB_003f159f;
    uVar127 = uVar127 + (ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                                ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18);
    uVar107 = ((__pthread_internal_list *)(param_2 + 0x20))->__prev;
  } while( true );
code_r0x003f3f52:
  uStack_274 = SUB84(uVar102,4);
  local_278 = (undefined4)uVar102;
  auVar212._8_8_ = in_XMM1.__prev;
  auVar212._0_8_ = _Var144.__prev;
  local_1f8._0_1_ = (char)uVar107;
  local_1f8._1_1_ = (char)((ulong)uVar107 >> 8);
  local_1f8._2_1_ = (char)((ulong)uVar107 >> 0x10);
  local_1f8._3_1_ = (char)((ulong)uVar107 >> 0x18);
  local_1f8._4_1_ = (char)((ulong)uVar107 >> 0x20);
  local_1f8._5_1_ = (char)((ulong)uVar107 >> 0x28);
  local_1f8._6_1_ = (char)((ulong)uVar107 >> 0x30);
  local_1f8._7_1_ = (char)((ulong)uVar107 >> 0x38);
  unaff_RBX = uVar82;
  if (bVar137) {
    uVar99 = auVar259._0_8_ - uVar59;
    unaff_RBX._1_7_ = SUB87(uVar82,1);
    unaff_RBX._0_1_ = (ulong)auVar259._0_8_ < (ulong)uVar59 || uVar99 == 0;
    if ((ulong)uVar59 < (ulong)uVar80) {
      unaff_RBX._1_1_ = (char)((ulong)uVar82 >> 8);
      unaff_RBX._2_1_ = (char)((ulong)uVar82 >> 0x10);
      unaff_RBX._3_1_ = (char)((ulong)uVar82 >> 0x18);
      unaff_RBX._4_1_ = (char)((ulong)uVar82 >> 0x20);
      unaff_RBX._5_1_ = (char)((ulong)uVar82 >> 0x28);
      unaff_RBX._6_1_ = (char)((ulong)uVar82 >> 0x30);
      unaff_RBX._7_1_ = (char)((ulong)uVar82 >> 0x38);
      unaff_RBX._0_1_ = '\x01';
    }
    else if ((ulong)auVar259._0_8_ >= (ulong)uVar59 && uVar99 != 0) {
      *(undefined8 *)(uVar127 + 8) = uVar59;
      uVar80._0_4_ = *(uint *)uVar59;
      uVar92 = (ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                       ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18);
      if (uVar92 < uVar99) {
        uVar99 = uVar92;
      }
      ((__pthread_internal_list *)(uVar127 + 0x10))->__prev =
           (__pthread_internal_list *)(uVar59 + uVar99);
      *(int *)&((__pthread_list_t *)(uVar127 + 0x18))->__prev = (int)uVar99;
      uVar100 = uVar99 & 0xffffffff;
      uVar80 = uVar59;
      goto LAB_003f3f98;
    }
    *(__pthread_internal_list *)auStack_214._4_8_ = in_XMM7;
    *(undefined4 *)&((__pthread_internal_list *)(auStack_214._4_8_ + 0x10))->__prev = 0;
    uVar100 = (pthread_mutex_t *)0x0;
    uVar80 = (pthread_mutex_t *)0x0;
  }
LAB_003f3f98:
  if ((uVar100 & 0xffffffff) < (ulong)(uVar130 - uVar80)) goto LAB_003f4e44;
  uVar57 = *(uint *)uVar90;
  uVar57 = uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 | (uVar57 & 0xff00) << 8 | uVar57 << 0x18;
  if (uVar57 < 0xc) goto LAB_003f4e44;
  uVar80 = *(__pthread_internal_list **)(uVar127 + 8);
  uVar59 = uVar90 - uVar80;
  uVar87 = *(uint *)&((__pthread_list_t *)(uVar127 + 0x18))->__prev;
  auVar259._4_4_ = 0;
  auVar259._0_4_ = uVar87;
  if (((ulong)auVar259._0_8_ < (ulong)uVar59) ||
     (uVar81 = (uint)uVar90,
     *(int *)&((__pthread_internal_list *)(uVar127 + 0x10))->__prev - uVar81 < uVar57))
  goto LAB_003f4e44;
  iVar43 = *(int *)param_6;
  *(uint *)param_6 = iVar43 - uVar57;
  if ((int)(iVar43 - uVar57) < 1) goto LAB_003f4e44;
  uVar57 = *(uint *)(uVar90 + 4) >> 0x18;
  if ((byte)(*(uint *)(uVar90 + 4) >> 0x18) < 7) {
    uVar107 = &DAT_005e02b0;
    uVar99 = (ulong)*(int *)(&DAT_005e02b0 + (ulong)uVar57 * 4);
    bVar137 = 0xffffffffffa1fd4f < uVar99;
    uVar100 = (long)&DAT_005e02b0 + uVar99;
    puVar131 = (uint *)uVar130;
    _uStack_280 = uVar90;
    uVar95 = uVar90;
    uVar82 = uVar102;
    uVar93 = uVar90;
    piVar52 = uStack_1b8;
    switch(uVar57) {
    case 0:
      if ((pthread_mutex_t *)(uVar59 + 0x14) <= (ulong)auVar259._0_8_) {
        uVar80._0_4_ = *(uint *)(uVar90 + 0xc);
        lVar88 = (ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                         ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18) * 6;
        uVar80._0_4_ = (uint)((ulong)lVar88 >> 0x20);
        uVar80._4_4_ = 0;
        uVar57 = (uint)lVar88;
        if ((uint)uVar80 == 0) {
          uVar80 = (uVar90 + 0x1c) - (long)*(__pthread_internal_list **)(uVar127 + 8);
          if (((ulong)uVar80 <=
               (pthread_mutex_t *)(ulong)*(uint *)&((__pthread_list_t *)(uVar127 + 0x18))->__prev)
             && (uVar80._0_4_ = *(int *)&((__pthread_internal_list *)(uVar127 + 0x10))->__prev -
                                (int)(hb_buffer_t *)(uVar90 + 0x1c), uVar80._4_4_ = 0,
                uVar57 <= (uint)uVar80)) {
LAB_003f3ec0:
            iVar43 = *(int *)param_6 - uVar57;
            *(int *)param_6 = iVar43;
joined_r0x003f4e19:
            uVar102._4_4_ = uStack_274;
            uVar102._0_4_ = local_278;
            if (0 < iVar43) goto LAB_003f3ed0;
          }
        }
      }
      break;
    case 1:
      if (((((pthread_mutex_t *)(uVar59 + 0x20) <= (ulong)auVar259._0_8_) &&
           ((pthread_mutex_t *)((uVar130 - uVar80) + 0x10) <= (ulong)auVar259._0_8_)) &&
          (uVar57 = *(uint *)uVar130,
          3 < (uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 | (uVar57 & 0xff00) << 8 | uVar57 << 0x18))
          ) && (phVar103 = (hb_buffer_t *)(uVar130 + 8),
               (ulong)((long)phVar103 - (long)*(__pthread_internal_list **)(uVar127 + 8)) <=
               (ulong)*(uint *)&((__pthread_list_t *)(uVar127 + 0x18))->__prev)) {
        uVar80._0_4_ = *(uint *)(uVar130 + 4);
        uVar99 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                           ((Lookup<OT::IntType<unsigned_short,2u>> *)
                            ((ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                                     ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18) + uVar130)
                            ,uVar127);
        param_6._4_4_ = uStack_274;
        param_6._0_4_ = local_278;
        in_XMM7.__prev = (__pthread_internal_list *)0x0;
        in_XMM7.__next = (__pthread_internal_list *)0x0;
        in_XMM9_Da = -1;
        in_XMM9_Db = -1;
        in_XMM9_Dc = -1;
        in_XMM9_Dd = -1;
        in_XMM10_Da = -0x7fffffff;
        in_XMM10_Db = -0x7fffffff;
        in_XMM10_Dc = -0x7fffffff;
        in_XMM10_Dd = -0x7fffffff;
        uVar80 = extraout_RDX_02;
        if ((char)uVar99 != '\0') {
          uVar57 = *(uint *)uVar130;
          in_R10._0_4_ = uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 | (uVar57 & 0xff00) << 8 |
                         uVar57 << 0x18;
          in_R10._4_4_ = 0;
          if (-1 < (int)(uint)in_R10) {
            uVar80._0_4_ = *(uint *)(uVar130 + 8);
            uVar99 = (ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                             ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18);
            unaff_RBX = uVar99 + uVar130;
            uVar80._0_4_ = *(uint *)(uVar130 + 0xc);
            uVar92 = (ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                             ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18);
            puVar131 = (uint *)(uVar130 + uVar92);
            uStack_268._0_4_ = (float)((uint)in_R10 * 2);
            _uStack_228 = (long)phVar103 + uVar92;
            auStack_23c._12_8_ = (long)phVar103 + (uVar92 - 8);
            auStack_23c._4_8_ = (long)(uVar130 + 6) + uVar92;
            _uStack_240 = 2 - _uStack_228;
            _uStack_250 = (long)phVar103 + (uVar99 - 8);
            _uStack_248 = (long)phVar103 + uVar99;
            _uStack_260 = (long)(uVar99 + uVar90) + 0x14;
            _uStack_258 = (long)(uVar92 + uVar90) + 0x24;
            in_R11 = (int  [2])0x0;
            param_3 = (uint *)0x0;
            param_2 = (pthread_mutex_t *)0x0;
            uStack_270 = (ushort)unaff_RBX;
            uStack_26e = SUB82(unaff_RBX,2);
            uStack_26c = SUB84(unaff_RBX,4);
            _Var144 = extraout_XMM0_10;
            in_XMM8 = _DAT_005de020;
            in_XMM11 = _DAT_006524b0;
            do {
              uVar120 = param_2 & 0xffffffff;
              iVar43 = in_R11[0];
              uVar87 = (uint)param_3;
              uVar57 = (uint)param_2;
              param_2 = uVar120;
              if ((int)uVar87 < iVar43) {
              }
              else {
                uVar97 = uVar87 + 1;
                lVar88 = (ulong)uVar97 * (uStack_268 & 0xffffffff);
                uVar80._0_4_ = (uint)((ulong)lVar88 >> 0x20);
                uVar80._4_4_ = 0;
                uVar81 = (uint)lVar88;
                if ((((uint)uVar80 != 0) ||
                    (uVar80._4_4_ = 0, uVar80._0_4_ = *(uint *)(uVar127 + 0x18),
                    (ulong)uVar80 < (pthread_mutex_t *)(unaff_RBX - *(long *)(uVar127 + 8)))) ||
                   ((uint)(*(int *)&((__pthread_internal_list *)(uVar127 + 0x10))->__prev -
                          (int)unaff_RBX) < uVar81)) goto LAB_003f4e44;
                iVar98 = *(int *)param_6 - uVar81;
                *(int *)param_6 = iVar98;
                if (((iVar98 < 1) ||
                    (iVar98 = ~uVar87 + iVar43 + iVar98, *(int *)param_6 = iVar98, iVar98 < 1)) ||
                   (uVar80._0_4_ = (uint)((ulong)uVar97 * (in_R10 & 0xffffffff) >> 0x20),
                   uVar80._4_4_ = 0, (uint)uVar80 != 0)) goto LAB_003f4e44;
                uVar80._0_4_ = uVar97 * (int)in_R10;
                uVar81 = iVar43 * (int)in_R10;
                if (uVar81 < (uint)uVar80) {
                  uVar99 = (ulong)uVar81;
                  phVar103 = (hb_buffer_t *)(unaff_RBX + uVar99 * 2);
                  phVar110 = (hb_buffer_t *)(uVar99 * 2 + 2 + _uStack_250);
                  phVar85 = (hb_buffer_t *)(_uStack_250 + (ulong)(uint)uVar80 * 2);
                  if (phVar85 < phVar110) {
                    phVar85 = phVar110;
                  }
                  uVar90 = _uStack_280;
                  if ((hb_buffer_t *)0xd < phVar85 + (7 - (long)(_uStack_248 + uVar99 * 2))) {
                    phVar110 = (hb_buffer_t *)(uVar99 * 2 + _uStack_260);
                    uVar92 = ((ulong)(phVar85 + (7 - (long)(_uStack_248 + uVar99 * 2))) >> 1) + 1;
                    uVar78 = uVar92 & 0xfffffffffffffff8;
                    auVar141._4_4_ = uVar57;
                    auVar141._0_4_ = uVar57;
                    auVar141._8_4_ = uVar57;
                    auVar141._12_4_ = uVar57;
                    uVar99 = 0;
                    auVar259 = auVar141;
                    do {
                      uVar72 = *(ulong *)(phVar110 + uVar99 * 2 + -8);
                      auVar217._8_8_ = 0;
                      auVar217._0_8_ = uVar72;
                      uVar118 = *(ulong *)(phVar110 + uVar99 * 2);
                      auVar182._8_8_ = 0;
                      auVar182._0_8_ = uVar118;
                      auVar213._0_2_ = (ushort)uVar72 >> 8;
                      auVar213._2_2_ = (ushort)(uVar72 >> 0x10) >> 8;
                      auVar213._4_2_ = (ushort)(uVar72 >> 0x20) >> 8;
                      auVar213._6_2_ = (ushort)(uVar72 >> 0x38);
                      auVar213._8_6_ = 0;
                      auVar175 = psllw(auVar217,8);
                      auVar213 = auVar175._0_14_ | auVar213;
                      auVar178._0_2_ = (ushort)uVar118 >> 8;
                      auVar178._2_2_ = (ushort)(uVar118 >> 0x10) >> 8;
                      auVar178._4_2_ = (ushort)(uVar118 >> 0x20) >> 8;
                      auVar178._6_2_ = (ushort)(uVar118 >> 0x38);
                      auVar178._8_6_ = 0;
                      auVar175 = psllw(auVar182,8);
                      auVar178 = auVar175._0_14_ | auVar178;
                      auVar220._0_12_ = auVar213._0_12_;
                      auVar220._12_2_ = auVar213._6_2_;
                      auVar220._14_2_ = in_XMM7.__prev._6_2_;
                      auVar219._12_4_ = auVar220._12_4_;
                      auVar219._0_10_ = auVar213._0_10_;
                      auVar219._10_2_ = in_XMM7.__prev._4_2_;
                      auVar218._10_6_ = auVar219._10_6_;
                      auVar218._0_8_ = auVar213._0_8_;
                      auVar218._8_2_ = auVar213._4_2_;
                      auVar15._4_8_ = auVar218._8_8_;
                      auVar15._2_2_ = in_XMM7.__prev._2_2_;
                      auVar15._0_2_ = auVar213._2_2_;
                      iVar98 = CONCAT22((short)in_XMM7.__prev,auVar213._0_2_);
                      auVar185._0_12_ = auVar178._0_12_;
                      auVar185._12_2_ = auVar178._6_2_;
                      auVar185._14_2_ = in_XMM7.__prev._6_2_;
                      auVar184._12_4_ = auVar185._12_4_;
                      auVar184._0_10_ = auVar178._0_10_;
                      auVar184._10_2_ = in_XMM7.__prev._4_2_;
                      auVar183._10_6_ = auVar184._10_6_;
                      auVar183._0_8_ = auVar178._0_8_;
                      auVar183._8_2_ = auVar178._4_2_;
                      auVar16._4_8_ = auVar183._8_8_;
                      auVar16._2_2_ = in_XMM7.__prev._2_2_;
                      auVar16._0_2_ = auVar178._2_2_;
                      iVar43 = CONCAT22((short)in_XMM7.__prev,auVar178._0_2_);
                      in_XMM4.__prev._0_4_ = iVar98 - in_XMM9_Da;
                      in_XMM4.__prev._4_4_ = auVar15._0_4_ - in_XMM9_Db;
                      in_XMM4.__next._0_4_ = auVar218._8_4_ - in_XMM9_Dc;
                      in_XMM4.__next._4_4_ = auVar219._12_4_ - in_XMM9_Dd;
                      in_XMM5._0_4_ = iVar43 - in_XMM9_Da;
                      in_XMM5._4_4_ = auVar16._0_4_ - in_XMM9_Db;
                      in_XMM5._8_4_ = auVar183._8_4_ - in_XMM9_Dc;
                      in_XMM5._12_4_ = auVar184._12_4_ - in_XMM9_Dd;
                      auVar175 = auVar141 ^ (undefined1  [16])in_XMM11;
                      auVar140._0_4_ = -(uint)(iVar98 + in_XMM10_Da < auVar175._0_4_);
                      auVar140._4_4_ = -(uint)(auVar15._0_4_ + in_XMM10_Db < auVar175._4_4_);
                      auVar140._8_4_ = -(uint)(auVar218._8_4_ + in_XMM10_Dc < auVar175._8_4_);
                      auVar140._12_4_ = -(uint)(auVar219._12_4_ + in_XMM10_Dd < auVar175._12_4_);
                      in_XMM6 = (__pthread_internal_list)(auVar141 & auVar140);
                      auVar141 = ~auVar140 & (undefined1  [16])in_XMM4 | (undefined1  [16])in_XMM6;
                      auVar175 = auVar259 ^ (undefined1  [16])in_XMM11;
                      auVar162._0_4_ = -(uint)(iVar43 + in_XMM10_Da < auVar175._0_4_);
                      auVar162._4_4_ = -(uint)(auVar16._0_4_ + in_XMM10_Db < auVar175._4_4_);
                      auVar162._8_4_ = -(uint)(auVar183._8_4_ + in_XMM10_Dc < auVar175._8_4_);
                      auVar162._12_4_ = -(uint)(auVar184._12_4_ + in_XMM10_Dd < auVar175._12_4_);
                      auVar259 = ~auVar162 & in_XMM5 | auVar259 & auVar162;
                      uVar99 = uVar99 + 8;
                    } while (uVar78 != uVar99);
                    auVar175 = auVar259 ^ (undefined1  [16])in_XMM11;
                    auVar212 = auVar141 ^ (undefined1  [16])in_XMM11;
                    auVar221._0_4_ = -(uint)(auVar175._0_4_ < auVar212._0_4_);
                    auVar221._4_4_ = -(uint)(auVar175._4_4_ < auVar212._4_4_);
                    auVar221._8_4_ = -(uint)(auVar175._8_4_ < auVar212._8_4_);
                    auVar221._12_4_ = -(uint)(auVar175._12_4_ < auVar212._12_4_);
                    auVar212 = ~auVar221 & auVar259 | auVar141 & auVar221;
                    auVar142._0_8_ = auVar212._8_8_;
                    auVar142._8_4_ = auVar212._8_4_;
                    auVar142._12_4_ = auVar212._12_4_;
                    auVar259 = auVar212 ^ (undefined1  [16])in_XMM11;
                    auVar175 = auVar142 ^ (undefined1  [16])in_XMM11;
                    auVar163._0_4_ = -(uint)(auVar175._0_4_ < auVar259._0_4_);
                    auVar163._4_4_ = -(uint)(auVar175._4_4_ < auVar259._4_4_);
                    auVar163._8_4_ = -(uint)(auVar175._8_4_ < auVar259._8_4_);
                    auVar163._12_4_ = -(uint)(auVar175._12_4_ < auVar259._12_4_);
                    auVar259 = ~auVar163 & auVar142 | auVar212 & auVar163;
                    uVar125 = auVar259._4_4_;
                    _Var144.__prev._4_4_ = uVar125;
                    _Var144.__prev._0_4_ = uVar125;
                    _Var144.__next._0_4_ = uVar125;
                    _Var144.__next._4_4_ = uVar125;
                    auVar175 = auVar259 ^ (undefined1  [16])in_XMM11;
                    in_XMM3 = (undefined1  [16])_Var144 ^ (undefined1  [16])in_XMM11;
                    auVar186._0_4_ = -(uint)(in_XMM3._0_4_ < auVar175._0_4_);
                    auVar186._4_4_ = -(uint)(in_XMM3._4_4_ < auVar175._4_4_);
                    auVar186._8_4_ = -(uint)(in_XMM3._8_4_ < auVar175._8_4_);
                    auVar186._12_4_ = -(uint)(in_XMM3._12_4_ < auVar175._12_4_);
                    in_XMM1 = (__pthread_internal_list)(auVar259 & auVar186);
                    in_XMM2 = (__pthread_internal_list)
                              (~auVar186 & (undefined1  [16])_Var144 | (undefined1  [16])in_XMM1);
                    param_2._0_4_ = (uint)in_XMM2.__prev;
                    param_2._4_4_ = 0;
                    if (uVar92 == uVar78) {
                      in_R11[1]._0_1_ = '\0';
                      in_R11[1]._1_1_ = '\0';
                      in_R11[1]._2_1_ = '\0';
                      in_R11[1]._3_1_ = '\0';
                      in_R11[0] = uVar97;
                      unaff_RBX._2_2_ = uStack_26e;
                      unaff_RBX._0_2_ = uStack_270;
                      unaff_RBX._4_4_ = uStack_26c;
                      goto LAB_003f43f5;
                    }
                    phVar103 = phVar103 + uVar78 * 2;
                    unaff_RBX._2_2_ = uStack_26e;
                    unaff_RBX._0_2_ = uStack_270;
                    unaff_RBX._4_4_ = uStack_26c;
                  }
                  do {
                    uVar134._0_4_ =
                         (ushort)(*(ushort *)phVar103 << 8 | *(ushort *)phVar103 >> 8) + 1;
                    uVar134._4_4_ = 0;
                    if ((uint)uVar134 <= (uint)param_2) {
                      uVar134 = param_2;
                    }
                    phVar103 = phVar103 + 2;
                    param_2 = uVar134;
                  } while (phVar103 < (hb_buffer_t *)(unaff_RBX + (ulong)(uint)uVar80 * 2));
                }
                in_R11[1]._0_1_ = '\0';
                in_R11[1]._1_1_ = '\0';
                in_R11[1]._2_1_ = '\0';
                in_R11[1]._3_1_ = '\0';
                in_R11[0] = uVar97;
              }
LAB_003f43f5:
              uVar80._0_4_ = (uint)((ulong)(param_2 * 6) >> 0x20);
              uVar80._4_4_ = 0;
              uVar81 = (uint)(param_2 * 6);
              if ((((uint)uVar80 != 0) ||
                  (uVar80._4_4_ = 0, uVar80._0_4_ = *(uint *)(uVar127 + 0x18),
                  (ulong)uVar80 < (pthread_mutex_t *)((long)puVar131 - *(long *)(uVar127 + 8)))) ||
                 ((uint)(*(int *)&((__pthread_internal_list *)(uVar127 + 0x10))->__prev -
                        (int)puVar131) < uVar81)) goto LAB_003f4e44;
              uVar80._0_4_ = *(int *)param_6 - uVar81;
              uVar80._4_4_ = 0;
              *(uint *)param_6 = (uint)uVar80;
              if ((int)(uint)uVar80 < 1) goto LAB_003f4e44;
              uVar80._0_4_ = (uint)uVar80 + (uVar57 - (uint)param_2);
              uVar80._4_4_ = 0;
              *(uint *)param_6 = (uint)uVar80;
              if ((int)(uint)uVar80 < 1) goto LAB_003f4e44;
              if (uVar57 < (uint)param_2) {
                param_6 = param_2 * 3;
                lVar88 = uVar120 * 6;
                phVar103 = (hb_buffer_t *)(auStack_23c._12_8_ + param_2 * 6);
                if (phVar103 < (hb_buffer_t *)(auStack_23c._4_8_ + lVar88)) {
                  phVar103 = (hb_buffer_t *)(auStack_23c._4_8_ + lVar88);
                }
                uVar92 = (ulong)(phVar103 + 2 != (hb_buffer_t *)(_uStack_228 + lVar88));
                auVar259._0_8_ = lVar88 + (long)puVar131;
                uVar99 = uVar92 + (ulong)(phVar103 + uVar120 * -6 + (_uStack_240 - uVar92)) / 6 + 1;
                if (8 < uVar99) {
                  uVar78 = (ulong)((uint)uVar99 & 7);
                  if (uVar78 == 0) {
                    uVar78 = 8;
                  }
                  uVar90 = uVar99 - uVar78;
                  _Var144.__prev._4_4_ = uVar87;
                  _Var144.__prev._0_4_ = uVar87;
                  _Var144.__next._0_4_ = uVar87;
                  _Var144.__next._4_4_ = uVar87;
                  unaff_RBX = (uVar78 - (uVar92 + 1)) -
                              (ulong)(phVar103 + uVar120 * -6 + (_uStack_240 - uVar92)) / 6;
                  uVar107 = lVar88 + _uStack_258;
                  in_XMM1 = _Var144;
                  do {
                    auVar187._8_8_ = 0;
                    auVar187._0_8_ = *(ulong *)(uVar107 + -8);
                    auVar222._8_8_ = 0;
                    auVar222._0_8_ = ((__pthread_internal_list *)(uVar107 + 0x10))->__prev;
                    in_XMM6 = (__pthread_internal_list)(~in_XMM8 & auVar187);
                    auVar175 = *(undefined1 (*) [16])(uVar107 + -0x18) & in_XMM8 |
                               (undefined1  [16])in_XMM6;
                    auVar188._4_4_ = auVar175._8_4_;
                    auVar188._0_4_ = auVar175._0_4_;
                    auVar188._8_4_ = auVar175._4_4_;
                    auVar188._12_4_ = auVar175._12_4_;
                    auVar175 = pshufhw(auVar188,auVar188,0xe6);
                    auVar189._0_4_ = auVar175._0_4_;
                    auVar189._8_4_ = auVar175._8_4_;
                    auVar189._12_4_ = auVar175._12_4_;
                    auVar189._4_4_ = auVar189._8_4_;
                    auVar175 = pshuflw(auVar189,auVar189,0x6c);
                    in_XMM5 = (undefined1  [16])*(__pthread_internal_list *)uVar107 & in_XMM8 |
                              ~in_XMM8 & auVar222;
                    auVar223._4_4_ = in_XMM5._8_4_;
                    auVar223._0_4_ = in_XMM5._0_4_;
                    auVar223._8_4_ = in_XMM5._4_4_;
                    auVar223._12_4_ = in_XMM5._12_4_;
                    auVar212 = pshufhw(auVar223,auVar223,0xe6);
                    auVar224._0_4_ = auVar212._0_4_;
                    auVar224._8_4_ = auVar212._8_4_;
                    auVar224._12_4_ = auVar212._12_4_;
                    auVar224._4_4_ = auVar224._8_4_;
                    auVar212 = pshuflw(auVar224,auVar224,0x6c);
                    auVar179._0_2_ = auVar175._0_2_ >> 8;
                    auVar179._2_2_ = auVar175._2_2_ >> 8;
                    auVar179._4_2_ = auVar175._4_2_ >> 8;
                    auVar179._6_2_ = auVar175._6_2_ >> 8;
                    auVar179._8_2_ = auVar175._8_2_ >> 8;
                    auVar179._10_2_ = auVar175._10_2_ >> 8;
                    auVar179._12_2_ = auVar175._12_2_ >> 8;
                    auVar175 = psllw(auVar175,8);
                    auVar179 = auVar175._0_14_ | auVar179;
                    auVar214._0_2_ = auVar212._0_2_ >> 8;
                    auVar214._2_2_ = auVar212._2_2_ >> 8;
                    auVar214._4_2_ = auVar212._4_2_ >> 8;
                    auVar214._6_2_ = auVar212._6_2_ >> 8;
                    auVar214._8_2_ = auVar212._8_2_ >> 8;
                    auVar214._10_2_ = auVar212._10_2_ >> 8;
                    auVar214._12_2_ = auVar212._12_2_ >> 8;
                    auVar175 = psllw(auVar212,8);
                    auVar214 = auVar175._0_14_ | auVar214;
                    auVar193._0_12_ = auVar179._0_12_;
                    auVar193._12_2_ = auVar179._6_2_;
                    auVar193._14_2_ = in_XMM7.__prev._6_2_;
                    auVar192._12_4_ = auVar193._12_4_;
                    auVar192._0_10_ = auVar179._0_10_;
                    auVar192._10_2_ = in_XMM7.__prev._4_2_;
                    auVar191._10_6_ = auVar192._10_6_;
                    auVar191._0_8_ = auVar179._0_8_;
                    auVar191._8_2_ = auVar179._4_2_;
                    auVar17._4_8_ = auVar191._8_8_;
                    auVar17._2_2_ = in_XMM7.__prev._2_2_;
                    auVar17._0_2_ = auVar179._2_2_;
                    auVar190._0_4_ = CONCAT22((short)in_XMM7.__prev,auVar179._0_2_);
                    auVar190._4_12_ = auVar17;
                    auVar227._0_12_ = auVar214._0_12_;
                    auVar227._12_2_ = auVar214._6_2_;
                    auVar227._14_2_ = in_XMM7.__prev._6_2_;
                    auVar226._12_4_ = auVar227._12_4_;
                    auVar226._0_10_ = auVar214._0_10_;
                    auVar226._10_2_ = in_XMM7.__prev._4_2_;
                    auVar225._10_6_ = auVar226._10_6_;
                    auVar225._0_8_ = auVar214._0_8_;
                    auVar225._8_2_ = auVar214._4_2_;
                    in_XMM3._8_8_ = auVar225._8_8_;
                    in_XMM3._6_2_ = in_XMM7.__prev._2_2_;
                    in_XMM3._4_2_ = auVar214._2_2_;
                    in_XMM3._0_2_ = auVar214._0_2_;
                    in_XMM3._2_2_ = (short)in_XMM7.__prev;
                    auVar143._0_4_ = -(uint)(auVar190._0_4_ < (int)_Var144.__prev);
                    auVar143._4_4_ = -(uint)(auVar17._0_4_ < _Var144.__prev._4_4_);
                    auVar143._8_4_ = -(uint)(auVar191._8_4_ < (int)_Var144.__next);
                    auVar143._12_4_ = -(uint)(auVar192._12_4_ < _Var144.__next._4_4_);
                    in_XMM4 = (__pthread_internal_list)((undefined1  [16])_Var144 & auVar143);
                    _Var144 = (__pthread_internal_list)
                              (~auVar143 & auVar190 | (undefined1  [16])in_XMM4);
                    in_XMM2 = in_XMM1;
code_r0x003f45a3:
                    auVar164._0_4_ = -(uint)(in_XMM3._0_4_ < (int)in_XMM1.__prev);
                    auVar164._4_4_ = -(uint)(in_XMM3._4_4_ < in_XMM1.__prev._4_4_);
                    auVar164._8_4_ = -(uint)(in_XMM3._8_4_ < (int)in_XMM1.__next);
                    auVar164._12_4_ = -(uint)(in_XMM3._12_4_ < in_XMM1.__next._4_4_);
                    in_XMM1 = (__pthread_internal_list)
                              (~auVar164 & in_XMM3 | (undefined1  [16])in_XMM2 & auVar164);
                    uVar107 = uVar107 + 0x30;
                    unaff_RBX = unaff_RBX + 8;
                  } while ((pthread_mutex_t *)unaff_RBX != (pthread_mutex_t *)0x0);
                  auVar259._0_8_ = auVar259._0_8_ + uVar90 * 6;
                  auVar194._0_4_ = -(uint)((int)in_XMM1.__prev < (int)_Var144.__prev);
                  auVar194._4_4_ = -(uint)(in_XMM1.__prev._4_4_ < _Var144.__prev._4_4_);
                  auVar194._8_4_ = -(uint)((int)in_XMM1.__next < (int)_Var144.__next);
                  auVar194._12_4_ = -(uint)(in_XMM1.__next._4_4_ < _Var144.__next._4_4_);
                  auVar175 = ~auVar194 & (undefined1  [16])in_XMM1 |
                             (undefined1  [16])_Var144 & auVar194;
                  auVar145._0_8_ = auVar175._8_8_;
                  auVar145._8_4_ = auVar175._8_4_;
                  auVar145._12_4_ = auVar175._12_4_;
                  auVar165._0_4_ = -(uint)(auVar175._8_4_ < auVar175._0_4_);
                  auVar165._4_4_ = -(uint)(auVar175._12_4_ < auVar175._4_4_);
                  auVar165._8_8_ = 0;
                  auVar175 = ~auVar165 & auVar145 | auVar175 & auVar165;
                  iVar43 = auVar175._4_4_;
                  _Var144.__prev._4_4_ = iVar43;
                  _Var144.__prev._0_4_ = iVar43;
                  _Var144.__next._0_4_ = iVar43;
                  _Var144.__next._4_4_ = iVar43;
                  auVar195._0_4_ = -(uint)(iVar43 < auVar175._0_4_);
                  auVar195._4_4_ = 0;
                  auVar195._8_4_ = -(uint)(iVar43 < auVar175._8_4_);
                  auVar195._12_4_ = -(uint)(iVar43 < auVar175._12_4_);
                  in_XMM1 = (__pthread_internal_list)(auVar175 & auVar195);
                  in_XMM2 = (__pthread_internal_list)
                            (~auVar195 & (undefined1  [16])_Var144 | (undefined1  [16])in_XMM1);
                  param_3._0_4_ = (uint)in_XMM2.__prev;
                  param_3._4_4_ = 0;
                  unaff_RBX._2_2_ = uStack_26e;
                  unaff_RBX._0_2_ = uStack_270;
                  unaff_RBX._4_4_ = uStack_26c;
                }
                uVar80 = param_6 * 2 + (long)puVar131;
                param_6._4_4_ = uStack_274;
                param_6._0_4_ = local_278;
                uVar90 = _uStack_280;
LAB_003f4640:
                do {
                  uVar56 = *(ushort *)auVar259._0_8_ << 8 | *(ushort *)auVar259._0_8_ >> 8;
                  iVar43 = (int)param_3;
                  param_3 = (uint *)((ulong)param_3 & 0xffffffff);
                  if (iVar43 < (int)(uint)uVar56) {
                    param_3._2_1_ = '\0';
                    param_3._3_1_ = '\0';
                    param_3._4_1_ = '\0';
                    param_3._5_1_ = '\0';
                    param_3._6_1_ = '\0';
                    param_3._7_1_ = '\0';
                    param_3._0_2_ = uVar56;
                  }
                  auVar259._0_8_ = auVar259._0_8_ + 6;
                } while ((ulong)auVar259._0_8_ < (ulong)uVar80);
              }
              uVar102._4_4_ = uStack_274;
              uVar102._0_4_ = local_278;
            } while (in_R11[0] <= (int)param_3);
            goto LAB_003f3ed0;
          }
        }
      }
      break;
    case 2:
      uVar80 = uVar59 + 0x1c;
      if (((ulong)uVar80 <= (ulong)auVar259._0_8_) &&
         ((pthread_mutex_t *)(uVar59 + 0x14) <= (ulong)auVar259._0_8_)) {
        uVar80._0_4_ = *(uint *)(uVar90 + 0x10);
        uVar99 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                           ((Lookup<OT::IntType<unsigned_short,2u>> *)
                            ((ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                                     ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18) + uVar90),
                            uVar127);
        uVar80 = extraout_RDX_03;
        if (((char)uVar99 != '\0') &&
           ((uVar90 - (long)*(__pthread_internal_list **)(uVar127 + 8)) + 0x18U <=
            (ulong)*(uint *)&((__pthread_list_t *)(uVar127 + 0x18))->__prev)) {
          uVar80._0_4_ = *(uint *)(uVar90 + 0x14);
          uVar99 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                             ((Lookup<OT::IntType<unsigned_short,2u>> *)
                              ((ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                                       ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18) + uVar90
                              ),uVar127);
          param_6._4_4_ = uStack_274;
          param_6._0_4_ = local_278;
          in_XMM7.__prev = (__pthread_internal_list *)0x0;
          in_XMM7.__next = (__pthread_internal_list *)0x0;
          uVar80 = extraout_RDX_04;
          if (((char)uVar99 != '\0') &&
             ((ulong)(uVar90 - (long)*(__pthread_internal_list **)(uVar127 + 8)) <=
              (ulong)*(uint *)&((__pthread_list_t *)(uVar127 + 0x18))->__prev)) {
            uVar57 = *(uint *)(uVar90 + 0x18);
            uVar57 = uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 | (uVar57 & 0xff00) << 8 |
                     uVar57 << 0x18;
            _Var144 = extraout_XMM0_11;
            if (uVar57 <= *(int *)&((__pthread_internal_list *)(uVar127 + 0x10))->__prev - uVar81)
            goto LAB_003f3ec0;
          }
        }
      }
      break;
    case 3:
    case 5:
      goto LAB_003f3ed0;
    case 4:
      if (((((pthread_mutex_t *)(uVar59 + 0x20) <= (ulong)auVar259._0_8_) &&
           ((pthread_mutex_t *)((uVar130 - uVar80) + 0x10) <= (ulong)auVar259._0_8_)) &&
          (uVar57 = *(uint *)uVar130,
          3 < (uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 | (uVar57 & 0xff00) << 8 | uVar57 << 0x18))
          ) && (phVar103 = (hb_buffer_t *)(uVar130 + 8),
               (ulong)((long)phVar103 - (long)*(__pthread_internal_list **)(uVar127 + 8)) <=
               (ulong)*(uint *)&((__pthread_list_t *)(uVar127 + 0x18))->__prev)) {
        uVar80._0_4_ = *(uint *)(uVar130 + 4);
        uVar99 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                           ((Lookup<OT::IntType<unsigned_short,2u>> *)
                            ((ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                                     ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18) + uVar130)
                            ,uVar127);
        param_6._4_4_ = uStack_274;
        param_6._0_4_ = local_278;
        in_XMM7.__prev = (__pthread_internal_list *)0x0;
        in_XMM7.__next = (__pthread_internal_list *)0x0;
        in_XMM9_Da = -1;
        in_XMM9_Db = -1;
        in_XMM9_Dc = -1;
        in_XMM9_Dd = -1;
        in_XMM10_Da = -0x7fffffff;
        in_XMM10_Db = -0x7fffffff;
        in_XMM10_Dc = -0x7fffffff;
        in_XMM10_Dd = -0x7fffffff;
        uVar80 = extraout_RDX_05;
        if ((char)uVar99 != '\0') {
          uVar57 = *(uint *)uVar130;
          in_R10._0_4_ = uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 | (uVar57 & 0xff00) << 8 |
                         uVar57 << 0x18;
          in_R10._4_4_ = 0;
          if (-1 < (int)(uint)in_R10) {
            uVar80._0_4_ = *(uint *)(uVar130 + 8);
            uVar99 = (ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                             ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18);
            uVar107 = uVar99 + uVar130;
            uVar80._0_4_ = *(uint *)(uVar130 + 0xc);
            uVar92 = (ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                             ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18);
            puVar131 = (uint *)(uVar130 + uVar92);
            uStack_228 = (uint)in_R10 * 2;
            auStack_23c._12_8_ = (long)phVar103 + uVar92;
            auStack_23c._4_8_ = (long)phVar103 + (uVar92 - 8);
            _uStack_240 = (long)(uVar130 + 6) + uVar92;
            lVar88 = 2 - auStack_23c._12_8_;
            uStack_270 = (ushort)lVar88;
            uStack_26e = (undefined2)((ulong)lVar88 >> 0x10);
            uStack_26c = (int)((ulong)lVar88 >> 0x20);
            _uStack_250 = (long)phVar103 + (uVar99 - 8);
            _uStack_248 = (long)phVar103 + uVar99;
            _uStack_260 = (long)(uVar99 + uVar90) + 0x14;
            _uStack_258 = (long)(uVar92 + uVar90) + 0x24;
            in_R11 = (int  [2])0x0;
            param_3 = (uint *)0x0;
            param_2 = (pthread_mutex_t *)0x0;
            _Var144 = extraout_XMM0_12;
            in_XMM8 = _DAT_005de020;
            in_XMM11 = _DAT_006524b0;
            uStack_268 = uVar107;
            do {
              uVar120 = param_2 & 0xffffffff;
              iVar43 = in_R11[0];
              uVar87 = (uint)param_3;
              uVar57 = (uint)param_2;
              param_2 = uVar120;
              if ((int)uVar87 < iVar43) {
              }
              else {
                uVar97 = uVar87 + 1;
                lVar88 = (ulong)uVar97 * (_uStack_228 & 0xffffffff);
                uVar80._0_4_ = (uint)((ulong)lVar88 >> 0x20);
                uVar80._4_4_ = 0;
                uVar81 = (uint)lVar88;
                if ((((uint)uVar80 != 0) ||
                    (uVar80._4_4_ = 0, uVar80._0_4_ = *(uint *)(uVar127 + 0x18),
                    (ulong)uVar80 < (pthread_mutex_t *)(uVar107 - *(long *)(uVar127 + 8)))) ||
                   ((uint)(*(int *)&((__pthread_internal_list *)(uVar127 + 0x10))->__prev -
                          (int)uVar107) < uVar81)) goto LAB_003f4e44;
                iVar98 = *(int *)param_6 - uVar81;
                *(int *)param_6 = iVar98;
                if (((iVar98 < 1) ||
                    (iVar98 = ~uVar87 + iVar43 + iVar98, *(int *)param_6 = iVar98, iVar98 < 1)) ||
                   (uVar80._0_4_ = (uint)((ulong)uVar97 * (in_R10 & 0xffffffff) >> 0x20),
                   uVar80._4_4_ = 0, (uint)uVar80 != 0)) goto LAB_003f4e44;
                uVar80._0_4_ = uVar97 * (int)in_R10;
                uVar81 = iVar43 * (int)in_R10;
                if (uVar81 < (uint)uVar80) {
                  uVar99 = (ulong)uVar81;
                  phVar103 = (hb_buffer_t *)(uVar107 + uVar99 * 2);
                  phVar110 = (hb_buffer_t *)(uVar99 * 2 + 2 + _uStack_250);
                  phVar85 = (hb_buffer_t *)(_uStack_250 + (ulong)(uint)uVar80 * 2);
                  if (phVar85 < phVar110) {
                    phVar85 = phVar110;
                  }
                  uVar90 = _uStack_280;
                  if (phVar85 + (7 - (long)(_uStack_248 + uVar99 * 2)) < (hb_buffer_t *)0xe) {
                  }
                  else {
                    phVar110 = (hb_buffer_t *)(uVar99 * 2 + _uStack_260);
                    uVar92 = ((ulong)(phVar85 + (7 - (long)(_uStack_248 + uVar99 * 2))) >> 1) + 1;
                    uVar78 = uVar92 & 0xfffffffffffffff8;
                    auVar147._4_4_ = uVar57;
                    auVar147._0_4_ = uVar57;
                    auVar147._8_4_ = uVar57;
                    auVar147._12_4_ = uVar57;
                    uVar99 = 0;
                    auVar259 = auVar147;
                    do {
                      uVar72 = *(ulong *)(phVar110 + uVar99 * 2 + -8);
                      auVar228._8_8_ = 0;
                      auVar228._0_8_ = uVar72;
                      uVar118 = *(ulong *)(phVar110 + uVar99 * 2);
                      auVar196._8_8_ = 0;
                      auVar196._0_8_ = uVar118;
                      auVar215._0_2_ = (ushort)uVar72 >> 8;
                      auVar215._2_2_ = (ushort)(uVar72 >> 0x10) >> 8;
                      auVar215._4_2_ = (ushort)(uVar72 >> 0x20) >> 8;
                      auVar215._6_2_ = (ushort)(uVar72 >> 0x38);
                      auVar215._8_6_ = 0;
                      auVar175 = psllw(auVar228,8);
                      auVar215 = auVar175._0_14_ | auVar215;
                      auVar180._0_2_ = (ushort)uVar118 >> 8;
                      auVar180._2_2_ = (ushort)(uVar118 >> 0x10) >> 8;
                      auVar180._4_2_ = (ushort)(uVar118 >> 0x20) >> 8;
                      auVar180._6_2_ = (ushort)(uVar118 >> 0x38);
                      auVar180._8_6_ = 0;
                      auVar175 = psllw(auVar196,8);
                      auVar180 = auVar175._0_14_ | auVar180;
                      auVar231._0_12_ = auVar215._0_12_;
                      auVar231._12_2_ = auVar215._6_2_;
                      auVar231._14_2_ = in_XMM7.__prev._6_2_;
                      auVar230._12_4_ = auVar231._12_4_;
                      auVar230._0_10_ = auVar215._0_10_;
                      auVar230._10_2_ = in_XMM7.__prev._4_2_;
                      auVar229._10_6_ = auVar230._10_6_;
                      auVar229._0_8_ = auVar215._0_8_;
                      auVar229._8_2_ = auVar215._4_2_;
                      auVar18._4_8_ = auVar229._8_8_;
                      auVar18._2_2_ = in_XMM7.__prev._2_2_;
                      auVar18._0_2_ = auVar215._2_2_;
                      iVar98 = CONCAT22((short)in_XMM7.__prev,auVar215._0_2_);
                      auVar199._0_12_ = auVar180._0_12_;
                      auVar199._12_2_ = auVar180._6_2_;
                      auVar199._14_2_ = in_XMM7.__prev._6_2_;
                      auVar198._12_4_ = auVar199._12_4_;
                      auVar198._0_10_ = auVar180._0_10_;
                      auVar198._10_2_ = in_XMM7.__prev._4_2_;
                      auVar197._10_6_ = auVar198._10_6_;
                      auVar197._0_8_ = auVar180._0_8_;
                      auVar197._8_2_ = auVar180._4_2_;
                      auVar19._4_8_ = auVar197._8_8_;
                      auVar19._2_2_ = in_XMM7.__prev._2_2_;
                      auVar19._0_2_ = auVar180._2_2_;
                      iVar43 = CONCAT22((short)in_XMM7.__prev,auVar180._0_2_);
                      in_XMM4.__prev._0_4_ = iVar98 - in_XMM9_Da;
                      in_XMM4.__prev._4_4_ = auVar18._0_4_ - in_XMM9_Db;
                      in_XMM4.__next._0_4_ = auVar229._8_4_ - in_XMM9_Dc;
                      in_XMM4.__next._4_4_ = auVar230._12_4_ - in_XMM9_Dd;
                      in_XMM5._0_4_ = iVar43 - in_XMM9_Da;
                      in_XMM5._4_4_ = auVar19._0_4_ - in_XMM9_Db;
                      in_XMM5._8_4_ = auVar197._8_4_ - in_XMM9_Dc;
                      in_XMM5._12_4_ = auVar198._12_4_ - in_XMM9_Dd;
                      auVar175 = auVar147 ^ (undefined1  [16])in_XMM11;
                      auVar146._0_4_ = -(uint)(iVar98 + in_XMM10_Da < auVar175._0_4_);
                      auVar146._4_4_ = -(uint)(auVar18._0_4_ + in_XMM10_Db < auVar175._4_4_);
                      auVar146._8_4_ = -(uint)(auVar229._8_4_ + in_XMM10_Dc < auVar175._8_4_);
                      auVar146._12_4_ = -(uint)(auVar230._12_4_ + in_XMM10_Dd < auVar175._12_4_);
                      in_XMM6 = (__pthread_internal_list)(auVar147 & auVar146);
                      auVar147 = ~auVar146 & (undefined1  [16])in_XMM4 | (undefined1  [16])in_XMM6;
                      auVar175 = auVar259 ^ (undefined1  [16])in_XMM11;
                      auVar166._0_4_ = -(uint)(iVar43 + in_XMM10_Da < auVar175._0_4_);
                      auVar166._4_4_ = -(uint)(auVar19._0_4_ + in_XMM10_Db < auVar175._4_4_);
                      auVar166._8_4_ = -(uint)(auVar197._8_4_ + in_XMM10_Dc < auVar175._8_4_);
                      auVar166._12_4_ = -(uint)(auVar198._12_4_ + in_XMM10_Dd < auVar175._12_4_);
                      auVar259 = ~auVar166 & in_XMM5 | auVar259 & auVar166;
                      uVar99 = uVar99 + 8;
                    } while (uVar78 != uVar99);
                    auVar175 = auVar259 ^ (undefined1  [16])in_XMM11;
                    auVar212 = auVar147 ^ (undefined1  [16])in_XMM11;
                    auVar232._0_4_ = -(uint)(auVar175._0_4_ < auVar212._0_4_);
                    auVar232._4_4_ = -(uint)(auVar175._4_4_ < auVar212._4_4_);
                    auVar232._8_4_ = -(uint)(auVar175._8_4_ < auVar212._8_4_);
                    auVar232._12_4_ = -(uint)(auVar175._12_4_ < auVar212._12_4_);
                    auVar212 = ~auVar232 & auVar259 | auVar147 & auVar232;
                    auVar148._0_8_ = auVar212._8_8_;
                    auVar148._8_4_ = auVar212._8_4_;
                    auVar148._12_4_ = auVar212._12_4_;
                    auVar259 = auVar212 ^ (undefined1  [16])in_XMM11;
                    auVar175 = auVar148 ^ (undefined1  [16])in_XMM11;
                    auVar167._0_4_ = -(uint)(auVar175._0_4_ < auVar259._0_4_);
                    auVar167._4_4_ = -(uint)(auVar175._4_4_ < auVar259._4_4_);
                    auVar167._8_4_ = -(uint)(auVar175._8_4_ < auVar259._8_4_);
                    auVar167._12_4_ = -(uint)(auVar175._12_4_ < auVar259._12_4_);
                    auVar259 = ~auVar167 & auVar148 | auVar212 & auVar167;
                    uVar125 = auVar259._4_4_;
                    _Var144.__prev._4_4_ = uVar125;
                    _Var144.__prev._0_4_ = uVar125;
                    _Var144.__next._0_4_ = uVar125;
                    _Var144.__next._4_4_ = uVar125;
                    auVar175 = auVar259 ^ (undefined1  [16])in_XMM11;
                    in_XMM3 = (undefined1  [16])_Var144 ^ (undefined1  [16])in_XMM11;
                    auVar200._0_4_ = -(uint)(in_XMM3._0_4_ < auVar175._0_4_);
                    auVar200._4_4_ = -(uint)(in_XMM3._4_4_ < auVar175._4_4_);
                    auVar200._8_4_ = -(uint)(in_XMM3._8_4_ < auVar175._8_4_);
                    auVar200._12_4_ = -(uint)(in_XMM3._12_4_ < auVar175._12_4_);
                    in_XMM1 = (__pthread_internal_list)(auVar259 & auVar200);
                    in_XMM2 = (__pthread_internal_list)
                              (~auVar200 & (undefined1  [16])_Var144 | (undefined1  [16])in_XMM1);
                    param_2._0_4_ = (uint)in_XMM2.__prev;
                    param_2._4_4_ = 0;
                    uVar107 = uStack_268;
                    if (uVar92 == uVar78) {
                      in_R11[1]._0_1_ = '\0';
                      in_R11[1]._1_1_ = '\0';
                      in_R11[1]._2_1_ = '\0';
                      in_R11[1]._3_1_ = '\0';
                      in_R11[0] = uVar97;
                      goto LAB_003f4a85;
                    }
                    phVar103 = phVar103 + uVar78 * 2;
                  }
                  do {
                    uVar135._0_4_ =
                         (ushort)(*(ushort *)phVar103 << 8 | *(ushort *)phVar103 >> 8) + 1;
                    uVar135._4_4_ = 0;
                    if ((uint)uVar135 <= (uint)param_2) {
                      uVar135 = param_2;
                    }
                    phVar103 = phVar103 + 2;
                    param_2 = uVar135;
                  } while (phVar103 < (hb_buffer_t *)(uVar107 + (ulong)(uint)uVar80 * 2));
                }
                in_R11[1]._0_1_ = '\0';
                in_R11[1]._1_1_ = '\0';
                in_R11[1]._2_1_ = '\0';
                in_R11[1]._3_1_ = '\0';
                in_R11[0] = uVar97;
              }
LAB_003f4a85:
              uVar80._0_4_ = (uint)((ulong)(param_2 * 6) >> 0x20);
              uVar80._4_4_ = 0;
              uVar81 = (uint)(param_2 * 6);
              if ((((uint)uVar80 != 0) ||
                  (uVar80._4_4_ = 0, uVar80._0_4_ = *(uint *)(uVar127 + 0x18),
                  (ulong)uVar80 < (pthread_mutex_t *)((long)puVar131 - *(long *)(uVar127 + 8)))) ||
                 ((uint)(*(int *)&((__pthread_internal_list *)(uVar127 + 0x10))->__prev -
                        (int)puVar131) < uVar81)) goto LAB_003f4e44;
              uVar80._0_4_ = *(int *)param_6 - uVar81;
              uVar80._4_4_ = 0;
              *(uint *)param_6 = (uint)uVar80;
              if ((int)(uint)uVar80 < 1) goto LAB_003f4e44;
              uVar80._0_4_ = (uint)uVar80 + (uVar57 - (uint)param_2);
              uVar80._4_4_ = 0;
              *(uint *)param_6 = (uint)uVar80;
              if ((int)(uint)uVar80 < 1) goto LAB_003f4e44;
              if (uVar57 < (uint)param_2) {
                param_6 = param_2 * 3;
                lVar88 = uVar120 * 6;
                phVar103 = (hb_buffer_t *)(auStack_23c._4_8_ + param_2 * 6);
                if (phVar103 < (hb_buffer_t *)(_uStack_240 + lVar88)) {
                  phVar103 = (hb_buffer_t *)(_uStack_240 + lVar88);
                }
                uVar92 = (ulong)(phVar103 + 2 != (hb_buffer_t *)(auStack_23c._12_8_ + lVar88));
                auVar259._0_8_ = lVar88 + (long)puVar131;
                uVar99 = uVar92 + (ulong)(phVar103 +
                                         uVar120 * -6 +
                                         (CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)) -
                                         uVar92)) / 6 + 1;
                if (8 < uVar99) {
                  uVar78 = (ulong)((uint)uVar99 & 7);
                  if (uVar78 == 0) {
                    uVar78 = 8;
                  }
                  unaff_RBX = uVar99 - uVar78;
                  _Var149.__prev._4_4_ = uVar87;
                  _Var149.__prev._0_4_ = uVar87;
                  _Var149.__next._0_4_ = uVar87;
                  _Var149.__next._4_4_ = uVar87;
                  uVar90 = (uVar78 - (uVar92 + 1)) -
                           (ulong)(phVar103 +
                                  uVar120 * -6 +
                                  (CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)) - uVar92)) /
                           6;
                  uVar107 = lVar88 + _uStack_258;
                  in_XMM1 = _Var149;
                  do {
                    auVar201._8_8_ = 0;
                    auVar201._0_8_ = *(ulong *)(uVar107 + -8);
                    auVar233._8_8_ = 0;
                    auVar233._0_8_ = ((__pthread_internal_list *)(uVar107 + 0x10))->__prev;
                    in_XMM6 = (__pthread_internal_list)(~in_XMM8 & auVar201);
                    auVar175 = *(undefined1 (*) [16])(uVar107 + -0x18) & in_XMM8 |
                               (undefined1  [16])in_XMM6;
                    auVar202._4_4_ = auVar175._8_4_;
                    auVar202._0_4_ = auVar175._0_4_;
                    auVar202._8_4_ = auVar175._4_4_;
                    auVar202._12_4_ = auVar175._12_4_;
                    auVar175 = pshufhw(auVar202,auVar202,0xe6);
                    auVar203._0_4_ = auVar175._0_4_;
                    auVar203._8_4_ = auVar175._8_4_;
                    auVar203._12_4_ = auVar175._12_4_;
                    auVar203._4_4_ = auVar203._8_4_;
                    auVar175 = pshuflw(auVar203,auVar203,0x6c);
                    in_XMM5 = (undefined1  [16])*(__pthread_internal_list *)uVar107 & in_XMM8 |
                              ~in_XMM8 & auVar233;
                    auVar234._4_4_ = in_XMM5._8_4_;
                    auVar234._0_4_ = in_XMM5._0_4_;
                    auVar234._8_4_ = in_XMM5._4_4_;
                    auVar234._12_4_ = in_XMM5._12_4_;
                    auVar212 = pshufhw(auVar234,auVar234,0xe6);
                    auVar235._0_4_ = auVar212._0_4_;
                    auVar235._8_4_ = auVar212._8_4_;
                    auVar235._12_4_ = auVar212._12_4_;
                    auVar235._4_4_ = auVar235._8_4_;
                    auVar212 = pshuflw(auVar235,auVar235,0x6c);
                    auVar181._0_2_ = auVar175._0_2_ >> 8;
                    auVar181._2_2_ = auVar175._2_2_ >> 8;
                    auVar181._4_2_ = auVar175._4_2_ >> 8;
                    auVar181._6_2_ = auVar175._6_2_ >> 8;
                    auVar181._8_2_ = auVar175._8_2_ >> 8;
                    auVar181._10_2_ = auVar175._10_2_ >> 8;
                    auVar181._12_2_ = auVar175._12_2_ >> 8;
                    auVar175 = psllw(auVar175,8);
                    auVar181 = auVar175._0_14_ | auVar181;
                    auVar216._0_2_ = auVar212._0_2_ >> 8;
                    auVar216._2_2_ = auVar212._2_2_ >> 8;
                    auVar216._4_2_ = auVar212._4_2_ >> 8;
                    auVar216._6_2_ = auVar212._6_2_ >> 8;
                    auVar216._8_2_ = auVar212._8_2_ >> 8;
                    auVar216._10_2_ = auVar212._10_2_ >> 8;
                    auVar216._12_2_ = auVar212._12_2_ >> 8;
                    auVar175 = psllw(auVar212,8);
                    auVar216 = auVar175._0_14_ | auVar216;
                    auVar206._0_12_ = auVar181._0_12_;
                    auVar206._12_2_ = auVar181._6_2_;
                    auVar206._14_2_ = in_XMM7.__prev._6_2_;
                    auVar205._12_4_ = auVar206._12_4_;
                    auVar205._0_10_ = auVar181._0_10_;
                    auVar205._10_2_ = in_XMM7.__prev._4_2_;
                    auVar204._10_6_ = auVar205._10_6_;
                    auVar204._0_8_ = auVar181._0_8_;
                    auVar204._8_2_ = auVar181._4_2_;
                    auVar20._4_8_ = auVar204._8_8_;
                    auVar20._2_2_ = in_XMM7.__prev._2_2_;
                    auVar20._0_2_ = auVar181._2_2_;
                    in_XMM2.__prev._0_4_ = CONCAT22((short)in_XMM7.__prev,auVar181._0_2_);
                    in_XMM2._4_12_ = auVar20;
                    auVar238._0_12_ = auVar216._0_12_;
                    auVar238._12_2_ = auVar216._6_2_;
                    auVar238._14_2_ = in_XMM7.__prev._6_2_;
                    auVar237._12_4_ = auVar238._12_4_;
                    auVar237._0_10_ = auVar216._0_10_;
                    auVar237._10_2_ = in_XMM7.__prev._4_2_;
                    auVar236._10_6_ = auVar237._10_6_;
                    auVar236._0_8_ = auVar216._0_8_;
                    auVar236._8_2_ = auVar216._4_2_;
                    in_XMM3._8_8_ = auVar236._8_8_;
                    in_XMM3._6_2_ = in_XMM7.__prev._2_2_;
                    in_XMM3._4_2_ = auVar216._2_2_;
                    in_XMM3._0_2_ = auVar216._0_2_;
                    in_XMM3._2_2_ = (short)in_XMM7.__prev;
                    _Var144.__prev._0_4_ = -(uint)((int)in_XMM2.__prev < (int)_Var149.__prev);
                    _Var144.__prev._4_4_ = -(uint)(auVar20._0_4_ < _Var149.__prev._4_4_);
                    _Var144.__next._0_4_ = -(uint)(auVar204._8_4_ < (int)_Var149.__next);
                    _Var144.__next._4_4_ = -(uint)(auVar205._12_4_ < _Var149.__next._4_4_);
code_r0x003f4c23:
                    in_XMM4 = (__pthread_internal_list)
                              ((undefined1  [16])_Var149 & (undefined1  [16])_Var144);
                    _Var149 = (__pthread_internal_list)
                              (~(undefined1  [16])_Var144 & (undefined1  [16])in_XMM2 |
                              (undefined1  [16])in_XMM4);
                    auVar168._0_4_ = -(uint)(in_XMM3._0_4_ < (int)in_XMM1.__prev);
                    auVar168._4_4_ = -(uint)(in_XMM3._4_4_ < in_XMM1.__prev._4_4_);
                    auVar168._8_4_ = -(uint)(in_XMM3._8_4_ < (int)in_XMM1.__next);
                    auVar168._12_4_ = -(uint)(in_XMM3._12_4_ < in_XMM1.__next._4_4_);
                    in_XMM1 = (__pthread_internal_list)
                              (~auVar168 & in_XMM3 | (undefined1  [16])in_XMM1 & auVar168);
                    uVar107 = uVar107 + 0x30;
                    uVar90 = uVar90 + 8;
                  } while ((pthread_mutex_t *)uVar90 != (pthread_mutex_t *)0x0);
                  auVar259._0_8_ = auVar259._0_8_ + unaff_RBX * 6;
                  auVar207._0_4_ = -(uint)((int)in_XMM1.__prev < (int)_Var149.__prev);
                  auVar207._4_4_ = -(uint)(in_XMM1.__prev._4_4_ < _Var149.__prev._4_4_);
                  auVar207._8_4_ = -(uint)((int)in_XMM1.__next < (int)_Var149.__next);
                  auVar207._12_4_ = -(uint)(in_XMM1.__next._4_4_ < _Var149.__next._4_4_);
                  auVar175 = ~auVar207 & (undefined1  [16])in_XMM1 |
                             (undefined1  [16])_Var149 & auVar207;
                  auVar150._0_8_ = auVar175._8_8_;
                  auVar150._8_4_ = auVar175._8_4_;
                  auVar150._12_4_ = auVar175._12_4_;
                  auVar169._0_4_ = -(uint)(auVar175._8_4_ < auVar175._0_4_);
                  auVar169._4_4_ = -(uint)(auVar175._12_4_ < auVar175._4_4_);
                  auVar169._8_8_ = 0;
                  auVar175 = ~auVar169 & auVar150 | auVar175 & auVar169;
                  iVar43 = auVar175._4_4_;
                  _Var144.__prev._4_4_ = iVar43;
                  _Var144.__prev._0_4_ = iVar43;
                  _Var144.__next._0_4_ = iVar43;
                  _Var144.__next._4_4_ = iVar43;
                  auVar208._0_4_ = -(uint)(iVar43 < auVar175._0_4_);
                  auVar208._4_4_ = 0;
                  auVar208._8_4_ = -(uint)(iVar43 < auVar175._8_4_);
                  auVar208._12_4_ = -(uint)(iVar43 < auVar175._12_4_);
                  in_XMM1 = (__pthread_internal_list)(auVar175 & auVar208);
                  in_XMM2 = (__pthread_internal_list)
                            (~auVar208 & (undefined1  [16])_Var144 | (undefined1  [16])in_XMM1);
                  param_3._0_4_ = (uint)in_XMM2.__prev;
                  param_3._4_4_ = 0;
                  uVar90 = _uStack_280;
                }
                uVar80 = param_6 * 2 + (long)puVar131;
                param_6._4_4_ = uStack_274;
                param_6._0_4_ = local_278;
                do {
                  uVar56 = *(ushort *)auVar259._0_8_ << 8 | *(ushort *)auVar259._0_8_ >> 8;
                  if ((int)param_3 < (int)(uint)uVar56) {
                    param_3._2_1_ = '\0';
                    param_3._3_1_ = '\0';
                    param_3._4_1_ = '\0';
                    param_3._5_1_ = '\0';
                    param_3._6_1_ = '\0';
                    param_3._7_1_ = '\0';
                    param_3._0_2_ = uVar56;
                  }
                  auVar259._0_8_ = auVar259._0_8_ + 6;
                  uVar107 = uStack_268;
                } while ((ulong)auVar259._0_8_ < (ulong)uVar80);
              }
              uVar102._4_4_ = uStack_274;
              uVar102._0_4_ = local_278;
            } while (in_R11[0] <= (int)param_3);
            goto LAB_003f3ed0;
          }
        }
      }
      break;
    case 6:
      if ((pthread_mutex_t *)(uVar59 + 0x24) <= (ulong)auVar259._0_8_) {
        if (((byte)*(hb_buffer_t *)(uVar90 + 0xf) & 1) == 0) {
          if ((uVar90 - (long)*(__pthread_internal_list **)(uVar127 + 8)) + 0x18U <=
              (ulong)*(uint *)&((__pthread_list_t *)(uVar127 + 0x18))->__prev) {
            uVar80._0_4_ = *(uint *)(uVar90 + 0x14);
            uVar99 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                               ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                ((ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                                         ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18) +
                                uVar90),uVar127);
            uVar80 = extraout_RDX_06;
            if (((char)uVar99 != '\0') &&
               ((uVar90 - (long)*(__pthread_internal_list **)(uVar127 + 8)) + 0x1cU <=
                (ulong)*(uint *)&((__pthread_list_t *)(uVar127 + 0x18))->__prev)) {
              uVar80._0_4_ = *(uint *)(uVar90 + 0x18);
              uVar99 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                                 ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                  ((ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                                           ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18) +
                                  uVar90),uVar127);
              cVar42 = (char)uVar99;
              uVar80 = extraout_RDX_07;
              _Var144 = extraout_XMM0_13;
              goto LAB_003f4dac;
            }
          }
        }
        else if ((uVar90 - (long)*(__pthread_internal_list **)(uVar127 + 8)) + 0x18U <=
                 (ulong)*(uint *)&((__pthread_list_t *)(uVar127 + 0x18))->__prev) {
          uVar80._0_4_ = *(uint *)(uVar90 + 0x14);
          uVar99 = Lookup<OT::IntType<unsigned_int,4u>>::sanitize
                             ((Lookup<OT::IntType<unsigned_int,4u>> *)
                              ((ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                                       ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18) + uVar90
                              ),uVar127);
          uVar80 = extraout_RDX_08;
          if (((char)uVar99 != '\0') &&
             ((uVar90 - (long)*(__pthread_internal_list **)(uVar127 + 8)) + 0x1cU <=
              (ulong)*(uint *)&((__pthread_list_t *)(uVar127 + 0x18))->__prev)) {
            uVar80._0_4_ = *(uint *)(uVar90 + 0x18);
            uVar99 = Lookup<OT::IntType<unsigned_int,4u>>::sanitize
                               ((Lookup<OT::IntType<unsigned_int,4u>> *)
                                ((ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                                         ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18) +
                                uVar90),uVar127);
            cVar42 = (char)uVar99;
            uVar80 = extraout_RDX_09;
            _Var144 = extraout_XMM0_14;
LAB_003f4dac:
            uVar102._4_4_ = uStack_274;
            uVar102._0_4_ = local_278;
            param_6._4_4_ = uStack_274;
            param_6._0_4_ = local_278;
            in_XMM7.__prev = (__pthread_internal_list *)0x0;
            in_XMM7.__next = (__pthread_internal_list *)0x0;
            if (cVar42 != '\0') {
              p_Var58 = *(__pthread_internal_list **)(uVar127 + 8);
              uVar80 = uVar90 - (long)p_Var58;
              ppVar129 = (pthread_mutex_t *)
                         (ulong)*(uint *)&((__pthread_list_t *)(uVar127 + 0x18))->__prev;
              if ((ulong)uVar80 <= ppVar129) {
                uVar80._0_4_ = *(uint *)(uVar90 + 0x1c);
                uVar57 = (uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                         ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18;
                uVar80 = ((__pthread_internal_list *)(uVar127 + 0x10))->__prev;
                if (uVar57 <= (int)uVar80 - uVar81) {
                  iVar43 = *(int *)param_6 - uVar57;
                  *(int *)param_6 = iVar43;
                  if (0 < iVar43) {
                    if (*(int *)(uVar90 + 8) == 0) goto LAB_003f3ed0;
                    if ((pthread_mutex_t *)(uVar90 - (long)p_Var58) <= ppVar129) {
                      uVar57 = *(uint *)(uVar90 + 0x20);
                      uVar57 = uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 | (uVar57 & 0xff00) << 8 |
                               uVar57 << 0x18;
                      uVar80._0_4_ = (int)uVar80 - uVar81;
                      uVar80._4_4_ = 0;
                      if (uVar57 <= (uint)uVar80) {
                        iVar43 = iVar43 - uVar57;
                        *(int *)param_6 = iVar43;
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
      switch(uVar87) {
      case 0:
        lVar88 = (ulong)*(uint *)((long)&UINT_005e02e8 + uVar99) * 4;
        uVar80._0_4_ = (uint)((ulong)lVar88 >> 0x20);
        uVar80._4_4_ = 0;
        uVar87 = (uint)lVar88;
        if ((uint)uVar80 == 0) {
          uVar107 = &UNK_005e02b2;
          uVar80._4_4_ = 0;
          uVar80._0_4_ = *(uint *)(&UNK_005e02c8 + uVar99);
          bVar137 = (pthread_mutex_t *)(&UNK_005e02b2 + -*(long *)(&UNK_005e02b8 + uVar99)) <
                    (ulong)uVar80;
          bVar138 = (pthread_mutex_t *)(&UNK_005e02b2 + -*(long *)(&UNK_005e02b8 + uVar99)) ==
                    (pthread_mutex_t *)uVar80;
          goto code_r0x003f5005;
        }
        goto LAB_003f4fbb;
      default:
        goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1;
      case 2:
        auVar259._0_8_ = (long)&UNK_005e02bc - *(long *)(&UNK_005e02b8 + uVar99);
        uVar59._4_4_ = 0;
        uVar59._0_4_ = *(uint *)(&UNK_005e02c8 + uVar99);
        goto code_r0x003f502d;
      case 4:
        goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_4;
      case 6:
        if ((ulong)((long)&UNK_005e02bc - *(long *)(&UNK_005e02b8 + uVar99)) <=
            (ulong)*(uint *)(&UNK_005e02c8 + uVar99)) goto LAB_003f5250;
        goto LAB_003f4fbb;
      case 8:
        uVar80._4_4_ = 0;
        uVar80._0_4_ = *(uint *)(&UNK_005e02c8 + uVar99);
        if (((pthread_mutex_t *)(&UNK_005e02b6 + -*(long *)(&UNK_005e02b8 + uVar99)) <=
             (ulong)uVar80) &&
           (uVar90 = &UNK_005e02b6,
           (pthread_mutex_t *)(&UNK_005e02b6 + -*(long *)(&UNK_005e02b8 + uVar99)) <= (ulong)uVar80)
           ) goto code_r0x003f52cc;
        goto LAB_003f4fbb;
      case 10:
        goto LAB_003f4fbb;
      }
    case 8:
    case 10:
    case 0xc:
    case 0xe:
    case 0x10:
      auVar280[8] = (char)uVar80;
      auVar280[9] = (char)((ulong)uVar80 >> 8);
      auVar280[10] = (char)((ulong)uVar80 >> 0x10);
      auVar280[0xb] = (char)((ulong)uVar80 >> 0x18);
      auVar280[0xc] = (char)((ulong)uVar80 >> 0x20);
      auVar280[0xd] = (char)((ulong)uVar80 >> 0x28);
      auVar280[0xe] = (char)((ulong)uVar80 >> 0x30);
      auVar280[0xf] = (char)((ulong)uVar80 >> 0x38);
      auVar280[0] = (char)uVar87;
      auVar280[1] = (char)(uVar87 >> 8);
      auVar280[2] = (char)(uVar87 >> 0x10);
      auVar280[3] = (char)(uVar87 >> 0x18);
      auVar280[4] = (char)0;
      auVar280[5] = (char)(0 >> 8);
      auVar280[6] = (char)(0 >> 0x10);
      auVar280[7] = (char)(0 >> 0x18);
      return auVar280;
    case 9:
      bVar137 = (uint)uVar59 < (uint)uVar80;
      bVar138 = (uint)uVar59 == (uint)uVar80;
code_r0x003f5005:
      if ((!bVar137 && !bVar138) ||
         ((uint)(*(int *)(&UNK_005e02c0 + uVar99) - (int)uVar107) < uVar87)) goto LAB_003f4fbb;
      iVar43 = *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                               switchdataD_005e02cc + uVar99) - uVar87;
      *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                      switchdataD_005e02cc + uVar99) = iVar43;
LAB_003f528f:
      in_R11[0]._0_1_ = 0 < iVar43;
      goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1;
    case 0xb:
code_r0x003f502d:
      if ((ulong)auVar259._0_8_ <= (ulong)uVar59) {
LAB_003f5250:
        uVar80 = (long)&UNK_005e02bc - *(long *)(&UNK_005e02b8 + uVar99);
        if ((ulong)uVar80 <= (pthread_mutex_t *)(ulong)*(uint *)(&UNK_005e02c8 + uVar99)) {
          iVar43 = -0x6388d73d;
          uVar80._0_4_ = *(int *)(&UNK_005e02c0 + uVar99) - 0x5e02bc;
          uVar80._4_4_ = 0;
          if (0x9c7728c2 < (uint)uVar80) goto LAB_003f5285;
        }
      }
      goto LAB_003f4fbb;
    case 0xd:
      uVar57 = CONCAT31((int3)(uVar87 >> 8),((char)uVar87 + '{') - bVar137);
      goto code_r0x003f5205;
    case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x11:
code_r0x003f52cc:
      iVar43 = 0x2c4f4;
      if (0x2c4f3 < (uint)(*(int *)(&UNK_005e02c0 + uVar99) - (int)uVar90)) {
LAB_003f5285:
        iVar43 = *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                                 switchdataD_005e02cc + uVar99) - iVar43;
        *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                        switchdataD_005e02cc + uVar99) = iVar43;
        goto LAB_003f528f;
      }
      goto LAB_003f4fbb;
    case 0x12:
      *(char *)uVar59 = (char)*(hb_buffer_t *)uVar59 + SUB81(unaff_RBX,1);
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
      uVar93 = (pthread_mutex_t *)0xfe38;
      if (uVar87 == 0xfe38) goto _hb_ot_shape_switchD_003f8054_caseD_2015;
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
      uVar93 = (pthread_mutex_t *)0xfe47;
      if (uVar87 == 0xfe47) goto _hb_ot_shape_switchD_003f8054_caseD_2015;
      goto LAB_003f807d;
    case 0x50:
      uVar93 = (pthread_mutex_t *)0xfe16;
      if (uVar87 == 0xfe16) goto _hb_ot_shape_switchD_003f8054_caseD_2015;
      goto LAB_003f807d;
    case 0x6c:
      pcVar109 = (char *)(auVar259._0_8_ & 0xffffffffffffffd0);
      cVar42 = (char)pcVar109;
      *pcVar109 = *pcVar109 + cVar42;
      *pcVar109 = *pcVar109 + cVar42;
      *pcVar109 = *pcVar109 + cVar42;
      pcVar109[-0x75] = pcVar109[-0x75] + (char)uVar59;
      goto LAB_003f807d;
    case 0x6e:
      *(char *)auVar259._0_8_ = (char)*(hb_buffer_t *)auVar259._0_8_ + (char)uVar87;
      if (uVar81 == uVar87) goto _hb_ot_shape_switchD_003f8054_caseD_2015;
      goto LAB_003f807d;
    case 0x6f:
      goto code_r0x003f7e92;
    case 0x70:
      *(hb_buffer_t *)(auVar259._0_8_ + -0x75) =
           (hb_buffer_t)((char)*(hb_buffer_t *)(auVar259._0_8_ + -0x75) + (char)uVar59 + bVar137);
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
      uStack_1b8._4_4_ = 0;
      uStack_1b0 = 0;
      uStack_1ac = 0;
      cStack_1a8 = '\0';
      cStack_1a7 = '\0';
      cStack_1a6 = '\0';
      cStack_1a5 = '\0';
      uStack_1b8._0_4_ = 0x25cc;
      _hb_glyph_info_set_unicode_props((uint *)&uStack_1b8,uVar127);
      in_XMM1.__next = extraout_XMM1_Qb_48;
      in_XMM1.__prev = extraout_XMM1_Qa_40;
      *(undefined2 *)(uVar127 + 0x5a) = 1;
      *(undefined4 *)(uVar127 + 100) = 0;
      p_Var58 = ((__pthread_internal_list *)(uVar127 + 0x70))->__prev;
      ((pthread_mutex_t *)(uVar127 + 0x78))->__align = (long)p_Var58;
      *(undefined4 *)(uVar127 + 0x5c) = 0;
      param_2._4_4_ = 0;
      param_2._0_4_ = (uint)uStack_1b8;
      param_3._4_1_ = cStack_1a8;
      param_3._0_4_ = uStack_1ac;
      param_3._5_1_ = cStack_1a7;
      param_3._6_1_ = cStack_1a6;
      param_3._7_1_ = cStack_1a5;
      uVar95._4_4_ = 0;
      uVar95._0_4_ = *(uint *)((long)&p_Var58->__prev + 4);
      unaff_RBX._4_4_ = 0;
      unaff_RBX._0_4_ = *(uint *)&p_Var58->__next;
      if (1 < *(uint *)(uVar127 + 0x68)) {
        uVar100 = ((__pthread_internal_list *)(uVar127 + 0x80))->__prev;
        *(undefined8 *)&((pthread_mutex_t *)(uVar127 + 0x78))->__data = uVar100;
        uStack_1b8 = (int *)CONCAT44(uStack_1b8._4_4_,(uint)uStack_1b8);
        goto LAB_003fd1d6;
      }
      uVar107 = hb_buffer_t::enlarge((hb_buffer_t *)uVar127,1);
      if ((char)uVar107 != '\0') {
        uVar100 = *(undefined8 *)&((pthread_mutex_t *)(uVar127 + 0x78))->__data;
        if (((pthread_mutex_t *)uVar100 ==
             (pthread_mutex_t *)((__pthread_internal_list *)(uVar127 + 0x70))->__prev) &&
           (uVar127._0_4_ = *(uint *)(CONCAT44(uStack_274,local_278) + 100),
           *(uint *)(CONCAT44(uStack_274,local_278) + 0x5c) < (uint)uVar127 + 1)) {
          uVar107 = *(undefined8 *)(CONCAT44(uStack_274,local_278) + 0x80);
          *(undefined8 *)(CONCAT44(uStack_274,local_278) + 0x78) = uVar107;
          if ((ulong)(uint)uVar127 == 0) {
            uVar127._4_4_ = uStack_274;
            uVar127._0_4_ = local_278;
            uVar100 = uVar107;
            uStack_1b8 = (int *)CONCAT44(uStack_1b8._4_4_,(uint)uStack_1b8);
          }
          else {
            memcpy((void *)uVar107,(void *)uVar100,(ulong)(uint)uVar127 * 0x14);
            uVar127._4_4_ = uStack_274;
            uVar127._0_4_ = local_278;
            uVar100 = *(undefined8 *)&((pthread_mutex_t *)(uVar127 + 0x78))->__data;
            uStack_1b8 = (int *)CONCAT44(uStack_1b8._4_4_,(uint)uStack_1b8);
          }
        }
        else {
          uVar127._4_4_ = uStack_274;
          uVar127._0_4_ = local_278;
        }
        goto LAB_003fd1d6;
      }
      goto LAB_003fd1f6;
    default:
      if ((uVar87 & 0xd0ff0000) != 0) goto code_r0x003fd15b;
      goto LAB_003f7904;
    case 0x86:
      if ((long)uVar100 < 0) goto LAB_003fd203;
LAB_003fd1d6:
      uVar99 = (ulong)*(uint *)(uVar127 + 100);
      *(int *)(uVar100 + uVar99 * 0x14) = (int)param_2;
      *(int *)((hb_buffer_t *)(uVar100 + 4) + uVar99 * 0x14) = (int)uVar95;
      *(int *)((hb_buffer_t *)(uVar100 + 8) + uVar99 * 0x14) = (int)unaff_RBX;
      *(uint **)((hb_buffer_t *)(uVar100 + 0xc) + uVar99 * 0x14) = param_3;
      *(int *)(uVar127 + 100) = *(int *)(uVar127 + 100) + 1;
LAB_003fd1f6:
      hb_buffer_t::sync((hb_buffer_t *)uVar127);
LAB_003f7904:
      if (((ulong)((__pthread_internal_list *)(uVar127 + 0xc0))->__prev & 1) == 0)
      goto LAB_003f790f;
      uVar80._0_4_ = *(uint *)&((__pthread_internal_list *)(uVar127 + 0x60))->__prev;
      auVar259._4_4_ = 0;
      auVar259._0_4_ = (uint)uVar80;
      if (*(int *)(uVar127 + 0x1c) == 0) {
        if ((uint)uVar80 == 0) goto LAB_003f790f;
        lVar88 = 0x24;
        unaff_RBX = (pthread_mutex_t *)0x0;
        goto LAB_003fa240;
      }
      if ((uint)uVar80 == 0) goto LAB_003f790f;
      lVar88 = 0x24;
      uVar101 = (pthread_mutex_t *)0x0;
      goto LAB_003f79a0;
    }
LAB_003f4e44:
    p_Var58 = ((__pthread_internal_list *)(uVar127 + 0x30))->__prev;
    p_Var89 = p_Var58[1].__prev;
    *(__pthread_internal_list **)(uVar127 + 8) = p_Var89;
    uVar57 = *(uint *)&p_Var58[1].__next;
    ((__pthread_internal_list *)(uVar127 + 0x10))->__prev =
         (__pthread_internal_list *)((long)&p_Var89->__prev + (ulong)uVar57);
    *(uint *)(uVar127 + 0x18) = uVar57;
  }
  else {
LAB_003f3ed0:
    uVar100 = uVar127;
    uVar127._0_4_ = *(uint *)uVar90;
    uVar101 = (ulong)((uint)uVar127 >> 0x18 | ((uint)uVar127 & 0xff0000) >> 8 |
                      ((uint)uVar127 & 0xff00) << 8 | (uint)uVar127 << 0x18) + uVar90;
    p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x30))->__prev;
    uVar82 = p_Var58[1].__prev;
    *(undefined8 *)(uVar100 + 8) = uVar82;
    uVar57 = *(uint *)&p_Var58[1].__next;
    uVar59._4_4_ = 0;
    uVar59._0_4_ = uVar57;
    ((__pthread_internal_list *)(uVar100 + 0x10))->__prev =
         (__pthread_internal_list *)(uVar59 + uVar82);
    *(uint *)(uVar100 + 0x18) = uVar57;
    uVar107._0_4_ = p_Stack_200._8_4_ + 1;
    uVar107._4_4_ = 0;
    uVar90 = uVar101;
    uVar127 = uVar100;
    if ((uint)uVar107 == uStack_218) {
      uVar56 = *(ushort *)local_208 << 8 | *(ushort *)local_208 >> 8;
      in_R11 = (int  [2])p_Stack_200;
      iVar43 = uStack_220._4_4_;
LAB_003f4e86:
      uVar120._0_1_ = '\x01';
      if (uVar56 < 3) goto LAB_003f4f62;
      lVar88 = ((ulong)in_R11 & 0xffffffff) * 4;
      uVar80._0_4_ = (uint)((ulong)lVar88 >> 0x20);
      uVar80._4_4_ = 0;
      uVar127._0_4_ = (uint)lVar88;
      if ((((uint)uVar80 == 0) && (uVar80 = uVar101 - uVar82, (ulong)uVar80 <= (ulong)uVar59)) &&
         (uVar80._0_4_ = *(int *)&((__pthread_internal_list *)(uVar100 + 0x10))->__prev -
                         (int)uVar101, uVar80._4_4_ = 0, (uint)uVar127 <= (uint)uVar80)) {
        uVar80._0_4_ = *(int *)(uVar100 + 0x1c) - (uint)uVar127;
        uVar80._4_4_ = 0;
        *(uint *)(uVar100 + 0x1c) = (uint)uVar80;
        if (0 < (int)(uint)uVar80) {
          if (iVar43 == 0) goto LAB_003f4f62;
          in_R10._0_4_ = *(int *)(uVar100 + 0x38) + 7U >> 3;
          in_R10._4_4_ = 0;
          param_6 = (ulong)in_R11 & 0xffffffff;
          uVar90 = ((pthread_mutex_t *)0x0)->__size;
          uVar107 = uVar101;
          while( true ) {
            uVar107 = uVar107 + 4;
            uVar127._0_4_ = *(uint *)(uVar101 + uVar90 * 4);
            uVar80._0_4_ = ((uint)uVar127 >> 0x18 | ((uint)uVar127 & 0xff0000) >> 8 |
                            ((uint)uVar127 & 0xff00) << 8 | (uint)uVar127 << 0x18) + 1;
            uVar80._4_4_ = 0;
            if (1 < (uint)uVar80) break;
LAB_003f4ef0:
            uVar90 = uVar90 + 1;
            if (param_6 == uVar90) goto LAB_003f4f62;
          }
          uVar80 = uVar107 - uVar82;
          uVar127 = uVar100;
code_r0x003f4f12:
          uVar100 = uVar127;
          if ((ulong)uVar80 <= (ulong)uVar59) {
            uVar127._0_4_ = *(uint *)(uVar101 + uVar90 * 4);
            uVar80 = (ulong)((uint)uVar127 >> 0x18 | ((uint)uVar127 & 0xff0000) >> 8 |
                             ((uint)uVar127 & 0xff00) << 8 | (uint)uVar127 << 0x18) + uVar101;
            uVar82 = *(undefined8 *)(uVar100 + 8);
            uVar59._4_4_ = 0;
            uVar59._0_4_ = *(uint *)(uVar100 + 0x18);
            if ((((pthread_mutex_t *)(uVar80 - uVar82) <= (ulong)uVar59) &&
                ((uint)in_R10 <=
                 (uint)(*(int *)&((__pthread_internal_list *)(uVar100 + 0x10))->__prev - (int)uVar80
                       ))) &&
               (iVar43 = *(int *)(uVar100 + 0x1c) - (uint)in_R10, *(int *)(uVar100 + 0x1c) = iVar43,
               0 < iVar43)) goto LAB_003f4ef0;
          }
        }
      }
    }
    else {
LAB_003f3f0e:
      uVar130 = uVar90 + 0xc;
      if ((ulong)(uVar130 - uVar82) <= (ulong)uVar57) goto code_r0x003f3f23;
    }
  }
  goto LAB_003f4e62;
  while( true ) {
    uVar101 = uVar101 + 1;
    pbVar119 = (byte *)((long)&((__pthread_internal_list *)(uVar127 + 0x70))->__prev->__prev +
                       lVar88);
    lVar88 = lVar88 + 0x14;
    if ((*pbVar119 & 0x80) == 0) break;
LAB_003f79a0:
    if ((pthread_mutex_t *)(ulong)((uint)uVar80 - 1) == (pthread_mutex_t *)uVar101) {
      uVar101 = auVar259._0_8_;
      break;
    }
  }
  uVar107 = ((pthread_mutex_t *)0x0)->__size;
  do {
    uVar57 = (uint)uVar101;
    uVar102 = uVar101 & 0xffffffff;
    uVar100 = uVar101 & 0xffffffff;
    if ((uint)auVar259._0_8_ < uVar57) {
      uVar100 = auVar259._0_8_;
    }
    uVar87 = (uint)uVar100;
    uVar81 = (uint)uVar107;
    if (1 < uVar87 - uVar81) {
      *(byte *)&((__pthread_internal_list *)(uVar127 + 0xc0))->__prev =
           *(byte *)&((__pthread_internal_list *)(uVar127 + 0xc0))->__prev | 0x20;
      p_Var58 = ((__pthread_internal_list *)(uVar127 + 0x70))->__prev;
      uVar120 = (pthread_mutex_t *)0xffffffff;
      if (uVar87 != uVar81) {
        if (*(int *)(uVar127 + 0x1c) == 2) {
          if (uVar81 < uVar87) {
            uVar99 = uVar100 - uVar107;
            uVar120 = (pthread_mutex_t *)0xffffffff;
            if (8 < uVar99) {
              uVar92 = (ulong)((uint)uVar99 & 7);
              if (uVar92 == 0) {
                uVar92 = 8;
              }
              lVar88 = (long)(uVar92 + uVar107) - uVar100;
              puVar49 = (undefined4 *)((long)p_Var58 + uVar107 * 0x14 + 0x94);
              auVar155._8_4_ = 0xffffffff;
              auVar155._0_8_ = 0xffffffffffffffff;
              auVar155._12_4_ = 0xffffffff;
              auVar172._8_4_ = 0xffffffff;
              auVar172._0_8_ = 0xffffffffffffffff;
              auVar172._12_4_ = 0xffffffff;
              do {
                in_XMM4.__next._4_4_ = puVar49[-0x14];
                in_XMM4.__next._0_4_ = puVar49[-0x19];
                in_XMM4.__prev._4_4_ = puVar49[-0x1e];
                in_XMM4.__prev._0_4_ = puVar49[-0x23];
                in_XMM5._12_4_ = *puVar49;
                in_XMM5._8_4_ = puVar49[-5];
                in_XMM5._4_4_ = puVar49[-10];
                in_XMM5._0_4_ = puVar49[-0xf];
                auVar175 = (undefined1  [16])in_XMM4 ^ (undefined1  [16])_DAT_006524b0;
                auVar259 = auVar155 ^ (undefined1  [16])_DAT_006524b0;
                auVar243._0_4_ = -(uint)(auVar259._0_4_ < auVar175._0_4_);
                auVar243._4_4_ = -(uint)(auVar259._4_4_ < auVar175._4_4_);
                auVar243._8_4_ = -(uint)(auVar259._8_4_ < auVar175._8_4_);
                auVar243._12_4_ = -(uint)(auVar259._12_4_ < auVar175._12_4_);
                auVar155 = ~auVar243 & (undefined1  [16])in_XMM4 | auVar155 & auVar243;
                auVar175 = in_XMM5 ^ (undefined1  [16])_DAT_006524b0;
                auVar259 = auVar172 ^ (undefined1  [16])_DAT_006524b0;
                auVar244._0_4_ = -(uint)(auVar259._0_4_ < auVar175._0_4_);
                auVar244._4_4_ = -(uint)(auVar259._4_4_ < auVar175._4_4_);
                auVar244._8_4_ = -(uint)(auVar259._8_4_ < auVar175._8_4_);
                auVar244._12_4_ = -(uint)(auVar259._12_4_ < auVar175._12_4_);
                auVar172 = ~auVar244 & in_XMM5 | auVar172 & auVar244;
                puVar49 = puVar49 + 0x28;
                lVar88 = lVar88 + 8;
              } while (lVar88 != 0);
              uVar107 = uVar107 + (uVar99 - uVar92);
              auVar259 = auVar155 ^ (undefined1  [16])_DAT_006524b0;
              auVar175 = auVar172 ^ (undefined1  [16])_DAT_006524b0;
              auVar245._0_4_ = -(uint)(auVar259._0_4_ < auVar175._0_4_);
              auVar245._4_4_ = -(uint)(auVar259._4_4_ < auVar175._4_4_);
              auVar245._8_4_ = -(uint)(auVar259._8_4_ < auVar175._8_4_);
              auVar245._12_4_ = -(uint)(auVar259._12_4_ < auVar175._12_4_);
              auVar212 = ~auVar245 & auVar172 | auVar155 & auVar245;
              auVar156._0_8_ = auVar212._8_8_;
              auVar156._8_4_ = auVar212._8_4_;
              auVar156._12_4_ = auVar212._12_4_;
              auVar259 = auVar212 ^ (undefined1  [16])_DAT_006524b0;
              auVar175 = auVar156 ^ (undefined1  [16])_DAT_006524b0;
              auVar210._0_4_ = -(uint)(auVar259._0_4_ < auVar175._0_4_);
              auVar210._4_4_ = -(uint)(auVar259._4_4_ < auVar175._4_4_);
              auVar210._8_4_ = -(uint)(auVar259._8_4_ < auVar175._8_4_);
              auVar210._12_4_ = -(uint)(auVar259._12_4_ < auVar175._12_4_);
              auVar175 = ~auVar210 & auVar156 | auVar212 & auVar210;
              uVar125 = auVar175._4_4_;
              auVar157._4_4_ = uVar125;
              auVar157._0_4_ = uVar125;
              auVar157._8_4_ = uVar125;
              auVar157._12_4_ = uVar125;
              auVar259 = auVar175 ^ (undefined1  [16])_DAT_006524b0;
              auVar212 = auVar157 ^ (undefined1  [16])_DAT_006524b0;
              auVar246._0_4_ = -(uint)(auVar259._0_4_ < auVar212._0_4_);
              auVar246._4_4_ = -(uint)(auVar259._4_4_ < auVar212._4_4_);
              auVar246._8_4_ = -(uint)(auVar259._8_4_ < auVar212._8_4_);
              auVar246._12_4_ = -(uint)(auVar259._12_4_ < auVar212._12_4_);
              in_XMM2 = (__pthread_internal_list)(auVar175 & auVar246);
              in_XMM3 = ~auVar246 & auVar157 | (undefined1  [16])in_XMM2;
              uVar120._0_4_ = in_XMM3._0_4_;
              uVar120._4_4_ = 0;
              in_XMM6 = _DAT_006524b0;
            }
            lVar88 = uVar100 - uVar107;
            puVar131 = (uint *)((long)p_Var58 + uVar107 * 0x14 + 8);
            do {
              if (*puVar131 < (uint)uVar120) {
                uVar120._4_4_ = 0;
                uVar120._0_4_ = *puVar131;
              }
              puVar131 = puVar131 + 5;
              lVar88 = lVar88 + -1;
            } while (lVar88 != 0);
          }
        }
        else {
          uVar97 = *(uint *)((long)p_Var58 + uVar107 * 0x14 + 8);
          uVar5 = *(uint *)((long)p_Var58 + (ulong)(uVar87 - 1) * 0x14 + 8);
          uVar120._4_4_ = 0;
          uVar120._0_4_ = uVar97;
          if (uVar5 < uVar97) {
            uVar120._4_4_ = 0;
            uVar120._0_4_ = uVar5;
          }
        }
      }
      param_6 = (pthread_mutex_t *)0x3;
      hb_buffer_t::_infos_set_glyph_flags
                ((hb_buffer_t *)uVar127,(long)p_Var58,uVar81,uVar87,(uint)uVar120,3);
      in_XMM1.__next = extraout_XMM1_Qb_41;
      in_XMM1.__prev = extraout_XMM1_Qa_31;
      auVar259._4_4_ = 0;
      auVar259._0_4_ = *(uint *)&((__pthread_internal_list *)(uVar127 + 0x60))->__prev;
    }
    uVar67._0_4_ = uVar57 + 1;
    uVar67._4_4_ = 0;
    if ((uint)uVar67 < (uint)auVar259._0_8_) {
      uVar67 = auVar259._0_8_;
    }
    uVar101 = uVar102;
    do {
      if ((int)uVar67 + -1 == (int)uVar101) {
        uVar101 = uVar67;
        break;
      }
      uVar101._0_4_ = (int)uVar101 + 1;
      uVar101._4_4_ = 0;
    } while ((*(byte *)((long)((__pthread_internal_list *)(uVar127 + 0x70))->__prev +
                       (ulong)(uint)uVar101 * 0x14 + 0x10) & 0x80) != 0);
    uVar107 = uVar102;
  } while (uVar57 < (uint)uVar80);
  goto LAB_003f790f;
  while( true ) {
    unaff_RBX = unaff_RBX + 1;
    pbVar119 = (byte *)((long)&((__pthread_internal_list *)(uVar127 + 0x70))->__prev->__prev +
                       lVar88);
    lVar88 = lVar88 + 0x14;
    if ((*pbVar119 & 0x80) == 0) break;
LAB_003fa240:
    if ((pthread_mutex_t *)(ulong)((uint)uVar80 - 1) == (pthread_mutex_t *)unaff_RBX) {
      unaff_RBX = auVar259._0_8_;
      break;
    }
  }
  uVar99 = 0;
  param_2 = auVar259._0_8_;
  do {
    uVar80._0_4_ = (uint)unaff_RBX;
    if (1 < (uint)uVar80 - (uint)uVar99) {
      hb_buffer_t::merge_clusters_impl((hb_buffer_t *)uVar127,(uint)uVar99,(uint)uVar80);
      in_XMM1.__next = extraout_XMM1_Qb_47;
      in_XMM1.__prev = extraout_XMM1_Qa_39;
      auVar259._4_4_ = 0;
      auVar259._0_4_ = *(uint *)&((__pthread_internal_list *)(uVar127 + 0x60))->__prev;
    }
    uVar59._0_4_ = (uint)uVar80 + 1;
    uVar59._4_4_ = 0;
    if ((uint)uVar59 < (uint)auVar259._0_8_) {
      uVar59 = auVar259._0_8_ & 0xffffffff;
    }
    uVar100._0_4_ = (int)uVar59 - 1;
    uVar100._4_4_ = 0;
    uVar80 = unaff_RBX & 0xffffffff;
LAB_003fd120:
    do {
      iVar43 = (int)uVar80;
      uVar80._0_4_ = (uint)uVar59;
      if ((int)uVar100 == iVar43) break;
      uVar80._0_4_ = iVar43 + 1;
      uVar80._4_4_ = 0;
    } while ((*(byte *)((long)((__pthread_internal_list *)(uVar127 + 0x70))->__prev +
                       (ulong)(uint)uVar80 * 0x14 + 0x10) & 0x80) != 0);
    uVar57 = (uint)unaff_RBX;
    uVar99 = unaff_RBX & 0xffffffff;
    unaff_RBX._4_4_ = 0;
    unaff_RBX._0_4_ = (uint)uVar80;
  } while (uVar57 < (uint)param_2);
LAB_003f790f:
  uVar80._0_4_ = *(uint *)(uVar127 + 0x38);
  uVar107 = hb_script_get_horizontal_direction(*(int *)(uVar127 + 0x3c));
  param_2 = _uStack_258;
  uVar23._4_4_ = uStack_274;
  uVar23._0_4_ = local_278;
  uVar57 = (uint)uVar107;
  if ((uVar57 == 5) && ((uint)uVar80 == 4)) {
    uVar99 = (ulong)*(uint *)&((__pthread_internal_list *)(uVar127 + 0x60))->__prev;
    if (uVar99 == 0) {
      bVar73 = 0;
      uVar120 = (pthread_mutex_t *)0x0;
      bVar137 = false;
    }
    else {
      p_Var58 = ((__pthread_internal_list *)(uVar127 + 0x70))->__prev + 1;
      bVar137 = true;
      uVar120 = (pthread_mutex_t *)0x0;
      param_6 = (pthread_mutex_t *)0x3e0;
      bVar73 = 0;
      uVar92 = 1;
      do {
        uVar56 = *(ushort *)&p_Var58->__prev & 0x1f;
        if (uVar56 == 0xd) {
          uVar120 = (pthread_mutex_t *)0x1;
        }
        else {
          if ((0x3e0U >> uVar56 & 1) != 0) break;
          if (*(int *)&p_Var58[-1].__prev - 0x1f1e6U < 0x1a) {
            bVar73 = 1;
          }
        }
        bVar137 = uVar92 < uVar99;
        p_Var58 = (__pthread_internal_list *)((long)&p_Var58[1].__prev + 4);
        bVar138 = uVar92 != uVar99;
        uVar92 = uVar92 + 1;
      } while (bVar138);
    }
    uVar57 = (byte)(~bVar137 & (bVar73 | (byte)uVar120)) ^ 5;
  }
  _uStack_250 = uVar127 + 0x60;
  uVar59._0_4_ = (uint)uVar80 & 0xfffffffe;
  uVar59._4_4_ = 0;
  _Var144 = extraout_XMM0_15;
  if ((uint)uVar59 == 4) {
    if (((uint)uVar80 != uVar57) && (uVar57 != 0)) goto LAB_003f79fd;
  }
  else if (((uint)uVar80 != 6) && ((uint)uVar59 == 6)) {
LAB_003f79fd:
    uVar80._0_4_ = *(uint *)(uVar127 + 0x1c);
    uVar59._4_4_ = 0;
    uVar59._0_4_ = (uint)uVar80;
    uVar57 = *(uint *)&((__pthread_internal_list *)(uVar127 + 0x60))->__prev;
    uVar99 = (ulong)uVar57;
    if (uVar57 == 1) {
      uVar87 = 0;
      uVar57 = 1;
      uVar92 = 1;
LAB_003f7bc7:
      uVar81 = (uint)uVar92;
      if (((uint)uVar80 == 1) && (1 < uVar81 - uVar87)) {
        auVar259 = hb_buffer_t::merge_clusters_impl((hb_buffer_t *)uVar127,uVar87,uVar81);
        in_XMM1.__prev = auVar259._8_8_;
        _Var144.__prev = auVar259._0_8_;
        in_XMM1.__next = extraout_XMM1_Qb_12;
        _Var144.__next = extraout_XMM0_Qb_07;
        uVar57 = *(uint *)&((__pthread_internal_list *)(uVar127 + 0x60))->__prev;
      }
      uVar80._0_4_ = uVar87;
      if (uVar57 < uVar87) {
        uVar80._0_4_ = uVar57;
      }
      uVar47._4_4_ = 0;
      uVar47._0_4_ = (uint)uVar80;
      if (uVar81 <= uVar57) {
        uVar57 = uVar81;
      }
      uVar59 = uVar47;
      if (((uint)uVar80 + 2 <= uVar57) && ((uint)uVar80 < uVar57 - 1)) {
        p_Var58 = ((__pthread_internal_list *)(uVar127 + 0x70))->__prev;
        uVar99 = (ulong)(uVar57 - 1);
        uVar59 = (long)p_Var58 + uVar47 * 0x14;
        pauVar63 = (undefined1 (*) [12])((long)p_Var58 + uVar99 * 0x14);
        do {
          uVar99 = uVar99 - 1;
          uVar125 = *(undefined4 *)(pauVar63[1] + 4);
          cStack_1a8 = (char)uVar125;
          cStack_1a7 = (char)((uint)uVar125 >> 8);
          cStack_1a6 = (char)((uint)uVar125 >> 0x10);
          cStack_1a5 = (char)((uint)uVar125 >> 0x18);
          uStack_1b8 = *(int **)*pauVar63;
          auVar18 = *pauVar63;
          uStack_1b0 = (uint)*(undefined8 *)(*pauVar63 + 8);
          uStack_1ac = (undefined4)((ulong)*(undefined8 *)(*pauVar63 + 8) >> 0x20);
          *(undefined4 *)(pauVar63[1] + 4) =
               *(undefined4 *)&((__pthread_internal_list *)(uVar59 + 0x10))->__prev;
          uVar107 = *(undefined8 *)(uVar59 + 8);
          *(long *)*pauVar63 = *(long *)uVar59;
          *(undefined8 *)(*pauVar63 + 8) = uVar107;
          *(undefined4 *)&((__pthread_internal_list *)(uVar59 + 0x10))->__prev = uVar125;
          _Var144.__next._4_4_ = uStack_1ac;
          _Var144._0_12_ = auVar18;
          *(__pthread_internal_list *)uVar59 = _Var144;
          uVar47 = uVar47 + 1;
          uVar59 = uVar59 + 0x14;
          pauVar63 = (undefined1 (*) [12])(pauVar63[-2] + 4);
        } while ((ulong)uVar47 < (pthread_mutex_t *)(uVar99 & 0xffffffff));
      }
      if (*(char *)(uVar127 + 0x5b) != '\0') {
        uVar80._0_4_ = *(uint *)&((__pthread_internal_list *)(uVar127 + 0x60))->__prev;
        if ((uint)uVar80 < uVar87) {
          uVar87 = (uint)uVar80;
        }
        if ((uint)uVar80 < uVar81) {
          uVar81 = (uint)uVar80;
        }
        if ((uVar87 + 2 <= uVar81) && (uVar87 < uVar81 - 1)) {
          p_Var58 = ((__pthread_internal_list *)(uVar127 + 0x80))->__prev;
          uVar99 = (ulong)(uVar81 - 1);
          uVar92 = (ulong)uVar87;
          uVar59 = (long)p_Var58 + uVar92 * 0x14;
          pauVar63 = (undefined1 (*) [12])((long)p_Var58 + uVar99 * 0x14);
          do {
            uVar99 = uVar99 - 1;
            uVar125 = *(undefined4 *)(pauVar63[1] + 4);
            cStack_1a8 = (char)uVar125;
            cStack_1a7 = (char)((uint)uVar125 >> 8);
            cStack_1a6 = (char)((uint)uVar125 >> 0x10);
            cStack_1a5 = (char)((uint)uVar125 >> 0x18);
            uStack_1b8 = *(int **)*pauVar63;
            auVar18 = *pauVar63;
            uStack_1b0 = (uint)*(undefined8 *)(*pauVar63 + 8);
            uStack_1ac = (undefined4)((ulong)*(undefined8 *)(*pauVar63 + 8) >> 0x20);
            *(undefined4 *)(pauVar63[1] + 4) =
                 *(undefined4 *)&((__pthread_internal_list *)(uVar59 + 0x10))->__prev;
            uVar107 = *(undefined8 *)(uVar59 + 8);
            *(long *)*pauVar63 = *(long *)uVar59;
            *(undefined8 *)(*pauVar63 + 8) = uVar107;
            *(undefined4 *)&((__pthread_internal_list *)(uVar59 + 0x10))->__prev = uVar125;
            _Var144.__next._4_4_ = uStack_1ac;
            _Var144._0_12_ = auVar18;
            *(__pthread_internal_list *)uVar59 = _Var144;
            uVar92 = uVar92 + 1;
            uVar59 = uVar59 + 0x14;
            pauVar63 = (undefined1 (*) [12])(pauVar63[-2] + 4);
          } while (uVar92 < (uVar99 & 0xffffffff));
        }
      }
      uVar57 = *(uint *)&((__pthread_internal_list *)(uVar127 + 0x60))->__prev;
      auVar259._4_4_ = 0;
      auVar259._0_4_ = uVar57;
      if (1 < uVar57) {
        uVar59 = ((__pthread_internal_list *)(uVar127 + 0x70))->__prev;
        uVar80 = (ulong)(uVar57 - 1) - 1;
        uVar100 = uVar59 + (ulong)(uVar57 - 1) * 0x14;
        uVar107 = ((pthread_mutex_t *)0x0)->__size;
LAB_003f7d30:
        do {
          uVar57 = (uint)auVar259._0_8_;
          uVar125 = *(undefined4 *)&((__pthread_internal_list *)(uVar100 + 0x10))->__prev;
          cStack_1a8 = (char)uVar125;
          cStack_1a7 = (char)((uint)uVar125 >> 8);
          cStack_1a6 = (char)((uint)uVar125 >> 0x10);
          cStack_1a5 = (char)((uint)uVar125 >> 0x18);
          uStack_1b8 = *(int **)uVar100;
          auVar18 = *(undefined1 (*) [12])uVar100;
          uStack_1b0 = (uint)*(undefined8 *)(uVar100 + 8);
          uStack_1ac = (undefined4)((ulong)*(undefined8 *)(uVar100 + 8) >> 0x20);
          *(undefined4 *)&((__pthread_internal_list *)(uVar100 + 0x10))->__prev =
               *(undefined4 *)&((__pthread_internal_list *)(uVar59 + 0x10))->__prev;
          uVar102 = *(undefined8 *)(uVar59 + 8);
          *(long *)uVar100 = *(long *)uVar59;
          *(undefined8 *)(uVar100 + 8) = uVar102;
          *(undefined4 *)&((__pthread_internal_list *)(uVar59 + 0x10))->__prev = uVar125;
          _Var144.__next._4_4_ = uStack_1ac;
          _Var144._0_12_ = auVar18;
          *(__pthread_internal_list *)uVar59 = _Var144;
          uVar107 = uVar107 + 1;
          ppVar129 = (pthread_mutex_t *)(uVar80 & 0xffffffff);
          uVar59 = uVar59 + 0x14;
          uVar80 = uVar80 + -1;
          uVar100 = uVar100 + -0x14;
        } while ((ulong)uVar107 < ppVar129);
      }
      uVar23._4_4_ = uStack_274;
      uVar23._0_4_ = local_278;
      if (*(hb_buffer_t *)(uVar127 + 0x5b) != (hb_buffer_t)0x0) {
        uVar80._0_4_ = *(uint *)&((__pthread_internal_list *)(uVar127 + 0x60))->__prev;
        uVar59._4_4_ = 0;
        uVar59._0_4_ = (uint)uVar80;
        if ((uint)uVar80 < uVar57) {
          uVar57 = (uint)uVar80;
        }
        if (1 < uVar57) {
          uVar59 = ((__pthread_internal_list *)(uVar127 + 0x80))->__prev;
          uVar80 = (ulong)(uVar57 - 1) - 1;
          auVar259._0_8_ = uVar59 + (ulong)(uVar57 - 1) * 0x14;
          uVar100 = ((pthread_mutex_t *)0x0)->__size;
          uVar102 = uVar23;
          goto LAB_003f7db0;
        }
      }
    }
    else if (uVar57 != 0) {
      uVar78 = 0;
      uVar92 = 1;
      do {
        uVar87 = (uint)uVar78;
        uVar57 = (uint)uVar99;
        p_Var58 = ((__pthread_internal_list *)(uVar127 + 0x70))->__prev;
        if ((*(byte *)((long)p_Var58 + uVar92 * 0x14 + 0x10) & 0x80) == 0) {
          uVar81 = (uint)uVar92;
          if (1 < uVar81 - uVar87 && (uint)uVar80 == 1) {
            auVar259 = hb_buffer_t::merge_clusters_impl((hb_buffer_t *)uVar127,uVar87,uVar81);
            in_XMM1.__prev = auVar259._8_8_;
            _Var144.__prev = auVar259._0_8_;
            in_XMM1.__next = extraout_XMM1_Qb_11;
            _Var144.__next = extraout_XMM0_Qb_06;
            p_Var58 = ((__pthread_internal_list *)(uVar127 + 0x70))->__prev;
            uVar57 = *(uint *)&((__pthread_internal_list *)(uVar127 + 0x60))->__prev;
          }
          uVar97 = uVar87;
          if (uVar57 < uVar87) {
            uVar97 = uVar57;
          }
          if (uVar92 <= uVar57) {
            uVar57 = uVar81;
          }
          if ((uVar97 + 2 <= uVar57) && (uVar97 < uVar57 - 1)) {
            uVar99 = (ulong)(uVar57 - 1);
            uVar78 = (ulong)uVar97;
            p_Var89 = (__pthread_internal_list *)((long)p_Var58 + uVar78 * 0x14);
            pauVar63 = (undefined1 (*) [12])((long)p_Var58 + uVar99 * 0x14);
            do {
              uVar99 = uVar99 - 1;
              uVar125 = *(undefined4 *)(pauVar63[1] + 4);
              cStack_1a8 = (char)uVar125;
              cStack_1a7 = (char)((uint)uVar125 >> 8);
              cStack_1a6 = (char)((uint)uVar125 >> 0x10);
              cStack_1a5 = (char)((uint)uVar125 >> 0x18);
              uStack_1b8 = *(int **)*pauVar63;
              auVar18 = *pauVar63;
              uStack_1b0 = (uint)*(undefined8 *)(*pauVar63 + 8);
              uStack_1ac = (undefined4)((ulong)*(undefined8 *)(*pauVar63 + 8) >> 0x20);
              *(undefined4 *)(pauVar63[1] + 4) = *(undefined4 *)&p_Var89[1].__prev;
              p_Var58 = p_Var89->__next;
              *(__pthread_internal_list **)*pauVar63 = p_Var89->__prev;
              *(__pthread_internal_list **)(*pauVar63 + 8) = p_Var58;
              *(undefined4 *)&p_Var89[1].__prev = uVar125;
              _Var144.__next._4_4_ = uStack_1ac;
              _Var144._0_12_ = auVar18;
              *p_Var89 = _Var144;
              uVar78 = uVar78 + 1;
              p_Var89 = (__pthread_internal_list *)((long)&p_Var89[1].__prev + 4);
              pauVar63 = (undefined1 (*) [12])(pauVar63[-2] + 4);
            } while (uVar78 < (uVar99 & 0xffffffff));
          }
          if (*(char *)(uVar127 + 0x5b) != '\0') {
            uVar57 = *(uint *)&((__pthread_internal_list *)(uVar127 + 0x60))->__prev;
            if (uVar57 < uVar87) {
              uVar87 = uVar57;
            }
            if (uVar57 < uVar92) {
              uVar81 = uVar57;
            }
            if ((uVar87 + 2 <= uVar81) && (uVar87 < uVar81 - 1)) {
              p_Var89 = ((__pthread_internal_list *)(uVar127 + 0x80))->__prev;
              uVar99 = (ulong)(uVar81 - 1);
              uVar78 = (ulong)uVar87;
              p_Var58 = (__pthread_internal_list *)((long)p_Var89 + uVar78 * 0x14);
              pauVar63 = (undefined1 (*) [12])((long)p_Var89 + uVar99 * 0x14);
              do {
                uVar99 = uVar99 - 1;
                uVar125 = *(undefined4 *)(pauVar63[1] + 4);
                cStack_1a8 = (char)uVar125;
                cStack_1a7 = (char)((uint)uVar125 >> 8);
                cStack_1a6 = (char)((uint)uVar125 >> 0x10);
                cStack_1a5 = (char)((uint)uVar125 >> 0x18);
                uStack_1b8 = *(int **)*pauVar63;
                auVar18 = *pauVar63;
                uStack_1b0 = (uint)*(undefined8 *)(*pauVar63 + 8);
                uStack_1ac = (undefined4)((ulong)*(undefined8 *)(*pauVar63 + 8) >> 0x20);
                *(undefined4 *)(pauVar63[1] + 4) = *(undefined4 *)&p_Var58[1].__prev;
                p_Var89 = p_Var58->__next;
                *(__pthread_internal_list **)*pauVar63 = p_Var58->__prev;
                *(__pthread_internal_list **)(*pauVar63 + 8) = p_Var89;
                *(undefined4 *)&p_Var58[1].__prev = uVar125;
                _Var144.__next._4_4_ = uStack_1ac;
                _Var144._0_12_ = auVar18;
                *p_Var58 = _Var144;
                uVar78 = uVar78 + 1;
                p_Var58 = (__pthread_internal_list *)((long)&p_Var58[1].__prev + 4);
                pauVar63 = (undefined1 (*) [12])(pauVar63[-2] + 4);
              } while (uVar78 < (uVar99 & 0xffffffff));
            }
          }
          uVar78 = uVar92 & 0xffffffff;
        }
        uVar87 = (uint)uVar78;
        uVar92 = uVar92 + 1;
        uVar57 = *(uint *)_uStack_250;
        uVar99 = (ulong)uVar57;
      } while (uVar92 < uVar99);
      goto LAB_003f7bc7;
    }
LAB_003f7dff:
    *(hb_buffer_t *)(uVar127 + 0x38) = (hb_buffer_t)((byte)*(hb_buffer_t *)(uVar127 + 0x38) ^ 1);
  }
  uStack_274 = SUB84(uVar23,4);
  local_278 = (undefined4)uVar23;
  _uStack_228 = param_2 + 0x60;
  if (((__pthread_internal_list *)(param_2 + 0x80))->__prev[2].__prev !=
      (__pthread_internal_list *)0x0) {
    bVar137 = hb_buffer_t::message
                        (_Var144.__prev,in_XMM1.__prev,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,
                         in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,(hb_buffer_t *)uVar127,
                         _uStack_280,"start preprocess-text",uVar59,uVar120,param_6,uVar283);
    uVar23._4_4_ = uStack_274;
    uVar23._0_4_ = local_278;
    _Var144 = extraout_XMM0_16;
    if (bVar137) {
      p_Var58 = ((__pthread_internal_list *)(param_2 + 0x80))->__prev;
code_r0x003f7e42:
      auVar259 = (*(code *)p_Var58[2].__prev)();
      in_XMM1.__prev = auVar259._8_8_;
      in_XMM1.__next = extraout_XMM1_Qb_13;
      hb_buffer_t::message
                (auVar259._0_8_,in_XMM1.__prev,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,
                 in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,(hb_buffer_t *)uVar127,_uStack_280,
                 "end preprocess-text",uVar59,uVar120,param_6,uVar283);
      uVar23._4_4_ = uStack_274;
      uVar23._0_4_ = local_278;
      _Var144 = extraout_XMM0_17;
    }
  }
  iVar43 = *(int *)&((__pthread_internal_list *)(uVar127 + 0x60))->__prev;
  uStack_270 = (ushort)iVar43;
  uStack_26e = (undefined2)((uint)iVar43 >> 0x10);
  uStack_26c = 0;
  param_2 = ((__pthread_internal_list *)(uVar127 + 0x70))->__prev;
  if ((local_208[1] & 0xfffffffdU) == 5) {
    uVar102 = uVar23;
    if (iVar43 != 0) {
code_r0x003f7e92:
      unaff_RBX = ((__pthread_internal_list *)(uVar102 + 0x10))->__prev;
      uVar130._4_4_ = 0;
      uVar130._0_4_ = *(uint *)(_uStack_258 + 0xfc);
      uVar127 = CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)) * 0x14;
      param_3 = (uint *)&((pthread_mutex_t *)0x0)->__data;
LAB_003f7eeb:
      do {
        uStack_274 = SUB84(uVar102,4);
        local_278 = (undefined4)uVar102;
        uVar80._0_4_ = (*(code *)((__pthread_internal_list *)(unaff_RBX + 0x30))->__prev)
                                 (unaff_RBX,*(undefined4 *)(param_2 + (long)param_3),
                                  ((__pthread_internal_list *)(unaff_RBX + 0x70))->__prev);
        in_XMM1.__next = extraout_XMM1_Qb_15;
        in_XMM1.__prev = extraout_XMM1_Qa_12;
        _Var144.__next = extraout_XMM0_Qb_09;
        _Var144.__prev = extraout_XMM0_Qa_13;
        if ((uint)uVar80 != *(uint *)(param_2 + (long)param_3)) {
          uVar90._4_4_ = 0;
          uVar90._0_4_ = (uint)uVar80;
          piVar52 = (int *)((ulong)uStack_1b8._4_4_ << 0x20);
          uStack_1b8 = (int *)((ulong)uStack_1b8._4_4_ << 0x20);
          auVar259._0_8_ = *(undefined8 *)(_uStack_280 + 0x90);
          p_Var58 = ((__pthread_internal_list *)(auVar259._0_8_ + 0x10))->__prev;
          if (p_Var58 == (__pthread_internal_list *)0x0) {
            uVar120 = (pthread_mutex_t *)0x0;
          }
          else {
            uVar120 = p_Var58[1].__prev;
code_r0x003f7f25:
            piVar52 = uStack_1b8;
          }
          uVar59 = &uStack_1b8;
          uStack_1b8 = piVar52;
          iVar43 = (*(code *)((__pthread_internal_list *)(auVar259._0_8_ + 0x30))->__prev)
                             (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),uVar90 & 0xffffffff);
          uVar23._4_4_ = uStack_274;
          uVar23._0_4_ = local_278;
          in_XMM1.__next = extraout_XMM1_Qb_14;
          in_XMM1.__prev = extraout_XMM1_Qa_11;
          _Var144.__next = extraout_XMM0_Qb_08;
          _Var144.__prev = extraout_XMM0_Qa_12;
          if (iVar43 != 0) {
            *(int *)(param_2 + (long)param_3) = (int)uVar90;
            param_3 = (uint *)((long)param_3 + 0x14);
            uVar102 = uVar23;
            if ((uint *)uVar127 == param_3) break;
            goto LAB_003f7eeb;
          }
        }
        uVar23._4_4_ = uStack_274;
        uVar23._0_4_ = local_278;
        *(uint *)((hb_buffer_t *)(param_2 + 4) + (long)param_3) =
             *(uint *)((hb_buffer_t *)(param_2 + 4) + (long)param_3) | (uint)uVar130;
        param_3 = (uint *)((long)param_3 + 0x14);
        uVar102 = uVar23;
      } while ((uint *)uVar127 != param_3);
    }
  }
  uVar102 = uVar23;
  if ((((local_208[1] & 0xfffffffeU) == 6) &&
      (((byte)*(hb_buffer_t *)(_uStack_258 + 0x108) & 8) == 0)) &&
     (CONCAT22(uStack_26e,uStack_270) != 0)) {
    uVar127 = CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)) * 0x14;
    uVar29 = uVar23;
code_r0x003f7f71:
    uVar102 = uVar29;
    unaff_RBX = &((pthread_mutex_t *)0x0)->__data;
    puVar131 = &_hb_ot_shape::switchD_003f8054::switchdataD_005e046c;
    param_3 = &_hb_ot_shape::switchD_003f8027::switchdataD_005e02f8;
    goto LAB_003f7fb5;
  }
LAB_003f817b:
  uStack_274 = SUB84(uVar102,4);
  local_278 = (undefined4)uVar102;
  *(hb_buffer_t *)(uVar102 + 0xb8) = (hb_buffer_t)((byte)*(hb_buffer_t *)(uVar102 + 0xb8) | 0xf);
  _uStack_260 = uVar102 + 0x70;
  uVar127._0_4_ = *(uint *)&((__pthread_internal_list *)(uVar102 + 0x60))->__prev;
  if ((uint)uVar127 != 0) {
    p_Var58 = ((__pthread_internal_list *)(_uStack_258 + 0x80))->__prev;
    uVar80._0_4_ = *(uint *)((long)&p_Var58[5].__prev + 4);
    if ((uint)uVar80 == 4) {
      uVar80._0_4_ = 2;
    }
    uStack_248 = (uint)uVar80;
    uStack_1b8._0_4_ = (uint)_uStack_228;
    uStack_1b8._4_4_ = SUB84(_uStack_228,4);
    cStack_1a8 = (char)_uStack_280;
    cStack_1a7 = SUB81(_uStack_280,1);
    cStack_1a6 = SUB81(_uStack_280,2);
    cStack_1a5 = SUB81(_uStack_280,3);
    uStack_1a4 = SUB84(_uStack_280,4);
    unique0x100125a7 = (__pthread_internal_list *)hb_ot_shape_normalize_context_t::decompose_unicode
    ;
    if (p_Var58[3].__prev != (__pthread_internal_list *)0x0) {
      unique0x100125af = p_Var58[3].__prev;
    }
    p_Var89 = (__pthread_internal_list *)hb_ot_shape_normalize_context_t::compose_unicode;
    if (p_Var58[3].__next != (__pthread_internal_list *)0x0) {
      p_Var89 = p_Var58[3].__next;
    }
    auStack_1a0._0_8_ = ((__pthread_internal_list *)(uVar102 + 0x10))->__prev;
    auStack_190._0_8_ = p_Var89;
    uStack_270 = (ushort)((uint)uVar80 & 0xfffffffd);
    uStack_26e = (undefined2)(((uint)uVar80 & 0xfffffffd) >> 0x10);
    *(undefined2 *)(uVar102 + 0x5a) = 1;
    *(undefined4 *)(uVar102 + 100) = 0;
    ((pthread_mutex_t *)(uVar102 + 0x78))->__align =
         (long)((__pthread_internal_list *)(uVar102 + 0x70))->__prev;
    *(undefined4 *)(uVar102 + 0x5c) = 0;
    uVar99 = 0;
    uVar48 = (pthread_mutex_t *)0x0;
    _uStack_1b0 = uVar102;
LAB_003f8250:
    uVar80._0_4_ = (uint)uVar99;
    uVar57 = (uint)uVar80 + 1;
    if ((uint)uVar80 + 1 < (uint)uVar127) {
      uVar57 = (uint)uVar127;
    }
    uVar87 = (uint)uVar80 - 1;
    do {
      uVar81 = uVar87 + 2;
      uVar97 = uVar57;
      if ((uint)uVar127 <= uVar81) break;
      uVar81 = *(uint *)(*(long *)_uStack_260 + 0x10 + (ulong)uVar81 * 0x14);
      uVar87 = uVar87 + 1;
      uVar97 = uVar87;
    } while ((0x1c00U >> (uVar81 & 0x1f) & 1) == 0);
    uStack_268 = uVar48;
    if (CONCAT22(uStack_26e,uStack_270) == 1) {
      uVar59._4_4_ = 0;
      uVar59._0_4_ = uVar81;
      iVar43 = 1;
      uVar107 = _uStack_260;
      uVar100 = _uStack_1b0;
joined_r0x003f853f:
      while ((_uStack_1b0 = uVar100, (uint)uVar80 < uVar97 &&
             (*(hb_buffer_t *)(uVar102 + 0x58) != (hb_buffer_t)0x0))) {
        decompose_current_character((long)&uStack_1b8,(uint)(iVar43 != 1));
        in_XMM1.__next = extraout_XMM1_Qb_17;
        in_XMM1.__prev = extraout_XMM1_Qa_14;
        uVar80._0_4_ = *(uint *)(uVar102 + 0x5c);
        uVar99 = (ulong)(uint)uVar80;
        uVar100 = _uStack_1b0;
      }
      if (((uint)uVar99 == (uint)uVar127) ||
         (*(char *)(CONCAT44(uStack_274,local_278) + 0x58) == '\0')) goto LAB_003f8c32;
      uVar80._0_4_ = (uint)uVar99 + 1;
      if ((uint)uVar80 < (uint)uVar127) {
        uVar80._0_4_ = (uint)uVar127;
      }
      uVar57 = (uint)uVar80 - 1;
      uVar87 = uStack_248;
      do {
        uVar97 = (uint)uVar99;
        uVar81 = uVar97 + 1;
        uVar99 = (ulong)uVar81;
        if ((uint)uVar127 <= uVar81) {
          uVar99 = (ulong)(uint)uVar80;
          uVar92 = (ulong)*(uint *)(uVar100 + 0x5c);
          if ((uint)uVar80 <= *(uint *)(uVar100 + 0x5c)) goto LAB_003f8410;
          goto LAB_003f8391;
        }
        uVar5 = *(uint *)(*(long *)_uStack_260 + 0x10 + (ulong)uVar81 * 0x14);
        uVar59._4_4_ = 0;
        uVar59._0_4_ = uVar5;
      } while ((0x1c00U >> (uVar5 & 0x1f) & 1) != 0);
      uVar92 = (ulong)*(uint *)(uVar100 + 0x5c);
      uVar57 = uVar97;
      if (*(uint *)(uVar100 + 0x5c) < uVar81) {
LAB_003f8391:
        if (*(char *)(uVar100 + 0x58) != '\0') {
          uVar120 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
          uVar59 = uVar120 + uVar92 * 0x14;
          uVar80._0_4_ = (uint)uVar99;
          do {
            if (((*(uint *)uVar59 & 0xfffffff0) == 0xfe00) ||
               (0xffffff0f < *(uint *)uVar59 - 0xe01f0)) {
              uVar111._1_1_ = cStack_1a7;
              uVar111._0_1_ = cStack_1a8;
              uVar111._2_1_ = cStack_1a6;
              uVar111._3_1_ = cStack_1a5;
              uVar111._4_4_ = uStack_1a4;
              if (uVar57 <= (uint)uVar92) goto LAB_003f8afe;
              uStack_268 = uVar111;
              goto LAB_003f8560;
            }
            uVar81 = (int)uVar99 - 1;
            uVar99 = (ulong)uVar81;
            uVar59 = uVar59 + 0x14;
          } while ((uint)uVar92 != uVar81);
          do {
            uVar92 = decompose_current_character((long)&uStack_1b8,(uint)(uVar87 == 0));
            in_XMM1.__next = extraout_XMM1_Qb_18;
            in_XMM1.__prev = extraout_XMM1_Qa_15;
            if ((uint)uVar80 <= *(uint *)(uVar100 + 0x5c)) break;
          } while (*(char *)(uVar100 + 0x58) != '\0');
        }
      }
      goto LAB_003f8410;
    }
    uVar59 = *(long *)_uStack_260 + uVar99 * 0x14;
    uVar107 = *(long *)_uStack_260 + uVar99 * 0x14 + 0xc;
    uVar120 = (pthread_mutex_t *)0x14;
    ppStackY_2a0 = (pthread_mutex_t *)0x3f846b;
    uVar80._0_4_ = (**(code **)(*(long *)(_uStack_280 + 0x90) + 0x38))
                             (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),uVar97 - (uint)uVar80)
    ;
    in_XMM1.__next = extraout_XMM1_Qb_19;
    in_XMM1.__prev = extraout_XMM1_Qa_16;
    uVar102._4_4_ = uStack_274;
    uVar102._0_4_ = local_278;
    if (*(hb_buffer_t *)(uVar102 + 0x5a) == (hb_buffer_t)0x0) {
LAB_003f852d:
      uVar80._0_4_ = *(int *)(uVar102 + 0x5c) + (uint)uVar80;
      uVar99 = (ulong)(uint)uVar80;
      *(uint *)(uVar102 + 0x5c) = (uint)uVar80;
      iVar43 = CONCAT22(uStack_26e,uStack_270);
      uVar100 = _uStack_1b0;
      goto joined_r0x003f853f;
    }
    p_Var89 = (__pthread_internal_list *)((pthread_mutex_t *)(uVar102 + 0x78))->__align;
    p_Var58 = ((__pthread_internal_list *)(uVar102 + 0x70))->__prev;
    iVar43 = *(int *)(uVar102 + 100);
    if ((p_Var89 == p_Var58) && (iVar43 == *(int *)(uVar102 + 0x5c))) {
LAB_003f8526:
      *(uint *)(uVar102 + 100) = iVar43 + (uint)uVar80;
      goto LAB_003f852d;
    }
    uVar57 = iVar43 + (uint)uVar80;
    if ((uVar57 == 0) ||
       (uVar59._4_4_ = uStack_274, uVar59._0_4_ = local_278, uVar57 < *(uint *)(uVar59 + 0x68))) {
      if (p_Var89 == p_Var58) {
LAB_003f84b5:
        lVar88 = CONCAT44(uStack_274,local_278);
        uVar57 = *(uint *)(lVar88 + 100);
        if (*(int *)(lVar88 + 0x5c) + (uint)uVar80 < uVar57 + (uint)uVar80) {
          p_Var89 = *(__pthread_internal_list **)(lVar88 + 0x80);
          *(__pthread_internal_list **)(lVar88 + 0x78) = p_Var89;
          if ((ulong)uVar57 != 0) {
            memcpy(p_Var89,p_Var58,(ulong)uVar57 * 0x14);
            p_Var58 = *(__pthread_internal_list **)(lVar88 + 0x70);
            p_Var89 = *(__pthread_internal_list **)(lVar88 + 0x78);
          }
        }
        else {
          p_Var89 = p_Var58;
        }
      }
LAB_003f84f5:
      uVar102._4_4_ = uStack_274;
      uVar59 = (ulong)*(uint *)(uVar102 + 100) * 5;
      memmove((void *)((long)p_Var89 + (ulong)*(uint *)(uVar102 + 100) * 0x14),
              (void *)((long)p_Var58 + (ulong)*(uint *)(uVar102 + 0x5c) * 0x14),
              (ulong)(uint)uVar80 * 0x14);
      iVar43 = *(int *)(uVar102 + 100);
      goto LAB_003f8526;
    }
    uVar100 = hb_buffer_t::enlarge((hb_buffer_t *)CONCAT44(uStack_274,local_278),uVar57);
    if ((char)uVar100 != '\0') {
      p_Var58 = *(__pthread_internal_list **)(CONCAT44(uStack_274,local_278) + 0x70);
      p_Var89 = *(__pthread_internal_list **)(CONCAT44(uStack_274,local_278) + 0x78);
      if (p_Var89 == p_Var58) goto LAB_003f84b5;
      goto LAB_003f84f5;
    }
LAB_003f8c32:
    uVar102._4_4_ = uStack_274;
    uVar102._0_4_ = local_278;
    hb_buffer_t::sync((hb_buffer_t *)uVar102);
    p_Var58 = extraout_XMM0_18.__prev;
    uVar87 = uStack_248;
    if (((ulong)(byte)(char)uStack_268 & 1) != 0) goto LAB_003f8c6e;
    bVar137 = false;
    bVar73 = *(byte *)&((__pthread_internal_list *)(uVar102 + 0xc0))->__prev;
    _Var144 = extraout_XMM0_18;
    uVar107 = _uStack_260;
    goto joined_r0x003f8f2a;
  }
LAB_003f9369:
  if ((((ulong)((__pthread_internal_list *)(uVar102 + 0xc0))->__prev & 1) != 0) &&
     (((byte)*(hb_buffer_t *)(_uStack_258 + 0x108) & 4) != 0)) {
    if ((*(uint *)(uVar102 + 0x38) & 0xfffffffd) == 4) {
      uVar127._0_4_ = (((pthread_mutex_t *)(_uStack_258 + 0xf0))->__data).__lock;
      uVar125 = *(uint *)(_uStack_258 + 0xf4) | (uint)uVar127;
      uVar123 = (uint)uVar127 | *(uint *)(_uStack_258 + 0xf8);
      uVar127._0_4_ = *(uint *)_uStack_250;
    }
    else {
      uVar127._0_4_ = (((pthread_mutex_t *)(_uStack_258 + 0xf0))->__data).__lock;
      uVar125 = *(uint *)(_uStack_258 + 0xf8) | (uint)uVar127;
      uVar123 = (uint)uVar127 | *(uint *)(_uStack_258 + 0xf4);
      uVar127._0_4_ = *(uint *)_uStack_250;
    }
    uVar41._4_4_ = 0;
    uVar41._0_4_ = (uint)uVar127;
    if ((pthread_mutex_t *)uVar41 != (pthread_mutex_t *)0x0) {
      lVar88 = *(long *)_uStack_260;
      uVar107 = lVar88 + 0x10;
      _uStack_240 = lVar88 + 4;
      _local_58 = lVar88 + 0x40;
      uVar80._0_4_ = 0;
      auStack_214._4_4_ = uVar123;
      p_Stack_200._0_4_ = uVar125;
      uVar120 = _uStack_260;
      auStack_23c._4_8_ = uVar107;
      do {
        uVar99 = (ulong)(uint)uVar80;
        uVar100 = uVar99 * 5;
        if (*(int *)(lVar88 + uVar99 * 0x14) == 0x2044) {
          uVar57 = (uint)uVar80 + 1;
          uVar115._4_4_ = 0;
          uVar115._0_4_ = uVar57;
          uVar92 = uVar99 - 1;
          do {
            if (uVar92 == 0xffffffffffffffff) {
              uVar87 = 0;
              goto joined_r0x003fad75;
            }
            uVar78 = uVar92 & 0xffffffff;
            uVar92 = uVar92 - 1;
          } while ((*(ushort *)(lVar88 + 0x10 + uVar78 * 0x14) & 0x1f) == 0xd);
          uVar87 = (int)uVar92 + 2;
joined_r0x003fad75:
          if (uVar57 < (uint)uVar127) {
            lVar126 = uVar115 * 5;
            uStack_270 = (ushort)lVar126;
            uStack_26e = (undefined2)((ulong)lVar126 >> 0x10);
            uStack_26c = (int)((ulong)lVar126 >> 0x20);
            phVar103 = (hb_buffer_t *)(uVar107 + uVar115 * 0x14);
            uVar102 = uVar115;
            do {
              uVar59._0_4_ = *(ushort *)phVar103 & 0x1f;
              uVar59._4_4_ = 0;
              if ((short)(uint)uVar59 != 0xd) goto LAB_003fadac;
              uVar102 = uVar102 + 1;
              phVar103 = phVar103 + 0x14;
            } while (uVar41 != uVar102);
            uVar102 = uVar41;
LAB_003fadac:
            uVar81 = (uint)uVar102;
            bVar137 = uVar81 == uVar57;
            if ((uVar87 == (uint)uVar80) || (uVar81 == uVar57)) {
              uVar102._4_4_ = uStack_274;
              uVar102._0_4_ = local_278;
              if (uVar87 == (uint)uVar80) goto LAB_003fafc2;
LAB_003fafcd:
              if (bVar137) goto LAB_003fafd5;
            }
            else {
              uVar59._4_4_ = 0;
              uVar59._0_4_ = *(uint *)_uStack_250;
              if (uVar81 <= *(uint *)_uStack_250) {
                uVar59 = uVar102 & 0xffffffff;
              }
              uVar97 = (uint)uVar59;
              uStack_268 = uVar115;
              if (1 < uVar97 - uVar87) {
                lVar104 = CONCAT44(uStack_274,local_278);
                *(byte *)(lVar104 + 0xc0) = *(byte *)(lVar104 + 0xc0) | 0x20;
                lVar126 = *(long *)(lVar104 + 0x70);
                uVar57 = 0xffffffff;
                if (uVar97 != uVar87) {
                  if (*(int *)(lVar104 + 0x1c) == 2) {
                    if (uVar87 < uVar97) {
                      uVar92 = (ulong)uVar87;
                      uVar78 = uVar59 - uVar92;
                      uVar57 = 0xffffffff;
                      if (8 < uVar78) {
                        uVar72 = (ulong)((uint)uVar78 & 7);
                        if (uVar72 == 0) {
                          uVar72 = 8;
                        }
                        lVar104 = (uVar72 + uVar92) - uVar59;
                        puVar49 = (undefined4 *)(lVar126 + uVar92 * 0x14 + 0x94);
                        auVar152._8_4_ = 0xffffffff;
                        auVar152._0_8_ = 0xffffffffffffffff;
                        auVar152._12_4_ = 0xffffffff;
                        auVar171._8_4_ = 0xffffffff;
                        auVar171._0_8_ = 0xffffffffffffffff;
                        auVar171._12_4_ = 0xffffffff;
                        do {
                          in_XMM4.__next._4_4_ = puVar49[-0x14];
                          in_XMM4.__next._0_4_ = puVar49[-0x19];
                          in_XMM4.__prev._4_4_ = puVar49[-0x1e];
                          in_XMM4.__prev._0_4_ = puVar49[-0x23];
                          in_XMM5._12_4_ = *puVar49;
                          in_XMM5._8_4_ = puVar49[-5];
                          in_XMM5._4_4_ = puVar49[-10];
                          in_XMM5._0_4_ = puVar49[-0xf];
                          auVar175 = (undefined1  [16])in_XMM4 ^ (undefined1  [16])_DAT_006524b0;
                          auVar259 = auVar152 ^ (undefined1  [16])_DAT_006524b0;
                          auVar239._0_4_ = -(uint)(auVar259._0_4_ < auVar175._0_4_);
                          auVar239._4_4_ = -(uint)(auVar259._4_4_ < auVar175._4_4_);
                          auVar239._8_4_ = -(uint)(auVar259._8_4_ < auVar175._8_4_);
                          auVar239._12_4_ = -(uint)(auVar259._12_4_ < auVar175._12_4_);
                          auVar152 = ~auVar239 & (undefined1  [16])in_XMM4 | auVar152 & auVar239;
                          auVar175 = in_XMM5 ^ (undefined1  [16])_DAT_006524b0;
                          auVar259 = auVar171 ^ (undefined1  [16])_DAT_006524b0;
                          auVar240._0_4_ = -(uint)(auVar259._0_4_ < auVar175._0_4_);
                          auVar240._4_4_ = -(uint)(auVar259._4_4_ < auVar175._4_4_);
                          auVar240._8_4_ = -(uint)(auVar259._8_4_ < auVar175._8_4_);
                          auVar240._12_4_ = -(uint)(auVar259._12_4_ < auVar175._12_4_);
                          auVar171 = ~auVar240 & in_XMM5 | auVar171 & auVar240;
                          puVar49 = puVar49 + 0x28;
                          lVar104 = lVar104 + 8;
                        } while (lVar104 != 0);
                        uVar92 = uVar92 + (uVar78 - uVar72);
                        auVar259 = auVar152 ^ (undefined1  [16])_DAT_006524b0;
                        auVar175 = auVar171 ^ (undefined1  [16])_DAT_006524b0;
                        auVar241._0_4_ = -(uint)(auVar259._0_4_ < auVar175._0_4_);
                        auVar241._4_4_ = -(uint)(auVar259._4_4_ < auVar175._4_4_);
                        auVar241._8_4_ = -(uint)(auVar259._8_4_ < auVar175._8_4_);
                        auVar241._12_4_ = -(uint)(auVar259._12_4_ < auVar175._12_4_);
                        auVar212 = ~auVar241 & auVar171 | auVar152 & auVar241;
                        auVar153._0_8_ = auVar212._8_8_;
                        auVar153._8_4_ = auVar212._8_4_;
                        auVar153._12_4_ = auVar212._12_4_;
                        auVar259 = auVar212 ^ (undefined1  [16])_DAT_006524b0;
                        auVar175 = auVar153 ^ (undefined1  [16])_DAT_006524b0;
                        auVar209._0_4_ = -(uint)(auVar259._0_4_ < auVar175._0_4_);
                        auVar209._4_4_ = -(uint)(auVar259._4_4_ < auVar175._4_4_);
                        auVar209._8_4_ = -(uint)(auVar259._8_4_ < auVar175._8_4_);
                        auVar209._12_4_ = -(uint)(auVar259._12_4_ < auVar175._12_4_);
                        auVar175 = ~auVar209 & auVar153 | auVar212 & auVar209;
                        uVar125 = auVar175._4_4_;
                        auVar154._4_4_ = uVar125;
                        auVar154._0_4_ = uVar125;
                        auVar154._8_4_ = uVar125;
                        auVar154._12_4_ = uVar125;
                        auVar259 = auVar175 ^ (undefined1  [16])_DAT_006524b0;
                        auVar212 = auVar154 ^ (undefined1  [16])_DAT_006524b0;
                        auVar242._0_4_ = -(uint)(auVar259._0_4_ < auVar212._0_4_);
                        auVar242._4_4_ = -(uint)(auVar259._4_4_ < auVar212._4_4_);
                        auVar242._8_4_ = -(uint)(auVar259._8_4_ < auVar212._8_4_);
                        auVar242._12_4_ = -(uint)(auVar259._12_4_ < auVar212._12_4_);
                        in_XMM2 = (__pthread_internal_list)(auVar175 & auVar242);
                        in_XMM3 = ~auVar242 & auVar154 | (undefined1  [16])in_XMM2;
                        uVar57 = in_XMM3._0_4_;
                        in_XMM6 = _DAT_006524b0;
                      }
                      lVar104 = uVar59 - uVar92;
                      puVar131 = (uint *)(lVar126 + uVar92 * 0x14 + 8);
                      do {
                        if (*puVar131 < uVar57) {
                          uVar57 = *puVar131;
                        }
                        puVar131 = puVar131 + 5;
                        lVar104 = lVar104 + -1;
                      } while (lVar104 != 0);
                    }
                  }
                  else {
                    uVar57 = *(uint *)(lVar126 + 8 + (ulong)uVar87 * 0x14);
                    uVar5 = *(uint *)(lVar126 + 8 + (ulong)(uVar97 - 1) * 0x14);
                    if (uVar5 < uVar57) {
                      uVar57 = uVar5;
                    }
                  }
                }
                _uStack_248 = uVar115;
                auStack_23c._12_8_ = uVar100;
                auVar259 = hb_buffer_t::_infos_set_glyph_flags
                                     ((hb_buffer_t *)CONCAT44(uStack_274,local_278),lVar126,uVar87,
                                      uVar97,uVar57,3);
                in_XMM1.__prev = auVar259._8_8_;
                _Var144.__prev = auVar259._0_8_;
                in_XMM1.__next = extraout_XMM1_Qb_40;
                _Var144.__next = extraout_XMM0_Qb_13;
                uVar57 = (uint)_uStack_248;
                uVar100 = auStack_23c._12_8_;
                uVar107 = auStack_23c._4_8_;
                uVar120 = _uStack_260;
                uVar125 = p_Stack_200._0_4_;
                uVar123 = auStack_214._4_4_;
              }
              if (uVar87 < (uint)uVar80) {
                uVar92 = (ulong)uVar87;
                uVar78 = ~uVar92;
                if (((uint)uVar80 - uVar87 & 3) != 0) {
                  phVar103 = (hb_buffer_t *)(_uStack_240 + uVar92 * 0x14);
                  lVar126 = 0;
                  do {
                    *(uint *)phVar103 = *(uint *)phVar103 | uVar125;
                    lVar126 = lVar126 + -1;
                    phVar103 = phVar103 + 0x14;
                  } while (-lVar126 != ((ulong)((uint)uVar80 - uVar87) & 3));
                  uVar92 = uVar92 - lVar126;
                  uVar107 = auStack_23c._4_8_;
                  auStack_23c._12_8_ = uVar100;
                }
                uVar59 = uVar78 + uVar99;
                if ((pthread_mutex_t *)0x2 < uVar78 + uVar99) {
                  lVar126 = uVar99 - uVar92;
                  phVar103 = (hb_buffer_t *)(_local_58 + uVar92 * 0x14);
                  do {
                    *(uint *)(phVar103 + -0x3c) = *(uint *)(phVar103 + -0x3c) | uVar125;
                    *(uint *)(phVar103 + -0x28) = *(uint *)(phVar103 + -0x28) | uVar125;
                    *(uint *)(phVar103 + -0x14) = *(uint *)(phVar103 + -0x14) | uVar125;
                    *(uint *)phVar103 = *(uint *)phVar103 | uVar125;
                    phVar103 = phVar103 + 0x50;
                    lVar126 = lVar126 + -4;
                    uVar59 = _local_58;
                  } while (lVar126 != 0);
                }
              }
              puVar131 = (uint *)(lVar88 + 4 + uVar100 * 4);
              *puVar131 = *puVar131 | (((pthread_mutex_t *)(_uStack_258 + 0xf0))->__data).__lock;
              if (uVar57 < uVar81) {
                uVar57 = ~(uint)uVar80 + uVar81 & 3;
                uVar100 = uStack_268;
                if (uVar57 != 0) {
                  uVar59 = _uStack_240 + CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)) * 4;
                  lVar126 = 0;
                  do {
                    *(uint *)uVar59 = *(uint *)uVar59 | uVar123;
                    lVar126 = lVar126 + -1;
                    uVar59 = uVar59 + 0x14;
                  } while (-uVar57 != (int)lVar126);
                  uVar100 = uStack_268 - lVar126;
                }
                if (2 < (uVar81 - (uint)uVar80) - 2) {
                  iVar43 = uVar81 - (int)uVar100;
                  uVar59 = _local_58 + uVar100 * 0x14;
                  do {
                    *(uint *)(uVar59 + -0x3c) = *(uint *)(uVar59 + -0x3c) | uVar123;
                    (((pthread_mutex_t *)(uVar59 + -0x28))->__data).__lock =
                         (((pthread_mutex_t *)(uVar59 + -0x28))->__data).__lock | uVar123;
                    *(uint *)(uVar59 + -0x14) = *(uint *)(uVar59 + -0x14) | uVar123;
                    *(uint *)uVar59 = *(uint *)uVar59 | uVar123;
                    uVar59 = uVar59 + 0x50;
                    iVar43 = iVar43 + -4;
                  } while (iVar43 != 0);
                }
              }
              uVar80._0_4_ = uVar81 - 1;
              uVar102._4_4_ = uStack_274;
              uVar102._0_4_ = local_278;
            }
          }
          else {
            bVar137 = true;
            if (uVar87 == (uint)uVar80) {
LAB_003fafc2:
              if (((byte)*(hb_buffer_t *)(uVar102 + 0x18) & 0x40) == 0) goto LAB_003fafcd;
              uVar87 = *(uint *)&((__pthread_internal_list *)(uVar102 + 0x60))->__prev;
              if (uVar57 <= uVar87) {
                uVar87 = uVar57;
              }
              *(byte *)&((__pthread_internal_list *)(uVar102 + 0xc0))->__prev =
                   *(byte *)&((__pthread_internal_list *)(uVar102 + 0xc0))->__prev | 0x20;
              if ((uint)uVar80 < uVar87) {
                lVar126 = *(long *)uVar120;
                uVar59._4_4_ = 0;
                uVar59._0_4_ = uVar87;
                uVar92 = uVar99;
                if ((uVar87 - (uint)uVar80 & 3) != 0) {
                  pbVar119 = (byte *)(lVar126 + uVar99 * 0x14 + 4);
                  lVar104 = 0;
                  do {
                    *pbVar119 = *pbVar119 | 2;
                    lVar104 = lVar104 + -1;
                    pbVar119 = pbVar119 + 0x14;
                  } while (-lVar104 != ((ulong)(uVar87 - (uint)uVar80) & 3));
                  uVar92 = uVar99 - lVar104;
                }
                if ((hb_buffer_t *)0x2 < (hb_buffer_t *)(~uVar99 + uVar59)) {
                  lVar104 = uVar59 - uVar92;
                  pbVar119 = (byte *)(lVar126 + uVar92 * 0x14 + 0x40);
                  do {
                    pbVar119[-0x3c] = pbVar119[-0x3c] | 2;
                    pbVar119[-0x28] = pbVar119[-0x28] | 2;
                    pbVar119[-0x14] = pbVar119[-0x14] | 2;
                    *pbVar119 = *pbVar119 | 2;
                    pbVar119 = pbVar119 + 0x50;
                    lVar104 = lVar104 + -4;
                    uVar59 = (pthread_mutex_t *)0x0;
                  } while (lVar104 != 0);
                }
                uVar107 = auStack_23c._4_8_;
                _uStack_248 = uVar115;
              }
              auStack_23c._12_8_ = uVar100;
              if (!bVar137) goto LAB_003fad00;
            }
LAB_003fafd5:
            if (((byte)*(hb_buffer_t *)(uVar102 + 0x18) & 0x40) != 0) {
              uVar87 = *(uint *)&((__pthread_internal_list *)(uVar102 + 0x60))->__prev;
              if (uVar87 < uVar57) {
                uVar57 = uVar87;
              }
              *(byte *)&((__pthread_internal_list *)(uVar102 + 0xc0))->__prev =
                   *(byte *)&((__pthread_internal_list *)(uVar102 + 0xc0))->__prev | 0x20;
              if ((uint)uVar80 < uVar57) {
                uVar59 = *(undefined8 *)uVar120;
                uVar92 = ~uVar99;
                if ((uVar57 - (uint)uVar80 & 3) != 0) {
                  phVar103 = (hb_buffer_t *)(uVar59 + uVar99 * 0x14) + 4;
                  lVar126 = 0;
                  do {
                    *phVar103 = (hb_buffer_t)((byte)*phVar103 | 2);
                    lVar126 = lVar126 + -1;
                    phVar103 = phVar103 + 0x14;
                  } while (-lVar126 != ((ulong)(uVar57 - (uint)uVar80) & 3));
                  uVar99 = uVar99 - lVar126;
                }
                if (2 < uVar92 + uVar57) {
                  lVar126 = uVar57 - uVar99;
                  uVar59 = (long)(uVar59 + uVar99 * 0x14) + 0x40;
                  do {
                    *(hb_buffer_t *)(uVar59 + -0x3c) =
                         (hb_buffer_t)((byte)*(hb_buffer_t *)(uVar59 + -0x3c) | 2);
                    ((pthread_mutex_t *)(uVar59 + -0x28))->__size[0] =
                         ((pthread_mutex_t *)(uVar59 + -0x28))->__size[0] | 2;
                    *(hb_buffer_t *)(uVar59 + -0x14) =
                         (hb_buffer_t)((byte)*(hb_buffer_t *)(uVar59 + -0x14) | 2);
                    *(byte *)uVar59 = (byte)*(hb_buffer_t *)uVar59 | 2;
                    uVar59 = uVar59 + 0x50;
                    lVar126 = lVar126 + -4;
                  } while (lVar126 != 0);
                }
              }
            }
          }
        }
LAB_003fad00:
        uVar80._0_4_ = (uint)uVar80 + 1;
      } while ((uint)uVar80 < (uint)uVar127);
    }
  }
  uVar107 = _uStack_258;
  p_Var58 = ((__pthread_internal_list *)(_uStack_258 + 0x80))->__prev[4].__prev;
  if (p_Var58 != (__pthread_internal_list *)0x0) {
    auVar259 = (*(code *)p_Var58)(_uStack_228,uVar102,_uStack_280);
    in_XMM1.__prev = auVar259._8_8_;
    _Var144.__prev = auVar259._0_8_;
    in_XMM1.__next = extraout_XMM1_Qb_30;
    _Var144.__next = extraout_XMM0_Qb_12;
  }
  lVar88 = CONCAT44(auStack_214._0_4_,uStack_218);
  if ((int)uStack_220 != 0) {
    uVar99 = 0;
    do {
      lVar126 = uVar99 * 0x10;
      uVar127._0_4_ = *(uint *)(lVar88 + 8 + lVar126);
      if ((((uint)uVar127 != 0) || (*(int *)(lVar88 + 0xc + lVar126) != -1)) &&
         (0 < *(int *)(uVar107 + 0x9c))) {
        uVar59 = *(undefined8 *)&((pthread_mutex_t *)(uVar107 + 0xa0))->__data;
        iVar98 = *(int *)(uVar107 + 0x9c) + -1;
        iVar43 = 0;
        do {
          while( true ) {
            uVar57 = (uint)(iVar98 + iVar43) >> 1;
            uVar92 = (ulong)uVar57;
            uVar80._0_4_ = *(uint *)(uVar59 + uVar92 * 0x24);
            if (*(uint *)(lVar88 + lVar126) < (uint)uVar80) break;
            if (*(uint *)(lVar88 + lVar126) <= (uint)uVar80) {
              uVar80._0_4_ = *(uint *)((hb_buffer_t *)(uVar59 + 0x18) + uVar92 * 0x24);
              if ((uint)uVar80 != 0) {
                iVar43 = *(int *)(lVar88 + 4 + lVar126);
                hVar55 = ((hb_buffer_t *)(uVar59 + 0x14))[uVar92 * 0x24];
                uVar59._0_1_ = hVar55;
                uVar57 = *(uint *)_uStack_250;
                if ((ulong)uVar57 != 0) {
                  uVar87 = *(uint *)(lVar88 + 0xc + lVar126);
                  uVar59._4_4_ = 0;
                  uVar59._0_4_ = uVar87;
                  lVar126 = *(long *)_uStack_260;
                  lVar104 = 0;
                  do {
                    uVar81 = *(uint *)(lVar126 + 8 + lVar104);
                    if (((uint)uVar127 <= uVar81) && (uVar81 < uVar87)) {
                      *(uint *)(lVar126 + 4 + lVar104) =
                           *(uint *)(lVar126 + 4 + lVar104) & ~(uint)uVar80 |
                           iVar43 << ((byte)hVar55 & 0x1f) & (uint)uVar80;
                    }
                    lVar104 = lVar104 + 0x14;
                  } while ((ulong)uVar57 * 0x14 != lVar104);
                }
              }
              goto LAB_003f93d0;
            }
            iVar43 = uVar57 + 1;
            if (iVar98 < iVar43) goto LAB_003f93d0;
          }
          iVar98 = uVar57 - 1;
        } while (iVar43 <= iVar98);
      }
LAB_003f93d0:
      uVar99 = uVar99 + 1;
    } while (uVar99 != (uStack_220 & 0xffffffff));
  }
  if (((byte)*(hb_buffer_t *)(uVar107 + 0x108) & 0x80) == 0) {
LAB_003f94d3:
    uVar127._0_4_ = *(uint *)_uStack_250;
    if ((ulong)(uint)uVar127 != 0) {
      lVar88 = *(long *)_uStack_260;
      if ((ulong)(uint)uVar127 - 1 < 3) {
        uVar99 = 0;
      }
      else {
        puVar49 = (undefined4 *)(lVar88 + 0x48);
        uVar99 = 0;
        do {
          puVar49[-0x12] = puVar49[-0xf];
          puVar49[-0xd] = puVar49[-10];
          puVar49[-8] = puVar49[-5];
          puVar49[-3] = *puVar49;
          uVar99 = uVar99 + 4;
          puVar49 = puVar49 + 0x14;
        } while (((uint)uVar127 & 0xfffffffc) != uVar99);
      }
      uVar59 = (pthread_mutex_t *)0x0;
      if ((ulong)((uint)uVar127 & 3) != 0) {
        lVar88 = lVar88 + uVar99 * 0x14;
        uVar59 = (ulong)((uint)uVar127 & 3) * 0x14;
        lVar126 = 0;
        do {
          *(undefined4 *)(lVar126 + lVar88) = *(undefined4 *)(lVar126 + 0xc + lVar88);
          lVar126 = lVar126 + 0x14;
        } while (uVar59 != lVar126);
      }
    }
  }
  else {
    uVar99 = (ulong)*(uint *)_uStack_250;
    uVar59 = (pthread_mutex_t *)0x0;
    if (uVar99 != 0) {
      lVar88 = *(long *)_uStack_260;
      uVar59 = uVar99 * 4;
      lVar126 = 0;
      do {
        uVar56 = *(ushort *)(lVar88 + 0x10 + lVar126);
        if ((uVar56 & 0x1f) == 0xc) {
          uVar75 = uVar56 >> 8;
          if (0xc7ff < uVar56) goto _hb_ot_shape_switchD_003fd3df_caseD_0;
          uVar127._0_4_ = *(uint *)(lVar88 + lVar126);
          if (((uint)uVar127 & 0xffffff00) == 0xe00) {
            if (uVar56 < 0x100) {
              uVar105 = 0;
              switch((uint)uVar127) {
              case 0xe31:
              case 0xe34:
              case 0xe35:
              case 0xe36:
              case 0xe37:
              case 0xe47:
              case 0xe4c:
              case 0xe4d:
              case 0xe4e:
                uVar105 = 0xe8;
                break;
              case 0xeb1:
              case 0xeb4:
              case 0xeb5:
              case 0xeb6:
              case 0xeb7:
              case 0xebb:
              case 0xecc:
              case 0xecd:
                uVar105 = 0xe6;
                break;
              case 0xebc:
                uVar105 = 0xdc;
              }
            }
            else {
              uVar105 = 0xde;
              if ((uint)uVar127 != 0xe3a) goto LAB_003fd3c5;
            }
_hb_ot_shape_switchD_003fd3df_caseD_1:
            uVar75 = uVar105;
          }
          else {
LAB_003fd3c5:
            uVar75 = 0xdc;
            uVar105 = uVar56 >> 8;
            switch((uVar56 >> 8) + 0x7f & 0xff) {
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
              uVar75 = 0xe6;
              break;
            case 0x82:
              uVar75 = 0xde;
              break;
            case 0x89:
            case 0xea:
              uVar75 = 0xe8;
              break;
            case 0x8a:
            case 0x8d:
              uVar75 = 0xe4;
              break;
            case 0x8c:
              uVar75 = 0xd6;
            }
          }
_hb_ot_shape_switchD_003fd3df_caseD_0:
          uVar59 = (ulong)uVar56 & 0xff;
          *(ushort *)(lVar88 + 0x10 + lVar126) = uVar75 << 8 | (ushort)uVar59;
        }
        lVar126 = lVar126 + 0x14;
      } while (uVar99 * 0x14 != lVar126);
      goto LAB_003f94d3;
    }
  }
  *(undefined4 *)&((__pthread_internal_list *)(uVar102 + 0x30))->__prev = 2;
  *(byte *)(uVar102 + 0xb8) = (byte)*(hb_buffer_t *)(uVar102 + 0xb8) & 0xf0 | 7;
  p_Var58 = *(__pthread_internal_list **)(_uStack_280 + 0x20);
  p_Var89 = p_Var58[0x12].__next;
  uVar107 = _uStack_260;
  while (_uStack_260 = uVar107, p_Var89 == (__pthread_internal_list *)0x0) {
    p_Var113 = p_Var58[6].__next;
    if (p_Var113 == (__pthread_internal_list *)0x0) {
LAB_003fdb8d:
      p_Var89 = (__pthread_internal_list *)&_hb_NullPool;
      break;
    }
    p_Var89 = calloc(1,0x218);
    if (p_Var89 == (__pthread_internal_list *)0x0) {
      LOCK();
      bVar137 = p_Var58[0x12].__next == (__pthread_internal_list *)0x0;
      if (bVar137) {
        p_Var58[0x12].__next = (__pthread_internal_list *)&_hb_NullPool;
      }
      UNLOCK();
      _Var144 = extraout_XMM0_25;
      if (bVar137) goto LAB_003fdb8d;
    }
    else {
      auVar259 = OT::GDEF::accelerator_t::accelerator_t
                           ((accelerator_t *)p_Var89,(long)p_Var113,extraout_RDX_18,uVar59,
                            (GDEFVersion1_2<OT::Layout::SmallTypes> *)uVar107);
      in_XMM1.__prev = auVar259._8_8_;
      _Var144.__prev = auVar259._0_8_;
      in_XMM1.__next = extraout_XMM1_Qb_51;
      _Var144.__next = extraout_XMM0_Qb_18;
      LOCK();
      bVar137 = p_Var58[0x12].__next == (__pthread_internal_list *)0x0;
      if (bVar137) {
        p_Var58[0x12].__next = p_Var89;
      }
      UNLOCK();
      if (bVar137) break;
      OT::GDEF::accelerator_t::~accelerator_t((accelerator_t *)p_Var89);
      in_XMM1.__next = extraout_XMM1_Qb_52;
      in_XMM1.__prev = extraout_XMM1_Qa_43;
      free(p_Var89);
      _Var144 = extraout_XMM0_26;
    }
    uVar107 = _uStack_260;
    p_Var89 = p_Var58[0x12].__next;
  }
  uVar127._0_4_ = *(uint *)_uStack_250;
  uVar107 = _uStack_260;
  if ((ulong)(uint)uVar127 != 0) {
    lVar88 = *(long *)_uStack_260;
    lVar126 = 0;
    do {
      uVar80._0_4_ = *(uint *)(lVar88 + lVar126);
      sVar4 = *(short *)((long)&p_Var89[1].__next + (ulong)((uint)uVar80 & 0xff) * 2);
      if ((sVar4 == -1) || ((uint)(int)sVar4 >> 3 != (uint)uVar80 >> 8)) {
        p_Var58 = p_Var89->__prev;
        p_Var113 = (__pthread_internal_list *)&_hb_NullPool;
        if (p_Var58 == (__pthread_internal_list *)0x0) {
          p_Var58 = (__pthread_internal_list *)&_hb_NullPool;
        }
        if (3 < *(uint *)&p_Var58[1].__next) {
          p_Var113 = p_Var58[1].__prev;
        }
        uVar57 = OT::GDEF::get_glyph_props((GDEF *)p_Var113,(uint)uVar80);
        uVar107 = _uStack_260;
        _Var144 = extraout_XMM0_22;
        if (((p_Var89->__prev != (__pthread_internal_list *)0x0) && ((uint)uVar80 < 0x200000)) &&
           (uVar57 < 8)) {
          *(ushort *)((long)&p_Var89[1].__next + (ulong)((uint)uVar80 & 0xff) * 2) =
               (ushort)uVar57 | (ushort)((uint)uVar80 >> 5) & 0xfff8;
        }
      }
      else {
        uVar57 = (int)sVar4 & 7;
      }
      *(short *)(lVar88 + 0xc + lVar126) = (short)uVar57;
      *(undefined1 *)(lVar88 + 0xe + lVar126) = 0;
      lVar126 = lVar126 + 0x14;
    } while ((ulong)(uint)uVar127 * 0x14 != lVar126);
  }
  uVar120 = _uStack_258;
  auVar264._8_8_ = in_XMM1.__prev;
  auVar264._0_8_ = _Var144.__prev;
  uVar56 = *(ushort *)(_uStack_258 + 0x108);
  if (((uVar56 & 0x40) != 0) && (uVar127._0_4_ = *(uint *)_uStack_250, (ulong)(uint)uVar127 != 0)) {
    lVar88 = *(long *)uVar107;
    lVar126 = 0;
    do {
      uVar56 = *(ushort *)(lVar88 + 0x10 + lVar126);
      if (((uVar56 & 0x1f) != 0xc) ||
         ((uVar96 = 8, (uVar56 & 0x20) != 0 && ((*(byte *)(lVar88 + 0xc + lVar126) & 0x10) == 0))))
      {
        uVar96 = 2;
      }
      *(undefined2 *)(lVar88 + 0xc + lVar126) = uVar96;
      lVar126 = lVar126 + 0x14;
    } while ((ulong)(uint)uVar127 * 0x14 != lVar126);
    uVar56 = *(ushort *)(_uStack_258 + 0x108);
  }
  phVar103 = (hb_buffer_t *)CONCAT44(uStack_274,local_278);
  if ((uVar56 & 0x2000) == 0) {
    p_Var58 = *(__pthread_internal_list **)(_uStack_280 + 0x20);
    uStack_268 = p_Var58[0x13].__prev;
    while ((pthread_mutex_t *)uStack_268 == (pthread_mutex_t *)0x0) {
      uStack_268 = 0;
      p_Var116 = in_XMM1.__prev;
      p_Var113 = _Var144.__prev;
      p_Var89 = p_Var58[6].__next;
      if (p_Var89 == (__pthread_internal_list *)0x0) {
LAB_003fe723:
        auVar264._8_8_ = p_Var116;
        auVar264._0_8_ = p_Var113;
        uStack_268 = &_hb_NullPool;
        break;
      }
      uVar107 = calloc(1,0x18);
      p_Var116 = in_XMM1.__prev;
      p_Var113 = extraout_XMM0_27.__prev;
      if ((pthread_mutex_t *)uVar107 == (pthread_mutex_t *)0x0) {
        LOCK();
        bVar137 = p_Var58[0x13].__prev == (__pthread_internal_list *)0x0;
        if (bVar137) {
          p_Var58[0x13].__prev = (__pthread_internal_list *)&_hb_NullPool;
        }
        UNLOCK();
        _Var144 = extraout_XMM0_27;
        if (bVar137) {
          phVar103 = (hb_buffer_t *)CONCAT44(uStack_274,local_278);
          goto LAB_003fe723;
        }
      }
      else {
        auVar264 = OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::accelerator_t
                             ((accelerator_t<OT::Layout::GSUB> *)uVar107,(long)p_Var89);
        LOCK();
        bVar137 = p_Var58[0x13].__prev == (__pthread_internal_list *)0x0;
        if (bVar137) {
          p_Var58[0x13].__prev = (__pthread_internal_list *)uVar107;
        }
        UNLOCK();
        uStack_268 = uVar107;
        if (bVar137) break;
        OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::~accelerator_t
                  ((accelerator_t<OT::Layout::GSUB> *)uVar107);
        in_XMM1.__next = extraout_XMM1_Qb_53;
        in_XMM1.__prev = extraout_XMM1_Qa_44;
        free((void *)uVar107);
        _Var144 = extraout_XMM0_28;
      }
      auVar264._8_8_ = in_XMM1.__prev;
      auVar264._0_8_ = _Var144.__prev;
      phVar103 = (hb_buffer_t *)CONCAT44(uStack_274,local_278);
      uStack_268 = p_Var58[0x13].__prev;
    }
    uVar107 = _uStack_258;
    if (*(long *)(phVar103 + 0xd0) == 0) {
LAB_003f976d:
      uVar120 = uStack_268;
      auVar260 = OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                           ((hb_ot_apply_context_t *)&uStack_1b8,0,_uStack_280,
                            (undefined4 *)phVar103,
                            *(GDEFVersion1_2<OT::Layout::SmallTypes> **)uStack_268);
      uStack_d0 = OT::Layout::GSUB_impl::SubstLookup::
                  dispatch_recurse_func<OT::hb_ot_apply_context_t>;
      ppVar129 = (pthread_mutex_t *)(ulong)*(uint *)(uVar107 + 0xcc);
      if (*(uint *)(uVar107 + 0xcc) != 0) {
        uVar100 = ((pthread_mutex_t *)0x0)->__size;
        uVar99 = 0;
        do {
          if ((ulong)uVar100 < ppVar129) {
            uVar80 = ((__pthread_internal_list *)(uVar107 + 0xd0))->__prev + uVar100;
            uVar127._0_4_ = *(uint *)uVar80;
          }
          else {
            uVar80 = &_hb_NullPool;
            uVar127._0_4_ = _hb_NullPool;
          }
          if ((uint)uVar99 < (uint)uVar127) {
            uVar99 = uVar99 & 0xffffffff;
            auStack_23c._4_8_ = uVar100;
            auStack_23c._12_8_ = uVar80;
            do {
              if (uVar99 < *(uint *)(uVar107 + 0xac)) {
                puVar132 = (ushort *)
                           ((long)&((__pthread_internal_list *)(uVar107 + 0xb0))->__prev->__prev +
                           uVar99 * 0xc);
              }
              else {
                puVar132 = (ushort *)&_hb_NullPool;
              }
              uStack_270 = *puVar132;
              uStack_26e = 0;
              uStack_26c = 0;
              if ((uint)uStack_270 < *(uint *)(uVar120 + 8)) {
                while( true ) {
                  uVar107 = auVar260._8_8_;
                  p_Var58 = (&((__pthread_internal_list *)(uVar120 + 0x10))->__prev->__prev)
                            [CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270))];
                  if (p_Var58 != (__pthread_internal_list *)0x0) break;
                  puVar49 = *(undefined4 **)uVar120;
                  if (puVar49 == (undefined4 *)0x0) {
                    puVar49 = &_hb_NullPool;
                  }
                  psVar64 = (short *)&_hb_NullPool;
                  if (3 < (uint)puVar49[6]) {
                    psVar64 = *(short **)(puVar49 + 4);
                  }
                  puVar114 = (ushort *)&_hb_NullPool;
                  if (*psVar64 == 0x100) {
                    uVar56 = psVar64[4];
                    puVar50 = (ushort *)&_hb_NullPool;
                    if (uVar56 != 0) {
                      puVar50 = (ushort *)
                                ((long)psVar64 + (ulong)(ushort)(uVar56 << 8 | uVar56 >> 8));
                    }
                    puVar114 = (ushort *)&_hb_NullPool;
                    if (uStack_270 < (ushort)(*puVar50 << 8 | *puVar50 >> 8)) {
                      uVar56 = puVar50[CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)) + 1];
                      puVar114 = (ushort *)&_hb_NullPool;
                      if (uVar56 != 0) {
                        puVar114 = (ushort *)
                                   ((long)puVar50 + (ulong)(ushort)(uVar56 << 8 | uVar56 >> 8));
                      }
                    }
                  }
                  p_Var58 = (__pthread_internal_list *)
                            OT::hb_ot_layout_lookup_accelerator_t::
                            create<OT::Layout::GSUB_impl::SubstLookup>(puVar114);
                  auVar260._8_8_ = uVar107;
                  auVar260._0_8_ = extraout_XMM0_Qa_16;
                  if (p_Var58 == (__pthread_internal_list *)0x0) goto LAB_003f9820;
                  pp_Var3 = &((__pthread_internal_list *)(uVar120 + 0x10))->__prev->__prev +
                            CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270));
                  LOCK();
                  bVar137 = *pp_Var3 == (__pthread_internal_list *)0x0;
                  if (bVar137) {
                    *pp_Var3 = p_Var58;
                  }
                  UNLOCK();
                  if (bVar137) break;
                  free(p_Var58);
                  auVar260._8_8_ = uVar107;
                  auVar260._0_8_ = extraout_XMM0_Qa_17;
                }
                uVar107 = uStack_268;
                uVar100 = auVar260._8_8_;
                if (*(long *)(CONCAT44(uStack_274,local_278) + 0xd0) != 0) {
                  uVar127._0_4_ = *(uint *)(puVar132 + 4);
                  ppStackY_2a0 = (pthread_mutex_t *)0x3f997c;
                  bVar137 = hb_buffer_t::message
                                      (auVar260._0_8_,uVar100,in_XMM2.__prev,in_XMM3._0_8_,
                                       in_XMM4.__prev,in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,
                                       (hb_buffer_t *)CONCAT44(uStack_274,local_278),_uStack_280,
                                       "start lookup %u feature \'%c%c%c%c\'",
                                       CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)),
                                       (ulong)((uint)uVar127 >> 0x18),
                                       (ulong)((uint)uVar127 >> 0x10 & 0xff),
                                       (char)((uint)uVar127 >> 8));
                  auVar260._8_8_ = uVar100;
                  auVar260._0_8_ = extraout_XMM0_Qa_18;
                  uVar120 = uVar107;
                  if (!bVar137) goto LAB_003f9820;
                }
                uVar100 = uStack_118;
                auVar259 = _auStack_1a0;
                uVar107 = uStack_268;
                uVar80 = auVar260._8_8_;
                if (((((ulong)p_Var58->__prev & local_a8) == 0) ||
                    (((ulong)p_Var58->__next & local_a0) == 0)) ||
                   (((ulong)aiStack_98 & (ulong)p_Var58[1].__prev) == 0)) {
                  if (*(long *)(CONCAT44(uStack_274,local_278) + 0xd0) != 0) {
                    uVar127._0_4_ = *(uint *)(puVar132 + 4);
                    ppStackY_2a0 = (pthread_mutex_t *)0x3f9d10;
                    hb_buffer_t::message
                              (auVar260._0_8_,uVar80,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,
                               in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,
                               (hb_buffer_t *)CONCAT44(uStack_274,local_278),_uStack_280,
                               "skipped lookup %u feature \'%c%c%c%c\' because no glyph matches",
                               CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)),
                               (ulong)((uint)uVar127 >> 0x18),(ulong)((uint)uVar127 >> 0x10 & 0xff),
                               (char)((uint)uVar127 >> 8));
                    auVar260._8_8_ = uVar80;
                    auVar260._0_8_ = extraout_XMM0_Qa_19;
                    uVar120 = uVar107;
                    goto LAB_003f9d14;
                  }
                }
                else {
                  uStack_88 = (hb_buffer_t *)
                              CONCAT44(uStack_88._4_4_,CONCAT22(uStack_26e,uStack_270));
                  iVar43 = *(int *)(puVar132 + 2);
                  uStack_90 = (pthread_mutex_t *)CONCAT44(iVar43,(undefined4)uStack_90);
                  uStack_70 = 0xffffffff;
                  bStack_7a = (byte)puVar132[1] >> 1 & 1;
                  bStack_7b = (byte)puVar132[1] & 1;
                  bStack_78 = (byte)puVar132[1] >> 2 & 1;
                  bStack_79 = (byte)puVar132[1] >> 3 & 1;
                  puVar49 = *(undefined4 **)uVar120;
                  if (puVar49 == (undefined4 *)0x0) {
                    puVar49 = &_hb_NullPool;
                  }
                  psVar64 = (short *)&_hb_NullPool;
                  if (3 < (uint)puVar49[6]) {
                    psVar64 = *(short **)(puVar49 + 4);
                  }
                  psVar121 = (short *)&_hb_NullPool;
                  if (*psVar64 == 0x100) {
                    uVar56 = psVar64[4];
                    puVar114 = (ushort *)&_hb_NullPool;
                    if (uVar56 != 0) {
                      puVar114 = (ushort *)
                                 ((long)psVar64 + (ulong)(ushort)(uVar56 << 8 | uVar56 >> 8));
                    }
                    psVar121 = (short *)&_hb_NullPool;
                    if (uStack_270 < (ushort)(*puVar114 << 8 | *puVar114 >> 8)) {
                      uVar56 = puVar114[CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)) + 1];
                      psVar121 = (short *)&_hb_NullPool;
                      if (uVar56 != 0) {
                        psVar121 = (short *)((long)puVar114 +
                                            (ulong)(ushort)(uVar56 << 8 | uVar56 >> 8));
                      }
                    }
                  }
                  uVar127._0_4_ = *(uint *)&((__pthread_internal_list *)(uStack_118 + 0x60))->__prev
                  ;
                  if (((uint)uVar127 == 0) || (iVar43 == 0)) {
LAB_003f9d14:
                    lVar88 = *(long *)(CONCAT44(uStack_274,local_278) + 0xd0);
                    uVar107 = uStack_268;
                  }
                  else {
                    uVar75 = psVar121[2] << 8 | (ushort)psVar121[2] >> 8;
                    uVar56 = (ushort)psVar121[1] >> 8;
                    uVar105 = psVar121[1] << 8 | uVar56;
                    uStack_160 = (uint)uVar105;
                    if ((uVar56 & 0x10) != 0) {
                      uStack_160 = CONCAT22(psVar121[(ulong)uVar75 + 3] << 8 |
                                            (ushort)psVar121[(ulong)uVar75 + 3] >> 8,uVar105);
                    }
                    phStack_168 = (hb_ot_apply_context_t *)&uStack_1b8;
                    uStack_88 = (hb_buffer_t *)CONCAT44(uStack_160,CONCAT22(uStack_26e,uStack_270));
                    cStack_1a8 = (char)phStack_168;
                    cStack_1a7 = (char)((ulong)phStack_168 >> 8);
                    cStack_1a6 = (char)((ulong)phStack_168 >> 0x10);
                    cStack_1a5 = (char)((ulong)phStack_168 >> 0x18);
                    uStack_1a4 = (uint)((ulong)phStack_168 >> 0x20);
                    auStack_190 = (undefined1  [16])0x0;
                    _iStack_180 = (pthread_mutex_t *)0x0;
                    auStack_1a0._0_4_ = uStack_160;
                    bStack_155 = bStack_79;
                    if (iStack_130 != 0) {
                      bStack_155 = 0;
                    }
                    uStack_156 = iStack_130 == 1;
                    auStack_1a0[8] = uStack_156;
                    bStack_197 = bStack_7a;
                    _bStack_195 = auVar259._11_5_;
                    bStack_196 = (bool)uStack_156;
                    auStack_1a0._4_4_ = iVar43;
                    bStack_195 = bStack_155;
                    uStack_193 = auVar259._13_3_;
                    cStack_194 = 0;
                    auStack_150 = (undefined1  [16])0x0;
                    uStack_140 = 0;
                    uStack_158 = bStack_7b != 0 || (bool)uStack_156;
                    uStack_157 = 1;
                    uStack_15c = 0xffffffff;
                    uStack_154 = 0;
                    sVar4 = *psVar121;
                    uStack_178 = (uint)uVar127;
                    uStack_138 = (uint)uVar127;
                    if (sVar4 == 0x700) {
                      puVar114 = (ushort *)&_hb_NullPool;
                      if (psVar121[2] != 0) {
                        puVar114 = (ushort *)(psVar121 + 3);
                      }
                      uVar56 = *puVar114;
                      psVar64 = (short *)&_hb_NullPool;
                      if (uVar56 != 0) {
                        psVar64 = (short *)((long)psVar121 +
                                           (ulong)(ushort)(uVar56 << 8 | uVar56 >> 8));
                      }
                      if (*psVar64 == 0x100) {
                        sVar4 = psVar64[1];
                        goto joined_r0x003f9e77;
                      }
                    }
                    else {
joined_r0x003f9e77:
                      if (sVar4 == 0x800) {
                        *(int *)(uStack_118 + 0x5c) =
                             *(int *)&((__pthread_internal_list *)(uStack_118 + 0x60))->__prev + -1;
                        auVar260 = apply_backward(phStack_168,(ulong *)p_Var58,(uint)uVar75);
                        uVar120 = uVar107;
                        goto LAB_003f9d14;
                      }
                    }
                    *(undefined2 *)(uStack_118 + 0x5a) = 1;
                    *(undefined4 *)(uStack_118 + 100) = 0;
                    ((pthread_mutex_t *)(uStack_118 + 0x78))->__align =
                         (long)((__pthread_internal_list *)(uStack_118 + 0x70))->__prev;
                    *(undefined4 *)(uStack_118 + 0x5c) = 0;
                    auVar260 = apply_forward(phStack_168,(ulong *)p_Var58,(uint)uVar75);
                    uVar107 = auVar260._8_8_;
                    if (*(char *)(uVar100 + 0x58) != '\0') {
                      if (*(char *)(uVar100 + 0x5a) != '\0') {
                        iVar43 = *(int *)(uVar100 + 0x5c);
                        uVar127._0_4_ =
                             *(int *)&((__pthread_internal_list *)(uVar100 + 0x60))->__prev - iVar43
                        ;
                        p_Var89 = (__pthread_internal_list *)
                                  ((pthread_mutex_t *)(uVar100 + 0x78))->__align;
                        p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
                        if ((p_Var89 != p_Var58) || (*(int *)(uVar100 + 100) != iVar43)) {
                          uVar80._0_4_ = *(int *)(uVar100 + 100) + (uint)uVar127;
                          if (((uint)uVar80 == 0) || ((uint)uVar80 < *(uint *)(uVar100 + 0x68))) {
                            if (p_Var89 == p_Var58) {
LAB_003f9c76:
                              uVar80._0_4_ = *(uint *)(uVar100 + 100);
                              if (*(int *)(uVar100 + 0x5c) + (uint)uVar127 <
                                  (uint)uVar80 + (uint)uVar127) {
                                p_Var89 = ((__pthread_internal_list *)(uVar100 + 0x80))->__prev;
                                ((pthread_mutex_t *)(uVar100 + 0x78))->__align = (long)p_Var89;
                                if ((ulong)(uint)uVar80 != 0) {
                                  memcpy(p_Var89,p_Var58,(ulong)(uint)uVar80 * 0x14);
                                  p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
                                  p_Var89 = (__pthread_internal_list *)
                                            ((pthread_mutex_t *)(uVar100 + 0x78))->__align;
                                }
                              }
                              else {
                                p_Var89 = p_Var58;
                              }
                            }
                          }
                          else {
                            uVar120 = hb_buffer_t::enlarge((hb_buffer_t *)uVar100,(uint)uVar80);
                            auVar260._8_8_ = uVar107;
                            auVar260._0_8_ = extraout_XMM0_Qa_22;
                            if ((char)uVar120 == '\0') goto LAB_003f9d8a;
                            p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
                            p_Var89 = (__pthread_internal_list *)
                                      ((pthread_mutex_t *)(uVar100 + 0x78))->__align;
                            if (p_Var89 == p_Var58) goto LAB_003f9c76;
                          }
                          memmove((void *)((long)p_Var89 + (ulong)*(uint *)(uVar100 + 100) * 0x14),
                                  (void *)((long)p_Var58 + (ulong)*(uint *)(uVar100 + 0x5c) * 0x14),
                                  (ulong)(uint)uVar127 * 0x14);
                          auVar260._8_8_ = uVar107;
                          auVar260._0_8_ = extraout_XMM0_Qa_20;
                          iVar43 = *(int *)(uVar100 + 100);
                        }
                        *(uint *)(uVar100 + 100) = iVar43 + (uint)uVar127;
                      }
                      p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
                      p_Var89 = (__pthread_internal_list *)
                                ((pthread_mutex_t *)(uVar100 + 0x78))->__align;
                      if (p_Var89 != p_Var58) {
                        ((__pthread_internal_list *)(uVar100 + 0x80))->__prev = p_Var58;
                        ((__pthread_internal_list *)(uVar100 + 0x70))->__prev = p_Var89;
                      }
                      *(undefined4 *)&((__pthread_internal_list *)(uVar100 + 0x60))->__prev =
                           *(undefined4 *)(uVar100 + 100);
                    }
LAB_003f9d8a:
                    *(undefined1 *)(uVar100 + 0x5a) = 0;
                    *(undefined4 *)(uVar100 + 100) = 0;
                    ((pthread_mutex_t *)(uVar100 + 0x78))->__align =
                         (long)((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
                    *(undefined4 *)(uVar100 + 0x5c) = 0;
                    lVar88 = *(long *)(CONCAT44(uStack_274,local_278) + 0xd0);
                    uVar120 = uStack_268;
                    uVar107 = uStack_268;
                  }
                  uStack_268 = uVar107;
                  if (lVar88 != 0) {
                    uVar120 = auVar260._8_8_;
                    uVar127._0_4_ = *(uint *)(puVar132 + 4);
                    ppStackY_2a0 = (pthread_mutex_t *)0x3f9e01;
                    hb_buffer_t::message
                              (auVar260._0_8_,uVar120,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,
                               in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,
                               (hb_buffer_t *)CONCAT44(uStack_274,local_278),_uStack_280,
                               "end lookup %u feature \'%c%c%c%c\'",
                               CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)),
                               (ulong)((uint)uVar127 >> 0x18),(ulong)((uint)uVar127 >> 0x10 & 0xff),
                               (char)((uint)uVar127 >> 8));
                    auVar260._8_8_ = uVar120;
                    auVar260._0_8_ = extraout_XMM0_Qa_21;
                    uVar120 = uVar107;
                  }
                }
              }
LAB_003f9820:
              uVar99 = uVar99 + 1;
              uVar107 = _uStack_258;
            } while (uVar99 < *(uint *)auStack_23c._12_8_);
            uVar80 = auStack_23c._12_8_;
            uVar100 = auStack_23c._4_8_;
          }
          if (*(code **)(uVar80 + 8) != (code *)0x0) {
            cVar42 = (**(code **)(uVar80 + 8))
                               (_uStack_228,_uStack_280,CONCAT44(uStack_274,local_278));
            auVar31._8_8_ = extraout_XMM1_Qa_26;
            auVar31._0_8_ = extraout_XMM0_Qa_23;
            auVar260._8_8_ = extraout_XMM1_Qa_26;
            auVar260._0_8_ = extraout_XMM0_Qa_23;
            if (cVar42 != '\0') {
              uVar127._0_4_ = *(uint *)_uStack_250;
              if ((uint)uVar127 == 0) {
                local_a8 = (pthread_mutex_t *)0x0;
                local_a0 = 0;
                aiStack_98 = (int  [2])0x0;
              }
              else {
                puVar131 = *(uint **)_uStack_260;
                uVar80._0_4_ = (uint)uVar127 - 1;
                puVar65 = puVar131;
                if ((uint)uVar80 < 3) {
                  local_a8 = (pthread_mutex_t *)0x0;
                }
                else {
                  uVar57 = (uint)uVar127 & 0xfffffffc;
                  local_a8 = (pthread_mutex_t *)0x0;
                  do {
                    local_a8 = local_a8 | 1L << ((ulong)(*puVar65 >> 4) & 0x3f) |
                               1L << ((ulong)(puVar65[5] >> 4) & 0x3f) |
                               1L << ((ulong)(puVar65[10] >> 4) & 0x3f) |
                               1L << ((ulong)(puVar65[0xf] >> 4) & 0x3f);
                    puVar65 = puVar65 + 0x14;
                    uVar57 = uVar57 - 4;
                  } while (uVar57 != 0);
                }
                if (((uint)uVar127 & 3) != 0) {
                  lVar88 = 0;
                  do {
                    local_a8 = local_a8 |
                               1L << ((ulong)(*(uint *)((long)puVar65 + lVar88) >> 4) & 0x3f);
                    lVar88 = lVar88 + 0x14;
                  } while (((uint)uVar127 & 3) * 0x14 != (int)lVar88);
                }
                puVar65 = puVar131;
                if ((uint)uVar80 < 3) {
                  local_a0 = 0;
                }
                else {
                  uVar57 = (uint)uVar127 & 0xfffffffc;
                  local_a0 = 0;
                  do {
                    local_a0 = local_a0 | 1L << ((ulong)(byte)*puVar65 & 0x3f) |
                               1L << ((ulong)(byte)puVar65[5] & 0x3f) |
                               1L << ((ulong)(byte)puVar65[10] & 0x3f) |
                               1L << ((ulong)(byte)puVar65[0xf] & 0x3f);
                    puVar65 = puVar65 + 0x14;
                    uVar57 = uVar57 - 4;
                  } while (uVar57 != 0);
                }
                if (((uint)uVar127 & 3) != 0) {
                  lVar88 = 0;
                  do {
                    local_a0 = local_a0 | 1L << ((ulong)*(byte *)((long)puVar65 + lVar88) & 0x3f);
                    lVar88 = lVar88 + 0x14;
                  } while (((uint)uVar127 & 3) * 0x14 != (int)lVar88);
                }
                if ((uint)uVar80 < 3) {
                  aiStack_98 = (int  [2])0x0;
                }
                else {
                  uVar80._0_4_ = (uint)uVar127 & 0xfffffffc;
                  aiStack_98 = (int  [2])0x0;
                  do {
                    aiStack_98 = (int  [2])
                                 ((ulong)aiStack_98 | 1L << ((ulong)(*puVar131 >> 9) & 0x3f) |
                                  1L << ((ulong)(puVar131[5] >> 9) & 0x3f) |
                                  1L << ((ulong)(puVar131[10] >> 9) & 0x3f) |
                                 1L << ((ulong)(puVar131[0xf] >> 9) & 0x3f));
                    puVar131 = puVar131 + 0x14;
                    uVar80._0_4_ = (uint)uVar80 - 4;
                  } while ((uint)uVar80 != 0);
                }
                if (((uint)uVar127 & 3) != 0) {
                  lVar88 = 0;
                  do {
                    aiStack_98 = (int  [2])
                                 ((ulong)aiStack_98 |
                                 1L << ((ulong)(*(uint *)((long)puVar131 + lVar88) >> 9) & 0x3f));
                    lVar88 = lVar88 + 0x14;
                  } while (((uint)uVar127 & 3) * 0x14 != (int)lVar88);
                }
                uVar120 = uStack_268;
              }
              auVar260 = auVar31;
            }
          }
          uVar100 = uVar100 + 1;
          ppVar129 = (pthread_mutex_t *)(ulong)*(uint *)(uVar107 + 0xcc);
        } while ((ulong)uVar100 < ppVar129);
      }
      free(puStack_b0);
      auVar259 = hb_sanitize_context_t::~hb_sanitize_context_t(ahStack_110);
      phVar103 = (hb_buffer_t *)CONCAT44(uStack_274,local_278);
      if (*(long *)(phVar103 + 0xd0) != 0) {
        uVar127._0_4_ = *(uint *)(uVar107 + 0x88);
        ppStackY_2a0 = (pthread_mutex_t *)0x3fa112;
        hb_buffer_t::message
                  (auVar259._0_8_,auVar259._8_8_,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,
                   in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,phVar103,_uStack_280,
                   "end table GSUB script tag \'%c%c%c%c\'",(ulong)((uint)uVar127 >> 0x18),
                   (ulong)((uint)uVar127 >> 0x10 & 0xff),(ulong)((uint)uVar127 >> 8 & 0xff),
                   (char)(uint)uVar127);
      }
    }
    else {
      uVar127._0_4_ = *(uint *)(_uStack_258 + 0x88);
      ppStackY_2a0 = (pthread_mutex_t *)0x3f9761;
      bVar137 = hb_buffer_t::message
                          (auVar264._0_8_,auVar264._8_8_,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev
                           ,in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,phVar103,_uStack_280,
                           "start table GSUB script tag \'%c%c%c%c\'",(ulong)((uint)uVar127 >> 0x18)
                           ,(ulong)((uint)uVar127 >> 0x10 & 0xff),(ulong)((uint)uVar127 >> 8 & 0xff)
                           ,(char)(uint)uVar127);
      if (bVar137) goto LAB_003f976d;
    }
    uVar127._0_4_ = *(uint *)(uVar107 + 0x108);
  }
  else {
    hb_aat_layout_substitute
              (_uStack_228,_uStack_280,phVar103,CONCAT44(auStack_214._0_4_,uStack_218),
               uStack_220 & 0xffffffff);
    uVar127._0_4_ = *(uint *)(uVar120 + 0x108);
  }
  if ((~(uint)uVar127 & 0x2200) == 0) {
    hb_aat_layout_remove_deleted_glyphs(phVar103);
  }
  *(undefined2 *)(phVar103 + 0x5a) = 0x100;
  *(undefined4 *)(phVar103 + 100) = 0;
  uVar107 = *(undefined8 *)(phVar103 + 0x70);
  uStack_270 = (ushort)uVar107;
  uStack_26e = (undefined2)((ulong)uVar107 >> 0x10);
  uStack_26c = (int)((ulong)uVar107 >> 0x20);
  *(undefined8 *)(phVar103 + 0x78) = uVar107;
  uVar127._0_4_ = *(uint *)(phVar103 + 0x60);
  if ((uint)uVar127 * 0x14 != 0) {
    memset(*(void **)(phVar103 + 0x80),0,(ulong)((uint)uVar127 * 0x14));
    uVar127._0_4_ = *(uint *)(phVar103 + 0x60);
    uVar107 = *(undefined8 *)(phVar103 + 0x70);
    uStack_270 = (ushort)uVar107;
    uStack_26e = (undefined2)((ulong)uVar107 >> 0x10);
    uStack_26c = (int)((ulong)uVar107 >> 0x20);
  }
  lVar88 = *(long *)(phVar103 + 0x80);
  if ((*(uint *)(phVar103 + 0x38) & 0xfffffffe) == 4) {
    ppStackY_2a0 = (pthread_mutex_t *)0x3fa281;
    auVar259 = (**(code **)(*(long *)(_uStack_280 + 0x90) + 0x58))
                         (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),(uint)uVar127,
                          CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)),0x14,lVar88);
    auVar170._0_8_ = auVar259._8_8_;
    uVar107 = auVar259._0_8_;
    auVar170._8_8_ = extraout_XMM1_Qb_31;
    uVar120 = _uStack_280;
    while (*(undefined **)(*(long *)(uVar120 + 0x90) + 0x68) ==
           PTR_hb_font_get_glyph_h_origin_default_00718ad8) {
      uVar120 = ((__pthread_list_t *)(uVar120 + 0x18))->__prev;
      if (((pthread_mutex_t *)uVar120 == (pthread_mutex_t *)0x0) ||
         ((pthread_mutex_t *)uVar120 == (pthread_mutex_t *)&_hb_Null_hb_font_t)) goto LAB_003fa3a9;
    }
    if ((uint)uVar127 != 0) {
      lVar126 = 0;
      do {
        auVar259 = hb_font_t::get_glyph_h_origin_with_fallback
                             ((hb_font_t *)_uStack_280,
                              *(undefined4 *)
                               (CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)) + lVar126),
                              (int *)&uStack_1b8,&local_48);
        auVar170._0_8_ = auVar259._8_8_;
        uVar107 = auVar259._0_8_;
        auVar170._8_8_ = extraout_XMM1_Qb_32;
        piVar52 = (int *)(lVar88 + 8 + lVar126);
        *piVar52 = *piVar52 - (uint)uStack_1b8;
        piVar52 = (int *)(lVar88 + 0xc + lVar126);
        *piVar52 = *piVar52 - local_48;
        lVar126 = lVar126 + 0x14;
      } while ((ulong)(uint)uVar127 * 0x14 != lVar126);
    }
  }
  else {
    ppStackY_2a0 = (pthread_mutex_t *)0x3fa345;
    auVar259 = (**(code **)(*(long *)(_uStack_280 + 0x90) + 0x60))
                         (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),(uint)uVar127,
                          CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)),0x14,lVar88 + 4);
    auVar170._0_8_ = auVar259._8_8_;
    uVar107 = auVar259._0_8_;
    auVar170._8_8_ = extraout_XMM1_Qb_33;
    if ((uint)uVar127 != 0) {
      lVar126 = 0;
      do {
        auVar259 = hb_font_t::get_glyph_v_origin_with_fallback
                             ((hb_font_t *)_uStack_280,
                              *(undefined4 *)
                               (CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)) + lVar126),
                              (int *)&uStack_1b8,&local_48);
        auVar170._0_8_ = auVar259._8_8_;
        uVar107 = auVar259._0_8_;
        auVar170._8_8_ = extraout_XMM1_Qb_34;
        piVar52 = (int *)(lVar88 + 8 + lVar126);
        *piVar52 = *piVar52 - (uint)uStack_1b8;
        piVar52 = (int *)(lVar88 + 0xc + lVar126);
        *piVar52 = *piVar52 - local_48;
        lVar126 = lVar126 + 0x14;
      } while ((ulong)(uint)uVar127 * 0x14 != lVar126);
    }
  }
LAB_003fa3a9:
  uVar100 = CONCAT44(uStack_274,local_278) + 0x80;
  uVar120 = _uStack_260;
  _uStack_240 = uVar100;
  if ((*(byte *)(CONCAT44(uStack_274,local_278) + 0xc0) & 4) != 0) {
    uVar69._4_4_ = uStack_274;
    uVar69._0_4_ = local_278;
    uVar102 = ((__pthread_internal_list *)(uVar69 + 0x70))->__prev;
    param_6 = ((__pthread_internal_list *)(uVar69 + 0x80))->__prev;
    uVar99 = (ulong)*(uint *)&((__pthread_internal_list *)(uVar69 + 0x60))->__prev;
    auStack_23c._4_8_ = uVar102;
    if (uVar99 == 0) {
      uVar66 = (pthread_mutex_t *)0x0;
      hVar55 = *(hb_buffer_t *)(_uStack_258 + 0x109);
      goto joined_r0x003faa4d;
    }
    uVar127._0_4_ = *(uint *)(uVar69 + 0x38) & 0xfffffffe;
    lVar88 = 0;
    _uStack_248 = param_6;
    piVar52 = uStack_1b8;
    do {
      uStack_1b8._4_4_ = (uint)((ulong)piVar52 >> 0x20);
      if ((*(ushort *)((long)&((__pthread_internal_list *)(uVar102 + 0x10))->__prev + lVar88) & 0x1f
          ) != 0x1d) goto _hb_ot_shape_switchD_003fa4fb_caseD_7;
      if (((byte)((hb_buffer_t *)(uVar102 + 0xc))[lVar88] & 0x20) != 0)
      goto _hb_ot_shape_switchD_003fa4fb_caseD_7;
      iVar43 = *(int *)(CONCAT44(uStack_274,local_278) + 0x24);
      if ((iVar43 != 0) && (*(int *)(uVar102 + lVar88) == iVar43)) {
        if ((uint)uVar127 == 4) {
          iVar43 = (((pthread_mutex_t *)(_uStack_280 + 0x28))->__data).__lock;
          iVar98 = iVar43 + 3;
          if (-1 < iVar43) {
            iVar98 = iVar43;
          }
          *(int *)(param_6 + lVar88) = iVar98 >> 2;
        }
        else {
          iVar43 = *(int *)(_uStack_280 + 0x2c);
          iVar98 = iVar43 + 3;
          if (-1 < iVar43) {
            iVar98 = iVar43;
          }
          *(int *)((hb_buffer_t *)(param_6 + 4) + lVar88) = -(iVar98 >> 2);
        }
      }
      uVar56 = *(ushort *)((long)&((__pthread_internal_list *)(uVar102 + 0x10))->__prev + lVar88);
      uVar80._0_4_ = (uint)(uVar56 >> 8);
      if ((uVar56 & 0x1f) != 0x1d) {
        uVar80._0_4_ = 0;
      }
      switch((char)(uint)uVar80) {
      case '\x01':
      case '\x02':
      case '\x03':
      case '\x04':
      case '\x05':
      case '\x06':
      case '\x10':
        if ((uint)uVar127 == 4) {
          *(int *)(param_6 + lVar88) =
               (int)(((uint)uVar80 >> 1) +
                    (((pthread_mutex_t *)(_uStack_280 + 0x28))->__data).__lock) / (int)(uint)uVar80;
        }
        else {
          *(int *)((hb_buffer_t *)(param_6 + 4) + lVar88) =
               -((int)(((uint)uVar80 >> 1) + *(int *)(_uStack_280 + 0x2c)) / (int)(uint)uVar80);
        }
        break;
      case '\x11':
        if ((uint)uVar127 == 4) {
          iVar43 = (((pthread_mutex_t *)(_uStack_280 + 0x28))->__data).__lock;
          lVar126 = (long)iVar43 << 2;
          *(uint *)(param_6 + lVar88) =
               ((iVar43 >> 0x1f & 0x3fffffffU) >> 0x1d) +
               (int)(lVar126 / 0x12) + (int)(lVar126 >> 0x3f);
        }
        else {
          *(int *)((hb_buffer_t *)(param_6 + 4) + lVar88) =
               (int)(((long)*(int *)(_uStack_280 + 0x2c) * -4) / 0x12);
        }
        break;
      case '\x13':
        uStack_1b8._0_4_ = 0;
        lVar126 = *(long *)(*(long *)(_uStack_280 + 0x90) + 0x10);
        if (lVar126 == 0) {
          uVar107 = 0;
        }
        else {
          uVar107 = *(undefined8 *)(lVar126 + 0x10);
        }
        iVar43 = (**(code **)(*(long *)(_uStack_280 + 0x90) + 0x30))
                           (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),0x30,&uStack_1b8,uVar107
                           );
        if (iVar43 == 0) {
          uStack_1b8._0_4_ = 0;
          lVar126 = *(long *)(*(long *)(_uStack_280 + 0x90) + 0x10);
          if (lVar126 == 0) {
            uVar107 = 0;
          }
          else {
            uVar107 = *(undefined8 *)(lVar126 + 0x10);
          }
          iVar43 = (**(code **)(*(long *)(_uStack_280 + 0x90) + 0x30))
                             (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),0x31,&uStack_1b8,
                              uVar107);
          if (iVar43 == 0) {
            uStack_1b8._0_4_ = 0;
            lVar126 = *(long *)(*(long *)(_uStack_280 + 0x90) + 0x10);
            if (lVar126 == 0) {
              uVar107 = 0;
            }
            else {
              uVar107 = *(undefined8 *)(lVar126 + 0x10);
            }
            iVar43 = (**(code **)(*(long *)(_uStack_280 + 0x90) + 0x30))
                               (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),0x32,&uStack_1b8,
                                uVar107);
            if (iVar43 == 0) {
              uStack_1b8._0_4_ = 0;
              lVar126 = *(long *)(*(long *)(_uStack_280 + 0x90) + 0x10);
              if (lVar126 == 0) {
                uVar107 = 0;
              }
              else {
                uVar107 = *(undefined8 *)(lVar126 + 0x10);
              }
              iVar43 = (**(code **)(*(long *)(_uStack_280 + 0x90) + 0x30))
                                 (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),0x33,&uStack_1b8,
                                  uVar107);
              if (iVar43 == 0) {
                uStack_1b8._0_4_ = 0;
                lVar126 = *(long *)(*(long *)(_uStack_280 + 0x90) + 0x10);
                if (lVar126 == 0) {
                  uVar107 = 0;
                }
                else {
                  uVar107 = *(undefined8 *)(lVar126 + 0x10);
                }
                iVar43 = (**(code **)(*(long *)(_uStack_280 + 0x90) + 0x30))
                                   (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),0x34,&uStack_1b8
                                    ,uVar107);
                if (iVar43 == 0) {
                  uStack_1b8._0_4_ = 0;
                  lVar126 = *(long *)(*(long *)(_uStack_280 + 0x90) + 0x10);
                  if (lVar126 == 0) {
                    uVar107 = 0;
                  }
                  else {
                    uVar107 = *(undefined8 *)(lVar126 + 0x10);
                  }
                  iVar43 = (**(code **)(*(long *)(_uStack_280 + 0x90) + 0x30))
                                     (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),0x35,
                                      &uStack_1b8,uVar107);
                  if (iVar43 == 0) {
                    uStack_1b8._0_4_ = 0;
                    lVar126 = *(long *)(*(long *)(_uStack_280 + 0x90) + 0x10);
                    if (lVar126 == 0) {
                      uVar107 = 0;
                    }
                    else {
                      uVar107 = *(undefined8 *)(lVar126 + 0x10);
                    }
                    iVar43 = (**(code **)(*(long *)(_uStack_280 + 0x90) + 0x30))
                                       (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),0x36,
                                        &uStack_1b8,uVar107);
                    if (iVar43 == 0) {
                      uStack_1b8._0_4_ = 0;
                      lVar126 = *(long *)(*(long *)(_uStack_280 + 0x90) + 0x10);
                      if (lVar126 == 0) {
                        uVar107 = 0;
                      }
                      else {
                        uVar107 = *(undefined8 *)(lVar126 + 0x10);
                      }
                      iVar43 = (**(code **)(*(long *)(_uStack_280 + 0x90) + 0x30))
                                         (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),0x37,
                                          &uStack_1b8,uVar107);
                      if (iVar43 == 0) {
                        uStack_1b8._0_4_ = 0;
                        lVar126 = *(long *)(*(long *)(_uStack_280 + 0x90) + 0x10);
                        if (lVar126 == 0) {
                          uVar107 = 0;
                        }
                        else {
                          uVar107 = *(undefined8 *)(lVar126 + 0x10);
                        }
                        iVar43 = (**(code **)(*(long *)(_uStack_280 + 0x90) + 0x30))
                                           (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),0x38,
                                            &uStack_1b8,uVar107);
                        if (iVar43 == 0) {
                          uStack_1b8._0_4_ = 0;
                          lVar126 = *(long *)(*(long *)(_uStack_280 + 0x90) + 0x10);
                          if (lVar126 == 0) {
                            uVar107 = 0;
                          }
                          else {
                            uVar107 = *(undefined8 *)(lVar126 + 0x10);
                          }
                          iVar43 = (**(code **)(*(long *)(_uStack_280 + 0x90) + 0x30))
                                             (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),0x39,
                                              &uStack_1b8,uVar107);
                          auVar170._8_8_ = extraout_XMM1_Qb_36;
                          auVar170._0_8_ = extraout_XMM1_Qa_28;
                          uVar100 = _uStack_240;
                          uVar102 = auStack_23c._4_8_;
                          uVar120 = _uStack_260;
                          param_6 = _uStack_248;
                          uVar107 = extraout_XMM0_Qa_25;
                          piVar52 = (int *)CONCAT44(uStack_1b8._4_4_,(uint)uStack_1b8);
                          if (iVar43 == 0) break;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        lVar126 = *(long *)(_uStack_280 + 0x90);
        if ((uint)uVar127 != 4) goto LAB_003fa9fb;
        lVar104 = *(long *)(lVar126 + 0x10);
        if (lVar104 == 0) goto LAB_003fa711;
LAB_003fa9dd:
        uVar107 = *(undefined8 *)(lVar104 + 0x28);
LAB_003fa9e1:
        uVar125 = (**(code **)(lVar126 + 0x48))
                            (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),(uint)uStack_1b8,
                             uVar107);
        auVar170._8_8_ = extraout_XMM1_Qb_37;
        auVar170._0_8_ = extraout_XMM1_Qa_29;
        *(undefined4 *)(_uStack_248 + lVar88) = uVar125;
        uVar107 = extraout_XMM0_Qa_26;
        goto LAB_003faa25;
      case '\x14':
        uStack_1b8._0_4_ = 0;
        lVar126 = *(long *)(*(long *)(_uStack_280 + 0x90) + 0x10);
        if (lVar126 == 0) {
          uVar107 = 0;
        }
        else {
          uVar107 = *(undefined8 *)(lVar126 + 0x10);
        }
        iVar43 = (**(code **)(*(long *)(_uStack_280 + 0x90) + 0x30))
                           (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),0x2e,&uStack_1b8,uVar107
                           );
        if (iVar43 == 0) {
          uStack_1b8._0_4_ = 0;
          lVar126 = *(long *)(*(long *)(_uStack_280 + 0x90) + 0x10);
          if (lVar126 == 0) {
            uVar107 = 0;
          }
          else {
            uVar107 = *(undefined8 *)(lVar126 + 0x10);
          }
          iVar43 = (**(code **)(*(long *)(_uStack_280 + 0x90) + 0x30))
                             (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),0x2c,&uStack_1b8,
                              uVar107);
          auVar170._8_8_ = extraout_XMM1_Qb_35;
          auVar170._0_8_ = extraout_XMM1_Qa_27;
          uVar100 = _uStack_240;
          uVar102 = auStack_23c._4_8_;
          uVar120 = _uStack_260;
          param_6 = _uStack_248;
          uVar107 = extraout_XMM0_Qa_24;
          piVar52 = (int *)CONCAT44(uStack_1b8._4_4_,(uint)uStack_1b8);
          if (iVar43 == 0) break;
        }
        lVar126 = *(long *)(_uStack_280 + 0x90);
        if ((uint)uVar127 == 4) {
          lVar104 = *(long *)(lVar126 + 0x10);
          if (lVar104 != 0) goto LAB_003fa9dd;
LAB_003fa711:
          uVar107 = 0;
          goto LAB_003fa9e1;
        }
LAB_003fa9fb:
        if (*(long *)(lVar126 + 0x10) == 0) {
          uVar107 = 0;
        }
        else {
          uVar107 = *(undefined8 *)(*(long *)(lVar126 + 0x10) + 0x30);
        }
        uVar125 = (**(code **)(lVar126 + 0x50))
                            (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),(uint)uStack_1b8,
                             uVar107);
        auVar170._8_8_ = extraout_XMM1_Qb_38;
        auVar170._0_8_ = extraout_XMM1_Qa_30;
        *(undefined4 *)((hb_buffer_t *)(_uStack_248 + 4) + lVar88) = uVar125;
        uVar107 = extraout_XMM0_Qa_27;
LAB_003faa25:
        uVar100 = _uStack_240;
        uVar102 = auStack_23c._4_8_;
        uVar120 = _uStack_260;
        param_6 = _uStack_248;
        piVar52 = (int *)CONCAT44(uStack_1b8._4_4_,(uint)uStack_1b8);
        break;
      case '\x15':
        if ((uint)uVar127 == 4) {
          *(int *)(param_6 + lVar88) = *(int *)(param_6 + lVar88) / 2;
        }
        else {
          *(int *)((hb_buffer_t *)(param_6 + 4) + lVar88) =
               *(int *)((hb_buffer_t *)(param_6 + 4) + lVar88) / 2;
        }
      }
_hb_ot_shape_switchD_003fa4fb_caseD_7:
      uStack_1b8 = piVar52;
      lVar88 = lVar88 + 0x14;
      piVar52 = uStack_1b8;
    } while (uVar99 * 0x14 != lVar88);
  }
  uVar66._4_4_ = 0;
  uVar66._0_4_ = *(uint *)_uStack_250;
  auStack_23c._4_8_ = *(undefined8 *)uVar120;
  param_6 = *(undefined8 *)uVar100;
  uVar69._4_4_ = uStack_274;
  uVar69._0_4_ = local_278;
  hVar55 = *(hb_buffer_t *)(_uStack_258 + 0x109);
joined_r0x003faa4d:
  if (((byte)hVar55 & 1) == 0) {
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01f4) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
    uStack_218 = 0;
  }
  else {
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01f4) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
    uVar127._0_4_ = *(uint *)(uVar69 + 0x38) & 0xfffffffd;
    uStack_218 = CONCAT31((int3)((uint)uVar127 >> 8),(uint)uVar127 == 4);
  }
  uVar127._0_4_ = (uint)uVar66;
  auStack_214._4_4_ = (uint)uVar127;
  uVar68 = _uStack_280;
LAB_003faa90:
  _uStack_248 = param_6;
  if (((__pthread_internal_list *)(uVar68 + 0x90))->__prev[6].__next ==
      (__pthread_internal_list *)PTR_hb_font_get_glyph_h_origin_default_00718ad8)
  goto code_r0x003faa9d;
  if ((uint)uVar127 == 0) goto LAB_003fabaf;
  lVar88 = 0;
  do {
    auVar259 = hb_font_t::get_glyph_h_origin_with_fallback
                         ((hb_font_t *)_uStack_280,*(undefined4 *)(auStack_23c._4_8_ + lVar88),
                          (int *)&uStack_1b8,&local_48);
    auVar170._0_8_ = auVar259._8_8_;
    uVar107 = auVar259._0_8_;
    auVar170._8_8_ = extraout_XMM1_Qb_39;
    *(uint *)((hb_buffer_t *)(_uStack_248 + 8) + lVar88) =
         *(int *)((hb_buffer_t *)(_uStack_248 + 8) + lVar88) + (uint)uStack_1b8;
    *(int *)((hb_buffer_t *)(_uStack_248 + 0xc) + lVar88) =
         *(int *)((hb_buffer_t *)(_uStack_248 + 0xc) + lVar88) + local_48;
    lVar88 = lVar88 + 0x14;
  } while (uVar66 * 0x14 != lVar88);
  uVar127._0_4_ = *(uint *)_uStack_250;
  uVar66._4_4_ = 0;
  uVar66._0_4_ = (uint)uVar127;
  uVar100 = _uStack_240;
  uVar120 = _uStack_260;
joined_r0x003faaaf:
  uVar68 = uVar66;
  if ((uint)uVar127 != 0) {
    if ((uint)uVar68 == 1) {
      uVar127 = (pthread_mutex_t *)0x0;
    }
    else {
      lVar88 = 0;
      uVar127 = ((pthread_mutex_t *)0x0)->__size;
      do {
        *(undefined1 *)(*(long *)uVar100 + 0x12 + lVar88) = 0;
        *(undefined2 *)(*(long *)uVar100 + 0x10 + lVar88) = 0;
        *(undefined1 *)(*(long *)uVar100 + 0x26 + lVar88) = 0;
        *(undefined2 *)(*(long *)uVar100 + 0x24 + lVar88) = 0;
        uVar127 = uVar127 + 2;
        lVar88 = lVar88 + 0x28;
      } while ((pthread_mutex_t *)(ulong)((uint)uVar68 & 0xfffffffe) != (pthread_mutex_t *)uVar127);
    }
    cVar42 = (char)uVar68;
    uVar68 = uVar127;
    if (((ulong)(byte)cVar42 & 1) != 0) {
      uVar68 = uVar127 * 0x14;
      *(hb_buffer_t *)(*(long *)uVar100 + 0x12 + uVar68) = (hb_buffer_t)0x0;
      *(undefined2 *)(*(long *)uVar100 + 0x10 + uVar68) = 0;
    }
  }
LAB_003fabaf:
  if ((((byte)*(hb_buffer_t *)(_uStack_258 + 0x108) & 0x20) != 0) &&
     (*(int *)&((__pthread_internal_list *)(_uStack_258 + 0x80))->__prev[5].__next == 1)) {
    uVar99 = (ulong)*(uint *)_uStack_250;
    uVar68 = (pthread_mutex_t *)0x0;
    if (uVar99 != 0) {
      lVar88 = *(long *)uVar120;
      if ((byte)uStack_218 == '\0') {
        uVar68 = uVar99 * 0x14;
        lVar126 = 0;
        do {
          if ((*(byte *)(lVar126 + lVar88 + 0xc) & 8) != 0) {
            *(undefined8 *)(lVar126 + *(long *)uVar100) = 0;
          }
          lVar126 = lVar126 + 0x14;
        } while (uVar68 != lVar126);
      }
      else {
        uVar68 = uVar99 * 0x14;
        lVar126 = 0;
        do {
          if ((*(byte *)(lVar126 + lVar88 + 0xc) & 8) != 0) {
            lVar104 = *(long *)uVar100;
            piVar52 = (int *)(lVar126 + 8 + lVar104);
            *piVar52 = *piVar52 - *(int *)(lVar126 + lVar104);
            piVar52 = (int *)(lVar126 + 0xc + lVar104);
            *piVar52 = *piVar52 - *(int *)(lVar126 + 4 + lVar104);
            *(undefined4 *)(lVar126 + lVar104) = 0;
            *(undefined4 *)(lVar126 + 4 + lVar104) = 0;
          }
          lVar126 = lVar126 + 0x14;
        } while (uVar68 != lVar126);
      }
    }
  }
  if ((*(ushort *)(_uStack_258 + 0x108) & 0x200) == 0) {
    param_3 = (uint *)uVar69;
    param_2 = _uStack_258;
    if ((*(ushort *)(_uStack_258 + 0x108) & 0x1000) == 0) goto LAB_003fbe61;
    p_Var58 = *(__pthread_internal_list **)(_uStack_280 + 0x20);
    p_Var89 = p_Var58[0x15].__next;
    while (p_Var89 == (__pthread_internal_list *)0x0) {
      p_Var113 = p_Var58[6].__next;
      if (p_Var113 == (__pthread_internal_list *)0x0) {
        p_Var89 = (__pthread_internal_list *)&_hb_NullPool;
        break;
      }
      p_Var89 = calloc(1,0x18);
      if (p_Var89 == (__pthread_internal_list *)0x0) {
        LOCK();
        bVar137 = p_Var58[0x15].__next == (__pthread_internal_list *)0x0;
        if (bVar137) {
          p_Var58[0x15].__next = (__pthread_internal_list *)&_hb_NullPool;
        }
        UNLOCK();
        if (!bVar137) goto LAB_003fdd9f;
        p_Var89 = (__pthread_internal_list *)&_hb_NullPool;
        uVar69._4_4_ = uStack_274;
        uVar69._0_4_ = local_278;
        break;
      }
      accelerator_t::accelerator_t((accelerator_t *)p_Var89,p_Var113);
      LOCK();
      bVar137 = p_Var58[0x15].__next == (__pthread_internal_list *)0x0;
      if (bVar137) {
        p_Var58[0x15].__next = p_Var89;
      }
      UNLOCK();
      if (bVar137) break;
      accelerator_t::~accelerator_t((accelerator_t *)p_Var89);
      free(p_Var89);
LAB_003fdd9f:
      uVar69._4_4_ = uStack_274;
      uVar69._0_4_ = local_278;
      p_Var89 = p_Var58[0x15].__next;
    }
    uVar120 = p_Var89->__prev;
    uVar68 = uVar69;
    auVar259 = hb_aat_apply_context_t::hb_aat_apply_context_t
                         ((hb_aat_apply_context_t *)&uStack_1b8,_uStack_228,_uStack_280,
                          (undefined4 *)uVar69,(GDEFVersion1_2<OT::Layout::SmallTypes> *)uVar120);
    bVar137 = hb_buffer_t::message
                        (auVar259._0_8_,auVar259._8_8_,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,
                         in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,(hb_buffer_t *)uVar69,
                         _uStack_280,"start table kerx",uVar68,uVar120,param_6,uVar283);
    param_2 = _uStack_258;
    if (!bVar137) goto LAB_003fb61e;
    p_Var58 = *(__pthread_internal_list **)(_uStack_280 + 0x20);
    p_Var113 = p_Var58[0x16].__prev;
    if (p_Var113 != (__pthread_internal_list *)0x0) goto LAB_003fb5c0;
LAB_003fddfb:
    p_Var116 = p_Var58[6].__next;
    p_Var113 = (__pthread_internal_list *)&_hb_NullPool;
    if (p_Var116 != (__pthread_internal_list *)0x0) {
      local_1f8._0_1_ = '\0';
      local_1f8._1_1_ = '\0';
      local_1f8._2_1_ = '\0';
      local_1f8._3_1_ = '\0';
      uStack_1cc = 0;
      uStack_1cb = 0;
      uStack_1ca = 0;
      puStack_1c8 = (uint *)0x0;
      uStack_1e0 = 0;
      uStack_1dc = 0;
      uStack_1d8 = 0;
      uStack_1d4 = 0;
      _auStack_1f0 = (undefined1  [16])0x0;
      uStack_1d0 = uStack_1d0 & 0xffffff00;
      uStack_1c0 = 0x10000;
      uStack_1bc = 0;
      uVar127._0_4_ = *(uint *)&p_Var116[1].__next;
      if ((uint)uVar127 == 0xffffffff) {
        while (p_Var113 = p_Var116[7].__next, p_Var113 == (__pthread_internal_list *)0x0) {
          p_Var113 = p_Var116[6].__next;
          if (p_Var113 == (__pthread_internal_list *)0x0) {
            p_Var113 = (__pthread_internal_list *)&_hb_NullPool;
            break;
          }
          local_48 = 0;
          local_40 = (pthread_mutex_t *)0x0;
          local_38 = 0;
          uStack_34 = 0;
          piVar52 = (int *)&_hb_NullPool;
          if (p_Var113[2].__prev != (__pthread_internal_list *)0x0) {
            piVar52 = (int *)(*(code *)p_Var113[2].__prev)(p_Var113,0x6d617870,p_Var113[2].__next);
            if (piVar52 == (int *)0x0) {
              piVar52 = (int *)&_hb_NullPool;
            }
          }
          p_Var113 = (__pthread_internal_list *)
                     hb_sanitize_context_t::sanitize_blob<OT::maxp>
                               ((hb_sanitize_context_t *)&local_48,piVar52);
          hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)&local_48);
          if (p_Var113 == (__pthread_internal_list *)0x0) {
            p_Var113 = (__pthread_internal_list *)&_hb_NullPool;
            LOCK();
            bVar137 = p_Var116[7].__next == (__pthread_internal_list *)0x0;
            if (bVar137) {
              p_Var116[7].__next = (__pthread_internal_list *)&_hb_NullPool;
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar137 = p_Var116[7].__next == (__pthread_internal_list *)0x0;
            if (bVar137) {
              p_Var116[7].__next = p_Var113;
            }
            UNLOCK();
          }
          if (bVar137) break;
          if (((p_Var113 != (__pthread_internal_list *)0x0) &&
              (p_Var113 != (__pthread_internal_list *)&_hb_NullPool)) &&
             (*(int *)&p_Var113->__prev != 0)) {
            LOCK();
            *(int *)&p_Var113->__prev = *(int *)&p_Var113->__prev + -1;
            UNLOCK();
            if (*(int *)&p_Var113->__prev == 0) {
              *(undefined4 *)&p_Var113->__prev = 0xffff2153;
              ppVar129 = (pthread_mutex_t *)p_Var113->__next;
              if (ppVar129 != (pthread_mutex_t *)0x0) {
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar129[1].__data,ppVar129);
                free(ppVar129);
                p_Var113->__next = (__pthread_internal_list *)0x0;
              }
              if (p_Var113[2].__next != (__pthread_internal_list *)0x0) {
                (*(code *)p_Var113[2].__next)(p_Var113[2].__prev);
              }
              free(p_Var113);
            }
          }
        }
        p_Var53 = (__pthread_internal_list *)&_hb_NullPool;
        if (5 < *(uint *)&p_Var113[1].__next) {
          p_Var53 = p_Var113[1].__prev;
        }
        uVar56 = *(ushort *)((long)&p_Var53->__prev + 4);
        uVar75 = uVar56 << 8 | uVar56 >> 8;
        if (uVar56 == 0) {
          uVar75 = 0;
        }
        uVar127._0_4_ = (uint)uVar75;
        *(uint *)&p_Var116[1].__next = (uint)uVar127;
      }
      uStack_1bc = CONCAT11(uStack_1bc._1_1_,1);
      puVar131 = &_hb_NullPool;
      uStack_1c0 = (uint)uVar127;
      if (p_Var116[2].__prev != (__pthread_internal_list *)0x0) {
        puVar131 = (uint *)(*(code *)p_Var116[2].__prev)(p_Var116,0x616e6b72,p_Var116[2].__next);
        if (puVar131 == (uint *)0x0) {
          puStack_1c8 = &_hb_NullPool;
          uVar127._0_4_ = _hb_NullPool;
          goto joined_r0x003fdea1;
        }
      }
      puStack_1c8 = puVar131;
      uVar127._0_4_ = *puVar131;
joined_r0x003fdea1:
      if ((uint)uVar127 != 0) {
        LOCK();
        *puStack_1c8 = *puStack_1c8 + 1;
        UNLOCK();
      }
      uVar74 = 0;
      uStack_270 = (ushort)puStack_1c8;
      uStack_26e = (undefined2)((ulong)puStack_1c8 >> 0x10);
      uStack_26c = (int)((ulong)puStack_1c8 >> 0x20);
      do {
        puVar131 = puStack_1c8;
        uStack_1d0 = CONCAT31(uStack_1d0._1_3_,uVar74);
        psVar64 = *(short **)(puStack_1c8 + 4);
        uStack_1e0 = puStack_1c8[6];
        uVar68._4_4_ = 0;
        uVar68._0_4_ = uStack_1e0;
        uVar127._0_4_ = (uint)(uVar68 * 0x40);
        if ((uint)uVar127 < 0x4001) {
          uVar127._0_4_ = 0x4000;
        }
        if (0x3ffffffe < (uint)uVar127) {
          uVar127._0_4_ = 0x3fffffff;
        }
        stack0xfffffffffffffe18 = (hb_buffer_t *)(uVar68 + (long)psVar64);
        auStack_1f0._0_8_ = psVar64;
        uStack_1dc = 0x3fffffff;
        if ((int)((ulong)(uVar68 * 0x40) >> 0x20) == 0) {
          uStack_1dc = (uint)uVar127;
        }
        uStack_1cc = 0;
        uStack_1cb = 0;
        uStack_1ca = 0;
        local_1f8._0_1_ = '\0';
        local_1f8._1_1_ = '\0';
        local_1f8._2_1_ = '\0';
        local_1f8._3_1_ = '\0';
        uStack_1d4 = 0;
        if (psVar64 == (short *)0x0) {
          if (*puStack_1c8 != 0) {
            LOCK();
            *puStack_1c8 = *puStack_1c8 - 1;
            UNLOCK();
            if (*puStack_1c8 == 0) {
              *puStack_1c8 = 0xffff2153;
              ppVar129 = *(pthread_mutex_t **)(puStack_1c8 + 2);
              if (ppVar129 != (pthread_mutex_t *)0x0) {
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar129[1].__data,ppVar129);
                free(ppVar129);
                puVar131[2] = 0;
                puVar131[3] = 0;
              }
              if (*(code **)(puVar131 + 10) != (code *)0x0) {
                (**(code **)(puVar131 + 10))(*(undefined8 *)(puVar131 + 8));
              }
              free(puVar131);
            }
          }
          puStack_1c8 = (uint *)0x0;
          _auStack_1f0 = (undefined1  [16])0x0;
          uStack_1e0 = 0;
          p_Var113 = (__pthread_internal_list *)CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270))
          ;
          goto LAB_003fe360;
        }
        if ((uStack_1e0 < 0xc) || (*psVar64 != 0)) goto LAB_003fe0cc;
        uVar127._0_4_ = *(uint *)(psVar64 + 4);
        uVar127._0_4_ =
             (uint)uVar127 >> 0x18 | ((uint)uVar127 & 0xff0000) >> 8 | ((uint)uVar127 & 0xff00) << 8
             | (uint)uVar127 << 0x18;
        if ((uStack_1e0 < (uint)uVar127) ||
           (uStack_1dc = uStack_1dc - (uint)uVar127, (int)uStack_1dc < 1)) goto LAB_003fe0cc;
        uVar80._0_4_ = *(uint *)(psVar64 + 2);
        bVar137 = true;
        if ((uint)uVar80 == 0) goto LAB_003fe0cf;
        uVar99 = Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                 ::sanitize((Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                             *)((ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                                        ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18) +
                               (long)psVar64),(long)&local_1f8,(ulong)(uint)uVar127 + (long)psVar64)
        ;
        uVar127._0_4_ = CONCAT22(uStack_1ca,CONCAT11(uStack_1cb,uStack_1cc));
        uVar68._4_4_ = 0;
        uVar68._0_4_ = (uint)uVar127;
        if ((char)uVar99 != '\0') {
          if ((uint)uVar127 == 0) goto LAB_003fe0cf;
LAB_003fe190:
          uStack_1cc = 0;
          uStack_1cb = 0;
          uStack_1ca = 0;
          uVar68._4_4_ = 0;
          uVar68._0_4_ = uStack_1e0;
          if (((&(((pthread_mutex_t *)((long)psVar64 - auStack_1f0._0_8_))->__data).__nusers <=
                (ulong)uVar68) && (*psVar64 == 0)) &&
             ((pthread_mutex_t *)((long)psVar64 - auStack_1f0._0_8_) <= (ulong)uVar68)) {
            uVar127._0_4_ = *(uint *)(psVar64 + 4);
            uVar127._0_4_ =
                 (uint)uVar127 >> 0x18 | ((uint)uVar127 & 0xff0000) >> 8 |
                 ((uint)uVar127 & 0xff00) << 8 | (uint)uVar127 << 0x18;
            if ((((uint)uVar127 <= (uint)(stack0xfffffffffffffe18 - (int)psVar64)) &&
                (uStack_1dc = uStack_1dc - (uint)uVar127, 0 < (int)uStack_1dc)) &&
               ((pthread_mutex_t *)((long)psVar64 + (8 - auStack_1f0._0_8_)) <= (ulong)uVar68)) {
              uVar80._0_4_ = *(uint *)(psVar64 + 2);
              if ((uint)uVar80 == 0) goto LAB_003fe0cf;
              uVar99 = Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                       ::sanitize((Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                                   *)((ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8
                                              | ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18)
                                     + (long)psVar64),(long)&local_1f8,
                                  (ulong)(uint)uVar127 + (long)psVar64);
              puVar131 = puStack_1c8;
              uVar127._0_4_ = CONCAT22(uStack_1ca,CONCAT11(uStack_1cb,uStack_1cc));
              if ((char)uVar99 == '\0') {
                if ((uint)uVar127 < 0x20) {
                  iVar43 = (uint)uVar127 + 1;
                  uStack_1cc = (undefined1)iVar43;
                  uStack_1cb = (undefined1)((uint)iVar43 >> 8);
                  uStack_1ca = (undefined2)((uint)iVar43 >> 0x10);
                  if ((char)uStack_1d0 != '\0') {
                    psVar64[2] = 0;
                    psVar64[3] = 0;
                  }
                }
              }
              else if ((uint)uVar127 == 0) {
                uVar68 = (pthread_mutex_t *)0x0;
                goto LAB_003fe0cf;
              }
              if ((puStack_1c8 != (uint *)0x0) && (*puStack_1c8 != 0)) {
                LOCK();
                *puStack_1c8 = *puStack_1c8 - 1;
                UNLOCK();
                if (*puStack_1c8 == 0) {
                  *puStack_1c8 = 0xffff2153;
                  ppVar129 = *(pthread_mutex_t **)(puStack_1c8 + 2);
                  if (ppVar129 != (pthread_mutex_t *)0x0) {
                    hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                              ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                                *)&ppVar129[1].__data,ppVar129);
                    free(ppVar129);
                    puVar131[2] = 0;
                    puVar131[3] = 0;
                  }
                  if (*(code **)(puVar131 + 10) != (code *)0x0) {
                    (**(code **)(puVar131 + 10))(*(undefined8 *)(puVar131 + 8));
                  }
                  free(puVar131);
                }
              }
              goto LAB_003fe2f1;
            }
          }
          goto LAB_003fe0cc;
        }
        if ((uint)uVar127 < 0x20) {
          uVar68._0_4_ = (uint)uVar127 + 1;
          uVar68._4_4_ = 0;
          uStack_1cc = (undefined1)(uint)uVar68;
          uStack_1cb = (undefined1)((uint)uVar68 >> 8);
          uStack_1ca = (undefined2)((uint)uVar68 >> 0x10);
          if ((char)uStack_1d0 != '\0') {
            psVar64[2] = 0;
            psVar64[3] = 0;
            goto LAB_003fe190;
          }
        }
        else if ((char)uStack_1d0 != '\0') goto LAB_003fe0cc;
        lVar88 = CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270));
        uVar127._0_4_ = *(uint *)(lVar88 + 0x18);
        uVar99 = (ulong)(uint)uVar127;
        if (*(int *)(lVar88 + 4) == 0) goto LAB_003fe0b8;
        if (uVar99 == 0) {
          *(undefined4 *)(lVar88 + 0x1c) = 2;
LAB_003fdec3:
          auStack_1f0._0_8_ = *(long *)(lVar88 + 0x10);
          stack0xfffffffffffffe18 = uVar99 + auStack_1f0._0_8_;
          if (auStack_1f0._0_8_ == 0) goto LAB_003fe0cc;
        }
        else {
          if (*(int *)(lVar88 + 0x1c) == 2) goto LAB_003fdec3;
          if (*(int *)(lVar88 + 0x1c) == 3) {
            *(undefined4 *)(lVar88 + 0x1c) = 1;
          }
          pvVar51 = malloc(uVar99);
          if (pvVar51 == (void *)0x0) goto LAB_003fe0b8;
          memcpy(pvVar51,*(void **)(lVar88 + 0x10),uVar99);
          if (*(code **)(lVar88 + 0x28) != (code *)0x0) {
            (**(code **)(lVar88 + 0x28))(*(undefined8 *)(lVar88 + 0x20));
            lVar88 = CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270));
          }
          *(undefined4 *)(lVar88 + 0x1c) = 2;
          *(void **)(lVar88 + 0x10) = pvVar51;
          *(void **)(lVar88 + 0x20) = pvVar51;
          *(code **)(lVar88 + 0x28) = free;
        }
        uVar74 = 1;
      } while( true );
    }
    goto LAB_003fe60a;
  }
  p_Var58 = *(__pthread_internal_list **)(_uStack_280 + 0x20);
  uVar100 = p_Var58[0x13].__next;
  do {
    if ((pthread_mutex_t *)uVar100 != (pthread_mutex_t *)0x0) {
LAB_003fb644:
      param_2 = _uStack_258;
      uStack_268 = uVar100;
      if (((__pthread_internal_list *)(uVar69 + 0xd0))->__prev != (__pthread_internal_list *)0x0) {
        uVar127._0_4_ = *(uint *)(_uStack_258 + 0x8c);
        uVar68._0_4_ = (uint)uVar127 >> 0x18;
        uVar68._4_4_ = 0;
        uVar120._0_4_ = (uint)uVar127 >> 0x10 & 0xff;
        uVar120._4_4_ = 0;
        param_6._4_4_ = 0;
        param_6._0_4_ = (uint)uVar127 >> 8 & 0xff;
        ppStackY_2a0 = (pthread_mutex_t *)0x3fb692;
        bVar137 = hb_buffer_t::message
                            (uVar107,auVar170._0_8_,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,
                             in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,(hb_buffer_t *)uVar69,
                             _uStack_280,"start table GPOS script tag \'%c%c%c%c\'",uVar68,uVar120,
                             param_6,(char)(uint)uVar127);
        param_3 = (uint *)uVar69;
        uVar107 = extraout_XMM0_Qa_28;
        if (!bVar137) goto LAB_003fbe61;
      }
      uVar120 = *(undefined8 *)uVar100;
      auVar261 = OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                           ((hb_ot_apply_context_t *)&uStack_1b8,1,_uStack_280,(undefined4 *)uVar69,
                            (GDEFVersion1_2<OT::Layout::SmallTypes> *)uVar120);
      uStack_d0 = OT::Layout::GPOS_impl::PosLookup::dispatch_recurse_func<OT::hb_ot_apply_context_t>
      ;
      uVar99 = (ulong)*(uint *)(param_2 + 0xdc);
      if (*(uint *)(param_2 + 0xdc) != 0) {
        uVar92 = 0;
        uVar78 = 0;
        do {
          if (uVar92 < uVar99) {
            uVar69 = ((__pthread_internal_list *)(param_2 + 0xe0))->__prev + uVar92;
            uVar127._0_4_ = *(uint *)uVar69;
          }
          else {
            uVar69 = &_hb_NullPool;
            uVar127._0_4_ = _hb_NullPool;
          }
          auStack_23c._12_8_ = uVar69;
          if ((uint)uVar78 < (uint)uVar127) {
            uVar78 = uVar78 & 0xffffffff;
            uStack_220 = uVar92;
            do {
              uVar107 = auVar261._8_8_;
              uStack_270 = (ushort)uVar78;
              uStack_26e = (undefined2)(uVar78 >> 0x10);
              uStack_26c = (int)(uVar78 >> 0x20);
              if (uVar78 < *(uint *)(param_2 + 0xbc)) {
                puVar132 = (ushort *)
                           ((long)&((__pthread_internal_list *)(param_2 + 0xc0))->__prev->__prev +
                           uVar78 * 0xc);
                uVar56 = *puVar132;
                if ((uint)*puVar132 < *(uint *)(uVar100 + 8)) goto LAB_003fb79e;
              }
              else {
                puVar132 = (ushort *)&_hb_NullPool;
                uVar56 = (ushort)_hb_NullPool;
                if ((_hb_NullPool & 0xffff) < *(uint *)(uVar100 + 8)) {
LAB_003fb79e:
                  uVar70._2_1_ = '\0';
                  uVar70._3_1_ = '\0';
                  uVar70._4_1_ = '\0';
                  uVar70._5_1_ = '\0';
                  uVar70._6_1_ = '\0';
                  uVar70._7_1_ = '\0';
                  uVar70._0_2_ = uVar56;
                  p_Var58 = (&((__pthread_internal_list *)(uVar100 + 0x10))->__prev->__prev)[uVar70]
                  ;
                  while (p_Var58 == (__pthread_internal_list *)0x0) {
                    puVar49 = *(undefined4 **)uVar100;
                    uVar69 = &_hb_NullPool;
                    if (puVar49 == (undefined4 *)0x0) {
                      puVar49 = &_hb_NullPool;
                    }
                    if (3 < (uint)puVar49[6]) {
                      uVar69 = *(undefined8 *)(puVar49 + 4);
                    }
                    phVar103 = (hb_buffer_t *)&_hb_NullPool;
                    if (*(short *)uVar69 == 0x100) {
                      uVar75 = *(ushort *)(uVar69 + 8);
                      phVar85 = (hb_buffer_t *)&_hb_NullPool;
                      if (uVar75 != 0) {
                        phVar85 = (hb_buffer_t *)
                                  (uVar69 + (ulong)(ushort)(uVar75 << 8 | uVar75 >> 8));
                      }
                      uVar69._0_2_ = *(ushort *)phVar85 << 8 | *(ushort *)phVar85 >> 8;
                      uVar69._2_1_ = '\0';
                      uVar69._3_1_ = '\0';
                      uVar69._4_1_ = '\0';
                      uVar69._5_1_ = '\0';
                      uVar69._6_1_ = '\0';
                      uVar69._7_1_ = '\0';
                      phVar103 = (hb_buffer_t *)&_hb_NullPool;
                      if (uVar56 < (ushort)uVar69) {
                        uVar75 = *(ushort *)(phVar85 + uVar70 * 2 + 2);
                        uVar69._2_1_ = '\0';
                        uVar69._3_1_ = '\0';
                        uVar69._4_1_ = '\0';
                        uVar69._5_1_ = '\0';
                        uVar69._6_1_ = '\0';
                        uVar69._7_1_ = '\0';
                        uVar69._0_2_ = uVar75;
                        phVar103 = (hb_buffer_t *)&_hb_NullPool;
                        if (uVar75 != 0) {
                          uVar69._0_2_ = uVar75 << 8 | uVar75 >> 8;
                          uVar69._2_1_ = '\0';
                          uVar69._3_1_ = '\0';
                          uVar69._4_1_ = '\0';
                          uVar69._5_1_ = '\0';
                          uVar69._6_1_ = '\0';
                          uVar69._7_1_ = '\0';
                          phVar103 = phVar85 + uVar69;
                        }
                      }
                    }
                    p_Var58 = (__pthread_internal_list *)
                              OT::hb_ot_layout_lookup_accelerator_t::
                              create<OT::Layout::GPOS_impl::PosLookup>((ushort *)phVar103);
                    auVar261._8_8_ = uVar107;
                    auVar261._0_8_ = extraout_XMM0_Qa_29;
                    if (p_Var58 == (__pthread_internal_list *)0x0) goto LAB_003fb750;
                    uVar69 = ((__pthread_internal_list *)(uVar100 + 0x10))->__prev;
                    phVar103 = (hb_buffer_t *)(uVar69 + uVar70 * 8);
                    LOCK();
                    bVar137 = *(long *)phVar103 == 0;
                    if (bVar137) {
                      *(__pthread_internal_list **)phVar103 = p_Var58;
                    }
                    UNLOCK();
                    if (bVar137) break;
                    free(p_Var58);
                    auVar261._8_8_ = uVar107;
                    auVar261._0_8_ = extraout_XMM0_Qa_30;
                    p_Var58 = (&((__pthread_internal_list *)(uVar100 + 0x10))->__prev->__prev)
                              [uVar70];
                  }
                  uVar107 = uStack_268;
                  uVar80 = auVar261._8_8_;
                  if (*(long *)(CONCAT44(uStack_274,local_278) + 0xd0) != 0) {
                    uVar127._0_4_ = *(uint *)(puVar132 + 4);
                    param_6._0_4_ = (uint)uVar127 >> 0x10 & 0xff;
                    param_6._4_4_ = 0;
                    uVar120._4_4_ = 0;
                    uVar120._0_4_ = (uint)uVar127 >> 0x18;
                    ppStackY_2a0 = (pthread_mutex_t *)0x3fb8ba;
                    uVar69 = uVar70;
                    bVar137 = hb_buffer_t::message
                                        (auVar261._0_8_,uVar80,in_XMM2.__prev,in_XMM3._0_8_,
                                         in_XMM4.__prev,in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,
                                         (hb_buffer_t *)CONCAT44(uStack_274,local_278),_uStack_280,
                                         "start lookup %u feature \'%c%c%c%c\'",uVar70,uVar120,
                                         param_6,(char)((uint)uVar127 >> 8));
                    auVar261._8_8_ = uVar80;
                    auVar261._0_8_ = extraout_XMM0_Qa_31;
                    uVar100 = uVar107;
                    if (!bVar137) goto LAB_003fb750;
                  }
                  auVar259 = _auStack_1a0;
                  uVar107 = uStack_268;
                  uVar80 = auVar261._8_8_;
                  if (((((ulong)p_Var58->__prev & local_a8) == 0) ||
                      (((ulong)p_Var58->__next & local_a0) == 0)) ||
                     (((ulong)aiStack_98 & (ulong)p_Var58[1].__prev) == 0)) {
                    if (*(long *)(CONCAT44(uStack_274,local_278) + 0xd0) == 0) goto LAB_003fb750;
                    uVar127._0_4_ = *(uint *)(puVar132 + 4);
                    param_6._0_4_ = (uint)uVar127 >> 0x10 & 0xff;
                    param_6._4_4_ = 0;
                    uVar120._4_4_ = 0;
                    uVar120._0_4_ = (uint)uVar127 >> 0x18;
                    ppStackY_2a0 = (pthread_mutex_t *)0x3fbb7e;
                    uVar69 = uVar70;
                    hb_buffer_t::message
                              (auVar261._0_8_,uVar80,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,
                               in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,
                               (hb_buffer_t *)CONCAT44(uStack_274,local_278),_uStack_280,
                               "skipped lookup %u feature \'%c%c%c%c\' because no glyph matches",
                               uVar70,uVar120,param_6,(char)((uint)uVar127 >> 8));
                    auVar261._8_8_ = uVar80;
                    auVar261._0_8_ = extraout_XMM0_Qa_32;
                  }
                  else {
                    uStack_88 = (hb_buffer_t *)CONCAT44(uStack_88._4_4_,(uint)uVar56);
                    uVar127._0_4_ = *(uint *)(puVar132 + 2);
                    uStack_90 = (pthread_mutex_t *)CONCAT44((uint)uVar127,(undefined4)uStack_90);
                    uStack_70 = 0xffffffff;
                    bStack_7a = (byte)puVar132[1] >> 1 & 1;
                    bStack_7b = (byte)puVar132[1] & 1;
                    bStack_78 = (byte)puVar132[1] >> 2 & 1;
                    bStack_79 = (byte)puVar132[1] >> 3 & 1;
                    puVar49 = *(undefined4 **)uVar100;
                    puVar114 = (ushort *)&_hb_NullPool;
                    if (puVar49 == (undefined4 *)0x0) {
                      puVar49 = &_hb_NullPool;
                    }
                    if (3 < (uint)puVar49[6]) {
                      puVar114 = *(ushort **)(puVar49 + 4);
                    }
                    uVar75 = *puVar114;
                    uVar69._2_1_ = '\0';
                    uVar69._3_1_ = '\0';
                    uVar69._4_1_ = '\0';
                    uVar69._5_1_ = '\0';
                    uVar69._6_1_ = '\0';
                    uVar69._7_1_ = '\0';
                    uVar69._0_1_ = (bool)(char)uVar75;
                    uVar69._1_1_ = (char)(uVar75 >> 8);
                    uVar102 = &_hb_NullPool;
                    if (uVar75 == 0x100) {
                      uVar75 = puVar114[4];
                      uVar69 = &_hb_NullPool;
                      if (uVar75 != 0) {
                        uVar69 = (long)puVar114 + (ulong)(ushort)(uVar75 << 8 | uVar75 >> 8);
                      }
                      uVar102 = &_hb_NullPool;
                      if (uVar56 < (ushort)(*(ushort *)uVar69 << 8 | *(ushort *)uVar69 >> 8)) {
                        uVar75 = *(ushort *)((hb_buffer_t *)(uVar69 + 2) + uVar70 * 2);
                        uVar102 = &_hb_NullPool;
                        if (uVar75 != 0) {
                          uVar102 = uVar69 + (ulong)(ushort)(uVar75 << 8 | uVar75 >> 8);
                          uVar69 = uVar102;
                        }
                      }
                    }
                    uVar80._0_4_ = *(uint *)&((__pthread_internal_list *)(uStack_118 + 0x60))->
                                             __prev;
                    uVar120 = uStack_118;
                    uVar107 = uVar100;
                    if (((uint)uVar80 != 0) &&
                       (param_6._4_4_ = 0, param_6._0_4_ = (uint)uVar127, (uint)uVar127 != 0)) {
                      uVar105 = *(ushort *)(uVar102 + 4) << 8 | *(ushort *)(uVar102 + 4) >> 8;
                      uVar75 = *(ushort *)(uVar102 + 2) >> 8;
                      uVar106 = *(ushort *)(uVar102 + 2) << 8 | uVar75;
                      uStack_160 = (uint)uVar106;
                      if ((uVar75 & 0x10) != 0) {
                        uStack_160 = CONCAT22(*(ushort *)
                                               ((hb_buffer_t *)(uVar102 + 6) + (ulong)uVar105 * 2)
                                              << 8 | *(ushort *)
                                                      ((hb_buffer_t *)(uVar102 + 6) +
                                                      (ulong)uVar105 * 2) >> 8,uVar106);
                      }
                      uStack_88 = (hb_buffer_t *)CONCAT44(uStack_160,(uint)uVar56);
                      phStack_168 = (hb_ot_apply_context_t *)&uStack_1b8;
                      cStack_1a8 = (char)phStack_168;
                      cStack_1a7 = (char)((ulong)phStack_168 >> 8);
                      cStack_1a6 = (char)((ulong)phStack_168 >> 0x10);
                      cStack_1a5 = (char)((ulong)phStack_168 >> 0x18);
                      uStack_1a4 = (uint)((ulong)phStack_168 >> 0x20);
                      auStack_190 = (undefined1  [16])0x0;
                      _iStack_180 = (pthread_mutex_t *)0x0;
                      auStack_1a0._0_4_ = uStack_160;
                      bStack_155 = bStack_79;
                      if (iStack_130 != 0) {
                        bStack_155 = 0;
                      }
                      uStack_156 = iStack_130 == 1;
                      auStack_1a0[8] = uStack_156;
                      bStack_197 = bStack_7a;
                      _bStack_195 = auVar259._11_5_;
                      bStack_196 = (bool)uStack_156;
                      auStack_1a0._4_4_ = (uint)uVar127;
                      bStack_195 = bStack_155;
                      uStack_193 = auVar259._13_3_;
                      cStack_194 = 0;
                      auStack_150 = (undefined1  [16])0x0;
                      uStack_140 = 0;
                      uVar69._1_7_ = (undefined7)((ulong)auStack_190 >> 8);
                      uVar69._0_1_ = bStack_7b != 0 || (bool)uStack_156;
                      uStack_157 = 1;
                      uStack_15c = 0xffffffff;
                      uStack_154 = 0;
                      *(undefined4 *)(uStack_118 + 0x5c) = 0;
                      uStack_178 = (uint)uVar80;
                      uStack_158 = uVar69._0_1_;
                      uStack_138 = (uint)uVar80;
                      auVar261 = apply_forward(phStack_168,(ulong *)p_Var58,(uint)uVar105);
                    }
                  }
                  uVar80 = uStack_268;
                  uVar102 = auVar261._8_8_;
                  uVar100 = uVar107;
                  if (*(long *)(CONCAT44(uStack_274,local_278) + 0xd0) != 0) {
                    uVar127._0_4_ = *(uint *)(puVar132 + 4);
                    param_6._0_4_ = (uint)uVar127 >> 0x10 & 0xff;
                    param_6._4_4_ = 0;
                    uVar120._4_4_ = 0;
                    uVar120._0_4_ = (uint)uVar127 >> 0x18;
                    ppStackY_2a0 = (pthread_mutex_t *)0x3fbbd0;
                    hb_buffer_t::message
                              (auVar261._0_8_,uVar102,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,
                               in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,
                               (hb_buffer_t *)CONCAT44(uStack_274,local_278),_uStack_280,
                               "end lookup %u feature \'%c%c%c%c\'",uVar70,uVar120,param_6,
                               (char)((uint)uVar127 >> 8));
                    auVar261._8_8_ = uVar102;
                    auVar261._0_8_ = extraout_XMM0_Qa_33;
                    uVar69 = uVar70;
                    uVar100 = uVar80;
                  }
                }
              }
LAB_003fb750:
              uVar78 = CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)) + 1;
              param_2 = _uStack_258;
            } while (uVar78 < *(uint *)auStack_23c._12_8_);
            uVar92 = uStack_220;
          }
          if (*(code **)(auStack_23c._12_8_ + 8) != (code *)0x0) {
            cVar42 = (**(code **)(auStack_23c._12_8_ + 8))
                               (_uStack_228,_uStack_280,CONCAT44(uStack_274,local_278));
            auVar32._8_8_ = extraout_XMM1_Qa_32;
            auVar32._0_8_ = extraout_XMM0_Qa_34;
            auVar261._8_8_ = extraout_XMM1_Qa_32;
            auVar261._0_8_ = extraout_XMM0_Qa_34;
            if (cVar42 != '\0') {
              uVar127._0_4_ = *(uint *)_uStack_250;
              param_6._4_4_ = 0;
              param_6._0_4_ = (uint)uVar127;
              if ((uint)uVar127 == 0) {
                local_a8 = (pthread_mutex_t *)0x0;
                local_a0 = 0;
                aiStack_98 = (int  [2])0x0;
              }
              else {
                uVar107 = *(undefined8 *)_uStack_260;
                uVar120._0_4_ = (uint)uVar127 - 1;
                uVar120._4_4_ = 0;
                uVar100 = uVar107;
                if ((uint)uVar120 < 3) {
                  local_a8 = (pthread_mutex_t *)0x0;
                }
                else {
                  uVar80._0_4_ = (uint)uVar127 & 0xfffffffc;
                  local_a8 = (pthread_mutex_t *)0x0;
                  do {
                    local_a8 = local_a8 | 1L << ((ulong)(*(uint *)uVar100 >> 4) & 0x3f) |
                               1L << ((ulong)(*(uint *)(uVar100 + 0x14) >> 4) & 0x3f) |
                               1L << ((ulong)((uint)(((pthread_mutex_t *)(uVar100 + 0x28))->__data).
                                                    __lock >> 4) & 0x3f) |
                               1L << ((ulong)(*(uint *)(uVar100 + 0x3c) >> 4) & 0x3f);
                    uVar100 = uVar100 + 0x50;
                    uVar80._0_4_ = (uint)uVar80 - 4;
                  } while ((uint)uVar80 != 0);
                }
                if (((uint)uVar127 & 3) != 0) {
                  lVar88 = 0;
                  do {
                    local_a8 = local_a8 | 1L << ((ulong)(*(uint *)(uVar100 + lVar88) >> 4) & 0x3f);
                    lVar88 = lVar88 + 0x14;
                  } while (((uint)uVar127 & 3) * 0x14 != (int)lVar88);
                }
                uVar69 = uVar107;
                if ((uint)uVar120 < 3) {
                  local_a0 = 0;
                }
                else {
                  uVar80._0_4_ = (uint)uVar127 & 0xfffffffc;
                  local_a0 = 0;
                  do {
                    local_a0 = local_a0 | 1L << ((ulong)(byte)*(hb_buffer_t *)uVar69 & 0x3f) |
                               1L << ((ulong)(byte)*(hb_buffer_t *)(uVar69 + 0x14) & 0x3f) |
                               1L << ((ulong)(byte)((pthread_mutex_t *)(uVar69 + 0x28))->__size[0] &
                                     0x3f) |
                               1L << ((ulong)(byte)*(hb_buffer_t *)(uVar69 + 0x3c) & 0x3f);
                    uVar69 = uVar69 + 0x50;
                    uVar80._0_4_ = (uint)uVar80 - 4;
                  } while ((uint)uVar80 != 0);
                }
                if (((uint)uVar127 & 3) != 0) {
                  lVar88 = 0;
                  do {
                    local_a0 = local_a0 |
                               1L << ((ulong)(byte)*(hb_buffer_t *)(uVar69 + lVar88) & 0x3f);
                    lVar88 = lVar88 + 0x14;
                  } while (((uint)uVar127 & 3) * 0x14 != (int)lVar88);
                }
                if ((uint)uVar120 < 3) {
                  aiStack_98 = (int  [2])0x0;
                }
                else {
                  uVar69._0_4_ = (uint)uVar127 & 0xfffffffc;
                  uVar69._4_4_ = 0;
                  aiStack_98 = (int  [2])0x0;
                  do {
                    aiStack_98 = (int  [2])
                                 ((ulong)aiStack_98 | 1L << ((ulong)(*(uint *)uVar107 >> 9) & 0x3f)
                                  | 1L << ((ulong)(*(uint *)(uVar107 + 0x14) >> 9) & 0x3f) |
                                  1L << ((ulong)((uint)(((pthread_mutex_t *)(uVar107 + 0x28))->
                                                       __data).__lock >> 9) & 0x3f) |
                                 1L << ((ulong)(*(uint *)(uVar107 + 0x3c) >> 9) & 0x3f));
                    uVar107 = uVar107 + 0x50;
                    uVar69._0_4_ = (int)uVar69 - 4;
                    uVar69._4_4_ = 0;
                  } while ((uint)uVar69 != 0);
                }
                if (((uint)uVar127 & 3) != 0) {
                  param_6 = (ulong)((uint)uVar127 & 3) * 4;
                  uVar69 = (ulong)((uint)uVar127 & 3) * 0x14;
                  lVar88 = 0;
                  do {
                    aiStack_98 = (int  [2])
                                 ((ulong)aiStack_98 |
                                 1L << ((ulong)(*(uint *)(uVar107 + lVar88) >> 9) & 0x3f));
                    lVar88 = lVar88 + 0x14;
                  } while ((int)uVar69 != (int)lVar88);
                }
                uVar100 = uStack_268;
              }
              auVar261 = auVar32;
            }
          }
          uVar92 = uVar92 + 1;
          uVar99 = (ulong)*(uint *)(param_2 + 0xdc);
        } while (uVar92 < uVar99);
      }
      free(puStack_b0);
      auVar259 = hb_sanitize_context_t::~hb_sanitize_context_t(ahStack_110);
      auVar170._0_8_ = auVar259._8_8_;
      uVar107 = auVar259._0_8_;
      auVar170._8_8_ = extraout_XMM1_Qb_43;
      param_3._4_4_ = uStack_274;
      param_3._0_4_ = local_278;
      uVar68 = uVar69;
      if (((__pthread_internal_list *)((long)param_3 + 0xd0))->__prev !=
          (__pthread_internal_list *)0x0) {
        uVar127._0_4_ = *(uint *)(param_2 + 0x8c);
        uVar68._0_4_ = (uint)uVar127 >> 0x18;
        uVar68._4_4_ = 0;
        uVar120._0_4_ = (uint)uVar127 >> 0x10 & 0xff;
        uVar120._4_4_ = 0;
        param_6._4_4_ = 0;
        param_6._0_4_ = (uint)uVar127 >> 8 & 0xff;
        ppStackY_2a0 = (pthread_mutex_t *)0x3fbe5d;
        hb_buffer_t::message
                  (uVar107,auVar170._0_8_,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,in_XMM5._0_8_,
                   in_XMM6.__prev,in_XMM7.__prev,(hb_buffer_t *)param_3,_uStack_280,
                   "end table GPOS script tag \'%c%c%c%c\'",uVar68,uVar120,param_6,
                   (char)(uint)uVar127);
        uVar107 = extraout_XMM0_Qa_35;
      }
      goto LAB_003fbe61;
    }
    p_Var89 = p_Var58[6].__next;
    if (p_Var89 == (__pthread_internal_list *)0x0) {
      uVar100 = &_hb_NullPool;
      goto LAB_003fb644;
    }
    uVar100 = calloc(1,0x18);
    if ((pthread_mutex_t *)uVar100 == (pthread_mutex_t *)0x0) {
      LOCK();
      bVar137 = p_Var58[0x13].__next == (__pthread_internal_list *)0x0;
      if (bVar137) {
        p_Var58[0x13].__next = (__pthread_internal_list *)&_hb_NullPool;
      }
      UNLOCK();
      uVar107 = extraout_XMM0_Qa_44;
      if (!bVar137) goto LAB_003fe73d;
      uVar100 = &_hb_NullPool;
      uVar69._4_4_ = uStack_274;
      uVar69._0_4_ = local_278;
      goto LAB_003fb644;
    }
    auVar259 = OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::accelerator_t
                         ((accelerator_t<OT::Layout::GPOS> *)uVar100,(long)p_Var89);
    auVar170._0_8_ = auVar259._8_8_;
    uVar107 = auVar259._0_8_;
    auVar170._8_8_ = extraout_XMM1_Qb_55;
    LOCK();
    bVar137 = p_Var58[0x13].__next == (__pthread_internal_list *)0x0;
    if (bVar137) {
      p_Var58[0x13].__next = (__pthread_internal_list *)uVar100;
    }
    UNLOCK();
    if (bVar137) goto LAB_003fb644;
    OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::~accelerator_t
              ((accelerator_t<OT::Layout::GPOS> *)uVar100);
    auVar170._8_8_ = extraout_XMM1_Qb_54;
    auVar170._0_8_ = extraout_XMM1_Qa_45;
    free((void *)uVar100);
    uVar107 = extraout_XMM0_Qa_43;
LAB_003fe73d:
    uVar69._4_4_ = uStack_274;
    uVar69._0_4_ = local_278;
    uVar100 = p_Var58[0x13].__next;
  } while( true );
code_r0x003f7dec:
  while( true ) {
    ppVar129 = (pthread_mutex_t *)(uVar80 & 0xffffffff);
    uVar59 = uVar59 + 0x14;
    uVar80 = uVar80 + -1;
    auVar259._0_8_ = auVar259._0_8_ + -0x14;
    bVar137 = (ulong)uVar100 < ppVar129;
    uVar23 = uVar102;
code_r0x003f7dfd:
    uVar102 = uVar23;
    if (!bVar137) break;
LAB_003f7db0:
    uVar125 = *(undefined4 *)&((__pthread_internal_list *)(auVar259._0_8_ + 0x10))->__prev;
    cStack_1a8 = (char)uVar125;
    cStack_1a7 = (char)((uint)uVar125 >> 8);
    cStack_1a6 = (char)((uint)uVar125 >> 0x10);
    cStack_1a5 = (char)((uint)uVar125 >> 0x18);
    uStack_1b8 = *(int **)auVar259._0_8_;
    auVar18 = *(undefined1 (*) [12])auVar259._0_8_;
    uStack_1b0 = (uint)*(undefined8 *)(auVar259._0_8_ + 8);
    uStack_1ac = (undefined4)((ulong)*(undefined8 *)(auVar259._0_8_ + 8) >> 0x20);
    *(undefined4 *)&((__pthread_internal_list *)(auVar259._0_8_ + 0x10))->__prev =
         *(undefined4 *)&((__pthread_internal_list *)(uVar59 + 0x10))->__prev;
    uVar107 = *(undefined8 *)(uVar59 + 8);
    *(long *)auVar259._0_8_ = *(long *)uVar59;
    *(undefined8 *)(auVar259._0_8_ + 8) = uVar107;
    *(undefined4 *)&((__pthread_internal_list *)(uVar59 + 0x10))->__prev = uVar125;
    _Var144.__next._4_4_ = uStack_1ac;
    _Var144._0_12_ = auVar18;
    *(__pthread_internal_list *)uVar59 = _Var144;
    uVar100 = uVar100 + 1;
  }
  goto LAB_003f7dff;
code_r0x003f7fe1:
  _uStack_280 = uVar95;
  iRam8d48c96348c373ca = (int)auVar259._0_8_;
  auVar259._0_4_ = iRam8d48c96348c373ca + 0x21095d + (uint)bVar137;
  auVar259._4_4_ = 0;
  piVar52 = uStack_1b8;
code_r0x003f7fe5:
  uStack_1b8._4_4_ = (uint)((ulong)piVar52 >> 0x20);
  uVar59 = SEXT48((int)uVar59);
  uVar93._4_4_ = 0;
  uVar93._0_4_ = *(uint *)(&DAT_0060894c + uVar59 * 4);
  uVar102 = uVar82;
  if (*(uint *)(&DAT_0060894c + uVar59 * 4) == (uint)auVar259._0_8_)
  goto _hb_ot_shape_switchD_003f8054_caseD_2015;
LAB_003f807d:
  do {
    uStack_274 = SUB84(uVar102,4);
    local_278 = (undefined4)uVar102;
    uStack_1b8._0_4_ = 0;
    lVar88 = *(long *)(*(long *)(_uStack_280 + 0x90) + 0x10);
    if (lVar88 == 0) {
      uVar120 = (pthread_mutex_t *)0x0;
    }
    else {
      uVar120 = *(undefined8 *)(lVar88 + 0x10);
    }
    uVar59 = &uStack_1b8;
    iVar43 = (**(code **)(*(long *)(_uStack_280 + 0x90) + 0x30))
                       (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),uVar93 & 0xffffffff);
    uVar22._4_4_ = uStack_274;
    uVar22._0_4_ = local_278;
    uVar102._4_4_ = uStack_274;
    uVar102._0_4_ = local_278;
    in_XMM1.__next = extraout_XMM1_Qb_16;
    in_XMM1.__prev = extraout_XMM1_Qa_13;
    _Var144.__next = extraout_XMM0_Qb_10;
    _Var144.__prev = extraout_XMM0_Qa_14;
    piVar52 = (int *)CONCAT44(uStack_1b8._4_4_,(uint)uStack_1b8);
    if (iVar43 != 0) {
      *(int *)(param_2 + unaff_RBX) = (int)uVar93;
      uVar102 = uVar22;
      piVar52 = (int *)CONCAT44(uStack_1b8._4_4_,(uint)uStack_1b8);
    }
_hb_ot_shape_switchD_003f8054_caseD_2015:
    do {
      while( true ) {
        while( true ) {
          uStack_1b8 = piVar52;
          unaff_RBX = unaff_RBX + 0x14;
          if (uVar127 == unaff_RBX) goto LAB_003f817b;
LAB_003f7fb5:
          auVar259._4_4_ = 0;
          auVar259._0_4_ = *(uint *)(param_2 + unaff_RBX);
          uVar59._0_4_ = *(uint *)(param_2 + unaff_RBX) >> 8;
          uVar59._4_4_ = 0;
          uVar25 = uVar102;
          piVar52 = uStack_1b8;
          if (0xfd < (uint)uVar59) break;
code_r0x003f7fc6:
          uVar26 = uVar25;
          if ((int)uVar59 == 0x20) {
LAB_003f8038:
            uVar102 = uVar26;
            uStack_274 = SUB84(uVar102,4);
            uVar59._0_4_ = (int)auVar259._0_8_ - 0x2013;
            uVar59._4_4_ = 0;
            piVar52 = uStack_1b8;
            if ((uint)uVar59 < 0x14) goto code_r0x003f8047;
          }
          else {
            uVar102 = uVar25;
            piVar52 = uStack_1b8;
            if ((int)uVar59 == 0x30) {
              uVar59._0_4_ = (int)auVar259._0_8_ - 0x3001;
              uVar59._4_4_ = 0;
              if ((uint)uVar59 < 0x17) {
                uVar82 = uVar25;
                if ((0x79ff83U >> ((uint)uVar59 & 0x1f) & 1) != 0) goto code_r0x003f7fe5;
              }
            }
          }
        }
LAB_003f8000:
        uStack_1b8._4_4_ = (uint)((ulong)piVar52 >> 0x20);
        uStack_274 = SUB84(uVar102,4);
        if ((int)uVar59 == 0xfe) break;
        if ((int)uVar59 == 0xff) {
          uVar59._0_4_ = (int)auVar259._0_8_ - 0xff01;
          uVar59._4_4_ = 0;
          if ((uint)uVar59 < 0x5d) {
            uStack_1b8 = piVar52;
                    /* WARNING: Could not recover jumptable at 0x003f8027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar259 = (*(code *)((long)*(int *)((long)param_3 + uVar59 * 4) + (long)param_3))();
            return auVar259;
          }
        }
      }
      uVar93 = (pthread_mutex_t *)0xfe34;
    } while ((int)auVar259._0_8_ != 0xfe4f);
  } while( true );
LAB_003f8560:
  uVar81 = *(uint *)(uVar120 + (ulong)((int)uVar92 + 1) * 0x14);
  *(undefined4 *)((hb_buffer_t *)(uVar120 + 0xc) + uVar92 * 0x14) = 0;
  uVar59 = (long)(uVar120 + uVar92 * 0x14) + 0xc;
  p_Var58 = ((__pthread_internal_list *)(uStack_268 + 0x90))->__prev;
  if (((uVar81 & 0xfffffff0) == 0xfe00) || (0xffffff0f < uVar81 - 0xe01f0)) {
    if (p_Var58[1].__prev == (__pthread_internal_list *)0x0) {
      p_Var89 = (__pthread_internal_list *)0x0;
    }
    else {
      p_Var89 = p_Var58[1].__prev[2].__prev;
    }
    iVar43 = (*(code *)p_Var58[4].__prev)
                       (uStack_268,*(undefined8 *)(uStack_268 + 0x98),
                        *(undefined4 *)(uVar120 + uVar92 * 0x14),uVar81,uVar59,p_Var89);
    in_XMM1.__next = extraout_XMM1_Qb_21;
    in_XMM1.__prev = extraout_XMM1_Qa_18;
    if (iVar43 != 0) {
      uVar107 = (ulong)*(uint *)(uVar100 + 0x5c) * 5;
      local_48 = *(int *)((long)((__pthread_internal_list *)(uVar100 + 0x70))->__prev +
                         (ulong)*(uint *)(uVar100 + 0x5c) * 0x14);
      hb_buffer_t::replace_glyphs<unsigned_int>((hb_buffer_t *)uVar100,2,&local_48);
      goto LAB_003f8920;
    }
    p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
    uVar99 = (ulong)*(uint *)(uVar100 + 0x5c);
    uVar125 = *(undefined4 *)((long)p_Var58 + uVar99 * 0x14);
    *(undefined4 *)((long)p_Var58 + uVar99 * 0x14 + 0xc) = 0;
    (*(code *)((__pthread_internal_list *)(uStack_268 + 0x90))->__prev[3].__prev)
              (uStack_268,*(undefined8 *)(uStack_268 + 0x98),uVar125,
               (long)p_Var58 + uVar99 * 0x14 + 0xc);
    if (*(char *)(uVar100 + 0x5a) == '\0') {
LAB_003f87eb:
      uVar87 = *(int *)(uVar100 + 0x5c) + 1;
      *(uint *)(uVar100 + 0x5c) = uVar87;
    }
    else {
      p_Var89 = *(__pthread_internal_list **)&((pthread_mutex_t *)(uVar100 + 0x78))->__data;
      p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
      iVar43 = *(int *)(uVar100 + 100);
      if ((p_Var89 == p_Var58) && (iVar43 == *(int *)(uVar100 + 0x5c))) {
LAB_003f87e5:
        *(int *)(uVar100 + 100) = iVar43 + 1;
        goto LAB_003f87eb;
      }
      uVar87 = iVar43 + 1;
      if ((uVar87 == 0) || (uVar87 < *(uint *)(uVar100 + 0x68))) {
        if (p_Var89 == p_Var58) {
LAB_003f8788:
          uVar87 = *(uint *)(uVar100 + 100);
          if (*(int *)(uVar100 + 0x5c) + 1U < uVar87 + 1) {
            p_Var89 = ((__pthread_internal_list *)(uVar100 + 0x80))->__prev;
            *(__pthread_internal_list **)&((pthread_mutex_t *)(uVar100 + 0x78))->__data = p_Var89;
            if ((ulong)uVar87 != 0) {
              memcpy(p_Var89,p_Var58,(ulong)uVar87 * 0x14);
              p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
              p_Var89 = *(__pthread_internal_list **)&((pthread_mutex_t *)(uVar100 + 0x78))->__data;
            }
          }
          else {
            p_Var89 = p_Var58;
          }
        }
LAB_003f87c2:
        uVar87 = *(uint *)(uVar100 + 0x5c);
        uVar81 = *(uint *)(uVar100 + 100);
        *(undefined4 *)((long)p_Var89 + (ulong)uVar81 * 0x14 + 0x10) =
             *(undefined4 *)((long)p_Var58 + (ulong)uVar87 * 0x14 + 0x10);
        puVar44 = (undefined8 *)((long)p_Var58 + (ulong)uVar87 * 0x14);
        uVar107 = puVar44[1];
        puVar2 = (undefined8 *)((long)p_Var89 + (ulong)uVar81 * 0x14);
        *puVar2 = *puVar44;
        puVar2[1] = uVar107;
        iVar43 = *(int *)(uVar100 + 100);
        goto LAB_003f87e5;
      }
      uVar107 = hb_buffer_t::enlarge((hb_buffer_t *)uVar100,uVar87);
      if ((char)uVar107 != '\0') {
        p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
        p_Var89 = *(__pthread_internal_list **)&((pthread_mutex_t *)(uVar100 + 0x78))->__data;
        if (p_Var89 == p_Var58) goto LAB_003f8788;
        goto LAB_003f87c2;
      }
      uVar87 = *(uint *)(uVar100 + 0x5c);
    }
    *(byte *)&((__pthread_internal_list *)(uVar100 + 0xc0))->__prev =
         *(byte *)&((__pthread_internal_list *)(uVar100 + 0xc0))->__prev | 0x80;
    p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
    *(ushort *)((long)p_Var58 + (ulong)uVar87 * 0x14 + 0x10) =
         *(ushort *)((long)p_Var58 + (ulong)uVar87 * 0x14 + 0x10) & 0xe0 | 0x401;
    if (*(int *)(uVar100 + 0x2c) != -1) {
      puVar132 = (ushort *)
                 ((long)((__pthread_internal_list *)(uVar100 + 0x70))->__prev +
                 (ulong)*(uint *)(uVar100 + 0x5c) * 0x14 + 0x10);
      *puVar132 = *puVar132 & 0xffdf;
    }
    p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
    uVar99 = (ulong)*(uint *)(uVar100 + 0x5c);
    uVar125 = *(undefined4 *)((long)p_Var58 + uVar99 * 0x14);
    *(undefined4 *)((long)p_Var58 + uVar99 * 0x14 + 0xc) = 0;
    p_Var89 = ((__pthread_internal_list *)(uStack_268 + 0x90))->__prev;
    p_Var113 = p_Var89[1].__prev;
    if (p_Var113 == (__pthread_internal_list *)0x0) {
      uVar59 = (pthread_mutex_t *)0x0;
    }
    else {
      uVar59 = p_Var113[1].__prev;
    }
    uVar107 = (long)p_Var58 + uVar99 * 0x14 + 0xc;
    (*(code *)p_Var89[3].__prev)(uStack_268,*(undefined8 *)(uStack_268 + 0x98),uVar125);
    in_XMM1.__next = extraout_XMM1_Qb_22;
    in_XMM1.__prev = extraout_XMM1_Qa_19;
    if (*(char *)(uVar100 + 0x5a) != '\0') {
      p_Var89 = *(__pthread_internal_list **)&((pthread_mutex_t *)(uVar100 + 0x78))->__data;
      p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
      iVar43 = *(int *)(uVar100 + 100);
      if ((p_Var89 != p_Var58) || (iVar43 != *(int *)(uVar100 + 0x5c))) {
        uVar87 = iVar43 + 1;
        if ((uVar87 == 0) || (uVar87 < *(uint *)(uVar100 + 0x68))) {
          if (p_Var89 == p_Var58) {
LAB_003f88b4:
            uVar87 = *(uint *)(uVar100 + 100);
            if (*(int *)(uVar100 + 0x5c) + 1U < uVar87 + 1) {
              p_Var89 = ((__pthread_internal_list *)(uVar100 + 0x80))->__prev;
              *(__pthread_internal_list **)&((pthread_mutex_t *)(uVar100 + 0x78))->__data = p_Var89;
              if ((ulong)uVar87 != 0) {
                memcpy(p_Var89,p_Var58,(ulong)uVar87 * 0x14);
                p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
                p_Var89 = *(__pthread_internal_list **)
                           &((pthread_mutex_t *)(uVar100 + 0x78))->__data;
              }
            }
            else {
              p_Var89 = p_Var58;
            }
          }
        }
        else {
          uVar120 = hb_buffer_t::enlarge((hb_buffer_t *)uVar100,uVar87);
          uVar87 = uStack_248;
          if ((char)uVar120 == '\0') goto LAB_003f8920;
          p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
          p_Var89 = *(__pthread_internal_list **)&((pthread_mutex_t *)(uVar100 + 0x78))->__data;
          if (p_Var89 == p_Var58) goto LAB_003f88b4;
        }
        uVar87 = *(uint *)(uVar100 + 0x5c);
        uVar99 = (ulong)*(uint *)(uVar100 + 100);
        uVar107 = uVar99 * 5;
        *(undefined4 *)((long)p_Var89 + uVar99 * 0x14 + 0x10) =
             *(undefined4 *)((long)p_Var58 + (ulong)uVar87 * 0x14 + 0x10);
        puVar44 = (undefined8 *)((long)p_Var58 + (ulong)uVar87 * 0x14);
        uVar120 = puVar44[1];
        puVar2 = (undefined8 *)((long)p_Var89 + uVar99 * 0x14);
        *puVar2 = *puVar44;
        puVar2[1] = uVar120;
        iVar43 = *(int *)(uVar100 + 100);
      }
      *(int *)(uVar100 + 100) = iVar43 + 1;
    }
    *(int *)(uVar100 + 0x5c) = *(int *)(uVar100 + 0x5c) + 1;
    uVar87 = uStack_248;
LAB_003f8920:
    uVar81 = *(uint *)(uVar100 + 0x5c);
    uVar120 = uVar59;
joined_r0x003f892a:
    uVar59 = uVar107;
    uVar92 = (ulong)uVar81;
    if (uVar81 < (uint)uVar80) {
      do {
        if (*(char *)(uVar100 + 0x58) == '\0') break;
        p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
        uVar81 = *(uint *)((long)p_Var58 + uVar92 * 0x14);
        if (((uVar81 & 0xfffffff0) != 0xfe00) &&
           (uVar59._0_4_ = uVar81 - 0xe01f0, uVar59._4_4_ = 0, (uint)uVar59 < 0xffffff10)) break;
        *(undefined4 *)((long)p_Var58 + uVar92 * 0x14 + 0xc) = 0;
        p_Var89 = ((__pthread_internal_list *)(uStack_268 + 0x90))->__prev;
        p_Var113 = p_Var89[1].__prev;
        if (p_Var113 == (__pthread_internal_list *)0x0) {
          uVar120 = (pthread_mutex_t *)0x0;
        }
        else {
          uVar120 = p_Var113[1].__prev;
        }
        uVar59 = (long)p_Var58 + uVar92 * 0x14 + 0xc;
        (*(code *)p_Var89[3].__prev)();
        in_XMM1.__next = extraout_XMM1_Qb_23;
        in_XMM1.__prev = extraout_XMM1_Qa_20;
        if (*(char *)(uVar100 + 0x5a) != '\0') {
          p_Var89 = *(__pthread_internal_list **)&((pthread_mutex_t *)(uVar100 + 0x78))->__data;
          p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
          iVar43 = *(int *)(uVar100 + 100);
          if ((p_Var89 != p_Var58) || (iVar43 != *(int *)(uVar100 + 0x5c))) {
            uVar81 = iVar43 + 1;
            if ((uVar81 == 0) || (uVar81 < *(uint *)(uVar100 + 0x68))) {
              if (p_Var89 == p_Var58) goto LAB_003f8a15;
            }
            else {
              uVar107 = hb_buffer_t::enlarge((hb_buffer_t *)uVar100,uVar81);
              uVar87 = uStack_248;
              if ((char)uVar107 == '\0') goto LAB_003f8a7e;
              p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
              p_Var89 = *(__pthread_internal_list **)&((pthread_mutex_t *)(uVar100 + 0x78))->__data;
              if (p_Var89 == p_Var58) {
LAB_003f8a15:
                uVar81 = *(uint *)(uVar100 + 100);
                if (*(int *)(uVar100 + 0x5c) + 1U < uVar81 + 1) {
                  p_Var89 = ((__pthread_internal_list *)(uVar100 + 0x80))->__prev;
                  *(__pthread_internal_list **)&((pthread_mutex_t *)(uVar100 + 0x78))->__data =
                       p_Var89;
                  if ((ulong)uVar81 != 0) {
                    memcpy(p_Var89,p_Var58,(ulong)uVar81 * 0x14);
                    p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
                    p_Var89 = *(__pthread_internal_list **)
                               &((pthread_mutex_t *)(uVar100 + 0x78))->__data;
                  }
                  uVar87 = uStack_248;
                }
                else {
                  p_Var89 = p_Var58;
                }
              }
            }
            uVar81 = *(uint *)(uVar100 + 0x5c);
            uVar99 = (ulong)*(uint *)(uVar100 + 100);
            uVar59 = uVar99 * 5;
            *(undefined4 *)((long)p_Var89 + uVar99 * 0x14 + 0x10) =
                 *(undefined4 *)((long)p_Var58 + (ulong)uVar81 * 0x14 + 0x10);
            puVar44 = (undefined8 *)((long)p_Var58 + (ulong)uVar81 * 0x14);
            uVar107 = puVar44[1];
            puVar2 = (undefined8 *)((long)p_Var89 + uVar99 * 0x14);
            *puVar2 = *puVar44;
            puVar2[1] = uVar107;
            iVar43 = *(int *)(uVar100 + 100);
          }
          *(int *)(uVar100 + 100) = iVar43 + 1;
        }
        uVar81 = *(int *)(uVar100 + 0x5c) + 1;
        uVar92 = (ulong)uVar81;
        *(uint *)(uVar100 + 0x5c) = uVar81;
        if ((uint)uVar80 <= uVar81) break;
      } while( true );
    }
    goto LAB_003f8671;
  }
  if (p_Var58[1].__prev == (__pthread_internal_list *)0x0) {
    uVar120 = (pthread_mutex_t *)0x0;
  }
  else {
    uVar120 = p_Var58[1].__prev[1].__prev;
  }
  (*(code *)p_Var58[3].__prev)();
  in_XMM1.__next = extraout_XMM1_Qb_20;
  in_XMM1.__prev = extraout_XMM1_Qa_17;
  if (*(char *)(uVar100 + 0x5a) == '\0') {
LAB_003f8663:
    uVar81 = *(int *)(uVar100 + 0x5c) + 1;
    *(uint *)(uVar100 + 0x5c) = uVar81;
  }
  else {
    p_Var89 = *(__pthread_internal_list **)&((pthread_mutex_t *)(uVar100 + 0x78))->__data;
    p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
    iVar43 = *(int *)(uVar100 + 100);
    if ((p_Var89 == p_Var58) && (iVar43 == *(int *)(uVar100 + 0x5c))) {
LAB_003f865d:
      *(int *)(uVar100 + 100) = iVar43 + 1;
      goto LAB_003f8663;
    }
    uVar81 = iVar43 + 1;
    if ((uVar81 == 0) || (uVar81 < *(uint *)(uVar100 + 0x68))) {
      if (p_Var89 == p_Var58) {
LAB_003f8600:
        uVar81 = *(uint *)(uVar100 + 100);
        if (*(int *)(uVar100 + 0x5c) + 1U < uVar81 + 1) {
          p_Var89 = ((__pthread_internal_list *)(uVar100 + 0x80))->__prev;
          *(__pthread_internal_list **)&((pthread_mutex_t *)(uVar100 + 0x78))->__data = p_Var89;
          if ((ulong)uVar81 != 0) {
            memcpy(p_Var89,p_Var58,(ulong)uVar81 * 0x14);
            p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
            p_Var89 = *(__pthread_internal_list **)&((pthread_mutex_t *)(uVar100 + 0x78))->__data;
          }
        }
        else {
          p_Var89 = p_Var58;
        }
      }
LAB_003f863a:
      uVar81 = *(uint *)(uVar100 + 0x5c);
      uVar99 = (ulong)*(uint *)(uVar100 + 100);
      uVar59 = uVar99 * 5;
      *(undefined4 *)((long)p_Var89 + uVar99 * 0x14 + 0x10) =
           *(undefined4 *)((long)p_Var58 + (ulong)uVar81 * 0x14 + 0x10);
      puVar44 = (undefined8 *)((long)p_Var58 + (ulong)uVar81 * 0x14);
      uVar107 = puVar44[1];
      puVar2 = (undefined8 *)((long)p_Var89 + uVar99 * 0x14);
      *puVar2 = *puVar44;
      puVar2[1] = uVar107;
      iVar43 = *(int *)(uVar100 + 100);
      goto LAB_003f865d;
    }
    uVar107 = hb_buffer_t::enlarge((hb_buffer_t *)uVar100,uVar81);
    uVar87 = uStack_248;
    if ((char)uVar107 != '\0') {
      p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
      p_Var89 = *(__pthread_internal_list **)&((pthread_mutex_t *)(uVar100 + 0x78))->__data;
      if (p_Var89 == p_Var58) goto LAB_003f8600;
      goto LAB_003f863a;
    }
    uVar81 = *(uint *)(uVar100 + 0x5c);
  }
  uVar92 = (ulong)uVar81;
LAB_003f8671:
  uVar111 = uStack_268;
  if ((uVar57 <= (uint)uVar92) || (*(char *)(uVar100 + 0x58) == '\0')) goto LAB_003f8afe;
  uVar120 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
  goto LAB_003f8560;
LAB_003f8a7e:
  uVar81 = *(uint *)(uVar100 + 0x5c);
  uVar107 = uVar59;
  goto joined_r0x003f892a;
LAB_003f8afe:
  if ((uint)uVar80 <= (uint)uVar92) goto LAB_003f8410;
  p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
  uVar125 = *(undefined4 *)((long)p_Var58 + uVar92 * 0x14);
  *(undefined4 *)((long)p_Var58 + uVar92 * 0x14 + 0xc) = 0;
  p_Var89 = ((__pthread_internal_list *)(uVar111 + 0x90))->__prev;
  p_Var113 = p_Var89[1].__prev;
  if (p_Var113 == (__pthread_internal_list *)0x0) {
    uVar120 = (pthread_mutex_t *)0x0;
  }
  else {
    uVar120 = p_Var113[1].__prev;
  }
  uVar59 = (long)p_Var58 + uVar92 * 0x14 + 0xc;
  uVar92 = (*(code *)p_Var89[3].__prev)(uVar111,*(undefined8 *)(uVar111 + 0x98),uVar125);
  in_XMM1.__next = extraout_XMM1_Qb_24;
  in_XMM1.__prev = extraout_XMM1_Qa_21;
  if (*(char *)(uVar100 + 0x5a) != '\0') {
    p_Var89 = *(__pthread_internal_list **)&((pthread_mutex_t *)(uVar100 + 0x78))->__data;
    p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
    iVar43 = *(int *)(uVar100 + 100);
    if ((p_Var89 != p_Var58) || (iVar43 != *(int *)(uVar100 + 0x5c))) {
      uVar80._0_4_ = iVar43 + 1;
      if (((uint)uVar80 == 0) || ((uint)uVar80 < *(uint *)(uVar100 + 0x68))) {
        if (p_Var89 == p_Var58) {
LAB_003f8b77:
          uVar80._0_4_ = *(uint *)(uVar100 + 100);
          if (*(int *)(uVar100 + 0x5c) + 1U < (uint)uVar80 + 1) {
            p_Var89 = ((__pthread_internal_list *)(uVar100 + 0x80))->__prev;
            *(__pthread_internal_list **)&((pthread_mutex_t *)(uVar100 + 0x78))->__data = p_Var89;
            if ((ulong)(uint)uVar80 != 0) {
              memcpy(p_Var89,p_Var58,(ulong)(uint)uVar80 * 0x14);
              p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
              p_Var89 = *(__pthread_internal_list **)&((pthread_mutex_t *)(uVar100 + 0x78))->__data;
            }
          }
          else {
            p_Var89 = p_Var58;
          }
        }
      }
      else {
        uVar92 = hb_buffer_t::enlarge((hb_buffer_t *)uVar100,(uint)uVar80);
        if ((char)uVar92 == '\0') goto LAB_003f8410;
        p_Var58 = ((__pthread_internal_list *)(uVar100 + 0x70))->__prev;
        p_Var89 = *(__pthread_internal_list **)&((pthread_mutex_t *)(uVar100 + 0x78))->__data;
        if (p_Var89 == p_Var58) goto LAB_003f8b77;
      }
      uVar80._0_4_ = *(uint *)(uVar100 + 0x5c);
      uVar99 = (ulong)*(uint *)(uVar100 + 100);
      uVar59 = uVar99 * 5;
      *(undefined4 *)((long)p_Var89 + uVar99 * 0x14 + 0x10) =
           *(undefined4 *)((long)p_Var58 + (ulong)(uint)uVar80 * 0x14 + 0x10);
      puVar44 = (undefined8 *)((long)p_Var58 + (ulong)(uint)uVar80 * 0x14);
      uVar107 = puVar44[1];
      puVar2 = (undefined8 *)((long)p_Var89 + uVar99 * 0x14);
      *puVar2 = *puVar44;
      puVar2[1] = uVar107;
      iVar43 = *(int *)(uVar100 + 100);
    }
    uVar92 = (ulong)(iVar43 + 1U);
    *(uint *)(uVar100 + 100) = iVar43 + 1U;
  }
  *(int *)(uVar100 + 0x5c) = *(int *)(uVar100 + 0x5c) + 1;
LAB_003f8410:
  uVar102._4_4_ = uStack_274;
  uVar102._0_4_ = local_278;
  uVar99 = (ulong)*(uint *)(uVar102 + 0x5c);
  if (((uint)uVar127 <= *(uint *)(uVar102 + 0x5c)) ||
     (uVar48._1_7_ = (undefined7)(uVar92 >> 8), uVar48._0_1_ = '\x01',
     *(char *)(uVar102 + 0x58) == '\0')) goto LAB_003f8c66;
  goto LAB_003f8250;
LAB_003f8c66:
  uVar107 = _uStack_260;
  hb_buffer_t::sync((hb_buffer_t *)uVar102);
  p_Var58 = extraout_XMM0_Qa_15;
LAB_003f8c6e:
  bVar137 = hb_buffer_t::message
                      (p_Var58,in_XMM1.__prev,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,
                       in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,(hb_buffer_t *)uVar102,
                       _uStack_280,"start reorder",uVar59,uVar120,uVar107,uVar283);
  p_Var58 = extraout_XMM0_19.__prev;
  if (bVar137) {
    uVar127._0_4_ = *(uint *)_uStack_250;
    uVar107 = _uStack_260;
    if ((uint)uVar127 != 0) {
      auStack_214._4_8_ = *(undefined8 *)_uStack_260;
      uVar124 = (pthread_mutex_t *)0x0;
      uStack_240 = (uint)uVar127;
      uVar100 = auStack_214._4_8_;
      _Var151 = extraout_XMM0_19;
      do {
        while( true ) {
          p_Var58 = _Var151.__prev;
          iVar43 = (int)uVar124;
          uVar80._0_4_ = *(uint *)((long)(uVar100 + 0x10) + uVar124 * 0x14);
          if (((0x1c00U >> ((uint)uVar80 & 0x1f) & 1) != 0) && (0xff < ((uint)uVar80 & 0xffff)))
          break;
          uVar94 = uVar124;
LAB_003f8cc3:
          uVar80._0_4_ = (int)uVar94 + 1;
          uVar124._4_4_ = 0;
          uVar124._0_4_ = (uint)uVar80;
          if ((uint)uVar127 <= (uint)uVar80) goto LAB_003f8ee7;
        }
        uVar57 = iVar43 + 1;
        uVar80._0_4_ = uVar57;
        if (uVar57 < (uint)uVar127) {
          uVar80._0_4_ = (uint)uVar127;
        }
        uVar94 = uVar124;
        do {
          uVar94._0_4_ = (int)uVar94 + 1;
          uVar94._4_4_ = 0;
          if ((uint)uVar127 <= (uint)uVar94) {
            uVar94._4_4_ = 0;
            uVar94._0_4_ = (uint)uVar80;
            uVar87 = (uint)uVar80 - iVar43;
            goto joined_r0x003f8d3a;
          }
          uVar87 = *(uint *)((long)(uVar100 + 0x10) + (ulong)(uint)uVar94 * 0x14);
        } while (((0x1c00U >> (uVar87 & 0x1f) & 1) != 0) && (0xff < (uVar87 & 0xffff)));
        uVar87 = (uint)uVar94 - iVar43;
        uVar80._0_4_ = (uint)uVar94;
joined_r0x003f8d3a:
        uVar59._4_4_ = 0;
        uVar59._0_4_ = uVar87;
        if (0x20 < uVar87) goto LAB_003f8cc3;
        uVar100 = uVar124;
        if (uVar57 < (uint)uVar80) {
          uVar133._4_4_ = 0;
          uVar133._0_4_ = uVar57;
          uVar127._0_4_ = iVar43 + 2;
          uStack_270 = (ushort)uVar124;
          uStack_26e = SUB82(uVar124,2);
          auStack_23c._4_8_ = uVar124;
          do {
            iVar43 = CONCAT22(uStack_26e,uStack_270);
            uStack_270 = (ushort)uVar133;
            uStack_26e = SUB82(uVar133,2);
            uVar120 = uVar133;
            if ((uint)uVar100 < (uint)uVar133) {
              uVar120 = uVar100;
            }
            uVar120 = uVar120 & 0xffffffff;
            uVar102 = uVar133;
            uVar57 = (uint)uVar127;
            do {
              uVar84 = uVar120;
              if ((ulong)uVar102 <= (ulong)uVar124) goto joined_r0x003f8e68;
              uVar102 = uVar102 + -1;
              uVar56 = *(ushort *)(*(long *)uVar107 + 0x10 + (uVar102 & 0xffffffff) * 0x14);
              uVar75 = uVar56 >> 8;
              if ((0x1c00U >> (uVar56 & 0x1f) & 1) == 0) {
                uVar75 = 0;
              }
              uVar56 = *(ushort *)(*(long *)uVar107 + 0x10 + uVar133 * 0x14);
              uVar59._2_1_ = '\0';
              uVar59._3_1_ = '\0';
              uVar59._4_1_ = '\0';
              uVar59._5_1_ = '\0';
              uVar59._6_1_ = '\0';
              uVar59._7_1_ = '\0';
              uVar59._0_2_ = uVar56;
              uVar105 = uVar56 >> 8;
              if ((0x1c00U >> (uVar56 & 0x1f) & 1) == 0) {
                uVar105 = 0;
              }
              uVar57 = uVar57 - 1;
            } while (uVar105 < uVar75);
            uVar84._4_4_ = 0;
            uVar84._0_4_ = uVar57;
joined_r0x003f8e68:
            if (uVar133 != uVar84) {
              uStack_268._0_4_ = (float)(uint)uVar127;
              uVar127._0_4_ = iVar43 + 2;
              uVar57 = (uint)uVar84;
              if (1 < (uint)uVar127 - uVar57) {
                hb_buffer_t::merge_clusters_impl
                          ((hb_buffer_t *)CONCAT44(uStack_274,local_278),uVar57,(uint)uVar127);
                in_XMM1.__next = extraout_XMM1_Qb_25;
                in_XMM1.__prev = extraout_XMM1_Qa_22;
                uVar107 = _uStack_260;
              }
              lVar88 = *(long *)uVar107;
              local_38 = *(uint *)(lVar88 + 0x10 + uVar133 * 0x14);
              puVar44 = (undefined8 *)(lVar88 + uVar133 * 0x14);
              uVar107 = *puVar44;
              local_40 = puVar44[1];
              local_48 = (int)uVar107;
              uStack_44 = (undefined4)((ulong)uVar107 >> 0x20);
              auStack_23c._12_8_ = uVar84 * 0x14;
              memmove((void *)(lVar88 + (ulong)(uVar57 + 1) * 0x14),
                      (hb_buffer_t *)(lVar88 + auStack_23c._12_8_),
                      (ulong)(CONCAT22(uStack_26e,uStack_270) - uVar57) * 0x14);
              lVar88 = *(long *)_uStack_260;
              _Var151.__prev._4_4_ = uStack_44;
              _Var151.__prev._0_4_ = local_48;
              _Var151.__next = (__pthread_internal_list *)local_40;
              *(__pthread_internal_list *)(lVar88 + auStack_23c._12_8_) = _Var151;
              uVar59._4_4_ = 0;
              uVar59._0_4_ = local_38;
              *(uint *)(lVar88 + 0x10 + auStack_23c._12_8_) = local_38;
              uVar107 = _uStack_260;
              uVar100 = auStack_23c._4_8_;
              uVar127._0_4_ = (uint)(float)uStack_268;
            }
            uVar133 = uVar133 + 1;
            uVar127._0_4_ = (uint)uVar127 + 1;
          } while ((uint)uVar133 < (uint)uVar80);
        }
        p_Var58 = ((__pthread_internal_list *)(_uStack_258 + 0x80))->__prev[4].__next;
        if (p_Var58 != (__pthread_internal_list *)0x0) {
          uVar59._4_4_ = 0;
          uVar59._0_4_ = (uint)uVar80;
          auVar259 = (*(code *)p_Var58)(_uStack_228,CONCAT44(uStack_274,local_278),
                                        uVar100 & 0xffffffff);
          in_XMM1.__prev = auVar259._8_8_;
          _Var151.__prev = auVar259._0_8_;
          in_XMM1.__next = extraout_XMM1_Qb_26;
          _Var151.__next = extraout_XMM0_Qb_11;
          uVar107 = _uStack_260;
        }
        p_Var58 = _Var151.__prev;
        uVar124._4_4_ = 0;
        uVar124._0_4_ = (uint)uVar80 + 1;
        uVar100 = auStack_214._4_8_;
        uVar127._0_4_ = uStack_240;
      } while ((uint)uVar80 + 1 < uStack_240);
    }
LAB_003f8ee7:
    uVar102._4_4_ = uStack_274;
    uVar102._0_4_ = local_278;
    hb_buffer_t::message
              (p_Var58,in_XMM1.__prev,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,in_XMM5._0_8_,
               in_XMM6.__prev,in_XMM7.__prev,(hb_buffer_t *)uVar102,_uStack_280,"end reorder",uVar59
               ,uVar120,uVar107,uVar283);
    bVar73 = *(byte *)&((__pthread_internal_list *)(uVar102 + 0xc0))->__prev;
    _Var144 = extraout_XMM0_20;
    uVar87 = uStack_248;
  }
  else {
    bVar73 = *(byte *)&((__pthread_internal_list *)(uVar102 + 0xc0))->__prev;
    _Var144 = extraout_XMM0_19;
  }
  bVar137 = true;
  uVar107 = _uStack_260;
joined_r0x003f8f2a:
  if ((bVar73 & 0x10) != 0) {
    uVar127._0_4_ = *(uint *)_uStack_250;
    uVar59._4_4_ = 0;
    uVar59._0_4_ = (uint)uVar127;
    if (2 < (uint)uVar127) {
      lVar88 = *(long *)uVar107;
      uVar59 = (ulong)((uint)uVar127 - 1) * 0x14 + -0x14;
      lVar126 = 0;
      do {
        if (*(int *)(lVar126 + 0x14 + lVar88) == 0x34f) {
          uVar56 = *(ushort *)(lVar126 + 0x38 + lVar88);
          if (((0x1c00U >> (uVar56 & 0x1f) & 1) != 0) && (0xff < uVar56)) {
            uVar75 = *(ushort *)(lVar126 + 0x10 + lVar88);
            uVar105 = uVar75 >> 8;
            if ((0x1c00U >> (uVar75 & 0x1f) & 1) == 0) {
              uVar105 = 0;
            }
            if (uVar56 >> 8 < uVar105) goto LAB_003f8f65;
          }
          pbVar119 = (byte *)(lVar126 + lVar88 + 0x24);
          *pbVar119 = *pbVar119 & 0xbf;
        }
LAB_003f8f65:
        lVar126 = lVar126 + 0x14;
      } while (uVar59 != lVar126);
    }
  }
  _uStack_260 = uVar107;
  uStack_1b8 = (int *)CONCAT44(uStack_1b8._4_4_,(uint)uStack_1b8);
  if (((bVar137) &&
      (uStack_1b8 = (int *)CONCAT44(uStack_1b8._4_4_,(uint)uStack_1b8),
      *(hb_buffer_t *)(uVar102 + 0x58) != (hb_buffer_t)0x0)) &&
     (uStack_1b8 = (int *)CONCAT44(uStack_1b8._4_4_,(uint)uStack_1b8), (uVar87 & 0xfffffffe) == 2))
  {
    *(undefined2 *)(uVar102 + 0x5a) = 1;
    p_Var58 = ((__pthread_internal_list *)(uVar102 + 0x70))->__prev;
    ((pthread_mutex_t *)(uVar102 + 0x78))->__align = (long)p_Var58;
    uVar127._0_4_ = *(uint *)&((__pthread_internal_list *)(uVar102 + 0x60))->__prev;
    *(undefined4 *)(uVar102 + 100) = 1;
    *(undefined4 *)(uVar102 + 0x5c) = 1;
    if (1 < (uint)uVar127) {
      uVar59 = (pthread_mutex_t *)0x1;
      uVar80._0_4_ = 0;
      do {
        uVar56 = *(ushort *)((long)p_Var58 + uVar59 * 0x14 + 0x10);
        if ((0x1c00U >> (uVar56 & 0x1f) & 1) == 0) {
LAB_003f91e0:
          lVar88 = CONCAT44(uStack_274,local_278);
          if (*(char *)(lVar88 + 0x5a) == '\0') {
            iVar43 = *(int *)(lVar88 + 100);
          }
          else {
            pvVar112 = *(void **)(lVar88 + 0x78);
            pvVar51 = *(void **)(lVar88 + 0x70);
            iVar43 = *(int *)(lVar88 + 100);
            if ((pvVar112 != pvVar51) || (iVar43 != *(int *)(lVar88 + 0x5c))) {
              uVar57 = iVar43 + 1;
              if ((uVar57 == 0) ||
                 (uVar59._4_4_ = uStack_274, uVar59._0_4_ = local_278,
                 uVar57 < *(uint *)(uVar59 + 0x68))) {
                if (pvVar112 == pvVar51) goto LAB_003f9223;
              }
              else {
                phVar103 = (hb_buffer_t *)CONCAT44(uStack_274,local_278);
                uVar107 = hb_buffer_t::enlarge(phVar103,uVar57);
                if ((char)uVar107 == '\0') break;
                pvVar51 = *(void **)(phVar103 + 0x70);
                pvVar112 = *(void **)(phVar103 + 0x78);
                uVar107 = _uStack_260;
                if (pvVar112 == pvVar51) {
LAB_003f9223:
                  lVar88 = CONCAT44(uStack_274,local_278);
                  uVar57 = *(uint *)(lVar88 + 100);
                  if (*(int *)(lVar88 + 0x5c) + 1U < uVar57 + 1) {
                    pvVar112 = *(void **)(lVar88 + 0x80);
                    *(void **)(lVar88 + 0x78) = pvVar112;
                    if ((ulong)uVar57 != 0) {
                      memcpy(pvVar112,pvVar51,(ulong)uVar57 * 0x14);
                      pvVar51 = *(void **)(lVar88 + 0x70);
                      pvVar112 = *(void **)(lVar88 + 0x78);
                      uVar107 = _uStack_260;
                    }
                  }
                  else {
                    pvVar112 = pvVar51;
                  }
                }
              }
              lVar88 = CONCAT44(uStack_274,local_278);
              uVar57 = *(uint *)(lVar88 + 0x5c);
              uVar87 = *(uint *)(lVar88 + 100);
              *(undefined4 *)((long)pvVar112 + (ulong)uVar87 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar51 + (ulong)uVar57 * 0x14 + 0x10);
              puVar44 = (undefined8 *)((long)pvVar51 + (ulong)uVar57 * 0x14);
              uVar120 = puVar44[1];
              puVar2 = (undefined8 *)((long)pvVar112 + (ulong)uVar87 * 0x14);
              *puVar2 = *puVar44;
              puVar2[1] = uVar120;
              iVar43 = *(int *)(lVar88 + 100);
            }
            iVar43 = iVar43 + 1;
            *(int *)(lVar88 + 100) = iVar43;
          }
          uVar57 = *(int *)(lVar88 + 0x5c) + 1;
          *(uint *)(lVar88 + 0x5c) = uVar57;
          uVar87 = iVar43 - 1;
          uVar99 = (ulong)uVar87;
          if (iVar43 == 0) {
            uVar99 = 0;
          }
          uVar81 = (uint)*(ushort *)(*(long *)(lVar88 + 0x78) + 0x10 + uVar99 * 0x14);
          if (uVar81 < 0x100) {
            uVar80._0_4_ = uVar87;
          }
          if ((0x1c00U >> (uVar81 & 0x1f) & 1) == 0) {
            uVar80._0_4_ = uVar87;
          }
        }
        else {
          iVar43 = *(int *)(CONCAT44(uStack_274,local_278) + 100);
          uVar57 = iVar43 - 1;
          lVar88 = *(long *)(CONCAT44(uStack_274,local_278) + 0x78);
          if ((uint)uVar80 != uVar57) {
            if (iVar43 == 0) {
              uVar57 = 0;
            }
            uVar75 = *(ushort *)(lVar88 + 0x10 + (ulong)uVar57 * 0x14);
            uVar105 = uVar75 >> 8;
            if ((0x1c00U >> (uVar75 & 0x1f) & 1) == 0) {
              uVar105 = 0;
            }
            if (uVar56 >> 8 <= uVar105) goto LAB_003f91e0;
          }
          cVar42 = (*(code *)auStack_190._0_8_)
                             (&uStack_1b8,*(undefined4 *)(lVar88 + (ulong)(uint)uVar80 * 0x14),
                              *(undefined4 *)((long)p_Var58 + uVar59 * 0x14),&local_48);
          in_XMM1.__next = extraout_XMM1_Qb_27;
          in_XMM1.__prev = extraout_XMM1_Qa_23;
          uVar107 = _uStack_260;
          if (cVar42 == '\0') goto LAB_003f91e0;
          local_1f8._0_1_ = '\0';
          local_1f8._1_1_ = '\0';
          local_1f8._2_1_ = '\0';
          local_1f8._3_1_ = '\0';
          lVar88 = *(long *)(*(long *)(_uStack_280 + 0x90) + 0x10);
          if (lVar88 == 0) {
            uVar107 = 0;
          }
          else {
            uVar107 = *(undefined8 *)(lVar88 + 0x10);
          }
          uVar59 = &local_1f8;
          iVar43 = (**(code **)(*(long *)(_uStack_280 + 0x90) + 0x30))
                             (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),local_48,uVar59,
                              uVar107);
          in_XMM1.__next = extraout_XMM1_Qb_28;
          in_XMM1.__prev = extraout_XMM1_Qa_24;
          uVar107 = _uStack_260;
          if (iVar43 == 0) goto LAB_003f91e0;
          phVar103 = (hb_buffer_t *)CONCAT44(uStack_274,local_278);
          if (phVar103[0x5a] == (hb_buffer_t)0x0) {
            uVar57 = *(uint *)(phVar103 + 100);
          }
          else {
            pvVar112 = *(void **)(phVar103 + 0x78);
            pvVar51 = *(void **)(phVar103 + 0x70);
            iVar43 = *(int *)(phVar103 + 100);
            if ((pvVar112 != pvVar51) || (iVar43 != *(int *)(phVar103 + 0x5c))) {
              uVar57 = iVar43 + 1;
              if ((uVar57 == 0) || (uVar57 < *(uint *)(CONCAT44(uStack_274,local_278) + 0x68))) {
                if (pvVar112 == pvVar51) goto LAB_003f918f;
              }
              else {
                phVar103 = (hb_buffer_t *)CONCAT44(uStack_274,local_278);
                uVar107 = hb_buffer_t::enlarge(phVar103,uVar57);
                if ((char)uVar107 == '\0') break;
                pvVar51 = *(void **)(phVar103 + 0x70);
                pvVar112 = *(void **)(phVar103 + 0x78);
                if (pvVar112 == pvVar51) {
LAB_003f918f:
                  lVar88 = CONCAT44(uStack_274,local_278);
                  uVar57 = *(uint *)(lVar88 + 100);
                  if (*(int *)(lVar88 + 0x5c) + 1U < uVar57 + 1) {
                    pvVar112 = *(void **)(lVar88 + 0x80);
                    *(void **)(lVar88 + 0x78) = pvVar112;
                    if ((ulong)uVar57 != 0) {
                      memcpy(pvVar112,pvVar51,(ulong)uVar57 * 0x14);
                      pvVar51 = *(void **)(lVar88 + 0x70);
                      pvVar112 = *(void **)(lVar88 + 0x78);
                    }
                  }
                  else {
                    pvVar112 = pvVar51;
                  }
                }
              }
              phVar103 = (hb_buffer_t *)CONCAT44(uStack_274,local_278);
              uVar57 = *(uint *)(phVar103 + 0x5c);
              uVar87 = *(uint *)(phVar103 + 100);
              *(undefined4 *)((long)pvVar112 + (ulong)uVar87 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar51 + (ulong)uVar57 * 0x14 + 0x10);
              puVar44 = (undefined8 *)((long)pvVar51 + (ulong)uVar57 * 0x14);
              uVar107 = puVar44[1];
              puVar2 = (undefined8 *)((long)pvVar112 + (ulong)uVar87 * 0x14);
              *puVar2 = *puVar44;
              puVar2[1] = uVar107;
              iVar43 = *(int *)(phVar103 + 100);
            }
            uVar57 = iVar43 + 1;
            *(uint *)(phVar103 + 100) = uVar57;
          }
          *(int *)(phVar103 + 0x5c) = *(int *)(phVar103 + 0x5c) + 1;
          hb_buffer_t::merge_out_clusters(phVar103,(uint)uVar80,uVar57);
          *(int *)(phVar103 + 100) = *(int *)(phVar103 + 100) + -1;
          lVar88 = *(long *)(phVar103 + 0x78);
          lVar126 = (ulong)(uint)uVar80 * 0x14;
          *(int *)(lVar88 + lVar126) = local_48;
          *(undefined4 *)(lVar88 + 0xc + lVar126) = local_1f8._0_4_;
          _hb_glyph_info_set_unicode_props
                    ((uint *)(lVar126 + *(long *)(phVar103 + 0x78)),(long)phVar103);
          in_XMM1.__next = extraout_XMM1_Qb_29;
          in_XMM1.__prev = extraout_XMM1_Qa_25;
          uVar57 = *(uint *)(phVar103 + 0x5c);
          uVar107 = _uStack_260;
        }
        uVar59._4_4_ = 0;
        uVar59._0_4_ = uVar57;
        if ((uint)uVar127 <= uVar57) break;
        p_Var58 = *(__pthread_internal_list **)uVar107;
      } while( true );
    }
    uVar102._4_4_ = uStack_274;
    uVar102._0_4_ = local_278;
    hb_buffer_t::sync((hb_buffer_t *)uVar102);
    _Var144 = extraout_XMM0_21;
  }
  goto LAB_003f9369;
code_r0x003faa9d:
  uVar68 = *(undefined8 *)(uVar68 + 0x18);
  if (((pthread_mutex_t *)uVar68 == (pthread_mutex_t *)0x0) ||
     ((pthread_mutex_t *)uVar68 == (pthread_mutex_t *)&_hb_Null_hb_font_t)) goto joined_r0x003faaaf;
  goto LAB_003faa90;
LAB_003fe0b8:
  _auStack_1f0 = ZEXT416((uint)uVar127) << 0x40;
LAB_003fe0cc:
  bVar137 = false;
LAB_003fe0cf:
  puVar131 = puStack_1c8;
  if ((puStack_1c8 != (uint *)0x0) && (*puStack_1c8 != 0)) {
    LOCK();
    *puStack_1c8 = *puStack_1c8 - 1;
    UNLOCK();
    if (*puStack_1c8 == 0) {
      *puStack_1c8 = 0xffff2153;
      ppVar129 = *(pthread_mutex_t **)(puStack_1c8 + 2);
      if (ppVar129 != (pthread_mutex_t *)0x0) {
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar129[1].__data,ppVar129);
        free(ppVar129);
        puVar131[2] = 0;
        puVar131[3] = 0;
      }
      if (*(code **)(puVar131 + 10) != (code *)0x0) {
        (**(code **)(puVar131 + 10))(*(undefined8 *)(puVar131 + 8));
      }
      free(puVar131);
    }
  }
  puStack_1c8 = (uint *)0x0;
  _auStack_1f0 = (undefined1  [16])0x0;
  uStack_1e0 = 0;
  if (bVar137) {
    if (*(int *)(CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)) + 4) == 0) {
      p_Var113 = (__pthread_internal_list *)CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270));
    }
    else {
      p_Var113 = (__pthread_internal_list *)CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270));
      *(undefined4 *)((long)&p_Var113->__prev + 4) = 0;
    }
  }
  else {
LAB_003fe2f1:
    puStack_1c8 = (uint *)0x0;
    uStack_1e0 = 0;
    _auStack_1f0 = (undefined1  [16])0x0;
    uVar68._2_2_ = uStack_26e;
    uVar68._0_2_ = uStack_270;
    uVar68._4_4_ = uStack_26c;
    p_Var113 = (__pthread_internal_list *)&_hb_NullPool;
    if (*(int *)uVar68 != 0) {
      LOCK();
      *(int *)uVar68 = *(int *)uVar68 + -1;
      UNLOCK();
      p_Var113 = (__pthread_internal_list *)&_hb_NullPool;
      if (*(int *)uVar68 == 0) {
        *(undefined4 *)uVar68 = 0xffff2153;
        ppVar129 = *(pthread_mutex_t **)(uVar68 + 8);
        if (ppVar129 != (pthread_mutex_t *)0x0) {
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar129[1].__data,ppVar129);
          free(ppVar129);
          *(undefined8 *)(CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)) + 8) = 0;
        }
        pcVar8 = *(code **)(CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)) + 0x28);
        if (pcVar8 != (code *)0x0) {
          uVar68._2_2_ = uStack_26e;
          uVar68._0_2_ = uStack_270;
          uVar68._4_4_ = uStack_26c;
          (*pcVar8)(((__pthread_internal_list *)(uVar68 + 0x20))->__prev);
        }
        free((void *)CONCAT44(uStack_26c,CONCAT22(uStack_26e,uStack_270)));
        p_Var113 = (__pthread_internal_list *)&_hb_NullPool;
      }
    }
  }
LAB_003fe360:
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)&local_1f8);
  LOCK();
  bVar137 = p_Var58[0x16].__prev == (__pthread_internal_list *)0x0;
  if (bVar137) {
    p_Var58[0x16].__prev = p_Var113;
  }
  UNLOCK();
  if (bVar137) {
LAB_003fe60a:
    uVar69._4_4_ = uStack_274;
    uVar69._0_4_ = local_278;
    goto LAB_003fb5c0;
  }
  if (((p_Var113 != (__pthread_internal_list *)0x0) &&
      (p_Var113 != (__pthread_internal_list *)&_hb_NullPool)) && (*(int *)&p_Var113->__prev != 0)) {
    LOCK();
    *(int *)&p_Var113->__prev = *(int *)&p_Var113->__prev + -1;
    UNLOCK();
    if (*(int *)&p_Var113->__prev == 0) {
      *(undefined4 *)&p_Var113->__prev = 0xffff2153;
      ppVar129 = (pthread_mutex_t *)p_Var113->__next;
      if (ppVar129 != (pthread_mutex_t *)0x0) {
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar129[1].__data,ppVar129);
        free(ppVar129);
        p_Var113->__next = (__pthread_internal_list *)0x0;
      }
      if (p_Var113[2].__next != (__pthread_internal_list *)0x0) {
        (*(code *)p_Var113[2].__next)(p_Var113[2].__prev);
      }
      free(p_Var113);
    }
  }
  p_Var113 = p_Var58[0x16].__prev;
  uVar69._4_4_ = uStack_274;
  uVar69._0_4_ = local_278;
  if (p_Var113 != (__pthread_internal_list *)0x0) goto LAB_003fb5c0;
  goto LAB_003fddfb;
LAB_003fb5c0:
  param_2 = _uStack_258;
  p_Var116 = (__pthread_internal_list *)&_hb_NullPool;
  p_Var58 = (__pthread_internal_list *)&_hb_NullPool;
  if (0xb < *(uint *)&p_Var113[1].__next) {
    p_Var58 = p_Var113[1].__prev;
  }
  auStack_150._0_8_ = p_Var58;
  p_Var58 = p_Var89->__prev;
  if (p_Var58 == (__pthread_internal_list *)0x0) {
    p_Var58 = (__pthread_internal_list *)&_hb_NullPool;
  }
  if (7 < *(uint *)&p_Var58[1].__next) {
    p_Var116 = p_Var58[1].__prev;
  }
  auVar259 = apply(p_Var116,&uStack_1b8,&p_Var89->__next);
  hb_buffer_t::message
            (auVar259._0_8_,auVar259._8_8_,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,in_XMM5._0_8_
             ,in_XMM6.__prev,in_XMM7.__prev,(hb_buffer_t *)uVar69,_uStack_280,"end table kerx",
             uVar68,uVar120,param_6,uVar283);
LAB_003fb61e:
  auVar259 = hb_aat_apply_context_t::~hb_aat_apply_context_t((hb_aat_apply_context_t *)&uStack_1b8);
  auVar170._0_8_ = auVar259._8_8_;
  uVar107 = auVar259._0_8_;
  auVar170._8_8_ = extraout_XMM1_Qb_42;
  param_3 = (uint *)uVar69;
LAB_003fbe61:
  uVar130 = _uStack_280;
  if ((*(ushort *)(param_2 + 0x108) & 0x400) == 0) {
    if ((*(ushort *)(param_2 + 0x108) & 0x800) != 0) {
      uVar59 = _uStack_280;
      if ((*(uint *)((long)param_3 + 0x38) & 0xfffffffe) == 4) {
        do {
          if (((__pthread_internal_list *)(uVar59 + 0x90))->__prev[7].__next !=
              (__pthread_internal_list *)PTR_hb_font_get_glyph_h_kerning_default_00718ae8)
          goto LAB_003fc117;
          uVar59 = *(undefined8 *)(uVar59 + 0x18);
        } while (((pthread_mutex_t *)uVar59 != (pthread_mutex_t *)0x0) &&
                ((pthread_mutex_t *)uVar59 != (pthread_mutex_t *)&_hb_Null_hb_font_t));
      }
      else {
        do {
          if (((__pthread_internal_list *)(uVar59 + 0x90))->__prev[8].__prev !=
              (__pthread_internal_list *)PTR_hb_font_get_glyph_v_kerning_default_00718af0)
          goto LAB_003fc117;
          uVar59 = *(undefined8 *)(uVar59 + 0x18);
        } while (((pthread_mutex_t *)uVar59 != (pthread_mutex_t *)0x0) &&
                ((pthread_mutex_t *)uVar59 != (pthread_mutex_t *)&_hb_Null_hb_font_t));
      }
    }
  }
  else {
    hb_ot_layout_kern(uVar107,auVar170._0_8_,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,
                      in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,_uStack_228,_uStack_280,
                      (hb_buffer_t *)param_3,(undefined4 *)uVar68,uVar120,param_6);
  }
  goto LAB_003fbed1;
code_r0x003fc62a:
  lVar88 = CONCAT44(uStack_1a4,
                    CONCAT13(cStack_1a5,CONCAT12(cStack_1a6,CONCAT11(cStack_1a7,cStack_1a8))));
  uVar59 = *(undefined8 *)(lVar88 + 0xa0);
  goto LAB_003fc4f0;
AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_4:
  if ((ulong)*(uint *)(&UNK_005e02c8 + uVar99) <
      (ulong)((long)&UNK_005e02bc - *(long *)(&UNK_005e02b8 + uVar99))) goto LAB_003f4fbb;
  uVar120 = &UNK_005e02bc;
  uVar80._4_4_ = 0;
  uVar80._0_4_ = *(uint *)(&UNK_005e02c8 + uVar99);
  if (((ulong)uVar80 < (pthread_mutex_t *)(&UNK_005e02bc + -*(long *)(&UNK_005e02b8 + uVar99))) ||
     (*(int *)(&UNK_005e02c0 + uVar99) - 0x5e02bcU < 0x9c7728c3)) goto LAB_003f4fbb;
  uVar80._0_4_ = *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                                 switchdataD_005e02cc + uVar99) + 0x6388d73d;
  uVar80._4_4_ = 0;
  *(uint *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                   switchdataD_005e02cc + uVar99) = (uint)uVar80;
  iVar43 = 0;
  if ((int)(uint)uVar80 < 1) goto LAB_003f4fbb;
  param_6 = (pthread_mutex_t *)0xffffffff;
  uVar56 = 0x3db1;
  uVar80 = (pthread_mutex_t *)0xb13d;
  if (sRam000000009cd44980 == -1) {
    iVar43 = -(uint)(sRam000000009cd44982 == -1);
  }
  if (iVar43 == -0xb13d)
  goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1;
  in_R10._0_4_ = iVar43 + 0xb13c;
  in_R10._4_4_ = 0;
  uVar127 = (pthread_mutex_t *)0x0;
  param_2 = &_hb_NullPool;
  param_3 = (uint *)0x4;
LAB_003f5120:
  uVar80._0_2_ = uVar56 << 8 | uVar56 >> 8;
  uVar80._2_1_ = '\0';
  uVar80._3_1_ = '\0';
  uVar80._4_1_ = '\0';
  uVar80._5_1_ = '\0';
  uVar80._6_1_ = '\0';
  uVar80._7_1_ = '\0';
  uVar57 = (uint)(ushort)uVar80;
  iVar43 = 0;
  if (uVar56 != 0) {
    auVar259._0_4_ =
         (uint)(ushort)(*(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8) *
         ((uint)(ushort)uVar80 + (int)param_6);
    auVar259._4_4_ = 0;
    iVar43 = 0;
    if (*(short *)((hb_buffer_t *)(uVar107 + 0xc) + auVar259._0_8_) == -1) {
code_r0x003f5152:
      uVar57 = (uint)uVar80;
      iVar43 = -(uint)(*(short *)((hb_buffer_t *)(uVar120 + 2) + auVar259._0_8_) == -1);
    }
  }
  uVar59 = param_2;
  if ((uint)uVar127 < iVar43 + uVar57) {
    uVar59 = (ulong)((uint)(ushort)(*(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8) *
                    (uint)uVar127) + uVar120;
  }
  uVar80._4_4_ = 0;
  uVar80._0_4_ = *(uint *)(uVar100 + 0x18);
  if ((ulong)uVar80 < (pthread_mutex_t *)((uVar59 - *(long *)(uVar100 + 8)) + 6)) goto LAB_003f4fbb;
  uVar80._0_2_ = *(ushort *)(uVar59 + 2) << 8 | *(ushort *)(uVar59 + 2) >> 8;
  uVar80._2_1_ = '\0';
  uVar80._3_1_ = '\0';
  uVar80._4_1_ = '\0';
  uVar80._5_1_ = '\0';
  uVar80._6_1_ = '\0';
  uVar80._7_1_ = '\0';
  auVar259._0_2_ = *(ushort *)uVar59 << 8 | *(ushort *)uVar59 >> 8;
  auVar259[2] = '\0';
  auVar259[3] = '\0';
  auVar259[4] = '\0';
  auVar259[5] = '\0';
  auVar259[6] = '\0';
  auVar259[7] = '\0';
  if (auVar259._0_2_ < (ushort)uVar80) goto LAB_003f4fbb;
code_r0x003f51ac:
  if ((ulong)*(uint *)(uVar100 + 0x18) < (uVar59 - *(long *)(uVar100 + 8)) + 6U) goto LAB_003f4fbb;
code_r0x003f51c3:
  lVar88 = (ulong)((((uint)auVar259._0_8_ & 0xffff) - ((uint)uVar80 & 0xffff)) + 1) *
           ((ulong)param_3 & 0xffffffff);
  uVar80._0_4_ = (uint)((ulong)lVar88 >> 0x20);
  uVar80._4_4_ = 0;
  uVar57 = (uint)lVar88;
  if ((((uint)uVar80 != 0) ||
      (uVar80 = (ulong)(ushort)(*(ushort *)(uVar59 + 4) << 8 | *(ushort *)(uVar59 + 4) >> 8) +
                uVar107, (ulong)*(uint *)(uVar100 + 0x18) < (ulong)(uVar80 - *(long *)(uVar100 + 8))
      )) || ((uint)(*(int *)&((__pthread_internal_list *)(uVar100 + 0x10))->__prev - (int)uVar80) <
             uVar57)) goto LAB_003f4fbb;
code_r0x003f5205:
  iVar43 = *(int *)(uVar100 + 0x1c) - uVar57;
  *(int *)(uVar100 + 0x1c) = iVar43;
  if (iVar43 < 1) goto LAB_003f4fbb;
  bVar137 = (int)in_R10 == (int)uVar127;
code_r0x003f5218:
  if (bVar137) goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1;
  uVar56 = *(ushort *)(uVar107 + 4);
  uVar127._0_4_ = (int)uVar127 + 1;
  uVar127._4_4_ = 0;
  goto LAB_003f5120;
code_r0x003f3f23:
  p_Var58 = ((__pthread_internal_list *)(uVar127 + 0x30))->__prev;
  uVar80 = p_Var58[1].__prev;
  *(undefined8 *)(uVar127 + 8) = uVar80;
  uVar57 = *(uint *)&p_Var58[1].__next;
  uVar100._4_4_ = 0;
  uVar100._0_4_ = uVar57;
  auVar259._0_8_ = uVar80 + uVar100;
  ((__pthread_internal_list *)(uVar127 + 0x10))->__prev = (__pthread_internal_list *)auVar259._0_8_;
  *(uint *)(uVar127 + 0x18) = uVar57;
  bVar137 = (uint)uVar107 < (uint)auStack_214._0_4_;
  uVar59 = &((pthread_mutex_t *)0x0)->__data;
  if (bVar137) {
    uVar59 = uVar90;
  }
  goto code_r0x003f3f52;
code_r0x003f3b06:
  while( true ) {
    uVar80._0_4_ = (uint)uVar59 & 0xffff;
    iVar43 = 0;
    if ((short)auVar259._0_8_ != 0) {
      uVar57 = (uint)(ushort)(*(ushort *)(unaff_RBX + 2) << 8 | *(ushort *)(unaff_RBX + 2) >> 8) *
               ((uint)uVar80 + (int)uVar107);
      iVar43 = 0;
      if (*(short *)((hb_buffer_t *)(unaff_RBX + 0xc) + uVar57) == -1) {
        iVar43 = -(uint)(*(short *)((hb_buffer_t *)(uVar127 + 2) + uVar57) == -1);
      }
    }
    uVar80._0_4_ = iVar43 + (uint)uVar80;
    uVar80._4_4_ = 0;
    uVar57 = (uint)uVar90;
    uVar46 = param_2;
    if (uVar57 < (uint)uVar80) {
      uVar46 = (ulong)((ushort)(*(ushort *)(unaff_RBX + 2) << 8 | *(ushort *)(unaff_RBX + 2) >> 8) *
                      uVar57) + uVar127;
    }
    uVar56 = *(ushort *)(uVar46 + 2);
    if (uVar56 != 0xffff) {
      uVar46 = hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
               ::add_range((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                            *)param_3,(uint)(ushort)(uVar56 << 8 | uVar56 >> 8),
                           (uint)(ushort)(*(ushort *)uVar46 << 8 | *(ushort *)uVar46 >> 8));
      uVar107 = (pthread_mutex_t *)0xffffffff;
      uVar80 = extraout_RDX_00;
    }
    if (uVar87 == uVar57) break;
    uVar56 = *(ushort *)(unaff_RBX + 4);
    auVar259[2] = '\0';
    auVar259[3] = '\0';
    auVar259[4] = '\0';
    auVar259[5] = '\0';
    auVar259[6] = '\0';
    auVar259[7] = '\0';
    auVar259._0_2_ = uVar56;
    uVar90._0_4_ = uVar57 + 1;
    uVar90._4_4_ = 0;
    uVar59._0_2_ = uVar56 << 8 | uVar56 >> 8;
    uVar59._2_1_ = '\0';
    uVar59._3_1_ = '\0';
    uVar59._4_1_ = '\0';
    uVar59._5_1_ = '\0';
    uVar59._6_1_ = '\0';
    uVar59._7_1_ = '\0';
  }
  goto 
  AAT_Lookup<OT::IntType<unsigned_int,4u>>_collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>_switchD_003f3a03_caseD_1
  ;
code_r0x003f3d5a:
  do {
    *(ulong *)param_3 = *(ulong *)param_3 | uVar90;
    *(__pthread_internal_list **)((long)param_3 + 8) =
         (__pthread_internal_list *)
         ((ulong)*(__pthread_internal_list **)((long)param_3 + 8) |
         1L << ((byte)auVar259._0_8_ & 0x3f));
    uVar46._0_4_ = (uint)auVar259._0_8_ >> 9;
    uVar46._4_4_ = 0;
    ((__pthread_internal_list *)((long)param_3 + 0x10))->__prev =
         (__pthread_internal_list *)
         ((ulong)((__pthread_internal_list *)((long)param_3 + 0x10))->__prev |
         1L << ((byte)(uint)uVar46 & 0x3f));
    do {
      if ((int)uVar107 == (int)uVar80)
      goto 
      AAT_Lookup<OT::IntType<unsigned_int,4u>>_collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>_switchD_003f3a03_caseD_1
      ;
      auVar259[2] = '\0';
      auVar259[3] = '\0';
      auVar259[4] = '\0';
      auVar259[5] = '\0';
      auVar259[6] = '\0';
      auVar259[7] = '\0';
      auVar259._0_2_ = *(ushort *)(unaff_RBX + 4);
      uVar80._0_4_ = (int)uVar80 + 1;
      uVar80._4_4_ = 0;
LAB_003f3cf0:
      uVar56 = (ushort)auVar259._0_8_;
      uVar59._0_2_ = uVar56 << 8 | uVar56 >> 8;
      uVar59._2_1_ = '\0';
      uVar59._3_1_ = '\0';
      uVar59._4_1_ = '\0';
      uVar59._5_1_ = '\0';
      uVar59._6_1_ = '\0';
      uVar59._7_1_ = '\0';
      uVar127._0_4_ = (uint)(ushort)uVar59;
      iVar98 = 0;
      if (uVar56 != 0) {
        uVar90 = (pthread_mutex_t *)0x0;
        bVar138 = *(short *)((hb_buffer_t *)(unaff_RBX + 0xc) +
                            (uint)(ushort)(*(ushort *)(unaff_RBX + 2) << 8 |
                                          *(ushort *)(unaff_RBX + 2) >> 8) *
                            ((uint)(ushort)uVar59 + iVar43)) == -1;
code_r0x003f3d1d:
        uVar127._0_4_ = (uint)uVar59;
        iVar98 = -(int)CONCAT71(SUB87(uVar90,1),bVar138);
      }
      uVar120 = param_6;
      if ((uint)uVar80 < iVar98 + (uint)uVar127) {
        uVar120 = (ulong)((uint)(ushort)(*(ushort *)(unaff_RBX + 2) << 8 |
                                        *(ushort *)(unaff_RBX + 2) >> 8) * (uint)uVar80) + uVar100;
      }
      uVar56 = *(ushort *)uVar120;
      uVar46._2_1_ = '\0';
      uVar46._3_1_ = '\0';
      uVar46._4_1_ = '\0';
      uVar46._5_1_ = '\0';
      uVar46._6_1_ = '\0';
      uVar46._7_1_ = '\0';
      uVar46._0_2_ = uVar56;
    } while (uVar56 == 0xffff);
    auVar259._0_2_ = uVar56 << 8 | uVar56 >> 8;
    auVar259[2] = '\0';
    auVar259[3] = '\0';
    auVar259[4] = '\0';
    auVar259[5] = '\0';
    auVar259[6] = '\0';
    auVar259[7] = '\0';
    uVar90 = 1L << ((byte)(auVar259._0_2_ >> 4) & 0x3f);
  } while( true );
  while( true ) {
    uVar99 = (ulong)(ushort)(*(ushort *)((hb_buffer_t *)(uVar107 + 6) + uVar127 * 2) << 8 |
                            *(ushort *)((hb_buffer_t *)(uVar107 + 6) + uVar127 * 2) >> 8);
    phVar103 = (hb_buffer_t *)(uVar99 + uVar80) + 4;
    uVar77 = (long)phVar103 - *(long *)param_6;
    if ((pthread_mutex_t *)(ulong)*(uint *)in_R11 < (ulong)((long)phVar103 - *(long *)param_6))
    goto LAB_003f312d;
    uVar57 = *(uint *)(uVar99 + uVar80);
    lVar88 = (ulong)(uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 | (uVar57 & 0xff00) << 8 |
                    uVar57 << 0x18) * ((ulong)param_3 & 0xffffffff);
    uVar77._0_4_ = (uint)((ulong)lVar88 >> 0x20);
    uVar77._4_4_ = 0;
    uVar57 = (uint)lVar88;
    if ((uint)uVar77 != 0) goto LAB_003f312d;
    uVar77 = *(undefined8 *)param_6;
    unaff_RBX._4_4_ = 0;
    unaff_RBX._0_4_ = *(uint *)in_R11;
    if (((ulong)unaff_RBX < (pthread_mutex_t *)(phVar103 + -uVar77)) ||
       ((uint)(*(int *)&((__pthread_internal_list *)(uVar100 + 0x10))->__prev - (int)phVar103) <
        uVar57)) goto LAB_003f312d;
    iVar43 = *(int *)(uVar100 + 0x1c) - uVar57;
    *(int *)(uVar100 + 0x1c) = iVar43;
    if (iVar43 < 1) goto LAB_003f312d;
    uVar127 = uVar127 + 1;
code_r0x003f398e:
    uVar120 = uVar120 + 2;
    if (param_2 == uVar127) break;
LAB_003f3910:
    if ((unaff_RBX & 0xffffffff) < (ulong)(uVar120 - uVar77)) goto LAB_003f312d;
  }
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  ;
LAB_003f379d:
  uVar75 = uVar56 << 8 | uVar56 >> 8;
  iVar43 = 0;
  if (uVar56 != 0) {
    iVar43 = -(uint)(*(short *)((hb_buffer_t *)(uVar107 + 0xc) +
                               (uint)(ushort)(*(ushort *)(uVar107 + 2) << 8 |
                                             *(ushort *)(uVar107 + 2) >> 8) *
                               ((uint)uVar75 + (int)uVar120)) == -1);
  }
  uVar80 = param_2;
  if ((uint)uVar127 < iVar43 + (uint)uVar75) {
    uVar80 = (ulong)((uint)(ushort)(*(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8) *
                    (uint)uVar127) + (long)puVar131;
  }
  uVar77 = (uVar80 - *(long *)param_6) + 4;
  in_R10 = (pthread_mutex_t *)0x0;
  if (((pthread_mutex_t *)(ulong)*(uint *)in_R11 < (ulong)uVar77) ||
     ((pthread_mutex_t *)(ulong)*(uint *)in_R11 < (ulong)uVar77))
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  ;
  auVar259._0_2_ = *(ushort *)(uVar80 + 2) << 8 | *(ushort *)(uVar80 + 2) >> 8;
  auVar259[2] = '\0';
  auVar259[3] = '\0';
  auVar259[4] = '\0';
  auVar259[5] = '\0';
  auVar259[6] = '\0';
  auVar259[7] = '\0';
  uVar80 = (long)(auVar259._0_8_ + uVar90) + 4;
  unaff_RBX = uVar80;
code_r0x003f3820:
  uVar77 = uVar80 - *(long *)param_6;
  if ((pthread_mutex_t *)(ulong)*(uint *)in_R11 < (ulong)(uVar80 - *(long *)param_6))
  goto LAB_003f312d;
  uVar80._0_4_ = *(uint *)(auVar259._0_8_ + uVar90);
  lVar88 = (ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                   ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18) * 4;
  uVar77._0_4_ = (uint)((ulong)lVar88 >> 0x20);
  uVar77._4_4_ = 0;
  uVar80._0_4_ = (uint)lVar88;
  if ((uint)uVar77 != 0) goto LAB_003f312d;
  uVar77._4_4_ = 0;
  uVar77._0_4_ = *(uint *)in_R11;
  if (((ulong)uVar77 < (pthread_mutex_t *)(unaff_RBX - *(long *)param_6)) ||
     ((uint)(*(int *)&((__pthread_internal_list *)(uVar100 + 0x10))->__prev - (int)unaff_RBX) <
      (uint)uVar80)) goto LAB_003f312d;
  iVar43 = *(int *)(uVar100 + 0x1c) - (uint)uVar80;
  *(int *)(uVar100 + 0x1c) = iVar43;
  if (iVar43 < 1) goto LAB_003f312d;
  if ((int)param_3 == (int)uVar127)
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_1
  ;
  uVar56 = *(ushort *)(uVar107 + 4);
  uVar127._0_4_ = (int)uVar127 + 1;
  uVar127._4_4_ = 0;
  goto LAB_003f379d;
LAB_003f34fa:
  phVar85 = (hb_buffer_t *)&_hb_NullPool;
  uVar75 = uVar56 << 8 | uVar56 >> 8;
  iVar43 = 0;
  if (uVar56 != 0) {
    uVar92 = (ulong)((uint)(ushort)(*(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8) *
                    (uVar75 - 1));
    iVar43 = 0;
    if (*(short *)((hb_buffer_t *)(uVar107 + 0xc) + uVar92) == -1) {
      iVar43 = -(uint)(*(short *)(phVar103 + uVar92 + 2) == -1);
    }
  }
  if ((uint)uVar99 < iVar43 + (uint)uVar75) {
    phVar85 = phVar103 +
              (uint)(ushort)(*(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8) *
              (uint)uVar99;
  }
  uVar77._4_4_ = 0;
  uVar77._0_4_ = *(uint *)in_R11;
  if ((ulong)uVar77 < (pthread_mutex_t *)(phVar85 + (6 - *(long *)param_6))) goto LAB_003f312d;
  uVar56 = *(ushort *)(phVar85 + 2) << 8 | *(ushort *)(phVar85 + 2) >> 8;
  uVar77._0_2_ = *(ushort *)phVar85 << 8 | *(ushort *)phVar85 >> 8;
  uVar77._2_1_ = '\0';
  uVar77._3_1_ = '\0';
  uVar77._4_1_ = '\0';
  uVar77._5_1_ = '\0';
  uVar77._6_1_ = '\0';
  uVar77._7_1_ = '\0';
  if (((ushort)uVar77 < uVar56) ||
     ((hb_buffer_t *)(ulong)*(uint *)in_R11 < phVar85 + (6 - *(long *)param_6))) goto LAB_003f312d;
  *(ulong *)((long)pppVar86 + -8) = uVar99;
  uVar80._0_4_ = ((uint)(ushort)uVar77 - (uint)uVar56) + 1;
  uVar80._4_4_ = 0;
  uVar77 = uVar80;
  if (CARRY4((uint)uVar80,(uint)uVar80)) goto LAB_003f312d;
  uVar99 = (ulong)(ushort)(*(ushort *)(phVar85 + 4) << 8 | *(ushort *)(phVar85 + 4) >> 8);
  param_3 = (uint *)(uVar107 + uVar99);
  if ((((ulong)*(uint *)in_R11 < (ulong)((long)param_3 - *(long *)param_6)) ||
      ((uint)(*(int *)&((__pthread_internal_list *)(uVar100 + 0x10))->__prev - (int)param_3) <
       (uint)uVar80 * 2)) ||
     (iVar43 = *(int *)(uVar100 + 0x1c) + (uint)uVar80 * -2, *(int *)(uVar100 + 0x1c) = iVar43,
     iVar43 < 1)) goto LAB_003f312d;
  if ((uint)uVar80 != 0) {
    uVar92 = (ulong)(uint)uVar80;
    uVar80 = *(undefined8 *)param_6;
    uVar90._4_4_ = 0;
    uVar90._0_4_ = *(uint *)in_R11;
    param_2 = uVar92 * 2;
    uVar127 = uVar99 + uVar120;
    puVar131 = (uint *)0x0;
    do {
      uVar77 = uVar80;
      if ((uVar90 & 0xffffffff) < (ulong)((long)(uVar127 + (long)puVar131) - uVar80))
      goto LAB_003f312d;
      uVar99 = (ulong)(ushort)(*(ushort *)((long)param_3 + (long)puVar131) << 8 |
                              *(ushort *)((long)param_3 + (long)puVar131) >> 8);
      uVar59 = uVar99 + *(long *)((long)pppVar86 + -0x20) + 4;
      uVar77 = uVar59 - *(long *)param_6;
      if ((pthread_mutex_t *)(ulong)*(uint *)in_R11 < (ulong)(uVar59 - *(long *)param_6))
      goto LAB_003f312d;
      uVar80._0_4_ = *(uint *)(uVar99 + *(long *)((long)pppVar86 + -0x20));
      uVar99 = (ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                       ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18) * 4;
      uVar77._0_4_ = (uint)(uVar99 >> 0x20);
      uVar77._4_4_ = 0;
      auVar259._0_8_ = uVar99 & 0xffffffff;
      if ((uint)uVar77 != 0) goto LAB_003f312d;
      uVar80 = *(undefined8 *)param_6;
      unaff_RBX = uVar59 - uVar80;
      uVar90._4_4_ = 0;
      uVar90._0_4_ = *(uint *)in_R11;
code_r0x003f366d:
      uVar77 = uVar80;
      if ((((ulong)uVar90 < (ulong)unaff_RBX) ||
          ((uint)(*(int *)&((__pthread_internal_list *)(uVar100 + 0x10))->__prev - (int)uVar59) <
           (uint)auVar259._0_8_)) ||
         (iVar43 = *(int *)(uVar100 + 0x1c) - (uint)auVar259._0_8_,
         *(int *)(uVar100 + 0x1c) = iVar43, iVar43 < 1)) goto LAB_003f312d;
      puVar131 = (uint *)((long)puVar131 + 2);
    } while ((uint *)param_2 != puVar131);
  }
  uVar99 = (ulong)((int)*(undefined8 *)((long)pppVar86 + -8) + 1U);
  uVar77 = uVar80;
  if ((int)*(undefined8 *)((long)pppVar86 + -8) + 1U == *(uint *)((long)pppVar86 + -0x14))
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  ;
  uVar56 = *(ushort *)(uVar107 + 4);
  phVar103 = *(hb_buffer_t **)((long)pppVar86 + -0x10);
  goto LAB_003f34fa;
LAB_003f3331:
  uVar75 = uVar56 << 8 | uVar56 >> 8;
  iVar43 = 0;
  if (uVar56 != 0) {
    uVar80._0_4_ = (uint)(ushort)(*(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8) *
                   ((uint)uVar75 + (int)uVar120);
    iVar43 = 0;
    if (*(short *)((hb_buffer_t *)(uVar107 + 0xc) + (uint)uVar80) == -1) {
      iVar43 = -(uint)(*(short *)((hb_buffer_t *)((long)puVar131 + 2) + (uint)uVar80) == -1);
    }
  }
  uVar80 = param_2;
  if ((uint)uVar127 < iVar43 + (uint)uVar75) {
    uVar80 = (ulong)((uint)(ushort)(*(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8) *
                    (uint)uVar127) + (long)puVar131;
  }
  uVar77 = (uVar80 - *(long *)param_6) + 6;
  in_R10 = (pthread_mutex_t *)0x0;
  if (((pthread_mutex_t *)(ulong)*(uint *)in_R11 < (ulong)uVar77) ||
     ((pthread_mutex_t *)(ulong)*(uint *)in_R11 < (ulong)uVar77))
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  ;
  auVar259._0_2_ = *(ushort *)(uVar80 + 4) << 8 | *(ushort *)(uVar80 + 4) >> 8;
  auVar259[2] = '\0';
  auVar259[3] = '\0';
  auVar259[4] = '\0';
  auVar259[5] = '\0';
  auVar259[6] = '\0';
  auVar259[7] = '\0';
  unaff_RBX = (long)(auVar259._0_8_ + uVar90) + 4;
  uVar80 = unaff_RBX - *(long *)param_6;
  uVar57 = *(uint *)in_R11;
code_r0x003f33c8:
  uVar77 = uVar80;
  if ((pthread_mutex_t *)(ulong)uVar57 < (ulong)uVar80) goto LAB_003f312d;
  uVar80._0_4_ = *(uint *)(auVar259._0_8_ + uVar90);
  lVar88 = (ulong)((uint)uVar80 >> 0x18 | ((uint)uVar80 & 0xff0000) >> 8 |
                   ((uint)uVar80 & 0xff00) << 8 | (uint)uVar80 << 0x18) * 4;
  uVar77._0_4_ = (uint)((ulong)lVar88 >> 0x20);
  uVar77._4_4_ = 0;
  uVar80._0_4_ = (uint)lVar88;
  if ((uint)uVar77 != 0) goto LAB_003f312d;
  uVar77._4_4_ = 0;
  uVar77._0_4_ = *(uint *)in_R11;
  if (((ulong)uVar77 < (pthread_mutex_t *)(unaff_RBX - *(long *)param_6)) ||
     ((uint)(*(int *)&((__pthread_internal_list *)(uVar100 + 0x10))->__prev - (int)unaff_RBX) <
      (uint)uVar80)) goto LAB_003f312d;
  iVar43 = *(int *)(uVar100 + 0x1c) - (uint)uVar80;
  *(int *)(uVar100 + 0x1c) = iVar43;
  if (iVar43 < 1) goto LAB_003f312d;
  if ((int)param_3 == (int)uVar127)
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_1
  ;
  uVar56 = *(ushort *)(uVar107 + 4);
  uVar127._0_4_ = (int)uVar127 + 1;
  uVar127._4_4_ = 0;
  goto LAB_003f3331;

  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_1
  :
  in_R10._0_1_ = '\x01';
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  ;
LAB_003f312d:
  in_R10 = (pthread_mutex_t *)0x0;
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  ;
LAB_003f2d3d:
  uVar127._0_4_ = (uint)(iVar43 + (int)uVar92) >> 1;
  uVar75 = *(ushort *)((hb_buffer_t *)(uVar107 + 0xc) + (ulong)uVar56 * (ulong)(uint)uVar127);
  uVar80._0_4_ = (uint)(ushort)(uVar75 << 8 | uVar75 >> 8);
  if (uVar97 < (uint)uVar80) {
    iVar43 = (uint)uVar127 - 1;
    if (iVar43 < (int)uVar92) goto LAB_003f2e36;
    goto LAB_003f2d3d;
  }
  if ((uint)uVar80 == uVar97) {
    phVar103 = (hb_buffer_t *)(uVar107 + 0xc) + (uint)uVar127 * (int)uVar99;
    goto LAB_003f2e36;
  }
  uVar92 = (ulong)((uint)uVar127 + 1);
  if (iVar43 < (int)((uint)uVar127 + 1)) {
LAB_003f2e36:
    phVar85 = phVar103 + 2;
    if (phVar103 == (hb_buffer_t *)0x0) {
      phVar85 = (hb_buffer_t *)0x0;
    }
    auVar274._8_8_ = uVar92;
    auVar274._0_8_ = phVar85;
    return auVar274;
  }
  goto LAB_003f2d3d;

  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_get_value_switchD_003f2ba5_caseD_2
  :
  uVar56 = *(ushort *)(uVar107 + 4);
  uVar75 = uVar56 << 8 | uVar56 >> 8;
  uVar127._0_4_ = (uint)uVar75;
  if (uVar56 == 0) {
    uVar120._0_2_ = *(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8;
    uVar120._2_1_ = '\0';
    uVar120._3_1_ = '\0';
    uVar120._4_1_ = '\0';
    uVar120._5_1_ = '\0';
    uVar120._6_1_ = '\0';
    uVar120._7_1_ = '\0';
    param_6 = &((pthread_mutex_t *)0x0)->__data;
    uVar80 = uVar120;
    uVar56 = (ushort)uVar120;
    if ((uint)uVar127 == 0) goto LAB_003f2e1f;
  }
  else {
    uVar120._0_2_ = *(ushort *)(uVar107 + 2) << 8 | *(ushort *)(uVar107 + 2) >> 8;
    uVar120._2_1_ = '\0';
    uVar120._3_1_ = '\0';
    uVar120._4_1_ = '\0';
    uVar120._5_1_ = '\0';
    uVar120._6_1_ = '\0';
    uVar120._7_1_ = '\0';
    uVar80._0_4_ = (uVar75 - 1) * (uint)(ushort)uVar120;
    iVar43 = 0;
    if (*(short *)((hb_buffer_t *)(uVar107 + 0xc) + (uint)uVar80) == -1) {
      iVar43 = -(uint)(*(short *)((hb_buffer_t *)(uVar107 + 0xe) + (uint)uVar80) == -1);
    }
    param_6 = &((pthread_mutex_t *)0x0)->__data;
    uVar127._0_4_ = iVar43 + (uint)uVar127;
    uVar80 = uVar120;
    uVar56 = (ushort)uVar120;
    if ((uint)uVar127 == 0 || SCARRY4(iVar43,(uint)uVar75) != (int)(uint)uVar127 < 0)
    goto LAB_003f2e1f;
  }
  in_R10._2_1_ = '\0';
  in_R10._3_1_ = '\0';
  in_R10._4_1_ = '\0';
  in_R10._5_1_ = '\0';
  in_R10._6_1_ = '\0';
  in_R10._7_1_ = '\0';
  in_R10._0_2_ = uVar56;
  param_6 = &((pthread_mutex_t *)0x0)->__data;
  uVar107 = uVar107 + 0xc;
  in_R11[0] = (uint)uVar127 - 1;
  in_R11[1]._0_1_ = '\0';
  in_R11[1]._1_1_ = '\0';
  in_R11[1]._2_1_ = '\0';
  in_R11[1]._3_1_ = '\0';
  uVar80 = (pthread_mutex_t *)0x0;
LAB_003f2c3f:
  uVar59._0_4_ = in_R11[0] + (int)uVar80;
  uVar59._4_4_ = 0;
code_r0x003f2c43:
  lVar88 = in_R10 * ((ulong)uVar59 >> 1);
  iVar43 = (int)((ulong)uVar59 >> 1);
  if (uVar97 < (ushort)(*(ushort *)((hb_buffer_t *)(uVar107 + 2) + lVar88) << 8 |
                       *(ushort *)((hb_buffer_t *)(uVar107 + 2) + lVar88) >> 8)) {
    in_R11[1]._0_1_ = '\0';
    in_R11[1]._1_1_ = '\0';
    in_R11[1]._2_1_ = '\0';
    in_R11[1]._3_1_ = '\0';
    in_R11[0] = iVar43 - 1U;
    if ((int)(iVar43 - 1U) < (int)uVar80) goto LAB_003f2e1f;
    goto LAB_003f2c3f;
  }
  uVar56 = *(ushort *)&((__pthread_mutex_s *)(uVar107 + lVar88))->__lock;
  if (uVar97 <= (ushort)(uVar56 << 8 | uVar56 >> 8)) {
    param_6 = uVar107 + (ulong)(uint)(iVar43 * (int)uVar120);
    goto LAB_003f2e1f;
  }
  uVar80._4_4_ = 0;
  uVar80._0_4_ = iVar43 + 1U;
  if (in_R11[0] < (int)(iVar43 + 1U)) {
LAB_003f2e1f:
    phVar103 = (hb_buffer_t *)(param_6 + 4);
    if ((pthread_mutex_t *)param_6 == (pthread_mutex_t *)0x0) {
      phVar103 = (hb_buffer_t *)0x0;
    }
    auVar273[8] = (char)uVar80;
    auVar273[9] = (char)((ulong)uVar80 >> 8);
    auVar273[10] = (char)((ulong)uVar80 >> 0x10);
    auVar273[0xb] = (char)((ulong)uVar80 >> 0x18);
    auVar273[0xc] = (char)((ulong)uVar80 >> 0x20);
    auVar273[0xd] = (char)((ulong)uVar80 >> 0x28);
    auVar273[0xe] = (char)((ulong)uVar80 >> 0x30);
    auVar273[0xf] = (char)((ulong)uVar80 >> 0x38);
    auVar273._0_8_ = phVar103;
    return auVar273;
  }
  goto LAB_003f2c3f;
code_r0x003f2774:
  iVar98 = (int)uVar59;
  if (uVar97 < (uint)uVar99) {
    auVar259._4_4_ = 0;
    auVar259._0_4_ = iVar98 - 1U;
    if ((int)(iVar98 - 1U) < (int)uVar80) goto LAB_003f2856;
  }
  else {
    if ((uint)uVar99 == uVar97) {
      param_6 = uVar107 + (ulong)(uint)(iVar98 * iVar43);
LAB_003f2856:
      phVar103 = (hb_buffer_t *)(param_6 + 2);
      if ((pthread_mutex_t *)param_6 == (pthread_mutex_t *)0x0) {
        phVar103 = (hb_buffer_t *)0x0;
      }
      auVar268[8] = (char)uVar80;
      auVar268[9] = (char)((ulong)uVar80 >> 8);
      auVar268[10] = (char)((ulong)uVar80 >> 0x10);
      auVar268[0xb] = (char)((ulong)uVar80 >> 0x18);
      auVar268[0xc] = (char)((ulong)uVar80 >> 0x20);
      auVar268[0xd] = (char)((ulong)uVar80 >> 0x28);
      auVar268[0xe] = (char)((ulong)uVar80 >> 0x30);
      auVar268[0xf] = (char)((ulong)uVar80 >> 0x38);
      auVar268._0_8_ = phVar103;
      return auVar268;
    }
    uVar80._4_4_ = 0;
    uVar80._0_4_ = iVar98 + 1U;
    if ((int)auVar259._0_8_ < (int)(iVar98 + 1U)) goto LAB_003f2856;
  }
  uVar59._0_4_ = (uint)((int)auVar259._0_8_ + (int)uVar80) >> 1;
  uVar59._4_4_ = 0;
  uVar56 = *(ushort *)&((__pthread_mutex_s *)(uVar107 + in_R10 * uVar59))->__lock;
  uVar99 = (ulong)(ushort)(uVar56 << 8 | uVar56 >> 8);
  goto code_r0x003f2774;
LAB_003f27fb:
  uVar80._0_4_ = (uint)uVar127 + uVar57 >> 1;
  if (uVar97 < (ushort)(*(ushort *)((hb_buffer_t *)(uVar107 + 0xe) + param_6 * (ulong)(uint)uVar80)
                        << 8 | *(ushort *)
                                ((hb_buffer_t *)(uVar107 + 0xe) + param_6 * (ulong)(uint)uVar80) >>
                               8)) {
    uVar80._0_4_ = (uint)uVar80 - 1;
    uVar80._4_4_ = 0;
    uVar127._0_4_ = (uint)uVar80;
    if ((int)(uint)uVar80 < (int)uVar57)
    goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_get_value_switchD_003f25c5_caseD_1;
    goto LAB_003f27fb;
  }
  if (uVar97 <= (ushort)(*(ushort *)((hb_buffer_t *)(uVar107 + 0xc) + param_6 * (ulong)(uint)uVar80)
                         << 8 | *(ushort *)
                                 ((hb_buffer_t *)(uVar107 + 0xc) + param_6 * (ulong)(uint)uVar80) >>
                                8)) {
    auVar269._8_4_ = (uint)uVar80 * (uVar81 & 0xffff);
    uVar99 = CONCAT44(0,auVar269._8_4_);
    uVar127._0_4_ =
         (uint)(ushort)(*(ushort *)((hb_buffer_t *)(uVar107 + 0xe) + uVar99) << 8 |
                       *(ushort *)((hb_buffer_t *)(uVar107 + 0xe) + uVar99) >> 8);
    if ((uVar97 < (uint)uVar127) ||
       ((ushort)(*(ushort *)((hb_buffer_t *)(uVar107 + 0xc) + uVar99) << 8 |
                *(ushort *)((hb_buffer_t *)(uVar107 + 0xc) + uVar99) >> 8) < uVar97)) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar99;
      return auVar10 << 0x40;
    }
    uVar56 = *(ushort *)((long)&((__pthread_internal_list *)(uVar107 + 0x10))->__prev + uVar99);
    auVar269._0_8_ =
         (hb_buffer_t *)((ulong)(ushort)(uVar56 << 8 | uVar56 >> 8) + uVar107) +
         (ulong)(uVar97 - (uint)uVar127) * 4;
    auVar269._12_4_ = 0;
    return auVar269;
  }
  uVar80._0_4_ = (uint)uVar80 + 1;
  uVar80._4_4_ = 0;
  uVar57 = (uint)uVar80;
  if ((int)(uint)uVar127 < (int)(uint)uVar80) {
AAT_Lookup<OT::IntType<unsigned_int,4u>>_get_value_switchD_003f25c5_caseD_1:
    auVar266[8] = (char)uVar80;
    auVar266[9] = (char)((ulong)uVar80 >> 8);
    auVar266[10] = (char)((ulong)uVar80 >> 0x10);
    auVar266[0xb] = (char)((ulong)uVar80 >> 0x18);
    auVar266[0xc] = (char)((ulong)uVar80 >> 0x20);
    auVar266[0xd] = (char)((ulong)uVar80 >> 0x28);
    auVar266[0xe] = (char)((ulong)uVar80 >> 0x30);
    auVar266[0xf] = (char)((ulong)uVar80 >> 0x38);
    auVar266[0] = (char)auVar259._0_8_;
    auVar266[1] = (char)((ulong)auVar259._0_8_ >> 8);
    auVar266[2] = (char)((ulong)auVar259._0_8_ >> 0x10);
    auVar266[3] = (char)((ulong)auVar259._0_8_ >> 0x18);
    auVar266[4] = (char)((ulong)auVar259._0_8_ >> 0x20);
    auVar266[5] = (char)((ulong)auVar259._0_8_ >> 0x28);
    auVar266[6] = (char)((ulong)auVar259._0_8_ >> 0x30);
    auVar266[7] = (char)((ulong)auVar259._0_8_ >> 0x38);
    return auVar266;
  }
  goto LAB_003f27fb;
LAB_003f0554:
  do {
    uVar97 = (uint)(in_R11[0] + iVar43) >> 1;
    lVar88 = (ulong)uVar97 * 6;
    uVar81 = (uint)(ushort)(*(ushort *)((hb_buffer_t *)(auStack_23c._12_8_ + 0x1c) + lVar88) << 8 |
                           *(ushort *)((hb_buffer_t *)(auStack_23c._12_8_ + 0x1c) + lVar88) >> 8);
    if ((uint)uVar80 != uVar81) {
      if (uVar81 <= (uint)uVar80) goto LAB_003f0590;
LAB_003f0549:
      in_R11[1]._0_1_ = '\0';
      in_R11[1]._1_1_ = '\0';
      in_R11[1]._2_1_ = '\0';
      in_R11[1]._3_1_ = '\0';
      in_R11[0] = uVar97 - 1;
      if ((int)(uVar97 - 1) < iVar43) break;
      goto LAB_003f0554;
    }
    uVar81 = (uint)(ushort)(*(ushort *)((hb_buffer_t *)(auStack_23c._12_8_ + 0x1e) + lVar88) << 8 |
                           *(ushort *)((hb_buffer_t *)(auStack_23c._12_8_ + 0x1e) + lVar88) >> 8);
    if (uVar57 < uVar81) goto LAB_003f0549;
    if (uVar57 == uVar81) {
      phVar103 = (hb_buffer_t *)(auStack_23c._12_8_ + (ulong)uVar97 * 6) + 0x1c;
      goto LAB_003f05af;
    }
LAB_003f0590:
    iVar43 = uVar97 + 1;
  } while (iVar43 <= in_R11[0]);
  phVar103 = (hb_buffer_t *)&_hb_NullPool;
LAB_003f05af:
  uVar60._0_4_ = (uint)(short)(*(ushort *)(phVar103 + 4) << 8 | *(ushort *)(phVar103 + 4) >> 8);
  uVar60._4_4_ = 0;
  uVar80._0_4_ = (uint)uVar60;
  if (((pthread_mutex_t *)param_2 != (pthread_mutex_t *)0x0) &&
     (uVar57 = *(uint *)(auStack_23c._12_8_ + 8), uVar57 != 0)) {
    uVar80._0_4_ = uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 | (uVar57 & 0xff00) << 8 |
                   uVar57 << 0x18;
    if ((CARRY4((uint)uVar80,(uint)uVar80)) ||
       (((uVar60 = uVar60 + auStack_23c._12_8_,
         (ulong)*(uint *)&((__pthread_internal_list *)(param_2 + 0x40))->__prev <
         (ulong)(uVar60 - (long)((__pthread_internal_list *)(param_2 + 0x30))->__prev) ||
         ((uint)(*(int *)(param_2 + 0x38) - (int)uVar60) < (uint)uVar80 * 2)) ||
        (iVar43 = *(int *)(param_2 + 0x44) + (uint)uVar80 * -2, *(int *)(param_2 + 0x44) = iVar43,
        iVar43 < 1)))) goto LAB_003f05cb;
    uVar60._0_4_ = (uint)(short)(*(ushort *)uVar60 << 8 | *(ushort *)uVar60 >> 8);
    uVar60._4_4_ = 0;
    uVar80._0_4_ = (uint)uVar60;
  }
  if ((uint)uVar80 == 0) goto LAB_003f05cb;
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01f4) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
  if (uStack_240 == 4) {
    iVar43 = (int)((ulong)((long)(short)uVar60 * *(long *)(_uStack_248 + 0x58) + 0x8000) >> 0x10);
    if ((uVar87 & 0x40000000) != 0) {
      *(int *)((hb_buffer_t *)(_uStack_228 + 0xc) + uVar99 * 0x14) = iVar43;
      goto LAB_003f06b1;
    }
    uVar60._0_4_ = iVar43 >> 1;
    uVar60._4_4_ = 0;
    phVar103 = (hb_buffer_t *)(_uStack_228 + _uStack_258 * 4);
    *(uint *)phVar103 = *(int *)phVar103 + (uint)uVar60;
    phVar103 = (hb_buffer_t *)(_uStack_228 + uVar99 * 0x14);
    *(uint *)phVar103 = *(int *)phVar103 + (iVar43 - (uint)uVar60);
    *(uint *)((hb_buffer_t *)(_uStack_228 + 8) + uVar99 * 0x14) =
         *(int *)((hb_buffer_t *)(_uStack_228 + 8) + uVar99 * 0x14) + (iVar43 - (uint)uVar60);
  }
  else {
    iVar43 = (int)((ulong)((long)(short)uVar60 *
                           (long)((__pthread_internal_list *)(_uStack_248 + 0x60))->__prev + 0x8000)
                  >> 0x10);
    if ((uVar87 & 0x40000000) == 0) {
      uVar60._0_4_ = iVar43 >> 1;
      uVar60._4_4_ = 0;
      *(uint *)((hb_buffer_t *)(_uStack_228 + 4) + _uStack_258 * 4) =
           *(int *)((hb_buffer_t *)(_uStack_228 + 4) + _uStack_258 * 4) + (uint)uVar60;
      *(uint *)((hb_buffer_t *)(_uStack_228 + 4) + uVar99 * 0x14) =
           *(int *)((hb_buffer_t *)(_uStack_228 + 4) + uVar99 * 0x14) + (iVar43 - (uint)uVar60);
      *(uint *)((hb_buffer_t *)(_uStack_228 + 0xc) + uVar99 * 0x14) =
           *(int *)((hb_buffer_t *)(_uStack_228 + 0xc) + uVar99 * 0x14) + (iVar43 - (uint)uVar60);
    }
    else {
      *(int *)((hb_buffer_t *)(_uStack_228 + 8) + uVar99 * 0x14) = iVar43;
LAB_003f06b1:
      *(byte *)&((__pthread_internal_list *)(uStack_268 + 0xc0))->__prev =
           *(byte *)&((__pthread_internal_list *)(uStack_268 + 0xc0))->__prev | 8;
      uVar60 = _uStack_228;
    }
  }
  auVar256 = hb_buffer_t::unsafe_to_break
                       ((hb_buffer_t *)uStack_268,(uint)uVar127,p_Stack_200._0_4_ + 1);
  param_2._4_4_ = uStack_274;
LAB_003f05cb:
  uVar76._4_4_ = 0;
  uVar76._0_4_ = p_Stack_200._0_4_;
LAB_003f0254:
  auVar259 = auVar256;
  if (uStack_25c <= (uint)uVar76) goto LAB_003f0e56;
  goto LAB_003f025e;
  while( true ) {
    hVar55 = ((hb_buffer_t *)(_uStack_280 + 1))[uVar92];
    uVar92 = uVar92 + 1;
    if (hVar55 == (hb_buffer_t)0x0) break;
LAB_0041f420:
    *(hb_buffer_t *)((long)auStack_23c + (uVar92 - 0x20)) = hVar55;
    if (uVar99 - 1 == uVar92) goto LAB_0041f438;
  }
  uVar99 = uVar92 & 0xffffffff;
LAB_0041f438:
  if ((uint)uVar99 < 4) {
    memset((void *)((long)auStack_23c + (uVar99 - 0x20)),0x20,(ulong)(3 - (uint)uVar99) + 1);
  }
  uVar81 = uStack_25c >> 0x18 | (uStack_25c & 0xff0000) >> 8 | (uStack_25c & 0xff00) << 8 |
           uStack_25c << 0x18;
LAB_0041f46d:
  uVar99 = (ulong)_ZZL24hb_ot_tags_from_languagePKcS0_PjS1_E12last_tag_idx_0;
  if ((_ZZL24hb_ot_tags_from_languagePKcS0_PjS1_E12last_tag_idx_0 < uVar87) &&
     (*(uint *)(pcVar109 + uVar99 * 8) == uVar81)) {
LAB_0041f485:
    _ZZL24hb_ot_tags_from_languagePKcS0_PjS1_E12last_tag_idx_0 = (uint)uVar99;
    do {
      uVar127._0_4_ = (uint)uVar99;
      if ((uint)uVar127 == 0) {
        uVar127._0_4_ = 0;
        uVar80._0_4_ = uVar87;
        if (uVar87 == 0) goto joined_r0x0041f32f;
        goto LAB_0041f4d3;
      }
      lVar88 = uVar99 * 8;
      uVar99 = (ulong)((uint)uVar127 - 1);
    } while (*(int *)(pcVar109 + lVar88) == *(int *)(pcVar109 + (ulong)((uint)uVar127 - 1) * 8));
    bVar137 = (uint)uVar127 <= uVar87;
    uVar87 = uVar87 - (uint)uVar127;
    bVar138 = uVar87 != 0;
    if (!bVar137) {
      uVar87 = 0;
    }
    uVar80._0_4_ = uVar87;
    if (bVar137 && bVar138) {
LAB_0041f4d3:
      uVar99 = (ulong)(uint)uVar127;
      uVar81 = *(uint *)(pcVar109 + uVar99 * 8 + 4);
      if (uVar81 == 0) {
        uVar80._0_4_ = 0;
      }
      else {
        uVar80._0_4_ = 0;
        if (*(int *)(pcVar109 + uVar99 * 8) == *(int *)(pcVar109 + uVar99 * 8)) {
          uVar80._0_4_ = uVar87;
          uStack_274 = uVar81;
          if (uVar87 != 1) {
            iVar43 = *(int *)(pcVar109 + (ulong)((uint)uVar127 + 1) * 8 + 4);
            if (iVar43 == 0) {
              uVar80._0_4_ = 1;
            }
            else {
              uVar80._0_4_ = 1;
              if (*(int *)(pcVar109 + (ulong)((uint)uVar127 + 1) * 8) ==
                  *(int *)(pcVar109 + uVar99 * 8)) {
                uStack_270 = (ushort)iVar43;
                uStack_26e = (undefined2)((uint)iVar43 >> 0x10);
                uVar80._0_4_ = uVar87;
                if (uVar87 != 2) {
                  if (*(int *)(pcVar109 + (ulong)((uint)uVar127 + 2) * 8 + 4) == 0) {
                    uVar80._0_4_ = 2;
                  }
                  else {
                    uVar80._0_4_ = 2;
                    if (*(int *)(pcVar109 + (ulong)((uint)uVar127 + 2) * 8) ==
                        *(int *)(pcVar109 + uVar99 * 8)) {
                      uVar80._0_4_ = 3;
                      uStack_26c = *(int *)(pcVar109 + (ulong)((uint)uVar127 + 2) * 8 + 4);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (!bVar137) {
      iVar43 = uVar87 - 1;
      iVar98 = 0;
      do {
        while( true ) {
          uVar127._0_4_ = (uint)(iVar43 + iVar98) >> 1;
          uVar99 = (ulong)(uint)uVar127;
          if (uVar81 < *(uint *)(pcVar109 + uVar99 * 8)) break;
          if (uVar81 <= *(uint *)(pcVar109 + uVar99 * 8)) goto LAB_0041f485;
          iVar98 = (uint)uVar127 + 1;
          if (iVar43 < iVar98) goto LAB_0041fa27;
        }
        iVar43 = (uint)uVar127 - 1;
      } while (iVar98 <= iVar43);
    }
LAB_0041fa27:
    if (phVar103 == (hb_buffer_t *)0x0) {
      sVar54 = strlen((char *)_uStack_280);
      phVar103 = (hb_buffer_t *)(sVar54 + _uStack_280);
    }
    uVar80._0_4_ = 0;
    if ((long)phVar103 - _uStack_280 == 3) {
      uVar127._0_4_ = hb_tag_from_string((char *)_uStack_280);
      uVar80._0_4_ = 1;
      uStack_274 = (uint)uVar127 & 0xdfdfdfff;
    }
  }
joined_r0x0041f32f:
  uVar127 = (pthread_mutex_t *)0x0;
  if ((char)puVar131 == '\0') goto LAB_0041f6da;
LAB_0041f56e:
  if ((int)uVar57 < 0x4d6c796d) {
    if ((int)uVar57 < 0x47756a72) {
      uVar87 = 0x626e6732;
      if (uVar57 != 0x42656e67) {
        if (uVar57 != 0x44657661) goto LAB_0041f64c;
        uVar87 = 0x64657632;
      }
    }
    else if (uVar57 == 0x47756a72) {
      uVar87 = 0x676a7232;
    }
    else if (uVar57 == 0x47757275) {
      uVar87 = 0x67757232;
    }
    else {
      if (uVar57 != 0x4b6e6461) goto LAB_0041f64c;
      uVar87 = 0x6b6e6432;
    }
LAB_0041f620:
    _uStack_240 = CONCAT44(uVar87,uStack_240) | 0x3300000000;
    uVar127 = (pthread_mutex_t *)0x1;
    if (uStack_260 < 2) {
      uStack_260 = 1;
      goto LAB_0041f6da;
    }
LAB_0041f636:
    uVar99 = uVar127 & 0xffffffff;
    uVar127._0_4_ = (int)uVar127 + 1;
    uVar127._4_4_ = 0;
    auStack_23c[uVar99] = uVar87;
    if ((uint)uVar127 < uStack_260) goto LAB_0041f64c;
  }
  else {
    if (0x4f727960 < (int)uVar57) {
      if (uVar57 == 0x4f727961) {
        uVar87 = 0x6f727932;
      }
      else if (uVar57 == 0x54616d6c) {
        uVar87 = 0x746d6c32;
      }
      else {
        if (uVar57 != 0x54656c75) goto LAB_0041f64c;
        uVar87 = 0x74656c32;
      }
      goto LAB_0041f620;
    }
    if (uVar57 == 0x4d6c796d) {
      uVar87 = 0x6d6c6d32;
      goto LAB_0041f620;
    }
    uVar87 = 0x6d796d32;
    if (uVar57 == 0x4d796d72) goto LAB_0041f636;
LAB_0041f64c:
    if ((int)uVar57 < 0x4e6b6f6f) {
      if (uVar57 == 0) goto LAB_0041f6d5;
      if (uVar57 == 0x48697261) {
        uVar87 = 0x6b616e61;
      }
      else {
        if (uVar57 != 0x4c616f6f) goto LAB_0041f6ad;
        uVar87 = 0x6c616f20;
      }
    }
    else if ((int)uVar57 < 0x59696969) {
      if (uVar57 == 0x4e6b6f6f) {
        uVar87 = 0x6e6b6f20;
      }
      else {
        if (uVar57 != 0x56616969) goto LAB_0041f6ad;
        uVar87 = 0x76616920;
      }
    }
    else if (uVar57 == 0x59696969) {
      uVar87 = 0x79692020;
    }
    else {
      uVar87 = 0x6d617468;
      if (uVar57 != 0x5a6d7468) {
LAB_0041f6ad:
        uVar87 = uVar57 | 0x20000000;
      }
    }
    uVar99 = uVar127 & 0xffffffff;
    uVar127._0_4_ = (uint)uVar127 + 1;
    auStack_23c[uVar99] = uVar87;
  }
LAB_0041f6d5:
  uStack_260 = (uint)uVar127;
LAB_0041f6da:
  uVar127._0_4_ = uStack_260;
  uVar107 = hb_ot_layout_table_select_script
                      ((long)param_3,0x47535542,uStack_260,(long)auStack_23c,
                       (uint *)(param_2 + 0x38),(undefined4 *)(param_2 + 0x2c));
  *(bool *)(param_2 + 0x34) = (int)uVar107 != 0;
  hb_ot_layout_script_select_language2
            (*(long *)param_2,0x47535542,*(uint *)(param_2 + 0x38),(uint)uVar80,(long)&uStack_274,
             (uint *)(param_2 + 0x40));
  uVar107 = hb_ot_layout_table_select_script
                      (*(long *)param_2,0x47504f53,(uint)uVar127,(long)auStack_23c,
                       (uint *)(param_2 + 0x3c),(undefined4 *)(param_2 + 0x30));
  *(bool *)(param_2 + 0x35) = (int)uVar107 != 0;
  auVar259 = hb_ot_layout_script_select_language2
                       (*(long *)param_2,0x47504f53,*(uint *)(param_2 + 0x3c),(uint)uVar80,
                        (long)&uStack_274,(uint *)(param_2 + 0x44));
  return auVar259;
code_r0x003f3c06:
  while( true ) {
    uVar80._0_4_ = (uint)uVar59 & 0xffff;
    iVar43 = 0;
    if ((short)auVar259._0_8_ != 0) {
      uVar57 = (uint)(ushort)(*(ushort *)(unaff_RBX + 2) << 8 | *(ushort *)(unaff_RBX + 2) >> 8) *
               ((uint)uVar80 + (int)uVar107);
      iVar43 = 0;
      if (*(short *)((hb_buffer_t *)(unaff_RBX + 0xc) + uVar57) == -1) {
        iVar43 = -(uint)(*(short *)((hb_buffer_t *)(uVar127 + 2) + uVar57) == -1);
      }
    }
    uVar80._0_4_ = iVar43 + (uint)uVar80;
    uVar80._4_4_ = 0;
    uVar57 = (uint)uVar90;
    uVar46 = param_2;
    if (uVar57 < (uint)uVar80) {
      uVar46 = (ulong)((ushort)(*(ushort *)(unaff_RBX + 2) << 8 | *(ushort *)(unaff_RBX + 2) >> 8) *
                      uVar57) + uVar127;
    }
    uVar56 = *(ushort *)(uVar46 + 2);
    if (uVar56 != 0xffff) {
      uVar46 = hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
               ::add_range((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                            *)param_3,(uint)(ushort)(uVar56 << 8 | uVar56 >> 8),
                           (uint)(ushort)(*(ushort *)uVar46 << 8 | *(ushort *)uVar46 >> 8));
      uVar107 = (pthread_mutex_t *)0xffffffff;
      uVar80 = extraout_RDX_01;
    }
    if (uVar87 == uVar57) break;
    uVar56 = *(ushort *)(unaff_RBX + 4);
    auVar259[2] = '\0';
    auVar259[3] = '\0';
    auVar259[4] = '\0';
    auVar259[5] = '\0';
    auVar259[6] = '\0';
    auVar259[7] = '\0';
    auVar259._0_2_ = uVar56;
    uVar90._0_4_ = uVar57 + 1;
    uVar90._4_4_ = 0;
    uVar59._0_2_ = uVar56 << 8 | uVar56 >> 8;
    uVar59._2_1_ = '\0';
    uVar59._3_1_ = '\0';
    uVar59._4_1_ = '\0';
    uVar59._5_1_ = '\0';
    uVar59._6_1_ = '\0';
    uVar59._7_1_ = '\0';
  }

  AAT_Lookup<OT::IntType<unsigned_int,4u>>_collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>_switchD_003f3a03_caseD_1
  :
  auVar278[8] = (char)uVar80;
  auVar278[9] = (char)((ulong)uVar80 >> 8);
  auVar278[10] = (char)((ulong)uVar80 >> 0x10);
  auVar278[0xb] = (char)((ulong)uVar80 >> 0x18);
  auVar278[0xc] = (char)((ulong)uVar80 >> 0x20);
  auVar278[0xd] = (char)((ulong)uVar80 >> 0x28);
  auVar278[0xe] = (char)((ulong)uVar80 >> 0x30);
  auVar278[0xf] = (char)((ulong)uVar80 >> 0x38);
  auVar278[0] = (char)uVar46;
  auVar278[1] = (char)((ulong)uVar46 >> 8);
  auVar278[2] = (char)((ulong)uVar46 >> 0x10);
  auVar278[3] = (char)((ulong)uVar46 >> 0x18);
  auVar278[4] = (char)((ulong)uVar46 >> 0x20);
  auVar278[5] = (char)((ulong)uVar46 >> 0x28);
  auVar278[6] = (char)((ulong)uVar46 >> 0x30);
  auVar278[7] = (char)((ulong)uVar46 >> 0x38);
  return auVar278;
code_r0x003f809d:
  do {
    uVar59 = uVar59 + -1;
  } while ((pthread_mutex_t *)uVar59 != (pthread_mutex_t *)0x0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
LAB_003f4fbb:
  in_R11 = (int  [2])0x0;
AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1:
  auVar281._0_8_ = (ulong)in_R11 & 0xffffffff;
  auVar281[8] = (char)uVar80;
  auVar281[9] = (char)((ulong)uVar80 >> 8);
  auVar281[10] = (char)((ulong)uVar80 >> 0x10);
  auVar281[0xb] = (char)((ulong)uVar80 >> 0x18);
  auVar281[0xc] = (char)((ulong)uVar80 >> 0x20);
  auVar281[0xd] = (char)((ulong)uVar80 >> 0x28);
  auVar281[0xe] = (char)((ulong)uVar80 >> 0x30);
  auVar281[0xf] = (char)((ulong)uVar80 >> 0x38);
  return auVar281;
LAB_003fc117:
  bVar137 = hb_buffer_t::message
                      (uVar107,auVar170._0_8_,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,
                       in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,(hb_buffer_t *)param_3,
                       _uStack_280,"start fallback kern",uVar59,uVar120,param_6,uVar283);
  if (bVar137) {
    _local_58 = CONCAT44(uStack_54,*(uint *)((long)param_3 + 0x38)) & 0xfffffffffffffffd;
    piVar52 = extraout_XMM0_Qa_36;
    if ((*(uint *)((long)param_3 + 0x38) & 0xfffffffd) == 5) {
      uVar127._0_4_ = *(uint *)_uStack_250;
      uVar59 = _uStack_260;
      if (1 < (uint)uVar127) {
        uVar59 = *(undefined8 *)_uStack_260;
        uVar99 = (ulong)((uint)uVar127 - 1);
        phVar103 = (hb_buffer_t *)(uVar59 + uVar99 * 0x14);
        uVar92 = 0;
        do {
          uVar99 = uVar99 - 1;
          uVar125 = *(undefined4 *)(phVar103 + 0x10);
          cStack_1a8 = (char)uVar125;
          cStack_1a7 = (char)((uint)uVar125 >> 8);
          cStack_1a6 = (char)((uint)uVar125 >> 0x10);
          cStack_1a5 = (char)((uint)uVar125 >> 0x18);
          piVar52 = *(int **)phVar103;
          _uStack_1b0 = *(undefined8 *)(phVar103 + 8);
          *(undefined4 *)(phVar103 + 0x10) =
               *(undefined4 *)&((__pthread_internal_list *)(uVar59 + 0x10))->__prev;
          lVar88 = *(long *)(uVar59 + 8);
          *(long *)phVar103 = *(long *)uVar59;
          *(long *)(phVar103 + 8) = lVar88;
          *(undefined4 *)&((__pthread_internal_list *)(uVar59 + 0x10))->__prev = uVar125;
          *(int **)uVar59 = piVar52;
          *(undefined8 *)(uVar59 + 8) = _uStack_1b0;
          uVar92 = uVar92 + 1;
          uVar59 = uVar59 + 0x14;
          phVar103 = phVar103 + -0x14;
          uStack_1b8 = piVar52;
        } while (uVar92 < (uVar99 & 0xffffffff));
      }
      if (*(char *)((long)param_3 + 0x5b) != '\0') {
        uVar80._0_4_ = *(uint *)_uStack_250;
        uVar59._4_4_ = 0;
        uVar59._0_4_ = (uint)uVar80;
        if ((uint)uVar80 < (uint)uVar127) {
          uVar127._0_4_ = (uint)uVar80;
        }
        if (1 < (uint)uVar127) {
          uVar59 = *(undefined8 *)_uStack_240;
          uVar99 = (ulong)((uint)uVar127 - 1);
          phVar103 = (hb_buffer_t *)(uVar59 + uVar99 * 0x14);
          uVar92 = 0;
          do {
            uVar99 = uVar99 - 1;
            uVar125 = *(undefined4 *)(phVar103 + 0x10);
            cStack_1a8 = (char)uVar125;
            cStack_1a7 = (char)((uint)uVar125 >> 8);
            cStack_1a6 = (char)((uint)uVar125 >> 0x10);
            cStack_1a5 = (char)((uint)uVar125 >> 0x18);
            piVar52 = *(int **)phVar103;
            _uStack_1b0 = *(undefined8 *)(phVar103 + 8);
            *(undefined4 *)(phVar103 + 0x10) =
                 *(undefined4 *)&((__pthread_internal_list *)(uVar59 + 0x10))->__prev;
            lVar88 = *(long *)(uVar59 + 8);
            *(long *)phVar103 = *(long *)uVar59;
            *(long *)(phVar103 + 8) = lVar88;
            *(undefined4 *)&((__pthread_internal_list *)(uVar59 + 0x10))->__prev = uVar125;
            *(int **)uVar59 = piVar52;
            *(undefined8 *)(uVar59 + 8) = _uStack_1b0;
            uVar92 = uVar92 + 1;
            uVar59 = uVar59 + 0x14;
            phVar103 = phVar103 + -0x14;
            uStack_1b8 = piVar52;
          } while (uVar92 < (uVar99 & 0xffffffff));
        }
      }
    }
    uStack_5c = *(uint *)((long)param_3 + 0x38);
    uVar125 = *(undefined4 *)&((__pthread_internal_list *)(param_2 + 0x100))->__prev;
    uStack_270 = (ushort)uVar125;
    uStack_26e = (undefined2)((uint)uVar125 >> 0x10);
    bVar137 = hb_buffer_t::message
                        (piVar52,auVar170._0_8_,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,
                         in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,(hb_buffer_t *)param_3,
                         _uStack_280,"start kern",uVar59,uVar120,param_6,uVar283);
    auVar263._8_8_ = auVar170._0_8_;
    auVar263._0_8_ = extraout_XMM0_Qa_37;
    if (bVar137) {
      if ((*(byte *)((long)param_3 + 0x18) & 0x40) != 0) {
        uVar127._0_4_ = *(uint *)&((__pthread_internal_list *)((long)param_3 + 0x60))->__prev;
        *(byte *)&((__pthread_internal_list *)((long)param_3 + 0xc0))->__prev =
             *(byte *)&((__pthread_internal_list *)((long)param_3 + 0xc0))->__prev | 0x20;
        if ((ulong)(uint)uVar127 != 0) {
          lVar88 = *(long *)_uStack_260;
          if ((ulong)(uint)uVar127 - 1 < 3) {
            uVar99 = 0;
          }
          else {
            pbVar119 = (byte *)(lVar88 + 0x40);
            uVar99 = 0;
            do {
              pbVar119[-0x3c] = pbVar119[-0x3c] | 2;
              pbVar119[-0x28] = pbVar119[-0x28] | 2;
              pbVar119[-0x14] = pbVar119[-0x14] | 2;
              *pbVar119 = *pbVar119 | 2;
              uVar99 = uVar99 + 4;
              pbVar119 = pbVar119 + 0x50;
            } while (((uint)uVar127 & 0xfffffffc) != uVar99);
          }
          param_3._4_4_ = uStack_274;
          param_3._0_4_ = local_278;
          param_2 = _uStack_258;
          if ((ulong)((uint)uVar127 & 3) != 0) {
            lVar126 = 0;
            do {
              pbVar119 = (byte *)(lVar88 + uVar99 * 0x14 + 4 + lVar126);
              *pbVar119 = *pbVar119 | 2;
              lVar126 = lVar126 + 0x14;
            } while ((ulong)((uint)uVar127 & 3) * 0x14 != lVar126);
          }
        }
      }
      uVar120 = &_hb_NullPool;
      OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                ((hb_ot_apply_context_t *)&uStack_1b8,1,_uStack_280,param_3,
                 (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
      auVar259 = _auStack_1a0;
      uVar102._4_4_ = uStack_274;
      uVar102._0_4_ = local_278;
      uStack_90 = (pthread_mutex_t *)CONCAT44(CONCAT22(uStack_26e,uStack_270),(undefined4)uStack_90)
      ;
      uStack_70 = 0xffffffff;
      bStack_155 = bStack_79;
      if (iStack_130 != 0) {
        bStack_155 = 0;
      }
      uStack_156 = iStack_130 == 1;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = extraout_XMM1_Qa_33;
      auVar262 = auVar33 << 0x40;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = extraout_XMM1_Qa_33;
      uStack_88 = (hb_buffer_t *)CONCAT44(8,(undefined4)uStack_88);
      cStack_1a8 = (char)(hb_ot_apply_context_t *)&uStack_1b8;
      cStack_1a7 = (char)((ulong)&uStack_1b8 >> 8);
      cStack_1a6 = (char)((ulong)&uStack_1b8 >> 0x10);
      cStack_1a5 = (char)((ulong)&uStack_1b8 >> 0x18);
      uStack_1a4 = (uint)((ulong)&uStack_1b8 >> 0x20);
      uStack_178 = *(uint *)&((__pthread_internal_list *)(uStack_118 + 0x60))->__prev;
      uVar59._4_4_ = 0;
      uVar59._0_4_ = uStack_178;
      auStack_190 = (undefined1  [16])0x0;
      _iStack_180 = (pthread_mutex_t *)0x0;
      auStack_1a0._0_4_ = 8;
      auStack_1a0[8] = uStack_156;
      bStack_197 = bStack_7a;
      _bStack_195 = auVar259._11_5_;
      bStack_196 = (bool)uStack_156;
      uStack_158 = (bool)uStack_156 || bStack_7b != 0;
      auStack_1a0._4_4_ = CONCAT22(uStack_26e,uStack_270);
      auStack_1a0._0_4_ = 8;
      bStack_195 = bStack_155;
      uStack_193 = auVar259._13_3_;
      cStack_194 = 0;
      auStack_150 = (undefined1  [16])0x0;
      uStack_140 = 0;
      uStack_160 = 8;
      uStack_157 = 1;
      uStack_15c = 0xffffffff;
      uStack_154 = 0;
      iVar43 = *(int *)&((__pthread_internal_list *)((long)param_3 + 0x60))->__prev;
      auStack_23c[3] = iVar43;
      phStack_168 = (hb_ot_apply_context_t *)&uStack_1b8;
      uStack_138 = uStack_178;
      auVar212 = auVar37 << 0x40;
      if (iVar43 != 0) {
        local_50 = (pthread_mutex_t *)
                   (CONCAT44(*(undefined4 *)((long)param_3 + 0x38),(undefined4)local_50) &
                   0xfffffffeffffffff);
        uStack_268 = ((__pthread_internal_list *)((long)param_3 + 0x70))->__prev;
        p_Var58 = ((__pthread_internal_list *)((long)param_3 + 0x80))->__prev;
        uStack_5c = uStack_5c & 0xfffffffe;
        uVar127._0_4_ = 0;
        do {
          while( true ) {
            while( true ) {
              uVar102._4_4_ = uStack_274;
              uVar99 = CONCAT44(0,(uint)uVar127);
              if ((*(uint *)((hb_buffer_t *)(uStack_268 + 4) + uVar99 * 0x14) &
                  CONCAT22(uStack_26e,uStack_270)) != 0) break;
              uVar127._0_4_ = (uint)uVar127 + 1;
              uVar59 = uStack_268;
              auVar212 = auVar262;
              if (auStack_23c[3] <= (uint)uVar127) goto LAB_003fd203;
            }
            lVar88 = CONCAT44(uStack_1a4,
                              CONCAT13(cStack_1a5,
                                       CONCAT12(cStack_1a6,CONCAT11(cStack_1a7,cStack_1a8))));
            uVar59 = *(undefined8 *)(lVar88 + 0xa0);
            uStack_178 = *(uint *)&((__pthread_internal_list *)(uVar59 + 0x60))->__prev;
            p_Stack_200._0_1_ = (char)(uint)uVar127;
            p_Stack_200._1_1_ = (char)((uint)uVar127 >> 8);
            p_Stack_200._2_1_ = (char)((uint)uVar127 >> 0x10);
            p_Stack_200._3_1_ = (char)((uint)uVar127 >> 0x18);
            p_Stack_200._4_1_ = (char)0;
            p_Stack_200._5_1_ = (char)(0 >> 8);
            p_Stack_200._6_1_ = (char)(0 >> 0x10);
            p_Stack_200._7_1_ = (char)(0 >> 0x18);
            if (*(uint *)(uVar59 + 0x5c) == (uint)uVar127) {
              uVar74 = *(undefined1 *)
                        ((long)((__pthread_internal_list *)(uVar59 + 0x70))->__prev +
                        uVar99 * 0x14 + 0xf);
            }
            else {
              uVar74 = 0;
            }
            if (bStack_195 == '\0') {
              uVar74 = 0;
            }
            cStack_194 = uVar74;
            iVar43 = uStack_178 - 1;
            uStack_220 = uVar99 * 5;
            uStack_1b0 = (uint)uVar127;
            if (iVar43 <= (int)(uint)uVar127) break;
LAB_003fc4f0:
            uVar107 = auVar262._8_8_;
            uStack_1b0 = uStack_1b0 + 1;
            uVar99 = (ulong)uStack_1b0;
            p_Var89 = ((__pthread_internal_list *)(uVar59 + 0x70))->__prev;
            uVar56 = *(ushort *)((long)p_Var89 + uVar99 * 0x14 + 0xc);
            uVar59._2_1_ = '\0';
            uVar59._3_1_ = '\0';
            uVar59._4_1_ = '\0';
            uVar59._5_1_ = '\0';
            uVar59._6_1_ = '\0';
            uVar59._7_1_ = '\0';
            uVar59._0_2_ = uVar56;
            if ((auStack_1a0._0_4_ & (uint)uVar56 & 0xe) != 0) goto LAB_003fc61a;
            puVar131 = (uint *)((long)p_Var89 + uVar99 * 0x14);
            if ((uVar56 & 8) != 0) {
              if (((byte)auStack_1a0[0] & 0x10) == 0) {
                if (((auStack_1a0._0_4_ & 0xff00) == 0) ||
                   (uVar59._0_4_ = uVar56 & 0xff00, uVar59._4_4_ = 0,
                   (auStack_1a0._0_4_ & 0xff00) == (uint)uVar59)) goto LAB_003fc529;
              }
              else {
                uVar100 = OT::GDEF::accelerator_t::mark_set_covers
                                    (*(accelerator_t **)(lVar88 + 0xf8),
                                     (uint)auStack_1a0._0_4_ >> 0x10,*puVar131);
                auVar262._8_8_ = uVar107;
                auVar262._0_8_ = extraout_XMM0_Qa_39;
                param_3._4_4_ = uStack_274;
                param_3._0_4_ = local_278;
                if ((char)uVar100 != '\0') goto LAB_003fc529;
              }
LAB_003fc61a:
              if ((int)uStack_1b0 < iVar43) goto code_r0x003fc62a;
              break;
            }
LAB_003fc529:
            uVar56 = *(ushort *)((long)p_Var89 + uVar99 * 0x14 + 0x10);
            uVar75 = 0;
            bVar137 = false;
            if (((((uVar56 & 0x20) != 0) &&
                 (bVar137 = false, (*(byte *)((long)p_Var89 + uVar99 * 0x14 + 0xc) & 0x10) == 0)) &&
                ((auStack_1a0[8] != '\0' || (bVar137 = false, (uVar56 & 0x21f) != 0x201)))) &&
               ((bStack_197 != '\0' || (bVar137 = false, (uVar56 & 0x11f) != 0x101)))) {
              bVar137 = (uVar56 & 0x40) == 0 || bStack_196 != false;
            }
            if ((pthread_mutex_t *)_iStack_180 != (pthread_mutex_t *)0x0) {
              uVar75 = *(ushort *)_iStack_180 << 8 | *(ushort *)_iStack_180 >> 8;
            }
            uVar59 = _iStack_180;
            if (((*(uint *)((long)p_Var89 + uVar99 * 0x14 + 4) & auStack_1a0._4_4_) == 0) ||
               ((cStack_194 != '\0' &&
                (cStack_194 != *(char *)((long)p_Var89 + uVar99 * 0x14 + 0xf))))) {
LAB_003fc60c:
              param_3._4_4_ = uStack_274;
              param_3._0_4_ = local_278;
              if (bVar137) goto LAB_003fc61a;
              break;
            }
            if ((code *)auStack_190._0_8_ == (code *)0x0) {
              param_3._4_4_ = uStack_274;
              param_3._0_4_ = local_278;
              if (bVar137) goto LAB_003fc61a;
            }
            else {
              cVar42 = (*(code *)auStack_190._0_8_)(puVar131,uVar75,auStack_190._8_8_);
              auVar262._8_8_ = extraout_XMM1_Qa_34;
              auVar262._0_8_ = extraout_XMM0_Qa_38;
              if (cVar42 == '\0') goto LAB_003fc60c;
              param_3._4_4_ = uStack_274;
              param_3._0_4_ = local_278;
            }
            uVar80._0_4_ = uStack_1b0;
            param_2 = _uStack_258;
            if ((pthread_mutex_t *)_iStack_180 != (pthread_mutex_t *)0x0) {
              _iStack_180 = _iStack_180 + 2;
            }
            uVar99 = (ulong)uStack_1b0;
            lVar88 = *(long *)(_uStack_280 + 0x90);
            if (uStack_5c == 4) {
              if (*(long *)(lVar88 + 0x10) == 0) {
                uVar120 = (pthread_mutex_t *)0x0;
              }
              else {
                uVar120 = *(undefined8 *)(*(long *)(lVar88 + 0x10) + 0x58);
              }
              uVar57 = (**(code **)(lVar88 + 0x78))(_uStack_280,*(undefined8 *)(_uStack_280 + 0x98))
              ;
              uVar107 = extraout_XMM0_Qa_40;
              uVar100 = extraout_XMM1_Qa_35;
            }
            else {
              if (*(long *)(lVar88 + 0x10) == 0) {
                uVar120 = (pthread_mutex_t *)0x0;
              }
              else {
                uVar120 = *(undefined8 *)(*(long *)(lVar88 + 0x10) + 0x60);
              }
              uVar57 = (**(code **)(lVar88 + 0x80))
                                 (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),
                                  *(undefined4 *)(uStack_268 + uStack_220 * 4),
                                  *(undefined4 *)(uStack_268 + uVar99 * 0x14));
              param_3._4_4_ = uStack_274;
              param_3._0_4_ = local_278;
              param_2 = _uStack_258;
              uVar107 = extraout_XMM0_Qa_41;
              uVar100 = extraout_XMM1_Qa_36;
            }
            auVar30._8_8_ = uVar100;
            auVar30._0_8_ = uVar107;
            auVar262._8_8_ = uVar100;
            auVar262._0_8_ = uVar107;
            uVar59._4_4_ = 0;
            uVar59._0_4_ = uVar57;
            if (uVar57 != 0) {
              iVar43 = (int)uVar57 >> 1;
              uVar59._0_4_ = uVar57 - iVar43;
              uVar59._4_4_ = 0;
              if (local_50._4_4_ == 4) {
                piVar52 = (int *)((long)&p_Var58->__prev + uStack_220 * 4);
                *piVar52 = *piVar52 + iVar43;
                piVar52 = (int *)((long)p_Var58 + uVar99 * 0x14);
                *piVar52 = *piVar52 + (uint)uVar59;
                lVar88 = uVar99 * 0x14 + 8;
              }
              else {
                piVar52 = (int *)((long)&p_Var58->__prev + uStack_220 * 4 + 4);
                *piVar52 = *piVar52 + iVar43;
                piVar52 = (int *)((long)p_Var58 + uVar99 * 0x14 + 4);
                *piVar52 = *piVar52 + (uint)uVar59;
                lVar88 = uVar99 * 0x14 + 0xc;
              }
              piVar52 = (int *)((long)&p_Var58->__prev + lVar88);
              *piVar52 = *piVar52 + (uint)uVar59;
              uVar57 = (uint)uVar80 + 1;
              if (*(uint *)_uStack_250 < (uint)uVar80 + 1) {
                uVar57 = *(uint *)_uStack_250;
              }
              param_3._4_4_ = uStack_274;
              param_3._0_4_ = local_278;
              param_2 = _uStack_258;
              auVar262 = auVar30;
              if (1 < uVar57 - (uint)uVar127) {
                *(byte *)&((__pthread_internal_list *)((long)param_3 + 0xc0))->__prev =
                     *(byte *)&((__pthread_internal_list *)((long)param_3 + 0xc0))->__prev | 0x20;
                p_Var89 = ((__pthread_internal_list *)((long)param_3 + 0x70))->__prev;
                uVar120 = (pthread_mutex_t *)0xffffffff;
                if (uVar57 != (uint)uVar127) {
                  if (*(int *)(CONCAT44(uStack_274,local_278) + 0x1c) == 2) {
                    if ((uint)uVar127 < uVar57) {
                      uVar99 = (ulong)uVar57;
                      uVar92 = uVar99 - (long)p_Stack_200;
                      uVar120 = (pthread_mutex_t *)0xffffffff;
                      if (8 < uVar92) {
                        uVar78 = (ulong)((uint)uVar92 & 7);
                        if (uVar78 == 0) {
                          uVar78 = 8;
                        }
                        lVar88 = (uVar78 + (long)p_Stack_200) - uVar99;
                        puVar49 = (undefined4 *)((long)&p_Var89[9].__prev + uStack_220 * 4 + 4);
                        auVar158._8_4_ = 0xffffffff;
                        auVar158._0_8_ = 0xffffffffffffffff;
                        auVar158._12_4_ = 0xffffffff;
                        auVar173._8_4_ = 0xffffffff;
                        auVar173._0_8_ = 0xffffffffffffffff;
                        auVar173._12_4_ = 0xffffffff;
                        do {
                          auVar251._12_4_ = puVar49[-0x14];
                          auVar251._8_4_ = puVar49[-0x19];
                          auVar251._4_4_ = puVar49[-0x1e];
                          auVar251._0_4_ = puVar49[-0x23];
                          in_XMM5._12_4_ = *puVar49;
                          in_XMM5._8_4_ = puVar49[-5];
                          in_XMM5._4_4_ = puVar49[-10];
                          in_XMM5._0_4_ = puVar49[-0xf];
                          auVar175 = auVar251 ^ (undefined1  [16])_DAT_006524b0;
                          auVar259 = auVar158 ^ (undefined1  [16])_DAT_006524b0;
                          auVar247._0_4_ = -(uint)(auVar259._0_4_ < auVar175._0_4_);
                          auVar247._4_4_ = -(uint)(auVar259._4_4_ < auVar175._4_4_);
                          auVar247._8_4_ = -(uint)(auVar259._8_4_ < auVar175._8_4_);
                          auVar247._12_4_ = -(uint)(auVar259._12_4_ < auVar175._12_4_);
                          auVar158 = ~auVar247 & auVar251 | auVar158 & auVar247;
                          auVar175 = in_XMM5 ^ (undefined1  [16])_DAT_006524b0;
                          auVar259 = auVar173 ^ (undefined1  [16])_DAT_006524b0;
                          auVar248._0_4_ = -(uint)(auVar259._0_4_ < auVar175._0_4_);
                          auVar248._4_4_ = -(uint)(auVar259._4_4_ < auVar175._4_4_);
                          auVar248._8_4_ = -(uint)(auVar259._8_4_ < auVar175._8_4_);
                          auVar248._12_4_ = -(uint)(auVar259._12_4_ < auVar175._12_4_);
                          auVar173 = ~auVar248 & in_XMM5 | auVar173 & auVar248;
                          puVar49 = puVar49 + 0x28;
                          lVar88 = lVar88 + 8;
                        } while (lVar88 != 0);
                        p_Stack_200 = (__pthread_internal_list *)
                                      ((long)p_Stack_200 + (uVar92 - uVar78));
                        auVar259 = auVar158 ^ (undefined1  [16])_DAT_006524b0;
                        auVar175 = auVar173 ^ (undefined1  [16])_DAT_006524b0;
                        auVar249._0_4_ = -(uint)(auVar259._0_4_ < auVar175._0_4_);
                        auVar249._4_4_ = -(uint)(auVar259._4_4_ < auVar175._4_4_);
                        auVar249._8_4_ = -(uint)(auVar259._8_4_ < auVar175._8_4_);
                        auVar249._12_4_ = -(uint)(auVar259._12_4_ < auVar175._12_4_);
                        auVar212 = ~auVar249 & auVar173 | auVar158 & auVar249;
                        auVar159._0_8_ = auVar212._8_8_;
                        auVar159._8_4_ = auVar212._8_4_;
                        auVar159._12_4_ = auVar212._12_4_;
                        auVar259 = auVar212 ^ (undefined1  [16])_DAT_006524b0;
                        auVar175 = auVar159 ^ (undefined1  [16])_DAT_006524b0;
                        auVar211._0_4_ = -(uint)(auVar259._0_4_ < auVar175._0_4_);
                        auVar211._4_4_ = -(uint)(auVar259._4_4_ < auVar175._4_4_);
                        auVar211._8_4_ = -(uint)(auVar259._8_4_ < auVar175._8_4_);
                        auVar211._12_4_ = -(uint)(auVar259._12_4_ < auVar175._12_4_);
                        auVar175 = ~auVar211 & auVar159 | auVar212 & auVar211;
                        uVar125 = auVar175._4_4_;
                        auVar160._4_4_ = uVar125;
                        auVar160._0_4_ = uVar125;
                        auVar160._8_4_ = uVar125;
                        auVar160._12_4_ = uVar125;
                        auVar259 = auVar175 ^ (undefined1  [16])_DAT_006524b0;
                        auVar212 = auVar160 ^ (undefined1  [16])_DAT_006524b0;
                        auVar250._0_4_ = -(uint)(auVar259._0_4_ < auVar212._0_4_);
                        auVar250._4_4_ = -(uint)(auVar259._4_4_ < auVar212._4_4_);
                        auVar250._8_4_ = -(uint)(auVar259._8_4_ < auVar212._8_4_);
                        auVar250._12_4_ = -(uint)(auVar259._12_4_ < auVar212._12_4_);
                        in_XMM2 = (__pthread_internal_list)(auVar175 & auVar250);
                        in_XMM3 = ~auVar250 & auVar160 | (undefined1  [16])in_XMM2;
                        uVar120._0_4_ = in_XMM3._0_4_;
                        uVar120._4_4_ = 0;
                        in_XMM4 = _DAT_006524b0;
                        in_XMM6 = _DAT_006524b0;
                      }
                      lVar88 = uVar99 - (long)p_Stack_200;
                      puVar131 = (uint *)((long)p_Var89 + (long)p_Stack_200 * 0x14 + 8);
                      do {
                        if (*puVar131 < (uint)uVar120) {
                          uVar120._4_4_ = 0;
                          uVar120._0_4_ = *puVar131;
                        }
                        puVar131 = puVar131 + 5;
                        lVar88 = lVar88 + -1;
                      } while (lVar88 != 0);
                    }
                  }
                  else {
                    uVar80._0_4_ = *(uint *)((long)&p_Var89->__next + uStack_220 * 4);
                    uVar87 = *(uint *)((long)p_Var89 + (ulong)(uVar57 - 1) * 0x14 + 8);
                    uVar120._4_4_ = 0;
                    uVar120._0_4_ = (uint)uVar80;
                    if (uVar87 < (uint)uVar80) {
                      uVar120._4_4_ = 0;
                      uVar120._0_4_ = uVar87;
                    }
                  }
                }
                uVar59._4_4_ = 0;
                uVar59._0_4_ = uVar57;
                param_6 = (pthread_mutex_t *)0x3;
                auVar262 = hb_buffer_t::_infos_set_glyph_flags
                                     ((hb_buffer_t *)param_3,(long)p_Var89,(uint)uVar127,uVar57,
                                      (uint)uVar120,3);
                param_2 = _uStack_258;
              }
            }
            uVar102._4_4_ = uStack_274;
            uVar127._0_4_ = uStack_1b0;
            auVar212 = auVar262;
            if (auStack_23c[3] <= uStack_1b0) goto LAB_003fd203;
          }
          uVar102._4_4_ = uStack_274;
          uVar127._0_4_ = (uint)uVar127 + 1;
          param_2 = _uStack_258;
          auVar212 = auVar262;
        } while ((uint)uVar127 < auStack_23c[3]);
      }
LAB_003fd203:
      uStack_274 = SUB84(uVar102,4);
      local_278 = (undefined4)uVar102;
      hb_buffer_t::message
                (auVar212._0_8_,auVar212._8_8_,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,
                 in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,(hb_buffer_t *)param_3,uVar130,
                 "end kern",uVar59,uVar120,param_6,uVar283);
      free(puStack_b0);
      auVar263 = hb_sanitize_context_t::~hb_sanitize_context_t(ahStack_110);
    }
    piVar52 = auVar263._0_8_;
    if (local_58 == 5) {
      uVar127._0_4_ = *(uint *)_uStack_250;
      uVar59 = _uStack_260;
      if (1 < (uint)uVar127) {
        uVar59 = *(undefined8 *)_uStack_260;
        uVar99 = (ulong)((uint)uVar127 - 1);
        phVar103 = (hb_buffer_t *)(uVar59 + uVar99 * 0x14);
        uVar92 = 0;
        do {
          uVar99 = uVar99 - 1;
          uVar125 = *(undefined4 *)(phVar103 + 0x10);
          cStack_1a8 = (char)uVar125;
          cStack_1a7 = (char)((uint)uVar125 >> 8);
          cStack_1a6 = (char)((uint)uVar125 >> 0x10);
          cStack_1a5 = (char)((uint)uVar125 >> 0x18);
          piVar52 = *(int **)phVar103;
          _uStack_1b0 = *(undefined8 *)(phVar103 + 8);
          *(undefined4 *)(phVar103 + 0x10) =
               *(undefined4 *)&((__pthread_internal_list *)(uVar59 + 0x10))->__prev;
          lVar88 = *(long *)(uVar59 + 8);
          *(long *)phVar103 = *(long *)uVar59;
          *(long *)(phVar103 + 8) = lVar88;
          *(undefined4 *)&((__pthread_internal_list *)(uVar59 + 0x10))->__prev = uVar125;
          *(int **)uVar59 = piVar52;
          *(undefined8 *)(uVar59 + 8) = _uStack_1b0;
          uVar92 = uVar92 + 1;
          uVar59 = uVar59 + 0x14;
          phVar103 = phVar103 + -0x14;
          uStack_1b8 = piVar52;
        } while (uVar92 < (uVar99 & 0xffffffff));
      }
      if (*(char *)((long)param_3 + 0x5b) != '\0') {
        uVar80._0_4_ = *(uint *)_uStack_250;
        uVar59._4_4_ = 0;
        uVar59._0_4_ = (uint)uVar80;
        if ((uint)uVar80 < (uint)uVar127) {
          uVar127._0_4_ = (uint)uVar80;
        }
        if (1 < (uint)uVar127) {
          uVar59 = *(undefined8 *)_uStack_240;
          uVar99 = (ulong)((uint)uVar127 - 1);
          phVar103 = (hb_buffer_t *)(uVar59 + uVar99 * 0x14);
          uVar92 = 0;
          do {
            uVar99 = uVar99 - 1;
            uVar125 = *(undefined4 *)(phVar103 + 0x10);
            cStack_1a8 = (char)uVar125;
            cStack_1a7 = (char)((uint)uVar125 >> 8);
            cStack_1a6 = (char)((uint)uVar125 >> 0x10);
            cStack_1a5 = (char)((uint)uVar125 >> 0x18);
            piVar52 = *(int **)phVar103;
            _uStack_1b0 = *(undefined8 *)(phVar103 + 8);
            *(undefined4 *)(phVar103 + 0x10) =
                 *(undefined4 *)&((__pthread_internal_list *)(uVar59 + 0x10))->__prev;
            lVar88 = *(long *)(uVar59 + 8);
            *(long *)phVar103 = *(long *)uVar59;
            *(long *)(phVar103 + 8) = lVar88;
            *(undefined4 *)&((__pthread_internal_list *)(uVar59 + 0x10))->__prev = uVar125;
            *(int **)uVar59 = piVar52;
            *(undefined8 *)(uVar59 + 8) = _uStack_1b0;
            uVar92 = uVar92 + 1;
            uVar59 = uVar59 + 0x14;
            phVar103 = phVar103 + -0x14;
            uStack_1b8 = piVar52;
          } while (uVar92 < (uVar99 & 0xffffffff));
        }
      }
    }
    hb_buffer_t::message
              (piVar52,auVar263._8_8_,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,in_XMM5._0_8_,
               in_XMM6.__prev,in_XMM7.__prev,(hb_buffer_t *)param_3,uVar130,"end fallback kern",
               uVar59,uVar120,param_6,uVar283);
  }
LAB_003fbed1:
  uVar56 = *(ushort *)(param_2 + 0x108);
  if ((uVar56 & 0x4000) != 0) {
    puVar49 = hb_lazy_loader_t<AAT::trak,hb_table_lazy_loader_t<AAT::trak,32u,false>,hb_face_t,32u,hb_blob_t>
              ::get((hb_lazy_loader_t<AAT::trak,hb_table_lazy_loader_t<AAT::trak,32u,false>,hb_face_t,32u,hb_blob_t>
                     *)&((__pthread_internal_list *)(uVar130 + 0x20))->__prev[0x16].__next);
    pTVar136 = (TrackData *)&_hb_NullPool;
    hb_aat_apply_context_t::hb_aat_apply_context_t
              ((hb_aat_apply_context_t *)&uStack_1b8,_uStack_228,uVar130,param_3,
               (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
    lVar88 = CONCAT44(uStack_1a4,
                      CONCAT13(cStack_1a5,CONCAT12(cStack_1a6,CONCAT11(cStack_1a7,cStack_1a8))));
    fVar139 = *(float *)(lVar88 + 0x70);
    if (0.0 < fVar139) {
      uVar127._0_4_ = *(uint *)(_uStack_1b0 + 0xa4);
      lVar126 = (long)stack0xfffffffffffffe68;
      if ((*(uint *)((long)stack0xfffffffffffffe68 + 0x38) & 0xfffffffe) == 4) {
        uVar56 = *(ushort *)((long)puVar49 + 6);
        if (uVar56 == 0) {
          pTVar136 = (TrackData *)&_hb_NullPool;
        }
        else {
          pTVar136 = (TrackData *)((long)puVar49 + (ulong)(ushort)(uVar56 << 8 | uVar56 >> 8));
        }
        iVar43 = TrackData::get_tracking(fVar139,pTVar136,(long)puVar49);
        fVar139 = *(float *)(lVar88 + 0x4c);
        uStack_270 = SUB42(fVar139,0);
        uStack_26e = (undefined2)((uint)fVar139 >> 0x10);
        fVar139 = floorf((float)(iVar43 / 2) * fVar139 + 0.5);
        uStack_268._0_4_ = fVar139;
        fVar139 = floorf((float)iVar43 * (float)CONCAT22(uStack_26e,uStack_270) + 0.5);
        uVar80._0_4_ = *(uint *)(lVar126 + 0x60);
        if ((uint)uVar80 != 0) {
          param_6._0_4_ = (uint)fVar139;
          param_6._4_4_ = 0;
          lVar88 = 0x24;
          uVar99 = 0;
          do {
            lVar104 = *(long *)(lVar126 + 0x70);
            if ((uint)uVar80 - 1 == uVar99) {
              uVar99 = (ulong)(uint)uVar80;
              break;
            }
            uVar99 = uVar99 + 1;
            pbVar119 = (byte *)(lVar104 + lVar88);
            lVar88 = lVar88 + 0x14;
          } while ((*pbVar119 & 0x80) != 0);
          uVar92 = 0;
          do {
            if ((*(uint *)(lVar104 + 4 + uVar92 * 0x14) & (uint)uVar127) != 0) {
              lVar88 = *(long *)(lVar126 + 0x80);
              piVar52 = (int *)(lVar88 + uVar92 * 0x14);
              *piVar52 = *piVar52 + (uint)param_6;
              piVar52 = (int *)(lVar88 + 8 + uVar92 * 0x14);
              *piVar52 = *piVar52 + (int)(float)uStack_268;
            }
            uVar57 = (uint)uVar99;
            uVar87 = uVar57 + 1;
            if (uVar57 + 1 < (uint)uVar80) {
              uVar87 = (uint)uVar80;
            }
            uVar81 = uVar57;
            do {
              uVar81 = uVar81 + 1;
              uVar97 = uVar87;
              if ((uint)uVar80 <= uVar81) break;
              uVar97 = uVar81;
            } while ((*(byte *)(lVar104 + 0x10 + (ulong)uVar81 * 0x14) & 0x80) != 0);
            uVar92 = uVar99 & 0xffffffff;
            uVar99 = (ulong)uVar97;
          } while (uVar57 < (uint)uVar80);
        }
      }
      else {
        uVar56 = *(ushort *)(puVar49 + 2);
        if (uVar56 != 0) {
          pTVar136 = (TrackData *)((long)puVar49 + (ulong)(ushort)(uVar56 << 8 | uVar56 >> 8));
        }
        iVar43 = TrackData::get_tracking(fVar139,pTVar136,(long)puVar49);
        fVar139 = *(float *)(lVar88 + 0x50);
        uStack_270 = SUB42(fVar139,0);
        uStack_26e = (undefined2)((uint)fVar139 >> 0x10);
        fVar139 = floorf((float)(iVar43 / 2) * fVar139 + 0.5);
        uStack_268._0_4_ = fVar139;
        fVar139 = floorf((float)iVar43 * (float)CONCAT22(uStack_26e,uStack_270) + 0.5);
        uVar80._0_4_ = *(uint *)(lVar126 + 0x60);
        if ((uint)uVar80 != 0) {
          param_6._0_4_ = (uint)fVar139;
          param_6._4_4_ = 0;
          lVar88 = 0x24;
          uVar99 = 0;
          do {
            lVar104 = *(long *)(lVar126 + 0x70);
            if ((uint)uVar80 - 1 == uVar99) {
              uVar99 = (ulong)(uint)uVar80;
              break;
            }
            uVar99 = uVar99 + 1;
            pbVar119 = (byte *)(lVar104 + lVar88);
            lVar88 = lVar88 + 0x14;
          } while ((*pbVar119 & 0x80) != 0);
          uVar57 = 0;
          do {
            uVar92 = (ulong)uVar57;
            uVar57 = (uint)uVar99;
            if ((*(uint *)(lVar104 + 4 + uVar92 * 0x14) & (uint)uVar127) != 0) {
              lVar88 = *(long *)(lVar126 + 0x80);
              piVar52 = (int *)(lVar88 + 4 + uVar92 * 0x14);
              *piVar52 = *piVar52 + (uint)param_6;
              piVar52 = (int *)(lVar88 + 0xc + uVar92 * 0x14);
              *piVar52 = *piVar52 + (int)(float)uStack_268;
            }
            uVar87 = uVar57 + 1;
            if (uVar57 + 1 < (uint)uVar80) {
              uVar87 = (uint)uVar80;
            }
            uVar99 = uVar99 & 0xffffffff;
            do {
              uVar81 = (int)uVar99 + 1;
              uVar99 = (ulong)uVar81;
              if ((uint)uVar80 <= uVar81) {
                uVar99 = (ulong)uVar87;
                break;
              }
            } while ((*(byte *)(lVar104 + 0x10 + (ulong)uVar81 * 0x14) & 0x80) != 0);
          } while (uVar57 < (uint)uVar80);
        }
      }
    }
    hb_aat_apply_context_t::~hb_aat_apply_context_t((hb_aat_apply_context_t *)&uStack_1b8);
    uVar56 = *(ushort *)(_uStack_258 + 0x108);
    param_3._4_4_ = uStack_274;
    param_3._0_4_ = local_278;
    param_2 = _uStack_258;
  }
  if ((((uVar56 & 0x20) != 0) &&
      (*(int *)&((__pthread_internal_list *)(param_2 + 0x80))->__prev[5].__next == 2)) &&
     (uVar99 = (ulong)*(uint *)_uStack_250, uVar99 != 0)) {
    lVar88 = *(long *)_uStack_260;
    if ((byte)uStack_218 == '\0') {
      lVar126 = 0;
      do {
        if ((*(byte *)(lVar88 + 0xc + lVar126) & 8) != 0) {
          *(undefined8 *)(*(long *)_uStack_240 + lVar126) = 0;
        }
        lVar126 = lVar126 + 0x14;
      } while (uVar99 * 0x14 != lVar126);
    }
    else {
      lVar126 = 0;
      do {
        if ((*(byte *)(lVar88 + 0xc + lVar126) & 8) != 0) {
          lVar104 = *(long *)_uStack_240;
          piVar52 = (int *)(lVar104 + 8 + lVar126);
          *piVar52 = *piVar52 - *(int *)(lVar104 + lVar126);
          piVar52 = (int *)(lVar104 + 0xc + lVar126);
          *piVar52 = *piVar52 - *(int *)(lVar104 + 4 + lVar126);
          *(undefined4 *)(lVar104 + lVar126) = 0;
          *(undefined4 *)(lVar104 + 4 + lVar126) = 0;
        }
        lVar126 = lVar126 + 0x14;
      } while (uVar99 * 0x14 != lVar126);
    }
  }
  if (((((ulong)((__pthread_internal_list *)((long)param_3 + 0xc0))->__prev & 2) != 0) &&
      ((*(byte *)((long)param_3 + 0x18) & 0xc) == 0)) &&
     (uVar127._0_4_ = *(uint *)_uStack_250, (ulong)(uint)uVar127 != 0)) {
    lVar88 = *(long *)_uStack_260;
    lVar126 = *(long *)_uStack_240;
    lVar104 = 0;
    do {
      if (((*(byte *)(lVar88 + 0x10 + lVar104) & 0x20) != 0) &&
         ((*(byte *)(lVar88 + 0xc + lVar104) & 0x10) == 0)) {
        *(undefined1 (*) [16])(lVar126 + lVar104) = (undefined1  [16])0x0;
      }
      lVar104 = lVar104 + 0x14;
    } while ((ulong)(uint)uVar127 * 0x14 != lVar104);
  }
  unaff_RBX = _uStack_240;
  uVar120 = _uStack_260;
  if (((byte)*(hb_buffer_t *)(param_2 + 0x109) & 0x20) == 0) {
LAB_003fcbd2:
    uVar127._0_4_ = *(uint *)_uStack_250;
  }
  else {
    uVar127._0_4_ = *(uint *)_uStack_250;
    uVar127._4_4_ = 0;
    if ((pthread_mutex_t *)uVar127 != (pthread_mutex_t *)0x0) {
      uVar59 = *(undefined8 *)_uStack_260;
      auVar259._0_8_ = *(undefined8 *)_uStack_240;
      if ((uint)uVar127 == 1) {
        uVar80 = (pthread_mutex_t *)0x0;
      }
      else {
        uVar100._0_4_ = (uint)uVar127 & 0xfffffffe;
        uVar100._4_4_ = 0;
        uVar99 = 0;
        _Var144.__prev = (__pthread_internal_list *)0x0;
        _Var144.__next = (__pthread_internal_list *)0x0;
        uVar80 = ((pthread_mutex_t *)0x0)->__size;
        do {
          while (*(int *)(uVar59 + uVar99) != 0xffff) {
            if (*(int *)((hb_buffer_t *)(uVar59 + 0x14) + uVar99) == 0xffff) goto LAB_003fd0b4;
LAB_003fd093:
            uVar80 = uVar80 + 2;
            uVar99 = uVar99 + 0x28;
            if (uVar100 == uVar80) goto LAB_003fcbbb;
          }
          *(__pthread_internal_list *)(auVar259._0_8_ + uVar99) = _Var144;
          if (*(int *)((hb_buffer_t *)(uVar59 + 0x14) + uVar99) != 0xffff) goto LAB_003fd093;
LAB_003fd0b4:
          *(__pthread_internal_list *)((hb_buffer_t *)(auVar259._0_8_ + 0x14) + uVar99) = _Var144;
          uVar80 = uVar80 + 2;
          uVar99 = uVar99 + 0x28;
        } while (uVar100 != uVar80);
      }
LAB_003fcbbb:
      if ((((ulong)(byte)(char)uVar127 & 1) != 0) && (*(int *)(uVar59 + uVar80 * 0x14) == 0xffff)) {
        *(undefined1 (*) [16])(auVar259._0_8_ + uVar80 * 0x14) = (undefined1  [16])0x0;
      }
      goto LAB_003fcbd2;
    }
  }
  if (*(char *)((long)param_3 + 0x5b) == '\0') {
    if (*(int *)((long)param_3 + 0xe8) == 0) {
      *(undefined2 *)((long)param_3 + 0x5a) = 0x100;
      *(undefined4 *)((long)param_3 + 100) = 0;
      ((pthread_mutex_t *)((long)param_3 + 0x78))->__align =
           (long)((__pthread_internal_list *)((long)param_3 + 0x70))->__prev;
      if ((uint)uVar127 * 0x14 != 0) {
        memset(*(void **)unaff_RBX,0,(ulong)((uint)uVar127 * 0x14));
        unaff_RBX = _uStack_240;
      }
      goto LAB_003fcc26;
    }
    lVar88 = 0;
    bVar73 = *(byte *)&((__pthread_internal_list *)((long)param_3 + 0xc0))->__prev;
  }
  else {
LAB_003fcc26:
    lVar88 = *(long *)unaff_RBX;
    bVar73 = *(byte *)&((__pthread_internal_list *)((long)param_3 + 0xc0))->__prev;
  }
  if (((bVar73 & 8) != 0) && ((uint)uVar127 != 0)) {
    uVar80._0_4_ = *(uint *)((long)param_3 + 0x38);
    uVar57 = 0;
    do {
      uVar120 = (pthread_mutex_t *)0x40;
      OT::Layout::propagate_attachment_offsets(lVar88,(ulong)(uint)uVar127,uVar57,(uint)uVar80,0x40)
      ;
      uVar57 = uVar57 + 1;
    } while ((uint)uVar127 != uVar57);
  }
  fVar139 = *(float *)(_uStack_280 + 0x44);
  auVar161 = ZEXT416((uint)fVar139);
  auVar174 = (undefined1  [16])0x0;
  uVar99 = auStack_214._4_8_ & 0xffffffff;
  if (((fVar139 != 0.0) || (NAN(fVar139))) && ((uint)uVar127 != 0)) {
    lVar126 = 0;
    do {
      while( true ) {
        auVar174 = ZEXT816(0x3f000000);
        iVar43 = *(int *)(lVar88 + 0xc + lVar126);
        if (iVar43 != 0) break;
        lVar126 = lVar126 + 0x14;
        if ((ulong)(uint)uVar127 * 0x14 == lVar126) goto LAB_003fcc95;
      }
      auVar161._0_4_ = floorf((float)iVar43 * *(float *)(_uStack_280 + 0x48) + auVar174._0_4_);
      auVar161._4_12_ = extraout_var;
      uVar99 = auStack_214._4_8_ & 0xffffffff;
      auVar174 = ZEXT816(0x3f000000);
      *(int *)(lVar88 + 8 + lVar126) = (int)((float)*(int *)(lVar88 + 8 + lVar126) + auVar161._0_4_)
      ;
      lVar126 = lVar126 + 0x14;
    } while ((ulong)(uint)uVar127 * 0x14 != lVar126);
  }
LAB_003fcc95:
  uVar71 = _uStack_280;
  while (uVar79 = *(undefined8 *)(uVar71 + 0x90),
        *(undefined **)(uVar79 + 0x68) == PTR_hb_font_get_glyph_h_origin_default_00718ad8) {
    uVar71 = *(undefined8 *)(uVar71 + 0x18);
    if (((pthread_mutex_t *)uVar71 == (pthread_mutex_t *)0x0) ||
       ((pthread_mutex_t *)uVar71 == (pthread_mutex_t *)&_hb_Null_hb_font_t)) goto LAB_003fcd2a;
  }
  if ((int)uVar99 != 0) {
    lVar88 = 0;
    do {
      auVar161._0_8_ =
           hb_font_t::get_glyph_h_origin_with_fallback
                     ((hb_font_t *)_uStack_280,*(undefined4 *)(auStack_23c._4_8_ + lVar88),
                      (int *)&uStack_1b8,&local_48);
      auVar174._8_8_ = extraout_XMM1_Qb_44;
      auVar174._0_8_ = extraout_XMM1_Qa_37;
      auVar161._8_8_ = extraout_XMM0_Qb_14;
      *(uint *)((hb_buffer_t *)(_uStack_248 + 8) + lVar88) =
           *(int *)((hb_buffer_t *)(_uStack_248 + 8) + lVar88) - (uint)uStack_1b8;
      *(int *)((hb_buffer_t *)(_uStack_248 + 0xc) + lVar88) =
           *(int *)((hb_buffer_t *)(_uStack_248 + 0xc) + lVar88) - local_48;
      lVar88 = lVar88 + 0x14;
      uVar71 = _uStack_248;
      uVar79 = extraout_RDX_10;
    } while (uVar99 * 0x14 != lVar88);
  }
LAB_003fcd2a:
  if (((byte)*(hb_buffer_t *)(_uStack_258 + 0x108) & 0x80) != 0) {
    uVar127._0_4_ = 0;
    bVar137 = hb_buffer_t::message
                        (auVar161._0_8_,auVar174._0_8_,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,
                         in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,(hb_buffer_t *)param_3,
                         _uStack_280,"start fallback mark",uVar71,uVar120,param_6,uVar283);
    uVar79 = extraout_RDX_11;
    auVar161 = extraout_XMM0_23;
    if (bVar137) {
      uVar80._0_4_ = *(uint *)_uStack_250;
      uVar120._4_4_ = 0;
      uVar120._0_4_ = (uint)uVar80;
      uVar99 = (ulong)(byte)uStack_218;
      uVar57 = uStack_218 & 0xff;
      if ((pthread_mutex_t *)0x1 < (ulong)uVar120) {
        puVar131 = (uint *)(*(long *)_uStack_260 + 0x24);
        uVar127._0_4_ = 0;
        ppVar129 = (pthread_mutex_t *)((pthread_mutex_t *)0x1)->__size;
        do {
          if ((0x1c00U >> (*puVar131 & 0x1f) & 1) == 0) {
            position_cluster((uint *)_uStack_228,_uStack_280,
                             (hb_buffer_t *)CONCAT44(uStack_274,local_278),(uint)uVar127,
                             (uint)ppVar129,uVar57);
            uVar127._0_4_ = (uint)ppVar129;
          }
          ppVar129 = (pthread_mutex_t *)(ppVar129->__size + 1);
          puVar131 = puVar131 + 5;
        } while ((pthread_mutex_t *)uVar120 != ppVar129);
      }
      param_3._4_4_ = uStack_274;
      param_3._0_4_ = local_278;
      uVar71._4_4_ = 0;
      uVar71._0_4_ = (uint)uVar127;
      auVar259 = position_cluster((uint *)_uStack_228,_uStack_280,(hb_buffer_t *)param_3,
                                  (uint)uVar127,(uint)uVar80,uVar57);
      auVar174._0_8_ = auVar259._8_8_;
      auVar174._8_8_ = extraout_XMM1_Qb_45;
      hb_buffer_t::message
                (auVar259._0_8_,auVar174._0_8_,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,
                 in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,(hb_buffer_t *)param_3,_uStack_280,
                 "end fallback mark",uVar71,uVar120,uVar99,uVar283);
      uVar79 = extraout_RDX_12;
      auVar161 = extraout_XMM0_24;
    }
  }
  uVar107 = _uStack_258;
  if ((*(uint *)((long)param_3 + 0x38) & 0xfffffffd) == 5) {
    uVar127._0_4_ = *(uint *)_uStack_250;
    if (1 < (uint)uVar127) {
      uVar71 = *(undefined8 *)_uStack_260;
      uVar79 = (ulong)((uint)uVar127 - 1) - 1;
      phVar103 = (hb_buffer_t *)(uVar71 + (ulong)((uint)uVar127 - 1) * 0x14);
      uVar99 = 0;
      do {
        uVar125 = *(undefined4 *)(phVar103 + 0x10);
        cStack_1a8 = (char)uVar125;
        cStack_1a7 = (char)((uint)uVar125 >> 8);
        cStack_1a6 = (char)((uint)uVar125 >> 0x10);
        cStack_1a5 = (char)((uint)uVar125 >> 0x18);
        uStack_1b8 = *(int **)phVar103;
        _uStack_1b0 = *(undefined8 *)(phVar103 + 8);
        auVar18 = *(undefined1 (*) [12])phVar103;
        *(undefined4 *)(phVar103 + 0x10) = *(undefined4 *)(uVar71 + 0x10);
        lVar88 = *(long *)(uVar71 + 8);
        *(long *)phVar103 = *(long *)uVar71;
        *(long *)(phVar103 + 8) = lVar88;
        *(undefined4 *)(uVar71 + 0x10) = uVar125;
        auVar161._12_4_ = uStack_1ac;
        auVar161._0_12_ = auVar18;
        *(undefined1 (*) [16])uVar71 = auVar161;
        uVar99 = uVar99 + 1;
        uVar92 = uVar79 & 0xffffffff;
        uVar71 = uVar71 + 0x14;
        uVar79 = uVar79 + -1;
        phVar103 = phVar103 + -0x14;
      } while (uVar99 < uVar92);
    }
    if (*(char *)((long)param_3 + 0x5b) != '\0') {
      uVar80._0_4_ = *(uint *)_uStack_250;
      uVar71._4_4_ = 0;
      uVar71._0_4_ = (uint)uVar80;
      if ((uint)uVar80 < (uint)uVar127) {
        uVar127._0_4_ = (uint)uVar80;
      }
      if (1 < (uint)uVar127) {
        uVar71 = *(undefined8 *)_uStack_240;
        uVar79 = (ulong)((uint)uVar127 - 1) - 1;
        phVar103 = (hb_buffer_t *)(uVar71 + (ulong)((uint)uVar127 - 1) * 0x14);
        uVar99 = 0;
        do {
          uVar125 = *(undefined4 *)(phVar103 + 0x10);
          cStack_1a8 = (char)uVar125;
          cStack_1a7 = (char)((uint)uVar125 >> 8);
          cStack_1a6 = (char)((uint)uVar125 >> 0x10);
          cStack_1a5 = (char)((uint)uVar125 >> 0x18);
          uStack_1b8 = *(int **)phVar103;
          _uStack_1b0 = *(undefined8 *)(phVar103 + 8);
          auVar18 = *(undefined1 (*) [12])phVar103;
          *(undefined4 *)(phVar103 + 0x10) = *(undefined4 *)(uVar71 + 0x10);
          lVar88 = *(long *)(uVar71 + 8);
          *(long *)phVar103 = *(long *)uVar71;
          *(long *)(phVar103 + 8) = lVar88;
          *(undefined4 *)(uVar71 + 0x10) = uVar125;
          auVar161._12_4_ = uStack_1ac;
          auVar161._0_12_ = auVar18;
          *(undefined1 (*) [16])uVar71 = auVar161;
          uVar99 = uVar99 + 1;
          uVar92 = uVar79 & 0xffffffff;
          uVar71 = uVar71 + 0x14;
          uVar79 = uVar79 + -1;
          phVar103 = phVar103 + -0x14;
        } while (uVar99 < uVar92);
      }
    }
  }
  *(byte *)((long)param_3 + 0xb8) = *(byte *)((long)param_3 + 0xb8) & 0xf8;
  piVar52 = uStack_1b8;
  if ((*(ushort *)(_uStack_258 + 0x108) & 0x2200) == 0x2000) {
    auVar161._0_8_ = hb_aat_layout_remove_deleted_glyphs((hb_buffer_t *)param_3);
    auVar174._8_8_ = extraout_XMM1_Qb_46;
    auVar174._0_8_ = extraout_XMM1_Qa_38;
    auVar161._8_8_ = extraout_XMM0_Qb_15;
    uVar79 = extraout_RDX_13;
    piVar52 = uStack_1b8;
  }
  uStack_1b8._4_4_ = (uint)((ulong)piVar52 >> 0x20);
  uVar100 = auVar174._0_8_;
  uVar127._0_4_ = *(uint *)&((__pthread_internal_list *)((long)param_3 + 0xc0))->__prev;
  if ((((uint)uVar127 & 0x80) != 0) && (*(int *)((long)param_3 + 0x2c) != -1)) {
    uVar79 = (pthread_mutex_t *)0x0;
    uVar71 = _uStack_250;
    if ((ulong)*(uint *)_uStack_250 != 0) {
      lVar88 = *(long *)_uStack_260;
      uVar71 = *(undefined8 *)_uStack_240;
      uVar79 = (ulong)*(uint *)_uStack_250 * 0x14;
      lVar126 = 0;
      auVar161 = ZEXT816(0);
      do {
        if ((*(ushort *)(lVar126 + 0x10 + lVar88) & 0x41f) == 0x401) {
          *(undefined4 *)(lVar126 + lVar88) = *(undefined4 *)((long)param_3 + 0x2c);
          *(undefined1 (*) [16])(lVar126 + uVar71) = auVar161;
          *(ushort *)(lVar126 + 0x10 + lVar88) = *(ushort *)(lVar126 + 0x10 + lVar88) & 0xe0 | 0xc;
        }
        lVar126 = lVar126 + 0x14;
      } while (uVar79 != lVar126);
      uVar127._0_4_ = *(uint *)&((__pthread_internal_list *)((long)param_3 + 0xc0))->__prev;
    }
  }
  uVar80 = auVar161._0_8_;
  uVar102 = _uStack_260;
  if (((uint)uVar127 & 2) == 0) goto LAB_003fd5ea;
  p_Var58 = ((__pthread_list_t *)((long)param_3 + 0x18))->__prev;
  if (((ulong)p_Var58 & 4) != 0) goto LAB_003fd5ea;
  uVar127._0_4_ = *(uint *)&((__pthread_internal_list *)((long)param_3 + 0x60))->__prev;
  p_Var89 = ((__pthread_internal_list *)((long)param_3 + 0x70))->__prev;
  uStack_1b8._0_4_ = *(uint *)((long)param_3 + 0x24);
  uVar71._4_4_ = 0;
  uVar71._0_4_ = (uint)uStack_1b8;
  if (((ulong)p_Var58 & 8) == 0) {
    if ((uint)uStack_1b8 == 0) {
      uStack_1b8._0_4_ = 0;
      lVar88 = *(long *)(*(long *)(_uStack_280 + 0x90) + 0x10);
      if (lVar88 == 0) {
        uVar120 = (pthread_mutex_t *)0x0;
      }
      else {
        uVar120 = *(undefined8 *)(lVar88 + 0x10);
      }
      uVar71 = &uStack_1b8;
      iVar43 = (**(code **)(*(long *)(_uStack_280 + 0x90) + 0x30))
                         (_uStack_280,*(undefined8 *)(_uStack_280 + 0x98),0x20);
      auVar174._8_8_ = extraout_XMM1_Qb_49;
      auVar174._0_8_ = extraout_XMM1_Qa_41;
      auVar161._8_8_ = extraout_XMM0_Qb_16;
      auVar161._0_8_ = extraout_XMM0_Qa_42;
      uVar79 = extraout_RDX_14;
      uVar80 = extraout_XMM0_Qa_42;
      uVar100 = extraout_XMM1_Qa_41;
      if (iVar43 == 0) {
        uVar127._0_4_ = *(uint *)_uStack_250;
        goto LAB_003fd4be;
      }
    }
    uVar102 = _uStack_260;
    piVar52 = (int *)CONCAT44(uStack_1b8._4_4_,(uint)uStack_1b8);
    if ((uint)uVar127 != 0) {
      uVar71 = &((pthread_mutex_t *)0x0)->__data;
      do {
        if ((((byte)*(hb_buffer_t *)((long)&p_Var89[1].__prev + uVar71) & 0x20) != 0) &&
           (((byte)*(hb_buffer_t *)((long)&p_Var89->__next + (long)(uVar71 + 4)) & 0x10) == 0)) {
          uVar79._4_4_ = 0;
          uVar79._0_4_ = (uint)uStack_1b8;
          *(uint *)((long)&p_Var89->__prev + uVar71) = (uint)uStack_1b8;
        }
        uVar71 = uVar71 + 0x14;
        piVar52 = (int *)CONCAT44(uStack_1b8._4_4_,(uint)uStack_1b8);
      } while ((pthread_mutex_t *)((ulong)(uint)uVar127 * 0x14) != (pthread_mutex_t *)uVar71);
    }
  }
  else {
LAB_003fd4be:
    uVar100 = auVar174._0_8_;
    uVar80 = auVar161._0_8_;
    uVar102 = _uStack_260;
    if ((uint)uVar127 == 0) {
      uVar120 = (pthread_mutex_t *)0x0;
    }
    else {
      ppVar129 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
      uVar120 = (pthread_mutex_t *)0x0;
      uVar82 = _uStack_240;
      do {
        uVar71 = *(undefined8 *)uVar102;
        iVar43 = (int)uVar120;
        if ((((byte)((hb_buffer_t *)(uVar71 + 0x10))[(long)ppVar129 * 0x14] & 0x20) == 0) ||
           (((byte)((hb_buffer_t *)(uVar71 + 0xc))[(long)ppVar129 * 0x14] & 0x10) != 0)) {
          uVar79 = uVar120;
          if (ppVar129 != (pthread_mutex_t *)uVar120) {
            phVar103 = (hb_buffer_t *)(uVar71 + (long)ppVar129 * 0x14);
            uVar79 = uVar120 * 0x14;
            *(undefined4 *)((hb_buffer_t *)(uVar71 + 0x10) + uVar79) =
                 *(undefined4 *)(phVar103 + 0x10);
            uVar120 = *(undefined8 *)(phVar103 + 8);
            *(undefined8 *)(uVar71 + uVar79) = *(undefined8 *)phVar103;
            *(undefined8 *)((hb_buffer_t *)(uVar71 + uVar79) + 8) = uVar120;
            lVar88 = *(long *)uVar82;
            uVar80._0_4_ = *(uint *)(lVar88 + 0x10 + (long)ppVar129 * 0x14);
            uVar71._4_4_ = 0;
            uVar71._0_4_ = (uint)uVar80;
            *(uint *)(lVar88 + 0x10 + uVar79) = (uint)uVar80;
            auVar161 = *(undefined1 (*) [16])(lVar88 + (long)ppVar129 * 0x14);
            *(undefined1 (*) [16])(lVar88 + uVar79) = auVar161;
          }
          uVar120._0_4_ = iVar43 + 1;
          uVar120._4_4_ = 0;
        }
        else {
          uVar80._0_4_ = *(uint *)((hb_buffer_t *)(uVar71 + 8) + (long)ppVar129 * 0x14);
          uVar79._4_4_ = 0;
          uVar79._0_4_ = (uint)uVar80;
          if ((pthread_mutex_t *)(ppVar129->__size + 1) < (pthread_mutex_t *)(ulong)(uint)uVar127) {
            if ((uint)uVar80 !=
                *(uint *)((hb_buffer_t *)(uVar71 + 8) + (long)(ppVar129->__size + 1) * 0x14)) {
              if (iVar43 != 0) goto LAB_003fd57f;
              auVar161._0_8_ =
                   hb_buffer_t::merge_clusters_impl
                             ((hb_buffer_t *)param_3,(uint)ppVar129,(uint)ppVar129 + 2);
              auVar174._8_8_ = extraout_XMM1_Qb_50;
              auVar174._0_8_ = extraout_XMM1_Qa_42;
              auVar161._8_8_ = extraout_XMM0_Qb_17;
              uVar120 = (pthread_mutex_t *)0x0;
              uVar79 = extraout_RDX_15;
              uVar102 = _uStack_260;
              uVar82 = _uStack_240;
            }
          }
          else if (iVar43 == 0) {
            uVar120 = (pthread_mutex_t *)0x0;
          }
          else {
LAB_003fd57f:
            uVar57 = *(uint *)((hb_buffer_t *)(uVar71 + 8) + (ulong)(iVar43 - 1) * 0x14);
            if ((uint)uVar80 < uVar57) {
              uVar87 = *(uint *)((hb_buffer_t *)(uVar71 + 4) + (long)ppVar129 * 0x14);
              uVar71 = (long)(uVar71 + uVar120 * 0x14) + -0xc;
              uVar100 = uVar120;
              do {
                if (*(uint *)uVar71 != uVar57) break;
                uVar100 = uVar100 + -1;
                *(uint *)(uVar71 + -4) = *(uint *)(uVar71 + -4) & 0xfffffff8 | uVar87 & 7;
                *(uint *)uVar71 = (uint)uVar80;
                uVar71 = uVar71 + -0x14;
              } while ((pthread_mutex_t *)uVar100 != (pthread_mutex_t *)0x0);
            }
          }
        }
        uVar100 = auVar174._0_8_;
        uVar80 = auVar161._0_8_;
        ppVar129 = (pthread_mutex_t *)(ppVar129->__size + 1);
      } while (ppVar129 != (pthread_mutex_t *)(ulong)(uint)uVar127);
    }
    piVar52 = (int *)CONCAT44(uStack_1b8._4_4_,(uint)uStack_1b8);
    *(int *)_uStack_250 = (int)uVar120;
  }
LAB_003fd5ea:
  if (((__pthread_internal_list *)(uVar107 + 0x80))->__prev[2].__next !=
      (__pthread_internal_list *)0x0) {
    uStack_1b8 = piVar52;
    bVar137 = hb_buffer_t::message
                        (uVar80,uVar100,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,in_XMM5._0_8_,
                         in_XMM6.__prev,in_XMM7.__prev,(hb_buffer_t *)param_3,_uStack_280,
                         "start postprocess-glyphs",uVar71,uVar120,uVar102,uVar283);
    uVar79 = extraout_RDX_16;
    if (bVar137) {
      auVar259 = (*(code *)((__pthread_internal_list *)(uVar107 + 0x80))->__prev[2].__next)
                           (_uStack_228,param_3,_uStack_280);
      hb_buffer_t::message
                (auVar259._0_8_,auVar259._8_8_,in_XMM2.__prev,in_XMM3._0_8_,in_XMM4.__prev,
                 in_XMM5._0_8_,in_XMM6.__prev,in_XMM7.__prev,(hb_buffer_t *)param_3,_uStack_280,
                 "end postprocess-glyphs",uVar71,uVar120,uVar102,uVar283);
      uVar79 = extraout_RDX_17;
    }
  }
  auVar259 = _DAT_005de080;
  if ((((ulong)((__pthread_internal_list *)((long)param_3 + 0xc0))->__prev & 0x20) != 0) &&
     (uVar127._0_4_ = *(uint *)(CONCAT44(uStack_274,local_278) + 0x60), (uint)uVar127 != 0)) {
    uVar80._0_4_ = *(uint *)(CONCAT44(uStack_274,local_278) + 0x18);
    uVar79 = *(undefined8 *)(CONCAT44(uStack_274,local_278) + 0x70);
    uVar99 = 0;
    phVar103 = (hb_buffer_t *)(uVar79 + 8);
    do {
      if ((uint)uVar127 - 1 == uVar99) {
        uVar99 = (ulong)(uint)uVar127;
        break;
      }
      iVar43 = *(int *)phVar103;
      uVar99 = uVar99 + 1;
      phVar85 = phVar103 + 0x14;
      phVar103 = phVar103 + 0x14;
    } while (iVar43 == *(int *)phVar85);
    phVar103 = (hb_buffer_t *)(uVar79 + 4);
    if (((uint)uVar80 & 0x80) == 0) {
      uVar92 = 0;
      do {
        uVar57 = (uint)uVar99;
        uVar78 = uVar99 & 0xffffffff;
        if ((uint)uVar92 < uVar57) {
          uVar118 = uVar99 & 0xffffffff;
          uVar117 = uVar118 - uVar92;
          uVar87 = 0;
          uVar72 = uVar92;
          if (8 < uVar117) {
            uVar72 = (ulong)((uint)uVar117 & 7);
            if (uVar72 == 0) {
              uVar72 = 8;
            }
            lVar88 = (uVar72 + uVar92) - uVar118;
            phVar85 = (hb_buffer_t *)(uVar79 + 0x90 + uVar92 * 0x14);
            auVar175 = (undefined1  [16])0x0;
            auVar212 = (undefined1  [16])0x0;
            do {
              auVar252._12_4_ = *(undefined4 *)(phVar85 + -0x50);
              auVar252._8_4_ = *(undefined4 *)(phVar85 + -100);
              auVar252._4_4_ = *(undefined4 *)(phVar85 + -0x78);
              auVar252._0_4_ = *(undefined4 *)(phVar85 + -0x8c);
              auVar254._12_4_ = *(undefined4 *)phVar85;
              auVar254._8_4_ = *(undefined4 *)(phVar85 + -0x14);
              auVar254._4_4_ = *(undefined4 *)(phVar85 + -0x28);
              auVar254._0_4_ = *(undefined4 *)(phVar85 + -0x3c);
              auVar175 = auVar175 | auVar252 & auVar259;
              auVar212 = auVar212 | auVar254 & auVar259;
              phVar85 = phVar85 + 0xa0;
              lVar88 = lVar88 + 8;
            } while (lVar88 != 0);
            uVar72 = (uVar117 - uVar72) + uVar92;
            auVar212 = auVar212 | auVar175;
            auVar176._0_8_ = auVar212._8_8_;
            auVar176._8_4_ = auVar212._8_4_;
            auVar176._12_4_ = auVar212._12_4_;
            uVar87 = SUB164(auVar176 | auVar212,4) | SUB164(auVar176 | auVar212,0);
          }
          lVar88 = uVar118 - uVar72;
          phVar85 = phVar103 + uVar72 * 0x14;
          do {
            uVar87 = uVar87 | *(uint *)phVar85 & 7;
            phVar85 = phVar85 + 0x14;
            lVar88 = lVar88 + -1;
          } while (lVar88 != 0);
          uVar81 = uVar87 & 0xfffffffd;
          if (((uint)uVar80 & 0x40) != 0) {
            uVar81 = uVar87;
          }
          uVar72 = ~uVar92;
          if ((uVar117 & 3) != 0) {
            phVar85 = phVar103 + uVar92 * 0x14;
            lVar88 = 0;
            do {
              *(uint *)phVar85 = uVar81;
              lVar88 = lVar88 + -1;
              phVar85 = phVar85 + 0x14;
            } while (-lVar88 != (uVar117 & 3));
            uVar92 = uVar92 - lVar88;
          }
          if (2 < uVar72 + uVar118) {
            lVar88 = uVar118 - uVar92;
            phVar85 = (hb_buffer_t *)(uVar79 + 0x40 + uVar92 * 0x14);
            do {
              *(uint *)(phVar85 + -0x3c) = uVar81;
              *(uint *)(phVar85 + -0x28) = uVar81;
              *(uint *)(phVar85 + -0x14) = uVar81;
              *(uint *)phVar85 = uVar81;
              phVar85 = phVar85 + 0x50;
              lVar88 = lVar88 + -4;
            } while (lVar88 != 0);
          }
        }
        uVar87 = uVar57 + 1;
        if (uVar57 + 1 < (uint)uVar127) {
          uVar87 = (uint)uVar127;
        }
        uVar92 = uVar99 & 0xffffffff;
        do {
          uVar81 = (int)uVar92 + 1;
          uVar99 = (ulong)uVar81;
          if ((uint)uVar127 <= uVar81) {
            uVar99 = (ulong)uVar87;
            break;
          }
          lVar88 = uVar92 * 0x14;
          uVar92 = uVar99;
        } while (*(int *)((hb_buffer_t *)(uVar79 + 8) + lVar88) ==
                 *(int *)((hb_buffer_t *)(uVar79 + 8) + (ulong)uVar81 * 0x14));
        uVar92 = uVar78;
      } while (uVar57 < (uint)uVar127);
    }
    else {
      uVar92 = 0;
      do {
        uVar81 = (uint)uVar99;
        uVar72 = uVar99 & 0xffffffff;
        uVar57 = (uint)uVar92;
        uVar78 = uVar99 & 0xffffffff;
        uVar87 = 0;
        if (uVar57 < uVar81) {
          uVar118 = uVar78 - uVar92;
          uVar87 = 0;
          if (uVar118 < 9) {
            uVar118 = uVar92;
          }
          else {
            uVar117 = (ulong)((uint)uVar118 & 7);
            if (uVar117 == 0) {
              uVar117 = 8;
            }
            lVar88 = (uVar117 + uVar92) - uVar78;
            phVar85 = (hb_buffer_t *)((long)(uVar79 + 0x90) + uVar92 * 0x14);
            auVar175 = (undefined1  [16])0x0;
            auVar212 = (undefined1  [16])0x0;
            do {
              auVar253._12_4_ = *(undefined4 *)(phVar85 + -0x50);
              auVar253._8_4_ = *(undefined4 *)(phVar85 + -100);
              auVar253._4_4_ = *(undefined4 *)(phVar85 + -0x78);
              auVar253._0_4_ = *(undefined4 *)(phVar85 + -0x8c);
              auVar255._12_4_ = *(undefined4 *)phVar85;
              auVar255._8_4_ = *(undefined4 *)(phVar85 + -0x14);
              auVar255._4_4_ = *(undefined4 *)(phVar85 + -0x28);
              auVar255._0_4_ = *(undefined4 *)(phVar85 + -0x3c);
              auVar175 = auVar175 | auVar253 & auVar259;
              auVar212 = auVar212 | auVar255 & auVar259;
              phVar85 = phVar85 + 0xa0;
              lVar88 = lVar88 + 8;
            } while (lVar88 != 0);
            uVar118 = (uVar118 - uVar117) + uVar92;
            auVar212 = auVar212 | auVar175;
            auVar177._0_8_ = auVar212._8_8_;
            auVar177._8_4_ = auVar212._8_4_;
            auVar177._12_4_ = auVar212._12_4_;
            uVar87 = SUB164(auVar177 | auVar212,4) | SUB164(auVar177 | auVar212,0);
          }
          lVar88 = uVar78 - uVar118;
          phVar85 = phVar103 + uVar118 * 0x14;
          do {
            uVar87 = uVar87 | *(uint *)phVar85 & 7;
            phVar85 = phVar85 + 0x14;
            lVar88 = lVar88 + -1;
          } while (lVar88 != 0);
        }
        uVar97 = uVar87 & 0xfffffffb;
        if ((uVar87 & 1) == 0) {
          uVar97 = uVar87;
        }
        uVar87 = uVar97 | 3;
        if ((uVar97 & 4) == 0) {
          uVar87 = uVar97;
        }
        uVar97 = uVar87 & 0xfffffffd;
        if (((uint)uVar80 & 0x40) != 0) {
          uVar97 = uVar87;
        }
        if (uVar57 < uVar81) {
          uVar118 = ~uVar92;
          if ((uVar81 - uVar57 & 3) != 0) {
            phVar85 = phVar103 + uVar92 * 0x14;
            lVar88 = 0;
            do {
              *(uint *)phVar85 = uVar97;
              lVar88 = lVar88 + -1;
              phVar85 = phVar85 + 0x14;
            } while (-lVar88 != ((ulong)(uVar81 - uVar57) & 3));
            uVar92 = uVar92 - lVar88;
          }
          if (2 < uVar118 + uVar78) {
            lVar88 = uVar78 - uVar92;
            phVar85 = (hb_buffer_t *)((long)(uVar79 + 0x40) + uVar92 * 0x14);
            do {
              *(uint *)(phVar85 + -0x3c) = uVar97;
              *(uint *)(phVar85 + -0x28) = uVar97;
              *(uint *)(phVar85 + -0x14) = uVar97;
              *(uint *)phVar85 = uVar97;
              phVar85 = phVar85 + 0x50;
              lVar88 = lVar88 + -4;
            } while (lVar88 != 0);
          }
        }
        uVar57 = uVar81 + 1;
        if (uVar81 + 1 < (uint)uVar127) {
          uVar57 = (uint)uVar127;
        }
        uVar92 = uVar99 & 0xffffffff;
        do {
          if (uVar57 - 1 == (int)uVar92) {
            uVar99 = (ulong)uVar57;
            break;
          }
          uVar99 = (ulong)((int)uVar92 + 1);
          lVar88 = uVar92 * 0x14;
          uVar92 = uVar99;
        } while (*(int *)((hb_buffer_t *)(uVar79 + 8) + lVar88) ==
                 *(int *)((hb_buffer_t *)(uVar79 + 8) + uVar99 * 0x14));
        uVar92 = uVar72;
      } while (uVar81 < (uint)uVar127);
    }
  }
  lVar88 = CONCAT44(uStack_274,local_278);
  *(int *)(lVar88 + 0x38) = local_208[1];
  *(undefined8 *)(lVar88 + 0xc4) = 0x1fffffff3fffffff;
  *(undefined2 *)(lVar88 + 0xb8) = 0;
  auVar282[8] = (char)uVar79;
  auVar282[9] = (char)((ulong)uVar79 >> 8);
  auVar282[10] = (char)((ulong)uVar79 >> 0x10);
  auVar282[0xb] = (char)((ulong)uVar79 >> 0x18);
  auVar282[0xc] = (char)((ulong)uVar79 >> 0x20);
  auVar282[0xd] = (char)((ulong)uVar79 >> 0x28);
  auVar282[0xe] = (char)((ulong)uVar79 >> 0x30);
  auVar282[0xf] = (char)((ulong)uVar79 >> 0x38);
  auVar282._0_8_ = 1;
  return auVar282;
LAB_003f4e62:
  uVar120 = (pthread_mutex_t *)0x0;
LAB_003f4f62:
  auVar259._0_8_ = uVar120 & 0xffffffff;
code_r0x003f4f71:
  auVar279[8] = (char)uVar80;
  auVar279[9] = (char)((ulong)uVar80 >> 8);
  auVar279[10] = (char)((ulong)uVar80 >> 0x10);
  auVar279[0xb] = (char)((ulong)uVar80 >> 0x18);
  auVar279[0xc] = (char)((ulong)uVar80 >> 0x20);
  auVar279[0xd] = (char)((ulong)uVar80 >> 0x28);
  auVar279[0xe] = (char)((ulong)uVar80 >> 0x30);
  auVar279[0xf] = (char)((ulong)uVar80 >> 0x38);
  auVar279[0] = (char)auVar259._0_8_;
  auVar279[1] = (char)((ulong)auVar259._0_8_ >> 8);
  auVar279[2] = (char)((ulong)auVar259._0_8_ >> 0x10);
  auVar279[3] = (char)((ulong)auVar259._0_8_ >> 0x18);
  auVar279[4] = (char)((ulong)auVar259._0_8_ >> 0x20);
  auVar279[5] = (char)((ulong)auVar259._0_8_ >> 0x28);
  auVar279[6] = (char)((ulong)auVar259._0_8_ >> 0x30);
  auVar279[7] = (char)((ulong)auVar259._0_8_ >> 0x38);
  return auVar279;
code_r0x003f2dd3:
  while( true ) {
    uVar99 = uVar80 & 0xffffffff;
    if ((int)uVar80 < in_R11[0]) break;
LAB_003f2ddb:
    while( true ) {
      uVar127._0_4_ = (uint)((int)uVar99 + in_R11[0]) >> 1;
      if (uVar97 < (ushort)(*(ushort *)
                             ((hb_buffer_t *)(uVar107 + 0xe) + param_6 * (ulong)(uint)uVar127) << 8
                           | *(ushort *)
                              ((hb_buffer_t *)(uVar107 + 0xe) + param_6 * (ulong)(uint)uVar127) >> 8
                           )) break;
      if (uVar97 <= (ushort)(*(ushort *)
                              ((hb_buffer_t *)(uVar107 + 0xc) + param_6 * (ulong)(uint)uVar127) << 8
                            | *(ushort *)
                               ((hb_buffer_t *)(uVar107 + 0xc) + param_6 * (ulong)(uint)uVar127) >>
                              8)) {
        uVar80._0_4_ = (uint)uVar127 * (int)uVar120;
        uVar80._4_4_ = 0;
        uVar127._0_4_ =
             (uint)(ushort)(*(ushort *)((hb_buffer_t *)(uVar107 + 0xe) + uVar80) << 8 |
                           *(ushort *)((hb_buffer_t *)(uVar107 + 0xe) + uVar80) >> 8);
        if (((uint)uVar127 <= uVar97) &&
           (uVar97 <= (ushort)(*(ushort *)((hb_buffer_t *)(uVar107 + 0xc) + uVar80) << 8 |
                              *(ushort *)((hb_buffer_t *)(uVar107 + 0xc) + uVar80) >> 8))) {
          uVar56 = *(ushort *)
                    ((long)&((__pthread_internal_list *)(uVar107 + 0x10))->__prev + uVar80);
          auVar275._8_4_ = (uint)uVar80;
          auVar275._0_8_ =
               (hb_buffer_t *)((ulong)(ushort)(uVar56 << 8 | uVar56 >> 8) + uVar107) +
               (ulong)(uVar97 - (uint)uVar127) * 2;
          auVar275._12_4_ = 0;
          return auVar275;
        }
        goto LAB_003f2e67;
      }
      uVar80._0_4_ = (uint)uVar127 + 1;
      uVar80._4_4_ = 0;
      in_R11[1]._0_1_ = '\0';
      in_R11[1]._1_1_ = '\0';
      in_R11[1]._2_1_ = '\0';
      in_R11[1]._3_1_ = '\0';
      in_R11[0] = (uint)uVar80;
      if ((int)uVar99 < (int)(uint)uVar80)
      goto 
      AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_get_value_switchD_003f2ba5_caseD_1
      ;
    }
    uVar80._0_4_ = (uint)uVar127 - 1;
    uVar80._4_4_ = 0;
  }

  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_get_value_switchD_003f2ba5_caseD_1
  :
  auVar272[8] = (char)uVar80;
  auVar272[9] = (char)((ulong)uVar80 >> 8);
  auVar272[10] = (char)((ulong)uVar80 >> 0x10);
  auVar272[0xb] = (char)((ulong)uVar80 >> 0x18);
  auVar272[0xc] = (char)((ulong)uVar80 >> 0x20);
  auVar272[0xd] = (char)((ulong)uVar80 >> 0x28);
  auVar272[0xe] = (char)((ulong)uVar80 >> 0x30);
  auVar272[0xf] = (char)((ulong)uVar80 >> 0x38);
  auVar272[0] = (char)auVar259._0_8_;
  auVar272[1] = (char)((ulong)auVar259._0_8_ >> 8);
  auVar272[2] = (char)((ulong)auVar259._0_8_ >> 0x10);
  auVar272[3] = (char)((ulong)auVar259._0_8_ >> 0x18);
  auVar272[4] = (char)((ulong)auVar259._0_8_ >> 0x20);
  auVar272[5] = (char)((ulong)auVar259._0_8_ >> 0x28);
  auVar272[6] = (char)((ulong)auVar259._0_8_ >> 0x30);
  auVar272[7] = (char)((ulong)auVar259._0_8_ >> 0x38);
  return auVar272;
  while( true ) {
    uVar99 = (ulong)(ushort)(*(ushort *)((hb_buffer_t *)(uVar107 + 2) + lVar88) << 8 |
                            *(ushort *)((hb_buffer_t *)(uVar107 + 2) + lVar88) >> 8);
    phVar85 = (hb_buffer_t *)(uVar99 + uVar80) + 4;
    uVar77 = (long)phVar85 - *(long *)param_6;
    if ((pthread_mutex_t *)(ulong)*(uint *)in_R11 < (ulong)uVar77) goto LAB_003f312d;
    uVar57 = *(uint *)(uVar99 + uVar80);
    lVar126 = (ulong)(uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 | (uVar57 & 0xff00) << 8 |
                     uVar57 << 0x18) * 4;
    uVar77._0_4_ = (uint)((ulong)lVar126 >> 0x20);
    uVar77._4_4_ = 0;
    uVar57 = (uint)lVar126;
    if ((uint)uVar77 != 0) goto LAB_003f312d;
    uVar77 = *(undefined8 *)param_6;
    phVar103 = (hb_buffer_t *)(ulong)*(uint *)in_R11;
    if (((phVar103 < phVar85 + -uVar77) ||
        ((uint)(*(int *)&((__pthread_internal_list *)(uVar100 + 0x10))->__prev - (int)phVar85) <
         uVar57)) ||
       (iVar43 = *(int *)(uVar100 + 0x1c) - uVar57, *(int *)(uVar100 + 0x1c) = iVar43, iVar43 < 1))
    goto LAB_003f312d;
    lVar88 = lVar88 + 2;
    if ((ulong)(uint)uVar127 * 2 == lVar88) break;
LAB_003f31d0:
    if (phVar103 < (hb_buffer_t *)(uVar107 + 4) + (lVar88 - uVar77)) goto LAB_003f312d;
  }

  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  :
  auVar276._0_8_ = in_R10 & 0xffffffff;
  auVar276[8] = (char)uVar77;
  auVar276[9] = (char)((ulong)uVar77 >> 8);
  auVar276[10] = (char)((ulong)uVar77 >> 0x10);
  auVar276[0xb] = (char)((ulong)uVar77 >> 0x18);
  auVar276[0xc] = (char)((ulong)uVar77 >> 0x20);
  auVar276[0xd] = (char)((ulong)uVar77 >> 0x28);
  auVar276[0xe] = (char)((ulong)uVar77 >> 0x30);
  auVar276[0xf] = (char)((ulong)uVar77 >> 0x38);
  return auVar276;
}


