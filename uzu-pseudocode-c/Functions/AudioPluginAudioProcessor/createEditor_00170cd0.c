// Function : createEditor
// Namespace: AudioPluginAudioProcessor
// Entry    : 00170cd0
// Prototype: AudioPluginAudioProcessorEditor * createEditor(undefined8 param_1, undefined8 param_2, undefined8 param_3, AudioPluginAudioProcessor * this)
// Body     : 00170cd0 - 00170cf9


/* AudioPluginAudioProcessor::createEditor() */

AudioPluginAudioProcessorEditor * __thiscall
AudioPluginAudioProcessor::createEditor
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,AudioPluginAudioProcessor *this)

{
  AudioPluginAudioProcessorEditor *this_00;
  undefined8 extraout_XMM0_Qa;
  
  this_00 = operator_new(0x3038);
                    /* try { // try from 00170ce4 to 00170cee has its CatchHandler @ 00170cfa */
  AudioPluginAudioProcessorEditor::AudioPluginAudioProcessorEditor
            (extraout_XMM0_Qa,param_2,param_3,this_00,(long)this);
  return this_00;
}


