
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
      "EQUAL", "NEQ", "EQEQ", "COMMA", "SEMI", "LBRACKET", "RBRACKET", "LINE_COMMENT", 
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
      "'!='", "'=='", "','", "';'", "'['", "']'", "", "'{'", "'}'", "", 
      "", "'importar'", "'funcion'", "'iterar'", "'mientras'", "'desde'", 
      "'hasta'", "'en'", "", "", "", "", "'NADA'", "'retornar'"
    },
    std::vector<std::string>{
      "", "LAPREN", "RPAREN", "ADD", "RESTA", "MUL", "DIV", "LESS", "GREATER", 
      "EQUAL", "NEQ", "EQEQ", "COMMA", "SEMI", "LBRACKET", "RBRACKET", "LINE_COMMENT", 
      "START_BLOCK", "END_BLOCK", "STRING", "COMMENT", "IMPORT", "FUNC", 
      "FOR", "WHILE", "DESDE", "HASTA", "EN", "COND", "ID", "NUM", "BOOL", 
      "NADA", "RETURN", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,34,262,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,1,0,1,0,1,1,1,
  	1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,
  	1,10,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,5,18,115,8,18,10,18,
  	12,18,118,9,18,1,18,1,18,1,19,1,19,1,19,1,19,5,19,126,8,19,10,19,12,19,
  	129,9,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,
  	1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,24,1,24,
  	1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,25,1,25,1,26,1,26,1,26,1,27,
  	1,27,1,27,1,27,1,27,1,27,3,27,190,8,27,1,28,1,28,5,28,194,8,28,10,28,
  	12,28,197,9,28,1,29,3,29,200,8,29,1,29,4,29,203,8,29,11,29,12,29,204,
  	1,29,1,29,4,29,209,8,29,11,29,12,29,210,3,29,213,8,29,1,29,1,29,3,29,
  	217,8,29,1,29,4,29,220,8,29,11,29,12,29,221,3,29,224,8,29,1,30,1,30,1,
  	30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,3,30,240,8,
  	30,1,31,1,31,1,31,1,31,1,31,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,
  	32,1,33,4,33,257,8,33,11,33,12,33,258,1,33,1,33,2,116,127,0,34,1,1,3,
  	2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,
  	31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,
  	27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,1,0,8,2,0,10,10,13,13,2,
  	0,34,34,39,39,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,
  	48,57,2,0,69,69,101,101,2,0,43,43,45,45,3,0,9,10,13,13,32,32,274,0,1,
  	1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,
  	0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,
  	1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,
  	0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,
  	0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,
  	1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,
  	0,0,0,67,1,0,0,0,1,69,1,0,0,0,3,71,1,0,0,0,5,73,1,0,0,0,7,75,1,0,0,0,
  	9,77,1,0,0,0,11,79,1,0,0,0,13,81,1,0,0,0,15,83,1,0,0,0,17,85,1,0,0,0,
  	19,87,1,0,0,0,21,90,1,0,0,0,23,93,1,0,0,0,25,95,1,0,0,0,27,97,1,0,0,0,
  	29,99,1,0,0,0,31,101,1,0,0,0,33,108,1,0,0,0,35,110,1,0,0,0,37,112,1,0,
  	0,0,39,121,1,0,0,0,41,135,1,0,0,0,43,144,1,0,0,0,45,152,1,0,0,0,47,159,
  	1,0,0,0,49,168,1,0,0,0,51,174,1,0,0,0,53,180,1,0,0,0,55,189,1,0,0,0,57,
  	191,1,0,0,0,59,199,1,0,0,0,61,239,1,0,0,0,63,241,1,0,0,0,65,246,1,0,0,
  	0,67,256,1,0,0,0,69,70,5,40,0,0,70,2,1,0,0,0,71,72,5,41,0,0,72,4,1,0,
  	0,0,73,74,5,43,0,0,74,6,1,0,0,0,75,76,5,45,0,0,76,8,1,0,0,0,77,78,5,42,
  	0,0,78,10,1,0,0,0,79,80,5,47,0,0,80,12,1,0,0,0,81,82,5,60,0,0,82,14,1,
  	0,0,0,83,84,5,62,0,0,84,16,1,0,0,0,85,86,5,61,0,0,86,18,1,0,0,0,87,88,
  	5,33,0,0,88,89,5,61,0,0,89,20,1,0,0,0,90,91,5,61,0,0,91,92,5,61,0,0,92,
  	22,1,0,0,0,93,94,5,44,0,0,94,24,1,0,0,0,95,96,5,59,0,0,96,26,1,0,0,0,
  	97,98,5,91,0,0,98,28,1,0,0,0,99,100,5,93,0,0,100,30,1,0,0,0,101,102,5,
  	47,0,0,102,103,5,47,0,0,103,104,1,0,0,0,104,105,8,0,0,0,105,106,1,0,0,
  	0,106,107,6,15,0,0,107,32,1,0,0,0,108,109,5,123,0,0,109,34,1,0,0,0,110,
  	111,5,125,0,0,111,36,1,0,0,0,112,116,7,1,0,0,113,115,9,0,0,0,114,113,
  	1,0,0,0,115,118,1,0,0,0,116,117,1,0,0,0,116,114,1,0,0,0,117,119,1,0,0,
  	0,118,116,1,0,0,0,119,120,7,1,0,0,120,38,1,0,0,0,121,122,5,47,0,0,122,
  	123,5,42,0,0,123,127,1,0,0,0,124,126,9,0,0,0,125,124,1,0,0,0,126,129,
  	1,0,0,0,127,128,1,0,0,0,127,125,1,0,0,0,128,130,1,0,0,0,129,127,1,0,0,
  	0,130,131,5,42,0,0,131,132,5,47,0,0,132,133,1,0,0,0,133,134,6,19,0,0,
  	134,40,1,0,0,0,135,136,5,105,0,0,136,137,5,109,0,0,137,138,5,112,0,0,
  	138,139,5,111,0,0,139,140,5,114,0,0,140,141,5,116,0,0,141,142,5,97,0,
  	0,142,143,5,114,0,0,143,42,1,0,0,0,144,145,5,102,0,0,145,146,5,117,0,
  	0,146,147,5,110,0,0,147,148,5,99,0,0,148,149,5,105,0,0,149,150,5,111,
  	0,0,150,151,5,110,0,0,151,44,1,0,0,0,152,153,5,105,0,0,153,154,5,116,
  	0,0,154,155,5,101,0,0,155,156,5,114,0,0,156,157,5,97,0,0,157,158,5,114,
  	0,0,158,46,1,0,0,0,159,160,5,109,0,0,160,161,5,105,0,0,161,162,5,101,
  	0,0,162,163,5,110,0,0,163,164,5,116,0,0,164,165,5,114,0,0,165,166,5,97,
  	0,0,166,167,5,115,0,0,167,48,1,0,0,0,168,169,5,100,0,0,169,170,5,101,
  	0,0,170,171,5,115,0,0,171,172,5,100,0,0,172,173,5,101,0,0,173,50,1,0,
  	0,0,174,175,5,104,0,0,175,176,5,97,0,0,176,177,5,115,0,0,177,178,5,116,
  	0,0,178,179,5,97,0,0,179,52,1,0,0,0,180,181,5,101,0,0,181,182,5,110,0,
  	0,182,54,1,0,0,0,183,184,5,115,0,0,184,190,5,105,0,0,185,186,5,115,0,
  	0,186,187,5,105,0,0,187,188,5,110,0,0,188,190,5,111,0,0,189,183,1,0,0,
  	0,189,185,1,0,0,0,190,56,1,0,0,0,191,195,7,2,0,0,192,194,7,3,0,0,193,
  	192,1,0,0,0,194,197,1,0,0,0,195,193,1,0,0,0,195,196,1,0,0,0,196,58,1,
  	0,0,0,197,195,1,0,0,0,198,200,5,45,0,0,199,198,1,0,0,0,199,200,1,0,0,
  	0,200,202,1,0,0,0,201,203,7,4,0,0,202,201,1,0,0,0,203,204,1,0,0,0,204,
  	202,1,0,0,0,204,205,1,0,0,0,205,212,1,0,0,0,206,208,5,46,0,0,207,209,
  	7,4,0,0,208,207,1,0,0,0,209,210,1,0,0,0,210,208,1,0,0,0,210,211,1,0,0,
  	0,211,213,1,0,0,0,212,206,1,0,0,0,212,213,1,0,0,0,213,223,1,0,0,0,214,
  	216,7,5,0,0,215,217,7,6,0,0,216,215,1,0,0,0,216,217,1,0,0,0,217,219,1,
  	0,0,0,218,220,7,4,0,0,219,218,1,0,0,0,220,221,1,0,0,0,221,219,1,0,0,0,
  	221,222,1,0,0,0,222,224,1,0,0,0,223,214,1,0,0,0,223,224,1,0,0,0,224,60,
  	1,0,0,0,225,226,5,118,0,0,226,227,5,101,0,0,227,228,5,114,0,0,228,229,
  	5,100,0,0,229,230,5,97,0,0,230,231,5,100,0,0,231,232,5,101,0,0,232,233,
  	5,114,0,0,233,240,5,111,0,0,234,235,5,102,0,0,235,236,5,97,0,0,236,237,
  	5,108,0,0,237,238,5,115,0,0,238,240,5,111,0,0,239,225,1,0,0,0,239,234,
  	1,0,0,0,240,62,1,0,0,0,241,242,5,78,0,0,242,243,5,65,0,0,243,244,5,68,
  	0,0,244,245,5,65,0,0,245,64,1,0,0,0,246,247,5,114,0,0,247,248,5,101,0,
  	0,248,249,5,116,0,0,249,250,5,111,0,0,250,251,5,114,0,0,251,252,5,110,
  	0,0,252,253,5,97,0,0,253,254,5,114,0,0,254,66,1,0,0,0,255,257,7,7,0,0,
  	256,255,1,0,0,0,257,258,1,0,0,0,258,256,1,0,0,0,258,259,1,0,0,0,259,260,
  	1,0,0,0,260,261,6,33,0,0,261,68,1,0,0,0,14,0,116,127,189,195,199,204,
  	210,212,216,221,223,239,258,1,6,0,0
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
