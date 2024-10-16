
// Generated from ./NyarLexer.g4 by ANTLR 4.13.2


#include "NyarLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct NyarLexerStaticData final {
  NyarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  NyarLexerStaticData(const NyarLexerStaticData&) = delete;
  NyarLexerStaticData(NyarLexerStaticData&&) = delete;
  NyarLexerStaticData& operator=(const NyarLexerStaticData&) = delete;
  NyarLexerStaticData& operator=(NyarLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag nyarlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<NyarLexerStaticData> nyarlexerLexerStaticData = nullptr;

void nyarlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (nyarlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(nyarlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<NyarLexerStaticData>(
    std::vector<std::string>{
      "LAPREN", "RPAREN", "ADD", "RESTA", "MUL", "DIV", "LESS", "GREATER", 
      "EQUAL", "COMMA", "SEMI", "LBRACKET", "RBRACKET", "LINE_COMMENT", 
      "START_BLOCK", "END_BLOCK", "STRING", "COMMENT", "IMPORT", "FUNC", 
      "FOR", "WHILE", "DESDE", "HASTA", "EN", "COND", "ID", "NUM", "BOOL", 
      "NADA", "RETURN", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'<'", "'>'", "'='", 
      "','", "';'", "'['", "']'", "", "'{'", "'}'", "", "", "'importar'", 
      "'funcion'", "'iterar'", "'mientras'", "'desde'", "'hasta'", "'en'", 
      "", "", "", "", "'NADA'", "'retornar'"
    },
    std::vector<std::string>{
      "", "LAPREN", "RPAREN", "ADD", "RESTA", "MUL", "DIV", "LESS", "GREATER", 
      "EQUAL", "COMMA", "SEMI", "LBRACKET", "RBRACKET", "LINE_COMMENT", 
      "START_BLOCK", "END_BLOCK", "STRING", "COMMENT", "IMPORT", "FUNC", 
      "FOR", "WHILE", "DESDE", "HASTA", "EN", "COND", "ID", "NUM", "BOOL", 
      "NADA", "RETURN", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,32,252,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,
  	4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,
  	1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,
  	5,16,105,8,16,10,16,12,16,108,9,16,1,16,1,16,1,17,1,17,1,17,1,17,5,17,
  	116,8,17,10,17,12,17,119,9,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,
  	1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,
  	1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,25,1,25,3,25,180,8,25,1,26,1,26,
  	5,26,184,8,26,10,26,12,26,187,9,26,1,27,3,27,190,8,27,1,27,4,27,193,8,
  	27,11,27,12,27,194,1,27,1,27,4,27,199,8,27,11,27,12,27,200,3,27,203,8,
  	27,1,27,1,27,3,27,207,8,27,1,27,4,27,210,8,27,11,27,12,27,211,3,27,214,
  	8,27,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,
  	1,28,3,28,230,8,28,1,29,1,29,1,29,1,29,1,29,1,30,1,30,1,30,1,30,1,30,
  	1,30,1,30,1,30,1,30,1,31,4,31,247,8,31,11,31,12,31,248,1,31,1,31,2,106,
  	117,0,32,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,
  	13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,
  	49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,1,0,8,2,0,10,10,13,13,
  	2,0,34,34,39,39,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,
  	0,48,57,2,0,69,69,101,101,2,0,43,43,45,45,3,0,9,10,13,13,32,32,264,0,
  	1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,
  	0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,
  	23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,
  	0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,
  	0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,
  	55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,1,65,1,
  	0,0,0,3,67,1,0,0,0,5,69,1,0,0,0,7,71,1,0,0,0,9,73,1,0,0,0,11,75,1,0,0,
  	0,13,77,1,0,0,0,15,79,1,0,0,0,17,81,1,0,0,0,19,83,1,0,0,0,21,85,1,0,0,
  	0,23,87,1,0,0,0,25,89,1,0,0,0,27,91,1,0,0,0,29,98,1,0,0,0,31,100,1,0,
  	0,0,33,102,1,0,0,0,35,111,1,0,0,0,37,125,1,0,0,0,39,134,1,0,0,0,41,142,
  	1,0,0,0,43,149,1,0,0,0,45,158,1,0,0,0,47,164,1,0,0,0,49,170,1,0,0,0,51,
  	179,1,0,0,0,53,181,1,0,0,0,55,189,1,0,0,0,57,229,1,0,0,0,59,231,1,0,0,
  	0,61,236,1,0,0,0,63,246,1,0,0,0,65,66,5,40,0,0,66,2,1,0,0,0,67,68,5,41,
  	0,0,68,4,1,0,0,0,69,70,5,43,0,0,70,6,1,0,0,0,71,72,5,45,0,0,72,8,1,0,
  	0,0,73,74,5,42,0,0,74,10,1,0,0,0,75,76,5,47,0,0,76,12,1,0,0,0,77,78,5,
  	60,0,0,78,14,1,0,0,0,79,80,5,62,0,0,80,16,1,0,0,0,81,82,5,61,0,0,82,18,
  	1,0,0,0,83,84,5,44,0,0,84,20,1,0,0,0,85,86,5,59,0,0,86,22,1,0,0,0,87,
  	88,5,91,0,0,88,24,1,0,0,0,89,90,5,93,0,0,90,26,1,0,0,0,91,92,5,47,0,0,
  	92,93,5,47,0,0,93,94,1,0,0,0,94,95,8,0,0,0,95,96,1,0,0,0,96,97,6,13,0,
  	0,97,28,1,0,0,0,98,99,5,123,0,0,99,30,1,0,0,0,100,101,5,125,0,0,101,32,
  	1,0,0,0,102,106,7,1,0,0,103,105,9,0,0,0,104,103,1,0,0,0,105,108,1,0,0,
  	0,106,107,1,0,0,0,106,104,1,0,0,0,107,109,1,0,0,0,108,106,1,0,0,0,109,
  	110,7,1,0,0,110,34,1,0,0,0,111,112,5,47,0,0,112,113,5,42,0,0,113,117,
  	1,0,0,0,114,116,9,0,0,0,115,114,1,0,0,0,116,119,1,0,0,0,117,118,1,0,0,
  	0,117,115,1,0,0,0,118,120,1,0,0,0,119,117,1,0,0,0,120,121,5,42,0,0,121,
  	122,5,47,0,0,122,123,1,0,0,0,123,124,6,17,0,0,124,36,1,0,0,0,125,126,
  	5,105,0,0,126,127,5,109,0,0,127,128,5,112,0,0,128,129,5,111,0,0,129,130,
  	5,114,0,0,130,131,5,116,0,0,131,132,5,97,0,0,132,133,5,114,0,0,133,38,
  	1,0,0,0,134,135,5,102,0,0,135,136,5,117,0,0,136,137,5,110,0,0,137,138,
  	5,99,0,0,138,139,5,105,0,0,139,140,5,111,0,0,140,141,5,110,0,0,141,40,
  	1,0,0,0,142,143,5,105,0,0,143,144,5,116,0,0,144,145,5,101,0,0,145,146,
  	5,114,0,0,146,147,5,97,0,0,147,148,5,114,0,0,148,42,1,0,0,0,149,150,5,
  	109,0,0,150,151,5,105,0,0,151,152,5,101,0,0,152,153,5,110,0,0,153,154,
  	5,116,0,0,154,155,5,114,0,0,155,156,5,97,0,0,156,157,5,115,0,0,157,44,
  	1,0,0,0,158,159,5,100,0,0,159,160,5,101,0,0,160,161,5,115,0,0,161,162,
  	5,100,0,0,162,163,5,101,0,0,163,46,1,0,0,0,164,165,5,104,0,0,165,166,
  	5,97,0,0,166,167,5,115,0,0,167,168,5,116,0,0,168,169,5,97,0,0,169,48,
  	1,0,0,0,170,171,5,101,0,0,171,172,5,110,0,0,172,50,1,0,0,0,173,174,5,
  	115,0,0,174,180,5,105,0,0,175,176,5,115,0,0,176,177,5,105,0,0,177,178,
  	5,110,0,0,178,180,5,111,0,0,179,173,1,0,0,0,179,175,1,0,0,0,180,52,1,
  	0,0,0,181,185,7,2,0,0,182,184,7,3,0,0,183,182,1,0,0,0,184,187,1,0,0,0,
  	185,183,1,0,0,0,185,186,1,0,0,0,186,54,1,0,0,0,187,185,1,0,0,0,188,190,
  	5,45,0,0,189,188,1,0,0,0,189,190,1,0,0,0,190,192,1,0,0,0,191,193,7,4,
  	0,0,192,191,1,0,0,0,193,194,1,0,0,0,194,192,1,0,0,0,194,195,1,0,0,0,195,
  	202,1,0,0,0,196,198,5,46,0,0,197,199,7,4,0,0,198,197,1,0,0,0,199,200,
  	1,0,0,0,200,198,1,0,0,0,200,201,1,0,0,0,201,203,1,0,0,0,202,196,1,0,0,
  	0,202,203,1,0,0,0,203,213,1,0,0,0,204,206,7,5,0,0,205,207,7,6,0,0,206,
  	205,1,0,0,0,206,207,1,0,0,0,207,209,1,0,0,0,208,210,7,4,0,0,209,208,1,
  	0,0,0,210,211,1,0,0,0,211,209,1,0,0,0,211,212,1,0,0,0,212,214,1,0,0,0,
  	213,204,1,0,0,0,213,214,1,0,0,0,214,56,1,0,0,0,215,216,5,118,0,0,216,
  	217,5,101,0,0,217,218,5,114,0,0,218,219,5,100,0,0,219,220,5,97,0,0,220,
  	221,5,100,0,0,221,222,5,101,0,0,222,223,5,114,0,0,223,230,5,111,0,0,224,
  	225,5,102,0,0,225,226,5,97,0,0,226,227,5,108,0,0,227,228,5,115,0,0,228,
  	230,5,111,0,0,229,215,1,0,0,0,229,224,1,0,0,0,230,58,1,0,0,0,231,232,
  	5,78,0,0,232,233,5,65,0,0,233,234,5,68,0,0,234,235,5,65,0,0,235,60,1,
  	0,0,0,236,237,5,114,0,0,237,238,5,101,0,0,238,239,5,116,0,0,239,240,5,
  	111,0,0,240,241,5,114,0,0,241,242,5,110,0,0,242,243,5,97,0,0,243,244,
  	5,114,0,0,244,62,1,0,0,0,245,247,7,7,0,0,246,245,1,0,0,0,247,248,1,0,
  	0,0,248,246,1,0,0,0,248,249,1,0,0,0,249,250,1,0,0,0,250,251,6,31,0,0,
  	251,64,1,0,0,0,14,0,106,117,179,185,189,194,200,202,206,211,213,229,248,
  	1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  nyarlexerLexerStaticData = std::move(staticData);
}

}

NyarLexer::NyarLexer(CharStream *input) : Lexer(input) {
  NyarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *nyarlexerLexerStaticData->atn, nyarlexerLexerStaticData->decisionToDFA, nyarlexerLexerStaticData->sharedContextCache);
}

NyarLexer::~NyarLexer() {
  delete _interpreter;
}

std::string NyarLexer::getGrammarFileName() const {
  return "NyarLexer.g4";
}

const std::vector<std::string>& NyarLexer::getRuleNames() const {
  return nyarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& NyarLexer::getChannelNames() const {
  return nyarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& NyarLexer::getModeNames() const {
  return nyarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& NyarLexer::getVocabulary() const {
  return nyarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView NyarLexer::getSerializedATN() const {
  return nyarlexerLexerStaticData->serializedATN;
}

const atn::ATN& NyarLexer::getATN() const {
  return *nyarlexerLexerStaticData->atn;
}




void NyarLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  nyarlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(nyarlexerLexerOnceFlag, nyarlexerLexerInitialize);
#endif
}
