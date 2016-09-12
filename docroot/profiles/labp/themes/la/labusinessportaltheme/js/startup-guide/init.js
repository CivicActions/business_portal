/**
 * @file
 * A JavaScript file for the startup guide.
 *
 */

(function ($, Drupal, window, document, undefined) {
  $(document).ready(function() {
    if($('#lacity_wizard').length > 0) {
      var $wrapper = $('#lacity_wizard');
      var wizardData;
      jsonURL = '/api/json/business-portal-wizard';
      $.getJSON(jsonURL, function(results) {
        if(results) {
          wizardData = results;
          _render_wizard();
        } else {
          alert('Error occured while getting wizard data.');
        }
      });
    }

    _render_wizard = function() {
      $wrapper.empty();

      //extarct the start screen and start renderin wizard
      nodes = getObjects(wizardData, "screen-type", "start");
      _render_node({nid:nodes[0]["Nid"]});
    };


    _render_node = function(options) {
      nodes = getObjects(wizardData, "Nid", options.nid);
      node = nodes[0];
      screen_type = node["screen-type"];
      options.display = options.display || "append";

      if(screen_type === 'start') {
        _render_startScreen(node);
      } else if(screen_type === 'section') {
        _render_screen_section(node);
      } else if(screen_type === 'question') {
        _render_screen_question(node);
      } else if(screen_type === 'contextual help') {
        _render_contextual_help(node);
      } else if(screen_type === 'confirmation') {
        _render_confirmation(node);
      }
    };

    _render_startScreen = function(node) {
      var nnid = node.buttons[0]["Destination Screen"]["target_id"];
      
      var $myDiv = $('<div id="nid-'+node["Nid"]+'" class="wizard-node node-'+node["screen-type"]+'">');
      $myDiv.css({'background-color' : '#'+node["Primary Color"]});
      $container = $('<div class="container">');
//      $container.append('<div class="wizard__header--title">'+node["title"]+'</div>');
      $container.append('<div class="wizard__header--title">Welcome to the <br /><strong>Startup Guide</strong></div>');
      
      $container.append('<div class="node-description">'+node["Description"]+'</div>');

//nnid
      $buttonStart = $('<a href="#start" class="start__wizard">The assistant is estimated to take 10 to 15 minutes. Please scroll down to start creating your checklist.</a>');
      $buttonStart.click(function(e) {
        e.preventDefault();
        scrollToElement($('#nid-'+nnid), 400, -100);
      });
      $nodeInfo = $('<div class="node-info">');
      $nodeInfo.append($buttonStart);
      $container.append($nodeInfo);
      $myDiv.append($container);
      $wrapper.append($myDiv);
      
      scrollToElement($('#nid-'+nodes[0]["Nid"]), 400, -100);

      
      _render_node({nid:nnid});
    };

    _render_screen_section = function(node) {
      var $myDiv = $('<div id="nid-'+node["Nid"]+'" class="wizard-node node-'+node["screen-type"]+'">');
      $myDiv.css({'background-color' : '#'+node["Primary Color"]});

      $container = $('<div class="container">');
      $container.append('<div class="wizard__header--title-government">'+node["jurisdiction"]+'</div>');
      $container.append('<div class="wizard__header--title">'+node["Name"]+'</div>');
      $container.append('<div class="wizard__copy--section_intro">'+node["Description"]+'</div>');
      $container.append('<div class="wizard__illustration"><img src="'+node["illustration"]+'" alt="" /></div>');
      $myDiv.append($container);
      $wrapper.append($myDiv);

      nnid = node.buttons[0]["Destination Screen"]["target_id"];
      _render_node({nid:nnid});
    };
    
    

    _render_screen_question = function(node) {
      var $myDiv = $('<div id="nid-'+node["Nid"]+'" class="wizard-node node-'+node["screen-type"]+'">');
      $myDiv.css({'background-color' : '#'+node["Primary Color"]});

      var $container = $('<div class="container">');
      var $quesTitle = $('<div class="wizard__question"><div class="wizard__question-title">'+node["title"]+'</div></div>');
      $container.append($quesTitle);
      
      $quesSelect = $('<a class="wizard__question-selection"></a>');
      $container.append($quesSelect);
      
      $quesTitle.click(function(e) {
        e.preventDefault();
        if($myDiv.hasClass('collapsed')) {
          $myDiv.addClass('expanded');
          $myDiv.removeClass('collapsed');
        } else if($myDiv.hasClass('expanded')) {
          $myDiv.removeClass('expanded');
          $myDiv.addClass('collapsed');
        }
      });
      $quesSelect.click(function(e) {
        e.preventDefault();
        $quesTitle.trigger('click');
      });
      

      var actionButtons = [];
      var helpButtons = [];

      $.each(node.buttons, function(key, data){
        if(data["Style"]["#markup"]==="Button") {
          actionButtons.push(data);
        } else if(data["Style"]["#markup"]==="Link") {
          helpButtons.push(data);
        }
      });

      if(actionButtons.length > 0) {
        var $abWrapper = $('<div class="wizard__buttons">');

        $.each(actionButtons, function(key, data){
          $abWrapper.append(_render_action_button(data, node["Nid"]));
          if(data["Button Result Text"]) {
            var $buttonResultText = $('<div class="wizard__button--result">');
            $buttonResultText.append(data["Button Result Text"]["#markup"]);
            
            var link1 = data["CTA Link 1"];
            var link2 = data["CTA Link 2"];
            var link3 = data["CTA Link 3"];
            if (link1 !== undefined) {
              $buttonResultText.append('<a target="_blank" href="' + link1['#element']['url'] + '" class="wizard__button">' + link1['#element']['title'] + '</a>');
            }
            if (link2 !== undefined) {
              $buttonResultText.append('<a target="_blank" href="' + link2['#element']['url'] + '" class="wizard__button">' + link2['#element']['title'] + '</a>');
            }
            if (link3 !== undefined) {
              $buttonResultText.append('<a target="_blank" href="' + link3['#element']['url'] + '" class="wizard__button">' + link3['#element']['title'] + '</a>');
            }
            $abWrapper.append($buttonResultText);
          }
        });
        $container.append($abWrapper);
      }

      if(node["tip"] && node["tip"] !== "") {
        if(helpButtons.length <= 0) {
          $container.append('<div class="wizard__tip wizard__tip--padding">'+node["tip"]+'</div>');
        } else {
          $container.append('<div class="wizard__tip">'+node["tip"]+'</div>');
        }
      }

      $myDiv.append($container);

      if(helpButtons.length > 0) {
        $.each(helpButtons, function(key, data){
          var $chDiv = $('<div class="wizard__contextual_help" data-bgcolor="#'+node["Contextual Color"]+'">');
          var $chContainer = $('<div class="container">');
          var $chHeader = $('<h3 class="help-header">'+data["Button Title"]["#markup"]+ '</h3>');

          //getting node for contextual help
          nodes = getObjects(wizardData, "Nid", data["Destination Screen"]["target_id"]);
          node = nodes[0];

          var $chContent;
          if(node["screen-type"] === 'address lookup') {
            $chContent = _render_address_lookup({node: node});
          } else {
            $chContent = $('<div class="help-content">');
            $chContent.append('<h3>'+node["title"]+'</h3>');
            $chContent.append(node["Description"]);
          }

          $chHeader.click(function(e) {
            e.preventDefault();
            $chDiv.toggleClass('wizard__contextual_help--open');
            $chContent.stop().slideToggle();
            if($chDiv.hasClass('wizard__contextual_help--open')) {
              $chDiv.css({'background-color': "#"+node["Contextual Color"]});
            } else {
              $chDiv.css({'background-color': "transparent"});
            }
          });
          $chContainer.append($chHeader);
          $chContainer.append($chContent);
          $chDiv.append($chContainer);
          $myDiv.append($chDiv);
        });
      }
      $wrapper.append($myDiv);
    };

    _render_action_button = function(button, nid) {
      var $objButton = $('<a class="wizard__button">');

      $objButton.text(button["Button Title"]["#markup"]);
      $objButton.attr('data-target_id', button["Destination Screen"]["target_id"]);
      $objButton.attr('href', "#"+nid);
      if(button["Button Result Text"]) {
        $objButton.attr('data-has_result_text', "1");
        $objButton.attr('data-result_text_order', parseInt(button["Button Result Order"]["#markup"]));
      }
      $objButton.click(function(e) {
        e.preventDefault();
        var nid = $objButton.attr('data-target_id');
        var $wizardNode = $objButton.parents('.wizard-node');
        if($objButton.hasClass('wizard__button--selected')) {
          $wizardNode.removeClass('expanded');
          $wizardNode.addClass('collapsed');
          scrollToElement($('#nid-'+nid), 400, -100);
        } else {
          if($wizardNode.hasClass('wizard__question--selected')) {
            $wizardNode.nextAll('.wizard-node').remove();
            $('.wizard__button--selected', $wizardNode).removeClass('wizard__button--selected');
            $objButton.addClass('wizard__button--selected');
          } else {
            $wizardNode.addClass('wizard__question--selected');
            $objButton.addClass('wizard__button--selected');
          }
          $wizardNode.removeClass('expanded');
          $wizardNode.addClass('collapsed');
          $('.wizard__question-selection', $wizardNode).text($objButton.text());
          _render_node({nid:nid});
          scrollToElement($wizardNode.next('.wizard-node'), 400, -100);
        }
      });
      return $objButton;
    };

    _render_contextual_help = function(options) {
      var $myDiv = $('<div id="nid-'+node["Nid"]+'" class="wizard-node node-contextual_help">');
      $container = $('<div class="container">');
      $myDiv.css({'background-color' : '#'+node["Primary Color"]});
      $container.append('<div class="wizard__title"><h3>'+node["title"]+'</h3></div>');
      $container.append('<div class="node-description">'+node["Description"]+'</div>');
      $myDiv.append($container);
      $wrapper.append($myDiv);
    };


    _render_address_lookup = function(options) {
      node = options.node;
      var $myDiv = $('<div class="help-content node-address_lookup nid-'+node["Nid"]+'">');

      $addressLookup = $('<div class="address__lookup">');

      $addressForm = $('<form class="address__lookup--form">');
      $addressForm.append('<input type="text" id="streetAddress" name="streetAddress">');
      $addressForm.append('<div class="node-description">'+node["Description"]+'</div>');
      $addressForm.append('<input type="submit" id="streetAddressSubmit" name="streetAddressSubmit">');
      $addressLookup.append($addressForm);

      $checkingAddress = $('<div class="address__lookup--checking">');
      $checkingAddress.css({'background-color': '#'+node["Contextual Color"]});
      $checkingAddress.append('<i class="icon-checking">');
      $checkingAddress.append('checking address...');
      $addressLookup.append($checkingAddress);
      
      $addressResult = $('<div class="address__lookup--results">');
      $addressResultText = $('<div class="address__lookup--results-text">');
      $addressResult.append($addressResultText);
      
      var $addressResetButton = $('<a class="reset__button">');
      $addressResetButton.text("ENTER A DIFFERENT ADDRESS");
      $addressResetButton.attr('href', "#reset");
      $addressResetButton.click(function(e) {
        e.preventDefault();
//        $(".address__lookup--form").reset();
        $('.address__lookup').removeClass('checking show-results').addClass('show-form');
      });

      $addressResult.append($addressResetButton);
      $addressLookup.append($addressResult);

      $myDiv.append($addressLookup);
      

      $addressForm.submit(function(e) {
        e.preventDefault();

        var address = $( "input[name='streetAddress']", $(this) ).val();
        if (address === '') {
          alert('Please provide an address or intersection.');
          $("#streetAddress").focus();
          return false;
        }

        // Check the address to make sure it follows the rules for addresses or intersections
        // Setup the regular expression.
        addressRegex = /^(\d{1,6}\s+\w{1,30}.{0,10})|(\w{1,30}\s{0,5}(\b[Aa][Nn][Dd]\b|\b[Aa][Tt]\b|\/|&|\\|\|)\s{0,5}\w{1,30})/;
        // Trim whitespace.
        trimmedAddress = address.replace(/^\s+|\s+$/g, '') ;
        // Strip out fractional addresses such as 1/2 and 1/4, etc.
        trimmedAddress = trimmedAddress.replace(/\b\d{1}\/\d{1}\b/g,'');
        // Strip out all characters other than digits, alpha, or intersection delimiters
        // The acceptable delimiters are: / \ | AND AT and &
        trimmedAddress = trimmedAddress.replace(/[^\w\s&\|\/\\]/g,'');
        // Strip out zip codes and state codes - these are not needed and can cause mismatches.
        trimmedAddress = trimmedAddress.replace(/(\d{5}$|\b[Cc][Aa]\b)/g,'');
        $("#streetAddress").val(trimmedAddress); // Update address field with formatted address.
        if (trimmedAddress.match(addressRegex) === null) {
          alert('Please provide a house number and street name or an intersection.');
          $("#streetAddress").focus();
          return false;
        }
        // Now check the address to see if they mixed an address with an intersection which is invalid.
        if (trimmedAddress.match(/^(\d{1,6}\s+\w{1,30}.{0,10})/) !== null) {
        // Check for intersection delimiters.
          if (trimmedAddress.match(/(\b[Aa][Nn][Dd]\b|\b[Aa][Tt]\b|\/|&|\\|\|)/) !==null) {
            alert('Please enter either an address or an intersection, not both.');
            $("#streetAddress").focus();
            return false;
          }
        }
        
        $('.address__lookup').removeClass('show-form show-results').addClass('checking');
        var laAddressAPI = "/labp/address-lookup/" + address;
        $.getJSON( laAddressAPI, function( json ) {
          if(json.inLA == '1'){
//            alert("Your business is in the city of Los Angeles.");
            $('.address__lookup--results-text').empty().append('<h3>Your business is in the City of Los Angeles.</h3>');
            $('.address__lookup').removeClass('show-form checking').addClass('show-results');
          }
          if(json.inLA == '0'){
            $('.address__lookup--results-text').empty().append('<h3>Your business is not in the City of Los Angeles.</h3><p>Your business is not in the city of Los Angeles.\n\nYou can continue to get your guide to register as a business with the County, State and Federal government. Be sure to check with your local municipality to complete your business registration there.</p>');
            $('.address__lookup').removeClass('show-form checking').addClass('show-results');
          }
        });

        return false;
      });
      return $myDiv;
    };


    _render_confirmation = function(node) {
      var $myDiv = $('<div id="nid-'+node["Nid"]+'" class="wizard-node node-'+node["screen-type"]+'">');
      $myDiv.css({'background-color' : '#'+node["Primary Color"]});

      $container = $('<div class="container">');
      $container.append('<div class="wizard__header--title">'+node["Name"]+'</div>');;
      $container.append('<div class="wizard__confirmation--title">'+node["title"]+'</div>');
      $container.append('<div class="wizard__illustration"><img src="'+node["illustration"]+'" alt="" /></div>');
      $container.append('<div class="wizard__confirmation--copy">'+node["Description"]+'</div>');
      
      $printButton = $('<a href="#print" class="wizard__button wizard__button-print">Print</a>');
      $emailButton = $('<a href="#email" class="wizard__button wizard__button-email">Email</a>');
      $emailForm = $('<div class="wizard__checklist--email">');
      $emailForm.append($('#sbp-wizard-email-form'));
      $emailForm.append('<div id="message-response"></div>');
      $container.append($printButton);
      $container.append($emailButton);
      $container.append($emailForm);
      
      $emailButton.click(function(e) {
        e.preventDefault();
        $(this).toggleClass("selected");
        $('#sbp-wizard-email-form').stop().slideToggle();
      });
      
      $printButton.click(function(e) {
//        e.preventDefault();
//        alert("A");
        window.print();
//        alert("B");
      });
      
      
      $wizard__result = $('<div class="wizard__result">'); 
      
      $buttons = $('a.wizard__button--selected[data-has_result_text]');
      $buttons.sort(function (a, b) {
          var contentA =parseInt( $(a).attr('data-result_text_order'));
          var contentB =parseInt( $(b).attr('data-result_text_order'));
          return (contentA < contentB) ? -1 : (contentA > contentB) ? 1 : 0;
      });
      
      var i = 1;
      $buttons.each(function() {
        var $item = $(this);
        $wizard__result.append('<div class="result-step"><div class="step-content"><div class="step-number">Step '+ i + '</div>' + $item.next('.wizard__button--result').html()+'</div></div>');
        i++;
      });
      $container.append($wizard__result);
      
      $startoverButtonWrapper = $('<div class="wizard__startover">');
      $startoverButton = $('<a href="#startover" class="wizard__button wizard__button-startover">');
      $startoverButton.text('Start Over');
      $startoverButtonWrapper.append($startoverButton);
      $container.append($startoverButtonWrapper);
      $startoverButton.click(function(e) {
        _render_wizard();
      });
      
      $myDiv.append($container);
      $wrapper.append($myDiv);
    };
    
    $('#sbp-wizard-email-form').submit(function() {
      $('#message-response').empty();
      
      var email = 'email=' + $( "input[name='emailResults']" ).val();
      var emailValidate = '&emailvalidate=' + $( "input[name='emailCheck']" ).val();
      var emailToken = '&emailtoken=' + $( "input[name='form_token']" ).val();
      var message = $('.wizard__result').html();
      
      var strip = ['%5Cn', '%5C%22'];
      var replacement = ['', '%22'];
      for (var ind = 0; ind < strip.length; ind++) {
        message = message.split(strip[ind]).join(replacement[ind]);
      }
      message = '&message=' + message;
      console.log(message);
      $.ajax({
          url: '/labp/wizard-email',
          dataType: 'text',
          type: 'post',
          contentType: 'application/x-www-form-urlencoded',
          data: email + emailValidate + emailToken + message,
          success: function( data, textStatus, jQxhr ){
            console.log(data);
            $("#wizard-email").addClass("element-invisible");
            $( "#message-response" ).html( "Your message has been sent." );
          },
          error: function( jqXhr, textStatus, errorThrown ){
            console.log( errorThrown );
            $( "#message-response" ).html( "There was an error sending your message. If you continue to experience problems, please contact the site administrator." );
          }
      });
      
      return false;
    });
    
    
    function getObjects(obj, key, val) {
      var objects = [];
      for (var i in obj) {
        if (!obj.hasOwnProperty(i)) continue;
        if (typeof obj[i] == 'object') {
            objects = objects.concat(getObjects(obj[i], key, val));
        } else if (i == key && obj[key] == val) {
            objects.push(obj);
        }
      }
      return objects;
    }
    
    function scrollToElement(selector, time, verticalOffset, callback) {
      time = typeof(time) != 'undefined' ? time : 500;
      verticalOffset = typeof(verticalOffset) != 'undefined' ? verticalOffset : 0;
      element = $(selector);
      offset = element.offset();
      offsetTop = offset.top + verticalOffset;
      t = ($(window).scrollTop() - offsetTop);
      if (t <= 0) t *= -1;
      t = parseInt(t * .5);
      if (t < time) t=time;
      if (t > 1500) t=1500;

      $('html, body').stop().animate({
        scrollTop: offsetTop
      }, t, '', callback);
    }
  });

})(jQuery, Drupal, this, this.document);