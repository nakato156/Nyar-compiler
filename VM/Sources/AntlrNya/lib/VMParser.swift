// Generated from ./VMParser.g4 by ANTLR 4.13.2
import Antlr4

open class VMParser: Parser {

	internal static var _decisionToDFA: [DFA] = {
          var decisionToDFA = [DFA]()
          let length = VMParser._ATN.getNumberOfDecisions()
          for i in 0..<length {
            decisionToDFA.append(DFA(VMParser._ATN.getDecisionState(i)!, i))
           }
           return decisionToDFA
     }()

	internal static let _sharedContextCache = PredictionContextCache()

	public
	enum Tokens: Int {
		case EOF = -1, LAPREN = 1, RPAREN = 2, ADD = 3, RESTA = 4, MUL = 5, DIV = 6, 
                 LESS = 7, GREATER = 8, EQUAL = 9, NEQ = 10, EQEQ = 11, 
                 COMMA = 12, SEMI = 13, LBRACKET = 14, RBRACKET = 15, LINE_COMMENT = 16, 
                 START_BLOCK = 17, END_BLOCK = 18, STRING = 19, COMMENT = 20, 
                 IMPORT = 21, FUNC = 22, FOR = 23, WHILE = 24, DESDE = 25, 
                 HASTA = 26, EN = 27, COND = 28, ID = 29, NUM = 30, BOOL = 31, 
                 NADA = 32, RETURN = 33, WS = 34
	}

	public
	static let RULE_program = 0, RULE_stat = 1, RULE_expr = 2, RULE_array = 3, 
            RULE_variable = 4, RULE_funcParams = 5, RULE_funcDef = 6, RULE_funcArgs = 7, 
            RULE_funcCall = 8, RULE_iterar = 9, RULE_condicion = 10

	public
	static let ruleNames: [String] = [
		"program", "stat", "expr", "array", "variable", "funcParams", "funcDef", 
		"funcArgs", "funcCall", "iterar", "condicion"
	]

	private static let _LITERAL_NAMES: [String?] = [
		nil, "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'<'", "'>'", "'='", "'!='", 
		"'=='", "','", "';'", "'['", "']'", nil, "'{'", "'}'", nil, nil, "'importar'", 
		"'funcion'", "'iterar'", "'mientras'", "'desde'", "'hasta'", "'en'", nil, 
		nil, nil, nil, "'NADA'", "'retornar'"
	]
	private static let _SYMBOLIC_NAMES: [String?] = [
		nil, "LAPREN", "RPAREN", "ADD", "RESTA", "MUL", "DIV", "LESS", "GREATER", 
		"EQUAL", "NEQ", "EQEQ", "COMMA", "SEMI", "LBRACKET", "RBRACKET", "LINE_COMMENT", 
		"START_BLOCK", "END_BLOCK", "STRING", "COMMENT", "IMPORT", "FUNC", "FOR", 
		"WHILE", "DESDE", "HASTA", "EN", "COND", "ID", "NUM", "BOOL", "NADA", 
		"RETURN", "WS"
	]
	public
	static let VOCABULARY = Vocabulary(_LITERAL_NAMES, _SYMBOLIC_NAMES)

	override open
	func getGrammarFileName() -> String { return "VMParser.g4" }

	override open
	func getRuleNames() -> [String] { return VMParser.ruleNames }

	override open
	func getSerializedATN() -> [Int] { return VMParser._serializedATN }

	override open
	func getATN() -> ATN { return VMParser._ATN }


	override open
	func getVocabulary() -> Vocabulary {
	    return VMParser.VOCABULARY
	}

	override public
	init(_ input:TokenStream) throws {
	    RuntimeMetaData.checkVersion("4.13.2", RuntimeMetaData.VERSION)
		try super.init(input)
		_interp = ParserATNSimulator(self,VMParser._ATN,VMParser._decisionToDFA, VMParser._sharedContextCache)
	}


	public class ProgramContext: ParserRuleContext {
			open
			func EOF() -> TerminalNode? {
				return getToken(VMParser.Tokens.EOF.rawValue, 0)
			}
			open
			func stat() -> [StatContext] {
				return getRuleContexts(StatContext.self)
			}
			open
			func stat(_ i: Int) -> StatContext? {
				return getRuleContext(StatContext.self, i)
			}
		override open
		func getRuleIndex() -> Int {
			return VMParser.RULE_program
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitProgram(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitProgram(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	@discardableResult
	 open func program() throws -> ProgramContext {
		var _localctx: ProgramContext
		_localctx = ProgramContext(_ctx, getState())
		try enterRule(_localctx, 0, VMParser.RULE_program)
		var _la: Int = 0
		defer {
	    		try! exitRule()
	    }
		do {
		 	try enterOuterAlt(_localctx, 1)
		 	setState(25)
		 	try _errHandler.sync(self)
		 	_la = try _input.LA(1)
		 	while (((Int64(_la) & ~0x3f) == 0 && ((Int64(1) << _la) & 4207427586) != 0)) {
		 		setState(22)
		 		try stat()


		 		setState(27)
		 		try _errHandler.sync(self)
		 		_la = try _input.LA(1)
		 	}
		 	setState(28)
		 	try match(VMParser.Tokens.EOF.rawValue)

		}
		catch ANTLRException.recognition(let re) {
			_localctx.exception = re
			_errHandler.reportError(self, re)
			try _errHandler.recover(self, re)
		}

		return _localctx
	}

	public class StatContext: ParserRuleContext {
			open
			func variable() -> VariableContext? {
				return getRuleContext(VariableContext.self, 0)
			}
			open
			func SEMI() -> TerminalNode? {
				return getToken(VMParser.Tokens.SEMI.rawValue, 0)
			}
			open
			func expr() -> ExprContext? {
				return getRuleContext(ExprContext.self, 0)
			}
			open
			func funcDef() -> FuncDefContext? {
				return getRuleContext(FuncDefContext.self, 0)
			}
			open
			func iterar() -> IterarContext? {
				return getRuleContext(IterarContext.self, 0)
			}
			open
			func END_BLOCK() -> TerminalNode? {
				return getToken(VMParser.Tokens.END_BLOCK.rawValue, 0)
			}
			open
			func condicion() -> CondicionContext? {
				return getRuleContext(CondicionContext.self, 0)
			}
			open
			func array() -> ArrayContext? {
				return getRuleContext(ArrayContext.self, 0)
			}
		override open
		func getRuleIndex() -> Int {
			return VMParser.RULE_stat
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitStat(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitStat(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	@discardableResult
	 open func stat() throws -> StatContext {
		var _localctx: StatContext
		_localctx = StatContext(_ctx, getState())
		try enterRule(_localctx, 2, VMParser.RULE_stat)
		defer {
	    		try! exitRule()
	    }
		do {
		 	setState(46)
		 	try _errHandler.sync(self)
		 	switch(try getInterpreter().adaptivePredict(_input,1, _ctx)) {
		 	case 1:
		 		try enterOuterAlt(_localctx, 1)
		 		setState(30)
		 		try variable()
		 		setState(31)
		 		try match(VMParser.Tokens.SEMI.rawValue)

		 		break
		 	case 2:
		 		try enterOuterAlt(_localctx, 2)
		 		setState(33)
		 		try expr(0)
		 		setState(34)
		 		try match(VMParser.Tokens.SEMI.rawValue)

		 		break
		 	case 3:
		 		try enterOuterAlt(_localctx, 3)
		 		setState(36)
		 		try funcDef()

		 		break
		 	case 4:
		 		try enterOuterAlt(_localctx, 4)
		 		setState(37)
		 		try iterar()
		 		setState(38)
		 		try match(VMParser.Tokens.END_BLOCK.rawValue)

		 		break
		 	case 5:
		 		try enterOuterAlt(_localctx, 5)
		 		setState(40)
		 		try condicion()
		 		setState(41)
		 		try match(VMParser.Tokens.END_BLOCK.rawValue)

		 		break
		 	case 6:
		 		try enterOuterAlt(_localctx, 6)
		 		setState(43)
		 		try array()
		 		setState(44)
		 		try match(VMParser.Tokens.SEMI.rawValue)

		 		break
		 	default: break
		 	}
		}
		catch ANTLRException.recognition(let re) {
			_localctx.exception = re
			_errHandler.reportError(self, re)
			try _errHandler.recover(self, re)
		}

		return _localctx
	}


	public class ExprContext: ParserRuleContext {
		override open
		func getRuleIndex() -> Int {
			return VMParser.RULE_expr
		}
	}
	public class NumberContext: ExprContext {
			open
			func NUM() -> TerminalNode? {
				return getToken(VMParser.Tokens.NUM.rawValue, 0)
			}

		public
		init(_ ctx: ExprContext) {
			super.init()
			copyFrom(ctx)
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitNumber(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitNumber(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	public class EqExpContext: ExprContext {
		public var op: Token!
			open
			func expr() -> [ExprContext] {
				return getRuleContexts(ExprContext.self)
			}
			open
			func expr(_ i: Int) -> ExprContext? {
				return getRuleContext(ExprContext.self, i)
			}
			open
			func EQUAL() -> TerminalNode? {
				return getToken(VMParser.Tokens.EQUAL.rawValue, 0)
			}
			open
			func LESS() -> TerminalNode? {
				return getToken(VMParser.Tokens.LESS.rawValue, 0)
			}
			open
			func GREATER() -> TerminalNode? {
				return getToken(VMParser.Tokens.GREATER.rawValue, 0)
			}

		public
		init(_ ctx: ExprContext) {
			super.init()
			copyFrom(ctx)
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitEqExp(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitEqExp(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	public class BooleanContext: ExprContext {
			open
			func BOOL() -> TerminalNode? {
				return getToken(VMParser.Tokens.BOOL.rawValue, 0)
			}

		public
		init(_ ctx: ExprContext) {
			super.init()
			copyFrom(ctx)
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitBoolean(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitBoolean(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	public class AritExpContext: ExprContext {
		public var op: Token!
			open
			func expr() -> [ExprContext] {
				return getRuleContexts(ExprContext.self)
			}
			open
			func expr(_ i: Int) -> ExprContext? {
				return getRuleContext(ExprContext.self, i)
			}
			open
			func MUL() -> TerminalNode? {
				return getToken(VMParser.Tokens.MUL.rawValue, 0)
			}
			open
			func DIV() -> TerminalNode? {
				return getToken(VMParser.Tokens.DIV.rawValue, 0)
			}
			open
			func ADD() -> TerminalNode? {
				return getToken(VMParser.Tokens.ADD.rawValue, 0)
			}
			open
			func RESTA() -> TerminalNode? {
				return getToken(VMParser.Tokens.RESTA.rawValue, 0)
			}

		public
		init(_ ctx: ExprContext) {
			super.init()
			copyFrom(ctx)
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitAritExp(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitAritExp(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	public class StringContext: ExprContext {
			open
			func STRING() -> TerminalNode? {
				return getToken(VMParser.Tokens.STRING.rawValue, 0)
			}

		public
		init(_ ctx: ExprContext) {
			super.init()
			copyFrom(ctx)
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitString(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitString(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	public class ParenExpContext: ExprContext {
			open
			func LAPREN() -> TerminalNode? {
				return getToken(VMParser.Tokens.LAPREN.rawValue, 0)
			}
			open
			func expr() -> ExprContext? {
				return getRuleContext(ExprContext.self, 0)
			}
			open
			func RPAREN() -> TerminalNode? {
				return getToken(VMParser.Tokens.RPAREN.rawValue, 0)
			}

		public
		init(_ ctx: ExprContext) {
			super.init()
			copyFrom(ctx)
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitParenExp(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitParenExp(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	public class FCallContext: ExprContext {
			open
			func funcCall() -> FuncCallContext? {
				return getRuleContext(FuncCallContext.self, 0)
			}

		public
		init(_ ctx: ExprContext) {
			super.init()
			copyFrom(ctx)
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitFCall(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitFCall(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	public class IdContext: ExprContext {
			open
			func ID() -> TerminalNode? {
				return getToken(VMParser.Tokens.ID.rawValue, 0)
			}

		public
		init(_ ctx: ExprContext) {
			super.init()
			copyFrom(ctx)
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitId(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitId(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	public class NeqExpContext: ExprContext {
		public var op: Token!
			open
			func expr() -> [ExprContext] {
				return getRuleContexts(ExprContext.self)
			}
			open
			func expr(_ i: Int) -> ExprContext? {
				return getRuleContext(ExprContext.self, i)
			}
			open
			func NEQ() -> TerminalNode? {
				return getToken(VMParser.Tokens.NEQ.rawValue, 0)
			}

		public
		init(_ ctx: ExprContext) {
			super.init()
			copyFrom(ctx)
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitNeqExp(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitNeqExp(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	public class ArregloContext: ExprContext {
			open
			func array() -> ArrayContext? {
				return getRuleContext(ArrayContext.self, 0)
			}

		public
		init(_ ctx: ExprContext) {
			super.init()
			copyFrom(ctx)
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitArreglo(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitArreglo(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	public class EqEqExpContext: ExprContext {
		public var op: Token!
			open
			func expr() -> [ExprContext] {
				return getRuleContexts(ExprContext.self)
			}
			open
			func expr(_ i: Int) -> ExprContext? {
				return getRuleContext(ExprContext.self, i)
			}
			open
			func EQEQ() -> TerminalNode? {
				return getToken(VMParser.Tokens.EQEQ.rawValue, 0)
			}

		public
		init(_ ctx: ExprContext) {
			super.init()
			copyFrom(ctx)
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitEqEqExp(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitEqEqExp(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}

	 public final  func expr( ) throws -> ExprContext   {
		return try expr(0)
	}
	@discardableResult
	private func expr(_ _p: Int) throws -> ExprContext   {
		let _parentctx: ParserRuleContext? = _ctx
		let _parentState: Int = getState()
		var _localctx: ExprContext
		_localctx = ExprContext(_ctx, _parentState)
		var _prevctx: ExprContext = _localctx
		let _startState: Int = 4
		try enterRecursionRule(_localctx, 4, VMParser.RULE_expr, _p)
		var _la: Int = 0
		defer {
	    		try! unrollRecursionContexts(_parentctx)
	    }
		do {
			var _alt: Int
			try enterOuterAlt(_localctx, 1)
			setState(59)
			try _errHandler.sync(self)
			switch(try getInterpreter().adaptivePredict(_input,2, _ctx)) {
			case 1:
				_localctx = NumberContext(_localctx)
				_ctx = _localctx
				_prevctx = _localctx

				setState(49)
				try match(VMParser.Tokens.NUM.rawValue)

				break
			case 2:
				_localctx = BooleanContext(_localctx)
				_ctx = _localctx
				_prevctx = _localctx
				setState(50)
				try match(VMParser.Tokens.BOOL.rawValue)

				break
			case 3:
				_localctx = StringContext(_localctx)
				_ctx = _localctx
				_prevctx = _localctx
				setState(51)
				try match(VMParser.Tokens.STRING.rawValue)

				break
			case 4:
				_localctx = IdContext(_localctx)
				_ctx = _localctx
				_prevctx = _localctx
				setState(52)
				try match(VMParser.Tokens.ID.rawValue)

				break
			case 5:
				_localctx = ParenExpContext(_localctx)
				_ctx = _localctx
				_prevctx = _localctx
				setState(53)
				try match(VMParser.Tokens.LAPREN.rawValue)
				setState(54)
				try expr(0)
				setState(55)
				try match(VMParser.Tokens.RPAREN.rawValue)

				break
			case 6:
				_localctx = FCallContext(_localctx)
				_ctx = _localctx
				_prevctx = _localctx
				setState(57)
				try funcCall()

				break
			case 7:
				_localctx = ArregloContext(_localctx)
				_ctx = _localctx
				_prevctx = _localctx
				setState(58)
				try array()

				break
			default: break
			}
			_ctx!.stop = try _input.LT(-1)
			setState(76)
			try _errHandler.sync(self)
			_alt = try getInterpreter().adaptivePredict(_input,4,_ctx)
			while (_alt != 2 && _alt != ATN.INVALID_ALT_NUMBER) {
				if ( _alt==1 ) {
					if _parseListeners != nil {
					   try triggerExitRuleEvent()
					}
					_prevctx = _localctx
					setState(74)
					try _errHandler.sync(self)
					switch(try getInterpreter().adaptivePredict(_input,3, _ctx)) {
					case 1:
						_localctx = AritExpContext(  ExprContext(_parentctx, _parentState))
						try pushNewRecursionContext(_localctx, _startState, VMParser.RULE_expr)
						setState(61)
						if (!(precpred(_ctx, 6))) {
						    throw ANTLRException.recognition(e:FailedPredicateException(self, "precpred(_ctx, 6)"))
						}
						setState(62)
						_localctx.castdown(AritExpContext.self).op = try _input.LT(1)
						_la = try _input.LA(1)
						if (!(((Int64(_la) & ~0x3f) == 0 && ((Int64(1) << _la) & 120) != 0))) {
							_localctx.castdown(AritExpContext.self).op = try _errHandler.recoverInline(self) as Token
						}
						else {
							_errHandler.reportMatch(self)
							try consume()
						}
						setState(63)
						try expr(7)

						break
					case 2:
						_localctx = EqEqExpContext(  ExprContext(_parentctx, _parentState))
						try pushNewRecursionContext(_localctx, _startState, VMParser.RULE_expr)
						setState(64)
						if (!(precpred(_ctx, 5))) {
						    throw ANTLRException.recognition(e:FailedPredicateException(self, "precpred(_ctx, 5)"))
						}
						setState(65)
						try {
								let assignmentValue = try match(VMParser.Tokens.EQEQ.rawValue)
								_localctx.castdown(EqEqExpContext.self).op = assignmentValue
						     }()

						setState(66)
						try expr(6)

						break
					case 3:
						_localctx = EqExpContext(  ExprContext(_parentctx, _parentState))
						try pushNewRecursionContext(_localctx, _startState, VMParser.RULE_expr)
						setState(67)
						if (!(precpred(_ctx, 4))) {
						    throw ANTLRException.recognition(e:FailedPredicateException(self, "precpred(_ctx, 4)"))
						}
						setState(68)
						_localctx.castdown(EqExpContext.self).op = try _input.LT(1)
						_la = try _input.LA(1)
						if (!(_la == VMParser.Tokens.LESS.rawValue || _la == VMParser.Tokens.GREATER.rawValue)) {
							_localctx.castdown(EqExpContext.self).op = try _errHandler.recoverInline(self) as Token
						}
						else {
							_errHandler.reportMatch(self)
							try consume()
						}
						setState(69)
						try match(VMParser.Tokens.EQUAL.rawValue)
						setState(70)
						try expr(5)

						break
					case 4:
						_localctx = NeqExpContext(  ExprContext(_parentctx, _parentState))
						try pushNewRecursionContext(_localctx, _startState, VMParser.RULE_expr)
						setState(71)
						if (!(precpred(_ctx, 3))) {
						    throw ANTLRException.recognition(e:FailedPredicateException(self, "precpred(_ctx, 3)"))
						}
						setState(72)
						try {
								let assignmentValue = try match(VMParser.Tokens.NEQ.rawValue)
								_localctx.castdown(NeqExpContext.self).op = assignmentValue
						     }()

						setState(73)
						try expr(4)

						break
					default: break
					}
			 
				}
				setState(78)
				try _errHandler.sync(self)
				_alt = try getInterpreter().adaptivePredict(_input,4,_ctx)
			}

		}
		catch ANTLRException.recognition(let re) {
			_localctx.exception = re
			_errHandler.reportError(self, re)
			try _errHandler.recover(self, re)
		}

		return _localctx;
	}

	public class ArrayContext: ParserRuleContext {
			open
			func LBRACKET() -> TerminalNode? {
				return getToken(VMParser.Tokens.LBRACKET.rawValue, 0)
			}
			open
			func RBRACKET() -> TerminalNode? {
				return getToken(VMParser.Tokens.RBRACKET.rawValue, 0)
			}
			open
			func expr() -> [ExprContext] {
				return getRuleContexts(ExprContext.self)
			}
			open
			func expr(_ i: Int) -> ExprContext? {
				return getRuleContext(ExprContext.self, i)
			}
			open
			func COMMA() -> [TerminalNode] {
				return getTokens(VMParser.Tokens.COMMA.rawValue)
			}
			open
			func COMMA(_ i:Int) -> TerminalNode? {
				return getToken(VMParser.Tokens.COMMA.rawValue, i)
			}
		override open
		func getRuleIndex() -> Int {
			return VMParser.RULE_array
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitArray(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitArray(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	@discardableResult
	 open func array() throws -> ArrayContext {
		var _localctx: ArrayContext
		_localctx = ArrayContext(_ctx, getState())
		try enterRule(_localctx, 6, VMParser.RULE_array)
		var _la: Int = 0
		defer {
	    		try! exitRule()
	    }
		do {
		 	try enterOuterAlt(_localctx, 1)
		 	setState(79)
		 	try match(VMParser.Tokens.LBRACKET.rawValue)
		 	setState(88)
		 	try _errHandler.sync(self)
		 	_la = try _input.LA(1)
		 	if (((Int64(_la) & ~0x3f) == 0 && ((Int64(1) << _la) & 3758637058) != 0)) {
		 		setState(80)
		 		try expr(0)
		 		setState(85)
		 		try _errHandler.sync(self)
		 		_la = try _input.LA(1)
		 		while (_la == VMParser.Tokens.COMMA.rawValue) {
		 			setState(81)
		 			try match(VMParser.Tokens.COMMA.rawValue)
		 			setState(82)
		 			try expr(0)


		 			setState(87)
		 			try _errHandler.sync(self)
		 			_la = try _input.LA(1)
		 		}

		 	}

		 	setState(90)
		 	try match(VMParser.Tokens.RBRACKET.rawValue)

		}
		catch ANTLRException.recognition(let re) {
			_localctx.exception = re
			_errHandler.reportError(self, re)
			try _errHandler.recover(self, re)
		}

		return _localctx
	}

	public class VariableContext: ParserRuleContext {
			open
			func ID() -> TerminalNode? {
				return getToken(VMParser.Tokens.ID.rawValue, 0)
			}
			open
			func EQUAL() -> TerminalNode? {
				return getToken(VMParser.Tokens.EQUAL.rawValue, 0)
			}
			open
			func expr() -> ExprContext? {
				return getRuleContext(ExprContext.self, 0)
			}
		override open
		func getRuleIndex() -> Int {
			return VMParser.RULE_variable
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitVariable(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitVariable(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	@discardableResult
	 open func variable() throws -> VariableContext {
		var _localctx: VariableContext
		_localctx = VariableContext(_ctx, getState())
		try enterRule(_localctx, 8, VMParser.RULE_variable)
		defer {
	    		try! exitRule()
	    }
		do {
		 	try enterOuterAlt(_localctx, 1)
		 	setState(92)
		 	try match(VMParser.Tokens.ID.rawValue)
		 	setState(93)
		 	try match(VMParser.Tokens.EQUAL.rawValue)
		 	setState(94)
		 	try expr(0)

		}
		catch ANTLRException.recognition(let re) {
			_localctx.exception = re
			_errHandler.reportError(self, re)
			try _errHandler.recover(self, re)
		}

		return _localctx
	}

	public class FuncParamsContext: ParserRuleContext {
			open
			func ID() -> [TerminalNode] {
				return getTokens(VMParser.Tokens.ID.rawValue)
			}
			open
			func ID(_ i:Int) -> TerminalNode? {
				return getToken(VMParser.Tokens.ID.rawValue, i)
			}
			open
			func COMMA() -> [TerminalNode] {
				return getTokens(VMParser.Tokens.COMMA.rawValue)
			}
			open
			func COMMA(_ i:Int) -> TerminalNode? {
				return getToken(VMParser.Tokens.COMMA.rawValue, i)
			}
		override open
		func getRuleIndex() -> Int {
			return VMParser.RULE_funcParams
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitFuncParams(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitFuncParams(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	@discardableResult
	 open func funcParams() throws -> FuncParamsContext {
		var _localctx: FuncParamsContext
		_localctx = FuncParamsContext(_ctx, getState())
		try enterRule(_localctx, 10, VMParser.RULE_funcParams)
		var _la: Int = 0
		defer {
	    		try! exitRule()
	    }
		do {
		 	try enterOuterAlt(_localctx, 1)
		 	setState(96)
		 	try match(VMParser.Tokens.ID.rawValue)
		 	setState(101)
		 	try _errHandler.sync(self)
		 	_la = try _input.LA(1)
		 	while (_la == VMParser.Tokens.COMMA.rawValue) {
		 		setState(97)
		 		try match(VMParser.Tokens.COMMA.rawValue)
		 		setState(98)
		 		try match(VMParser.Tokens.ID.rawValue)


		 		setState(103)
		 		try _errHandler.sync(self)
		 		_la = try _input.LA(1)
		 	}

		}
		catch ANTLRException.recognition(let re) {
			_localctx.exception = re
			_errHandler.reportError(self, re)
			try _errHandler.recover(self, re)
		}

		return _localctx
	}

	public class FuncDefContext: ParserRuleContext {
			open
			func FUNC() -> TerminalNode? {
				return getToken(VMParser.Tokens.FUNC.rawValue, 0)
			}
			open
			func ID() -> TerminalNode? {
				return getToken(VMParser.Tokens.ID.rawValue, 0)
			}
			open
			func LAPREN() -> TerminalNode? {
				return getToken(VMParser.Tokens.LAPREN.rawValue, 0)
			}
			open
			func funcParams() -> FuncParamsContext? {
				return getRuleContext(FuncParamsContext.self, 0)
			}
			open
			func RPAREN() -> TerminalNode? {
				return getToken(VMParser.Tokens.RPAREN.rawValue, 0)
			}
			open
			func START_BLOCK() -> TerminalNode? {
				return getToken(VMParser.Tokens.START_BLOCK.rawValue, 0)
			}
			open
			func END_BLOCK() -> TerminalNode? {
				return getToken(VMParser.Tokens.END_BLOCK.rawValue, 0)
			}
			open
			func stat() -> [StatContext] {
				return getRuleContexts(StatContext.self)
			}
			open
			func stat(_ i: Int) -> StatContext? {
				return getRuleContext(StatContext.self, i)
			}
		override open
		func getRuleIndex() -> Int {
			return VMParser.RULE_funcDef
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitFuncDef(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitFuncDef(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	@discardableResult
	 open func funcDef() throws -> FuncDefContext {
		var _localctx: FuncDefContext
		_localctx = FuncDefContext(_ctx, getState())
		try enterRule(_localctx, 12, VMParser.RULE_funcDef)
		var _la: Int = 0
		defer {
	    		try! exitRule()
	    }
		do {
		 	try enterOuterAlt(_localctx, 1)
		 	setState(104)
		 	try match(VMParser.Tokens.FUNC.rawValue)
		 	setState(105)
		 	try match(VMParser.Tokens.ID.rawValue)
		 	setState(106)
		 	try match(VMParser.Tokens.LAPREN.rawValue)
		 	setState(107)
		 	try funcParams()
		 	setState(108)
		 	try match(VMParser.Tokens.RPAREN.rawValue)
		 	setState(109)
		 	try match(VMParser.Tokens.START_BLOCK.rawValue)
		 	setState(113)
		 	try _errHandler.sync(self)
		 	_la = try _input.LA(1)
		 	while (((Int64(_la) & ~0x3f) == 0 && ((Int64(1) << _la) & 4207427586) != 0)) {
		 		setState(110)
		 		try stat()


		 		setState(115)
		 		try _errHandler.sync(self)
		 		_la = try _input.LA(1)
		 	}
		 	setState(116)
		 	try match(VMParser.Tokens.END_BLOCK.rawValue)

		}
		catch ANTLRException.recognition(let re) {
			_localctx.exception = re
			_errHandler.reportError(self, re)
			try _errHandler.recover(self, re)
		}

		return _localctx
	}

	public class FuncArgsContext: ParserRuleContext {
			open
			func expr() -> [ExprContext] {
				return getRuleContexts(ExprContext.self)
			}
			open
			func expr(_ i: Int) -> ExprContext? {
				return getRuleContext(ExprContext.self, i)
			}
			open
			func COMMA() -> [TerminalNode] {
				return getTokens(VMParser.Tokens.COMMA.rawValue)
			}
			open
			func COMMA(_ i:Int) -> TerminalNode? {
				return getToken(VMParser.Tokens.COMMA.rawValue, i)
			}
		override open
		func getRuleIndex() -> Int {
			return VMParser.RULE_funcArgs
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitFuncArgs(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitFuncArgs(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	@discardableResult
	 open func funcArgs() throws -> FuncArgsContext {
		var _localctx: FuncArgsContext
		_localctx = FuncArgsContext(_ctx, getState())
		try enterRule(_localctx, 14, VMParser.RULE_funcArgs)
		var _la: Int = 0
		defer {
	    		try! exitRule()
	    }
		do {
		 	try enterOuterAlt(_localctx, 1)
		 	setState(118)
		 	try expr(0)
		 	setState(123)
		 	try _errHandler.sync(self)
		 	_la = try _input.LA(1)
		 	while (_la == VMParser.Tokens.COMMA.rawValue) {
		 		setState(119)
		 		try match(VMParser.Tokens.COMMA.rawValue)
		 		setState(120)
		 		try expr(0)


		 		setState(125)
		 		try _errHandler.sync(self)
		 		_la = try _input.LA(1)
		 	}

		}
		catch ANTLRException.recognition(let re) {
			_localctx.exception = re
			_errHandler.reportError(self, re)
			try _errHandler.recover(self, re)
		}

		return _localctx
	}

	public class FuncCallContext: ParserRuleContext {
			open
			func ID() -> TerminalNode? {
				return getToken(VMParser.Tokens.ID.rawValue, 0)
			}
			open
			func LAPREN() -> TerminalNode? {
				return getToken(VMParser.Tokens.LAPREN.rawValue, 0)
			}
			open
			func funcArgs() -> FuncArgsContext? {
				return getRuleContext(FuncArgsContext.self, 0)
			}
			open
			func RPAREN() -> TerminalNode? {
				return getToken(VMParser.Tokens.RPAREN.rawValue, 0)
			}
		override open
		func getRuleIndex() -> Int {
			return VMParser.RULE_funcCall
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitFuncCall(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitFuncCall(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	@discardableResult
	 open func funcCall() throws -> FuncCallContext {
		var _localctx: FuncCallContext
		_localctx = FuncCallContext(_ctx, getState())
		try enterRule(_localctx, 16, VMParser.RULE_funcCall)
		defer {
	    		try! exitRule()
	    }
		do {
		 	try enterOuterAlt(_localctx, 1)
		 	setState(126)
		 	try match(VMParser.Tokens.ID.rawValue)
		 	setState(127)
		 	try match(VMParser.Tokens.LAPREN.rawValue)
		 	setState(128)
		 	try funcArgs()
		 	setState(129)
		 	try match(VMParser.Tokens.RPAREN.rawValue)

		}
		catch ANTLRException.recognition(let re) {
			_localctx.exception = re
			_errHandler.reportError(self, re)
			try _errHandler.recover(self, re)
		}

		return _localctx
	}

	public class IterarContext: ParserRuleContext {
		open var i: Token!
		open var f: Token!
			open
			func FOR() -> TerminalNode? {
				return getToken(VMParser.Tokens.FOR.rawValue, 0)
			}
			open
			func DESDE() -> TerminalNode? {
				return getToken(VMParser.Tokens.DESDE.rawValue, 0)
			}
			open
			func HASTA() -> TerminalNode? {
				return getToken(VMParser.Tokens.HASTA.rawValue, 0)
			}
			open
			func NUM() -> [TerminalNode] {
				return getTokens(VMParser.Tokens.NUM.rawValue)
			}
			open
			func NUM(_ i:Int) -> TerminalNode? {
				return getToken(VMParser.Tokens.NUM.rawValue, i)
			}
			open
			func ID() -> [TerminalNode] {
				return getTokens(VMParser.Tokens.ID.rawValue)
			}
			open
			func ID(_ i:Int) -> TerminalNode? {
				return getToken(VMParser.Tokens.ID.rawValue, i)
			}
			open
			func EN() -> TerminalNode? {
				return getToken(VMParser.Tokens.EN.rawValue, 0)
			}
			open
			func array() -> ArrayContext? {
				return getRuleContext(ArrayContext.self, 0)
			}
		override open
		func getRuleIndex() -> Int {
			return VMParser.RULE_iterar
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitIterar(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitIterar(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	@discardableResult
	 open func iterar() throws -> IterarContext {
		var _localctx: IterarContext
		_localctx = IterarContext(_ctx, getState())
		try enterRule(_localctx, 18, VMParser.RULE_iterar)
		var _la: Int = 0
		defer {
	    		try! exitRule()
	    }
		do {
		 	setState(141)
		 	try _errHandler.sync(self)
		 	switch (VMParser.Tokens(rawValue: try _input.LA(1))!) {
		 	case .FOR:
		 		try enterOuterAlt(_localctx, 1)
		 		setState(131)
		 		try match(VMParser.Tokens.FOR.rawValue)

		 		break

		 	case .DESDE:
		 		try enterOuterAlt(_localctx, 2)
		 		setState(132)
		 		try match(VMParser.Tokens.DESDE.rawValue)
		 		setState(133)
		 		_localctx.castdown(IterarContext.self).i = try _input.LT(1)
		 		_la = try _input.LA(1)
		 		if (!(_la == VMParser.Tokens.ID.rawValue || _la == VMParser.Tokens.NUM.rawValue)) {
		 			_localctx.castdown(IterarContext.self).i = try _errHandler.recoverInline(self) as Token
		 		}
		 		else {
		 			_errHandler.reportMatch(self)
		 			try consume()
		 		}
		 		setState(134)
		 		try match(VMParser.Tokens.HASTA.rawValue)
		 		setState(135)
		 		_localctx.castdown(IterarContext.self).f = try _input.LT(1)
		 		_la = try _input.LA(1)
		 		if (!(_la == VMParser.Tokens.ID.rawValue || _la == VMParser.Tokens.NUM.rawValue)) {
		 			_localctx.castdown(IterarContext.self).f = try _errHandler.recoverInline(self) as Token
		 		}
		 		else {
		 			_errHandler.reportMatch(self)
		 			try consume()
		 		}

		 		break

		 	case .EN:
		 		try enterOuterAlt(_localctx, 3)
		 		setState(136)
		 		try match(VMParser.Tokens.EN.rawValue)
		 		setState(139)
		 		try _errHandler.sync(self)
		 		switch (VMParser.Tokens(rawValue: try _input.LA(1))!) {
		 		case .ID:
		 			setState(137)
		 			try match(VMParser.Tokens.ID.rawValue)

		 			break

		 		case .LBRACKET:
		 			setState(138)
		 			try array()

		 			break
		 		default:
		 			throw ANTLRException.recognition(e: NoViableAltException(self))
		 		}

		 		break
		 	default:
		 		throw ANTLRException.recognition(e: NoViableAltException(self))
		 	}
		}
		catch ANTLRException.recognition(let re) {
			_localctx.exception = re
			_errHandler.reportError(self, re)
			try _errHandler.recover(self, re)
		}

		return _localctx
	}

	public class CondicionContext: ParserRuleContext {
			open
			func COND() -> [TerminalNode] {
				return getTokens(VMParser.Tokens.COND.rawValue)
			}
			open
			func COND(_ i:Int) -> TerminalNode? {
				return getToken(VMParser.Tokens.COND.rawValue, i)
			}
			open
			func expr() -> ExprContext? {
				return getRuleContext(ExprContext.self, 0)
			}
			open
			func START_BLOCK() -> [TerminalNode] {
				return getTokens(VMParser.Tokens.START_BLOCK.rawValue)
			}
			open
			func START_BLOCK(_ i:Int) -> TerminalNode? {
				return getToken(VMParser.Tokens.START_BLOCK.rawValue, i)
			}
			open
			func END_BLOCK() -> [TerminalNode] {
				return getTokens(VMParser.Tokens.END_BLOCK.rawValue)
			}
			open
			func END_BLOCK(_ i:Int) -> TerminalNode? {
				return getToken(VMParser.Tokens.END_BLOCK.rawValue, i)
			}
			open
			func stat() -> [StatContext] {
				return getRuleContexts(StatContext.self)
			}
			open
			func stat(_ i: Int) -> StatContext? {
				return getRuleContext(StatContext.self, i)
			}
		override open
		func getRuleIndex() -> Int {
			return VMParser.RULE_condicion
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? VMParserVisitor {
			    return visitor.visitCondicion(self)
			}
			else if let visitor = visitor as? VMParserBaseVisitor {
			    return visitor.visitCondicion(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	@discardableResult
	 open func condicion() throws -> CondicionContext {
		var _localctx: CondicionContext
		_localctx = CondicionContext(_ctx, getState())
		try enterRule(_localctx, 20, VMParser.RULE_condicion)
		var _la: Int = 0
		defer {
	    		try! exitRule()
	    }
		do {
		 	try enterOuterAlt(_localctx, 1)
		 	setState(143)
		 	try match(VMParser.Tokens.COND.rawValue)
		 	setState(144)
		 	try expr(0)
		 	setState(145)
		 	try match(VMParser.Tokens.START_BLOCK.rawValue)
		 	setState(149)
		 	try _errHandler.sync(self)
		 	_la = try _input.LA(1)
		 	while (((Int64(_la) & ~0x3f) == 0 && ((Int64(1) << _la) & 4207427586) != 0)) {
		 		setState(146)
		 		try stat()


		 		setState(151)
		 		try _errHandler.sync(self)
		 		_la = try _input.LA(1)
		 	}
		 	setState(152)
		 	try match(VMParser.Tokens.END_BLOCK.rawValue)
		 	setState(162)
		 	try _errHandler.sync(self)
		 	_la = try _input.LA(1)
		 	if (_la == VMParser.Tokens.COND.rawValue) {
		 		setState(153)
		 		try match(VMParser.Tokens.COND.rawValue)
		 		setState(154)
		 		try match(VMParser.Tokens.START_BLOCK.rawValue)
		 		setState(158)
		 		try _errHandler.sync(self)
		 		_la = try _input.LA(1)
		 		while (((Int64(_la) & ~0x3f) == 0 && ((Int64(1) << _la) & 4207427586) != 0)) {
		 			setState(155)
		 			try stat()


		 			setState(160)
		 			try _errHandler.sync(self)
		 			_la = try _input.LA(1)
		 		}
		 		setState(161)
		 		try match(VMParser.Tokens.END_BLOCK.rawValue)

		 	}


		}
		catch ANTLRException.recognition(let re) {
			_localctx.exception = re
			_errHandler.reportError(self, re)
			try _errHandler.recover(self, re)
		}

		return _localctx
	}

	override open
	func sempred(_ _localctx: RuleContext?, _ ruleIndex: Int,  _ predIndex: Int)throws -> Bool {
		switch (ruleIndex) {
		case  2:
			return try expr_sempred(_localctx?.castdown(ExprContext.self), predIndex)
	    default: return true
		}
	}
	private func expr_sempred(_ _localctx: ExprContext!,  _ predIndex: Int) throws -> Bool {
		switch (predIndex) {
		    case 0:return precpred(_ctx, 6)
		    case 1:return precpred(_ctx, 5)
		    case 2:return precpred(_ctx, 4)
		    case 3:return precpred(_ctx, 3)
		    default: return true
		}
	}

	static let _serializedATN:[Int] = [
		4,1,34,165,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
		7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,5,0,24,8,0,10,0,12,0,27,9,0,1,0,1,0,
		1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,47,
		8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,60,8,2,1,2,1,2,1,2,
		1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,75,8,2,10,2,12,2,78,9,2,1,
		3,1,3,1,3,1,3,5,3,84,8,3,10,3,12,3,87,9,3,3,3,89,8,3,1,3,1,3,1,4,1,4,1,
		4,1,4,1,5,1,5,1,5,5,5,100,8,5,10,5,12,5,103,9,5,1,6,1,6,1,6,1,6,1,6,1,
		6,1,6,5,6,112,8,6,10,6,12,6,115,9,6,1,6,1,6,1,7,1,7,1,7,5,7,122,8,7,10,
		7,12,7,125,9,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,
		140,8,9,3,9,142,8,9,1,10,1,10,1,10,1,10,5,10,148,8,10,10,10,12,10,151,
		9,10,1,10,1,10,1,10,1,10,5,10,157,8,10,10,10,12,10,160,9,10,1,10,3,10,
		163,8,10,1,10,0,1,4,11,0,2,4,6,8,10,12,14,16,18,20,0,3,1,0,3,6,1,0,7,8,
		1,0,29,30,180,0,25,1,0,0,0,2,46,1,0,0,0,4,59,1,0,0,0,6,79,1,0,0,0,8,92,
		1,0,0,0,10,96,1,0,0,0,12,104,1,0,0,0,14,118,1,0,0,0,16,126,1,0,0,0,18,
		141,1,0,0,0,20,143,1,0,0,0,22,24,3,2,1,0,23,22,1,0,0,0,24,27,1,0,0,0,25,
		23,1,0,0,0,25,26,1,0,0,0,26,28,1,0,0,0,27,25,1,0,0,0,28,29,5,0,0,1,29,
		1,1,0,0,0,30,31,3,8,4,0,31,32,5,13,0,0,32,47,1,0,0,0,33,34,3,4,2,0,34,
		35,5,13,0,0,35,47,1,0,0,0,36,47,3,12,6,0,37,38,3,18,9,0,38,39,5,18,0,0,
		39,47,1,0,0,0,40,41,3,20,10,0,41,42,5,18,0,0,42,47,1,0,0,0,43,44,3,6,3,
		0,44,45,5,13,0,0,45,47,1,0,0,0,46,30,1,0,0,0,46,33,1,0,0,0,46,36,1,0,0,
		0,46,37,1,0,0,0,46,40,1,0,0,0,46,43,1,0,0,0,47,3,1,0,0,0,48,49,6,2,-1,
		0,49,60,5,30,0,0,50,60,5,31,0,0,51,60,5,19,0,0,52,60,5,29,0,0,53,54,5,
		1,0,0,54,55,3,4,2,0,55,56,5,2,0,0,56,60,1,0,0,0,57,60,3,16,8,0,58,60,3,
		6,3,0,59,48,1,0,0,0,59,50,1,0,0,0,59,51,1,0,0,0,59,52,1,0,0,0,59,53,1,
		0,0,0,59,57,1,0,0,0,59,58,1,0,0,0,60,76,1,0,0,0,61,62,10,6,0,0,62,63,7,
		0,0,0,63,75,3,4,2,7,64,65,10,5,0,0,65,66,5,11,0,0,66,75,3,4,2,6,67,68,
		10,4,0,0,68,69,7,1,0,0,69,70,5,9,0,0,70,75,3,4,2,5,71,72,10,3,0,0,72,73,
		5,10,0,0,73,75,3,4,2,4,74,61,1,0,0,0,74,64,1,0,0,0,74,67,1,0,0,0,74,71,
		1,0,0,0,75,78,1,0,0,0,76,74,1,0,0,0,76,77,1,0,0,0,77,5,1,0,0,0,78,76,1,
		0,0,0,79,88,5,14,0,0,80,85,3,4,2,0,81,82,5,12,0,0,82,84,3,4,2,0,83,81,
		1,0,0,0,84,87,1,0,0,0,85,83,1,0,0,0,85,86,1,0,0,0,86,89,1,0,0,0,87,85,
		1,0,0,0,88,80,1,0,0,0,88,89,1,0,0,0,89,90,1,0,0,0,90,91,5,15,0,0,91,7,
		1,0,0,0,92,93,5,29,0,0,93,94,5,9,0,0,94,95,3,4,2,0,95,9,1,0,0,0,96,101,
		5,29,0,0,97,98,5,12,0,0,98,100,5,29,0,0,99,97,1,0,0,0,100,103,1,0,0,0,
		101,99,1,0,0,0,101,102,1,0,0,0,102,11,1,0,0,0,103,101,1,0,0,0,104,105,
		5,22,0,0,105,106,5,29,0,0,106,107,5,1,0,0,107,108,3,10,5,0,108,109,5,2,
		0,0,109,113,5,17,0,0,110,112,3,2,1,0,111,110,1,0,0,0,112,115,1,0,0,0,113,
		111,1,0,0,0,113,114,1,0,0,0,114,116,1,0,0,0,115,113,1,0,0,0,116,117,5,
		18,0,0,117,13,1,0,0,0,118,123,3,4,2,0,119,120,5,12,0,0,120,122,3,4,2,0,
		121,119,1,0,0,0,122,125,1,0,0,0,123,121,1,0,0,0,123,124,1,0,0,0,124,15,
		1,0,0,0,125,123,1,0,0,0,126,127,5,29,0,0,127,128,5,1,0,0,128,129,3,14,
		7,0,129,130,5,2,0,0,130,17,1,0,0,0,131,142,5,23,0,0,132,133,5,25,0,0,133,
		134,7,2,0,0,134,135,5,26,0,0,135,142,7,2,0,0,136,139,5,27,0,0,137,140,
		5,29,0,0,138,140,3,6,3,0,139,137,1,0,0,0,139,138,1,0,0,0,140,142,1,0,0,
		0,141,131,1,0,0,0,141,132,1,0,0,0,141,136,1,0,0,0,142,19,1,0,0,0,143,144,
		5,28,0,0,144,145,3,4,2,0,145,149,5,17,0,0,146,148,3,2,1,0,147,146,1,0,
		0,0,148,151,1,0,0,0,149,147,1,0,0,0,149,150,1,0,0,0,150,152,1,0,0,0,151,
		149,1,0,0,0,152,162,5,18,0,0,153,154,5,28,0,0,154,158,5,17,0,0,155,157,
		3,2,1,0,156,155,1,0,0,0,157,160,1,0,0,0,158,156,1,0,0,0,158,159,1,0,0,
		0,159,161,1,0,0,0,160,158,1,0,0,0,161,163,5,18,0,0,162,153,1,0,0,0,162,
		163,1,0,0,0,163,21,1,0,0,0,15,25,46,59,74,76,85,88,101,113,123,139,141,
		149,158,162
	]

	public
	static let _ATN = try! ATNDeserializer().deserialize(_serializedATN)
}