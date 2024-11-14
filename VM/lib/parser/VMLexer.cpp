
// Generated from ./VMLexer.g4 by ANTLR 4.13.2


#include "VMLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct VMLexerStaticData final {
  VMLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  VMLexerStaticData(const VMLexerStaticData&) = delete;
  VMLexerStaticData(VMLexerStaticData&&) = delete;
  VMLexerStaticData& operator=(const VMLexerStaticData&) = delete;
  VMLexerStaticData& operator=(VMLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag vmlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<VMLexerStaticData> vmlexerLexerStaticData = nullptr;

void vmlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (vmlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(vmlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<VMLexerStaticData>(
    std::vector<std::string>{
      "LPAREN", "RPAREN", "START_BLOCK", "END_BLOCK", "SUM", "SUB", "MUL", 
      "DIV", "LESS", "GREATER", "EQUAL", "NEQ", "EQEQ", "AND", "OR", "RW_FOR", 
      "RW_IF", "RW_END", "RW_DECLAREFUNCTION", "RW_CALLFUNCTION", "RW_RETURN", 
      "RW_STRUCTURE", "RW_ARRAY", "RESERVEDWORDS", "COMMA", "SEMICOLON", 
      "COLON", "LBRACKET", "RBRACKET", "LINE_COMMENT", "STRING", "COMMENT", 
      "ID", "NUMBER", "BOOL", "NULL", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'{'", "'}'", "'+'", "'-'", "'*'", "'/'", "'<'", 
      "'>'", "'='", "'!='", "'=='", "'&&'", "'||'", "'@_for'", "'@si'", 
      "'@_end'", "'@declare funcion'", "'@call'", "'@retornar'", "'@estructura'", 
      "'@array'", "'@'", "','", "';'", "':'", "'['", "']'", "", "", "", 
      "", "", "", "'@NNULL'"
    },
    std::vector<std::string>{
      "", "LPAREN", "RPAREN", "START_BLOCK", "END_BLOCK", "SUM", "SUB", 
      "MUL", "DIV", "LESS", "GREATER", "EQUAL", "NEQ", "EQEQ", "AND", "OR", 
      "RW_FOR", "RW_IF", "RW_END", "RW_DECLAREFUNCTION", "RW_CALLFUNCTION", 
      "RW_RETURN", "RW_STRUCTURE", "RW_ARRAY", "RESERVEDWORDS", "COMMA", 
      "SEMICOLON", "COLON", "LBRACKET", "RBRACKET", "LINE_COMMENT", "STRING", 
      "COMMENT", "ID", "NUMBER", "BOOL", "NULL", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,37,283,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,
  	6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,1,13,
  	1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,
  	1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,
  	1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,21,1,21,
  	1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,
  	1,22,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,28,
  	1,28,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,30,1,30,5,30,199,8,30,10,30,
  	12,30,202,9,30,1,30,1,30,1,31,1,31,1,31,1,31,5,31,210,8,31,10,31,12,31,
  	213,9,31,1,31,1,31,1,31,1,31,1,31,1,32,1,32,5,32,222,8,32,10,32,12,32,
  	225,9,32,1,33,3,33,228,8,33,1,33,4,33,231,8,33,11,33,12,33,232,1,33,1,
  	33,4,33,237,8,33,11,33,12,33,238,3,33,241,8,33,1,33,1,33,3,33,245,8,33,
  	1,33,4,33,248,8,33,11,33,12,33,249,3,33,252,8,33,1,34,1,34,1,34,1,34,
  	1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,3,34,268,8,34,1,35,
  	1,35,1,35,1,35,1,35,1,35,1,35,1,36,4,36,278,8,36,11,36,12,36,279,1,36,
  	1,36,2,200,211,0,37,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,
  	11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,
  	45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,
  	34,69,35,71,36,73,37,1,0,8,2,0,10,10,13,13,2,0,34,34,39,39,3,0,65,90,
  	95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,2,0,69,69,101,101,
  	2,0,43,43,45,45,3,0,9,10,13,13,32,32,294,0,1,1,0,0,0,0,3,1,0,0,0,0,5,
  	1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,
  	0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,
  	27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,
  	0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,
  	0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,
  	59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,
  	0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,1,75,1,0,0,0,3,77,1,0,0,0,5,79,1,0,0,
  	0,7,81,1,0,0,0,9,83,1,0,0,0,11,85,1,0,0,0,13,87,1,0,0,0,15,89,1,0,0,0,
  	17,91,1,0,0,0,19,93,1,0,0,0,21,95,1,0,0,0,23,97,1,0,0,0,25,100,1,0,0,
  	0,27,103,1,0,0,0,29,106,1,0,0,0,31,109,1,0,0,0,33,115,1,0,0,0,35,119,
  	1,0,0,0,37,125,1,0,0,0,39,142,1,0,0,0,41,148,1,0,0,0,43,158,1,0,0,0,45,
  	170,1,0,0,0,47,177,1,0,0,0,49,179,1,0,0,0,51,181,1,0,0,0,53,183,1,0,0,
  	0,55,185,1,0,0,0,57,187,1,0,0,0,59,189,1,0,0,0,61,196,1,0,0,0,63,205,
  	1,0,0,0,65,219,1,0,0,0,67,227,1,0,0,0,69,267,1,0,0,0,71,269,1,0,0,0,73,
  	277,1,0,0,0,75,76,5,40,0,0,76,2,1,0,0,0,77,78,5,41,0,0,78,4,1,0,0,0,79,
  	80,5,123,0,0,80,6,1,0,0,0,81,82,5,125,0,0,82,8,1,0,0,0,83,84,5,43,0,0,
  	84,10,1,0,0,0,85,86,5,45,0,0,86,12,1,0,0,0,87,88,5,42,0,0,88,14,1,0,0,
  	0,89,90,5,47,0,0,90,16,1,0,0,0,91,92,5,60,0,0,92,18,1,0,0,0,93,94,5,62,
  	0,0,94,20,1,0,0,0,95,96,5,61,0,0,96,22,1,0,0,0,97,98,5,33,0,0,98,99,5,
  	61,0,0,99,24,1,0,0,0,100,101,5,61,0,0,101,102,5,61,0,0,102,26,1,0,0,0,
  	103,104,5,38,0,0,104,105,5,38,0,0,105,28,1,0,0,0,106,107,5,124,0,0,107,
  	108,5,124,0,0,108,30,1,0,0,0,109,110,5,64,0,0,110,111,5,95,0,0,111,112,
  	5,102,0,0,112,113,5,111,0,0,113,114,5,114,0,0,114,32,1,0,0,0,115,116,
  	5,64,0,0,116,117,5,115,0,0,117,118,5,105,0,0,118,34,1,0,0,0,119,120,5,
  	64,0,0,120,121,5,95,0,0,121,122,5,101,0,0,122,123,5,110,0,0,123,124,5,
  	100,0,0,124,36,1,0,0,0,125,126,5,64,0,0,126,127,5,100,0,0,127,128,5,101,
  	0,0,128,129,5,99,0,0,129,130,5,108,0,0,130,131,5,97,0,0,131,132,5,114,
  	0,0,132,133,5,101,0,0,133,134,5,32,0,0,134,135,5,102,0,0,135,136,5,117,
  	0,0,136,137,5,110,0,0,137,138,5,99,0,0,138,139,5,105,0,0,139,140,5,111,
  	0,0,140,141,5,110,0,0,141,38,1,0,0,0,142,143,5,64,0,0,143,144,5,99,0,
  	0,144,145,5,97,0,0,145,146,5,108,0,0,146,147,5,108,0,0,147,40,1,0,0,0,
  	148,149,5,64,0,0,149,150,5,114,0,0,150,151,5,101,0,0,151,152,5,116,0,
  	0,152,153,5,111,0,0,153,154,5,114,0,0,154,155,5,110,0,0,155,156,5,97,
  	0,0,156,157,5,114,0,0,157,42,1,0,0,0,158,159,5,64,0,0,159,160,5,101,0,
  	0,160,161,5,115,0,0,161,162,5,116,0,0,162,163,5,114,0,0,163,164,5,117,
  	0,0,164,165,5,99,0,0,165,166,5,116,0,0,166,167,5,117,0,0,167,168,5,114,
  	0,0,168,169,5,97,0,0,169,44,1,0,0,0,170,171,5,64,0,0,171,172,5,97,0,0,
  	172,173,5,114,0,0,173,174,5,114,0,0,174,175,5,97,0,0,175,176,5,121,0,
  	0,176,46,1,0,0,0,177,178,5,64,0,0,178,48,1,0,0,0,179,180,5,44,0,0,180,
  	50,1,0,0,0,181,182,5,59,0,0,182,52,1,0,0,0,183,184,5,58,0,0,184,54,1,
  	0,0,0,185,186,5,91,0,0,186,56,1,0,0,0,187,188,5,93,0,0,188,58,1,0,0,0,
  	189,190,5,47,0,0,190,191,5,47,0,0,191,192,1,0,0,0,192,193,8,0,0,0,193,
  	194,1,0,0,0,194,195,6,29,0,0,195,60,1,0,0,0,196,200,7,1,0,0,197,199,9,
  	0,0,0,198,197,1,0,0,0,199,202,1,0,0,0,200,201,1,0,0,0,200,198,1,0,0,0,
  	201,203,1,0,0,0,202,200,1,0,0,0,203,204,7,1,0,0,204,62,1,0,0,0,205,206,
  	5,47,0,0,206,207,5,42,0,0,207,211,1,0,0,0,208,210,9,0,0,0,209,208,1,0,
  	0,0,210,213,1,0,0,0,211,212,1,0,0,0,211,209,1,0,0,0,212,214,1,0,0,0,213,
  	211,1,0,0,0,214,215,5,42,0,0,215,216,5,47,0,0,216,217,1,0,0,0,217,218,
  	6,31,0,0,218,64,1,0,0,0,219,223,7,2,0,0,220,222,7,3,0,0,221,220,1,0,0,
  	0,222,225,1,0,0,0,223,221,1,0,0,0,223,224,1,0,0,0,224,66,1,0,0,0,225,
  	223,1,0,0,0,226,228,5,45,0,0,227,226,1,0,0,0,227,228,1,0,0,0,228,230,
  	1,0,0,0,229,231,7,4,0,0,230,229,1,0,0,0,231,232,1,0,0,0,232,230,1,0,0,
  	0,232,233,1,0,0,0,233,240,1,0,0,0,234,236,5,46,0,0,235,237,7,4,0,0,236,
  	235,1,0,0,0,237,238,1,0,0,0,238,236,1,0,0,0,238,239,1,0,0,0,239,241,1,
  	0,0,0,240,234,1,0,0,0,240,241,1,0,0,0,241,251,1,0,0,0,242,244,7,5,0,0,
  	243,245,7,6,0,0,244,243,1,0,0,0,244,245,1,0,0,0,245,247,1,0,0,0,246,248,
  	7,4,0,0,247,246,1,0,0,0,248,249,1,0,0,0,249,247,1,0,0,0,249,250,1,0,0,
  	0,250,252,1,0,0,0,251,242,1,0,0,0,251,252,1,0,0,0,252,68,1,0,0,0,253,
  	254,5,118,0,0,254,255,5,101,0,0,255,256,5,114,0,0,256,257,5,100,0,0,257,
  	258,5,97,0,0,258,259,5,100,0,0,259,260,5,101,0,0,260,261,5,114,0,0,261,
  	268,5,111,0,0,262,263,5,102,0,0,263,264,5,97,0,0,264,265,5,108,0,0,265,
  	266,5,115,0,0,266,268,5,111,0,0,267,253,1,0,0,0,267,262,1,0,0,0,268,70,
  	1,0,0,0,269,270,5,64,0,0,270,271,5,78,0,0,271,272,5,78,0,0,272,273,5,
  	85,0,0,273,274,5,76,0,0,274,275,5,76,0,0,275,72,1,0,0,0,276,278,7,7,0,
  	0,277,276,1,0,0,0,278,279,1,0,0,0,279,277,1,0,0,0,279,280,1,0,0,0,280,
  	281,1,0,0,0,281,282,6,36,0,0,282,74,1,0,0,0,13,0,200,211,223,227,232,
  	238,240,244,249,251,267,279,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  vmlexerLexerStaticData = std::move(staticData);
}

}

VMLexer::VMLexer(CharStream *input) : Lexer(input) {
  VMLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *vmlexerLexerStaticData->atn, vmlexerLexerStaticData->decisionToDFA, vmlexerLexerStaticData->sharedContextCache);
}

VMLexer::~VMLexer() {
  delete _interpreter;
}

std::string VMLexer::getGrammarFileName() const {
  return "VMLexer.g4";
}

const std::vector<std::string>& VMLexer::getRuleNames() const {
  return vmlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& VMLexer::getChannelNames() const {
  return vmlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& VMLexer::getModeNames() const {
  return vmlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& VMLexer::getVocabulary() const {
  return vmlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView VMLexer::getSerializedATN() const {
  return vmlexerLexerStaticData->serializedATN;
}

const atn::ATN& VMLexer::getATN() const {
  return *vmlexerLexerStaticData->atn;
}




void VMLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  vmlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(vmlexerLexerOnceFlag, vmlexerLexerInitialize);
#endif
}
