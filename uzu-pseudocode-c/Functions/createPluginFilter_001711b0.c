// Function : createPluginFilter
// Namespace: 
// Entry    : 001711b0
// Prototype: AudioPluginAudioProcessor * createPluginFilter(void)
// Body     : 001711b0 - 001711d3


/* createPluginFilter() */

AudioPluginAudioProcessor * createPluginFilter(void)

{
  AudioPluginAudioProcessor *this;
  
  this = operator_new(0x8a8);
                    /* try { // try from 001711c1 to 001711c8 has its CatchHandler @ 001711d4 */
  AudioPluginAudioProcessor::AudioPluginAudioProcessor(this);
  return this;
}


