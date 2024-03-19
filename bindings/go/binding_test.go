package tree_sitter_fishshell_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-fishshell"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_fishshell.Language())
	if language == nil {
		t.Errorf("Error loading Fishshell grammar")
	}
}
